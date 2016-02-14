///-----------------------------------------------------------------
///
/// @file      frmMain.cpp
/// @author    davin
/// Created:   11/17/2015 11:06:50 PM
/// @section   DESCRIPTION
///            frmMain class implementation
///
///------------------------------------------------------------------

#include "frmMain.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// frmMain
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(frmMain,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(frmMain::OnClose)
END_EVENT_TABLE()
////Event Table End

frmMain::frmMain(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

frmMain::~frmMain()
{
}

void frmMain::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Welcome guest"));
	SetIcon(wxNullIcon);
	SetSize(8,8,844,386);
	Center();
	
	////GUI Items Creation End
}

void frmMain::OnClose(wxCloseEvent& event)
{
	Destroy();
}
