/*
1.Variable Type 变量类型
    [basic]bool布尔值/char(1byte整数型)/int整数型/float浮点型/double双精度浮点型/void类型的缺失/wchar_t宽字符类型
    [other]Enumeration枚举/pointer指针/Array数组/Reference引用/data structure数据结构/class类   
        *will be covered in later chaper
2.Variable Definiton 变量定义
    A variable definition tells the compiler where 
    and how much storage to create for the variable. 
    定义变量就是告诉编译器需要 在哪&创造多少大小 给这个变量。
3.Varibale Declarartion 变量声明
    A variable declaration provides assurance to the compiler that 
    there is one variable existing with the given type and name 
    so that compiler proceed for further compilation 
    without needing complete detail about the variable. 
    向编译器表明变量的类型和名字。
4.Lvalues and Rvalues 左值与右值
    lvalue
        Expressions that refer to a memory location is called "lvalue" expression. 
        An lvalue may appear as either the left-hand or right-hand side of an assignment.
        指向内存位置的表达式（左右都可以存在)
    rvalue
         The term rvalue refers to a data value that is stored at some address in memory. 
         An rvalue is an expression that cannot have a value assigned to it 
         which means an rvalue may appear on the right- but not left-hand side of an assignment.
         存储在内存中某些地址的数值 （只能存在于右边）
*/

#include <iostream>
using namespace std;

extern int a,b,c; //declar

int main()
{
    int a, b, c; //define

    a = 10; //init
    b = 20;
    c = a + b;

    cout << c << endl;
    return 0;
}