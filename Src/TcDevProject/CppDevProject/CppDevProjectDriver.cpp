///////////////////////////////////////////////////////////////////////////////
// CppDevProjectDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "CppDevProjectDriver.h"
#include "CppDevProjectClassFactory.h"

DECLARE_GENERIC_DEVICE(CPPDEVPROJECTDRV)

IOSTATUS CCppDevProjectDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CCppDevProjectClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CCppDevProjectDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CCppDevProjectDriver::CPPDEVPROJECTDRV_GetVersion( )
{
	return( (CPPDEVPROJECTDRV_Major << 8) | CPPDEVPROJECTDRV_Minor );
}

