#include  <iostream>
#include  <string>
#include  <stdlib.h>

using namespace std;
//模板使用注意事项
//1.自动类型推导 必须推导出数据类型一致的T才可以
//2.模板必须要确定出T的数据类型才能使用 
template <typename T> //typename可以替换成class
void myswap(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
} 
void test01(){
	int a=40;
	int b=50;
	char c='A';
 //	 myswap(a,c); 推导不出 类型不一致 ,报错 
    myswap(a,b);
	cout<<a;
	cout<<b; 
} 
template <class T>
void func(){
	
	cout<<"func调用"<<endl; 
}
void test02(){
  //	func(); T的类型没有确定 ,报错 
       func<int>(); 
}
int main(){
	//test01();
	 test02();
	system("pause");
	return 0; 
}
