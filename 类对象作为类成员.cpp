#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


//类对象作为类成员 
 
 
 class Phone {
 	
 	public :
 		
 		
	 		Phone (string pname){
	 			P_name=pname;
	 			cout<<"Phone 构造函数"<<endl; 
	 		}
	 		
 		
 		
 		
 		string  P_name;

 	
 };



class Person{
	
	
 	public :
 		//M_Phone=pname;  隐式转换法 
 	Person(string mname,string pname):M_name(mname),M_Phone(pname)
		{
 			cout<<"Person 构造函数"<<endl;
 		}
 			
	 string M_name;
	 Phone  M_Phone; 
} ;

void test01 (){
	Person P("张三","苹果MAX");
	 cout<<P.M_name<<"拿着"<<P.M_Phone.P_name<<endl; 
}
//当其他类的对象成为类的成员,先构造其他类的对象,再构造自己的对象,析构与之相反 
  
  int main(){
	 test01();

	
	system("pause");
	return 0; 
} 

