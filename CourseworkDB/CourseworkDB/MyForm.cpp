#include "MyForm.h"
#include <Windows.h>
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles(); //включает визуальные стили для приложения
	Application::SetCompatibleTextRenderingDefault(false); //задает значения по умолчанию во всем приложении

	CourseworkDB::MyForm form; //создание формы
	Application::Run(% form); //запускает стандартный цикл обработки сообщений приложения в текущем потоке и делает указанную форму видимой
}
