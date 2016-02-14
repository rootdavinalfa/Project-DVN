//---------------------------------------------------------------------------
//
// Name:        FormApp.cpp
// Author:      davin
// Created:     2/4/2016 8:08:04 AM
// Description: 
//
//---------------------------------------------------------------------------

#include "FormApp.h"
#include "main.h"

IMPLEMENT_APP(mainApp)

bool mainApp::OnInit()
{
    main* frame = new main(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int mainApp::OnExit()
{
	return 0;
}
