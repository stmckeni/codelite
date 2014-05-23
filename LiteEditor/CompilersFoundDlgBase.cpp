//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CompilersFoundDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "CompilersFoundDlgBase.h"


// Declare the bitmap loading function
extern void wxCFE1CInitBitmapResources();

static bool bBitmapLoaded = false;


CompilersFoundDlgBase::CompilersFoundDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCFE1CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_banner10 = new wxBannerWindow(this, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), 0);
    m_banner10->SetBitmap(wxNullBitmap);
    m_banner10->SetText(_("Compilers Scan Completed"), _("Below is a list of compilers located on your computer.\nClick OK to accept this list and replace the current list of compilers with this list, or Cancel to abort."));
    m_banner10->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE), wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE));
    m_banner10->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));
    
    boxSizer2->Add(m_banner10, 0, wxALL|wxEXPAND, 5);
    
    m_dataview = new wxDataViewCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,200), wxDV_ROW_LINES|wxDV_SINGLE);
    
    m_dataviewModel = new CompilersFoundModel;
    m_dataviewModel->SetColCount( 2 );
    m_dataview->AssociateModel(m_dataviewModel.get() );
    
    boxSizer2->Add(m_dataview, 1, wxALL|wxEXPAND, 5);
    
    m_dataview->AppendTextColumn(_("Compiler Name"), m_dataview->GetColumnCount(), wxDATAVIEW_CELL_INERT, 200, wxALIGN_LEFT);
    m_dataview->AppendTextColumn(_("Installation Path"), m_dataview->GetColumnCount(), wxDATAVIEW_CELL_INERT, 400, wxALIGN_LEFT);
    m_stdBtnSizer4 = new wxStdDialogButtonSizer();
    
    boxSizer2->Add(m_stdBtnSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer4->AddButton(m_buttonCancel);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer4->AddButton(m_buttonOK);
    m_stdBtnSizer4->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

CompilersFoundDlgBase::~CompilersFoundDlgBase()
{
}

CompilersModifiedDlgBase::CompilersModifiedDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCFE1CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer16 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer16);
    
    m_staticText27 = new wxStaticText(this, wxID_ANY, _("Some of the compilers referred  by the workspace no longer exist\nPlease select a compiler to replace them from the list below"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer16->Add(m_staticText27, 0, wxALL, 5);
    
    m_dvListCtrl = new wxDataViewListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(300,200), wxDV_ROW_LINES|wxDV_SINGLE);
    
    boxSizer16->Add(m_dvListCtrl, 1, wxALL|wxEXPAND, 5);
    
    m_dvListCtrl->AppendTextColumn(_("Old Compiler Name"), wxDATAVIEW_CELL_INERT, 150, wxALIGN_LEFT);
    m_stdBtnSizer18 = new wxStdDialogButtonSizer();
    
    boxSizer16->Add(m_stdBtnSizer18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer18->AddButton(m_buttonOK);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer18->AddButton(m_buttonCancel);
    m_stdBtnSizer18->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CompilersModifiedDlgBase::OnOKUI), NULL, this);
    
}

CompilersModifiedDlgBase::~CompilersModifiedDlgBase()
{
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CompilersModifiedDlgBase::OnOKUI), NULL, this);
    
}
