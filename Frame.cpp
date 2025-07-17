#include "Frame.h"

Frame::Frame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "To-Do")
{
	wxStaticText* textArea = new wxStaticText(this, wxID_ANY, "Hello World", wxPoint(10, 10), wxSize(480, 180), wxCENTER);
}
