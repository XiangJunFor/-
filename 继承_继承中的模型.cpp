#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//�̳��е�ģ��
//���������зǾ�̬���Գ�Ա���ᱻ����̳���ȥ
//������˽�г�Ա���� �Ǳ�������������,ֻ�Ƿ��ʲ��� ,������û�м̳� 

class Base{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
}; 
class son :public Base{
	public :
	 int M_d;
}; 
void test01(){
	
	son s;
	cout<<sizeof(son)<<endl; 
}

int main(){
	test01();
	
	
	system("pause");
	return 0; 
}
