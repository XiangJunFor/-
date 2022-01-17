#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 

class building{
	
  //声明是私有权限的朋友,可以访问 
  friend void goodfriend(building &buid);
	
	public :
		
	building(){
		
		M_settingroom="客厅";
		
		M_bedroom="卧室";
	  
		}
		
    public :
	 
	string  M_settingroom;
	
	private :
		
	string M_bedroom;
};

void goodfriend(building &buid){
	 //不要用类型名访问:就是building ,用形参访问 
  	cout<<"好朋友全局函数正在访问 :" <<buid.M_settingroom<<endl;
	cout<<"好朋友全局函数正在访问 :" <<buid.M_bedroom<<endl; 
}
void test01(){
	
	building buid;
	goodfriend(buid);
	
}
int main(){
	
	test01(); 
	
	system("pause");
	return 0;
}
