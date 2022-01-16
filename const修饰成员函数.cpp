#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;

//常函数
//常函数里面不能修改成员变量
//除非成员属性变量加mutable关键字 
class Person{
	public :
	//this 指针的本质是  指针常量  指针的指向是不能更改的
	//在成员函数后面加const 是为了修饰this 指针指向的值 不能修改 
	void  showPerson() const{
	 // this->	M_a=100;
	  this->M_b=100;
	 cout<<M_b<<endl; 
	
	}
	int M_a; 
	mutable int M_b; //特殊变量,即使是在常函数中也能修改这个值,加关键字mutable 
}; 
void test01(){
	Person p;
	p.showPerson();
	
}
//常对象 
//常对象,不可以调用普通成员函数 .因为普通成员函数 可以修改属性 
void test02(){
	               //常对象只能调用常函数 ,也只能修改常变量 
  const Person p1; //在对象前面加const  变成常对象 
	p1.M_b=200;  //在常对象下面也可以修改  
	cout<<p1.M_b<<endl; 
	
} 

int main(){
	
   test01();
	test02();
	system("pause");
	return 0; 
}
