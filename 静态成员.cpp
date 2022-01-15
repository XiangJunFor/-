#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//静态成员变量
class Person{
	public:
	
	//1.所有对象共享同一份数据
	//2.编译阶段就分配好内存
	//3.类内声明,类外初始化 
	static int M_A;
	//静态成员变量也是有访问权限的 
}; 

int Person::M_A=100; 

void test01(){
	
	 Person p;
	 cout<<p.M_A<<endl;
	
	 Person p2;
	 p2.M_A=200; 
	 cout<<p.M_A<<endl;
}

void test02(){
	//静态成员变量  不属于某个对象上  所有对象都共享同一份数据
	//因此静态成员变量有二种访问方式
	
	//1.通过对象进行访问
	  Person p;
	//  cout<<p.M_A <<endl;
	  
	//2.通过类名进行访问
	 cout<<Person::M_A<<endl; 
	
	
}
  int main(){
    // test01();
	  test02();
	system("pause");
	return 0; 
} 

