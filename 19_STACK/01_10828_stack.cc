#include<iostream>
#include<string>
using namespace std;

class Stack {
public:
	int intStack[10000];
	int ntop;

	Stack() : ntop(-1)
	{}
	~Stack() {}

	void push(int value) {
		ntop++;
		intStack[ntop] = value;
	}

	int pop() {
		if (!empty()) {
			return intStack[ntop--];
		}
	}

	int size() {
		return ntop + 1;
	}

	bool empty() {
		if (ntop == -1) return true;
		else { return false; }
	}

	int top() {
		if (!empty()) {
			return intStack[ntop];
		}
	}

};
int main()
{
	Stack s;
	int input;
	string cmdBuf;

	cin >> input;

	for (int i = 0; i < input; i++) {
		cin >> cmdBuf;

		if (cmdBuf == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmdBuf == "top") {
			if (!s.empty()) {
				cout << s.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (cmdBuf == "size") {
			cout << s.size() << endl;
		}
		else if (cmdBuf == "empty") {
			if (s.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (cmdBuf == "pop") {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
	}
	return 0;
}