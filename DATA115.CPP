//4. WAP to create a class with private and protected access modifier.
#include <iostream.h>
#include <conio.h>

class Base
{
private:
    int privateVar;  // Private member variable

protected:
    int protectedVar;  // Protected member variable

public:
    Base() : privateVar(0), protectedVar(0) {}

    void setPrivateVar(int val)
	{
	privateVar = val;
    }

    int getPrivateVar()
	const {
	return privateVar;
    }
    void setProtectedVar(int val)
	{
	protectedVar = val;
    }

    int getProtectedVar()
	const{
	return protectedVar;
    }
};

class Derived : public Base
{
public:
    void setProtectedVarFromDerived(int val)
	{
	protectedVar = val;
    }
};

void main()
{
    Base obj1;
    Derived obj2;
    clrscr();

    obj1.setPrivateVar(42);
    obj2.setProtectedVar(100);

    cout << "Private variable in Base class: " << obj1.getPrivateVar() << endl;
    cout << "Protected variable in Base class: " << obj1.getProtectedVar() << endl;


    obj2.setProtectedVarFromDerived(200);
    cout << "Protected variable in Derived class: " << obj2.getProtectedVar() << endl;

    getch();
}
