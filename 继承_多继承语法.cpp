#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//c++����һ�������̳�
//����c++ʵ�ʿ���������ʹ��

class base1{
	public :
	base1(){
		m_a=100;
	}
	int m_a;
}; 
class base2{
	public :
	base2(){
		m_a=200;
	}
	int m_a;
}; 
//����̳� base1 base2;
//�﷨ class ���� : �̳з�ʽ  ���� 1,�̳з�ʽ ���� 2..... 
class son : public base1,public base2{
	public :
		son(){
			m_c=300;
			m_d=400;
		}
		int m_c;
		int m_d;
	
};
void test01(){
	son s;
	cout<<sizeof(s)<<endl;
	//����������ͬ�� ������������ 
		cout<<s.base1::m_a<<endl;
		cout<<s.base2::m_a<<endl;
} 
int main(){
	
	 test01();
	
	system("pause");
	return 0; 
} 
