#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;

//类模板基本语法
//template <typename T>
//类
//作用:建立一个通用类,类中的成员数据类型可用不具体制定,用一个虚拟的类型表示
//类模板和函数模板语法非常相似,在声明模板template后面加类就是类模板 
template <class nametype,class agetype>
class person {
    public:
    person(nametype name,agetype age){
    	this->my_name=name;
    	this->my_age=age;
    }
    void showperson(){
    	cout<<this->my_name<<this->my_age<<endl;
    }
    string  my_name;
    int     my_age;

};
 void test01(){
  	person<string,int>p1("wyyy",500);
  	p1.showperson();
 }
int main(){
	test01();
	
	system("pause");
	return 0;
} 
