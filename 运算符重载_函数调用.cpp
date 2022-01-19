#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//函数调用运算符重载
//由于重载后使用的方法非常像函数调用 ,所以又称仿函数
//仿函数没有固定写法,非常灵活
class MyInit{
	
	public:
	void operator()(string text){
		
		cout <<text<<endl;
	}
}; 
 void test01(){
 	 MyInit p;
 	 p("hello world");//使用起来非常像函数,所以叫仿函数 
 } 
 
 
 //没有固定写法,灵活
 
 class Myadd{
 	
 	public :
 		
 	int  operator()(int num1,int num2){
 		
 		 return num1+num2;
 	}	 	
 }; 
 void test02(){
 	Myadd add;
 	 int ret=add(100,100);
 	cout<<"ret :"<<ret<<endl;
 	//匿名函数对象
	 cout<< Myadd()(100,100)<<endl;
 	
 }
int main(){
	 
	 test01();
	  test02();
	system("pause");
	return 0; 
}
