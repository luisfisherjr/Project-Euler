#include <vector>
#include <iostream>
#include <numeric>

std::vector<int> primes(int);

int main(void)
{
	std::vector<int> p = primes(10001);
	std::cout << "What is the 10 001st prime number?" << std::endl;
	std::cout << "answer: " << p[10000] << std::endl;
	return 0;
}

std::vector<int> primes(int max)
{
	// prime numbers are the indexes if it is a prime bool is true
	std::vector<int> primes;
	bool isPrime;

	// 2 is first prime
	primes.push_back(2);
	
	// skips all even numbers
	for(int possiblePrime = 3; primes.size() < max; possiblePrime += 2 )
	{
		isPrime = true;

		for(int prime: primes)
		{
			if (possiblePrime % prime == 0)
			{
				isPrime = false;
				break;
			}
		}
		if(isPrime)
		{
			primes.push_back(possiblePrime);
		}
	}
	return primes;
}
