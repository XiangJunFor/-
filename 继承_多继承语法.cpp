#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
//c++允许一个类多个继承
//但是c++实际开发不建议使用

class base1{
	public :
	base1(){
		m_a=100;
	}
	int m_a;
}; 
class base2{
	public :
	base2(){
		m_a=200;
	}
	int m_a;
}; 
//子类继承 base1 base2;
//语法 class 子类 : 继承方式  父类 1,继承方式 父类 2..... 
class son : public base1,public base2{
	public :
		son(){
			m_c=300;
			m_d=400;
		}
		int m_c;
		int m_d;
	
};
void test01(){
	son s;
	cout<<sizeof(s)<<endl;
	//如果父类出现同名 加作用域区分 
		cout<<s.base1::m_a<<endl;
		cout<<s.base2::m_a<<endl;
} 
int main(){
	
	 test01();
	
	system("pause");
	return 0; 
} 
