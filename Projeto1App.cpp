//---------------------------------------------------------------------------
//
// Name:        Projeto1App.cpp
// Author:      LuisPaulo / GustavoWiller
// Created:     22/05/2015 20:19:40
// Description: 
//
//---------------------------------------------------------------------------

#include "Projeto1App.h"
#include "Projeto1Frm.h"
#include <wx/splash.h>
#include "sqlite/conexao.h"
//#include "Help/help.h"
#include "wx/help.h" 
#include "wx/fs_zip.h"


IMPLEMENT_APP(Projeto1FrmApp)

bool Projeto1FrmApp::OnInit()
{
    wxFileSystem::AddHandler(new wxZipFSHandler);  
    //m_helpController = new wxHelpController; 
    //m_helpController->Initialize(helpFilePath);
    //Inicio Splash
    //Inicia um handler para a imagem
    wxImage::AddHandler( new wxPNGHandler );
    //Adiciona a imagem a um wxBitmap
    wxBitmap image(wxT("splash.png"), wxBITMAP_TYPE_PNG);
    //Splash
    wxSplashScreen* splash = new wxSplashScreen(image,
          wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT,
          3000, NULL, -1, wxDefaultPosition, wxDefaultSize,//3 Segundos
          wxSIMPLE_BORDER|wxSTAY_ON_TOP);
    wxYield();
    //fim splash
    Projeto1Frm* frame = new Projeto1Frm(NULL);
    SetTopWindow(frame);
    frame->SetIcon(wxICON("images.ico"));
    frame->Show();
    return true;
}
 
int Projeto1FrmApp::OnExit()
{
	return 0;
}
