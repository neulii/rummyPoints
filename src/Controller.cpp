#include "Controller.h"

//Contstructor
Controller::Controller(MainWindow& view, GameModel& model)
	:view(&view), model(&model)
{


	view.Show();

}