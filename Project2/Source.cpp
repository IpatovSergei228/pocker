#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <thread>
#include <chrono>




void task2() {
	int a, b, sum = 0;
	for (size_t i = 0; i <= 20; i++) {
		a = 6 + rand() % 18;
		b = 6 + rand() % 18;
		printf("возраст учеников в первом классе: %d\n", a);
		printf("возраст учеников во втором классе: %d\n", b);

	}
	printf("средний возраст учеников в первом классе: %d\n", a / 20);
	printf("средний возраст учеников во втором классе: %d\n", b / 20);
}

void task3() {
	float sum1 = 0, sum2 = 0;
	for (size_t i = 1; i <= 31; i++) {
		float mes1 = float(1 + rand() % 20) / (1 + rand() % 20);
		float mes2 = float(1 + rand() % 20) / (1 + rand() % 20);
		sum1 = sum1 + mes1;
		sum2 = sum2 + mes2;
		printf("в €нваре за день выполо осадков = %f\n", mes1);
		printf("в марте за день выполо осадков = %f\n", mes2);

	}
	printf("среднее количество выпавших осадков за €нварь = %f\n", sum1 / 31);
	printf("среднее количество выпавших осадков за март = %f\n", sum2 / 31);
}

void task4() {
	float sum1 = 0, sum2 = 0;

	for (size_t i = 1; i <= 20; i++) {
		float klass1 = float(1 + rand() % 20) / (1 + rand() % 20);
		float klass2 = float(1 + rand() % 20) / (1 + rand() % 20);
		sum1 = sum1 + klass1;
		sum2 = sum2 + klass2;
		printf("рост ученика 1klass = %d\n", klass1);
		printf("рост ученика 2klass = %d\n", klass1);
	}
	printf("средний рост учеников в первом классе = %d\n", sum1 / 20);
	printf("средний рост учеников во втором классе = %d\n", sum2 / 20);
}

/*void task5() {
	int p;
	printf
	for (size_t i = 1; i <= 50; i++)
}*/

void task6() {
	using namespace std::chrono_literals;
	int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0;
	for (size_t i = 1; i <= 5; i++) {
		int mast = 1 + rand() % 3;
		int nam = 1 + rand() % 13;
		std::this_thread::sleep_for(1s);
		switch (i)
		{
		case 1:
		{k1 = (mast * 100) + nam;
		printf("kard #1 = %d\n", k1);
		}break;
		case 2:
		{k2 = (mast * 100) + nam;
		printf("kard #2 = %d\n", k2);
		}break;
		case 3:
		{k3 = (mast * 100) + nam;
		printf("kard #3 = %d\n", k3);
		}break;
		case 4:
		{k4 = (mast * 100) + nam;
		printf("kard #4 = %d\n", k4);
		}break;
		case 5:
		{k5 = (mast * 100) + nam;
		printf("kard #5 = %d\n", k5);
		}break;

		}
	}
	printf("1.%d\n", k1 % 100);
	printf("2.%d\n", k2 % 100);
	printf("3.%d\n", k3 % 100);
	printf("4.%d\n", k4 % 100);
	printf("5.%d\n", k5 % 100);
	int kn = 1;
	int para = 0;
	int gg = 0;
	do {
		if ((k1 % 100) == (k2 % 100) ||
			(k1 % 100) == (k3 % 100) ||
			(k1 % 100) == (k4 % 100) ||
			(k1 % 100) == (k5 % 100)) {
				{para++;

				}
		}
		else if (kn == 2) {
			((k2 % 100) == (k1 % 100) ||
				(k2 % 100) == (k3 % 100) ||
				(k2 % 100) == (k4 % 100) ||
				(k2 % 100) == (k5 % 100)); {

				para++;

			}

		}
		else if (kn == 3) {
			((k3 % 100) == (k1 % 100) ||
				(k3 % 100) == (k2 % 100) ||
				(k3 % 100) == (k4 % 100) ||
				(k3 % 100) == (k5 % 100)); {

				para++;

			}

		}
		else if (kn == 4) {
			((k4 % 100) == (k1 % 100) ||
				(k4 % 100) == (k3 % 100) ||
				(k4 % 100) == (k2 % 100) ||
				(k4 % 100) == (k5 % 100)); {

				para++;

			}

		}
		else if (kn == 5) {
			((k5 % 100) == (k1 % 100) ||
				(k5 % 100) == (k3 % 100) ||
				(k5 % 100) == (k4 % 100) ||
				(k5 % 100) == (k2 % 100)); {

				para++;

			}

		}
		if ((k1 / 100) == (k2 / 100) ||
			(k1 / 100) == (k3 / 100) ||
			(k1 / 100) == (k4 / 100) ||
			(k1 / 100) == (k5 / 100)) {
				{gg++;

				}
		}
		else if (kn == 2) {
			((k2 / 100) == (k1 / 100) ||
				(k2 / 100) == (k3 / 100) ||
				(k2 / 100) == (k4 / 100) ||
				(k2 / 100) == (k5 / 100)); {

				gg++;

			}

		}
		else if (kn == 3) {
			((k3 / 100) == (k1 / 100) ||
				(k3 / 100) == (k2 / 100) ||
				(k3 / 100) == (k4 / 100) ||
				(k3 / 100) == (k5 / 100)); {

				gg++;

			}

		}
		else if (kn == 4) {
			((k4 / 100) == (k1 / 100) ||
				(k4 / 100) == (k3 / 100) ||
				(k4 / 100) == (k2 / 100) ||
				(k4 / 100) == (k5 / 100)); {

				gg++;

			}

		}
		else if (kn == 5) {
			((k5 / 100) == (k1 / 100) ||
				(k5 / 100) == (k3 / 100) ||
				(k5 / 100) == (k4 / 100) ||
				(k5 / 100) == (k2 / 100)); {

				gg++;

			}

		}
	} while (para <= 0 && kn <= 5);
	if (para == 1)
		printf("ѕј–ј ≈—“№\n");
	if (para > 3)
		printf("—Ё“\n");
	if (gg > 5)
		printf("‘ЋЁЎ\n");
	if ((k1 / 100 == k2) && (k1 == k3) && (k1 == k4) && (k1 == k5));
}


int main() {
	setlocale(LC_ALL, "");
	int task;
	do {
		printf("ввеедите номер задани€:");
		scanf_s("%d", &task);
		switch (task) {

		case 2:
		{task2(); }
		break;
		case 3:
		{task3(); }
		break;
		case 4:
		{task4(); }
		break;
		case 6:
		{task6(); }
		break;
		default:
			break;
		}
		printf("хотите продолжить? 1/0:");
		scanf_s("%d", &task);
	} while (task != 0);
	system("pause");
}