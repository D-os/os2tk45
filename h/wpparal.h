
/*
 * This file was generated by the SOM Compiler.
 * FileName: G:\cwpsh\rel\os2c\include\base\os2\wpparal.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.14
 *     SOM Emitter emith: 2.43
 */

/*
 *   Module Header
 * 
 *   Module Name: WPPARALLEL
 * 
 *   OS/2 Presentation Manager Workplace class definitions
 * 
 *   Copyright (c) International Business Machines Corporation 1991, 1992
 * 
 */


#ifndef SOM_WPDevParallel_h
#define SOM_WPDevParallel_h


/*
 * Passthru lines: File: "C.h", "before"
 */



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
#ifndef WPDevParallel
#define WPDevParallel SOMObject
#endif
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef WPFolder
    #define WPFolder SOMObject
#endif /* WPFolder */
#ifndef M_WPObject
    #define M_WPObject SOMObject
#endif /* M_WPObject */
#ifndef WPObject
    #define WPObject SOMObject
#endif /* WPObject */
#ifndef WPImageFile
    #define WPImageFile SOMObject
#endif /* WPImageFile */
#ifndef M_WPTransient
    #define M_WPTransient SOMObject
#endif /* M_WPTransient */
#ifndef M_WPDevice
    #define M_WPDevice SOMObject
#endif /* M_WPDevice */
#ifndef M_WPDevParallel
    #define M_WPDevParallel SOMObject
#endif /* M_WPDevParallel */

/*
 * End of bindings for IDL types.
 */

#define WPDevParallel_MajorVersion 1
#define WPDevParallel_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define WPDevParallelNewClass wpparallelc
#pragma linkage(wpparallelc, system)
#define WPDevParallelClassData wpparalleld
#define WPDevParallelCClassData wpparallelx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the meta class file
 */
#include <wpparal.h>
/*--------------Migration------------*/
#define WPDevParallel_classObj WPDevParallelClassData.classObject
#define _WPDevParallel WPDevParallel_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK WPDevParallelNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(WPDevParallelNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct WPDevParallelClassDataStructure {
	SOMClass *classObject;
} SOMDLINK WPDevParallelClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct WPDevParallelCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK WPDevParallelCClassData;

/*
 * New and Renew macros for WPDevParallel
 */
#define WPDevParallelNew() \
   ( _WPDevParallel ? \
	_somNew(_WPDevParallel) \
	: ( WPDevParallelNewClass(\
		WPDevParallel_MajorVersion, \
		WPDevParallel_MinorVersion),\
	   _somNew(_WPDevParallel)))
