#include "MyForm.h"
#include <Windows.h>
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles(); //�������� ���������� ����� ��� ����������
	Application::SetCompatibleTextRenderingDefault(false); //������ �������� �� ��������� �� ���� ����������

	CourseworkDB::MyForm form; //�������� �����
	Application::Run(% form); //��������� ����������� ���� ��������� ��������� ���������� � ������� ������ � ������ ��������� ����� �������
}
