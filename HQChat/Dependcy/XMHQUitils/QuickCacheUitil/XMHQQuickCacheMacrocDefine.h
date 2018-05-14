//
//  XMHQQuickCacheMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏定义封装了对
 *  NSUserDefault,NSCache,NSFileManager
 *  NSKeyedArchieve,NSDocumentDirectory,NSCacheDirectory的便捷操作
 */

#import "XMHQQuickCacheUitil.h"

/* 写宏定义的时候，前面变量参数的名字，多参数的时候不能方法名和后面调用方法的参数名字一样 */

/**
 *  检查一个valueObj,keyObj对象是否有一个是空的
 */
#define XMHQCheckKeyValueHasNull(keyObj,valueObj) [XMHQQuickCacheUitil checkValue:valueObj key:keyObj]

/**
 *  检查一个对象是否为空
 */
#define XMHQCheckObjectNull(object) [XMHQQuickCacheUitil isNullObject:object]

/**
 *  NSUserDefault 保存键值对 keyObj,valueObj
 */
#define XMHQUDFCache(keyObj,valueObj) [XMHQQuickCacheUitil userDefaultCache:valueObj key:keyObj]

/**
 *  NSUserDefault 删除键keyObj对应的值
 */
#define XMHQUDFRemove(keyObj) [XMHQQuickCacheUitil userDefaultRemove:keyObj]

/**
 *  NSUserDefault 获取键keyObj对应的值
 */
#define XMHQUDFGetValue(keyObj) [XMHQQuickCacheUitil userDefaultGetValue:keyObj]

/**
 *  NSUserDefault 判断键keyObject对应的值是否为空
 */
#define XMHQUDFEmptyValue(keyObj) [XMHQQuickCacheUitil userDefaultEmptyValue:keyObj]

/**
 *  NSCache 存储键值对 keyObj,valueObj
 */
#define XMHQNSCacheSet(keyObj,valueObj) [XMHQQuickCacheUitil systemMemoryCacheSet:valueObj key:keyObj]

/**
 *  NSCache 删除键keyObj对应的值
 */
#define XMHQNSCacheRemove(keyObj) [XMHQQuickCacheUitil systemMemoryCacheRemove:keyObj]

/**
 *  NSCache 获取键keyObj对应的值
 */
#define XMHQNSCacheGetValue(keyObj) [XMHQQuickCacheUitil systemMemoryCacheGetValue:keyObj]

/**
 *  NSCache 判断键keyObject对应的值是否为空
 */
#define XMHQNSCacheEmptyValue(keyObj) [XMHQQuickCacheUitil systemMemoryCacheEmptyValue:keyObj]

/**
 *  获取系统默认文件管理
 */
#define XMHQFileManager [XMHQQuickCacheUitil fileManager]

/**
 *  指定路径pathObj是否存在文件
 */
#define XMHQFileIsExist(pathObj) [XMHQQuickCacheUitil fileExist:pathObj]

/**
 *  指定路径pathObj是否存在目录
 */
#define XMHQFileDirectoryIsExist(pathObj) [XMHQQuickCacheUitil directoryExist:pathObj]

/**
 *  读取某个路径的二进制数据，返回 NSData
 */
#define XMHQFileRead(pathObj) [XMHQQuickCacheUitil readFromFile:pathObj]

/**
 *  将二进制数据写入文件 dataObj:NSData pathObj:NSString
 */
#define XMHQFileWrite(dataObj,pathObj) [XMHQQuickCacheUitil writeFileData:dataObj toPath:pathObj]

/**
 *  在指定路径创建目录，返回BOOL结果
 */
#define XMHQFileDirectoryCreate(pathObj) [XMHQQuickCacheUitil createDirectory:pathObj]

/**
 *  删除指定路径文件
 */
#define XMHQFileDeleteFile(path) [XMHQQuickCacheUitil deleteFileAtPath:path]

/**
 *  删除指定目录
 */
#define XMHQFileDeleteDirectory(path) [XMHQQuickCacheUitil deleteDirectoryAtPath:path]

/**
 *  从fromFilePath复制文件到toFilePath,shouldRemove标示是否删除复制源文件
 */
#define XMHQFileCopyFileIsRemove(fromFilePath,toFilePath,shouldRemove) [XMHQQuickCacheUitil copyFileFromPath:fromFilePath toPath:toFilePath isRemoveOld:shouldRemove]

/**
 *  将某个对象归档到指定路径
 */
#define XMHQArchieveObject(object,filePath) [XMHQQuickCacheUitil archieveObject:object toFilePath:filePath]

/**
 *  从指定路径读取被归档过的对象
 */
#define XMHQUnArchieveObject(fromFilePath) [XMHQQuickCacheUitil unarchieveFromPath:fromFilePath]

/**
 *  获取NSDocumentDirectory目录
 */
#define XMHQAppDocumentDirectory [XMHQQuickCacheUitil documentDirectory]

/**
 *  获取NSCacheDirectory目录
 */
#define XMHQAppCacheDirectory [XMHQQuickCacheUitil cacheDirectory]

/**
 *  返回文件名为fileName在NSDocumentDirectory中的路径
 */
#define XMHQAppDoucmentPath(fileName) [XMHQQuickCacheUitil documentDirectoryPath:fileName]

/**
 *  返回文件名为fileName在NSCacheDirectory中的路径
 */
#define XMHQAppCachePath(fileName) [XMHQQuickCacheUitil cacheDirectoryPath:fileName]

/**
 *  将object对象用fileName名字保存到NSDocumentDirectory目录下
 */
#define XMHQAppDocumentSave(object,fileName) [XMHQQuickCacheUitil documentDirectorySave:object withFileName:fileName]

/**
 *  将object对象用fileName名字保存到NSCacheDirectory目录下
 */
#define XMHQAppCacheSave(object,fileName) [XMHQQuickCacheUitil cacheDirectorySave:object withFileName:fileName]

/**
 *  删除NSDocumentDirectory目录下名为fileName的文件
 */
#define XMHQAppDocumentDelete(fileName)  [XMHQQuickCacheUitil documentDirectoryDelete:fileName]

/**
 *  删除NSCacheDirectory目录下名为fileName的文件
 */
#define XMHQAppCacheDelete(fileName) [XMHQQuickCacheUitil cacheDirectoryDelete:fileName]
