#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	queue<int> q;
	int N;
	cin >> N;
    
	for (int i = 1; i <= N; i++) { q.push(i); }
	while (q.size() != 1) {
		q.pop();
		int temp = q.front();
		q.pop();
		q.push(temp);
	}
	int result = q.front();
	cout << result;
}