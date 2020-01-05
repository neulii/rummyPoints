#include "rummyPoints.h"


wxIMPLEMENT_APP_CONSOLE(RummyPoints);


//constructor
RummyPoints::RummyPoints()
{

}

//deconstructor
RummyPoints::~RummyPoints()
{

}

bool RummyPoints::OnInit()
{

	mainWindow = new MainWindow();
	mainWindow->Show();


	return true;
}
