#include  <iostream> 
#include  <stdlib.h>
#include  <string>
using namespace std;

class Point
{
	public:
	//����x�� 
	void setPonint_x(int x){
		
		P_x=x;
		
	}
	//���x�� 
	int getPonint_x(){
		
	   	
	   	return P_x;
		
	}
		//����y�� 
	void setPonint_y(int y){
		
		P_y=y;
		
	}
	//���y�� 
	int  getPonint_y(){
		
		
		return P_y;
		
	}
	
	
	
  private :
  	
   int P_x;//x�� 
   int P_y;//x�� 
   
};

class Circle
{
	public :
		//���ð뾶
		void setCircle_r(int r){
	      	M_r=r;	
		}
		//��ð뾶
		int getCircle_r(){
			return M_r;
		} 
		//����Բ��
		void setCircle_Center(Point Center){
			M_Center=Center;
		} 
	   //���Բ��
	    Point getCircle_Center(){
	    	
	    	return   M_Center;
	    }
	 private :
	 int M_r; //Բ�İ뾶
	 Point M_Center;//Բ��  
};

 //�жϵ��Բ�Ĺ�ϵ
    void isInCircle(Circle &c,Point &p){
 	
 	//����֮����� ƽ��  x0-x1ƽ�� - y0-y1ƽ�� 
 	 int distance= 
	 (c.getCircle_Center().getPonint_x() - p.getPonint_x())*
	 (c.getCircle_Center().getPonint_x() - p.getPonint_x())+
	 (c.getCircle_Center().getPonint_y()- p.getPonint_y())*
	 (c.getCircle_Center().getPonint_y()- p.getPonint_y());	
 	
 	
 	   //����뾶��ƽ�� 
       int rdistance=c.getCircle_r()*c.getCircle_r();
       
       //�ж�λ�ù�ϵ
	   if(distance==rdistance){
	   	 cout<<" ����Բ�� "<<endl ;
	   } else if(distance>rdistance){
	   	
	   	 cout <<"����Բ����"<<endl; 
	   }else{
	   	cout<<"����Բ����"<<endl; 
	   }
 	
 };
 

int main(){
	//����Բ�� 
	Circle c;
	Point  center;
	c.setCircle_r(10);
	center.setPonint_x(10);
	center.setPonint_y(0);
	c.setCircle_Center(center);
	
	//��������
	Point p;
	p.setPonint_x(10);
	p.setPonint_y(11);  
	
	isInCircle(c,p);
	system("pause");
	return 0;
}
