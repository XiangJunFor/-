#include  <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

 //构造和析构都是必须有的实现 ,如果我们不提供,编译器会自动提供空实现的构造和析构 
 class Person{
 	
 	public :
 		
 //构造函数 
 //1.没有返回值,不用写void
 //2.函数名和类名一样
 //3.构造函数可以有参数,也可以发生重载 
 //创建对象时,构造函数会自动调用,且只调用一次
 	
 	Person(){
 		
 		cout<<"Penson的构造函数  " <<endl; 
 	}
 	
 	//析构函数
	//1.没有返回值,不要写void
	//2.函数名和类名一样,但是前面要加~
	//3.不可以有参数,不能发生重载
	//4.析构函数在函数销毁前自动调用,而且只会调用一次
	
	~Person (){
		
		cout <<"Person的析构函数"<<endl; 
		
	} 
 	
 }; 
 void test01(){
 	
 	Person p;   //栈区数据,程序结束会销毁 
 	
 }
int main(){
	
	test01();
	
//	Person p;
	
	system("pause");
	return 0;
}
