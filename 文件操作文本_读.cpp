#include  <iostream>
#include  <stdlib.h>
#include  <string>
#include  <fstream> 
using namespace std;
//�ı����� �� 
void test01(){
	//1.����ͷ�ļ�
	//2.����������
	ifstream  ifs;
	//3.���ļ� �����жϴ򿪳ɹ�
	ifs.open("test.txt",ios::in);
	if(!(ifs.is_open())){
		cout<<"�ļ���ʧ��"<<endl; 
		return;
	}
	//4.������
	
	//��һ�ַ�ʽ   
//	char buf[1024]={0};
//	 while(ifs>>buf) {
//	 	cout<<buf<<endl;
//	 }
	  
	 //�ڶ��ַ�ʽ   ���ж�ȡ���� 
//	 char buf[1024]={0};
//	 while(ifs.getline(buf,sizeof(buf))){
//	 	cout<<buf<<endl; 
//	 }
    //�����ַ�ʽ   
//	string buf;
//	while(getline(ifs,buf)){
//		
//		cout<<buf<<endl;
//	} 
     char c;
     while((c=ifs.get())!=EOF){
     	cout<<c;
     }
	//5.�ر��ļ� 
	 ifs.close();
 
	
} 
int main(){
	
	 test01();
	
	system("pause");
	return 0;
} 
