#include <iostream>
#include <string>
#include <ctime>

// password generator

class Password {
private:
	const char letters[58] = { "!@$%^abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

public:
	void generatePassword() {
		int length;
		srand(time(0));

		std::cout << "Password length: ";
		std::cin >> length;

		if (length <= 0) {
			std::cout << "Length cannot be less than 0.";
		}
		else if (length >= 16) {
			std::cout << "Length cannot be over 16.";
		}
		else {
			int i;
			std::cout << "Generated password: ";
			for (i = 0; i < length; i++) {
				int ranNum = rand() % 58;
				std::cout << letters[ranNum];
			}
		}
	}
};

int main() {

	Password passwordGen;
	passwordGen.generatePassword();

}