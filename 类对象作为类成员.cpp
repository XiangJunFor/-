#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


//�������Ϊ���Ա 
 
 
 class Phone {
 	
 	public :
 		
 		
	 		Phone (string pname){
	 			P_name=pname;
	 			cout<<"Phone ���캯��"<<endl; 
	 		}
	 		
 		
 		
 		
 		string  P_name;

 	
 };



class Person{
	
	
 	public :
 		//M_Phone=pname;  ��ʽת���� 
 	Person(string mname,string pname):M_name(mname),M_Phone(pname)
		{
 			cout<<"Person ���캯��"<<endl;
 		}
 			
	 string M_name;
	 Phone  M_Phone; 
} ;

void test01 (){
	Person P("����","ƻ��MAX");
	 cout<<P.M_name<<"����"<<P.M_Phone.P_name<<endl; 
}
//��������Ķ����Ϊ��ĳ�Ա,�ȹ���������Ķ���,�ٹ����Լ��Ķ���,������֮�෴ 
  
  int main(){
	 test01();

	
	system("pause");
	return 0; 
} 

