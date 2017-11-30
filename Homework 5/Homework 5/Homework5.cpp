/*
Max Del Rio
Homework 5
Date Due: Thu, 30 November 2017
Write a program that returns one of many available answers to random questions.
*/
#include "Homework5.h"

Magic::Magic() {
	rng = 0;
}
void Magic::Random() {
	
	srand((unsigned int)time(0));
	for (int x = 0; x < 1; x++) {
		rng = (rand() % 11);
	}

}

void Magic::Question() {
	cout << "Ask Magic Eight Ball a question: " << endl;
	cin.getline(input, sizeof(input));
}

void Magic::Answers() {
	
	char *answers[] = {
		"Anything is Possible",
		"Definitely",
		"Defintely Not",
		"I Think It Is Likely",
		"I Think Not",
		"I Think That Time Will Tell",
		"It is Not Certain",
		"It Is Too Soon To Tell",
		"Maybe Not",
		"Without A Doubt",
		"You Must Be Joking",
	};
	
	cout << "Magic Eight Ball says: " << answers[rng] << endl;
	
}


int main() {
	Magic obj;
	char ch = 0;

		obj.Random();
		obj.Question();
		obj.Answers();

	system("Pause");

	return 0;
}