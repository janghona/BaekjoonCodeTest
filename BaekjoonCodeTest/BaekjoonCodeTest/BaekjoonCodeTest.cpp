#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	int layer = 0;
	int sum = 2;

	cin >> input;
	if (input == 1) layer = 1;
	while (input >= sum) {
		sum += 6 * layer;
		layer++;
	}
	cout << layer;
}


