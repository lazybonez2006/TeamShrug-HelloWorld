#pragma once
#include <wx/wx.h>

class Frame : public wxFrame
{
	wxToolBar* toolBar;

public:
	
	Frame(const wxString& title);
};

