#include <iostream>
#include <vector>

long long factorial(int);
long long smallestDivisible(long long, int);

int main(void)
{
	int n = 20;
	long long sum = factorial(n);	
	sum = smallestDivisible(sum, n);	
	
	std::cout << sum << std::endl;
	return 0;
}

// simple factorial function
long long factorial(int n)
{
	
	long long sum = 1;
	
	for(long long i = 2; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

// reduces numIn by n for every number 2- n if numIn is divisible every element in by 2 - n
long long smallestDivisible(long long numIn, int n)
{
	long long sum = numIn;
	long long temp;
	bool isRemove;
	
	for(long long i = 2; i <= n; i++)
	{
		isRemove = true;
		
		if (sum % i == 0)
		{
			temp = sum / i;
		}
		else
		{
			continue;
		}

		for(long long j = 2; j <= n; j++) 
		{
		
			if (temp % j != 0 )
			{
				isRemove = false;
				break;
			}
		}

		if (isRemove)
		{
			sum = temp; 
		}

	}
	return sum;
}
