#include  <iostream> 
#include  <stdlib.h>
#include  <string>
using namespace std;

class Point
{
	public:
	//设置x轴 
	void setPonint_x(int x){
		
		P_x=x;
		
	}
	//获得x轴 
	int getPonint_x(){
		
	   	
	   	return P_x;
		
	}
		//设置y轴 
	void setPonint_y(int y){
		
		P_y=y;
		
	}
	//获得y轴 
	int  getPonint_y(){
		
		
		return P_y;
		
	}
	
	
	
  private :
  	
   int P_x;//x轴 
   int P_y;//x轴 
   
};

class Circle
{
	public :
		//设置半径
		void setCircle_r(int r){
	      	M_r=r;	
		}
		//获得半径
		int getCircle_r(){
			return M_r;
		} 
		//设置圆心
		void setCircle_Center(Point Center){
			M_Center=Center;
		} 
	   //获得圆心
	    Point getCircle_Center(){
	    	
	    	return   M_Center;
	    }
	 private :
	 int M_r; //圆的半径
	 Point M_Center;//圆心  
};

 //判断点和圆的关系
    void isInCircle(Circle &c,Point &p){
 	
 	//二点之间距离 平方  x0-x1平方 - y0-y1平方 
 	 int distance= 
	 (c.getCircle_Center().getPonint_x() - p.getPonint_x())*
	 (c.getCircle_Center().getPonint_x() - p.getPonint_x())+
	 (c.getCircle_Center().getPonint_y()- p.getPonint_y())*
	 (c.getCircle_Center().getPonint_y()- p.getPonint_y());	
 	
 	
 	   //计算半径的平方 
       int rdistance=c.getCircle_r()*c.getCircle_r();
       
       //判断位置关系
	   if(distance==rdistance){
	   	 cout<<" 点在圆上 "<<endl ;
	   } else if(distance>rdistance){
	   	
	   	 cout <<"点在圆心外"<<endl; 
	   }else{
	   	cout<<"点在圆心内"<<endl; 
	   }
 	
 };
 

int main(){
	//创建圆类 
	Circle c;
	Point  center;
	c.setCircle_r(10);
	center.setPonint_x(10);
	center.setPonint_y(0);
	c.setCircle_Center(center);
	
	//创建点类
	Point p;
	p.setPonint_x(10);
	p.setPonint_y(11);  
	
	isInCircle(c,p);
	system("pause");
	return 0;
}
