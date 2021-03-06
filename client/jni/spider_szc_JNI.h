/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni_adpt.h"
/* Header for class spider_szc_JNI */

#ifndef _Included_spider_szc_JNI
#define _Included_spider_szc_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     spider_szc_JNI
 * Method:    init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_init(JNIEnv *env, jclass, jstring server1, jstring server2);

/*
 * Class:     spider_szc_JNI
 * Method:    uninit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_uninit
  (JNIEnv *, jclass);

/*
 * Class:     spider_szc_JNI
 * Method:    enumDevices
 * Signature: ()[Lspider/szc/JNI/Device;
 */
JNIEXPORT jobjectArray JNICALL Java_spider_szc_JNI_enumDevices
  (JNIEnv *, jclass);

/*
 * Class:     spider_szc_JNI
 * Method:    setLanDeviceNet
 * Signature: (Ljava/lang/String;Lspider/szc/JNI/LanDeviceNet;)Z
 */
JNIEXPORT jboolean JNICALL Java_spider_szc_JNI_setLanDeviceNet
  (JNIEnv *, jclass, jstring, jobject);


JNIEXPORT jint JNICALL Java_spider_szc_JNI_connType
  (JNIEnv *, jclass,jstring, jstring , jstring , jstring,jint );

/*
 * Class:     spider_szc_JNI
 * Method:    createConn
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_createConn
  (JNIEnv *, jclass, jstring,jstring, jstring, jstring);

JNIEXPORT jint JNICALL Java_spider_szc_JNI_NewcreateConn
  (JNIEnv *, jclass,jstring, jstring, jstring, jstring, jint conntype);

/*
 * Class:     spider_szc_JNI
 * Method:    destroyConn
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_destroyConn
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    getConnInfo
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_getConnInfo
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    startLiveVideo
 * Signature: (IILspider/szc/ColorArray;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_startLiveVideo
  (JNIEnv *, jclass, jint, jint, jint, jint, jobject, jint flags);


/*
 * Class:     spider_szc_JNI
 * Method:    stopLiveVideo
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_stopLiveVideo
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    startLiveAudio
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_startLiveAudio
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    stopLiveAudio
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_stopLiveAudio
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    setEventCallback
 * Signature: (Lspider/szc/EventCallback;)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_setEventCallback
  (JNIEnv *, jclass, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    ptzControl
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_ptzControl
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     tastech_camview_JNI
 * Method:    startRecord
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_startRecord
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     tastech_camview_JNI
 * Method:    stopRecord
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_stopRecord
  (JNIEnv *, jclass, jint);




/*
 * Class:     spider_szc_JNI
 * Method:    listDate
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_spider_szc_JNI_listDate
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    listEvent
 * Signature: (ILjava/lang/String;)[Lspider/szc/JNI/Event;
 */
JNIEXPORT jobjectArray JNICALL Java_spider_szc_JNI_listEvent
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     spider_szc_JNI
 * Method:    playEvent
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_playEvent
  (JNIEnv *, jclass, jint _pSess, jlong);

