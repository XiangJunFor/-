#include <bits/stdc++.h>

using namespace std;

//类模板与继承

template <class T>
class base {
	
	T m;
}; 
 //class son:public  base  //错误继承 ,必须要知道父类中T的类型 才能继承子类 
 class son :public base<int> 
{ 
	
};
void test01(){
	
	
} 
int main(){
	
	
	
	getchar();
	return 0;
} 
