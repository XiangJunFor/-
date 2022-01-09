#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


//设置一个立方体类(Cube)
//求出立方体的体积和面积
//全局函数与成员函数判断二个立方体是否相等

//全局函数
double area(double  length,double wide,double highly){
	//A = 2wl + 2lh + 2h面积公式 
	return   (2*wide* length)+(2*length*highly)+(2*highly);
} 

double volume(double  length,double wide,double highly){
	//V = lwh //体积公式 
	 
	 return (length*wide*highly);
}

class cube{
	
	public :
		double M_length; 
	 	double M_wide; 
		double M_highly; 
		
	double cube_A(double M_length,double M_wide,double M_highly){
		
		return   (2*M_wide* M_length)+(2*M_length*M_highly)+(2*M_highly);
		
	}
	double cube_V(double M_length,double M_wide,double M_highly){
		 return (M_length*M_wide*M_highly);
	}
	
	
};

int main(){
	double A;
	double v;
	double A_m;
	double v_m;
    double l,w,h;
    double M_l,M_w,M_h;
    cube Cube ;
    cout <<"全局函数"<<endl; 
    cout<<" 输入长 " <<endl;
	cin>>l; 
	cout<<" 输入宽 " <<endl;
	cin>>w; 
	cout<<" 输入高 " <<endl;
	cin>>h; 
	A=area(l,w,h);
	cout<<" 面积为 "<<A<<endl;
	v=volume(l,w,h); 
	cout<<" 体积为 "<<v<<endl;
	
	cout<<" 成员函数 "<<endl;	
	 cout<<" 输入类内长 " <<endl;
	 cin>>M_l;
	// Cube.M_length=M_l;
	 cout<<" 输入类内宽 " <<endl;
	 cin>>M_w;
	 //Cube.M_wide=M_w; 
	 cout<<" 输入类内高 " <<endl;
	 cin>>M_h;
	 //Cube.M_highly=M_h;
    A_m= Cube.cube_A(M_l,M_w,M_h);
    v_m= Cube.cube_V(M_l,M_w,M_h);
    
   if((A== A_m)&&(v== v_m)){
   	
   	 cout <<"二个立方体相等" <<endl; 
   	
   }else{
   	cout <<"二个立方体不相等" <<endl; 
   }
	 
	system("pause");
	return 0; 
}
