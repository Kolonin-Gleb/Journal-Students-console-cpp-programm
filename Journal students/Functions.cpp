#include "Functions.h"

int enterStudentsCount()
{
    while (true)
    {
        cout << "������� ���������� �������� (�� 1 �� 5):" << endl;
        string studentCount = "Incorrect count";
        cin >> studentCount;

        if (containSymbols(studentCount))
        {
			cout << "���������� �������� �� ����� ��������� �������!" << endl;
        }
        else if (atoi(studentCount.c_str()) <= 0 || atoi(studentCount.c_str()) >= 6)
        {
            cout << "���������� �������� ����� ���� ����� �� 1 �� 5!" << endl;
        }
        else
        {
			return atoi(studentCount.c_str());
        }
    }
    cout << endl << endl;
}

int enterStudentAge()
{
    while (true)
    {
        string studentAge = "Incorrect age";
        cin >> studentAge;

		if (containSymbols(studentAge) || atoi(studentAge.c_str()) <= 0)
        {
			cout << "������� ������� �� ����� ���� = " << studentAge << endl;
			cout << "������� ������� �������:" << endl;
        }
        else
        {
			return atoi(studentAge.c_str());
        }
    }
    cout << endl << endl;
}

int enterStudentGrade()
{
    while (true)
    {
        string studentGrade = "Incorrect grade";
        cin >> studentGrade;

		if (containSymbols(studentGrade) || atoi(studentGrade.c_str()) <= 0 || atoi(studentGrade.c_str()) > 12)
        {
			cout << "����� ������� �� ����� ���� = " << studentGrade << endl;
			cout << "������� ����� �������:" << endl;
        }
        else
        {
			return atoi(studentGrade.c_str());
        }
    }
    cout << endl << endl;
}

string enterStudentName()
{
    while (true)
    {
        string studentName;
        cin >> studentName;

        if (containDigits(studentName))
        {
            cout << "��� ������� �� ����� ���� = " << studentName << endl;
            cout << "������� ��� �������:" << endl;
        }
        else
        {
            return studentName;
        }
    }
    cout << endl << endl;
}

string enterStudentFavoriteLesson()
{
    while (true)
    {
        string studentFavoriteLesson;
        cin >> studentFavoriteLesson;

		if (containDigits(studentFavoriteLesson))
        {
			cout << "������� ������� ������� �� ����� ���� = " << studentFavoriteLesson << endl;
			cout << "������� ������� ������� �������:" << endl;
        }
        else
        {
			return studentFavoriteLesson;
        }
    }
    cout << endl << endl;
}

bool containSymbols(const std::string& str)
{
	return str.find_first_of(" ()[]{}.,/\|:;%^&?@!`~#$*-_=+<>��������������������������������abcdefghijklmnopqrstuvwxyz�����Ũ��������������������������ABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos ? false : true;
}

bool containDigits(const std::string& str)
{
    return str.find_first_of("1234567890") == std::string::npos ? false : true;
	// ������ ���� ������������ ������� ���������
    //if (str.find_first_of("1234567890") == std::string::npos)
	//{
	//	return false;
	//}
	//else
	//{
	//	return true;
	//}
}