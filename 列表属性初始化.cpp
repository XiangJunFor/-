#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 
//��ʼ���б�����

class Person{
	
	
 	public :
  // Person(int a,int b,int c){  //��ͳ��ʽ,���캯����ʼ���б� 
//   	 
//   	   M_a=a;
//   	   M_b=b;
//   	   M_c=c;
//   	
//   }  	
   //��ʼ���б�,����
   Person (int a,int b,int c):M_a(a),M_b(b),M_c(c){
   	
   } 
  	
	int M_a;
	int M_b;
	int M_c; 
	
} ;

void test01(){
	
//	 Person P(10,20,30);
	 
	 Person P(10,20,30);
	 cout<< P.M_a<<endl;
	 cout<< P.M_b<<endl;
	 cout<< P.M_c<<endl;
	
	
}
int main(){
	
	test01();
	
	system("pause");
	return 0; 
} 
