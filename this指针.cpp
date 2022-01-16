#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;

 //this 指针
 //1.解决名称冲突
 //2.返回对象本身用 *this
 class Person{
 	
 	public :
 		
 	Person (int age){
 		//this指针 指向 被调用的成员函数 所属的对象 
 		this->age=age;
 	}
 	int age;
 	//以引用的方式返回，返回的是这个对象本身，
	//如果不带引用，返回的就不是这个对象本身，而是拷贝出来的副本
	//值方式返回会创建一个拷贝副本 
 	Person& PersonAdd(Person &p){
 		
 		this ->age+=p.age;
 		//this 指向的是P2的指针,而  *this 指向P2本体 
 		return *this;
 	}
 	
 }; 
  //1.解决名称冲突
 void test01(){
 	
 	Person p(18);
 	
  cout <<p.age<<endl;
 }

 //2.返回对象本身用 *this
 void test02(){
 	Person P1(10);
 	Person P2(20);
 	P2.PersonAdd(P1).PersonAdd(P1).PersonAdd(P1);
 	cout <<P2.age<<endl;
 }

int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0; 
}
