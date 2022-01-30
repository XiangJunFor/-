#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//模板的局限性
//模板并不是万能的 ,有些特定数据类型 ,需要具体化方式做特殊实现
//利用具体化的模板 ,可以解决自定义类型的通用化
//学习模板不是为了写模板,而是在STL中利用系统提供的模板 
class Person{
	public:
	
	Person(string name, int age){
		M_name=name;
		M_age=age;
	}
	string M_name;
	int M_age; 
}; 

template <class T>
bool func(T &a,T &b){
	
	return (a==b)?true:false;
}

//利用具体化Person 的版本实现代码,具体化优先调用
template <>bool func(Person &a,Person &b){
	
	return (a.M_name==b.M_name&& a.M_age==b.M_age)?true:false;
} 
void test01(){
	
	Person p1("tom",18);
	Person p2("tom",16);
	
	bool ret=func(p1,p2);
	if(ret){
		cout<<"一毛一样"<<endl; 
	}else{
		cout<<"啥也不是"<<endl; 
	}
	
}
int main(){
	test01();
	
	
	system("pause");
	return 0; 
}
