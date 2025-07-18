#include "Frame.h"
#define CREATE_BUTTON 10001

wxBEGIN_EVENT_TABLE(Frame, wxFrame)

EVT_BUTTON(CREATE_BUTTON, Frame::Create)

wxEND_EVENT_TABLE();

Frame::Frame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "To-Do")
{
	textArea = new wxStaticText(this, wxID_ANY,"hello", wxPoint(10, 10), wxSize(40, 15), wxCENTER);

	wxButton* createButton = new wxButton(this, CREATE_BUTTON, "Create", wxPoint(10, 30), wxSize(50, 40));
	input = new wxTextCtrl(this, wxID_ANY, "", wxPoint(60, 40), wxSize(300, 30));

	
}

void Frame::Create(wxCommandEvent& event)
{
	if (input->GetValue() == "")
	{
	}
	else
	{
		wxButton* newButton = new wxButton(this, wxID_ANY, input->GetValue(), wxPoint(10, 70 + (buttnoncount * 40)), wxSize(300, 30));
		newButton->Bind(wxEVT_BUTTON, &Frame::DeleteButton, this);
		buttnoncount++;

		buttons.push_back(newButton);


		

		//Frame::Refresh();

	}


}

void Frame::DeleteButton(wxCommandEvent& event)
{
	
	for(int i = 0; i < buttons.size(); i++)
	{
		if (event.GetEventObject() == buttons[i])
		{
			buttons[i]->Destroy();
			buttons.erase(buttons.begin() + i);
			buttnoncount--;
			break;
		}
	}
	
	/*this->Destroy();
	delete this;
	Frame::Refresh();*/
}
