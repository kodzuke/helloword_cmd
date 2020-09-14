#include <iostream>
using namespace std;


int main() {
	int num_1, num_2, result;
	char stop1;
	cout << "=================" << endl;
	cout << "||             ||" << endl;
	cout << "||    Hello,   ||" << endl;
	cout << "||    word     ||" << endl;
	cout << "||             ||" << endl;
	cout << "=================" << endl;
	cout << "Enter number 1" << endl;
	cin >> num_1;
	cout << "Enter number 2" << endl;
	cin >> num_2;
	result = num_1 - num_2;
	cout << num_1 << "+" << num_2 << "=" << result <<endl;
	
	if (result > 0) {
		result++;
		cout << result << ">0" << endl;
	}
	else {
		cout << result << "<0" << endl;
	}
	
	cout << "Pls enter any key" << endl;
	cin >> stop1;
	return 0;
	//commit;
	//git

}

