///////////////////////////////////////////////////////////////////////////////
// CppDevProjectClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "CppDevProjectClassFactory.h"
#include "CppDevProjectServices.h"
#include "CppDevProjectVersion.h"
#include "Module1.h"

BEGIN_CLASS_MAP(CCppDevProjectClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY_LIB(VID_CppDevProject, CID_CppDevProjectCModule1, SRVNAME_CPPDEVPROJECT "!CModule1", CModule1)
///</AutoGeneratedContent>
END_CLASS_MAP()

CCppDevProjectClassFactory::CCppDevProjectClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME_TMX(SRVNAME_CPPDEVPROJECT));
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(CppDevProject));
#endif //defined(TCDBG_UNIT_VERSION)
}

