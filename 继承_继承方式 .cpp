#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 
//继承方式 : 公共继承 保护继承 私有继承

class Base1{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
}; 
class son1 :public Base1{
	public :
		void func(){
			M_A=10; //父类公共权限 子类也是公共
			M_B=20; //父类保护权限 子类也是保护
		//	M_C=30;    父类私有权限 ,子类访问不到 
		}
};
void test01(){
	son1 s1;
	s1.M_A=100;
  //	s1.M_B=200; 保护 访问不到 
} 

//保护继承 
class Base2{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
};
class son2 :protected Base2{
	public :
		void func(){
			M_A=10; //父类公共权限 子类变为保护权限 
			M_B=20; //父类保护权限 子类也是保护权限 
		//	M_C=30;    父类私有权限 ,子类访问不到 
		}
};
//私有继承 
class Base3{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
};
class son3 :private Base3{
	public :
		void func(){
			M_A=10; //父类公共权限 子类变为私有权限 
			M_B=20; //父类保护权限 子类变为私有权限 
		//	M_C=30;    父类私有权限 ,子类访问不到 
		}
};
int main(){
	
	
	
	system("pause");
	return 0; 
}
