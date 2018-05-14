//
//  XMHQQuickCacheUitil.m
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import "XMHQQuickCacheUitil.h"
#import "XMHQQuickCacheMacrocDefine.h"
#import "XMHQDispatchMacrocDefine.h"
#import "XMHQStringMacrocDefine.h"

@implementation XMHQQuickCacheUitil

+ (BOOL)isNullObject:(id)anObject
{
    if (!anObject || [anObject isKindOfClass:[NSNull class]]) {
        return YES;
    }else{
        return NO;
    }
}

+ (BOOL)checkValue:(id)value key:(id)key
{
    if(XMHQCheckObjectNull(value)||XMHQCheckObjectNull(key)){
        return YES;
    }else{
        return NO;
    }
}

+ (NSUserDefaults *)standDefault
{
    return [NSUserDefaults standardUserDefaults];
}

+ (void)userDefaultCache:(id<NSCoding>)value key:(id)key
{
    if (XMHQCheckKeyValueHasNull(key, value)) {
        return;
    }
    [[XMHQQuickCacheUitil standDefault]setObject:value forKey:key];
}

+ (void)userDefaultRemove:(id)key
{
    if (XMHQCheckObjectNull(key)) {
        return;
    }
    [[XMHQQuickCacheUitil standDefault]removeObjectForKey:key];
}

+ (id)userDefaultGetValue:(id)key
{
    if (XMHQCheckObjectNull(key)) {
        return nil;
    }
    return [[XMHQQuickCacheUitil standDefault]objectForKey:key];
}

+ (BOOL)userDefaultEmptyValue:(id)key
{
    return [XMHQQuickCacheUitil userDefaultGetValue:key] == nil;
}

+ (NSCache *)shareCache
{
    static NSCache *_xmhqNSCacheInstance = nil;
    static dispatch_once_t onceToken;
    
    XMHQDispatchOnce(onceToken, ^{
        
        if (!_xmhqNSCacheInstance) {
            _xmhqNSCacheInstance = [[NSCache alloc]init];
        }
        
    });
    
    return _xmhqNSCacheInstance;
}

+ (void)systemMemoryCacheSet:(id<NSCoding>)value key:(id)key
{
    if (XMHQCheckKeyValueHasNull(value, key)) {
        return;
    }
    [[XMHQQuickCacheUitil shareCache]setObject:value forKey:key];
}

+ (void)systemMemoryCacheRemove:(id)key
{
    if (XMHQCheckObjectNull(key)) {
        return;
    }
    [[XMHQQuickCacheUitil shareCache]removeObjectForKey:key];
}

+ (id)systemMemoryCacheGetValue:(id)key
{
    if (XMHQCheckObjectNull(key)) {
        return nil;
    }
    return [[XMHQQuickCacheUitil shareCache]objectForKey:key];
}

+ (BOOL)systemMemoryCacheEmptyValue:(id)key
{
    if (XMHQCheckObjectNull(key)) {
        return NO;
    }
    return [XMHQQuickCacheUitil systemMemoryCacheGetValue:key] == nil;
}

+ (NSFileManager *)fileManager
{
    return [NSFileManager defaultManager];
}

+ (BOOL)fileExist:(NSString*)path
{
    if (XMHQStringIsNull(path)) {
        return NO;
    }
    return [[XMHQQuickCacheUitil fileManager] fileExistsAtPath:path];
}

+ (BOOL)directoryExist:(NSString*)dirPath
{
    if (XMHQStringIsNull(dirPath)) {
        return NO;
    }
    BOOL isDir = YES;
    
    return [[XMHQQuickCacheUitil fileManager]fileExistsAtPath:dirPath isDirectory:&isDir];
}

+ (BOOL)createDirectory:(NSString*)dirPath
{
    if (XMHQCheckObjectNull(dirPath)) {
        return NO;
    }
    if (XMHQFileDirectoryIsExist(dirPath)) {
        return YES;
    }
    return [[XMHQQuickCacheUitil fileManager] createDirectoryAtPath:dirPath withIntermediateDirectories:YES attributes:nil error:nil];
}

