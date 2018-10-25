#include <iostream>
#include <string>

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

getchar();
return 0;
}
