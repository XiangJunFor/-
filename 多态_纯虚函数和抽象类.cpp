#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;

class base{
	
	public :
		//���麯��
		//ֻҪ��һ�����麯�� ,�����ͳ� ������ 
		virtual void func()=0;
		//�������ص�
		//1.������ʵ����
		//2.��������������Ҫ��д����Ĵ��麯�� ,����Ҳ�ǳ����� 
}; 
class son :public base{
	
	    virtual void func(){
	    	cout<<"����"<<endl; 
	    };
}; 
void test01(){
	//base s; �����಻����ʵ����
	//new base �ڶ���Ҳ���� 
    //	son  s;   û����д���ി�麯�� Ҳ�ǳ����� 
    base *b=new son;
	 b->func() ;
	 delete b;
} 
int main(){
	test01();
	
	system("pause");
	return 0;
} 
