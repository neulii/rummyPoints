#pragma once

#include "wx/wx.h"
#include "wx/grid.h"
#include "GameModel.h"

#define ID_PLAYER_ONE 1000
#define ID_PLAYER_TWO 1001

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

	wxStaticText* m_PlayerOneNameLabel;
	wxStaticText* m_PlayerTwoNameLabel;

	wxTextCtrl* m_PLayerOnePointsInput;
	wxTextCtrl* m_PlayerTwoPointsInput;

	wxGrid* m_pointTable;

public:
	MainWindow(GameModel& model);

};

