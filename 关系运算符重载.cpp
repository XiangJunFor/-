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
		//����==�����
	 
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
  	
    Person p("����",18);
	Person p1("lisi",18);
	if(p==p1){
		cout <<"���"<<endl;
		 
	} else{
		cout <<"�����"<<endl; 
	}
	
}
int main(){
	test01();
	
	 
	system("pause");
	
	return 0; 
} 
