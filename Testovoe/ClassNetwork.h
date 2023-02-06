#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct NodeInfo { // Структура хранения данных соседа
	int sum = 0;
	int counts = 0;
	NetworkClass node;
};

class NetworkClass {
private:
	vector<NodeInfo> Neighbors; // Соседи, которые подписаны на данный объект

public:

	NetworkClass()
	{
		cout << "\n[" << this << "] Узел создан" << endl;
	}

	void CreateEventW() {
		int x = rand();
		cout << "[" << this << "] Событие сгенерировало число: " << x << endl << endl;
		// Рассылка уведомления для других объектов о событии
	}
};