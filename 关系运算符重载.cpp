#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Person {
	public :
		
		Person(string name,int age){
			M_name=name;
			M_age=age;
		}
		//重载==运算符
	 
	 bool operator==(Person &p){
	 	if(this->M_name==p.M_name &&this->M_age==p.M_age){
	 		return true;
	 	}
	 	 	return false;
	 } 
	
	string M_name;
	int  M_age; 
}; 
void test01(){
  	
    Person p("张三",18);
	Person p1("lisi",18);
	if(p==p1){
		cout <<"相等"<<endl;
		 
	} else{
		cout <<"不相等"<<endl; 
	}
	
}
int main(){
	test01();
	
	 
	system("pause");
	
	return 0; 
} 
