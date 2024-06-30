#include <iostream>
// thread header
#include <thread>

using namespace std;

// function 1
int countUp(int n) {
	for (; n < 20; n++) {
		std::cout << n << std::endl; // print each integer going up
	}
	std::cout << to_string(n) + " -- Counting up complete" << std::endl;
	return n;
}	// correct implementation of the first counting function (up to 20)

// function 2
int countDown(int n) {
	for (; n > 0; n--) {
		std::cout << n << std::endl; // print each integer going down
	}
	std::cout << to_string(n) + " -- Count-down complete" << std::endl;
	return n;
}	// correct implementation of function 2 (down to 0)

// main function
int main() {
	// initialize thread 1
	std::thread t1(countUp, 0);
	t1.join(); // t1 completes before t2 begins

	// initialize thread 2
	std::thread t2(countDown, 20);
	t2.join(); // wait for t2 to finish

	return 0;
}
