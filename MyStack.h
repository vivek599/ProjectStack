#pragma once

#include <iostream>
#include <vector>

using namespace std;

const int MAXSIZE = 100;

class MyStack
{
public:
	MyStack();
	~MyStack();

	void Push(int x);
	int Top();
	void Pop();
	bool IsEmpty();

private:
	int m_top;
	vector<int> m_stackArray;
};

