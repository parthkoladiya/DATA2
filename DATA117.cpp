//5. find a new program with private and protected access modifier. 
#include<iostream.h>
#include<conio.h>
class Different
{
 private:
	int id;
	char name[20];
  protected:
        void Namedata()
		{
		   cout << "Enter your Name";
		   cin >> name ;
		   cout << "Enter your id";
		   cin >> id ;
		}
};		
class Many : public Different
{
  public :
		void printdata()
		{
		  Namedata();
		}
};
void main()
{
  Many obj;
  clrscr();
  obj.printdata();
  getch();
}