#include  <iostream>
#include  <string>
#include  <stdlib.h>

using namespace std;
//c++另一种编辑思想 为泛编程   主要利用技术为模板
//c++提供二种模板机制  函数模板 类模板
//模板作用:建立一个通用函数,其函数返回值类型和形参类型可以不具体制定
// 用虚拟类型代表

template <typename T> //声明一个模板,告诉编译器之后出现的t不用报错,T是通用类型
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
} 
void test01(){
	int a=10;
	int b=20;
	//利用函数模板交换
	//1.自动推导类
//	myswap(a,b); 
//	cout<<a<<endl;
//	cout<<b<<endl;
	//2.显示指定类型 
	myswap<int>(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
}
int main(){
	test01();
	system("pause");
	return 0; 
}
