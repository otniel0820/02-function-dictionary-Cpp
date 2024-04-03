
#include<iostream>
#include <iomanip>

float division(float a, float b)
{
    float result = a / b;
	return result;
}

int validation(int num)
{
	if (num %2 == 0)
	{
        std::cout << "The number is even." << '\n';
		return 0;
	}
	else
	{
        std::cout << "The number is old." << '\n';
		return 1;
	}

    return 0;
}