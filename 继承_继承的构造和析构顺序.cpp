#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
//�̳��й��������˳��

class base{
   public :
    base(){
    	cout<<"���๹�캯��"<<endl; 
    }
    ~base(){
    	cout<<"������������"<<endl; 
    }
}; 
class son :public base{
	
	public :
	 son(){
	 	cout<<"���๹��"<<endl; 
	 }
	 ~son(){
	 	cout <<"��������"<<endl; 
	 }
};
void test01(){
	 son s;
	 //�̳��еĹ��������˳������
	 //�ȹ��츸�� �ٹ�������  ,�����෴ 
}

int main(){
	  
	 test01();
	
	system("pause");
	return 0; 
} 
