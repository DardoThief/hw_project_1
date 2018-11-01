#include <iostream>
/*���������� �������, ������� � ����������
���������� (overloading)- ���������� ���������� ������� (� ����� ������� ������� � ����������
�������� ���������) � ����������� �������, �� ��������� ������� ����������.


1. ���������. ������ ���������� ����� ���������� ������� � ����������� �������.
������� ��������� ����������� ������ �����������.
��������� �� ��������� ��������� �� �������� �����������.
����� ���������� ��������� � ������ ��������� ����� ����� �� ������������� �������
�� ����������� ���� �� ���, ������������ �� ������ ���������� ����������, ��� �� ��������
� ������� � ������� �������������� ��������� ����� �� ���������

2. ��������� �������������
�������������� ������� ��� float � ��� double
��������� ������ ��� std::string � ��� char*
���������� ������������� (������ � ���������� ����������� + ������ ����)

3. ���������� ���������� (+, -, * � ��)
��������� � �++ �������� ���������, � �� ����� �����������
������� � �������� ��������� ������������� ��-������� (������ "�++ ��� ��������������")
������� ��������� ������������� ��� ����� ����������������� ������,
� �������� - ��� ��������� �������



��: ����������� ��������� ������� �� �������

*/

using namespace std;

class mat
{
public:
	mat() {};
	mat(const mat & p1) {};
	double data[3][3] = { 0 };
	size_t columns = 3;
	size_t rows = 3;
	mat & operator++()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j, rows; j++)
			{
				this->data[i][j]++;
			}
		}

		return (*this); //������ mat++ ���������� mat = (operator ++)(mat)
		//this ��������� �� ��������� ������
	}
};

mat operator + (const mat & ihs, //left hand side
	const mat & fhs) // right hand side
{
	mat result; //������� ����� ������ ��� ������ �����������
	//����������, �������� ��������� ihs � fhs � result
	return result;
}

int main()
{
	string str1;
	str1.at(1);

	string * str2;
	str2 = new string();
	str2->at(1);

	mat mat1, mat2, mat3;
	mat1.columns;
	//mat1.inc(); //���������� �� 1
	//mat++;

	mat3 = mat1 + mat2; //������� ��������
	//mat3 = some_add_function(mat1, mat2); //�������� ��������

	//string str1, str2, str3;
	//str1 = str2 + str3;
	
}