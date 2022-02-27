#include <bits/stdc++.h>
using namespace std;

//类模板中成员函数创建时机
//普通类中的成员函数一开始就可以创建
//类模板的成员函数调用才开始创建
class person1{
	public:
	void showp1(){
		cout<<"person1调用"<<endl; 
	}
}; 
class person2{
	public :
	void showp2(){
		cout<<"person2 调用"<<endl; 
	}
};

template <class T>
class myclass{
	public :
	T obj;
	void func1(){
		obj.showp1();
	}
	void func2(){
		obj.showp2();
	}
};
 void test01(){
 	myclass<person1>m;
 	m.func1();
 }
int main(){
	test01();
	system("pause");
	return 0;
} 
