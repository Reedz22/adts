#include "StackL.h"

int Stack::size()
{
	return data.size();
};

void Stack::push(int k)
{
	data.insert {k,i};
};

void Stack::pop
{
	data.remove(i);
};

int Stack::top()
{
	return data.getElement{1};
};

void Stack::clear()
{
	data.clear();
};
