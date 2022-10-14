///////////////////////////////////////////////////////////////////////////////
// CppDevProjectDriver.h

#ifndef __CPPDEVPROJECTDRIVER_H__
#define __CPPDEVPROJECTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define CPPDEVPROJECTDRV_NAME        "CPPDEVPROJECT"
#define CPPDEVPROJECTDRV_Major       1
#define CPPDEVPROJECTDRV_Minor       0

#define DEVICE_CLASS CCppDevProjectDriver

#include "ObjDriver.h"

class CCppDevProjectDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl CPPDEVPROJECTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(CPPDEVPROJECTDRV)
	VxD_Service( CPPDEVPROJECTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __CPPDEVPROJECTDRIVER_H__