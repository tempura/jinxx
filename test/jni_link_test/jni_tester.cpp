/**
    Provide the callMe function for the JNITester class.
*/

#include <jni.h>
#include <iostream>

extern "C" {

JNIEXPORT void
JNICALL Java_JNITester_callMe (JNIEnv* env, jobject)
{
    std::cout << "Calling successfully into native." << std::endl;
}

}
