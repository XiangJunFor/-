#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//赋值运算符重载 

class Person{
	
	public :
	Person(int age){
		 
	M_age= new int(age);
	
	}
	~Person(){
		//删除堆区数据 ,同时注意浅拷贝的陷阱 重复释放  
		if(M_age!=NULL){
		    
		    delete M_age;
		    M_age=NULL;
		}	
	}
	
	//重载赋值运算符
	Person & operator+(Person &p){
		
		//先判断堆区数据释放干净了没 ,然后深拷贝
			if(M_age!=NULL){
		    
		    delete M_age;
		    M_age=NULL;
		}
		  M_age= new int(*p.M_age);	
		  //返回对象本身
		  return *this; 
	} 
	
	
	int *M_age;
}; 

	
void test01(){
	
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3=p2=p1;
	cout<<"p1的年龄为 :"<<*p1.M_age<<endl; 
	cout<<"p2的年龄为 :"<<*p2.M_age<<endl; 
	cout<<"p3的年龄为 :"<<*p3.M_age<<endl; 
	
}
int main(){
	
	 test01();
	 
	system("pause");
	
	return 0; 
} 
