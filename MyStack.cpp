#include "MyStack.h"

MyStack::MyStack() :
	m_top(-1)
{
	m_stackArray.resize(MAXSIZE);
}

MyStack::~MyStack()
{

}

void MyStack::Push(int x)
{
	if (m_top == MAXSIZE - 1)
	{
		cout << "Error: Stack Overflow..." << endl;
		return;
	}

	m_stackArray[++m_top] = x;
}

int MyStack::Top()
{
	return  !IsEmpty() ? m_stackArray[m_top] : -1;
}

void MyStack::Pop()
{
	if (m_top <= -1)
	{
		cout << "Error: Stack Empty..." << endl;
		return;
	}
	m_top--;
}

bool MyStack::IsEmpty()
{
	return m_top == -1;
}
