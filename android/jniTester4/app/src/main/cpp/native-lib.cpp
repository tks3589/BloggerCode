#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_aaron_jnitester4_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_aaron_jnitester4_MainActivity_getAddNum(JNIEnv *env, jobject instance, jint a, jint b) {

    return a+b;

}