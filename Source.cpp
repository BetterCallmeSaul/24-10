#include <iostream>
using namespace std;
int main() {
	//Дано целое число n. Вывести n раз символ @
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cout << "@";

	}*/
	//дано два числа x  и y (вводим x < y). Найти сумму четных чисел из диапозона x-y.
	/*int x, y, i, sum = 0;
	cout << "Введите х:";
	cin >> x;
	cout << "введите у:";
	cin >> y;
	i = x;
	while (i <= y) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	}
	cout << sum << endl;*/
	//напечатать прямоугольник 20х8 из символов #
	/*for (int i = 0; i < 20; i++) cout << "#";
	cout << endl;
	for (int k = 0; k < 6; k++)
	{
		cout << "#";
		for (int i = 0; i < 18; i++) cout << " ";
		cout << "#";
	}
	for (int i = 0; i < 20; i++) cout << "#";
	cout << endl;*/
	//дано целое число n. найти произведение 
    //чисел не больших n, которые делятся на 3.
	/*int n;
	cin >> n;
	int i;
	int proiz;
	while (i <= n) {
		if (i % 3 == 0){
			proiz *= i;
	}
	i += 1;
}
	cout << proiz;*/
	//18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.
	/*int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; n > i; i += 1) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			sum += 1;
		}
		i += 1;
	}
	cout << sum << endl;*/
	//22. дано натуральное n.вычислить: 1 + 1 / 2 + 1 / 3 + 1 / 4 + ... + 1 / n.

}