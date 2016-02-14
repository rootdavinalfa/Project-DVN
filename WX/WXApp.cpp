//---------------------------------------------------------------------------
//
// Name:        WXApp.cpp
// Author:      davin
// Created:     11/17/2015 11:08:21 PM
// Description: 
//
//---------------------------------------------------------------------------

#include "WXApp.h"
#include "mainFrm.h"

IMPLEMENT_APP(mainFrmApp)

bool mainFrmApp::OnInit()
{
    mainFrm* frame = new mainFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int mainFrmApp::OnExit()
{
	return 0;
}
