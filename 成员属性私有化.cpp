#include <iostream> 
#include <stdlib.h>
#include <string.h> 
using namespace std;   

//成员属性私有化

//优点1.将所有成员属性设置私有 ,可以自己控制读写权限
//优点2.对于写权限,我们可以检测数据有效性

//在类外获取私有数据 
class Person{
	
	public :   //用public接口接收 
	
	//设置姓名
	void  setname (string name){
		
		
		M_name=name; 
	} 
	//获取姓名 
	string getname(){
		
		return M_name;
		
	}		
	//获取年龄  只读 
	
	int getage(){
	//	M_age=18;
		return M_age=18;   //因为设置只读,所以不能更改 ,不能给与赋值权限 
	} 
	
	//设置对象   只写
	
	void  setLover(string lover){
		
		M_lover=lover ;
		
	}
	
	private : //私有权限 
	string M_name;    //姓名可读可写 
	
	int  M_age;       //可读     
	  
	string M_lover;  //可写 
	
}; 
int main(){
	Person  p;
	p.setname("张三");
    p.setLover("李四");
	cout<<"姓名  "<<p.getname()<<"  年龄  "<<p.getage()<<endl; 
	system("pause");
	return 0;
}
