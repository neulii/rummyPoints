#pragma once

#include <wx/wx.h>
#include "MainWindow.h"

class RummyPoints : public wxApp
{
private: 
	
	MainWindow* mainWindow = nullptr;	//View
	GameModel* game = nullptr;			//Model
	Controller* controller = nullptr;	//Controller

public:

	RummyPoints();
	~RummyPoints();
	
	virtual bool OnInit();
};
