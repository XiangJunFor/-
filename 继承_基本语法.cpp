#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//�̳кô�:�����ظ�����
//�﷨:  class ���� :  �̳з�ʽ   ����
//���� �ֳ�������
//���� �ֳ� ���� 

//��ͳ��ʽʵ�� 
//class Java{
//	public: 
//	void heard(){
//		cout<<"��ҳ,������,��¼,ע��....(����ͷ��)"<<endl;
//	}
//	void footer(){
//		cout<<"��������,��������,վ�ڵ�ͼ,....(�����ײ�)"<<endl;
//	}
//	void left(){
//		cout<<"java,python,c++,....(���������б�)"<<endl;
//	}
//	void content(){
//		cout<<"javaѧ����Ƶ.."<<endl;
//	}
//}; 
//�̳з�ʽʵ��ҳ��
class BasePage{
	public :
	void heard(){
		cout<<"��ҳ,������,��¼,ע��....(����ͷ��)"<<endl;
	}
	void footer(){
		cout<<"��������,��������,վ�ڵ�ͼ,....(�����ײ�)"<<endl;
	}
	void left(){
		cout<<"java,python,c++,....(���������б�)"<<endl;
	}

}; 
//javaҳ��
class Java:public BasePage{
	public:
	void content(){
		cout<<"javaѧ����Ƶ.."<<endl;
	}

}; 
//pythonҳ�� 
class python:public BasePage{
	public:
	void content(){
	cout<<"pythonѧ����Ƶ.."<<endl;
	}

}; 
//c++ 
class cpp:public BasePage{
	public:
	void content(){
	cout<<"cppѧ����Ƶ.."<<endl;
	}

}; 
void test01(){
	cout<<"java������Ƶ����:"<<endl; 
	Java j;
	j.heard();
	j.footer();
	j.left();
	j.content();
	cout<<"python������Ƶ����:"<<endl; 
	python p;
	p.heard();
	p.footer();
	p.left();
	p.content();
}

 
int main(){
	test01();
	system("pause");
	return 0; 
}
