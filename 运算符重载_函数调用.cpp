#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//�����������������
//�������غ�ʹ�õķ����ǳ��������� ,�����ֳƷº���
//�º���û�й̶�д��,�ǳ����
class MyInit{
	
	public:
	void operator()(string text){
		
		cout <<text<<endl;
	}
}; 
 void test01(){
 	 MyInit p;
 	 p("hello world");//ʹ�������ǳ�����,���Խзº��� 
 } 
 
 
 //û�й̶�д��,���
 
 class Myadd{
 	
 	public :
 		
 	int  operator()(int num1,int num2){
 		
 		 return num1+num2;
 	}	 	
 }; 
 void test02(){
 	Myadd add;
 	 int ret=add(100,100);
 	cout<<"ret :"<<ret<<endl;
 	//������������
	 cout<< Myadd()(100,100)<<endl;
 	
 }
int main(){
	 
	 test01();
	  test02();
	system("pause");
	return 0; 
}
