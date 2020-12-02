/*
Variable Scope 变量作用域：
    A scope is a region of the program 
    and broadly speaking there are three places, 
    where variables can be declared
    作用域是程序的区域(位置)，划分为三个维度，描述变量作用的区域(有效范围)
        local variables
        formal parameters
        global variable

*/

//Local variables

#include <iostream>
using namespace std;

int g; //global

int main() 
{
    int a=1, b=3, l; //local
    l = a + b;
    g = a + b*2;

    cout<< l;
    cout<< g;

    return 0;
}

//**notice: 
//    When a local variable is defined, it is not initialized by the system, you must initialize it yourself. 
//    Global variables are initialized automatically by the system when you define them as follows:
        // pointer = null