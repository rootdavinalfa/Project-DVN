///-----------------------------------------------------------------
///
/// @file      dlg.cpp
/// @author    davin
/// Created:   2/4/2016 8:16:47 AM
/// @section   DESCRIPTION
///            dlg class implementation
///
///------------------------------------------------------------------

#include "dlg.h"

//Do not add custom headers
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// dlg
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(dlg,wxDialog)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(dlg::OnClose)
END_EVENT_TABLE()
////Event Table End

dlg::dlg(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxDialog(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

dlg::~dlg()
{
} 

void dlg::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End.
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Dialog"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void dlg::OnClose(wxCloseEvent& /*event*/)
{
	Destroy();
}
