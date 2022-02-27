#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;

//类模板和函数模板区别

template <class nametype,class agetype=int>
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
//1.类模板没有自动类型推导使用方式 
void test01(){
	//peson p("孙悟空",999);
	person<string,int>p("孙悟空",1000); //需要显性使用类型 
	p.showperson(); 
} 
//2.类模板在模板参数列表中可以用默认参数
void test02(){
	person<string>p1("猪八戒",666);
	p1.showperson(); 
	
} 

int main(){
	test01(); 
	test02();
	system("pause");
	return 0;
} 
