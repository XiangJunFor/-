#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;
//��̬����������Ʒ
class Abstrack{
	public:
		//��ˮ 
	 virtual  void   boil()=0; 
	   //�������� 
	 virtual  void  put()=0;
	   // ����
	virtual  void  brew()=0;
	   //�������� 
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
	 	cout<<"��ˮ"<<endl; 
	 }; 
	  
	 virtual  void  put(){
	 	cout<<"�����Ҷ"<<endl; 
	 };
	   
	virtual  void  brew(){
	
	cout<<"����"<<endl; 
    };
	   
	 virtual  void  putsomething(){
	 	 cout<<"��������"<<endl; 
	 }
};
class coffee:public Abstrack{
		public:
	
	 virtual  void   boil(){
	 	cout<<"��ˮ"<<endl; 
	 }; 
	  
	 virtual  void  put(){
	 	cout<<"�ſ���"<<endl; 
	 };
	   
	virtual  void  brew(){
	
	cout<<"����"<<endl; 
    };
	   
	 virtual  void  putsomething(){
	 	 cout<<"�����̲������"<<endl; 
	 }
}; 
//���󷽷�
void  dowork(Abstrack *abc) {
	
	abc->makedrink();
	delete abc;
}
void test01(){   
    //��ͳ���� 
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
