#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


//����һ����������(Cube)
//������������������
//ȫ�ֺ������Ա�����ж϶����������Ƿ����

//ȫ�ֺ���
double area(double  length,double wide,double highly){
	//A = 2wl + 2lh + 2h�����ʽ 
	return   (2*wide* length)+(2*length*highly)+(2*highly);
} 

double volume(double  length,double wide,double highly){
	//V = lwh //�����ʽ 
	 
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
    cout <<"ȫ�ֺ���"<<endl; 
    cout<<" ���볤 " <<endl;
	cin>>l; 
	cout<<" ����� " <<endl;
	cin>>w; 
	cout<<" ����� " <<endl;
	cin>>h; 
	A=area(l,w,h);
	cout<<" ���Ϊ "<<A<<endl;
	v=volume(l,w,h); 
	cout<<" ���Ϊ "<<v<<endl;
	
	cout<<" ��Ա���� "<<endl;	
	 cout<<" �������ڳ� " <<endl;
	 cin>>M_l;
	// Cube.M_length=M_l;
	 cout<<" �������ڿ� " <<endl;
	 cin>>M_w;
	 //Cube.M_wide=M_w; 
	 cout<<" �������ڸ� " <<endl;
	 cin>>M_h;
	 //Cube.M_highly=M_h;
    A_m= Cube.cube_A(M_l,M_w,M_h);
    v_m= Cube.cube_V(M_l,M_w,M_h);
    
   if((A== A_m)&&(v== v_m)){
   	
   	 cout <<"�������������" <<endl; 
   	
   }else{
   	cout <<"���������岻���" <<endl; 
   }
	 
	system("pause");
	return 0; 
}
