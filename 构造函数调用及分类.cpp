#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 
//���ַ���
//1.��������Ϊ �޲ι��� �вι���
//2.�����ͷ� ,��ͨ����Ϳ�������

class  Person {
	public :
		
	 Person(){
	 	
	 	cout<<"�޲ι���ĺ���"<<endl; 
	 } 
	 Person(int a){
	 	 age=a;
	 	cout<<"�вι���ĺ���"<<endl; 
	 } 
	 Person(const Person &p){
	 	//������������Կ����������� 
	 	age=p.age;
	 	cout<<"��������ĺ���"<<endl; 
	 } 
	~Person(){
		 cout<<"��������"<<endl; 
	} 
	int age;
}; 

void test01(){

//����
//1.���ŷ�
 // Person P;  //Ĭ�ϵ��� 
//  Person p1(10); //�����вκ���  
//  Person p2(p1);//���ÿ������� 
//  cout<<p2.age<<endl;   
  //ע������ 
  //1.����Ĭ�� ����ʱ��Ҫ������(),�������������Ϊ�Ǹ���������,������Ϊ�ڴ�������     
  
  
   
//2.��ʾ��
    Person  P;
	
	Person P1=Person(10);  //�вι���   Person(10);��������  �ص�:��ǰִ�н�����,ϵͳ�����  
	
	Person P2=Person(P1);  //�������� 

   //ע������ 
   //1.��Ҫ�ÿ������캯��,��ʼ���������� ����������Ϊ Person(P1) = Person P1 �������� 


//3.��ʽת���� 
     Person P3=10;//�൱��   Person P3=Person(10);
	 Person P4=P3; //�൱��   	Person P4=Person(P3);  //�������� 

}
int main(){
	test01(); 
	
	
	system("pause");
	return 0;
}
