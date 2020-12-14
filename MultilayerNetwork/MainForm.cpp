#include "MainForm.h"

using namespace System;

[STAThreadAttribute]

int main()
{
    System::Windows::Forms::Application::Run(gcnew MultilayerNetwork::MainForm());
    return 0;
}
