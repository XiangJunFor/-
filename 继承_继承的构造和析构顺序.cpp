#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
//继承中构造和析构顺序

class base{
   public :
    base(){
    	cout<<"父类构造函数"<<endl; 
    }
    ~base(){
    	cout<<"父类析构函数"<<endl; 
    }
}; 
class son :public base{
	
	public :
	 son(){
	 	cout<<"子类构造"<<endl; 
	 }
	 ~son(){
	 	cout <<"子类析构"<<endl; 
	 }
};
void test01(){
	 son s;
	 //继承中的构造和析构顺序如下
	 //先构造父类 再构造子类  ,析构相反 
}

int main(){
	  
	 test01();
	
	system("pause");
	return 0; 
} 
