#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//ǳ����:  �򵥵ĸ�ֵ�������� 
//���:  �ڶ�����������ռ�,���п�������

//�������Ҫ�ڶ������ٵ�,һ��Ҫ���Լ��ṩ�Ŀ������캯��,��ֹǳ�������������� 
class Person{
	public :
		
		Person(){
			
			cout<<"PersonĬ�Ϲ��캯������"<<endl;
		}
		
		Person (int age,int M_height){
			M_age=age; //ǳ���� 
		    M_Height	= new int(M_height);
			cout<<"Person �вι��캯������"<<endl; 
			
		}
		//�Լ�ʵ�ֿ������캯�� ���ǳ�������������� 
		Person(const Person &p){
			
			M_age=p.M_age;  
		//	M_Height=p.M_Height;  ������Ĭ��ʵ�־������д��� 
		
		 
		//�������
		//�������������ڶ����������ڴ�,�ᵼ��ǳ�����������ظ��ͷŶ�������,�ұ��� 
		M_Height=new int(*p.M_Height) ;
			cout <<"Person�������캯������"<<endl; 
		}
		~Person(){
			//�ͷŶ������ݲ���,��Ϊ����������Ҫ�Լ��ͷ� 
			if(M_Height!=NULL){
				delete   M_Height;
				M_Height=NULL; 
			}
			cout<<"Peron ������������"<<endl; 
		}
		int  M_age; 
		int *M_Height;//��� 
};  

void test01(){
	
	Person p1(18,160); 
	cout<<"����  "<<p1.M_age<<"���  " <<*p1.M_Height<<endl; 
	
	Person p2(p1);
		cout<<"����  "<<p2.M_age<<"���  " <<*p2.M_Height<<endl; 
}
int main(){
	
	 test01();
	
	
	system("pause");
	return 0;
}
