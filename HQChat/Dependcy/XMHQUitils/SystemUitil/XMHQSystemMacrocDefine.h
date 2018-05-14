//
//  XMHQSystemMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个文件封装了大部分系统相关的功能宏定义
 */

#import "XMHQSystemUitil.h"

/**
 *  去除performSelector警告
 *
 *  @param code 需要屏蔽警告的代码
 *
 *  @return
 */
#define XMHQSystemRemovePerformSelectorLeakWarning(code)                    \
_Pragma("clang diagnostic push")                                        \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")     \
code;                                                                   \
_Pragma("clang diagnostic pop")                                         \

/**
 *  当前App的版本号
 */
#define XMHQSystemAppVersion [XMHQSystemUitil appVersion]

/**
 *  当前App的版本号 float型
 */
#define XMHQSystemAppFloatVersion [XMHQSystemUitil appFloatVersion]

/**
 *  当前App的版本号 字符串型
 */
#define XMHQSystemAppStringVersion [XMHQSystemUitil appStringVersion]

/**
 *  当前App的bundleIdentifier
 */
#define XMHQSystemAppBundleIdentifier [XMHQSystemUitil appBundleIdentifier]

/**
 *  屏幕绝对画布
 */
#define XMHQSystemScreenBounds [XMHQSystemUitil screenBounds]

/**
 *  获取系统版本号
 */
#define XMHQSystemVersion [XMHQSystemUitil currentSystemVersion]

/**
 *  当前屏幕缩放倍数
 */
#define XMHQScreenScale [XMHQSystemUitil currentScreenScale]

/**
 *  系统是否超过5.0
 */
#define XMHQSystemIsOver5 [XMHQSystemUitil isSystemVersionOver:5.0]

/**
 *  系统是否超过6.0
 */
#define XMHQSystemIsOver6 [XMHQSystemUitil isSystemVersionOver:6.0]

/**
 *  系统是否超过7.0
 */
#define XMHQSystemIsOver7 [XMHQSystemUitil isSystemVersionOver:7.0]

/**
 *  系统是否超过8.0
 */
#define XMHQSystemIsOver8 [XMHQSystemUitil isSystemVersionOver:8.0]

/**
 *  获取屏幕大小
 */
#define XMHQSystemScreenSize [XMHQSystemUitil deviceScreenSize]

/**
 *  获取屏幕宽度
 */
#define XMHQSystemScreenWidth [XMHQSystemUitil deviceScreenSize].width

/**
 *  获取屏幕高度
 */
#define XMHQSystemScreenHeight [XMHQSystemUitil deviceScreenSize].height

/**
 *  是否iPhone4
 */
#define XMHQSystemiPhone4 [XMHQSystemUitil iPhone4Device]

/**
 *  是否iPhone5
 */
#define XMHQSystemiPhone5 [XMHQSystemUitil iPhone5Device]

/**
 *  是否iPhone6
 */
#define XMHQSystemiPhone6 [XMHQSystemUitil iPhone6Device]

/**
 *  是否iPhone6 plus
 */
#define XMHQSystemiPhone6Plus [XMHQSystemUitil iPhone6PlusDevice]

/**
 *  是否iPad
 */
#define XMHQSystemiPad [XMHQSystemUitil iPadDevice]

/**
 *  系统UINavigationBar高度
 */
#define XMHQSystemNavigationBarHeight [XMHQSystemUitil naivationBarHeight]

/**
 *  Y轴增量
 */
#define XMHQSystemOriginYDelta 20.f

/**
 *  AppDelegate
 */
#define XMHQApplicationDelegate [UIApplication shareApplication].delegate

/**
 *  创建对象弱引用
 */
#define XMHQWeakObject(anObject)  __weak __typeof(anObject)

/**
 *  创建对象强引用
 */
#define XMHQStrongObject(anObject) __strong __typeof(anObject)

/**
 *  创建self弱引用
 */
#define XMHQWeakSelf XMHQWeakObject(self)

/**
 *  创建self强引用
 */
#define XMHQStrongSelf XMHQStrongObject(XMHQWeakSelf)

/**
 *  系统通知中心
 */
#define XMHQNotificationCenter [XMHQSystemUitil defaultCenter]

/**
 *  系统通知中心发noti名字的通知
 */
#define XMHQNotificationPost(noti) [XMHQSystemUitil postNoti:noti]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object
 */
#define XMHQNotificationPostObj(noti,object) [XMHQSystemUitil postNoti:noti withObject:object]

/**
 *  系统通知中心发noti名字的通知，携带参数对象object ,携带用户自定义信息userInfo
 */
#define XMHQNotificationPostObjUserInfo(noti,object,userInfo) [XMHQSystemUitil postNoti:noti withObject:object withUserInfo:userInfo]

/**
 *  获取mainBundle
 */
#define XMHQMainBundle [NSBundle mainBundle]

/**
 *  获取mainBundle内名字为fileName的文件的路径
 */
#define XMHQMainBundlePath(fileName) [XMHQSystemUitil mainBundlePath:fileName]

/**
 *  获取路径为bundlePath的指定bundle中文件名为fileName的文件路径
 */
#define XMHQBundlePath(bundlePath,fileName) [XMHQSystemUitil bundle:bundlePath file:fileName]


/**
 *  运行时给一个对象添加一个成员，添加的associateKey必须是一个静态常量字符串 static NSString * const associateKey = @"";
 */
#define XMHQAssociateOriginWithObject(originObj,associateObj,associateKey) [XMHQSystemUitil originObject:originObj associateObject:associateObj byKey:associateKey]

/**
 *  通过key获取运行时加入的成员
 */
#define XMHQGetAssociateObject(originObj,associateKey) [XMHQSystemUitil associateObjectFromOrigin:originObj byKey:associateKey]

/**
 *  移除辅助成员
 */
#define XMHQAssociateRemove(originObj) [XMHQSystemUitil associateRemoveFromOrigin:originObj]

/**
 *  照相机是否可用
 */
#define XMHQCameraIsAvailable [XMHQSystemUitil cameraAvailable]

/**
 *  前置摄像头是否可用
 */
#define XMHQFrontCameraAvailable [XMHQSystemUitil frontCameraAvailable]

/**
 *  照相机闪光灯是否可用
 */
#define XMHQCameraFlashAvailable [XMHQSystemUitil cameraFlashAvailable]

/**
 *  是否支持发短信
 */
#define XMHQSystemCanSendSMS [XMHQSystemUitil canSendSMS]

/**
 *  是否支持打电话
 */
#define XMHQSystemCanMakePhoneCall [XMHQSystemUitil canMakePhoneCall]

/**
 *  App是否有权限访问照片库
 */
#define XMHQAppCanAccessPhotoLibrary [XMHQSystemUitil isAppPhotoLibraryAccessAuthorized]

/**
 *  App是否有权限访问相机
 */
#define XMHQAppCanAccessCamera [XMHQSystemUitil isAppCameraAccessAuthorized]

/**
 *  获取屏幕Y轴起始点
 */
#define XMHQAppSelfViewFrameOrangeY [XMHQSystemUitil getSelfViewFrameOrangeY]

/**
 *  系统是否 >=7.0 <7.1
 */
#define XMHQSystemVersionIs7 [XMHQSystemUitil isSystemVersionIs7]
