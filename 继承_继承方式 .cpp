#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 
//�̳з�ʽ : �����̳� �����̳� ˽�м̳�

class Base1{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
}; 
class son1 :public Base1{
	public :
		void func(){
			M_A=10; //���๫��Ȩ�� ����Ҳ�ǹ���
			M_B=20; //���ౣ��Ȩ�� ����Ҳ�Ǳ���
		//	M_C=30;    ����˽��Ȩ�� ,������ʲ��� 
		}
};
void test01(){
	son1 s1;
	s1.M_A=100;
  //	s1.M_B=200; ���� ���ʲ��� 
} 

//�����̳� 
class Base2{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
};
class son2 :protected Base2{
	public :
		void func(){
			M_A=10; //���๫��Ȩ�� �����Ϊ����Ȩ�� 
			M_B=20; //���ౣ��Ȩ�� ����Ҳ�Ǳ���Ȩ�� 
		//	M_C=30;    ����˽��Ȩ�� ,������ʲ��� 
		}
};
//˽�м̳� 
class Base3{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
};
class son3 :private Base3{
	public :
		void func(){
			M_A=10; //���๫��Ȩ�� �����Ϊ˽��Ȩ�� 
			M_B=20; //���ౣ��Ȩ�� �����Ϊ˽��Ȩ�� 
		//	M_C=30;    ����˽��Ȩ�� ,������ʲ��� 
		}
};
int main(){
	
	
	
	system("pause");
	return 0; 
}
