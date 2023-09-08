#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm> // ���������� ���������� ����������

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL)); // ������ �����

	const int n = 2; // ��������� ������ ������� � �������

	int dicesBot[n]; // ������ ������ ����
	int dicesPlayer[n]; // ������� ������ ������

	// ���������� ������� ������ ���� ���������� �������
	cout << "������ ���: " << endl;
	for (int i = 0; i < n; i++) {
		dicesBot[i] = 1 + rand() % 6;
		cout << dicesBot[i] << " ";
	}
	cout << endl;


	cout << "������� ���-������, ����� ������� �����";
	cin.get();

	// ���������� ������� ������ ������ ���������� �������
	cout << "������� �����..." << endl;
	for (int i = 0; i < n; i++) {
		dicesPlayer[i] = 1 + rand() % 6;
		cout << dicesPlayer[i] << " ";
	}
	cout << endl;
	
	// ��������� ������� �������� sort �� algorithm
	sort(dicesBot, dicesBot + n);
	sort(dicesPlayer, dicesPlayer + n);

	// ��������� ���� ��������� � ������� �� �� ������������
	bool eq = true; // ������� ����������� ��� ��� ��� ���������
	int dEq = dicesBot[0]; // ���� ������ ������� � �������� �����������
	for (int d : dicesBot) {
		if (d != dEq) { // ���� ���� �� ��������� �� ������ �������, �� ������ ������ �������� ������ ��������
			eq = false;
			break;
		}
	}

	if (eq) {
		cout << "��� �������";
	}
	
	return 0;
}