+ (BOOL)writeFileData:(NSData*)data toPath:(NSString *)path
{
    if (XMHQCheckKeyValueHasNull(data, path)) {
        return NO;
    }
    
    return [data writeToFile:path atomically:YES];
}

+ (NSData *)readFromFile:(NSString *)path
{
    if (XMHQCheckObjectNull(path)) {
        return nil;
    }
    
    return [NSData dataWithContentsOfFile:path];
}

+ (BOOL)deleteFileAtPath:(NSString *)filePath
{
    if (XMHQStringIsNull(filePath)) {
        return NO;
    }
    return [XMHQFileManager removeItemAtPath:filePath error:nil];
}

+ (BOOL)deleteDirectoryAtPath:(NSString *)dirPath
{
    if (XMHQStringIsNull(dirPath)) {
        return NO;
    }
    return [XMHQFileManager removeItemAtPath:dirPath error:nil];
}

+ (BOOL)copyFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath isRemoveOld:(BOOL)isRemove
{
    if (XMHQStringIsNull(fromPath) || XMHQStringIsNull(toPath) ) {
        return NO;
    }
    if (!XMHQFileIsExist(fromPath)) {
        return NO;
    }
    
    BOOL copyResult = [XMHQFileManager copyItemAtPath:fromPath toPath:toPath error:nil];
    if (copyResult) {
        
        if (isRemove) {
            return [XMHQFileManager removeItemAtPath:fromPath error:nil];
        }
        return YES;
        
    }else{
        return NO;
    }
}

+ (BOOL)archieveObject:(id<NSCoding>)anObject toFilePath:(NSString *)toPath
{
    if (XMHQCheckObjectNull(anObject) || XMHQStringIsNull(toPath)) {
        return NO;
    }
    NSData *archieveData = [NSKeyedArchiver archivedDataWithRootObject:anObject];
    if (archieveData) {
        
        return XMHQFileWrite(archieveData, toPath);
        
    }else{
        return NO;
    }
}

+ (id)unarchieveFromPath:(NSString *)filePath
{
    if (XMHQStringIsNull(filePath)) {
        return nil;
    }
    return [NSKeyedUnarchiver unarchiveObjectWithFile:filePath];
}

+ (NSString *)documentDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)documentDirectoryPath:(NSString *)file
{
    if (XMHQStringIsNull(file)) {
        return nil;
    }
    return [[XMHQQuickCacheUitil documentDirectory]stringByAppendingPathComponent:file];
}

+ (NSString *)cacheDirectory
{
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

+ (NSString *)cacheDirectoryPath:(NSString *)file
{
    if (XMHQStringIsNull(file)) {
        return nil;
    }
    return [[XMHQQuickCacheUitil cacheDirectory]stringByAppendingPathComponent:file];
}

+ (BOOL)cacheDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (XMHQCheckObjectNull(anObject) || XMHQStringIsNull(file)) {
        return NO;
    }
    
    return XMHQArchieveObject(anObject, [XMHQQuickCacheUitil cacheDirectoryPath:file]);
}

+ (BOOL)cacheDirectoryDelete:(NSString *)file
{
    if (XMHQStringIsNull(file)) {
        return NO;
    }
    return XMHQFileDeleteFile([XMHQQuickCacheUitil cacheDirectoryPath:file]);
}


+ (BOOL)documentDirectorySave:(id<NSCoding>)anObject withFileName:(NSString *)file
{
    if (XMHQCheckObjectNull(anObject) || XMHQStringIsNull(file)) {
        return NO;
    }
    
    return XMHQArchieveObject(anObject, [XMHQQuickCacheUitil documentDirectoryPath:file]);
}

+ (BOOL)documentDirectoryDelete:(NSString *)file
{
    if (XMHQStringIsNull(file)) {
        return NO;
    }
    return XMHQFileDeleteFile([XMHQQuickCacheUitil documentDirectoryPath:file]);
}

@end
