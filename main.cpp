#include "MyStack.h"


int main()
{
	MyStack* stk = new MyStack();

	for (size_t i = 0; i < 50; i++)
	{
		stk->Push( i );
	}

	for (size_t i = 0; i < 51; i++)
	{
		cout << stk->Top() << endl;
		stk->Pop();
	}



	delete stk;

	system("pause");
	return 0;
}