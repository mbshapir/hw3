#include <iostream>
#include "stack.h"

using namespace std;

int main(){

	Stack<int> testing;
	testing.push(1);
	testing.push(2);
	testing.push(3);
	testing.push(4);
	cout << testing.size() << endl;
	cout << testing.top() << endl;
	testing.pop();
	cout << testing.top() << endl;

	return 0;

}