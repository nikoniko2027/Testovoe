#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct NodeInfo { // ��������� �������� ������ ������
	int sum = 0;
	int counts = 0;
	NetworkClass node;
};

class NetworkClass {
private:
	vector<NodeInfo> Neighbors; // ������, ������� ��������� �� ������ ������

public:

	NetworkClass()
	{
		cout << "\n[" << this << "] ���� ������" << endl;
	}

	void CreateEventW() {
		int x = rand();
		cout << "[" << this << "] ������� ������������� �����: " << x << endl << endl;
		// �������� ����������� ��� ������ �������� � �������
	}
};