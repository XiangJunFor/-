#include  <iostream>
#include  <string>
#include  <stdlib.h>

using namespace std;
//ģ��ʹ��ע������
//1.�Զ������Ƶ� �����Ƶ�����������һ�µ�T�ſ���
//2.ģ�����Ҫȷ����T���������Ͳ���ʹ�� 
template <typename T> //typename�����滻��class
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
} 
void test01(){
	int a=40;
	int b=50;
	char c='A';
 //	 myswap(a,c); �Ƶ����� ���Ͳ�һ�� ,���� 
    myswap(a,b);
	cout<<a;
	cout<<b; 
} 
template <class T>
void func(){
	
	cout<<"func����"<<endl; 
}
void test02(){
  //	func(); T������û��ȷ�� ,���� 
       func<int>(); 
}
int main(){
	//test01();
	 test02();
	system("pause");
	return 0; 
}
