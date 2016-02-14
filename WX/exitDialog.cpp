///-----------------------------------------------------------------
///
/// @file      exitDialog.cpp
/// @author    davin
/// Created:   11/17/2015 11:12:19 PM
/// @section   DESCRIPTION
///            exitDialog class implementation
///
///------------------------------------------------------------------

#include "exitDialog.h"

//Do not add custom headers
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// exitDialog
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(exitDialog,wxDialog)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(exitDialog::OnClose)
END_EVENT_TABLE()
////Event Table End

exitDialog::exitDialog(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxDialog(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

exitDialog::~exitDialog()
{
} 

void exitDialog::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End.
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Are You Sure?"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void exitDialog::OnClose(wxCloseEvent& /*event*/)
{
	Destroy();
}
