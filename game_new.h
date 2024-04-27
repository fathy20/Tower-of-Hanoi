#include <iostream>
//#include <iomanip>
using namespace std;
class tower {
private:
	int  count;
	char data[20];

public:
	tower();
	void  push(char);
	char  pop();
	void  display(int);
};
tower::tower()
{
	count = 0;
}

void tower::push(char x)
{
	if (count < 20) {
		data[count] = x;
		count++;
	}
}

char tower::pop()
{
	count--;
	return data[count];
}

void tower::display(int tag)
{
	int i;
	cout << "---------------------------------------" << endl;
	cout << /*setw(2)<<*/  tag + 1 << " |";
	for (i = 0; i < count; i++)
		cout << data[i] << " ";
	cout << endl;
}
