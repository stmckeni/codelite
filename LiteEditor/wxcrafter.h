//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WXCRAFTER_BASE_CLASSES_H
#define WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/splitter.h>
#include <wx/panel.h>
#include <wx/dataview.h>
#include "m_dataviewtemplatesmodel.h"
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <wx/toolbar.h>
#include <wx/imaglist.h>
#include <wx/bitmap.h>

class NewProjectDlgBaseClass : public wxDialog
{
protected:
    wxSplitterWindow* m_splitter5;
    wxPanel* m_splitterPageRight;
    wxObjectDataPtr<m_dataviewTemplatesModel> m_dataviewTemplates_model;
    wxDataViewCtrl* m_dataviewTemplates;
    wxPanel* m_splitterPageLeft;
    wxStaticText* m_staticText16;
    wxTextCtrl* m_txtProjName;
    wxStaticText* m_staticText18;
    wxTextCtrl* m_textCtrlProjectPath;
    wxBitmapButton* m_bmpButton33;
    wxStaticText* m_staticText21;
    wxChoice* m_chCompiler;
    wxCheckBox* m_cbSeparateDir;
    wxStaticText* m_stxtFullFileName;
    wxTextCtrl* m_txtDescription;
    wxButton* m_button3;
    wxButton* m_button4;

protected:
    virtual void OnItemSelected(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnProjectNameChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectPathUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseProjectPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCreate(wxCommandEvent& event) { event.Skip(); }

public:
    NewProjectDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewProjectDlgBaseClass();
};


class NavBarControlBaseClass : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPage39;
    wxChoice* m_scope;
    wxPanel* m_splitterPage41;
    wxChoice* m_func;

protected:
    virtual void OnScope(wxCommandEvent& event) { event.Skip(); }
    virtual void OnScopeListMouseDown(wxMouseEvent& event) { event.Skip(); }
    virtual void OnFunction(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFuncListMouseDown(wxMouseEvent& event) { event.Skip(); }

public:
    NavBarControlBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~NavBarControlBaseClass();
};


class BuildTabTopPanelBaseClass : public wxPanel
{
protected:
    wxAuiToolBar* m_auibar48;

protected:
    virtual void OnToolPinCommandToolClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCopyBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCopyBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnPaste(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPasteUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    BuildTabTopPanelBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~BuildTabTopPanelBaseClass();
};


class NewProjImgList : public wxImageList
{
protected:

protected:

public:
    NewProjImgList();
    virtual ~NewProjImgList();
};

#endif
