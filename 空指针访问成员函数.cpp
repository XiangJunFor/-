#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;
//��ָ����ó�Ա����

class Person{
	public :
		
	void showclassname(){
		cout<<"class name : Person"<<endl;
	}
	void  showclassage(){
		//����ԭ��Ϊ�����ָ��ΪNULL, ��Ա����Ĭ��Ϊ this->M_age;
		
		if(this==NULL){  //Ϊ�˳���׳��,��һ���ж� 
			return ;
		} 
		cout<<"class age : Person"<<M_age<<endl;
	} 
		
	int M_age;
}; 
void test01(){
	Person *p=NULL;
	p-> showclassname();
}
int main(){
	
  test01();
	
	system("pause");
	return 0; 
}
