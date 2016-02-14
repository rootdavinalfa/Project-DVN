//---------------------------------------------------------------------------
//
// Name:        WXApp.h
// Author:      davin
// Created:     11/17/2015 11:08:21 PM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __MAINFRMApp_h__
#define __MAINFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class mainFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
