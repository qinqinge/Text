//
//  XMHQFileDownloadManager.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/27.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@class XMHQFileDownloadTask;


/**
 下载完成BLOCK

 @param task 下载任务
 @param fileData 下载文件数据
 @param isFinishCache 是否缓存
 */
typedef void(^XMHQFileDownloadManagerCompletionBlock)(XMHQFileDownloadTask *task, NSData *fileData, BOOL isFinishCache);


/**
 下载进度BLOCK

 @param task 下载任务
 @param progress 下载进度
 */
typedef void(^XMHQFileDownloadManagerProgressBlock)(XMHQFileDownloadTask *task, CGFloat progress);


/**
 下载失败BLOCK

 @param task 下载任务
 @param error <#error description#>
 */
typedef void(^XMHQFileDownloadManagerFaildBlock)(XMHQFileDownloadTask *task, NSError *error);

@interface XMHQFileDownloadManager : NSObject

+ (XMHQFileDownloadManager *)shareDownloadManager;


/* 设置下载服务器地址，不是必须的，是为了用来当没有主机地址的时候，可以用来补全 */
- (void)setDefaultDownloadHost:(NSString *)host;


/* 添加一个下载任务 */
- (void)addTask:(XMHQFileDownloadTask *)task;

/*
 * 观察者唯一标识生成方法
 */
+ (NSString*)uniqueKeyForObserver:(NSObject *)observer;

/*
 * 设定观察者完成方法
 */
- (void)setDownloadCompletionBlock:(XMHQFileDownloadManagerCompletionBlock)completionBlock
                       forObserver:(NSObject *)observer;

/*
 * 设定观察者进度方法
 */
- (void)setDownloadProgressBlock:(XMHQFileDownloadManagerProgressBlock)progressBlock
                     forObserver:(NSObject *)observer;

/*
 * 设定观察者失败方法
 */
- (void)setDownloadFaildBlock:(XMHQFileDownloadManagerFaildBlock)faildBlock
                  forObserver:(NSObject *)observer;

/*
 * 将观察者的block全部清除
 */
- (void)clearTaskBlockForObserver:(NSObject *)observer;

/**
 *  退出指定下载任务
 *
 *  @param taskUniqueIdentifier 下载任务标示
 */
- (void)cancelTask:(NSString *)taskUniqueIdentifier;


/**
 退出有相同标示的下载任务组

 @param groupTaskUniqueIdentifier <#groupTaskUniqueIdentifier description#>
 */
- (void)cancelGroupTask:(NSString *)groupTaskUniqueIdentifier;

@end
