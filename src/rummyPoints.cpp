#include "rummyPoints.h"
#include "main_lib.h"



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

	model = new GameModel();
	view = new MainWindow(*model);

	controller = new Controller(*view, *model);

	return true;
}
