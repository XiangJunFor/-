#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream> 
using namespace std;

//二进制文件  读

class Person{
	
	public:
	
	char M_name[64];
	int  age; 
	char sex[8]; 
	char wh[64]; 
};
void test01(){
	
	//包含头文件
	//创建流对象 
	ifstream ifs; 
	// 打开文件 判断文件是否打开
	ifs.open("Person.txt",ios::in|ios::binary);
	if(!ifs.is_open()) {
		cout<<"文件打开失败"<<endl; 
		return ;
	}
	//读文件
	Person p;
	ifs.read((char*)&p,sizeof(Person));
	
	cout<<" 姓名: "<<p.M_name<<" 年龄 :" <<p.age<<" 性别 :" <<p.sex<<" 外号 :"<<p.wh<<endl; 
	//关闭文件 
	ifs.close();
} 
int main(){
	test01();
	 
	
	system("pause");
	return 0; 
}
