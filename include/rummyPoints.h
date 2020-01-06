#pragma once

#include <wx/wx.h>
#include "MainWindow.h"
#include "Controller.h"
#include "GameModel.h"

class RummyPoints : public wxApp
{
private: 
	
	MainWindow* view = nullptr;			//View
	GameModel* model = nullptr;			//Model
	Controller* controller = nullptr;	//Controller

public:

	RummyPoints();
	~RummyPoints();
	
	virtual bool OnInit();
};
