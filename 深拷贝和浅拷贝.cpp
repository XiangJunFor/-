#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
//浅拷贝:  简单的赋值拷贝操作 
//深拷贝:  在堆区重新申请空间,进行拷贝操作

//如果属性要在堆区开辟的,一定要用自己提供的拷贝构造函数,防止浅拷贝带来的问题 
class Person{
	public :
		
		Person(){
			
			cout<<"Person默认构造函数调用"<<endl;
		}
		
		Person (int age,int M_height){
			M_age=age; //浅拷贝 
		    M_Height	= new int(M_height);
			cout<<"Person 有参构造函数调用"<<endl; 
			
		}
		//自己实现拷贝构造函数 解决浅拷贝带来的问题 
		Person(const Person &p){
			
			M_age=p.M_age;  
		//	M_Height=p.M_Height;  编译器默认实现就是这行代码 
		
		 
		//深拷贝操作
		//如果不利用深拷贝在堆区开辟新内存,会导致浅拷贝带来的重复释放堆区问题,且报错 
		M_Height=new int(*p.M_Height) ;
			cout <<"Person拷贝构造函数调用"<<endl; 
		}
		~Person(){
			//释放堆区数据操作,因为堆区数据需要自己释放 
			if(M_Height!=NULL){
				delete   M_Height;
				M_Height=NULL; 
			}
			cout<<"Peron 析构函数调用"<<endl; 
		}
		int  M_age; 
		int *M_Height;//身高 
};  

void test01(){
	
	Person p1(18,160); 
	cout<<"年龄  "<<p1.M_age<<"身高  " <<*p1.M_Height<<endl; 
	
	Person p2(p1);
		cout<<"年龄  "<<p2.M_age<<"身高  " <<*p2.M_Height<<endl; 
}
int main(){
	
	 test01();
	
	
	system("pause");
	return 0;
}
