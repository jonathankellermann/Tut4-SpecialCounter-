#include <iostream>;
class SpecialCounter
{
private:
		int start = 0;
		int stop = 255;
		int incdef = 1;
		int decdef = 1;

		int count = start;
public:
	SpecialCounter();
	int getStart();
	int getStop();
	int getCount();
	void setStart(int);
	void setStop(int);
	void setInc(int);
	void setDec(int);
	SpecialCounter operator++();
	SpecialCounter operator--();
	SpecialCounter operator++(int);
	SpecialCounter operator--(int);
	~SpecialCounter();
};