#include<iostream>

int main()
{
	int coin;
	int price;
	int useCoin{ 0 };
	

	std::cin >> coin;
	std::cin >> price;

	int* coinArray = new int[coin] {};

	for (int i = 0; i < coin; i++)
	{
		std::cin >> coinArray[i];
	}

	int i = coin - 1;

	while (i>=0 && price >=0)
	{
		
		if (coinArray[i] <= price)
		{
			price -= coinArray[i];
			useCoin++;
			
		}
		else
		{
			i--;
		}
	}

	std::cout << useCoin;

	delete[] coinArray;
}
