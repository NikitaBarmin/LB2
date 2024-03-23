#include <iostream>
#include <list>


bool compare(int card_1, int card_2) {
	if ((card_1 == 0 && card_2 == 9) || (card_1 == 9 && card_2 == 0)) {
		return card_1 == 0;
	}
	return card_1 > card_2;
}
int main() {
	typedef std::list<int> Cards;
	Cards player_1;
	Cards player_2;
	int number_1 = 0;
	int number_2 = 0;



	for (int i = 0; i < 5; i++) {
		std::cin >> number_1;
		player_1.push_back(number_1);

	}
	for (int i = 0; i < 5; i++) {
		std::cin >> number_2;
		player_2.push_back(number_2);

	}


	int count = 0;

	while (true) {

		if (count > 1000000 || player_1.empty() == true || player_2.empty() == true) {
			break;
		}
		count += 1;
		int card_1 = player_1.front();
		player_1.pop_front();
		int card_2 = player_2.front();
		player_2.pop_front();

		if (compare(card_1, card_2) == true) {
			player_1.push_back(card_1);
			player_1.push_back(card_2);

		}
		else {
			player_2.push_back(card_1);
			player_2.push_back(card_2);
		}

	}
	if (player_1.empty() == true) {
		std::cout << "second " << count << std::endl;
	}
	else if (player_2.empty() == true) {
		std::cout << "first " << count << std::endl;
	}
	else {
		std::cout << "botva" << count << std::endl;
	}

	return 0;
}