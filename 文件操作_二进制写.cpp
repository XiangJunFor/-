#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream> 
using namespace std;

//�����Ƶķ�ʽ д�ļ�
class Person{
	
	public:
	
	char M_name[64];
	int  age; 
	char sex[8]; 
	char wh[64]; 
};
void test01(){
	//1.����ͷ�ļ�
	//2. ���������� 
	ofstream ofs; 
    //3.���ļ�
    ofs.open("Person.txt",ios::out|ios::binary); //�����Ʒ�ʽ 
	//4.д�ļ�
	Person p={"����",19,"��","ɶҲ����"};
	ofs.write((const char*)&p,sizeof(Person)) ;
	 
	//5.�ر��ļ� 
	 ofs.close();
} 
int main(){
	
	 test01(); 
	
	system("pause");
	return 0; 
}
