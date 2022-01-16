#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;
//空指针调用成员函数

class Person{
	public :
		
	void showclassname(){
		cout<<"class name : Person"<<endl;
	}
	void  showclassage(){
		//报错原因为传入的指针为NULL, 成员变量默认为 this->M_age;
		
		if(this==NULL){  //为了程序健壮性,加一个判断 
			return ;
		} 
		cout<<"class age : Person"<<M_age<<endl;
	} 
		
	int M_age;
}; 
void test01(){
	Person *p=NULL;
	p-> showclassname();
}
int main(){
	
  test01();
	
	system("pause");
	return 0; 
}
