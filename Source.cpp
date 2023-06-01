#include "MyForm.h"

using namespace Project5;
[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::Run(gcnew MyForm());
}

/*ƒобавить в меню с пред лабой меню с пунктами:
* открыть сохранить сохранить как выход
* чтение таблицы из файла
* запись таблицы в файл
* (сохранить в тот файл, где работаем, а сохранить как спрашивает куда)
*/