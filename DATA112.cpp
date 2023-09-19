//WPA to create a class and perfom addition of 2 variabal using inherotance(private)
#include<iostream.h>
#include<conio.h>
class Demo
{
  private:
	int a,b,ans;
  private:
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
  public:
		void accessdata()
		{
		  setdata();
		  getdata();
		}
};
class ASS : public Demo
{
  public:
		void printdata()
		{
		  accessdata();
		}
};
void main()
{
  ASS obj;
  clrscr();
  obj.printdata();
  getch();
}