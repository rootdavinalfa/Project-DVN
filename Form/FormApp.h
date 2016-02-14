//---------------------------------------------------------------------------
//
// Name:        FormApp.h
// Author:      davin
// Created:     2/4/2016 8:08:04 AM
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __MAINApp_h__
#define __MAINApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class mainApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