#define WPDevParallelRenew(buf) \
   ( _WPDevParallel ? \
	_somRenew(_WPDevParallel, buf) \
	: ( WPDevParallelNewClass(\
		WPDevParallel_MajorVersion, \
		WPDevParallel_MinorVersion),\
	   _somRenew(_WPDevParallel, buf)))
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define WPDevParallel_wpAddDeviceDevice1Page WPDevice_wpAddDeviceDevice1Page
#define WPDevParallel_wpAddDeviceDevice2Page WPDevice_wpAddDeviceDevice2Page
#define WPDevParallel_wpAddDeviceDMA1Page WPDevice_wpAddDeviceDMA1Page
#define WPDevParallel_wpAddDeviceIRQ1Page WPDevice_wpAddDeviceIRQ1Page
#define WPDevParallel_wpAddDeviceMemory1Page WPDevice_wpAddDeviceMemory1Page
#define WPDevParallel_wpAddDeviceIO1Page WPDevice_wpAddDeviceIO1Page
#define WPDevParallel_wpAddSettingsPages WPObject_wpAddSettingsPages
#define WPDevParallel_wpInitData WPObject_wpInitData
#define WPDevParallel_wpModifyPopupMenu WPObject_wpModifyPopupMenu
#define WPDevParallel_wpQueryDetailsData WPObject_wpQueryDetailsData
#define WPDevParallel_wpRestoreState WPObject_wpRestoreState
#define WPDevParallel_wpSaveState WPObject_wpSaveState
#define WPDevParallel_wpSetup WPObject_wpSetup
#define WPDevParallel_wpUnInitData WPObject_wpUnInitData
#define WPDevParallel_wpCnrInsertObject WPObject_wpCnrInsertObject
#define WPDevParallel_wpQueryHandle WPObject_wpQueryHandle
#define WPDevParallel_wpCopyObject WPObject_wpCopyObject
#define WPDevParallel_somDefaultInit SOMObject_somDefaultInit
#define WPDevParallel_somDestruct SOMObject_somDestruct
#define WPDevParallel_wpQueryIcon WPObject_wpQueryIcon
#define WPDevParallel_wpSaveImmediate WPObject_wpSaveImmediate
#define WPDevParallel_wpIdentify WPObject_wpIdentify
#define WPDevParallel_wpAddObjectGeneralPage WPObject_wpAddObjectGeneralPage
#define WPDevParallel_wpAddObjectGeneralPage2 WPObject_wpAddObjectGeneralPage2
#define WPDevParallel_wpAddObjectWindowPage WPObject_wpAddObjectWindowPage
#define WPDevParallel_wpAddToObjUseList WPObject_wpAddToObjUseList
#define WPDevParallel_wpAllocMem WPObject_wpAllocMem
#define WPDevParallel_wpAppendObject WPObject_wpAppendObject
#define WPDevParallel_wpAssertObjectMutexSem WPObject_wpAssertObjectMutexSem
#define WPDevParallel_wpClose WPObject_wpClose
#define WPDevParallel_wpCnrRemoveObject WPObject_wpCnrRemoveObject
#define WPDevParallel_wpCnrSetEmphasis WPObject_wpCnrSetEmphasis
#define WPDevParallel_wpConfirmDelete WPObject_wpConfirmDelete
#define WPDevParallel_wpConfirmObjectTitle WPObject_wpConfirmObjectTitle
#define WPDevParallel_wpCopiedFromTemplate WPObject_wpCopiedFromTemplate
#define WPDevParallel_wpCreateAnother WPObject_wpCreateAnother
#define WPDevParallel_wpCreateFromTemplate WPObject_wpCreateFromTemplate
#define WPDevParallel_wpCreateShadowObject WPObject_wpCreateShadowObject
#define WPDevParallel_wpDelete WPObject_wpDelete
#define WPDevParallel_wpDeleteFromObjUseList WPObject_wpDeleteFromObjUseList
#define WPDevParallel_wpDisplayHelp WPObject_wpDisplayHelp
#define WPDevParallel_wpDisplayMenu WPObject_wpDisplayMenu
#define WPDevParallel_wpDoesObjectMatch WPObject_wpDoesObjectMatch
#define WPDevParallel_wpDraggedOverObject WPObject_wpDraggedOverObject
#define WPDevParallel_wpDragOver WPObject_wpDragOver
#define WPDevParallel_wpDrop WPObject_wpDrop
#define WPDevParallel_wpDroppedOnObject WPObject_wpDroppedOnObject
#define WPDevParallel_wpEndConversation WPObject_wpEndConversation
#define WPDevParallel_wpFilterPopupMenu WPObject_wpFilterPopupMenu
#define WPDevParallel_wpFilterMenu WPObject_wpFilterMenu
#define WPDevParallel_wpFindUseItem WPObject_wpFindUseItem
#define WPDevParallel_wpFormatDragItem WPObject_wpFormatDragItem
#define WPDevParallel_wpFree WPObject_wpFree
#define WPDevParallel_wpFreeMem WPObject_wpFreeMem
#define WPDevParallel_wpHide WPObject_wpHide
#define WPDevParallel_wpInsertPopupMenuItems WPObject_wpInsertPopupMenuItems
#define WPDevParallel_wpInsertMenuItems WPObject_wpInsertMenuItems
#define WPDevParallel_wpInsertSettingsPage WPObject_wpInsertSettingsPage
#define WPDevParallel_wpMenuItemHelpSelected WPObject_wpMenuItemHelpSelected
#define WPDevParallel_wpMenuItemSelected WPObject_wpMenuItemSelected
#define WPDevParallel_wpModifyMenu WPObject_wpModifyMenu
#define WPDevParallel_wpMoveObject WPObject_wpMoveObject
#define WPDevParallel_wpOpen WPObject_wpOpen
#define WPDevParallel_wpPrintObject WPObject_wpPrintObject
#define WPDevParallel_wpQueryConcurrentView WPObject_wpQueryConcurrentView
#define WPDevParallel_wpQueryButtonAppearance WPObject_wpQueryButtonAppearance
#define WPDevParallel_wpQueryConfirmations WPObject_wpQueryConfirmations
#define WPDevParallel_wpQueryDefaultHelp WPObject_wpQueryDefaultHelp
#define WPDevParallel_wpQueryDefaultView WPObject_wpQueryDefaultView
#define WPDevParallel_wpQueryError WPObject_wpQueryError
#define WPDevParallel_wpSetFolder WPObject_wpSetFolder
#define WPDevParallel_wpQueryFolder WPObject_wpQueryFolder
#define WPDevParallel_wpQueryIconData WPObject_wpQueryIconData
#define WPDevParallel_wpQueryMinWindow WPObject_wpQueryMinWindow
#define WPDevParallel_wpQueryNameClashOptions WPObject_wpQueryNameClashOptions
#define WPDevParallel_wpQueryStyle WPObject_wpQueryStyle
#define WPDevParallel_wpSetTaskRec WPObject_wpSetTaskRec
#define WPDevParallel_wpFindTaskRec WPObject_wpFindTaskRec
#define WPDevParallel_wpQueryTitle WPObject_wpQueryTitle
#define WPDevParallel_wpRegisterView WPObject_wpRegisterView
#define WPDevParallel_wpReleaseObjectMutexSem WPObject_wpReleaseObjectMutexSem
#define WPDevParallel_wpRender WPObject_wpRender
#define WPDevParallel_wpRenderComplete WPObject_wpRenderComplete
#define WPDevParallel_wpReplaceObject WPObject_wpReplaceObject
#define WPDevParallel_wpRequestObjectMutexSem WPObject_wpRequestObjectMutexSem
#define WPDevParallel_wpRestore WPObject_wpRestore
#define WPDevParallel_wpRestoreData WPObject_wpRestoreData
#define WPDevParallel_wpRestoreLong WPObject_wpRestoreLong
#define WPDevParallel_wpRestoreString WPObject_wpRestoreString
#define WPDevParallel_wpSaveData WPObject_wpSaveData
#define WPDevParallel_wpSaveDeferred WPObject_wpSaveDeferred
#define WPDevParallel_wpSaveLong WPObject_wpSaveLong
#define WPDevParallel_wpSaveString WPObject_wpSaveString
#define WPDevParallel_wpScanSetupString WPObject_wpScanSetupString
#define WPDevParallel_wpSetConcurrentView WPObject_wpSetConcurrentView
#define WPDevParallel_wpSetButtonAppearance WPObject_wpSetButtonAppearance
#define WPDevParallel_wpSetDefaultHelp WPObject_wpSetDefaultHelp
#define WPDevParallel_wpSetDefaultView WPObject_wpSetDefaultView
#define WPDevParallel_wpSetError WPObject_wpSetError
#define WPDevParallel_wpQueryScreenGroupID WPObject_wpQueryScreenGroupID
#define WPDevParallel_wpSetupOnce WPObject_wpSetupOnce
#define WPDevParallel_wpSetIcon WPObject_wpSetIcon
#define WPDevParallel_wpSetIconData WPObject_wpSetIconData
#define WPDevParallel_wpSetMinWindow WPObject_wpSetMinWindow
#define WPDevParallel_wpModifyStyle WPObject_wpModifyStyle
#define WPDevParallel_wpSetTitle WPObject_wpSetTitle
#define WPDevParallel_wpSwitchTo WPObject_wpSwitchTo
#define WPDevParallel_wpViewObject WPObject_wpViewObject
#define WPDevParallel_wpQueryTrueStyle WPObject_wpQueryTrueStyle
#define WPDevParallel_wpUnlockObject WPObject_wpUnlockObject
#define WPDevParallel_wpObjectReady WPObject_wpObjectReady
#define WPDevParallel_wpIsObjectInitialized WPObject_wpIsObjectInitialized
#define WPDevParallel_wpCreateShadowObjectExt WPObject_wpCreateShadowObjectExt
#define WPDevParallel_wpCnrDeleteUseItem WPObject_wpCnrDeleteUseItem
#define WPDevParallel_wpIsDeleteable WPObject_wpIsDeleteable
#define WPDevParallel_wpQueryCoreRecord WPObject_wpQueryCoreRecord
#define WPDevParallel_wpSetObjectID WPObject_wpSetObjectID
#define WPDevParallel_wpQueryObjectID WPObject_wpQueryObjectID
#define WPDevParallel_wpSetDefaultIconPos WPObject_wpSetDefaultIconPos
#define WPDevParallel_wpQueryDefaultIconPos WPObject_wpQueryDefaultIconPos
#define WPDevParallel_wpCnrRefreshDetails WPObject_wpCnrRefreshDetails
#define WPDevParallel_wpFindViewItem WPObject_wpFindViewItem
#define WPDevParallel_wpLockObject WPObject_wpLockObject
#define WPDevParallel_wpIsLocked WPObject_wpIsLocked
#define WPDevParallel_wpQueryContainerFlagPtr WPObject_wpQueryContainerFlagPtr
#define WPDevParallel_wpWaitForClose WPObject_wpWaitForClose
#define WPDevParallel_wpSetMenuStyle WPObject_wpSetMenuStyle
#define WPDevParallel_wpQueryMenuStyle WPObject_wpQueryMenuStyle
#define WPDevParallel_wpSetStyle WPObject_wpSetStyle
#define WPDevParallel_somInit SOMObject_somInit
#define WPDevParallel_somUninit SOMObject_somUninit
#define WPDevParallel_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define WPDevParallel_somDefaultAssign SOMObject_somDefaultAssign
#define WPDevParallel_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define WPDevParallel_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define WPDevParallel_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define WPDevParallel_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define WPDevParallel_somDefaultVAssign SOMObject_somDefaultVAssign
#define WPDevParallel_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define WPDevParallel_somFree SOMObject_somFree
#define WPDevParallel_somGetClass SOMObject_somGetClass
#define WPDevParallel_somGetClassName SOMObject_somGetClassName
#define WPDevParallel_somGetSize SOMObject_somGetSize
#define WPDevParallel_somIsA SOMObject_somIsA
#define WPDevParallel_somIsInstanceOf SOMObject_somIsInstanceOf
#define WPDevParallel_somRespondsTo SOMObject_somRespondsTo
#define WPDevParallel_somDispatch SOMObject_somDispatch
#define WPDevParallel_somClassDispatch SOMObject_somClassDispatch
#define WPDevParallel_somCastObj SOMObject_somCastObj
#define WPDevParallel_somResetObj SOMObject_somResetObj
#define WPDevParallel_somDispatchV SOMObject_somDispatchV
#define WPDevParallel_somDispatchL SOMObject_somDispatchL
#define WPDevParallel_somDispatchA SOMObject_somDispatchA
#define WPDevParallel_somDispatchD SOMObject_somDispatchD
#define WPDevParallel_somPrintSelf SOMObject_somPrintSelf
#define WPDevParallel_somDumpSelf SOMObject_somDumpSelf
#define WPDevParallel_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_WPDevParallel_h */

