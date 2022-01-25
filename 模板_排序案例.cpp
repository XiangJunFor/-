#include  <iostream>
#include  <string>
#include  <stdlib.h>

using namespace std;

//ʵ��ͨ��  �������������ĺ���
//����  �Ӵ�С 
//�㷨   ѡ��
//����  char����  int ����

template <class T>
 void myswap(T&a,T&b){
 	T temp=a;
 	a=b;
 	b=temp;
 }
 template <typename T>
 void mysort(T arr[],int len){
 	int i;
 	for( i=0;i<len;i++){
 		int max=i;
 		for(int j=i+1;j<len;j++){
 			if(arr[max]>arr[j]){
 				max=j;  //�������ֵ 
 			}
 		}
 		if(max!=i){
 			 myswap(arr[max],arr[i]);
 		} 
 	} 
 } 
 
 template <class T>
 void printArr(T arrsort,int len){
 	for(int i=0;i<len;i++){
 		cout<<arrsort[i]<<" ";
 	}
 	cout<<endl; 
 } 
void test01(){
	char arrsort[]="fedcba";
	int num=sizeof(arrsort)/sizeof(char);
	mysort(arrsort,num);
	printArr(arrsort,num);
} 
void test02(){
	int arrint[]={8,5,7,6,9,10,15,12};
	int num=sizeof(arrint)/sizeof(int);
	mysort(arrint,num);
	printArr(arrint,num);
}
int main(){
	//test01();
	test02();
	system("pause");
	return 0; 
}
