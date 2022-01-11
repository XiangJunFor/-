#include "circle.h"

#include "point.h"




	//设置半径
		void Circle::setCircle_r(int r){
	      	M_r=r;	
		}
		//获得半径
		int Circle::getCircle_r(){
			return M_r;
		} 
		//设置圆心
		void Circle::setCircle_Center(Point Center){
			M_Center=Center;
		} 
	   //获得圆心
	     Point Circle:: getCircle_Center(){
	    	
	    	return   M_Center;
	    }


