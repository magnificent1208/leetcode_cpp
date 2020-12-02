#include <map>

//Use of map in C++

//Part#1 基本构造
std::map<int, std::string> mapPerson；

//Part#2 插入数据的三种方式
// 1.pair
mapPerson.insert(pair < int,string > (1,"Jim"));
// 2.value_type
mapPerson.insert(std::map < int, std::string > ::value_type (2, "Tom"))
// 3.tuple 
mapPerson[3] == "Jerry"

//Part#3 遍历方式



