#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 


class building;

class  goodfrend{
	
	public :
	
	goodfrend();  //可在类外初始化 
	~goodfrend();
	void visit();
	
	building  * buid;
}; 

class building{
  friend	class  goodfrend; //声明goodfrend 为友元类可以访问 
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
	cout<<" 析构函数删除堆区数据"<<endl;
 }
 goodfrend::goodfrend(){
 	buid=new building; 
 }
  void  goodfrend::visit(){
  	
  	cout<<"好朋友正在访问:"<<buid->settingroom<<endl;
	cout<<"好朋友正在访问:"<<buid->bedroom<<endl; 
}


 void  test01(){
  	goodfrend gd;
  	gd.visit();
  }
int main(){
	test01();
	 
	system("pause");
	return 0;
}
