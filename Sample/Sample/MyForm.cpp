#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)                  // возможно, необходимо закоментировать всё, что в скобках
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Sample::MyForm form;
	Application::Run(%form);
}
