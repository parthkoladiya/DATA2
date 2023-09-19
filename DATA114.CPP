//3. WAP to create 2 class (parent,child) using inheritance and perform any functionality using (protected).
#include<iostream.h>
#include<conio.h>
class freelancer
{
  private:
	int id,i;
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
};
class business : public freelancer		
{
   public:
		void accessfunction()
		{
		  Namedata();
		  Loopingdata();
		}
};
void main()
{
  business obj,*p;
  clrscr();
  obj.accessfunction();
  p->accessfunction();
  getch();
}