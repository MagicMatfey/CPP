#include <iostream>
using namespace std;
int main()
{
	bool lastOrSecond = true;
	int tripleNumber;
	setlocale(LC_ALL, "RU");
	cin >> tripleNumber;
	int firstNumber = tripleNumber / 100;
	int secondNumber = (tripleNumber - (firstNumber * 100)) / 10;
	int lastSecondsNumber = (tripleNumber - (firstNumber * 100)) % 100;
	int trithnumber = ((tripleNumber - (firstNumber * 100)) - (secondNumber * 10)) / 1;
	switch (firstNumber) 
	{
		case 1:
			cout << "���";
			break;
		case 2:
			cout << "������";
			break;
		case 3:
			cout << "������";
			break;
		case 4:
			cout << "���������";
			break;
		case 5:
			cout << "�������";
			break;
		case 6:
			cout << "��������";
			break;
		case 7:
			cout << "�������";
			break;
		case 8:
			cout << "���������";
			break;
		case 9:
			cout << "���������";
			break;
	}
	cout << " ";
	switch (lastSecondsNumber)
	{
	case 10:
		cout << "������";
		break;
	case 11:
		cout << "�����������";
		break;
	case 12:
		cout << "����������";
		break;
	case 13:
		cout << "����������";
		break;
	case 14:
		cout << "������������";
		break;
	case 15:
		cout << "����������";
		break;
	case 16:
		cout << "�����������";
		break;
	case 17:
		cout << "����������";
		break;
	case 18:
		cout << "������������";
		break;
	case 19:
		cout << "������������";
		break;
	case 20:
		cout << "��������";
		break;
	case 30:
		cout << "��������";
		break;
	case 40:
		cout << "�����";
		break;
	case 50:
		cout << "���������";
		break;
	case 60:
		cout << "����������";
		break;
	case 70:
		cout << "���������";
		break;
	case 80:
		cout << "�����������";
		break;
	case 90:
		cout << "���������";
		break;
	default:
		lastOrSecond = false;
		break;
	}
	if (!lastOrSecond)
	{
		switch (secondNumber)
		{
		case 2:
			cout << "��������";
			break;
		case 3:
			cout << "��������";
			break;
		case 4:
			cout << "�����";
			break;
		case 5:
			cout << "���������";
			break;
		case 6:
			cout << "����������";
			break;
		case 7:
			cout << "���������";
			break;
		case 8:
			cout << "�����������";
			break;
		case 9:
			cout << "���������";
			break;
		}
		cout << " ";
		switch (trithnumber)
		{
		case 1:
			cout << "����";
			break;
		case 2:
			cout << "���";
			break;
		case 3:
			cout << "���";
			break;
		case 4:
			cout << "������";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "�����";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "������";
			break;
		case 9:
			cout << "������";
			break;
		}
		cout << " ";
	}
	return 0;
}