#include <iostream>
#include <string>
#include <stdlib.h> 

using namespace std; 
//加号运算符重载

class Person{
  public:
// 成员函数重载+号
 //  Person operator+(Person &p){
//   	 Person temp;
//   	 temp.M_a=this->M_a+p.M_a;
//   	 temp.M_b=this->M_b+p.M_b;
//   	 return temp;
//   }
   int M_a;
   int M_b;
};
// 全局函数重载+号 
Person operator+(Person &p1,Person &p2){
	  Person temp;
   	 temp.M_a=p1.M_a+p2.M_a;
   	 temp.M_b=p1.M_b+p2.M_b;
   	 return temp;
}
 //函数重载
 Person operator+(Person &p1,int num){
 	Person temp;
 	temp.M_a=p1.M_a+num; 
 	temp.M_b=p1.M_b+num; 
 	
 }
  void test01(){
  	Person p1;
  	p1.M_a=10;
  	p1.M_b=20;
  	Person p2;
	p2.M_a=10;
	p2.M_b=10;
	//成员函数本质调用为  Person P3=p1.operator+(p2)
	// 全局函数本质调用   Person p3=operator(p1+p2)
      Person p3=p1+p2;
     //运算符重载也可以发生函数重载 
      Person p4=p1+20;
  	cout <<p4.M_a<<endl; 
  	cout <<p4.M_b<<endl; 
  } 

int main(){
  test01();
 
	system("pause");
	return 0;
}