#ifndef SOM_M_WPDevParallel_h
#define SOM_M_WPDevParallel_h


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
#ifndef M_WPDevParallel
#define M_WPDevParallel SOMObject
#endif
/*
 *  New class methods section
 */
#include <wpdevice.h>

/*
 * Start of bindings for IDL types
 */


/*
 * End of bindings for IDL types.
 */

#define M_WPDevParallel_MajorVersion 1
#define M_WPDevParallel_MinorVersion 2

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define M_WPDevParallelNewClass wpparallelc
#pragma linkage(wpparallelc, system)
#define M_WPDevParallelClassData wpparalleld
#define M_WPDevParallelCClassData wpparallelx
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define M_WPDevParallel_classObj M_WPDevParallelClassData.classObject
#define _M_WPDevParallel M_WPDevParallel_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK M_WPDevParallelNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(M_WPDevParallelNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct M_WPDevParallelClassDataStructure {
	SOMClass *classObject;
} SOMDLINK M_WPDevParallelClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct M_WPDevParallelCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK M_WPDevParallelCClassData;

/*
 * New and Renew macros for M_WPDevParallel
 */
#define M_WPDevParallelNew() \
   ( _M_WPDevParallel ? \
	_somNew(_M_WPDevParallel) \
	: ( M_WPDevParallelNewClass(\
		M_WPDevParallel_MajorVersion, \
		M_WPDevParallel_MinorVersion),\
	   _somNew(_M_WPDevParallel)))
