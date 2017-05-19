#include <jni.h>
#include <string>

extern "C"
jstring
Java_demo_yasea_ossrs_net_filtercamera_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
