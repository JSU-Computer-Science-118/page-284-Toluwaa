
// Name: Femi-Awoyale Toluwalope
// J-Number: J00966835
// Programming asssignment Example 5-6
// Due On: 16th November 2022

// Random Number Generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num; 
	int amount;
	
	srand(time(0));

	cin >> amount;

	for (int i = 1; i <= amount; i++ ){
			num = rand() % 100;
	cout << num << " ";
	}
	return 0;
}
