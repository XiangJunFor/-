#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//�̳���ͬ������ʽ
class base{
	public :
	 base(){
	 	M_a=100;
	 }
	  void func(){
		cout<<"base ����"<<endl; 
	}
	void func(int a){
	 	 
	 	 cout<<"func(int a) ����"<<endl; 
	 	
	 } 
	int M_a;
}; 
class son :public base{
	
	public :
	
	void func(){
		cout<<"son ����"<<endl; 
	}
	
	son(){
		M_a=200;
	} 
	int M_a;
};
//��Աͬ������ 
void test01(){
	
	son s;
	cout<<"son �� :"<<s.M_a<<endl; 
	//���������� Ҫ���ʸ����Ա ��Ҫ�������� 
	cout<<"base�� :"<<s.base::M_a<<endl; 
}
//��Ա����ͬ������
void test02(){
	son s;
	//ͬ��������� 
	//��������г��ֺ͸���ͬ���ĳ�Ա����,�����ͬ����Ա�����ظ������� ͬ����Ա����
	//����ʸ�������غ��� �������� 
	s.base::func();
   	s.base::func(10);
} 
int main(){
	// test01();
	
	 test02();
	system("pause");
	return 0; 
} 
