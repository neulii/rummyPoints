#pragma once

#include "wx/wx.h"
#include "GameModel.h"

class MainWindow : public wxFrame
{
private:
	GameModel* model = nullptr;


protected:
	
	//main layouts
	wxBoxSizer* m_MainLayout;
	wxBoxSizer* m_LeftSide;
	wxBoxSizer* m_RightSide;

	//layouts on the left side
	wxBoxSizer* m_FirstLineOnLeft;
	wxBoxSizer* m_SecondLineOnLeft;
	wxBoxSizer* m_ThirdLineOnLeft;
	wxBoxSizer* m_FourthLineOnLeft;
	
	wxStaticText* m_neededPointDiffToWinLabel;
	wxStaticText* m_actualPointsPlayerOneLabel;
	wxStaticText* m_actualPointsPlayerTwoLabel;


	


public:
	MainWindow(GameModel& model);

};

