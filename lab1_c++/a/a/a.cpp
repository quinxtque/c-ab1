// a.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#define TIME 60
#define PCI 1000
#include <iostream>
#include <cmath>
using namespace std;
const double g = 9.81;
int cold_cold_siberia = 969;

void fun() {
	static double empty_empty_blank = 6.66;
	empty_empty_blank += 3.22;
	cout << empty_empty_blank;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	// #1
	int num, sum = 0, mul = 1;

	for (int i = 0; i < 4; ++i) {
		cout << endl << "Введите число: ";
		cin >> num;
		sum += num;
		mul *= num;
	}

	cout << endl << "Сумма введённых чисел = " << sum << endl << "Произведение введённых чисел = " << mul << endl;

	// #2
	int diameter;
	cout << "Введите диаметр окружности: ";
	cin >> diameter;
	cout << endl << "Площадь окружности = " << diameter * diameter * 0.25 * M_PI << endl << "Диаметр окружности = " << M_PI * diameter << endl;

	// #3
	int inpNum;
	cout << "Введите число: ";
	cin >> num;
	cout << endl << "Синус " << num << " = " << sin(num) << endl << "Косинус " << num << " = " << cos(num) << endl;

	// #4
	int m;
	float v;
	const int t = 40;
	cout << "Введите массу лыжника (кг): ";
	cin >> m;
	cout << endl << "Введите скорость в конце спуска (м/с): ";
	cin >> v;
	float a = abs((-v) / t);
	float f = m * a;
	cout << endl << "Сила трения = " << f << " Н;" << endl;
	float k = f / (m * g);
	cout << "Коэффициент трения = " << k << " чего-то" << endl;

	// #5
	const int t1 = 2;
	int h, p, N;

	cout << "Введите вес (кН): ";
	cin >> p;

	cout << endl << "Введите высоту (м): ";
	cin >> h;

	N = (p * PCI * h) / (t1 * TIME);
	cout << "Мощность подъёмника = " << N << "кВт" << endl;

	// #6
	int cold_cold_siberia = 666;
	cout << cold_cold_siberia;

	// #7
	fun();
	fun();
	fun();

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
