#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 
//���ù��캯������
//Ĭ�������c++���һ������������������� 
//1.Ĭ�Ϲ��캯��(�޲� ������Ϊ��)
//2.Ĭ����������(�޲� ������ Ϊ��) 
//3.Ĭ�Ͽ����������������Խ���ֵ���� 

//�����д��һ���вι��캯��,c++�����ṩ�޲ι��캯��,�����ṩ�������캯��
//����û����忽�����캯��,c++�����ṩ�κκ���


class Person{
	public :
		
		Person(){
			
			cout<<"PersonĬ�Ϲ��캯������"<<endl;
		}
		
		Person (int age){
			M_age=age;
			cout<<"Person �вι��캯������"<<endl; 
			
		}
	//	Person(const Person &p){
//			
//			M_age=p.M_age; 
//			cout <<"Person�������캯������"<<endl; 
//		}
		~Person(){
			
			cout<<"Peron ������������"<<endl; 
		}
		int  M_age; 
}; 

void test01(){
	Person p;
	p.M_age=18;
	
  Person p1(p);
   cout<<p1.M_age<<endl;
	
	
	
} 
int main(){
	test01(); 
	
	
	
	system("pause");
	return 0;
}
