#include "SpeacialCounter.h"
#include <iostream>
using namespace std;

SpecialCounter::SpecialCounter()
{
}
int SpecialCounter::getStart()
{
	return start;
}
int SpecialCounter::getStop()
{
	return stop;
}

int SpecialCounter::getCount()
{
	return count;
}

void SpecialCounter::setStart(int x)
{
	start = x;
}

void SpecialCounter::setStop(int x)
{
	stop = x;
}

void SpecialCounter::setInc(int x)
{
	incdef = x;
}

void SpecialCounter::setDec(int x)
{
	decdef = x;
}

SpecialCounter SpecialCounter::operator++()
{
	start++;
	return *this;
}
SpecialCounter SpecialCounter::operator--()
{
	start--;
	return *this;
}
SpecialCounter SpecialCounter::operator++(int)
{
	SpecialCounter temp = *this;
	++*this;
	return temp;
}
SpecialCounter SpecialCounter::operator--(int)
{
	SpecialCounter temp = *this;
	++*this;
	return temp;
}

SpecialCounter::~SpecialCounter()
{
}

int main()
{
	SpecialCounter mySpecialCounter;


	return 0;
};