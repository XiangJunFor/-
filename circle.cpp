#include "circle.h"

#include "point.h"




	//���ð뾶
		void Circle::setCircle_r(int r){
	      	M_r=r;	
		}
		//��ð뾶
		int Circle::getCircle_r(){
			return M_r;
		} 
		//����Բ��
		void Circle::setCircle_Center(Point Center){
			M_Center=Center;
		} 
	   //���Բ��
	     Point Circle:: getCircle_Center(){
	    	
	    	return   M_Center;
	    }


