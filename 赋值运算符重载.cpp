#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//��ֵ��������� 

class Person{
	
	public :
	Person(int age){
		 
	M_age= new int(age);
	
	}
	~Person(){
		//ɾ���������� ,ͬʱע��ǳ���������� �ظ��ͷ�  
		if(M_age!=NULL){
		    
		    delete M_age;
		    M_age=NULL;
		}	
	}
	
	//���ظ�ֵ�����
	Person & operator+(Person &p){
		
		//���ж϶��������ͷŸɾ���û ,Ȼ�����
			if(M_age!=NULL){
		    
		    delete M_age;
		    M_age=NULL;
		}
		  M_age= new int(*p.M_age);	
		  //���ض�����
		  return *this; 
	} 
	
	
	int *M_age;
}; 

	
void test01(){
	
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3=p2=p1;
	cout<<"p1������Ϊ :"<<*p1.M_age<<endl; 
	cout<<"p2������Ϊ :"<<*p2.M_age<<endl; 
	cout<<"p3������Ϊ :"<<*p3.M_age<<endl; 
	
}
int main(){
	
	 test01();
	 
	system("pause");
	
	return 0; 
} 
