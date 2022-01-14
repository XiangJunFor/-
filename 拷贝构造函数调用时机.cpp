#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



class Person{
	public :
		
		Person(){
			
			cout<<"Person默认构造函数调用"<<endl;
		}
		
		Person (int age){
			M_age=age;
			cout<<"Person 有参构造函数调用"<<endl; 
			
		}
		Person(const Person &p){
			
			M_age=p.M_age; 
			cout <<"Person拷贝构造函数调用"<<endl; 
		}
		~Person(){
			
			cout<<"Peron 析构函数调用"<<endl; 
		}
		int  M_age; 
}; 

//拷贝调用时机
//1.使用一个创建完毕的对象来初始化一个新对象

void   test01(){
	Person p1(10);
	Person p2(p1); 
	cout <<p1.M_age<<endl; 
	
}
//2.值传递的方式给函数参数传值

void dowork(Person p){
	
}

void test02(){
	
	Person p1;
	dowork(p1);  //直接调用函数也会调用拷贝函数,值传递的本质也就是复制一个副本.
	             //假如没有写拷贝函数,系统也会默认一个 
	            //相当于 Person p2=p1; person P3=Person (p1); 
}
//3.值方式返回局部变量
Person  dowork2(){
	Person p1;
	
	return p1;  //因为P1是局部变量,但是我们返回的是值,它会按照p1拷贝一个新的对象,返回给函数 
}

void test03(){
	
	Person P=dowork2(); //此代码在vs中可以构成拷贝函数,但是在dev中不可以,可能是因为协议不同 
	                    
}
int main(){
//	test01();
//	 test02();
     test03();
	system("pause");d
	return 0;
} 
