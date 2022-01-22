#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;
//多态案例制作饮品
class Abstrack{
	public:
		//煮水 
	 virtual  void   boil()=0; 
	   //放入佐料 
	 virtual  void  put()=0;
	   // 冲泡
	virtual  void  brew()=0;
	   //放入佐料 
	 virtual  void  putsomething()=0;
	 void makedrink(){
	 	boil();
	 	put();
	 	brew();
	 	putsomething();
	 }
}; 
class team:public Abstrack{
		public:
	
	 virtual  void   boil(){
	 	cout<<"烧水"<<endl; 
	 }; 
	  
	 virtual  void  put(){
	 	cout<<"放入茶叶"<<endl; 
	 };
	   
	virtual  void  brew(){
	
	cout<<"冲泡"<<endl; 
    };
	   
	 virtual  void  putsomething(){
	 	 cout<<"放入佐料"<<endl; 
	 }
};
class coffee:public Abstrack{
		public:
	
	 virtual  void   boil(){
	 	cout<<"烧水"<<endl; 
	 }; 
	  
	 virtual  void  put(){
	 	cout<<"放咖啡"<<endl; 
	 };
	   
	virtual  void  brew(){
	
	cout<<"冲泡"<<endl; 
    };
	   
	 virtual  void  putsomething(){
	 	 cout<<"放入奶茶或者糖"<<endl; 
	 }
}; 
//对象方法
void  dowork(Abstrack *abc) {
	
	abc->makedrink();
	delete abc;
}
void test01(){   
    //传统方法 
	//Abstrack  *a=new  team;
//	a->boil();
//	a->brew();
//	a->put();
//	a->putsomething();
  dowork(new team);
  
	 
} 

int main(){
	test01(); 
	
	system("pause");
	return 0;
} 
