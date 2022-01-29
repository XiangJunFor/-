#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//普通函数与模板函数区别
//1.普通函数调用可以发生隐式类型转换 
//2.函数模板用自动类型推导 不可以发生隐式转换
//3.函数模板用指定类型可以发生隐式转换

int func(int a,int b){
	
	return a+b;
}

template <class T>
T func2(T a,T b){
	return a+b;
}

void test01(){
	int a=16;
	int b=45;
	char c='c';
	
 //	cout<<func(a,c)<<endl; 普通函数 
 //   cout<<func2(a,c)<<endl; 自动推导不行 
  cout<<func2<int>(a,c)<<endl; //指定类型  行  
}
int main(){
	
	test01();
	
	system("pause");
	return 0;
} 
