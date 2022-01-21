#include <iostream>
#include <string>
#include <stdlib.h>

//多态的作用在于你并不知道你的程序后面需要用到什么子类，
//所以在其他地方用父类代替子类，并满足里氏转换原则

//分为二类
//静态多态: 函数重载和运算符重载  复用函数
//动态多态: 派生类和虚函数实现运行时多态

//区别:
//静态多态函数地址早绑定 :编译阶段确定函数地址
//动态多态函数地址晚绑定 :运行阶段确定函数地址 
using namespace std;
class Animal{
	public :
	
  virtual	void  speak(){
		cout<<"动物在说话"<<endl; 
	} 
	
};

class cat:public Animal{
	public :
	
	//重写:  函数返回值类型 函数名称 函数参数  完全相同 
	void speak(){
		cout<<"猫在说话"<<endl; 
	} 
};
//地址早绑定,在编译阶段确定函数地址
//如果想要执行猫说话,那么这个函数地址就不能提前绑定,需要在运行阶段进行绑定,地址晚邦

//动态多态 满足条件
//1.有继承关系
//2.子类要重写父类的虚函数 


//动态多态的使用
//父类指针或者引用  执行子类对象 
// 
void dospeak(Animal &animal){
	
	animal.speak();
	
}
void test01(){
	
	cat c;
	dospeak(c);
	
} 
int main(){
	
	 test01();
	
	system("pause");
	return 0;
} 
