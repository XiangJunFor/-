#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 


class building;

class  goodfrend{
	
	public :
	
	goodfrend();  //���������ʼ�� 
	~goodfrend();
	void visit();
	
	building  * buid;
}; 

class building{
  friend	class  goodfrend; //����goodfrend Ϊ��Ԫ����Է��� 
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
	cout<<" ��������ɾ����������"<<endl;
 }
 goodfrend::goodfrend(){
 	buid=new building; 
 }
  void  goodfrend::visit(){
  	
  	cout<<"���������ڷ���:"<<buid->settingroom<<endl;
	cout<<"���������ڷ���:"<<buid->bedroom<<endl; 
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
