#include "QuizForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Quiz::QuizForm form;
    Application::Run(% form);
}

