#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_tr_com_kalamar_android_kalamarrestaurant_klmr_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
