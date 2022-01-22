#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;

class base{
	
	public :
		//纯虚函数
		//只要有一个纯虚函数 ,这个类就称 抽象类 
		virtual void func()=0;
		//抽象类特点
		//1.不允许实例化
		//2.抽象类的子类必须要重写父类的纯虚函数 ,否则也是抽象类 
}; 
class son :public base{
	
	    virtual void func(){
	    	cout<<"调用"<<endl; 
	    };
}; 
void test01(){
	//base s; 抽象类不允许实例化
	//new base 在堆区也不行 
    //	son  s;   没有重写父类纯虚函数 也是抽象类 
    base *b=new son;
	 b->func() ;
	 delete b;
} 
int main(){
	test01();
	
	system("pause");
	return 0;
} 
