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
	cout << "Создано соседей: " << x.CountNode << "\nВремя обновления: " << x.Time / 1000 << " (сек.)" << endl;
	cout << "Шанс подписки: " << x.ChanceSubscribe << "\nШанс отписки: " << x.ChanceUnsubscribe << endl;
	cout << "Шанс создания новой ноды: " << x.ChanceCreateNewNode << endl << endl;
	Sleep(x.Time);
	Print(x);
}

InitParam InputParam() {
	InitParam result;

	do {
		system("cls");
		cout << "Введите время обновления (в секундах): ";
		cin >> result.Time;
	} while (result.Time <= 0);

	result.Time *= 1000;

	do {
		system("cls");
		cout << "Введите количество узлов для создания: ";
		cin >> result.CountNode;
	} while (result.CountNode <= 0);

	do {
		system("cls");
		cout << "Введите шанс подписки на новый узел (0-100): ";
		cin >> result.ChanceSubscribe;
	} while (result.ChanceSubscribe < 0 || result.ChanceSubscribe > 100);

	do {
		system("cls");
		cout << "Введите шанс отписки на новый узел (0-100): ";
		cin >> result.ChanceUnsubscribe;
	} while (result.ChanceUnsubscribe < 0 || result.ChanceUnsubscribe > 100);

	do {
		system("cls");
		cout << "Введите шанс создания нового узла (0-100): ";
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