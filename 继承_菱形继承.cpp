#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//���μ̳�
class Animal{
	public :
	
	int age;
}; 
//������̳н�����μ̳����� 
//�̳�֮ǰ���Ϲؼ���virtual ��Ϊ��̳�
//Animal�������� 
class sheep:virtual  public Animal{
};
class Tuo: virtual  public Animal{
}; 
class  sheptuo:public  sheep,public Tuo{
	
};
void test01(){
	sheptuo s;
 	s.sheep::age=18;
 	s.Tuo::age=28;
 	cout<< "s.sheep"<<s.sheep::age<<endl;
 	cout<< "s.Tuo"<<s.Tuo::age<<endl;
 		cout<<s.age<<endl;
 	//�����μ̳�,��������ӵ����ͬ����,�������������� \
 	//���age��������֪�� ֻҪ��һ�ݾ͹���,���μ̳е����ж��� ��Դ�˷��� 
 	
}
int main(){
	test01(); 
	
	
	system("pause");
	return 0;
} 
