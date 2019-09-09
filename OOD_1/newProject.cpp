#include <iostream>

class LetDebug
{
public:
	void printNum() 
	{
		int s1 = 32767;
		int s2 = 1;
		int s3 = (int)s1 + s2;
		std::cout << s3 << std::endl;
	}
};
int main() {
	LetDebug* id = new LetDebug;
	id->printNum();
	std::cout << "I have made change!!" << std::endl;

	return 0;
}
