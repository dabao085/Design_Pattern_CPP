#hello Design Pattern
- A small demo for design patter using C++  
- 设计模式与其说是方法，更是一种思想，充斥着解耦合，所以大多数模式都能看到class的组合，而继承和派生的作用也体现得淋漓尽致，一个基类指针简直是万能。

#1. Adapter  
- Adaptor模式，用于class A需要但无法直接使用class B,可以定义class C:public A, private B，此时C可以实现A和B的通信。  
此外
```
class C:public A
{
public:
	C();
	~C();
private;
	B* pB;
};
```
都可以实现Adapter模式。
- 由于目前我使用的大多都是内部的库，在类的设计上充分考虑到使用其他类和库的问题，故Adapter模式使用并不多，适合使用第三方类库的情况。  

#2. Bridge  
- Bridge模式的功能是，将class的抽象(Abstract)和实现(Implement)分离开，其难以理解的地方在于，class的抽象与实现相分离，不就是基类和子类出现的意义吗。所以使用好Bridge模式的关键在于如何把握抽象与实现这个度，哪些放在抽象，哪些放在实现。
```
class RefinedAbstractionA:public Abstraction
{
public:
	RefinedAbstractionA(AbstractionImplement* imp);
	virtual void Operation();
	virtual ~RefinedAbstractionA();
private:
	AbstractionImplement* _imp;
};
```
其中RefinedAbstractionA为具体抽象类，AbstractionImplement为抽象的实现类(比较拗口，其实就是做了两套的父子类，抽象和实现的父子类)，RefinedAbstractionA持有一个AbstractionImplement指针对象。
- 在开发中由于没有产生大量源码变动的场景，故没有使用到该模式，但是在我的理解中，Bridge应该是最能给我醍醐灌顶感觉的模式，OOP的思想跃然纸上。

#3. Composite  
- Composite模式很像树形结构，有递归属性，其作用就是对某class A以及`vector<A> vecA`一视同仁，十分适合描述复杂的结构。其实现也很简单

```
class A;
class ALeaf:public A //表示叶子节点(无子节点)
{

};

class Composite:public A
{
private:
	vector<A*> _pVec;	//持有一个vector，有子节点	
};
```

- 实际开发中并未使用该模式，适用于复杂的对象结构，比如图像应用。

#4. Singleton  
- Singleton模式被誉为最简单最实用的模式，因为其实现简单而且应用场景比较多，大量的方法快速直接地访问同一个对象，而且该类在整个程序中只需要实例化一个对象。

```
class Singleton
{
public:
	static Singleton* GetInstance();
	Singleton();
	~Singleton();
private:
	static Singleton* _pInstance;
};
```

最重要的是理解static，正是由于Singleton模式简单好用，开发中使用宏定义更为方便。
```
#define DECLARE_SINGLETON(ClassName) \
public: \
    static ClassName& getInstRef() { \
         static ClassName _instance; \
         return _instance; \
    } \
    static const ClassName& getInstConst() { \
         return getInstRef(); \
    } \
    static ClassName* getInstPtr() { \
         return &getInstRef(); \
    } \
    const ClassName& operator=(const ClassName&) { \
         return getInstRef(); \
    } \
private: \
    ClassName(const ClassName&); \
    static void operator delete(void *p, size_t n) { \
         throw -1; \
}
```

使用时
```
class SingletonTest
{
	DECLARE_SINGLETON(SingletonTest)
public:
	XXX
private:
	XXX
};
```

#5. Factory  
- Factory模式，用于生产同一父类的子类对象，十分便于降低对象创建时的复杂度。  
- 在开发中我曾遇到，有三种不同类型的分组对象（比如：1分组，2分组，3分组），这些对象都执行各自重载的方法（比如分组迁移），此时相对于switch-case或者if-else，使用Factory模式在创建分组对象时，创建过程十分清晰。

#6. Decorator
- Decorator模式在我看来十分可爱，把要装饰的对象包在自己里面，可以包多层，有个疑惑就是如果我使用的是第三方类库怎么办？是不是重新定义一个class继承于它呢。
- 使用方法也很简单，定义时，在实现自己方法之前调用其他class的方法，等于给该方法套了一层(也就是装饰的部分)。

```
class ConcreteComponent:public Component
{
public:
	void Operation();
};

class ConcreteDecoratorA:public Decorator
{
public:
	void Operator()
	{
		this->_mPComp->Operation();
		this->AddOperation();
	}
	void AddOperation();
};
```

- 实际开发中也未用到该模式，反正大家都是一个基类指针，想变成什么样的子类都可以，太TM灵活了！

#7. Facade
- 觉得Facade模式是最没有用的一个，无非就是子系统类持多有个其他类的对象指针，然后在接口中通过指针调用这些类的方法，最简单的解耦合操作。

```
class Compiler
{
public:
	Compiler();
	~Compiler();

	void Operation();
private:
	Paser* pPaser;
	GrammerTree* pGrammerTree;
	Token* pToken;
};
```

- 话说Facade模式开发中用到的最多，都是很自然的方式。

#8. Flyweight
- Flyweight和Decoractor有点相似，表示外部状态下的内部状态，其中内部状态是共享的，外部状态做为参数传进来，外部状态构建成一颗BTree(代码里表示为vector). demo不足之处在于没有展示多个内部状态共享的特征，相当于一个字符只用了一个字体。后续需要补充。