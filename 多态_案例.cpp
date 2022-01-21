#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
//普通写法和多态写法 实现计算器
class Calculator{
	public :
		
	int getresult(string oper){
		if(oper=="+"){
		return num1+num2; 
		}
		if(oper=="-"){
		return num1-num2; 
		}
		if(oper=="*"){
		return num1*num2; 
		}
		//如果需要新的功能,要动源码
		//在真实开发中,提倡 开闭原则
		//开闭原则:对拓展进行开放,对修改进行关闭 
	}
	
	int num1;
	int num2;	
}; 
void test01(){
	
	Calculator c;
	c.num1=10;
	c.num2=30;
	
	cout<<"num1 "<<c.num1<<"+"<<" num2 "<<c.num2<<"="<<c.getresult("+")<<endl;
}

//利用多态进行实现
//多态好处
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期拓展 以及维护性高 
class strCalculator{
	public :
		
	 virtual	int getresult(){
			return 0;
		}
		int nuber1;
		int nuber2;
}; 
class addCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1+nuber2;
		}
	
}; 
class suCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1-nuber2;
		}
	
}; 
class muCalculator:public strCalculator{
	
	public :
		
	int getresult(){
		
		return nuber1*nuber2;
		}
	
}; 
void test02(){
	 strCalculator *abc=new addCalculator;
	 
	 abc->nuber1=100;
	 abc->nuber2=100;
	 cout<<abc->getresult()<<endl;
}
int main(){
 //	test01(); 
	 test02();
	
	system("pause");
	return 0;
} 
