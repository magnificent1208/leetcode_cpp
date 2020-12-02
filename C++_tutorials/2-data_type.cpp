/*
1. 内置数据类型 build-in data type
    从以下三个维度描述一个数据类型：
        Type 类型 ：char
        Typical bit width 储存值所占内存(比特) ：1bit
                **review 1TB = 1024 MB; 1GB = 1MB; 1MB= 1024KB; 1KB =1024Byte; 1Byte = 8bit
        Typical range 储存值范围：0-255
2. 修饰符 modifier 
        修饰符用于改变基本类型的含义，这个后面会单独说，这里就记住，数据类型前面还可以加修饰符
    signed
    unsigned
    short
    long
3. typedef Declarations typedef类型声明
        You can create a new name for an existing type using typedef.
4. Enumerated Types 枚举类型 ##########没看懂 ：：：>o<：：：：没看懂没看懂没看懂没看懂没看懂没看懂

*/

//演示如何用sizeof操作符查该数据类型所占内存

#include <iostream>
using namespace std;

int main()
{
        cout << "size of char is " << sizeof(char) <<endl;

        return 0;

}