#include <iostream> 

int sortNums[10], total = 0;
bool finished = false;
char answer;

int getInput()
{
	while (!finished)
	{
		std::cout << "Enter number: ";
		std::cin >> sortNums[total];
		total++;
		std::cout << "Final number? (y/n): ";
		std::cin >> answer;
		if (answer == 'y')
			finished = true;
	}
	return 1;
}

int bubbleSort(int numbers[])
{
	int temp;

	for (int i = 1; (i <= total) ; i++)
	{
		for (int j = 0; j < (total - 1); j++)
		{
			if (numbers[j + 1] < numbers[j])      
			{
				temp = numbers[j];             
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;              
			}
		}
	}
	return 1;
}

int main()
{
	getInput();
	bubbleSort(sortNums);

	for (int i = 0; i < total; i++)
	{
		std::cout << sortNums[i] << ", ";
	}

	system("PAUSE");
	return 0;
}