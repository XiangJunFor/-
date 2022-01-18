#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//左移运算符重载
//左移运算符配合友元可以实现输出自定义数据类型 

class Person{
	 friend  ostream & operator<<(ostream &cout,Person &p);
	 
	 public :
	 Person (int a,int b){
	 	M_a=a;
		M_b=b; 
	 } 
	  private :
	//利用成员函数重载 ,无法实现左移重载 
	  int M_a;
	  int M_b;	
}; 
//只能利用全局函数重载
 ostream & operator<<(ostream &cout,Person &p){
 	
 	 cout<<" p.M_a : "<<p.M_a<<" p.M_b : "<<p.M_b;
 	 return cout; 
 }
void test01(){
	Person p(10,10);
	
	cout<<p<<endl;
	//链式编程思想 
} 
int main(){
	 test01();
	
	system("pause");
	
	return 0; 
} 
