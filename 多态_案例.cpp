#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
//��ͨд���Ͷ�̬д�� ʵ�ּ�����
class Calculator{
	public :
		
	int getresult(string oper){
		if(oper=="+"){
		return num1+num2; 
		}
		if(oper=="-"){
		return num1-num2; 
		}
		if(oper=="*"){
		return num1*num2; 
		}
		//�����Ҫ�µĹ���,Ҫ��Դ��
		//����ʵ������,�ᳫ ����ԭ��
		//����ԭ��:����չ���п���,���޸Ľ��йر� 
	}
	
	int num1;
	int num2;	
}; 
void test01(){
	
	Calculator c;
	c.num1=10;
	c.num2=30;
	
	cout<<"num1 "<<c.num1<<"+"<<" num2 "<<c.num2<<"="<<c.getresult("+")<<endl;
}

//���ö�̬����ʵ��
//��̬�ô�
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ �Լ�ά���Ը� 
class strCalculator{
	public :
		
	 virtual	int getresult(){
			return 0;
		}
		int nuber1;
		int nuber2;
}; 
class addCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1+nuber2;
		}
	
}; 
class suCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1-nuber2;
		}
	
}; 
class muCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1*nuber2;
		}
	
}; 
void test02(){
	 strCalculator *abc=new addCalculator;
	 
	 abc->nuber1=100;
	 abc->nuber2=100;
	 cout<<abc->getresult()<<endl;
}
int main(){
 //	test01(); 
	 test02();
	
	system("pause");
	return 0;
} 
