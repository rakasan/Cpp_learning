#include <iostream>
#include <string>
using namespace std;
class Box
{
	int capacity;
    public:
	Box(int cap){
		capacity = cap;
	}
	friend void show();
};

void show()
{
	Box b(10);
	cout<<"Value of capacity is: "<<b.capacity<<endl;
}

int main(int argc, char const *argv[])
{
	show();
	return 0;
}
