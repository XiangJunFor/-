#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 

class building;

class  goodfrend{
	
	public :
	
	goodfrend();  //���캯�� 
	~goodfrend(); //���� 
	void visit1(); //��visit ���Է���buid��˽�г�Ա 
	
	void visit2(); //��visit�����Է���buid��˽�г�Ա 
	
	building  * buid;
}; 

class building{
  friend  void goodfrend::visit2(); //����goodfrend �� visit2 Ϊ��Ԫ����Է��� 
	public :
	 building();
	  
	 
    public :
    
    string settingroom;
    
    private:
    string bedroom;
  	
};
//����д��Ա����
 building::building(){
 	settingroom="����";
 	bedroom="����";
 } 
 
 goodfrend::~goodfrend(){
			//�ͷŶ������ݲ���,��Ϊ����������Ҫ�Լ��ͷ� 
		if(buid!=NULL){
		delete   buid;
		buid=NULL; 
	}
	cout<<"Peron ������������"<<endl;
 }
 
 goodfrend::goodfrend(){
 	buid=new building; 
 }
  void  goodfrend::visit1(){
  	
  	cout<<"���������ڷ���:"<<buid->settingroom<<endl;
	//cout<<"���������ڷ���:"<<buid->bedroom<<endl; 
}
 void  goodfrend::visit2(){
  	
  	cout<<"���������ڷ���:"<<buid->settingroom<<endl;
	cout<<"���������ڷ���:"<<buid->bedroom<<endl; 
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
