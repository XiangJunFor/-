#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//���ص�������� 

//�Զ�������
class MyInit{
	
	friend ostream & operator<<(ostream &cout,MyInit p);
	public :
	MyInit(){M_num=0;}	
	  //����ǰ�õ��� ������������Ϊһֱ��һ�����ݽ��е�������
	  //ֵ���ݻ´�����촴��һ���¶��� 
		MyInit &operator++(){
		
		//�Ƚ���++���� 
		M_num++;
		//�ٽ����������� 
		return *this;
	}
		//���غ��õ���   int��ʾռλ���� ,����ǰ�úͺ��� ,�ֲ���������ֵ,�������÷��� 
		MyInit   operator++(int){
			//�ȼ�¼��ʱ��� 
			  MyInit temp=*this; 
			//����� 
			 ++M_num;
			 //����¼�������
			 return temp; 
		}
	private :
	


	int M_num; 
} ;

ostream& operator<<(ostream &cout,MyInit p){
 	
 	 cout<< p.M_num;
 	 return cout; 
 } 
 
 void test01(){
 	 MyInit p;
 	  
 	 cout<<++p<<endl;
 }
 void test02(){
 	 MyInit p;
 	  
 	 cout<<p++<<endl;
 	  cout<<p<<endl;
 }
int main(){
	 test02();
	
	system("pause");
	
	return 0; 
} 
