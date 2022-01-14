#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 
//调用构造函数规则
//默认情况下c++会给一个类至少添加三个函数 
//1.默认构造函数(无参 函数体为空)
//2.默认析构函数(无参 函数体 为空) 
//3.默认拷贝函构造数对属性进行值拷贝 

//如果你写了一个有参构造函数,c++不在提供无参构造函数,但是提供拷贝构造函数
//如果用户定义拷贝构造函数,c++不在提供任何函数


class Person{
	public :
		
		Person(){
			
			cout<<"Person默认构造函数调用"<<endl;
		}
		
		Person (int age){
			M_age=age;
			cout<<"Person 有参构造函数调用"<<endl; 
			
		}
	//	Person(const Person &p){
//			
//			M_age=p.M_age; 
//			cout <<"Person拷贝构造函数调用"<<endl; 
//		}
		~Person(){
			
			cout<<"Peron 析构函数调用"<<endl; 
		}
		int  M_age; 
}; 

void test01(){
	Person p;
	p.M_age=18;
	
  Person p1(p);
   cout<<p1.M_age<<endl;
	
	
	
} 
int main(){
	test01(); 
	
	
	
	system("pause");
	return 0;
}
