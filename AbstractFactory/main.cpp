/*
 * Author: chengx
 * Date: 2019-7-15 14:53:23
 * Description:
 */

#include "Product.h"
#include "Factory.h"
using namespace std;

int main(int argc, char *argv[])
{
    //手机制造商
    CellphoneMake maker;

    IphoneFactory iphone;
    XiaoMiFactory xiaomi;
    HuaweiFactory huawei;

    Cellphone *phone = maker.create(iphone);
    phone->PrintCellphoneInfo();
    cout << endl;

    phone = maker.create(xiaomi);
    phone->PrintCellphoneInfo();
    cout << endl;
    
    phone = maker.create(huawei);
    phone->PrintCellphoneInfo();

    return 0;
}