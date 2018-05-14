//
//  XMHQQuickCacheUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMHQQuickCacheUitil : NSObject

/**
 检查一个对象是否为空

 @param anObject <#anObject description#>
 @return <#return value description#>
 */
+ (BOOL)isNullObject:(id)anObject;

/**
 检查一个valueObj,keyObj对象是否有一个是空的

 @param value <#value description#>
 @param key <#key description#>
 @return <#return value description#>
 */
+ (BOOL)checkValue:(id)value key:(id)key;

/**
 NSUserDefault 保存键值对 keyObj,valueObj

 @param value <#value description#>
 @param key <#key description#>
 */
+ (void)userDefaultCache:(id<NSCoding>)value key:(id)key;

/**
 NSUserDefault 删除键keyObj对应的值

 @param key <#key description#>
 */
+ (void)userDefaultRemove:(id)key;

/**
  NSUserDefault 获取键keyObj对应的值

 @param key <#key description#>
 @return <#return value description#>
 */
+ (id)userDefaultGetValue:(id)key;

/**
 NSUserDefault 判断键keyObject对应的值是否为空

 @param key <#key description#>
 @return <#return value description#>
 */
+ (BOOL)userDefaultEmptyValue:(id)key;

/**
  NSCache 存储键值对 keyObj,valueObj

 @param value <#value description#>
 @param key <#key description#>
 */
+ (void)systemMemoryCacheSet:(id<NSCoding>)value key:(id)key;

/**
 NSCache 删除键keyObj对应的值

 @param key <#key description#>
 */
+ (void)systemMemoryCacheRemove:(id)key;

/**
 NSCache 获取键keyObj对应的值

 @param key <#key description#>
 @return <#return value description#>
 */
+ (id)systemMemoryCacheGetValue:(id)key;

/**
 将二进制数据写入文件 dataObj:NSData pathObj:NSString

 @param data <#data description#>
 @param path <#path description#>
 @return <#return value description#>
 */
+ (BOOL)writeFileData:(NSData*)data toPath:(NSString *)path;

/**
 NSCache 判断键keyObject对应的值是否为空

 @param key <#key description#>
 @return <#return value description#>
 */
+ (BOOL)systemMemoryCacheEmptyValue:(id)key;

/**
 获取系统默认文件管理

 @return <#return value description#>
 */
+ (NSFileManager *)fileManager;

/**
  指定路径pathObj是否存在文件

 @param path <#path description#>
 @return <#return value description#>
 */
+ (BOOL)fileExist:(NSString*)path;

/**
 指定路径pathObj是否存在目录

 @param dirPath <#dirPath description#>
 @return <#return value description#>
 */
+ (BOOL)directoryExist:(NSString*)dirPath;

/**
 在指定路径创建目录，返回BOOL结果

 @param dirPath <#dirPath description#>
 @return <#return value description#>
 */
+ (BOOL)createDirectory:(NSString*)dirPath;

/**
 读取某个路径的二进制数据，返回 NSData

 @param path <#path description#>
 @return <#return value description#>
 */
+ (NSData *)readFromFile:(NSString *)path;

/**
 删除指定路径文件

 @param filePath <#filePath description#>
 @return <#return value description#>
 */
+ (BOOL)deleteFileAtPath:(NSString *)filePath;

/**
 删除指定目录

 @param dirPath <#dirPath description#>
 @return <#return value description#>
 */
+ (BOOL)deleteDirectoryAtPath:(NSString *)dirPath;

/**
 从fromFilePath复制文件到toFilePath,shouldRemove标示是否删除复制源文件

 @param fromPath <#fromPath description#>
 @param toPath <#toPath description#>
 @param isRemove <#isRemove description#>
 @return <#return value description#>
 */
+ (BOOL)copyFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath isRemoveOld:(BOOL)isRemove;

/**
 将某个对象归档到指定路径

 @param anObject <#anObject description#>
 @param toPath <#toPath description#>
 @return <#return value description#>
 */
+ (BOOL)archieveObject:(id<NSCoding>)anObject toFilePath:(NSString *)toPath;

/**
 从指定路径读取被归档过的对象

 @param filePath <#filePath description#>
 @return <#return value description#>
 */
+ (id)unarchieveFromPath:(NSString *)filePath;

/**
 获取NSDocumentDirectory目录

 @return <#return value description#>
 */
+ (NSString *)documentDirectory;

/**
 获取NSCacheDirectory目录

 @return <#return value description#>
 */
+ (NSString *)cacheDirectory;

/**
 返回文件名为fileName在NSDocumentDirectory中的路径

 @param file <#file description#>
 @return <#return value description#>
 */
+ (NSString *)documentDirectoryPath:(NSString *)file;

/**
 返回文件名为fileName在NSCacheDirectory中的路径

 @param file <#file description#>
 @return <#return value description#>
 */
+ (NSString *)cacheDirectoryPath:(NSString *)file;

/**
 将object对象用fileName名字保存到NSCacheDirectory目录下

 @param anObject <#anObject description#>
 @param file <#file description#>
 @return <#return value description#>
 */
+ (BOOL)cacheDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file;

/**
 删除NSCacheDirectory目录下名为fileName的文件

 @param file <#file description#>
 @return <#return value description#>
 */
+ (BOOL)cacheDirectoryDelete:(NSString *)file;

/**
 将object对象用fileName名字保存到NSDocumentDirectory目录下

 @param anObject <#anObject description#>
 @param file <#file description#>
 @return <#return value description#>
 */
+ (BOOL)documentDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file;

/**
 删除NSDocumentDirectory目录下名为fileName的文件

 @param file <#file description#>
 @return <#return value description#>
 */
+ (BOOL)documentDirectoryDelete:(NSString *)file;

@end
