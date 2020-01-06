#pragma once
#include "GameModel.h"
#include "MainWindow.h"

class Controller
{

private:
	GameModel* model = nullptr;
	MainWindow* view = nullptr; 

public:

	Controller(MainWindow& view, GameModel& model);





};

