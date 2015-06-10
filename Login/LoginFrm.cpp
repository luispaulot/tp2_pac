///-----------------------------------------------------------------
///
/// @file      Sem Título1Frm.cpp
/// @author    LuisPaulo
/// Created:   09/06/2015 17:58:00
/// @section   DESCRIPTION
///            Login class implementation
///
///------------------------------------------------------------------

#include "loginFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Login
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Login,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Login::OnClose)
END_EVENT_TABLE()
////Event Table End

Login::Login(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, wxDefaultPosition, size, style)
{
	CreateGUIControls();
}

Login::~Login()
{
}

void Login::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _("Sair"), wxPoint(183,119), wxDefaultSize, 0, wxDefaultValidator, _("WxButton2"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Entrar"), wxPoint(67,119), wxDefaultSize, 0, wxDefaultValidator, _("WxButton1"));

    WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(12,30), wxSize(300,20), 0, wxDefaultValidator, _("WxEdit2"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(12,85), wxSize(300,20), 0, wxDefaultValidator, _("WxEdit1"));
	
    WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Senha"), wxPoint(12,16), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Usuário"), wxPoint(12,67), wxDefaultSize, 0, _("WxStaticText1"));
	
    SetTitle(_("Login"));
	SetIcon(wxNullIcon);
	SetSize(44,37,342,207);
	Center();
	
	////GUI Items Creation End
}

void Login::OnClose(wxCloseEvent& event)
{
	Destroy();
}
