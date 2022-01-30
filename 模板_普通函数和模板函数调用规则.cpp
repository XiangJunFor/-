#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
//普通函数和函数模板调用规则
//1.如果普通函数和模板函数都可以调用 ,优先 调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板可以发生 函数重载
//4.如果函数模板可以产生跟好的匹配 ,优先调用函数模板
//5.实际开发避免同时出现 普通函数 ,模板函数同名 
void myprint(int a,int b){
	
	cout<<"函数调用"<<endl; 
} 


template <class T>
void  myprint(T a,T b){
 	cout<<"模板调用"<<endl; 
 }
 template <class T>
void  myprint(T a,T b,T c){
 	cout<<"模板重载调用"<<endl; 
 }
 void test01(){
 	int a=1;
 	int b=1;
 	int c=10; 
 //	myprint(a,b);
 
  // myprint<>(a,b);  通过空模板参数列表,强制调用函数模板 
  // myprint(a,b,c); 模板重载
  char  char1='a';
  char  char2='b';
  myprint(char1,char2);//推导优先 
   
 }
int main(){
	
	test01();
	
	system("pause");
	return 0; 
}
