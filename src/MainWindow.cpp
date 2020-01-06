#include "MainWindow.h"

MainWindow::MainWindow(GameModel& model)
	:wxFrame(NULL, wxID_ANY, "RummyPoints", wxDefaultPosition, wxSize(900, 700)),model(&model)
{

	//main sizer... split window in left (ui to input) and data (table) on the right
	m_MainLayout = new wxBoxSizer(wxHORIZONTAL);

	m_LeftUISideSizer = new wxBoxSizer(wxVERTICAL);		//left side from main
	m_RightTableSideSizer = new wxBoxSizer(wxVERTICAL);	//right side from main

	//add left and right side to main layout
	m_MainLayout->Add(m_LeftUISideSizer, 1, wxEXPAND, 5);
	m_MainLayout->Add(m_RightTableSideSizer, 1, wxEXPAND, 5);



	m_neededPointDiffToWinLabel = new wxStaticText(this, wxID_ANY, wxT("0"),  wxPoint(100,100), wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
	//m_neededPointDiffToWinLabel->SetFont(wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));
	m_LeftUISideSizer->Add(m_neededPointDiffToWinLabel, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);



	m_actualPointsPlayerOneLabel = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(100, -1), wxALIGN_CENTER_HORIZONTAL);
	m_RightTableSideSizer->Add(m_actualPointsPlayerOneLabel, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	//set main layout
	this->SetSizer(m_MainLayout);
	
	//execute layouting
	this->Layout();
	
	Centre();
}