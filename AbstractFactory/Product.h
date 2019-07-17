/*
 * Author: chengx
 * Date: 2019-7-15 14:30:30
 * Description:
 */

#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include <string>
#include <iostream>
//手机品牌类
class Brand
{
public:
    virtual std::string GetBrand() const = 0;
    virtual ~Brand(){}
};

//手机CPU类
class CPU
{
public:
    virtual std::string GetCPU() const = 0;
    virtual ~CPU(){}
};

//手机操作系统类
class OS
{
public:
    virtual std::string GetOS() const = 0;
    virtual ~OS(){}
};

////////////////////////////////////////////////////
class IphoneBrand : public Brand
{
public:
    virtual std::string GetBrand() const { return std::string("Iphone SX"); }
};

class XiaoMiBrand : public Brand
{
public:
    virtual std::string GetBrand() const { return std::string("XiaoMi SX"); }
};

class HuaweiBrand : public Brand
{
public:
    virtual std::string GetBrand() const { return std::string("Huawei SX"); }
};

////////////////////////////////////////////////////
class ARMCPU : public CPU
{
public:
    virtual std::string GetCPU() const { return std::string("ARM CPU"); }
};

class A12XCPU : public CPU
{
public:
    virtual std::string GetCPU() const { return std::string("A12X CPU"); }
};

////////////////////////////////////////////////////
class IOS : public OS
{
public:
    virtual std::string GetOS() const { return std::string("IOS"); }
};

class Android : public OS
{
public:
    virtual std::string GetOS() const { return std::string("Android"); }
};

//手机类
class Cellphone
{
public:
    //组装手机品牌
    void AddBrand(const Brand* brand){ brand_ = brand; }
    //组装手机CPU
    void AddCPU(const CPU* cpu){ cpu_ = cpu; }
    //组装手机操作系统(OS)
    void AddOS(const OS* os){ os_= os; }
    //打印手机信息
    void PrintCellphoneInfo()
    {
        std::cout << "Brand: " << brand_->GetBrand() << std::endl;
        std::cout << "CPU: " << cpu_->GetCPU() << std::endl;
        std::cout << "OS: " << os_->GetOS() << std::endl;
    }
private:
    const Brand* brand_;
    const CPU* cpu_;
    const OS* os_;
};

#endif