#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//静态成员函数
// 1.所有对象共享同一函数
//2.静态成员函数只能访问静态成员变量 
//同样也有访问权限 
class Person{
	public:
	 //静态成员函数 
    static void func(){
    	M_A=100;//静态函数可以访问静态变量
		//M_B=100; 非静态变量,无法区分哪个对象下的M_B 
    	cout<<"静态成员函数调用"<<endl; 
    } 
  	static int M_A; //静态成员变量
	 int  M_B;//非静态成员变量 
}; 


int Person::M_A=0;

void test01(){
	//通过对象进行访问
	Person p;
	p.func();
	
	//通过类名访问
	 Person::func();
	
	
} 

 int main(){
    test01();
	system("pause");
	return 0; 
} 
