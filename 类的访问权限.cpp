#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 

//公共权限 : public     成员类内可以访问    类外可以访问
//保护权限 : protected  成员类内访问      类外不可以访问  子类访问父类的保护内容
//私有权限 :private     成员类内可以访问  类外不可以访问  子类不可以访问父类的私有内容
//以人类为例子

class Person {
	public :   //公共权限 
		string P_name;
		
	protected : //保护权限 
	
	   string P_car;
	   
	private  :  //私有权限 
		
	   int  P_password;
	
	public :
	
	void func(){
		P_name="张三";
		string P_car="拖拉机";
		P_password=123456;
		
	} 
	
};
int main(){
	
	
	
	system("pause");
	return 0;
}
