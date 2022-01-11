#include <iostream>
#include "point.h"
#pragma once

using namespace std;

class Circle
{
	public :
		//设置半径
		void setCircle_r(int r);
		//获得半径
		int getCircle_r();
		//设置圆心
		void setCircle_Center(Point Center);
	   //获得圆心
	    Point getCircle_Center();
	 private :
	 int M_r; //圆的半径
	 Point M_Center;//圆心  
};

