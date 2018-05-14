//
//  XMHQSystemUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <CoreGraphics/CoreGraphics.h>

@interface XMHQSystemUitil : NSObject

/**
 当前App的版本号

 @return <#return value description#>
 */
+ (CGFloat)appVersion;

/**
 当前App的版本号 float型

 @return <#return value description#>
 */
+ (CGFloat)appFloatVersion;

/**
 当前App的版本号 字符串型

 @return <#return value description#>
 */
+ (NSString *)appStringVersion;

/**
 当前App的bundleIdentifier

 @return <#return value description#>
 */
+ (NSString *)appBundleIdentifier;

/**
 
  获取系统版本号

 @return <#return value description#>
 */
+ (CGFloat)currentSystemVersion;

/**
 当前屏幕缩放倍数

 @return <#return value description#>
 */
+ (CGFloat)currentScreenScale;

/**
 屏幕绝对画布

 @return <#return value description#>
 */
+ (CGRect)screenBounds;

/**
 系统是否超过指定的版本号

 @param versionValue <#versionValue description#>
 @return <#return value description#>
 */
+ (BOOL)isSystemVersionOver:(CGFloat)versionValue;

/**
 是否iPad

 @return <#return value description#>
 */
+ (BOOL)iPadDevice;

/**
 是否iPhone4

 @return <#return value description#>
 */
+ (BOOL)iPhone4Device;

/**
  是否iPhone5

 @return <#return value description#>
 */
+ (BOOL)iPhone5Device;


/**
 是否iPhone6

 @return <#return value description#>
 */
+ (BOOL)iPhone6Device;


/**
 是否iPhone6 plus

 @return <#return value description#>
 */
+ (BOOL)iPhone6PlusDevice;

/**
 获取屏幕大小

 @return <#return value description#>
 */
+ (CGSize)deviceScreenSize;

/**
 系统UINavigationBar高度

 @return <#return value description#>
 */
+ (CGFloat)naivationBarHeight;

/**
 系统通知中心

 @return <#return value description#>
 */
+ (NSNotificationCenter *)defaultCenter;

/**
 系统通知中心发noti名字的通知

 @param notiName <#notiName description#>
 */
+ (void)postNoti:(NSString *)notiName;

/**
 系统通知中心发noti名字的通知，携带参数对象object

 @param notiName <#notiName description#>
 @param obj <#obj description#>
 */
+ (void)postNoti:(NSString *)notiName withObject:(id)obj;

/**
 系统通知中心发noti名字的通知，携带参数对象object ,携带用户自定义信息userInfo

 @param notiName <#notiName description#>
 @param obj <#obj description#>
 @param infoDict <#infoDict description#>
 */
+ (void)postNoti:(NSString *)notiName withObject:(id)obj withUserInfo:(NSDictionary *)infoDict;


/**
 获取mainBundle内名字为fileName的文件的路径

 @param fileName <#fileName description#>
 @return <#return value description#>
 */
+ (NSString *)mainBundlePath:(NSString*)fileName;

/**
 获取路径为bundlePath的指定bundle中文件名为fileName的文件路径

 @param bundle <#bundle description#>
 @param file <#file description#>
 @return <#return value description#>
 */
+ (NSString *)bundle:(NSString *)bundle file:(NSString *)file;

+ (void)showNetworkIndicatorActivity:(BOOL)state;

/**
 运行时给一个对象添加一个成员，添加的associateKey必须是一个静态常量字符串 static NSString * const associateKey = @"";

 @param originObject <#originObject description#>
 @param anObject <#anObject description#>
 @param associateKey <#associateKey description#>
 */
+ (void)originObject:(id)originObject associateObject:(id)anObject byKey:(NSString * const)associateKey;

/**
 通过key获取运行时加入的成员

 @param originObject <#originObject description#>
 @param associateKey <#associateKey description#>
 @return <#return value description#>
 */
+ (id)associateObjectFromOrigin:(id)originObject byKey:(NSString * const)associateKey;


/**
 移除辅助成员

 @param originObject <#originObject description#>
 */
+ (void)associateRemoveFromOrigin:(id)originObject;

/**
 照相机是否可用

 @return <#return value description#>
 */
+ (BOOL)cameraAvailable;


/**
 前置摄像头是否可用

 @return <#return value description#>
 */
+ (BOOL)frontCameraAvailable;


/**
  照相机闪光灯是否可用

 @return <#return value description#>
 */
+ (BOOL)cameraFlashAvailable;

/**
  是否支持发短信

 @return <#return value description#>
 */
+ (BOOL)canSendSMS;

/**
 是否支持打电话

 @return <#return value description#>
 */
+ (BOOL)canMakePhoneCall;

/**
 App是否有权限访问相机

 @return <#return value description#>
 */
+ (BOOL)isAppCameraAccessAuthorized;

/**
 App是否有权限访问照片库

 @return <#return value description#>
 */
+ (BOOL)isAppPhotoLibraryAccessAuthorized;

/**
 *  获取屏幕Y轴起始点
 */
+(double)getSelfViewFrameOrangeY;

/**
 *  系统是否 >=7.0 <7.1
 */
+(BOOL)isSystemVersionIs7;

@end
