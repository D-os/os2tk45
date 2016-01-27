
/*
 * This file was generated by the SOM Compiler.
 * FileName: mia.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somp
 * 
 *    ORIGINS: 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1994,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 */


#ifndef SOM_SOMPMediaInterfaceAbstract_h
#define SOM_SOMPMediaInterfaceAbstract_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef SOMPMediaInterfaceAbstract
#define SOMPMediaInterfaceAbstract SOMObject
#endif
/*
 *  This is the abstract class definition for an interface to
 *  some media.
 */
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */

/*
 * End of bindings for IDL types.
 */

#define SOMPMediaInterfaceAbstract_MajorVersion 2
#define SOMPMediaInterfaceAbstract_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define SOMPMediaInterfaceAbstractNewClass c
#pragma linkage(c, system)
#define SOMPMediaInterfaceAbstractClassData d
#define SOMPMediaInterfaceAbstractCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define SOMPMediaInterfaceAbstract_classObj SOMPMediaInterfaceAbstractClassData.classObject
#define _SOMPMediaInterfaceAbstract SOMPMediaInterfaceAbstract_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK SOMPMediaInterfaceAbstractNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(SOMPMediaInterfaceAbstractNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct SOMPMediaInterfaceAbstractClassDataStructure {
	SOMClass *classObject;
	somMToken sompOpen;
	somMToken sompClose;
} SOMDLINK SOMPMediaInterfaceAbstractClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct SOMPMediaInterfaceAbstractCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK SOMPMediaInterfaceAbstractCClassData;

/*
 * New and Renew macros for SOMPMediaInterfaceAbstract
 */
#define SOMPMediaInterfaceAbstractNew() \
   ( _SOMPMediaInterfaceAbstract ? \
	_somNew(_SOMPMediaInterfaceAbstract) \
	: ( SOMPMediaInterfaceAbstractNewClass(\
		SOMPMediaInterfaceAbstract_MajorVersion, \
		SOMPMediaInterfaceAbstract_MinorVersion),\
	   _somNew(_SOMPMediaInterfaceAbstract)))
#define SOMPMediaInterfaceAbstractRenew(buf) \
   ( _SOMPMediaInterfaceAbstract ? \
	_somRenew(_SOMPMediaInterfaceAbstract, buf) \
	: ( SOMPMediaInterfaceAbstractNewClass(\
		SOMPMediaInterfaceAbstract_MajorVersion, \
		SOMPMediaInterfaceAbstract_MinorVersion),\
	   _somRenew(_SOMPMediaInterfaceAbstract, buf)))

/*
 * New Method: sompOpen
 */
typedef void   SOMLINK somTP_SOMPMediaInterfaceAbstract_sompOpen(SOMPMediaInterfaceAbstract *somSelf, Environment *ev);
#pragma linkage(somTP_SOMPMediaInterfaceAbstract_sompOpen, system)
typedef somTP_SOMPMediaInterfaceAbstract_sompOpen *somTD_SOMPMediaInterfaceAbstract_sompOpen;
/*
 *  Open the media interface.
 */
#define somMD_SOMPMediaInterfaceAbstract_sompOpen "::SOMPMediaInterfaceAbstract::sompOpen"
#define SOMPMediaInterfaceAbstract_sompOpen(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMPMediaInterfaceAbstract, sompOpen) \
	(somSelf,ev))
#ifndef SOMGD_sompOpen
    #if (defined(_sompOpen) || defined(__sompOpen))
        #undef _sompOpen
        #undef __sompOpen
        #define SOMGD_sompOpen 1
    #else
        #define _sompOpen SOMPMediaInterfaceAbstract_sompOpen
    #endif /* _sompOpen */
#endif /* SOMGD_sompOpen */

/*
 * New Method: sompClose
 */
typedef void   SOMLINK somTP_SOMPMediaInterfaceAbstract_sompClose(SOMPMediaInterfaceAbstract *somSelf, Environment *ev);
#pragma linkage(somTP_SOMPMediaInterfaceAbstract_sompClose, system)
typedef somTP_SOMPMediaInterfaceAbstract_sompClose *somTD_SOMPMediaInterfaceAbstract_sompClose;
/*
 *  Close the media interface.
 */
#define somMD_SOMPMediaInterfaceAbstract_sompClose "::SOMPMediaInterfaceAbstract::sompClose"
#define SOMPMediaInterfaceAbstract_sompClose(somSelf,ev) \
    (SOM_Resolve(somSelf, SOMPMediaInterfaceAbstract, sompClose) \
	(somSelf,ev))
#ifndef SOMGD_sompClose
    #if (defined(_sompClose) || defined(__sompClose))
        #undef _sompClose
        #undef __sompClose
        #define SOMGD_sompClose 1
    #else
        #define _sompClose SOMPMediaInterfaceAbstract_sompClose
    #endif /* _sompClose */
#endif /* SOMGD_sompClose */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define SOMPMediaInterfaceAbstract_somDefaultInit SOMObject_somDefaultInit
#define SOMPMediaInterfaceAbstract_somDestruct SOMObject_somDestruct
#define SOMPMediaInterfaceAbstract_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define SOMPMediaInterfaceAbstract_somDefaultAssign SOMObject_somDefaultAssign
#define SOMPMediaInterfaceAbstract_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define SOMPMediaInterfaceAbstract_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define SOMPMediaInterfaceAbstract_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define SOMPMediaInterfaceAbstract_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define SOMPMediaInterfaceAbstract_somDefaultVAssign SOMObject_somDefaultVAssign
#define SOMPMediaInterfaceAbstract_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define SOMPMediaInterfaceAbstract_somInit SOMObject_somInit
#define SOMPMediaInterfaceAbstract_somFree SOMObject_somFree
#define SOMPMediaInterfaceAbstract_somUninit SOMObject_somUninit
#define SOMPMediaInterfaceAbstract_somGetClass SOMObject_somGetClass
#define SOMPMediaInterfaceAbstract_somGetClassName SOMObject_somGetClassName
#define SOMPMediaInterfaceAbstract_somGetSize SOMObject_somGetSize
#define SOMPMediaInterfaceAbstract_somIsA SOMObject_somIsA
#define SOMPMediaInterfaceAbstract_somIsInstanceOf SOMObject_somIsInstanceOf
#define SOMPMediaInterfaceAbstract_somRespondsTo SOMObject_somRespondsTo
#define SOMPMediaInterfaceAbstract_somDispatch SOMObject_somDispatch
#define SOMPMediaInterfaceAbstract_somClassDispatch SOMObject_somClassDispatch
#define SOMPMediaInterfaceAbstract_somCastObj SOMObject_somCastObj
#define SOMPMediaInterfaceAbstract_somResetObj SOMObject_somResetObj
#define SOMPMediaInterfaceAbstract_somDispatchV SOMObject_somDispatchV
#define SOMPMediaInterfaceAbstract_somDispatchL SOMObject_somDispatchL
#define SOMPMediaInterfaceAbstract_somDispatchA SOMObject_somDispatchA
#define SOMPMediaInterfaceAbstract_somDispatchD SOMObject_somDispatchD
#define SOMPMediaInterfaceAbstract_somPrintSelf SOMObject_somPrintSelf
#define SOMPMediaInterfaceAbstract_somDumpSelf SOMObject_somDumpSelf
#define SOMPMediaInterfaceAbstract_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_SOMPMediaInterfaceAbstract_h */