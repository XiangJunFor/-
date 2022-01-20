#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//静态和非静态成员处理方式一样
//子类直接访问
//子类访问父类加作用域

class base{
	public :
	
	static void func(){
		cout<<"base :"<<endl;
	}
	static int m_a;
}; 
 int base :: m_a=100;

class son :public base{
	public :
		static void func(){
		cout<<"son :"<<endl;
	}
	static int m_a; 
};
  int son::  m_a=200;
  
  //同名静态成员属性 
  void test01(){
  	//1.通过对象访问 
  	son s;
	cout<<"son  下 :"<<s.m_a<<endl;
	cout<<"base 下 :"<<s.base::m_a<<endl; 
	//2.通过类名访问
	cout<<"如果类名访问:"<<endl; 
	cout<<"son  下 :"<<son::m_a<<endl;
	//第一个::是表示通过类名访问第二个::是作用域 
	cout<<"base 下 :"<<son::base::m_a<<endl; 
  	
  } 
  //同名函数同理 
  void test02(){
  	 son s;
  	 s.func();
  	 son::func();
  	 son::base::func();
  } 
int main(){
	
    //test01();
	 test02();
	system("pause");
	return 0; 
} 
