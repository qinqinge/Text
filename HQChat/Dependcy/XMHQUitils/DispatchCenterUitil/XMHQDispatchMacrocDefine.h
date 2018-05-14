//
//  XMHQDispatchMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

/**
 *  文件描述
 *
 *  这个工具类宏可以方便在各种队列中执行block,提供便捷的使用方法
 *  是对GCD的一个简单封装
 */

#import "XMHQDispatchCenterUitil.h"

/**
 *  主线程异步执行block
 */
#define XMHQAsyncMainQueue(block) [XMHQDispatchCenterUitil asyncMainQueue:block]

/**
 *  主线程延迟second秒异步执行block
 */
#define XMHQAsyncMainQueueDelay(second,block) [XMHQDispatchCenterUitil asyncMainQueue:block delay:second]

/**
 *  全局后台线程异步执行block
 */
#define XMHQAsyncGlobalBackgroundQueue(block) [XMHQDispatchCenterUitil asyncGlobalBackgroundQueue:block]

/**
 *  全局后台线程延迟second秒异步执行block
 */
#define XMHQAsyncGlobalBackgroundQueueDelay(second,block) [XMHQDispatchCenterUitil asyncGlobalBackgroundQueue:block delay:second]

/**
 *  全局高优先级线程异步执行block
 */
#define XMHQAsyncGlobalHighQueue(block) [XMHQDispatchCenterUitil asyncGlobalHighQueue:block]

/**
 *  全局高优先级线程延迟second秒异步执行block
 */
#define XMHQAsyncGlobalHighQueueDelay(second,block) [XMHQDispatchCenterUitil asyncGlobalHighQueue:block delay:second]

/**
 *  全局低优先级线程异步执行block
 */
#define XMHQAsyncGlobalLowQueue(block) [XMHQDispatchCenterUitil asyncGlobalLowQueue:block]

/**
 *  全局低优先级线程延迟second秒异步执行block
 */
#define XMHQAsyncGlobalLowQueueDelay(second,block) [XMHQDispatchCenterUitil asyncGlobalLowQueue:block delay:second]

/**
 *  全局默认线程异步执行block
 */
#define XMHQAsyncGlobalDefaultQueue(block) [XMHQDispatchCenterUitil asyncGlobalDefaultQueue:block]

/**
 *  全局默认线程延迟second秒异步执行block
 */
#define XMHQAsyncGlobalDefaultQueueDelay(second,block) [XMHQDispatchCenterUitil asyncGlobalDefaultQueue:block delay:second]

/**
 *  在queue线程队列异步执行block
 */
#define XMHQAsync(queue,block)  [XMHQDispatchCenterUitil asyncQueue:queue action:block]

/**
 *  在queue线程序延迟second秒异步执行block
 */
#define XMHQAsyncDelay(queue,second,block)  [XMHQDispatchCenterUitil asyncQueue:queue action:block delay:second]

/**
 *  只执行一次block,创建单例使用
 */
#define XMHQDispatchOnce(onceToken,block) [XMHQDispatchCenterUitil dispatchOnce:onceToken action:block]
