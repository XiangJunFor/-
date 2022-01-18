#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//重载递增运算符 

//自定义整形
class MyInit{
	
	friend ostream & operator<<(ostream &cout,MyInit p);
	public :
	MyInit(){M_num=0;}	
	  //重载前置递增 返回引用是因为一直对一个数据进行递增操作
	  //值传递会拷贝构造创建一个新对象 
		MyInit &operator++(){
		
		//先进行++运算 
		M_num++;
		//再将自身做返回 
		return *this;
	}
		//重载后置递增   int表示占位参数 ,区分前置和后置 ,局部变量返回值,不用引用返回 
		MyInit   operator++(int){
			//先记录当时结果 
			  MyInit temp=*this; 
			//后递增 
			 ++M_num;
			 //将记录结果返回
			 return temp; 
		}
	private :
	


	int M_num; 
} ;

ostream& operator<<(ostream &cout,MyInit p){
 	
 	 cout<< p.M_num;
 	 return cout; 
 } 
 
 void test01(){
 	 MyInit p;
 	  
 	 cout<<++p<<endl;
 }
 void test02(){
 	 MyInit p;
 	  
 	 cout<<p++<<endl;
 	  cout<<p<<endl;
 }
int main(){
	 test02();
	
	system("pause");
	
	return 0; 
} 