/*
 * Class:     spider_szc_JNI
 * Method:    startRecord
 * Signature: (ILjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_startRecord
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     spider_szc_JNI
 * Method:    stopRecord
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_stopRecord
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    startPlayFile
 * Signature: (ILjava/lang/String;Lspider/szc/ColorArray;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_startPlayFile
  (JNIEnv *, jclass, jint, jstring, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    stopPlayFile
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_stopPlayFile
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    pausePlayFile
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_pausePlayFile
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    continuePlayFile
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_continuePlayFile
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    setPlaybackRate
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_setPlaybackRate(JNIEnv *, jclass, jint, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    seekPlayback
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_spider_szc_JNI_seekPlayback(JNIEnv *, jclass, jint, jint);

JNIEXPORT jint Java_spider_szc_JNI_getRotation(JNIEnv *, jclass, jint _pSess, jint vchn);
JNIEXPORT jint Java_spider_szc_JNI_setRotation(JNIEnv *, jclass, jint _pSess, int vchn, jint rotation);
JNIEXPORT jint Java_spider_szc_JNI_getPowerFreq(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jint Java_spider_szc_JNI_setPowerFreq(JNIEnv *, jclass, jint _pSess, jint freq);

JNIEXPORT jobjectArray Java_spider_szc_JNI_listWifiAp(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jobject Java_spider_szc_JNI_getWifi(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jint Java_spider_szc_JNI_setWifi(JNIEnv *, jclass, jint _pSess, jobject cfg);
JNIEXPORT jobject Java_spider_szc_JNI_getVideoColor(JNIEnv *, jclass, jint _pSess, jint vchn);
JNIEXPORT jint Java_spider_szc_JNI_setVideoColor(JNIEnv *, jclass, jint _pSess, jint vchn, jobject color);
JNIEXPORT jobject Java_spider_szc_JNI_getVideoEncParam(JNIEnv *, jclass, jint _pSess, jint vchn, jint vstream);
JNIEXPORT jint Java_spider_szc_JNI_setVideoEncParam(JNIEnv *, jclass, jint _pSess, jint vchn, jint vstream, jobject param);
JNIEXPORT jint Java_spider_szc_JNI_changePassword(JNIEnv *env, jclass, jint _pSess, jstring newPassword);
JNIEXPORT jint Java_spider_szc_JNI_PlayBackRecord(JNIEnv *, jclass,jint _pSess, jobject para);

JNIEXPORT jint Java_spider_szc_JNI_initTalk(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jint Java_spider_szc_JNI_sendTalk(JNIEnv *, jclass, jint _pSess, jbyteArray in_buf, jint in_len);
JNIEXPORT jint Java_spider_szc_JNI_stopTalk(JNIEnv *, jclass, jint _pSess);

JNIEXPORT jobject Java_spider_szc_JNI_GetBaseInfo(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jobjectArray Java_spider_szc_JNI_GetVideoParamNew(JNIEnv *, jclass, jint _pSess);
JNIEXPORT jint Java_spider_szc_JNI_SetVideoParamNew(JNIEnv *, jclass, jint _pSess, jobject param);
JNIEXPORT jint Java_spider_szc_JNI_DefaultConn(JNIEnv *, jclass, jint _pSess,jint param);



/*
 * Class:     spider_szc_JNI
 * Method:    getNetInfo
 * Signature: (ILspider/szc/JNI/NetInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_getNetInfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    setNetInfo
 * Signature: (ILspider/szc/JNI/NetInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_setNetInfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    getTimeInfo
 * Signature: (ILspider/szc/JNI/TimeInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_getTimeInfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    setTimeInfo
 * Signature: (ILspider/szc/JNI/TimeInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_setTimeInfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    setInitInfo
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_setInitInfo
  (JNIEnv *, jclass, jint, jint);


/*
 * Class:     spider_szc_JNI
 * Method:    setApWifi
 * Signature: (ILspider/szc/JNI/WifiInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_setApWifi
  (JNIEnv *, jclass, jint, jobject);



/*
 * Class:     spider_szc_JNI
 * Method:    getSnapshot
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_getSnapshot
  (JNIEnv *, jclass, jint, jstring);


/*
 * Class:     spider_szc_JNI
 * Method:    getCloudAlarmInfo
 * Signature: (ILspider/szc/JNI/CloudAlarmInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_getCloudAlarmInfo
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    setCloudAlarmInfo
 * Signature: (ILspider/szc/JNI/CloudAlarmInfo;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_setCloudAlarmInfo
  (JNIEnv *, jclass, jint, jobject);


/*
 * Class:     spider_szc_JNI
 * Method:    SDReocrdGetReocrdList
 * Signature: (ILspider/szc/JNI/SearchRecordRequest;Lspider/szc/JNI/SearchRecordResponse;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardReocrdGetReocrdList
  (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDReocrdPlaybackReocrd
 * Signature: (ILspider/szc/JNI/SDCardRecord;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardReocrdPlaybackReocrd
  (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordPlayBackSelectTime
 * Signature: (ILspider/szc/JNI/SDCardRecord;)I
 */

JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordPlayBackSelectTime
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordSetPlayRate
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordSetPlayRate
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordPauseOrRePlayVideo
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordPauseOrRePlayVideo
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordTerminatePlayBack
 * Signature: (ILspider/szc/JNI/SDCardRecord;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordTerminatePlayBack
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordGetRecordPlan
 * Signature: (ILjava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordGetRecordPlan
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordSetRecordPlan
 * Signature: (ILjava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordSetRecordPlan
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     spider_szc_JNI
 * Method:    SDRecordFormatSDCard
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_spider_szc_JNI_sdcardRecordFormatSDCard
  (JNIEnv *, jclass, jint);

/*
 * Class:     spider_szc_JNI
 * Method:    calcCRC16
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_spider_szc_JNI_calcCRC16
  (JNIEnv *, jclass, jbyteArray, jint);


#ifdef __cplusplus
}
#endif
#endif
