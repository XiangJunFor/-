#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



class Person{
	public :
		
		Person(){
			
			cout<<"PersonĬ�Ϲ��캯������"<<endl;
		}
		
		Person (int age){
			M_age=age;
			cout<<"Person �вι��캯������"<<endl; 
			
		}
		Person(const Person &p){
			
			M_age=p.M_age; 
			cout <<"Person�������캯������"<<endl; 
		}
		~Person(){
			
			cout<<"Peron ������������"<<endl; 
		}
		int  M_age; 
}; 

//��������ʱ��
//1.ʹ��һ��������ϵĶ�������ʼ��һ���¶���

void   test01(){
	Person p1(10);
	Person p2(p1); 
	cout <<p1.M_age<<endl; 
	
}
//2.ֵ���ݵķ�ʽ������������ֵ

void dowork(Person p){
	
}

void test02(){
	
	Person p1;
	dowork(p1);  //ֱ�ӵ��ú���Ҳ����ÿ�������,ֵ���ݵı���Ҳ���Ǹ���һ������.
	             //����û��д��������,ϵͳҲ��Ĭ��һ�� 
	            //�൱�� Person p2=p1; person P3=Person (p1); 
}
//3.ֵ��ʽ���ؾֲ�����
Person  dowork2(){
	Person p1;
	
	return p1;  //��ΪP1�Ǿֲ�����,�������Ƿ��ص���ֵ,���ᰴ��p1����һ���µĶ���,���ظ����� 
}

void test03(){
	
	Person P=dowork2(); //�˴�����vs�п��Թ��ɿ�������,������dev�в�����,��������ΪЭ�鲻ͬ 
	                    
}
int main(){
//	test01();
//	 test02();
     test03();
	system("pause");d
	return 0;
} 
