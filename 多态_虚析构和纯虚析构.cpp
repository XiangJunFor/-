#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;

class Animal{
	public:
		
	Animal(){
		cout<<"父类构造函数调用"<<endl; 
	}	
	//利用虚析构可以解决 父类指针释放子类对象 不干净问题 
 //   virtual ~Animal(){
//		cout<<"父类析构函数调用"<<endl; 
//	}	
	//纯虚析构  需要声明和实现,有了纯虚析构之后这个类也属于抽象类,无法实例化 
	virtual ~Animal()=0;
	
	virtual void speak()=0;
	
	string *M_name; 
}; 
 Animal::~Animal(){
 	cout<<"父类纯虚析构调用"<<endl; 
 }
class cat:public Animal{
	public:
	cat(string name){
		M_name=new string(name);
		cout<<"子类构造函数调用"<<endl; 
	}	
    ~cat(){
    	if(M_name!=NULL){
    		M_name=NULL;
    		delete M_name;
    	}
		cout<<"子类析构函数调用"<<endl; 
	}	
	virtual void speak(){
		
		cout<<*M_name<<"小猫在说话"<<endl; 
	}
	
}; 
void test01(){
	//多态使用时,如果子类中有数据开辟到堆区,那么父类是无法访问到子类的析构的,解决办法虚析构
	//父类析构是不会调用子类析构,导致子类如果有堆区属性,出现内存泄露 
	Animal *abs=new cat("tom");
	abs->speak();
	delete abs;
}
int main(){
	test01();
	
	system("pause");
	return 0;
} 
