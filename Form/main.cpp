///-----------------------------------------------------------------
///
/// @file      main.cpp
/// @author    davin
/// Created:   2/4/2016 8:08:04 AM
/// @section   DESCRIPTION
///            main class implementation
///
///------------------------------------------------------------------

#include "main.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// main
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(main,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(main::OnClose)
	EVT_BUTTON(ID_WXBUTTON1,main::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

main::main(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

main::~main()
{
}

void main::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Exit"), wxPoint(97, 244), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	SetTitle(_("Test"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void main::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void main::WxButton1Click(wxCommandEvent& event)
{
	Destroy();
}
