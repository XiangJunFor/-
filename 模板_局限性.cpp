#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵ� ,��Щ�ض��������� ,��Ҫ���廯��ʽ������ʵ��
//���þ��廯��ģ�� ,���Խ���Զ������͵�ͨ�û�
//ѧϰģ�岻��Ϊ��дģ��,������STL������ϵͳ�ṩ��ģ�� 
class Person{
	public:
	
	Person(string name, int age){
		M_name=name;
		M_age=age;
	}
	string M_name;
	int M_age; 
}; 

template <class T>
bool func(T &a,T &b){
	
	return (a==b)?true:false;
}

//���þ��廯Person �İ汾ʵ�ִ���,���廯���ȵ���
template <>bool func(Person &a,Person &b){
	
	return (a.M_name==b.M_name&& a.M_age==b.M_age)?true:false;
} 
void test01(){
	
	Person p1("tom",18);
	Person p2("tom",16);
	
	bool ret=func(p1,p2);
	if(ret){
		cout<<"һëһ��"<<endl; 
	}else{
		cout<<"ɶҲ����"<<endl; 
	}
	
}
int main(){
	test01();
	
	
	system("pause");
	return 0; 
}
