#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;

//��ģ������﷨
//template <typename T>
//��
//����:����һ��ͨ����,���еĳ�Ա�������Ϳ��ò������ƶ�,��һ����������ͱ�ʾ
//��ģ��ͺ���ģ���﷨�ǳ�����,������ģ��template������������ģ�� 
template <class nametype,class agetype>
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
 void test01(){
  	person<string,int>p1("wyyy",500);
  	p1.showperson();
 }
int main(){
	test01();
	
	system("pause");
	return 0;
} 
