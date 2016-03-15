
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

	~SpecialCounter();
};