#ifndef __mediatyp_h__
#define __mediatyp_h__


typedef enum {
	MEDIATYPE_INVALID = 0,
	MEDIATYPE_VIDEO_H264	=	1,
	MEDIATYPE_AUDIO_G711A	=	2,
	MEDIATYPE_AUDIO_ALAW	=	MEDIATYPE_AUDIO_G711A,
	
	//----------------------------------
	MEDIATYPE_VIDEO_MPEG	=	11,
	MEDIATYPE_VIDEO_MJPEG	=	12,
	MEDIATYPE_VIDEO_MAX,
	
	MEDIATYPE_AUDIO_ULAW	=	51,
	MEDIATYPE_AUDIO_G711U	=	MEDIATYPE_AUDIO_ULAW,
	MEDIATYPE_AUDIO_PCM		=	52,
	MEDIATYPE_AUDIO_ADPCM	=	53,
	MEDIATYPE_AUDIO_ADPCM_IMA	=	MEDIATYPE_AUDIO_ADPCM,
	MEDIATYPE_AUDIO_ADPCM_DVI4	=	54,
	MEDIATYPE_AUDIO_G726_16	=	55,
	MEDIATYPE_AUDIO_G726_24	=	56,
	MEDIATYPE_AUDIO_G726_32	=	57,
	MEDIATYPE_AUDIO_G726_40	=	58,
	MEDIATYPE_AUDIO_AAC     = 59,
	MEDIATYPE_AUDIO_MAX

} MEDIATYPE;

#define MEDIATYPE_IS_VIDEO(mt) (mt && (mt<MEDIATYPE_VIDEO_MAX && mt>MEDIATYPE_AUDIO_G711A || mt==MEDIATYPE_VIDEO_H264))
#define MEDIATYPE_IS_AUDIO(mt) (mt && (mt==MEDIATYPE_AUDIO_G711A || mt>=MEDIATYPE_AUDIO_ULAW && mt<MEDIATYPE_AUDIO_MAX))
#endif
