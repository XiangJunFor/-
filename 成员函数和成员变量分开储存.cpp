#include  <iostream>
#include  <string>
#include  <stdlib.h> 
using namespace std; 

class Person {
	
	int M_a;  //�Ǿ�̬��Ա����  ������Ķ��� 
	static int  M_b; //��̬��Ա����   ��������Ķ��� 
	void func(){}  //�Ǿ�̬��Ա����     ��������Ķ��� 
    static void func1(){} //��̬��Ա����  ��������Ķ��� 
     
     
};
 int Person ::M_b=0;
void test01(){
	
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ1 
	//C++����������ռ����Ҳ����һ���ֽڿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ���и���һ�޶��ĵ��ڴ�ռ� 
	cout<<"Person sizeof"<<sizeof(p)<<endl;
	
}
void test02(){
	
	
	Person p;
		cout<<"Person sizeof"<<sizeof(p)<<endl;
}
int main(){
	
	test02();
	
	
	system("pause");
	return 0; 
}
