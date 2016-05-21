#include <iostream>

using namespace std;


class band
{
	private:
	
		string name;

	protected:
		
		int counter;
		virtual int getcount()=0;
	
	
	public:
	
		void setname(string name)
		{
			 this -> name = name;
		}	
		
		string getname()
		{
			 return this->name;
		}
	
	
						
};

class metalband:public band
{
	private:
		int member;
		int pyro;
	
	public:
	
		
		
		void setmem(int member)
		{
			this ->member=member;
		}
		
		int getmem()
		{
			return this->member;
		}
		
		void setpy(int pyro)
		{
			this ->pyro=pyro;
		}
		
		int getpy()
		{
			return this->pyro;
		}
		
		int getcount()
		
		{
			counter=member+pyro;
			return counter;
			
		}
		
};

class jazzband:public band
{
private:
		int member;
	
	public:
	
		
		
		void setmem(int member)
		{
			this ->member=member;
		}
		
		int getmem()
		{
			return this->member;
		}
		
		
		int getcount()
		
		{
			counter=member;
			return counter;
			
		}
};
class marchingband:public band
{
	private:
		int member;
	
	public:
	
		
		
		void setmem(int member)
		{
			this ->member=member;
		}
		
		int getmem()
		{
			return this->member;
		}
		
		
		int getcount()
		
		{
			counter=member;
			return counter;
			
		}
};
class sympony:public band
{
	private:
		int member;
		int conductor;
	
	public:
		sympony()
		{
			conductor=1;
		}
		
		
		void setmem(int member)
		{
			this ->member=member;
		}
		
		int getmem()
		{
			return this->member;
		}
		
	
		int getcount()
		
		{
		
			
			counter=member+conductor;
			return counter;
			
			
		
		}
};


int main()
{
	metalband z;
	z.setmem(7);
	z.setpy(5);
	z.setname("Metalband");
	//////////////////////////
	jazzband i;
	i.setname("Jazzband");
	i.setmem(9);
	/////////////////////////
	marchingband l;
	l.setname("Marching Name");
	l.setmem(10);
	//////////////////////////
	
	sympony f;
	f.setmem(12);
	f.setname("Conductor");
	
	
	cout<<z.getname()<<endl;
	cout<<z.getcount()<<endl<<endl;
	cout<<i.getname()<<endl;
	cout<<i.getcount()<<endl<<endl;
	cout<<l.getname()<<endl;
	cout<<l.getcount()<<endl<<endl;
	cout<<f.getname()<<endl;
	cout<<f.getcount()<<endl<<endl;
	
	//setcount(a);
	
}
