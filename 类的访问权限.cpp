#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 

//����Ȩ�� : public     ��Ա���ڿ��Է���    ������Է���
//����Ȩ�� : protected  ��Ա���ڷ���      ���ⲻ���Է���  ������ʸ���ı�������
//˽��Ȩ�� :private     ��Ա���ڿ��Է���  ���ⲻ���Է���  ���಻���Է��ʸ����˽������
//������Ϊ����

class Person {
	public :   //����Ȩ�� 
		string P_name;
		
	protected : //����Ȩ�� 
	
	   string P_car;
	   
	private  :  //˽��Ȩ�� 
		
	   int  P_password;
	
	public :
	
	void func(){
		P_name="����";
		string P_car="������";
		P_password=123456;
		
	} 
	
};
int main(){
	
	
	
	system("pause");
	return 0;
}
