#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//菱形继承
class Animal{
	public :
	
	int age;
}; 
//利用虚继承解决菱形继承问题 
//继承之前加上关键字virtual 变为虚继承
//Animal类称虚基类 
class sheep:virtual  public Animal{
};
class Tuo: virtual  public Animal{
}; 
class  sheptuo:public  sheep,public Tuo{
	
};
void test01(){
	sheptuo s;
 	s.sheep::age=18;
 	s.Tuo::age=28;
 	cout<< "s.sheep"<<s.sheep::age<<endl;
 	cout<< "s.Tuo"<<s.Tuo::age<<endl;
 		cout<<s.age<<endl;
 	//当菱形继承,二个父类拥有相同属性,可用作用域区分 \
 	//这份age数据我们知道 只要有一份就够了,菱形继承导致有二份 资源浪费了 
 	
}
int main(){
	test01(); 
	
	
	system("pause");
	return 0;
} 
