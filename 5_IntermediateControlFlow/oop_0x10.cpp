#include <iostream>
#include <string>
using namespace std;
class AB
{
	int a;
public:
	AB()
	{
	    cout<<"Just a constructor";
	}

	AB(int i)
	{
		a = i;
	}
	void assign_2(int i){
		a = i;
	}
	int return_value(){
		return a;
	}
};

int main()
{
	AB obj;
	obj.assign_2(5);
	cout<<obj.return_value();
}
