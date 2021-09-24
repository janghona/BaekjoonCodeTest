#include<iostream>
#include<string>
using namespace std;

const int MAX = 100000;

class Stack {
private:
	int intStack[MAX];
	int index;
public:
	Stack() : index(-1)
	{}
	~Stack() {}

	int* getIntStack() { return intStack; }
	int getIndex() { return index; }

	void push(int value) {
		index++;
		intStack[index] = value;
	}

	int pop() {
		if (isEmpty() == true) return -1;
		index--;
		return intStack[index + 1];
	}

	int size() {
		return index + 1;
	}

	bool isEmpty() {
		if (index == -1) return true;
		else return false;
	}

	int top() {
		if (isEmpty() == true) return -1;
		else return intStack[index];
	}

};
int main()
{
	Stack s;
	int input;
	int num;
	int sum = 0;

	cin >> input;
	if (1 > input || input > 100000) return 0;
	for (int i = 0; i < input; i++) {
		cin >> num;

		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	for (int i = 0; i <= s.getIndex(); i++) {
		sum += s.getIntStack()[i];
	}
	cout << sum;
	return 0;
}