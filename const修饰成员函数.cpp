#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;

//������
//���������治���޸ĳ�Ա����
//���ǳ�Ա���Ա�����mutable�ؼ��� 
class Person{
	public :
	//this ָ��ı�����  ָ�볣��  ָ���ָ���ǲ��ܸ��ĵ�
	//�ڳ�Ա���������const ��Ϊ������this ָ��ָ���ֵ �����޸� 
	void  showPerson() const{
	 // this->	M_a=100;
	  this->M_b=100;
	 cout<<M_b<<endl; 
	
	}
	int M_a; 
	mutable int M_b; //�������,��ʹ���ڳ�������Ҳ���޸����ֵ,�ӹؼ���mutable 
}; 
void test01(){
	Person p;
	p.showPerson();
	
}
//������ 
//������,�����Ե�����ͨ��Ա���� .��Ϊ��ͨ��Ա���� �����޸����� 
void test02(){
	               //������ֻ�ܵ��ó����� ,Ҳֻ���޸ĳ����� 
  const Person p1; //�ڶ���ǰ���const  ��ɳ����� 
	p1.M_b=200;  //�ڳ���������Ҳ�����޸�  
	cout<<p1.M_b<<endl; 
	
} 

int main(){
	
   test01();
	test02();
	system("pause");
	return 0; 
}
