#include <iostream> 
#include <vector>

std::vector<int> sortNums;

void getInput()
{
	bool finished = false;
	char answer;
	int input; 

	while (!finished)
	{
		std::cout << "Enter number: ";
		std::cin >> input; 
		sortNums.push_back(input);
		std::cout << "Final number? (y/n): ";
		std::cin >> answer;
		if (answer == 'y')
			finished = true;
	}
}

void bubbleSort(std::vector<int> &numbers)
{
	int temp;

	for (int i = 1; (i <= sortNums.size()); i++)
	{
		for (int j = 0; j < (sortNums.size() - 1); j++)
		{
			if (numbers[j + 1] < numbers[j])      
				std::swap(sortNums[j], sortNums[j+1]);            
		}
	}
}

int main()
{
	getInput();
	bubbleSort(sortNums);

	for (int i = 0; i < sortNums.size(); i++)
	{
		if (sortNums[i] == sortNums.back())
			std::cout << sortNums[i] << ".";
		else 
			std::cout << sortNums[i] << ", ";
	}

	system("PAUSE");
	return 0;
}