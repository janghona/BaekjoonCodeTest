#include<iostream>
#include<string>
using namespace std;

const int MAX = 1000;

class Stack {
private:
	char cStack[MAX];
	int index;
public:
	Stack() : index(-1)
	{}
	~Stack() {}

	char* getIntStack() { return cStack; }
	int getIndex() { return index; }

	void push(const char buf) {
		index++;
		cStack[index] = buf;
	}

	char pop() {
		if (!isEmpty()) {
			index--;
			return cStack[index + 1];
		}
	}

	int size() {
		return index + 1;
	}

	bool isEmpty() {
		if (index == -1) return true;
		else return false;
	}

	char top() {
		if (index != -1) return cStack[index];
	}

};

bool check(Stack& s,const char* buf) {
	for (int j = 0; buf[j] != '\0'; j++) {
		if (buf[j] == '(') {
			s.push(buf[j]);
		}
		else{
			if (!s.isEmpty()) { s.pop(); }
			else {
				return false;
			}
		}
	}
	return s.isEmpty();
}
int main()
{
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		Stack s;
		char buf[51];
		cin >> buf;
		
			if (check(s, buf)) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	return 0;
}