#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//继承好处:减少重复代码
//语法:  class 子类 :  继承方式   父类
//子类 又称派生类
//父类 又称 基类 

//传统方式实现 
//class Java{
//	public: 
//	void heard(){
//		cout<<"首页,公开课,登录,注册....(公共头部)"<<endl;
//	}
//	void footer(){
//		cout<<"帮助中心,合作交流,站内地图,....(公共底部)"<<endl;
//	}
//	void left(){
//		cout<<"java,python,c++,....(公共分类列表)"<<endl;
//	}
//	void content(){
//		cout<<"java学科视频.."<<endl;
//	}
//}; 
//继承方式实现页面
class BasePage{
	public :
	void heard(){
		cout<<"首页,公开课,登录,注册....(公共头部)"<<endl;
	}
	void footer(){
		cout<<"帮助中心,合作交流,站内地图,....(公共底部)"<<endl;
	}
	void left(){
		cout<<"java,python,c++,....(公共分类列表)"<<endl;
	}

}; 
//java页面
class Java:public BasePage{
	public:
	void content(){
		cout<<"java学科视频.."<<endl;
	}

}; 
//python页面 
class python:public BasePage{
	public:
	void content(){
	cout<<"python学科视频.."<<endl;
	}

}; 
//c++ 
class cpp:public BasePage{
	public:
	void content(){
	cout<<"cpp学科视频.."<<endl;
	}

}; 
void test01(){
	cout<<"java下载视频如下:"<<endl; 
	Java j;
	j.heard();
	j.footer();
	j.left();
	j.content();
	cout<<"python下载视频如下:"<<endl; 
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
