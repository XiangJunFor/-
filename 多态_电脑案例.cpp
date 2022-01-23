#include  <stdlib.h>
#include  <string>
#include  <iostream>

using namespace std;
//抽象三个零件 
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
		cout<<"Intel 的cpu开始工作" <<endl; 
		}				
}; 
class Intelvido:public Vido{
	
	public :
		virtual  void dispaly(){
		cout<<"Intel 的显卡开始工作" <<endl; 
		}				
}; 
class Intelmemory:public Memory{
	
	public :
		virtual  void storage(){
		cout<<"Intel 的内存条开始工作" <<endl; 
		}				
}; 
class lenovocpu:public CPU{
	
	public :
		virtual  void calculator(){
		cout<<"lenovo 的cpu开始工作" <<endl; 
		}				
}; 
class lenovovido:public Vido{
	
	public :
		virtual  void dispaly(){
		cout<<"lenovo 的显卡开始工作" <<endl; 
		}				
}; 
class lenovomemory:public Memory{
	
	public :
		virtual  void storage(){
		cout<<"lenovo 的内存条开始工作" <<endl; 
		}				
}; 

class computer {
	public:
		//构造函数初始化 
	computer(CPU *cpu,Vido *vc,Memory *mem){
		m_cpu=cpu;
		m_vc=vc;
		m_mem=mem;	
	}
	 //提供一个析构函数删除零件的数据 
	 //子类中并没有创建新的堆区空间不需要虚析构 
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
		cout<<"调用"<<endl; 
	}
	//提供工作函数接口 
	void work(){
		m_cpu-> calculator();
		m_vc->dispaly();
		m_mem->storage(); 
	}

  private :
  CPU * m_cpu;  //CPU零件 
  Vido  *m_vc; //显卡 
  Memory  *m_mem;//内存 
  
};
void test01(){
	
    CPU *cpu=new  Intelcpu;
    Vido *vido=new  Intelvido;
    Memory *mem=new  Intelmemory;
    
    
     //子类没有堆区数据,没有必要用虚析构和纯虚析构释放内存直接删除即可 
    computer *computer1=new  computer(cpu,vido,mem);
    
    computer1->work();
    delete  computer1;
    delete   cpu,vido,mem;  
    cout<<"----------------------------------"<<endl;
    cout<<"第二太电脑  "<<endl; 
    computer *computer2=new  computer(new lenovocpu,new lenovovido ,new lenovomemory );
    
    computer2->work();
    delete  computer2;
  

	    
	   
}
int main(){
	test01(); 
	
	system("pause");
	return 0;
} 
