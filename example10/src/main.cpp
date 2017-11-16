#include <iostream>
#include "mclmcr.h"
#include "matrix.h"
#include "mclcppclass.h"
#include "libmyFunc.h"
#include "mclmcrrt.h"

using namespace std;

int main() {

    // initialize lib，这里必须做初始化！
    if( !libmyFuncInitialize())
    {
        std::cout << "Could not initialize libmyFunc!" << std::endl;
        return -1;
    }

    // 用户输入2个数值
    double a, b;
    cout<<"Please input 2 numbers <a b> and then press enter: "<<endl;
    cin >> a;
    cin >> b;

    double c; //used to receive the result

    // 为变量分配内存空间, maltab只有一种变量，就是矩阵，为了和c++变量接轨，设置成1*1的矩阵
    mwArray mwA(1, 1, mxDOUBLE_CLASS); //1,1表示矩阵的大小, mxDOUBLE_CLASS表示变量的精度
    mwArray mwB(1, 1, mxDOUBLE_CLASS);
    mwArray mwC(1, 1, mxDOUBLE_CLASS);

    // 调用类里面的SetData函数给类赋值
    mwA.SetData(&a, 1);
    mwB.SetData(&b, 1);

    // 调用自己的函数，求和。
    myFunc(1, mwC, mwA, mwB);

    c = mwC.Get(1, 1);

    cout<<"The sum is: "<<c<<endl;

    // 后面是一些终止调用的程序
    // terminate the lib
    libmyFuncTerminate();

    // terminate MCR
    mclTerminateApplication();


    return EXIT_SUCCESS;
}




