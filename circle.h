#include <iostream>
#include "point.h"
#pragma once

using namespace std;

class Circle
{
	public :
		//���ð뾶
		void setCircle_r(int r);
		//��ð뾶
		int getCircle_r();
		//����Բ��
		void setCircle_Center(Point Center);
	   //���Բ��
	    Point getCircle_Center();
	 private :
	 int M_r; //Բ�İ뾶
	 Point M_Center;//Բ��  
};

