///-----------------------------------------------------------------
///
/// @file      frm.cpp
/// @author    davin
/// Created:   2/4/2016 8:03:13 AM
/// @section   DESCRIPTION
///            frm class implementation
///
///------------------------------------------------------------------

#include "frm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(frm::OnClose)
END_EVENT_TABLE()
////Event Table End

frm::frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

frm::~frm()
{
}

void frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Form"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
