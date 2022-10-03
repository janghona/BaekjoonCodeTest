#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

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

	int size() {return index + 1;}

	bool isEmpty() {
		if (index == -1) return true;
		else return false;
	}

	char top() {if (index != -1) return cStack[index];}
};

bool check(Stack& s,const char* buf) {
	for (int j = 0; buf[j] != '.'; j++) {
		if (buf[j] == '(' || buf[j] == '[') {s.push(buf[j]);}
		else if(buf[j] == ')'){
			if (!s.isEmpty() && s.top() == '(') { s.pop(); }
			else {return false;}
		}
		else if (buf[j] == ']') {
			if (!s.isEmpty()&& s.top() == '[') { s.pop(); }
			else { return false; }
		}
	}
	return s.isEmpty();
}
int main()
{
	while (true) {
		Stack s;
		char buf[101];
		cin.getline(buf,101);
		
		if (buf[0] == '.') break;
		if (check(s, buf)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}