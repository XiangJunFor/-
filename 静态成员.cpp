#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//��̬��Ա����
class Person{
	public:
	
	//1.���ж�����ͬһ������
	//2.����׶ξͷ�����ڴ�
	//3.��������,�����ʼ�� 
	static int M_A;
	//��̬��Ա����Ҳ���з���Ȩ�޵� 
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
	//��̬��Ա����  ������ĳ��������  ���ж��󶼹���ͬһ������
	//��˾�̬��Ա�����ж��ַ��ʷ�ʽ
	
	//1.ͨ��������з���
	  Person p;
	//  cout<<p.M_A <<endl;
	  
	//2.ͨ���������з���
	 cout<<Person::M_A<<endl; 
	
	
}
  int main(){
    // test01();
	  test02();
	system("pause");
	return 0; 
} 

