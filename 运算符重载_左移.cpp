#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//�������������
//��������������Ԫ����ʵ������Զ����������� 

class Person{
	 friend  ostream & operator<<(ostream &cout,Person &p);
	 
	 public :
	 Person (int a,int b){
	 	M_a=a;
		M_b=b; 
	 } 
	  private :
	//���ó�Ա�������� ,�޷�ʵ���������� 
	  int M_a;
	  int M_b;	
}; 
//ֻ������ȫ�ֺ�������
 ostream & operator<<(ostream &cout,Person &p){
 	
 	 cout<<" p.M_a : "<<p.M_a<<" p.M_b : "<<p.M_b;
 	 return cout; 
 }
void test01(){
	Person p(10,10);
	
	cout<<p<<endl;
	//��ʽ���˼�� 
} 
int main(){
	 test01();
	
	system("pause");
	
	return 0; 
} 
