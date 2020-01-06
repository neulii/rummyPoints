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
	m_FirstLineOnLeft	=	new wxBoxSizer(wxVERTICAL);	//first line on the left
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
	




	//set main layout
	this->SetSizer(m_MainLayout);
	
	//execute layouting
	this->Layout();
	

	Centre();
}