#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream> 
using namespace std;

//�������ļ�  ��

class Person{
	
	public:
	
	char M_name[64];
	int  age; 
	char sex[8]; 
	char wh[64]; 
};
void test01(){
	
	//����ͷ�ļ�
	//���������� 
	ifstream ifs; 
	// ���ļ� �ж��ļ��Ƿ��
	ifs.open("Person.txt",ios::in|ios::binary);
	if(!ifs.is_open()) {
		cout<<"�ļ���ʧ��"<<endl; 
		return ;
	}
	//���ļ�
	Person p;
	ifs.read((char*)&p,sizeof(Person));
	
	cout<<" ����: "<<p.M_name<<" ���� :" <<p.age<<" �Ա� :" <<p.sex<<" ��� :"<<p.wh<<endl; 
	//�ر��ļ� 
	ifs.close();
} 
int main(){
	test01();
	 
	
	system("pause");
	return 0; 
}
