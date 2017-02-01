package com.rba.hellondk;

/**
 * Created by Ricardo Bravo on 1/02/17.
 */

public class ServiceNDK {

    static {
        System.loadLibrary("native-lib");
    }

    public static String getUrl(){
        return stringFromJNI();
    }

    public static String getUrlValue(){
        String data = stringFromJNI();
        return data;
    }

    public static String getUrlValueData(){
        return getUrlValue();
    }

    public static native String stringFromJNI();

}
