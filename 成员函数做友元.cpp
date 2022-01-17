#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 

class building;

class  goodfrend{
	
	public :
	
	goodfrend();  //构造函数 
	~goodfrend(); //析构 
	void visit1(); //让visit 可以访问buid中私有成员 
	
	void visit2(); //让visit不可以访问buid中私有成员 
	
	building  * buid;
}; 

class building{
  friend  void goodfrend::visit2(); //声明goodfrend 的 visit2 为友元类可以访问 
	public :
	 building();
	  
	 
    public :
    
    string settingroom;
    
    private:
    string bedroom;
  	
};
//类外写成员函数
 building::building(){
 	settingroom="客厅";
 	bedroom="卧室";
 } 
 
 goodfrend::~goodfrend(){
			//释放堆区数据操作,因为堆区数据需要自己释放 
		if(buid!=NULL){
		delete   buid;
		buid=NULL; 
	}
	cout<<"Peron 析构函数调用"<<endl;
 }
 
 goodfrend::goodfrend(){
 	buid=new building; 
 }
  void  goodfrend::visit1(){
  	
  	cout<<"好朋友正在访问:"<<buid->settingroom<<endl;
	//cout<<"好朋友正在访问:"<<buid->bedroom<<endl; 
}
 void  goodfrend::visit2(){
  	
  	cout<<"好朋友正在访问:"<<buid->settingroom<<endl;
	cout<<"好朋友正在访问:"<<buid->bedroom<<endl; 
}


 void  test01(){
  	goodfrend gd;
  	gd.visit1();
  	gd.visit2();
  }
 
int main(){

	 test01();
	  
	system("pause");
	return 0;
}
