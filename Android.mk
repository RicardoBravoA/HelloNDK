LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := sample
LOCAL_SRC_FILES := src/sample.cpp

include $(BUILD_SHARED_LIBRARY)
