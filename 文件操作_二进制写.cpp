#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream> 
using namespace std;

//二进制的方式 写文件
class Person{
	
	public:
	
	char M_name[64];
	int  age; 
	char sex[8]; 
	char wh[64]; 
};
void test01(){
	//1.包含头文件
	//2. 创建流对象 
	ofstream ofs; 
    //3.打开文件
    ofs.open("Person.txt",ios::out|ios::binary); //二进制方式 
	//4.写文件
	Person p={"李四",19,"男","啥也不是"};
	ofs.write((const char*)&p,sizeof(Person)) ;
	 
	//5.关闭文件 
	 ofs.close();
} 
int main(){
	
	 test01(); 
	
	system("pause");
	return 0; 
}
