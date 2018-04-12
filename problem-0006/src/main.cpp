#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

std::vector<long> range(long, long, long);

int main(void)
{

	std::vector<long> nums = range(1,100,1);
	
	long squareOfSums = 0;
	long sumOfSquares = 0;

	auto lambda = [&](auto a, auto b){ return a + b;};
	
	squareOfSums = std::accumulate(nums.begin(), nums.end(), squareOfSums, lambda);
	squareOfSums *= squareOfSums;
	
	std::transform(nums.begin(), nums.end(), nums.begin(), 
			[&](long val)
			{
				return val * val;	
			}
			);

	sumOfSquares = std::accumulate(nums.begin(), nums.end(), sumOfSquares, lambda);

	long diff = squareOfSums - sumOfSquares;

	std::cout << "the difference between the sum of the squares of the first" <<
		" one hundred natural numbers and the square of the sum." << std::endl;

	std::cout <<"answer: " << diff << std::endl;
	return 0;
}

// inclusive
std::vector<long> range(long start, long stop, long step)
{
	std::vector<long> elements;

	for(long i = start; i <= stop; i += step)	
	{
		elements.push_back(i);
	}
	return elements;
}