#define M_WPDevParallelRenew(buf) \
   ( _M_WPDevParallel ? \
	_somRenew(_M_WPDevParallel, buf) \
	: ( M_WPDevParallelNewClass(\
		M_WPDevParallel_MajorVersion, \
		M_WPDevParallel_MinorVersion),\
	   _somRenew(_M_WPDevParallel, buf)))

/*
 * Override method: wpclsInitData
 */
#define M_WPDevParallel_wpclsInitData(somSelf) \
	M_WPObject_wpclsInitData(somSelf)

/*
 * Override method: wpclsQueryIconData
 */
#define M_WPDevParallel_wpclsQueryIconData(somSelf,pIconInfo) \
	M_WPObject_wpclsQueryIconData(somSelf,pIconInfo)

/*
 * Override method: wpclsQueryTitle
 */
#define M_WPDevParallel_wpclsQueryTitle(somSelf) \
	M_WPObject_wpclsQueryTitle(somSelf)

/*
 * Override method: wpclsUnInitData
 */
#define M_WPDevParallel_wpclsUnInitData(somSelf) \
	M_WPObject_wpclsUnInitData(somSelf)
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define M_WPDevParallel_wpclsQueryDefaultHelp M_WPObject_wpclsQueryDefaultHelp
#define M_WPDevParallel_wpclsQueryDefaultView M_WPObject_wpclsQueryDefaultView
#define M_WPDevParallel_wpclsQueryDetailsInfo M_WPObject_wpclsQueryDetailsInfo
#define M_WPDevParallel_wpclsQueryStyle M_WPObject_wpclsQueryStyle
#define M_WPDevParallel_wpclsObjectFromHandle M_WPObject_wpclsObjectFromHandle
#define M_WPDevParallel_wpclsCreateDefaultTemplates M_WPObject_wpclsCreateDefaultTemplates
#define M_WPDevParallel_wpclsMakeAwake M_WPObject_wpclsMakeAwake
#define M_WPDevParallel_wpclsNew M_WPObject_wpclsNew
#define M_WPDevParallel_wpclsQueryDetails M_WPObject_wpclsQueryDetails
#define M_WPDevParallel_wpclsQueryExtendedCriteria M_WPObject_wpclsQueryExtendedCriteria
#define M_WPDevParallel_wpclsQueryFolder M_WPObject_wpclsQueryFolder
#define M_WPDevParallel_wpclsQueryIcon M_WPObject_wpclsQueryIcon
#define M_WPDevParallel_wpclsQuerySearchInfo M_WPObject_wpclsQuerySearchInfo
#define M_WPDevParallel_wpclsFindObjectFirst M_WPObject_wpclsFindObjectFirst
#define M_WPDevParallel_wpclsFindObjectNext M_WPObject_wpclsFindObjectNext
#define M_WPDevParallel_wpclsFindObjectEnd M_WPObject_wpclsFindObjectEnd
#define M_WPDevParallel_wpclsSetError M_WPObject_wpclsSetError
#define M_WPDevParallel_wpclsQueryError M_WPObject_wpclsQueryError
#define M_WPDevParallel_wpclsQuerySettingsPageSize M_WPObject_wpclsQuerySettingsPageSize
#define M_WPDevParallel_wpclsQueryObject M_WPObject_wpclsQueryObject
#define M_WPDevParallel_wpclsQueryButtonAppearance M_WPObject_wpclsQueryButtonAppearance
#define M_WPDevParallel_wpclsDecUsage M_WPObject_wpclsDecUsage
#define M_WPDevParallel_wpclsIncUsage M_WPObject_wpclsIncUsage
#define M_WPDevParallel_wpclsInsertMultipleObjects M_WPObject_wpclsInsertMultipleObjects
#define M_WPDevParallel_wpclsFindOneObject M_WPObject_wpclsFindOneObject
#define M_WPDevParallel_wpclsSetSettingsPageSize M_WPObject_wpclsSetSettingsPageSize
#define M_WPDevParallel_wpclsSetIconData M_WPObject_wpclsSetIconData
#define M_WPDevParallel_wpclsSetIcon M_WPObject_wpclsSetIcon
#define M_WPDevParallel_wpclsRemoveObjects M_WPObject_wpclsRemoveObjects
#define M_WPDevParallel_somUninit SOMObject_somUninit
#define M_WPDevParallel_somClassReady SOMClass_somClassReady
#define M_WPDevParallel_somNew SOMClass_somNew
#define M_WPDevParallel_somRenew SOMClass_somRenew
#define M_WPDevParallel__get_somDataAlignment SOMClass__get_somDataAlignment
#define M_WPDevParallel__get_somInstanceDataOffsets SOMClass__get_somInstanceDataOffsets
#define M_WPDevParallel__get_somDirectInitClasses SOMClass__get_somDirectInitClasses
#define M_WPDevParallel__set_somDirectInitClasses SOMClass__set_somDirectInitClasses
#define M_WPDevParallel_somNewNoInit SOMClass_somNewNoInit
#define M_WPDevParallel_somRenewNoInit SOMClass_somRenewNoInit
#define M_WPDevParallel_somRenewNoZero SOMClass_somRenewNoZero
#define M_WPDevParallel_somRenewNoInitNoZero SOMClass_somRenewNoInitNoZero
#define M_WPDevParallel_somAllocate SOMClass_somAllocate
#define M_WPDevParallel_somDeallocate SOMClass_somDeallocate
#define M_WPDevParallel__get_somClassAllocate SOMClass__get_somClassAllocate
#define M_WPDevParallel__get_somClassDeallocate SOMClass__get_somClassDeallocate
#define M_WPDevParallel_somGetInstanceInitMask SOMClass_somGetInstanceInitMask
#define M_WPDevParallel_somGetInstanceDestructionMask SOMClass_somGetInstanceDestructionMask
#define M_WPDevParallel_somGetInstanceAssignmentMask SOMClass_somGetInstanceAssignmentMask
#define M_WPDevParallel_somInitClass SOMClass_somInitClass
#define M_WPDevParallel_somInitMIClass SOMClass_somInitMIClass
#define M_WPDevParallel_somAddStaticMethod SOMClass_somAddStaticMethod
#define M_WPDevParallel_somAddDynamicMethod SOMClass_somAddDynamicMethod
#define M_WPDevParallel_somOverrideSMethod SOMClass_somOverrideSMethod
#define M_WPDevParallel_somGetApplyStub SOMClass_somGetApplyStub
#define M_WPDevParallel_somGetClassData SOMClass_somGetClassData
#define M_WPDevParallel_somSetClassData SOMClass_somSetClassData
#define M_WPDevParallel_somGetClassMtab SOMClass_somGetClassMtab
#define M_WPDevParallel_somGetInstanceOffset SOMClass_somGetInstanceOffset
#define M_WPDevParallel_somGetInstancePartSize SOMClass_somGetInstancePartSize
#define M_WPDevParallel_somGetInstanceSize SOMClass_somGetInstanceSize
#define M_WPDevParallel_somGetInstanceToken SOMClass_somGetInstanceToken
#define M_WPDevParallel_somGetMemberToken SOMClass_somGetMemberToken
#define M_WPDevParallel_somGetMethodData SOMClass_somGetMethodData
#define M_WPDevParallel_somGetRdStub SOMClass_somGetRdStub
#define M_WPDevParallel_somGetMethodDescriptor SOMClass_somGetMethodDescriptor
#define M_WPDevParallel_somGetMethodIndex SOMClass_somGetMethodIndex
#define M_WPDevParallel_somGetMethodToken SOMClass_somGetMethodToken
#define M_WPDevParallel_somGetName SOMClass_somGetName
#define M_WPDevParallel_somGetNthMethodData SOMClass_somGetNthMethodData
#define M_WPDevParallel_somGetNthMethodInfo SOMClass_somGetNthMethodInfo
#define M_WPDevParallel_somGetNumMethods SOMClass_somGetNumMethods
#define M_WPDevParallel_somGetNumStaticMethods SOMClass_somGetNumStaticMethods
#define M_WPDevParallel_somGetParent SOMClass_somGetParent
#define M_WPDevParallel_somGetParents SOMClass_somGetParents
#define M_WPDevParallel_somGetPClsMtab SOMClass_somGetPClsMtab
#define M_WPDevParallel_somGetPClsMtabs SOMClass_somGetPClsMtabs
#define M_WPDevParallel_somGetVersionNumbers SOMClass_somGetVersionNumbers
#define M_WPDevParallel_somSetMethodDescriptor SOMClass_somSetMethodDescriptor
#define M_WPDevParallel_somFindMethod SOMClass_somFindMethod
#define M_WPDevParallel_somFindMethodOk SOMClass_somFindMethodOk
#define M_WPDevParallel_somFindSMethod SOMClass_somFindSMethod
#define M_WPDevParallel_somFindSMethodOk SOMClass_somFindSMethodOk
#define M_WPDevParallel_somLookupMethod SOMClass_somLookupMethod
#define M_WPDevParallel_somCheckVersion SOMClass_somCheckVersion
#define M_WPDevParallel_somDescendedFrom SOMClass_somDescendedFrom
#define M_WPDevParallel_somSupportsMethod SOMClass_somSupportsMethod
#define M_WPDevParallel_somDefinedMethod SOMClass_somDefinedMethod
#define M_WPDevParallel_somOverrideMtab SOMClass_somOverrideMtab
#define M_WPDevParallel_somDefaultInit SOMObject_somDefaultInit
#define M_WPDevParallel_somDestruct SOMObject_somDestruct
#define M_WPDevParallel_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define M_WPDevParallel_somDefaultAssign SOMObject_somDefaultAssign
#define M_WPDevParallel_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define M_WPDevParallel_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define M_WPDevParallel_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define M_WPDevParallel_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define M_WPDevParallel_somDefaultVAssign SOMObject_somDefaultVAssign
#define M_WPDevParallel_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define M_WPDevParallel_somInit SOMObject_somInit
#define M_WPDevParallel_somFree SOMObject_somFree
#define M_WPDevParallel_somGetClass SOMObject_somGetClass
#define M_WPDevParallel_somGetClassName SOMObject_somGetClassName
#define M_WPDevParallel_somGetSize SOMObject_somGetSize
#define M_WPDevParallel_somIsA SOMObject_somIsA
#define M_WPDevParallel_somIsInstanceOf SOMObject_somIsInstanceOf
#define M_WPDevParallel_somRespondsTo SOMObject_somRespondsTo
#define M_WPDevParallel_somDispatch SOMObject_somDispatch
#define M_WPDevParallel_somClassDispatch SOMObject_somClassDispatch
#define M_WPDevParallel_somCastObj SOMObject_somCastObj
#define M_WPDevParallel_somResetObj SOMObject_somResetObj
#define M_WPDevParallel_somDispatchV SOMObject_somDispatchV
#define M_WPDevParallel_somDispatchL SOMObject_somDispatchL
#define M_WPDevParallel_somDispatchA SOMObject_somDispatchA
#define M_WPDevParallel_somDispatchD SOMObject_somDispatchD
#define M_WPDevParallel_somPrintSelf SOMObject_somPrintSelf
#define M_WPDevParallel_somDumpSelf SOMObject_somDumpSelf
#define M_WPDevParallel_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_M_WPDevParallel_h */