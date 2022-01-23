#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;
//����������� 
class CPU{
	public :
	virtual  void calculator()=0;
}; 

class Vido{
	 public:
	 virtual  void dispaly()=0;
};
class  Memory{
   	 public:
	 virtual  void storage()=0;
};

class Intelcpu:public CPU{
	
	public :
		virtual  void calculator(){
		cout<<"Intel ��cpu��ʼ����" <<endl; 
		}				
}; 
class Intelvido:public Vido{
	
	public :
		virtual  void dispaly(){
		cout<<"Intel ���Կ���ʼ����" <<endl; 
		}				
}; 
class Intelmemory:public Memory{
	
	public :
		virtual  void storage(){
		cout<<"Intel ���ڴ�����ʼ����" <<endl; 
		}				
}; 
class lenovocpu:public CPU{
	
	public :
		virtual  void calculator(){
		cout<<"lenovo ��cpu��ʼ����" <<endl; 
		}				
}; 
class lenovovido:public Vido{
	
	public :
		virtual  void dispaly(){
		cout<<"lenovo ���Կ���ʼ����" <<endl; 
		}				
}; 
class lenovomemory:public Memory{
	
	public :
		virtual  void storage(){
		cout<<"lenovo ���ڴ�����ʼ����" <<endl; 
		}				
}; 

class computer {
	public:
		//���캯����ʼ�� 
	computer(CPU *cpu,Vido *vc,Memory *mem){
		m_cpu=cpu;
		m_vc=vc;
		m_mem=mem;	
	}
	 //�ṩһ����������ɾ����������� 
	 //�����в�û�д����µĶ����ռ䲻��Ҫ������ 
	~computer(){
		if(m_cpu!=NULL){			
			delete m_cpu;
			m_cpu=NULL;
		}
		if(m_vc!=NULL){			
			delete m_vc;
			m_vc=NULL;
		}
		if(m_mem!=NULL){			
			delete m_mem;
			m_mem=NULL;
		}
		cout<<"����"<<endl; 
	}
	//�ṩ���������ӿ� 
	void work(){
		m_cpu-> calculator();
		m_vc->dispaly();
		m_mem->storage(); 
	}

  private :
  CPU * m_cpu;  //CPU��� 
  Vido  *m_vc; //�Կ� 
  Memory  *m_mem;//�ڴ� 
  
};
void test01(){
	
    CPU *cpu=new  Intelcpu;
    Vido *vido=new  Intelvido;
    Memory *mem=new  Intelmemory;
    
    
     //����û�ж�������,û�б�Ҫ���������ʹ��������ͷ��ڴ�ֱ��ɾ������ 
    computer *computer1=new  computer(cpu,vido,mem);
    
    computer1->work();
    delete  computer1;
    delete   cpu,vido,mem;  
    cout<<"----------------------------------"<<endl;
    cout<<"�ڶ�̫����  "<<endl; 
    computer *computer2=new  computer(new lenovocpu,new lenovovido ,new lenovomemory );
    
    computer2->work();
    delete  computer2;
  

	    
	   
}
int main(){
	test01(); 
	
	system("pause");
	return 0;
} 
