#include <bits/stdc++.h>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//��ģ��ĳ�Ա�������òſ�ʼ����
class person1{
	public:
	void showp1(){
		cout<<"person1����"<<endl; 
	}
}; 
class person2{
	public :
	void showp2(){
		cout<<"person2 ����"<<endl; 
	}
};

template <class T>
class myclass{
	public :
	T obj;
	void func1(){
		obj.showp1();
	}
	void func2(){
		obj.showp2();
	}
};
 void test01(){
 	myclass<person1>m;
 	m.func1();
 }
int main(){
	test01();
	system("pause");
	return 0;
} 
