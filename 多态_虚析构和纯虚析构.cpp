#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;

class Animal{
	public:
		
	Animal(){
		cout<<"���๹�캯������"<<endl; 
	}	
	//�������������Խ�� ����ָ���ͷ�������� ���ɾ����� 
 //   virtual ~Animal(){
//		cout<<"����������������"<<endl; 
//	}	
	//��������  ��Ҫ������ʵ��,���˴�������֮�������Ҳ���ڳ�����,�޷�ʵ���� 
	virtual ~Animal()=0;
	
	virtual void speak()=0;
	
	string *M_name; 
}; 
 Animal::~Animal(){
 	cout<<"���ി����������"<<endl; 
 }
class cat:public Animal{
	public:
	cat(string name){
		M_name=new string(name);
		cout<<"���๹�캯������"<<endl; 
	}	
    ~cat(){
    	if(M_name!=NULL){
    		M_name=NULL;
    		delete M_name;
    	}
		cout<<"����������������"<<endl; 
	}	
	virtual void speak(){
		
		cout<<*M_name<<"Сè��˵��"<<endl; 
	}
	
}; 
void test01(){
	//��̬ʹ��ʱ,��������������ݿ��ٵ�����,��ô�������޷����ʵ������������,����취������
	//���������ǲ��������������,������������ж�������,�����ڴ�й¶ 
	Animal *abs=new cat("tom");
	abs->speak();
	delete abs;
}
int main(){
	test01();
	
	system("pause");
	return 0;
} 
