#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;

//��ģ��ͺ���ģ������

template <class nametype,class agetype=int>
class person {
    public:
    person(nametype name,agetype age){
    	this->my_name=name;
    	this->my_age=age;
    }
    void showperson(){
    	cout<<this->my_name<<this->my_age<<endl;
    }
    string  my_name;
    int     my_age;

};
//1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ 
void test01(){
	//peson p("�����",999);
	person<string,int>p("�����",1000); //��Ҫ����ʹ������ 
	p.showperson(); 
} 
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02(){
	person<string>p1("��˽�",666);
	p1.showperson(); 
	
} 

int main(){
	test01(); 
	test02();
	system("pause");
	return 0;
} 
