
#pragma once

/////////////////////////////////////////////////////////////////////////////
// CViewTree ����

class CViewTree : public CTreeCtrl
{
// �غc
public:
	CViewTree();

// �мg
protected:
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);

// �{���X��@
public:
	virtual ~CViewTree();

protected:
	DECLARE_MESSAGE_MAP()
};
