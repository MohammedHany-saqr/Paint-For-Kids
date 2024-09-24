#ifndef _Play_Recording_Action_H
#define  _Play_Recording_Action_H
//#include "Action.h"
#include"../ApplicationManager.h"
#include"ClearAllAction.h"
class PlayRecordingAction : public Action
{
	ClearAllAction Cla;
public:

	PlayRecordingAction(ApplicationManager* pApp);

	virtual void ReadActionParameters(); //Read Parameters

	virtual bool Execute();

};
#endif
