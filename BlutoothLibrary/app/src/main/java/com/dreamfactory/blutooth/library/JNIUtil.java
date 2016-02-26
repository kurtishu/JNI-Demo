package com.dreamfactory.blutooth.library;

/**
 * Author：kurtishu on 2/25/16
 * Eevery one should have a dream, what if one day it comes true!
 */
public class JNIUtil {

    //测试方法
    public static native String getStringFromC();

    public static native byte[] convertSettingsBeforePassedToBluetooth(int[] arr);
    public static native byte[] convertOtherBeforePassedToBluetooth(int[] arr);

    public static native int[] convertSettingsFromBluetooth(byte[] bytes);
    public static native int[] convertOtherFromBluetooth(byte[] bytes);

}
