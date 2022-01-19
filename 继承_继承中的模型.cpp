#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//继承中的模型
//父类中所有非静态属性成员都会被子类继承下去
//父类中私有成员属性 是被编译器隐藏了,只是访问不到 ,并不是没有继承 

class Base{
	public :
	int M_A;
	protected :
	int M_B;
	private:
	int M_C; 
}; 
class son :public Base{
	public :
	 int M_d;
}; 
void test01(){
	
	son s;
	cout<<sizeof(son)<<endl; 
}

int main(){
	test01();
	
	
	system("pause");
	return 0; 
}
