/*
 * Author: chengx
 * Date: 2019-7-15 14:55:52
 * Description: 
 */

#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "Product.h"

//手机AbastractFactory基类
class CellphoneFactory
{
public:
    virtual Cellphone* MakeCellphone() const
    {
        return new Cellphone;
    }
    virtual Brand* MakeBrand() const = 0;
    virtual OS* MakeOS() const = 0;
    virtual CPU* MakeCPU() const = 0;
};

//iphone工厂
class IphoneFactory : public CellphoneFactory
{
public:
    virtual Brand* MakeBrand() const { return new IphoneBrand; }

    virtual OS* MakeOS() const { return new IOS; }
    
    virtual CPU* MakeCPU() const { return new A12XCPU; }
};

//小米工厂
class XiaoMiFactory : public CellphoneFactory
{
public:
    virtual Brand* MakeBrand() const { return new XiaoMiBrand; }

    virtual OS* MakeOS() const { return new Android; }
    
    virtual CPU* MakeCPU() const { return new ARMCPU; }
};

//华为工厂
class HuaweiFactory : public CellphoneFactory
{
public:
    virtual Brand* MakeBrand() const { return new HuaweiBrand; }

    virtual OS* MakeOS() const { return new Android; }
    
    virtual CPU* MakeCPU() const { return new ARMCPU; }
};

//手机制造商, 即client
class CellphoneMake
{
public:
    //组装过程, AbstractFactory模式中, 这块保持不变, 与builder模式不同
    Cellphone* create(const CellphoneFactory& factory)
    {
        Cellphone *phone = factory.MakeCellphone();
        Brand *brand = factory.MakeBrand();
        OS *os = factory.MakeOS();
        CPU *cpu = factory.MakeCPU();

        phone->AddBrand(brand);
        phone->AddCPU(cpu);
        phone->AddOS(os);

        return phone;
    }
};

#endif