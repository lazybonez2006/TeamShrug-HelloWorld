#pragma once
#include <wx/wx.h>
#include "item.h"
#include <list>

class Frame : public wxFrame
{
	wxToolBar* toolBar;
	wxStaticText* textArea;
	int buttnoncount =0;

	std::vector<wxButton*> buttons;
	wxTextCtrl* input;


	std::list<item*> items;


	wxDECLARE_EVENT_TABLE();
public:
	
	Frame(const wxString& title);
	void DeleteButton(wxCommandEvent& event);
	void Create(wxCommandEvent& event);
};

