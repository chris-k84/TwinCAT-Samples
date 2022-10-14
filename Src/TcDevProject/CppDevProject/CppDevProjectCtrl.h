///////////////////////////////////////////////////////////////////////////////
// CppDevProjectCtrl.h

#ifndef __CPPDEVPROJECTCTRL_H__
#define __CPPDEVPROJECTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "CppDevProjectW32.h"
#include "TcBase.h"
#include "CppDevProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CCppDevProjectCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CCppDevProjectCtrl, &CLSID_CppDevProjectCtrl>
	, public ICppDevProjectCtrl
	, public ITcOCFCtrlImpl<CCppDevProjectCtrl, CCppDevProjectClassFactory>
{
public:
	CCppDevProjectCtrl();
	virtual ~CCppDevProjectCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_CPPDEVPROJECTCTRL)
DECLARE_NOT_AGGREGATABLE(CCppDevProjectCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCppDevProjectCtrl)
	COM_INTERFACE_ENTRY(ICppDevProjectCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __CPPDEVPROJECTCTRL_H__
