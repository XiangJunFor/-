#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//��̬��Ա����
// 1.���ж�����ͬһ����
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���� 
//ͬ��Ҳ�з���Ȩ�� 
class Person{
	public:
	 //��̬��Ա���� 
    static void func(){
    	M_A=100;//��̬�������Է��ʾ�̬����
		//M_B=100; �Ǿ�̬����,�޷������ĸ������µ�M_B 
    	cout<<"��̬��Ա��������"<<endl; 
    } 
  	static int M_A; //��̬��Ա����
	 int  M_B;//�Ǿ�̬��Ա���� 
}; 


int Person::M_A=0;

void test01(){
	//ͨ��������з���
	Person p;
	p.func();
	
	//ͨ����������
	 Person::func();
	
	
} 

 int main(){
    test01();
	system("pause");
	return 0; 
} 
