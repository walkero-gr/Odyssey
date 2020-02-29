#ifndef CGXVIDEO_INTERFACE_DEF_H
#define CGXVIDEO_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 53.6.
** Do not edit
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef INTUITION_INTUITION_H
#include <intuition/intuition.h>
#endif
#ifndef INTUITION_SCREENS_H
#include <intuition/screens.h>
#endif
#ifndef CYBERGRAPHX_CGXVIDEO_H
#include <cybergraphx/cgxvideo.h>
#endif
#ifndef UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif

#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

struct CgxvideoIFace
{
	struct InterfaceData Data;

	ULONG APICALL (*Obtain)(struct CgxvideoIFace *Self);
	ULONG APICALL (*Release)(struct CgxvideoIFace *Self);
	void APICALL (*Expunge)(struct CgxvideoIFace *Self);
	struct Interface * APICALL (*Clone)(struct CgxvideoIFace *Self);
	struct VLayerHandle * APICALL (*CreateVLayerHandleTags)(struct CgxvideoIFace *Self, struct Screen * screen, ...);
	ULONG APICALL (*DeleteVLayerHandle)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle);
	ULONG APICALL (*AttachVLayerTagList)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, struct Window * window, struct TagItem * Tags);
	ULONG APICALL (*AttachVLayerTags)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, struct Window * window, ...);
	ULONG APICALL (*DetachVLayer)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle);
	ULONG APICALL (*GetVLayerAttr)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, ULONG AttrID);
	ULONG APICALL (*LockVLayer)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle);
	ULONG APICALL (*UnlockVLayer)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle);
	void APICALL (*SetVLayerAttrTagList)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, struct TagItem * Tags);
	void APICALL (*SetVLayerAttrTags)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, ...);
	void APICALL (*Reserved78)(struct CgxvideoIFace *Self);
	void APICALL (*Reserved84)(struct CgxvideoIFace *Self);
	void APICALL (*Reserved90)(struct CgxvideoIFace *Self);
	void APICALL (*SwapVLayerBuffer)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle);
	ULONG APICALL (*WriteSPLine)(struct CgxvideoIFace *Self, struct VLayerHandle * VLayerHandle, unsigned char * buffer, int x, int y, int w);
	ULONG APICALL (*QueryVLayerAttr)(struct CgxvideoIFace *Self, struct Screen * screen, ULONG AttrID);
};

#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

#endif /* CGXVIDEO_INTERFACE_DEF_H */
