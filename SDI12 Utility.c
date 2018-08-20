//==============================================================================
//
// Title:		SDI12 Utility
// Purpose:		A short description of the application.
//
// Created on:	2018/8/14 at 15:13:44 by .
// Copyright:	. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include <ansi_c.h>
#include <cvirte.h>		
#include <userint.h>
#include "SDI12 Utility.h"
#include "toolbox.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

static int panelHandle = 0;

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN The main entry-point function.
int main (int argc, char *argv[])
{
	int error = 0;
	int functionId;
	/* initialize and load resources */
	nullChk (InitCVIRTE (0, argv, 0));
	SetSleepPolicy(VAL_SLEEP_MORE);
	errChk (panelHandle = LoadPanel (0, "SDI12 Utility.uir", PANEL));
	
	/* display the panel and run the user interface */
	errChk (DisplayPanel (panelHandle));
	errChk (RunUserInterface ());

	//CmtScheduleThreadPoolFunction (DEFAULT_THREAD_POOL_HANDLE, DataAcqThreadFunction, NULL, &functionId);
    RunUserInterface ();
Error:
	/* clean up */
	if (panelHandle > 0)
		DiscardPanel (panelHandle);
	CmtWaitForThreadPoolFunctionCompletionEx  (DEFAULT_THREAD_POOL_HANDLE, functionId, 0,CMT_WAIT_FOREVER);
	return 0;
}

//==============================================================================
// UI callback function prototypes

/// HIFN Exit when the user dismisses the panel.
int CVICALLBACK panelCB (int panel, int event, void *callbackData,
		int eventData1, int eventData2)
{
	if (event == EVENT_CLOSE)
		QuitUserInterface (0);
	return 0;
}
