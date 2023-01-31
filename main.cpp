//will probably update this

#include <iostream>
using namespace std;
int main() {
	int raw;
	int affinityPercent;
	int nonAffinityPercent;
	float affinity = 1.25;
	float elemetAffinity;
	int numOfHits;
	char sharpnessOpt;
	float sharpness;
	int hits;

	cout << "Monster hunter 4 ultimate Damage calculator\nEnter raw damage\n";
	cin >> raw;
	cout << "enter sharpness\nr: red\no: orange\ny: yellow\ng: green\nb: "
			"Blue\nw: white\np: purple\n";
	cin >> sharpnessOpt;
	if (sharpnessOpt == 'r') {
		sharpness = 0.50;
	} else if (sharpnessOpt == 'o') {
		sharpness = 0.75;
	} else if (sharpnessOpt == 'y') {
		sharpness = 1.00;
	} else if (sharpnessOpt == 'g') {
		sharpness = 1.05;
	} else if (sharpnessOpt == 'b') {
		sharpness = 1.20;
	} else if (sharpnessOpt == 'w') {
		sharpness = 1.32;
	} else if (sharpnessOpt == 'p') {
		sharpness = 1.45;
	}
	cout << "calcualt for 1 or 100 attacks?\n1: 1 attack\n2: 100 attacks\n";
	cin >> hits;
	if (hits == 1) {
		hits = 1;
	} else if (hits == 2) {
		hits = 2;
	}
	cout << "what is your affinity?\n";
	cin >> affinityPercent;
	nonAffinityPercent = affinityPercent - 100;

	if (hits == 1) {
		cout << ((raw * sharpness) * hits) * 1.25 << " on a critical attack\n";
		cout << ((raw * sharpness) * hits) * 1.00
			 << " on a non critical attack\n";
	} else if (hits == 100) {
		cout << ((raw * sharpness) * hits);
	}
}
/*Red  0.50 physical, 0.2500 element
Orange 0.75 physical, 0.5000 element
Yellow 1.00 physical, 0.7500 element
Green  1.05 physical, 1.0000 element
Blue   1.20 physical, 1.0625 element
White  1.32 physical, 1.1250 element
Purple 1.45 physical, 1.2000 element*/
