#include <iostream>
#include <random>

using namespace std;

int main()
{
	int min = -20;
	int max = 20;

	srand(time(0));

	int arr[20];
	int middle = 0; 

	for (int i = 0; i < 20; i++)
	{
		arr[i] = min + rand() % (max - min + 1);

		
		if (arr[i] >= 0)
		{
			middle += arr[i]; 
		}
	}
	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << "\n" << middle; 
}