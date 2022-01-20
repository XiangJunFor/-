#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//继承中同名处理方式
class base{
	public :
	 base(){
	 	M_a=100;
	 }
	  void func(){
		cout<<"base 调用"<<endl; 
	}
	void func(int a){
	 	 
	 	 cout<<"func(int a) 调用"<<endl; 
	 	
	 } 
	int M_a;
}; 
class son :public base{
	
	public :
	
	void func(){
		cout<<"son 调用"<<endl; 
	}
	
	son(){
		M_a=200;
	} 
	int M_a;
};
//成员同名处理 
void test01(){
	
	son s;
	cout<<"son 下 :"<<s.M_a<<endl; 
	//如果子类对象 要访问父类成员 需要加作用域 
	cout<<"base下 :"<<s.base::M_a<<endl; 
}
//成员函数同名处理
void test02(){
	son s;
	//同理加作用域 
	//如果子类中出现和父类同名的成员函数,子类的同名成员会隐藏父类所有 同名成员函数
	//想访问父类的隐藏函数 加作用域 
	s.base::func();
   	s.base::func(10);
} 
int main(){
	// test01();
	
	 test02();
	system("pause");
	return 0; 
} 
