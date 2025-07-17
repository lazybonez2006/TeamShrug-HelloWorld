#include "App.h"
#include "Frame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	Frame* window = new Frame("");
	window->SetClientSize(500, 450);
	window->Show(true);
	return true;
}

App::~App()
{
}
