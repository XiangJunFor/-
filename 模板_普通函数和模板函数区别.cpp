#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//��ͨ������ģ�庯������
//1.��ͨ�������ÿ��Է�����ʽ����ת�� 
//2.����ģ�����Զ������Ƶ� �����Է�����ʽת��
//3.����ģ����ָ�����Ϳ��Է�����ʽת��

int func(int a,int b){
	
	return a+b;
}

template <class T>
T func2(T a,T b){
	return a+b;
}

void test01(){
	int a=16;
	int b=45;
	char c='c';
	
 //	cout<<func(a,c)<<endl; ��ͨ���� 
 //   cout<<func2(a,c)<<endl; �Զ��Ƶ����� 
  cout<<func2<int>(a,c)<<endl; //ָ������  ��  
}
int main(){
	
	test01();
	
	system("pause");
	return 0;
} 
