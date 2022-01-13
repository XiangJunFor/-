#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 
//二种分类
//1.按参数分为 无参构造 有参构造
//2.按类型分 ,普通构造和拷贝构造

class  Person {
	public :
		
	 Person(){
	 	
	 	cout<<"无参构造的函数"<<endl; 
	 } 
	 Person(int a){
	 	 age=a;
	 	cout<<"有参构造的函数"<<endl; 
	 } 
	 Person(const Person &p){
	 	//将类里面的属性拷贝到我身上 
	 	age=p.age;
	 	cout<<"拷贝构造的函数"<<endl; 
	 } 
	~Person(){
		 cout<<"析构函数"<<endl; 
	} 
	int age;
}; 

void test01(){

//调用
//1.括号法
 // Person P;  //默认调用 
//  Person p1(10); //调用有参函数  
//  Person p2(p1);//调用拷贝函数 
//  cout<<p2.age<<endl;   
  //注意事项 
  //1.调用默认 构造时不要加括号(),否则编译器会认为是个函数声明,不会认为在创建对象     
  
  
   
//2.显示法
    Person  P;
	
	Person P1=Person(10);  //有参构造   Person(10);匿名对象  特点:当前执行结束后,系统会回收  
	
	Person P2=Person(P1);  //拷贝构造 

   //注意事项 
   //1.不要用拷贝构造函数,初始化匿名对象 编译器会认为 Person(P1) = Person P1 对象声明 


//3.隐式转换法 
     Person P3=10;//相当于   Person P3=Person(10);
	 Person P4=P3; //相当于   	Person P4=Person(P3);  //拷贝构造 

}
int main(){
	test01(); 
	
	
	system("pause");
	return 0;
}
