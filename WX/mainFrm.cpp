///-----------------------------------------------------------------
///
/// @file      mainFrm.cpp
/// @author    davin
/// Created:   11/17/2015 11:08:21 PM
/// @section   DESCRIPTION
///            mainFrm class implementation
///
///------------------------------------------------------------------

#include "mainFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// mainFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(mainFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(mainFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

mainFrm::mainFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

mainFrm::~mainFrm()
{
}

void mainFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Welcome to OSH"));
	SetIcon(wxNullIcon);
	SetSize(8,8,875,378);
	Center();
	
	////GUI Items Creation End
}

void mainFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
