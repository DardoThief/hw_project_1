#include <iostream>
#include <string>
#include <fstream>

/* 
������ � �����

1. ������ ������� �-����
������������ �� ���� ����� ���� ������ �������� � ������� ����������.
�� ���� ������������ ����� ������. � ������, ���� ������������ ����� ��������� \0
��� �� �� ��� ��� ���� �������� �����, ������� � ����� �������� ���������
������� �� ��� ���, ���� �������� \0 ��� �� ������� ������

char cstr1[] = "CD-style string1"; \\ '0' � ����� ������������ �������������
char cstr2[] = { 'C', '-', 's', 't', 'y'. 'l', 'e', ' ', 's', 't', 'r', 'i', 'n', 'g', '2', '\0' }
char cstr3[] = { '\67', '\45', '\115', 't', 'y', 'l', 'e', ' ', 's', 't', 'r', 'i', 'n', 'g', '3', '\0' }
*/

//2. ������� ��� ������ � C-��������
// ����� �� ������ printf(char*, , , ) ��� printf_s(char*, , , ) - print formatted
// ������: printf("������� %s ������ %f", ��������1, ��������2)
// ������ % ���������� ����� ������� ����������

// %f - �������� ������������� �� ����� %f, ����������� � ���� ����� � ��������� ������
// %s - �������� ������������� �� ����� %s ��� ������
// %d - �������� ������������� �� ����� %d ��� ����� �����
// %e - �������� ������������� �� ����� %e ��� ����� � ���������������� ����

// 3. ������ ��������� �������
// ����������� (������������) ����� strcat(*char, *char)
// ����������� �� ����� ������ � ������ strcpy(*char, *char)
// ��������� strcmp(*char, *char), ���� ������ ���������, ���������� 0, ����� - ������� ������� ���������� �������
// ����� ������ strlen(*char)
// ������ ������ � ������� scanf(*char, ��������)
// ������� ������ � ������ ������������ � ��������� ��������
// ������ ���� ����� ��������� _s, e.g. strlen_s(*char)

/*
4. ������ �++
� ����������� ���������� �++ ������ �������� �������������� � ����� std::string
� ������� ����� ������� ����� ����� ������������ ������ ���������
(������������, ������� �����, �������, ��������, ����� � ��)
� ��� ��������  ����������� ��������� + (������������), ����, ����� � �.�.
��� ���� ������� �� ����� C - ����� ������ ������ ������� ���������� ������,
���������� � ������, � �� ������� ����������
�������:
std::string cppstr1 = "C++ - style string 1";
std::string cppstr2 = "";

5. ������ � ������� � �++
����� fstream - ����� �����/������
���������� cin � cout, �� �� �� �������, � � ����
��������� #include <fstream>
��� ������ � ������:
1) ������� ��� ������� ��� ������/������/������ � ������
2) ������� �� ������ �������
3) ��������� ��� ��������
4) ������� ����
*/

using namespace std;
int main()
{
printf(cstr1);
// � ������� ��������� ������ char (� ��� ������� ��������� ���������� �� ����� ... ���� ��������� *char
printf(cstr3); //�������������� ������� ������ �� ��������
printf("Parameter1 = %2.2f, parameter2 = %d, parameter3 = %s\n\n, 1.5, 100, "\"some string\"");
//2.2 - ������ 2 - ��������� ����� ����� ����� ������, � ������ 2 - ���������� ���� ����� �����

char place_to_copy[255];
char place_from_copy[] = "abcdefghijklmnop";
strcpy(place_to_copy, 255, place_from_copy);
printf("Result = %s", place_to_copy);

int i = strcmp(cstr1, cstr2);
printf("Result of strcmp(%s, %s) = %d\n", cstr1, cstr2, 1);

int lnght = strlen(cstr1);
printf("Result of strlen(%s) = %d\n", cstr1, lngth);

char cstr3[255];
strcpy("Result of strcpy(%s, %s)\n", cstr3, cstr2);

//����������� �����
strcat(cstr3, 255, cstr1);
cout << "Result of strcat(cstr2, cstr1) = " << cstr3 << endl;
cout << "Instead of strcat() use operator +:\t" << (cppstr1 + cppstr2) << endl << endl; //��� ������������ ���������� "+"

//��� ���� � ������ (������� ����� IntelliSense)
string strl = "";
strl.append(); //-�������� ��������� � �����
strl.at(i) //- ������ ���������� ����� strl[i]
strl.c_str() //- �������������� ����� �++ � ������ �(�����. char*)
//��������, ��� prntf("%s", str1.c_str())
//��� strcpy(place_to_copy, 255, str1.c_str())
//str1.clear() - �������� ������
//str1.length() - ����� ������
//� ����� ���� ��� ���������

fstream fs;
fs.open("example_textfile.mylife", //���� � ����� � ���
	ios::in | ios::out | ios::trunc); //����� ������ � ������ (���������� ������ � ������)
fs << "100500" << endl;
fs << "some_string" << endl;
fs << "123456.789123" << endl;

fs.seekg(0); //������� ������� � ������
int int1;
fs >> int1; cout << "������ ������ � �����" << int1 << endl;
char buffer[255];
fs >> buffer; cout << "������ ������ � �����" << buffer << endl;
double dbl1;
fs >> dbl1; cout << "������ ������ � �����" << dbl1 << endl;
fs.close();

getchar();
return 0;
}

