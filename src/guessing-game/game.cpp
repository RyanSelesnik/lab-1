#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int main() {
	srand(time(0));
	auto target = rand() % 100 + 1;
	auto wrongGuesses = 0;
	int num;
	std::cout << "Guess a number\n";
	while (1) {
		cin >> num;
		if (num == target) {
			cout << "You win\n";
			break;
		}
		
		wrongGuesses++;
		if (wrongGuesses == 5) {
			cout << "You lose\n";
			break;
		}
		else if (num < target)
			cout << "Guess higher\n";
		else
			cout << "Guess lower\n";	
	}
	return 0;
}
