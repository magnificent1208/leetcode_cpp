/*
C++ 基本语法：
    方法 Methods
        类 class
            对象 object
                即时变量 instance variable
*/

//The C++ language defines several headers, 
// which contain information that is either necessary or 
// useful to your program. For this program, the header <iostream> is needed
#include <iostream>

//using namespace as std
// tells the compiler to use the std namespace. 
// Namespaces 是啥后面会解释，此处记住 使用一个叫做std的命名空间
// std = standard 
using namespace std; 

int main() //main function (where program execution begins)
{
    cout << "Hellow world"; //causes the message "Hello World" to be displayed on the screen
    return 0; //erminates main( )function & causes it to return the value 0 to the calling process
}

/*
compile and execure C++ program
    open text editor and add the code 
    save the file as __.cpp
    open a command prompt and go to the dir where you saved the file
    type the command provied. The compiler will generate a executale file 
    run the executale file 
    You should be able to see 'Hello World' printed on the window

$ g++ hw.cpp -o hw
$ ./hw
Hello World
*/

/////////////////////////////////////////////////////////////

