//
//  XMHQDispatchCenterUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMHQDispatchCenterUitil : NSObject

/**
 主线程异步执行block

 @param block <#block description#>
 */
+ (void)asyncMainQueue:(dispatch_block_t)block;

/**
 主线程延迟second秒异步执行block

 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncMainQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 全局后台线程异步执行block

 @param block <#block description#>
 */
+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block;

/**
 全局后台线程延迟second秒异步执行block

 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncGlobalBackgroundQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 全局高优先级线程异步执行block

 @param block <#block description#>
 */
+ (void)asyncGlobalHighQueue:(dispatch_block_t)block ;

/**
 全局高优先级线程延迟second秒异步执行block

 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncGlobalHighQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 全局低优先级线程异步执行block

 @param block <#block description#>
 */
+ (void)asyncGlobalLowQueue:(dispatch_block_t)block;

/**
 全局低优先级线程延迟second秒异步执行block

 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncGlobalLowQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 全局默认线程异步执行block

 @param block <#block description#>
 */
+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block;

/**
 全局默认线程延迟second秒异步执行block

 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncGlobalDefaultQueue:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 在queue线程序延迟second秒异步执行block

 @param queue <#queue description#>
 @param block <#block description#>
 @param second <#second description#>
 */
+ (void)asyncQueue:(dispatch_queue_t)queue action:(dispatch_block_t)block delay:(NSTimeInterval)second;

/**
 只执行一次block,创建单例使用

 @param onceToken <#onceToken description#>
 @param block <#block description#>
 */
+ (void)dispatchOnce:(dispatch_once_t)onceToken action:(dispatch_block_t)block;

+ (dispatch_queue_t)createQueueWithName:(NSString *)name isSerial:(BOOL)isSerial;

@end
