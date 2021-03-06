#include <iostream>
#include "Coffee/Beverage.cpp"
#include "Coffee/Espresso.cpp"
#include "Coffee/HouseBlend.cpp"
#include "Coffee/DarkRoast.cpp"
#include "Decorator/Mocha.cpp"
#include "Decorator/Soy.cpp"
#include "Decorator/Whip.cpp"

using namespace std;

int main() {
	Beverage* beverage = new Espresso();
	cout << beverage->getDescription() << " $" << beverage->cost() << '\n';
	delete beverage;

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	cout << beverage2->getDescription() << " $" << beverage2->cost() << '\n';
	delete beverage2;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	cout << beverage3->getDescription() << " $" << beverage3->cost() << '\n';
	delete beverage3;
}
