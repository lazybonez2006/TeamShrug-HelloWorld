#pragma once
#include <wx/wx.h>
#include "item.h"
#include <list>

class Frame : public wxFrame
{
	wxToolBar* toolBar;


	std::list<item*> items;


	wxDECLARE_EVENT_TABLE();
public:
	
	Frame(const wxString& title);
};

