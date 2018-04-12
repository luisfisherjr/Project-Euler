#include <iostream>
#include <set>

std::set<long int> primeFactors(long int);

int main(void)
{

	std::set<long int> factors = primeFactors(600851475143L);

	long int maxFactor = 0;
	
	for(long int num: factors)
	{
		if(maxFactor < num)
		{
			maxFactor = num;
		}
	}

	std::cout << "largest prime factor of the number 600851475143" << std::endl;
	std::cout << "answer: " << maxFactor << std::endl;

	return 0;
}

std::set<long int> primeFactors(long int input)
{
	std::set<long int> pFactors;
	
	long int curr = input;
	long int prime = 0;

	for(long int i = 2; i <= curr;)
	{
		if (curr % i == 0) 
		{
			pFactors.insert(i);
			curr /= i;
		}
		else
		{
			i++;
		}
	}

	return pFactors;
}

