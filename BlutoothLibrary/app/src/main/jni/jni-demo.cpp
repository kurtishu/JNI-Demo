//
// Created by Kurtis Hu on 2/25/16.
//

#include "jni-demo.h"
#include "com_dreamfactory_blutooth_library_JNIUtil.h"

/*
 * Class:     com_dreamfactory_blutooth_library_JNIUtil
 * Method:    getStringFromC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_dreamfactory_blutooth_library_JNIUtil_getStringFromC
        (JNIEnv *env, jclass obj) {
    // 测试方法
    return env->NewStringUTF("这里是来自c的string");
}

/*
 * Class:     com_dreamfactory_blutooth_library_JNIUtil
 * Method:    convertSettingsBeforePassedToBluetooth
 * Signature: ([I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_dreamfactory_blutooth_library_JNIUtil_convertSettingsBeforePassedToBluetooth
        (JNIEnv * env, jclass obj, jintArray array) {

    // 实现方法体 convertSettingsBeforePassedToBluetooth

    // 具体转化过程待实现

    //举例：声明一个长度为2的byte数组，jbyteArray 是一个数据类型，同时也是一个对象，需要把它New出来。
    jbyteArray result = env->NewByteArray(2);

    // 获取result的引用
    jbyte *point = env->GetByteArrayElements(result, 0);

    point[0] = 1;
    point[1] = 2;

    //返回该对象数组
    return result;

}

/*
 * Class:     com_dreamfactory_blutooth_library_JNIUtil
 * Method:    convertOtherBeforePassedToBluetooth
 * Signature: ([I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_dreamfactory_blutooth_library_JNIUtil_convertOtherBeforePassedToBluetooth
        (JNIEnv *env, jclass obj, jintArray array) {

    // 实现方法体 convertOtherBeforePassedToBluetooth

    // 具体转化过程待实现

    //举例：声明一个长度为2的byte数组，jbyteArray 是一个数据类型，同时也是一个对象，需要把它New出来。
    jbyteArray result = env->NewByteArray(2);

    // 获取result的引用
    jbyte *point = env->GetByteArrayElements(result, 0);

    point[0] = 3;
    point[1] = 4;

    //返回该对象数组
    return result;
}

/*
 * Class:     com_dreamfactory_blutooth_library_JNIUtil
 * Method:    convertSettingsFromBluetooth
 * Signature: ([B)[I
 */
JNIEXPORT jintArray JNICALL Java_com_dreamfactory_blutooth_library_JNIUtil_convertSettingsFromBluetooth
        (JNIEnv *env, jclass obj, jbyteArray array) {
    // 实现方法体 convertSettingsFromBluetooth

    //举例：获取输入参数 arry
    jbyte* byteArg = env->GetByteArrayElements(array, 0);

    //举例：声明一个长度为2的int数组，jbyteArray 是一个数据类型，同时也是一个对象，需要把它New出来。
    jintArray result = env->NewIntArray(2);

    // 获取该数组的一个引用
    jint *point = env->GetIntArrayElements(result, 0);

    // 修改该数组
    point[0] = 1;
    point[1] = 2;

    return  result;
}

/*
 * Class:     com_dreamfactory_blutooth_library_JNIUtil
 * Method:    convertOtherFromBluetooth
 * Signature: ([B)[I
 */
JNIEXPORT jintArray JNICALL Java_com_dreamfactory_blutooth_library_JNIUtil_convertOtherFromBluetooth
        (JNIEnv *env, jclass obj, jbyteArray array) {
    // 实现方法体 convertOtherFromBluetooth

    //举例：获取输入参数 arry
    jbyte* byteArg = env->GetByteArrayElements(array, 0);

    // 具体转化过程待实现

    //举例：声明一个长度为2的int数组，jbyteArray 是一个数据类型，同时也是一个对象，需要把它New出来。
    jintArray result = env->NewIntArray(2);

    // 获取该数组的一个引用
    jint *point = env->GetIntArrayElements(result, 0);

    // 修改该数组
    point[0] = 3;
    point[1] = 4;

    return  result;
}