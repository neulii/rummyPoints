#include "MainWindow.h"
#include "main_lib.h"

MainWindow::MainWindow(GameModel& model)
	:wxFrame(NULL, wxID_ANY, "RummyPoints", wxDefaultPosition, wxSize(900, 700)),model(&model)
{

	//main sizer... split window in left (ui to input) and data (table) on the right
	m_MainLayout		=	new wxBoxSizer(wxHORIZONTAL);

	m_LeftSide			=	new wxBoxSizer(wxVERTICAL);		//left side from main
	m_RightSide			=	new wxBoxSizer(wxVERTICAL);		//right side from main

	//sizers on the left side
	m_FirstLineOnLeft	=	new wxBoxSizer(wxVERTICAL);		//first line on the left
	m_SecondLineOnLeft	=	new wxBoxSizer(wxHORIZONTAL);	//second line on the left	
	m_ThirdLineOnLeft	=	new wxBoxSizer(wxHORIZONTAL);	//third line on the left
	m_FourthLineOnLeft	=	new wxBoxSizer(wxHORIZONTAL);	//fourth line on the left

	//add left and right side to main layout
	m_MainLayout->Add(m_LeftSide	, 1, wxEXPAND, 5);
	m_MainLayout->Add(m_RightSide	, 1, wxEXPAND, 5);

	//add layouts to left side
	m_LeftSide->Add(m_FirstLineOnLeft	, 0, 0, 5);
	m_LeftSide->Add(m_SecondLineOnLeft	, 0, 0, 5);
	m_LeftSide->Add(m_ThirdLineOnLeft	, 0, 0, 5);
	m_LeftSide->Add(m_FourthLineOnLeft	, 0, 0, 5);
	

	//label to show point difference to win -> first line
	m_neededPointDiffToWinLabel = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition,wxSize(250,-1), wxALIGN_CENTER_HORIZONTAL);
	m_FirstLineOnLeft->Add(m_neededPointDiffToWinLabel, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
	
	//label to show actual points player one -> second line
	m_actualPointsPlayerOneLabel = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(125, -1), wxALIGN_CENTER_HORIZONTAL);
	m_SecondLineOnLeft->Add(m_actualPointsPlayerOneLabel, 0, wxALL, 5);

	//label to show actual points player two -> second line
	m_actualPointsPlayerTwoLabel = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(125, -1), wxALIGN_CENTER_HORIZONTAL);
	m_SecondLineOnLeft->Add(m_actualPointsPlayerTwoLabel, 0, wxALL, 5);
	
	//name labels of players -> third line
	m_PlayerOneNameLabel = new wxStaticText(this, wxID_ANY, "playerOne", wxDefaultPosition, wxSize(125, -1), wxALIGN_CENTER_HORIZONTAL);
	m_ThirdLineOnLeft->Add(m_PlayerOneNameLabel, 0, wxALL, 5);

	m_PlayerTwoNameLabel = new wxStaticText(this, wxID_ANY, "playerTwo", wxDefaultPosition, wxSize(125, -1), wxALIGN_CENTER_HORIZONTAL);
	m_ThirdLineOnLeft->Add(m_PlayerTwoNameLabel, 0, wxALL, 5);

	//input fields for playerpoints
	m_PLayerOnePointsInput = new wxTextCtrl(this, ID_PLAYER_ONE, wxEmptyString, wxDefaultPosition, wxSize(125, -1), wxTE_CENTER | wxTE_PROCESS_ENTER);
	m_FourthLineOnLeft->Add(m_PLayerOnePointsInput, 0, wxALL, 5);

	m_PlayerTwoPointsInput = new wxTextCtrl(this, ID_PLAYER_TWO, wxEmptyString, wxDefaultPosition, wxSize(125, -1), wxTE_CENTER | wxTE_PROCESS_ENTER);
	m_FourthLineOnLeft->Add(m_PlayerTwoPointsInput, 0, wxALL, 5);

	//points grid
	m_pointTable = new wxGrid(this, wxID_ANY, wxDefaultPosition, wxSize(300, -1), 0);

	//Grid
	m_pointTable->CreateGrid(0, 3);
	m_pointTable->EnableEditing(false);
	m_pointTable->EnableGridLines(true);
	m_pointTable->EnableDragGridSize(false);
	m_pointTable->SetMargins(0, 0);

	// Columns
	m_pointTable->SetColSize(0, 65);
	m_pointTable->SetColSize(1, 65);
	m_pointTable->SetColSize(2, 65);
	m_pointTable->EnableDragColMove(false);
	m_pointTable->EnableDragColSize(false);
	m_pointTable->SetColLabelSize(30);
	m_pointTable->SetColLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

	// Rows
	m_pointTable->EnableDragRowSize(false);
	m_pointTable->SetRowLabelSize(50);
	m_pointTable->SetRowLabelAlignment(wxALIGN_CENTER, wxALIGN_CENTER);

	// Label Appearance

	// Cell Defaults
	m_pointTable->SetDefaultCellAlignment(wxALIGN_CENTER, wxALIGN_CENTER);
	m_pointTable->Enable(false);
	m_pointTable->SetMinSize(wxSize(300, -1));

	m_RightSide->Add(m_pointTable, 0, wxALL, 5);

	//set main layout
	this->SetSizer(m_MainLayout);
	
	//execute layouting
	this->Layout();
	

	Centre();
}