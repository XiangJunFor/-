#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std; 

class building{
	
  //������˽��Ȩ�޵�����,���Է��� 
  friend void goodfriend(building &buid);
	
	public :
		
	building(){
		
		M_settingroom="����";
		
		M_bedroom="����";
	  
		}
		
    public :
	 
	string  M_settingroom;
	
	private :
		
	string M_bedroom;
};

void goodfriend(building &buid){
	 //��Ҫ������������:����building ,���βη��� 
  	cout<<"������ȫ�ֺ������ڷ��� :" <<buid.M_settingroom<<endl;
	cout<<"������ȫ�ֺ������ڷ��� :" <<buid.M_bedroom<<endl; 
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
