//WAP to create a class with 5 function using inheritance (protected).
#include<iostream.h>
#include<conio.h>
class Type
{
  private:
	int a,b,ans,id,i;
	char name[20];
  protected:
	void Namedata()
		{
		   cout << "Enter your Name";
		   cin >> name ;
		   cout << "Enter your id";
		   cin >> id ;
		}
		void Loopingdata()
		{
		  for(i=1;i<=5;i++)
		  {
		    cout << i << endl;
		  }
		}
		void setdata()
		{
		  cout << "Enter your 2 value" << endl;
		  cin >> a >> b;
	}
		void getdata()
		{
		  ans = a+b;
		   cout << ans;
		}
		void access()
		{
		  Loopingdata ();
		  Namedata();
		  setdata();
		  getdata();
		}
};
class Body : public Type
{
  public:
		void printdata()
		{
		  access();
		}
};
void main()
{
  Body obj;
  clrscr();
  obj.printdata();
  getch();
}