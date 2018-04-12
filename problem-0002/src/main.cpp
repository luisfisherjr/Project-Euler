#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> fabonacci(int);

int main(void)
{

	std::vector<int> fabSeq = fabonacci(4000000);
	
	// using lambda binary for function
	int solution = std::accumulate(fabSeq.begin(), fabSeq.end(), 0,
			[](int accum , int val)
			{
				if (val % 2 == 0)
				{
					return accum += val;	
				}
				else return accum;
			}
			);

	std::cout << "the sum of the even-valued fabonacci numbers below 4,000,000" << std::endl;
	std::cout << "answer: " << solution << std::endl;
	return 0;
}

std::vector<int> fabonacci(int limit)
{
	std::vector<int> fabVector;

	int prev = 1;
	int curr = 2;
	int next = prev + curr;

	fabVector.push_back(prev);
	fabVector.push_back(curr);

	do
	{
		fabVector.push_back(next);
		
		prev = curr;
		curr = next;
		next = prev + curr;

	}while(curr < limit);


	return fabVector;
}
