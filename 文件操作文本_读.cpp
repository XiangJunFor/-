#include  <iostream>
#include  <stdlib.h>
#include  <string>
#include  <fstream> 
using namespace std;
//文本操作 读 
void test01(){
	//1.包含头文件
	//2.创建流对象
	ifstream  ifs;
	//3.打开文件 并且判断打开成功
	ifs.open("test.txt",ios::in);
	if(!(ifs.is_open())){
		cout<<"文件打开失败"<<endl; 
		return;
	}
	//4.读数据
	
	//第一种方式   
//	char buf[1024]={0};
//	 while(ifs>>buf) {
//	 	cout<<buf<<endl;
//	 }
	  
	 //第二种方式   按行读取数据 
//	 char buf[1024]={0};
//	 while(ifs.getline(buf,sizeof(buf))){
//	 	cout<<buf<<endl; 
//	 }
    //第三种方式   
//	string buf;
//	while(getline(ifs,buf)){
//		
//		cout<<buf<<endl;
//	} 
     char c;
     while((c=ifs.get())!=EOF){
     	cout<<c;
     }
	//5.关闭文件 
	 ifs.close();
 
	
} 
int main(){
	
	 test01();
	
	system("pause");
	return 0;
} 
