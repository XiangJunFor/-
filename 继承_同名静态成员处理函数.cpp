#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//��̬�ͷǾ�̬��Ա����ʽһ��
//����ֱ�ӷ���
//������ʸ����������

class base{
	public :
	
	static void func(){
		cout<<"base :"<<endl;
	}
	static int m_a;
}; 
 int base :: m_a=100;

class son :public base{
	public :
		static void func(){
		cout<<"son :"<<endl;
	}
	static int m_a; 
};
  int son::  m_a=200;
  
  //ͬ����̬��Ա���� 
  void test01(){
  	//1.ͨ��������� 
  	son s;
	cout<<"son  �� :"<<s.m_a<<endl;
	cout<<"base �� :"<<s.base::m_a<<endl; 
	//2.ͨ����������
	cout<<"�����������:"<<endl; 
	cout<<"son  �� :"<<son::m_a<<endl;
	//��һ��::�Ǳ�ʾͨ���������ʵڶ���::�������� 
	cout<<"base �� :"<<son::base::m_a<<endl; 
  	
  } 
  //ͬ������ͬ�� 
  void test02(){
  	 son s;
  	 s.func();
  	 son::func();
  	 son::base::func();
  } 
int main(){
	
    //test01();
	 test02();
	system("pause");
	return 0; 
} 
