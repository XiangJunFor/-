#include <iostream> 
#include <stdlib.h>
#include <string.h> 
using namespace std;   

//��Ա����˽�л�

//�ŵ�1.�����г�Ա��������˽�� ,�����Լ����ƶ�дȨ��
//�ŵ�2.����дȨ��,���ǿ��Լ��������Ч��

//�������ȡ˽������ 
class Person{
	
	public :   //��public�ӿڽ��� 
	
	//��������
	void  setname (string name){
		
		
		M_name=name; 
	} 
	//��ȡ���� 
	string getname(){
		
		return M_name;
		
	}		
	//��ȡ����  ֻ�� 
	
	int getage(){
	//	M_age=18;
		return M_age=18;   //��Ϊ����ֻ��,���Բ��ܸ��� ,���ܸ��븳ֵȨ�� 
	} 
	
	//���ö���   ֻд
	
	void  setLover(string lover){
		
		M_lover=lover ;
		
	}
	
	private : //˽��Ȩ�� 
	string M_name;    //�����ɶ���д 
	
	int  M_age;       //�ɶ�     
	  
	string M_lover;  //��д 
	
}; 
int main(){
	Person  p;
	p.setname("����");
    p.setLover("����");
	cout<<"����  "<<p.getname()<<"  ����  "<<p.getage()<<endl; 
	system("pause");
	return 0;
}
