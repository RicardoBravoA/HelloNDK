#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_rba_hellondk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello World from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
jstring
Java_com_rba_hellondk_ServiceNDK_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello World from C++";
    return env->NewStringUTF(hello.c_str());
}

