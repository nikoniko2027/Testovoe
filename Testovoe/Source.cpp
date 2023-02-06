#include "ClassNetwork.h"
#include "windows.h"

struct InitParam {
	int Time = 0;
	int CountNode = 0;
	int ChanceSubscribe = 0;
	int ChanceUnsubscribe = 0;
	int ChanceCreateNewNode = 0;
};

void Print(InitParam x) {
	cout << "������� �������: " << x.CountNode << "\n����� ����������: " << x.Time / 1000 << " (���.)" << endl;
	cout << "���� ��������: " << x.ChanceSubscribe << "\n���� �������: " << x.ChanceUnsubscribe << endl;
	cout << "���� �������� ����� ����: " << x.ChanceCreateNewNode << endl << endl;
	Sleep(x.Time);
	Print(x);
}

InitParam InputParam() {
	InitParam result;

	do {
		system("cls");
		cout << "������� ����� ���������� (� ��������): ";
		cin >> result.Time;
	} while (result.Time <= 0);

	result.Time *= 1000;

	do {
		system("cls");
		cout << "������� ���������� ����� ��� ��������: ";
		cin >> result.CountNode;
	} while (result.CountNode <= 0);

	do {
		system("cls");
		cout << "������� ���� �������� �� ����� ���� (0-100): ";
		cin >> result.ChanceSubscribe;
	} while (result.ChanceSubscribe < 0 || result.ChanceSubscribe > 100);

	do {
		system("cls");
		cout << "������� ���� ������� �� ����� ���� (0-100): ";
		cin >> result.ChanceUnsubscribe;
	} while (result.ChanceUnsubscribe < 0 || result.ChanceUnsubscribe > 100);

	do {
		system("cls");
		cout << "������� ���� �������� ������ ���� (0-100): ";
		cin >> result.ChanceCreateNewNode;
	} while (result.ChanceCreateNewNode < 0 || result.ChanceCreateNewNode > 100);
	
	return result;
}



int main() {
	setlocale(LC_ALL, "RUS");
	//InitParam StartParam = InputParam();
	//Print(StartParam);

	NetworkClass* X = new NetworkClass;
	X->CreateEvent();

	return 0;
}