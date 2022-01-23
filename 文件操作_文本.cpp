#include <iostream>
#include <stdlib.h>
#include  <string>
#include  <fstream>

//文本文件  写文件 
using namespace std;

void test01(){
	// 1. 包含头文件 fstream 
	// 2.  创建流对象
	ofstream  ofs; 
	// 3.  指定打开方式 
	ofs.open("test.txt",ios::out); 
	
	//4. 写内容
	ofs<<"姓名 :张三"<<endl;
	ofs<<"年龄 :18"<<endl;
	ofs<<"性别 :男"<<endl; 
	ofs<<"外号 :法外狂徒"<<endl; 
	ofs.close(); 
}


int main(){
	
	test01(); 
	
	system("pause");
	return 0; 
}
