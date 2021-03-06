#if !defined(AFX_DISPATCHSHEET_H__2817ECC6_E5B2_48CB_9AA6_5FA612304EBB__INCLUDED_)
#define AFX_DISPATCHSHEET_H__2817ECC6_E5B2_48CB_9AA6_5FA612304EBB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DispatchSheet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDispatchSheet dialog

class CDispatchSheet : public CDialog
{
// Construction
public:
	CDispatchSheet(CWnd* pParent = NULL, DISPATCHSHEETPassedDataDef *pPassedData = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDispatchSheet)
	enum { IDD = IDD_DISPATCHSHEET };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDispatchSheet)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

  CComboBox* pComboBoxDIVISION;
  CDTPicker* pDTPickerDATE;
  CStatic*   pStaticGARAGES_TITLE;
  CListBox*  pListBoxGARAGES;
  CStatic*   pStaticRELIEFPOINTS_TITLE;
  CListBox*  pListBoxRELIEFPOINTS;
  CButton*   pButtonOPTIONS;
  CButton*   pButtonINCLUDESTARTOFPIECETRAVEL;
  CButton*   pButtonSORTBY;
  CButton*   pButtonREPORTTIME;
  CButton*   pButtonENDTIME;
  
  DISPATCHSHEETPassedDataDef *m_pPassedData;

	// Generated message map functions
	//{{AFX_MSG(CDispatchSheet)
	virtual BOOL OnInitDialog();
	afx_msg void OnClose();
	afx_msg void OnHelp();
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DISPATCHSHEET_H__2817ECC6_E5B2_48CB_9AA6_5FA612304EBB__INCLUDED_)
