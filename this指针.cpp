#include  <iostream>
#include  <string>
#include  <stdlib.h> 

using namespace std;

 //this ָ��
 //1.������Ƴ�ͻ
 //2.���ض������� *this
 class Person{
 	
 	public :
 		
 	Person (int age){
 		//thisָ�� ָ�� �����õĳ�Ա���� �����Ķ��� 
 		this->age=age;
 	}
 	int age;
 	//�����õķ�ʽ���أ����ص������������
	//����������ã����صľͲ���������������ǿ��������ĸ���
	//ֵ��ʽ���ػᴴ��һ���������� 
 	Person& PersonAdd(Person &p){
 		
 		this ->age+=p.age;
 		//this ָ�����P2��ָ��,��  *this ָ��P2���� 
 		return *this;
 	}
 	
 }; 
  //1.������Ƴ�ͻ
 void test01(){
 	
 	Person p(18);
 	
  cout <<p.age<<endl;
 }

 //2.���ض������� *this
 void test02(){
 	Person P1(10);
 	Person P2(20);
 	P2.PersonAdd(P1).PersonAdd(P1).PersonAdd(P1);
 	cout <<P2.age<<endl;
 }

int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0; 
}
