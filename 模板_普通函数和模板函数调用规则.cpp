#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
//��ͨ�����ͺ���ģ����ù���
//1.�����ͨ������ģ�庯�������Ե��� ,���� ������ͨ����
//2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//3.����ģ����Է��� ��������
//4.�������ģ����Բ������õ�ƥ�� ,���ȵ��ú���ģ��
//5.ʵ�ʿ�������ͬʱ���� ��ͨ���� ,ģ�庯��ͬ�� 
void myprint(int a,int b){
	
	cout<<"��������"<<endl; 
} 


template <class T>
void  myprint(T a,T b){
 	cout<<"ģ�����"<<endl; 
 }
 template <class T>
void  myprint(T a,T b,T c){
 	cout<<"ģ�����ص���"<<endl; 
 }
 void test01(){
 	int a=1;
 	int b=1;
 	int c=10; 
 //	myprint(a,b);
 
  // myprint<>(a,b);  ͨ����ģ������б�,ǿ�Ƶ��ú���ģ�� 
  // myprint(a,b,c); ģ������
  char  char1='a';
  char  char2='b';
  myprint(char1,char2);//�Ƶ����� 
   
 }
int main(){
	
	test01();
	
	system("pause");
	return 0; 
}
