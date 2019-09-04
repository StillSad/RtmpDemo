#include <jni.h>
#include <string>

#include "rtmp.h"
#include "x264.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_ice_rtmpdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    char version[100];
    sprintf(version,"librtmp version:%d",RTMP_LibVersion());
    x264_picture_t *picture = new x264_picture_t;
    return env->NewStringUTF(version);
}
