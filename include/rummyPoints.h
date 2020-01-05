#pragma once

#include <wx/wx.h>
#include "MainWindow.h"

class RummyPoints : public wxApp
{
private: 
	
	MainWindow* mainWindow;

public:

	RummyPoints();
	~RummyPoints();
	
	virtual bool OnInit();
};
