///-----------------------------------------------------------------
///
/// @file      mainFrm.h
/// @author    davin
/// Created:   11/17/2015 11:08:21 PM
/// @section   DESCRIPTION
///            mainFrm class declaration
///
///------------------------------------------------------------------

#ifndef __MAINFRM_H__
#define __MAINFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
////Header Include End

////Dialog Style Start
#undef mainFrm_STYLE
#define mainFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX | wxMAXIMIZE_BOX
////Dialog Style End

class mainFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		mainFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Welcome to OSH"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = mainFrm_STYLE);
		virtual ~mainFrm();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
