#include <iostream>
#include <stdlib.h>
#include  <string>
#include  <fstream>

//�ı��ļ�  д�ļ� 
using namespace std;

void test01(){
	// 1. ����ͷ�ļ� fstream 
	// 2.  ����������
	ofstream  ofs; 
	// 3.  ָ���򿪷�ʽ 
	ofs.open("test.txt",ios::out); 
	
	//4. д����
	ofs<<"���� :����"<<endl;
	ofs<<"���� :18"<<endl;
	ofs<<"�Ա� :��"<<endl; 
	ofs<<"��� :�����ͽ"<<endl; 
	ofs.close(); 
}


int main(){
	
	test01(); 
	
	system("pause");
	return 0; 
}
