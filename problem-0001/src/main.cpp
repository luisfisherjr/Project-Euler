#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> multiples(const std::vector<int>&, int);

int main(int argc, char *argv[])
{
	std::vector<int> inputNumbers = {3,5};

	std::vector<int> mults = multiples(inputNumbers, 1000);

	int solution = std::accumulate(mults.begin(), mults.end(), 0);
	
//	std::cout << "multiples of 3 or 5: ";
//	for(int n: mults)
//	{
//		std::cout << n << " ";
//	}
//	std::cout << std::endl;

	std::cout << "the sum of all the multiples of 3 or 5 below 1000" << std::endl;		
	std::cout << "answer: "<< solution << std::endl;

	return 0;
}

// returns a vector of all multiples of the input vector within the max number
std::vector<int> multiples(const std::vector<int>& inputNumbers, int max)
{
	int inputSize = inputNumbers.size();
	std::vector<int> outputNumbers;
	bool add;

	for(int i = 1; i < max; i++)
	{
		for(int j = 0; j < inputSize; j++)
		{
			if ((i % inputNumbers[j]) == 0)
			{
				outputNumbers.push_back(i);
				break;
			}
		}
	}

	return outputNumbers;
}
