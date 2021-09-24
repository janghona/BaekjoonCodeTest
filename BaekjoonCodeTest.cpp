#include<iostream>
#include<string>
using namespace std;

class Stack {
public:
	int intStack[10000];
	int ntop;
public:
	Stack() : ntop(-1)
	{}
	~Stack() {}

	void push(int value) {
		ntop++;
		intStack[ntop] = value;
	}

	int pop() {
		if (isEmpty() == true) return -1;
		ntop--;
		return intStack[ntop + 1];
	}

	int size() {
		return ntop + 1;
	}

	bool isEmpty() {
		if (ntop == -1) return true;
		else return false;
	}

	int top() {
		if (isEmpty() == true) return -1;
		else return intStack[ntop];
	}

};
int main()
{
	Stack s;
	int input;
	string cmdBuf;

	cin >> input;
	if (1 > input || input > 10000) return 0;
	for (int i = 0; i < input; i++) {
		cin >> cmdBuf;

		if (cmdBuf == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmdBuf == "top") {
			cout << s.top() << endl;
		}
		else if (cmdBuf == "size") {
			cout << s.size() << endl;
		}
		else if (cmdBuf == "empty") {
			cout << s.isEmpty() << endl;
		}
		else if (cmdBuf == "pop") {
			cout << s.pop() << endl;
		}
	}
	return 0;
}