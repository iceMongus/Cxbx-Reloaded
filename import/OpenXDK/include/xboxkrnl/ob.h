// ******************************************************************
// *
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : ob.h
// *
// * note : XBox Kernel *Object Manager* Declarations
// *
// ******************************************************************
#ifndef XBOXKRNL_OB_H
#define XBOXKRNL_OB_H

// ******************************************************************
// * 0x00EF - ObCreateObject()
// ******************************************************************
XBSYSAPI EXPORTNUM(239) NTSTATUS NTAPI ObCreateObject
(
	IN POBJECT_TYPE ObjectType,
	IN POBJECT_ATTRIBUTES ObjectAttributes OPTIONAL,
	IN ULONG ObjectBodySize,
	OUT PVOID *Object
);

// ******************************************************************
// * 0x00F0 - ObDirectoryObjectType
// ******************************************************************
XBSYSAPI EXPORTNUM(240) OBJECT_TYPE ObDirectoryObjectType;

// ******************************************************************
// * 0x00F1 - ObInsertObject()
// ******************************************************************
XBSYSAPI EXPORTNUM(241) NTSTATUS NTAPI ObInsertObject
(
	IN PVOID Object,
	IN POBJECT_ATTRIBUTES ObjectAttributes OPTIONAL,
	IN ULONG ObjectPointerBias,
	OUT PHANDLE Handle
);

// ******************************************************************
// * 0x00F2 - ObMakeTemporaryObject()
// ******************************************************************
XBSYSAPI EXPORTNUM(242) VOID NTAPI ObMakeTemporaryObject
(
	IN PVOID Object
);

XBSYSAPI EXPORTNUM(243) NTSTATUS NTAPI ObOpenObjectByName
(
	IN POBJECT_ATTRIBUTES ObjectAttributes,
	IN POBJECT_TYPE ObjectType,
	IN OUT PVOID ParseContext OPTIONAL,
	OUT PHANDLE Handle
);

XBSYSAPI VOID *ObOpenObjectByPointer;
XBSYSAPI EXPORTNUM(245) DWORD ObpObjectHandleTable[1];

XBSYSAPI EXPORTNUM(246) NTSTATUS NTAPI ObReferenceObjectByHandle
(
    IN HANDLE Handle,
    IN POBJECT_TYPE ObjectType OPTIONAL,
    OUT PVOID *ReturnedObject
);


XBSYSAPI VOID *ObReferenceObjectByName;
XBSYSAPI VOID *ObReferenceObjectByPointer;
XBSYSAPI EXPORTNUM(249) OBJECT_TYPE ObSymbolicLinkObjectType;

XBSYSAPI EXPORTNUM(250) VOID FASTCALL ObfDereferenceObject
(
	IN PVOID Object
);

XBSYSAPI VOID *ObfReferenceObject;

#endif


