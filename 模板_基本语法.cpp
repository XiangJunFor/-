#include  <iostream>
#include  <string>
#include  <stdlib.h>

using namespace std;
//c++��һ�ֱ༭˼�� Ϊ�����   ��Ҫ���ü���Ϊģ��
//c++�ṩ����ģ�����  ����ģ�� ��ģ��
//ģ������:����һ��ͨ�ú���,�亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�
// ���������ʹ���

template <typename T> //����һ��ģ��,���߱�����֮����ֵ�t���ñ���,T��ͨ������
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
} 
void test01(){
	int a=10;
	int b=20;
	//���ú���ģ�彻��
	//1.�Զ��Ƶ���
//	myswap(a,b); 
//	cout<<a<<endl;
//	cout<<b<<endl;
	//2.��ʾָ������ 
	myswap<int>(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
}
int main(){
	test01();
	system("pause");
	return 0; 
}
