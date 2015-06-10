///-----------------------------------------------------------------
///
/// @file      Projeto1Frm.cpp
/// @author    LuisPaulo
/// Created:   22/05/2015 20:19:40
/// @section   DESCRIPTION
///            Projeto1Frm class implementation
///
///------------------------------------------------------------------

#include "Projeto1Frm.h"
#include "icon/icon.h" // incluir o ícone
#include "NewUser/NewUser.h" // Incluir Tela Novo Usuário
#include "Login/LoginFrm.h" //Incluir Tela de Login
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Projeto1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Projeto1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Projeto1Frm::OnClose)
	EVT_MENU(ID_MNU_NOVO_1004, Projeto1Frm::Mnunovo1004Click0)
	EVT_MENU(ID_MNU_ABRIR_1002, Projeto1Frm::Mnuabrir1002Click)
	EVT_MENU(ID_MNU_SALVAR_1005, Projeto1Frm::Mnusalvar1005Click)
	EVT_MENU(ID_MNU_FECHAR_1003, Projeto1Frm::Mnufechar1003Click)
	EVT_MENU(ID_MNU_NOVOUSU_RIO_1007, Projeto1Frm::Mnunovousurio1007Click)
END_EVENT_TABLE()
////Event Table End

Projeto1Frm::Projeto1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Projeto1Frm::~Projeto1Frm()
{
}

void Projeto1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start
	
	
    
 

	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_ARQUIVO_1001_Mnu_Obj = new wxMenu();
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_NOVO_1004, _("Novo"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_ABRIR_1002, _("Abrir"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_SALVAR_1005, _("Salvar"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_FECHAR_1003, _("Fechar"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ARQUIVO_1001_Mnu_Obj, _("Arquivo"));
	
	wxMenu *ID_MNU_ACESSO_1006_Mnu_Obj = new wxMenu();
	ID_MNU_ACESSO_1006_Mnu_Obj->Append(ID_MNU_NOVOUSU_RIO_1007, _("Novo Usuário"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ACESSO_1006_Mnu_Obj, _("Acesso"));
	
	wxMenu *ID_MNU_AJUDA_1008_Mnu_Obj = new wxMenu();
	WxMenuBar1->Append(ID_MNU_AJUDA_1008_Mnu_Obj, _("Ajuda"));
	SetMenuBar(WxMenuBar1);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	SetTitle(_("Projeto1"));
	SetIcon(wxNullIcon);
	SetSize(8,8,820,513);
	Center();
	
	//*************************TEla de Login**********************************
	Login *New_Login = new Login(this);
    New_Login->Center();
    New_Login->SetIcon(wxICON(aaaaa_logo));
    New_Login->Show(true);
       //*************************************
       
	////GUI Items Creation End
}

void Projeto1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnuabrir1002Click
 */
void Projeto1Frm::Mnuabrir1002Click(wxCommandEvent& event)
{
    wxFileDialog
        openFileDialog(this, _("Open XYZ file"), "", "",
                       "XYZ files (*.xyz)|*.xyz", wxFD_OPEN|wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
        return;     // the user changed idea...
     if (openFileDialog.ShowModal() == wxID_OK)
        return;     // the user clicked ok
	
}

/*
 * Mnufechar1003Click
 */
void Projeto1Frm::Mnufechar1003Click(wxCommandEvent& event)
{
	// insert your code here
	Destroy();
}


/*
 * Mnunovo1004Click0
 */
void Projeto1Frm::Mnunovo1004Click0(wxCommandEvent& event)
{
	// insert your code here
	 wxLogMessage("Um novo arquivo foi selecionado!");
}

/*
 * Mnusalvar1005Click
 */
void Projeto1Frm::Mnusalvar1005Click(wxCommandEvent& event)
{
	// insert your code here
	wxLogMessage("Um arquivo foi salvo!");
}

/*
 * Mnunovousurio1007Click
 */
void Projeto1Frm::Mnunovousurio1007Click(wxCommandEvent& event)
{
	// insert your code here
	NewUser *New_User = new NewUser(this);
    New_User->Show(true);
}
