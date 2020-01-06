#include "rummyPoints.h"


wxIMPLEMENT_APP_CONSOLE(RummyPoints);


//constructor
RummyPoints::RummyPoints()
{
	mainWindow = new MainWindow();
	game = new GameModel();

	controller = new Controller(mainWindow, game);

}

//deconstructor
RummyPoints::~RummyPoints()
{

}

bool RummyPoints::OnInit()
{
	
	

	return true;
}
