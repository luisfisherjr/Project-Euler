#include <string>
#include <iostream>
#include <algorithm>

bool isPalindrome(long int);

int main(void)
{
	
	
	long int current;
	long int biggest = 0;

	for(int a = 999; a > 0; a--)
	{
		for(int b = a; b > 0; b--)
		{
			current = a * b;
			if(isPalindrome(current) && current > biggest)
			{
				biggest = current;
			}
		}
	}

	std::cout << "the largest palindrome made from the product of two 3-digit numbers" << std::endl;
	std::cout << "answer: " << biggest << std::endl;

	return 0;
}

bool isPalindrome(long int number)
{
	std::string word = std::to_string(number);
	std::string wordRev = std::string(word.rbegin(), word.rend());

	return word.compare(wordRev) == 0;
}

