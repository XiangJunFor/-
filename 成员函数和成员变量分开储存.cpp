#include  <iostream>
#include  <string>
#include  <stdlib.h> 
using namespace std; 

class Person {
	
	int M_a;  //非静态成员变量  属于类的对象 
	static int  M_b; //静态成员变量   不属于类的对象 
	void func(){}  //非静态成员函数     不属于类的对象 
    static void func1(){} //静态成员函数  不属于类的对象 
     
     
};
 int Person ::M_b=0;
void test01(){
	
	Person p;
	//空对象占用内存空间为1 
	//C++编译器会给空间对象也分配一个字节空间,是为了区分空对象占内存的位置
	//每个空对象也应该有个独一无二的的内存空间 
	cout<<"Person sizeof"<<sizeof(p)<<endl;
	
}
void test02(){
	
	
	Person p;
		cout<<"Person sizeof"<<sizeof(p)<<endl;
}
int main(){
	
	test02();
	
	
	system("pause");
	return 0; 
}
