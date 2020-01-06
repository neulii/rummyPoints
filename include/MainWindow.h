#pragma once

#include "wx/wx.h"
#include "GameModel.h"

class MainWindow : public wxFrame
{
private:
	GameModel* model = nullptr;


protected:
	
	wxBoxSizer* m_MainLayout;
	wxBoxSizer* m_LeftUISideSizer;
	wxBoxSizer* m_RightTableSideSizer;

	wxStaticText* m_neededPointDiffToWinLabel;
	wxStaticText* m_actualPointsPlayerOneLabel;
	wxStaticText* m_actualPointsPlayerTwoLabel;


	


public:
	MainWindow(GameModel& model);

};

