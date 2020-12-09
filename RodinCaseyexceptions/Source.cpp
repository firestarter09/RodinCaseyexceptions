#include <iostream>

using namespace std;

char character(char start, int offset)
{
	char upperMin = 'A', upperMax = 'Z';
	char lowerMin = 'a', lowerMax = 'z';
	bool upper = start >= upperMin && start <= upperMax;
	bool lower = start >= lowerMin && start <= lowerMax;

	if (!upper && !lower)
		throw "invalidCharacterexcpeption";

	char dest = start + offset;

	if (dest < upperMin || dest > lowerMax)
		throw "invalidRangeExpection";

	if (dest > upperMax && dest < lowerMin)
		throw "invalidRangeExpection";

	return dest;

}
int main()
{
	try
	{
		cout << character('a', 1) << endl;

	}
	
	catch (string ex)
	{
		cout << ex << endl;
	}
	try
	{
		cout << character('a', -1) << endl;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
	try
	{
		cout << character('Z', -1) << endl;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
	try
	{
		cout << character('?', 5) << endl;
	}
	catch (string ex)
	{
		cout << ex << endl;
	}
}