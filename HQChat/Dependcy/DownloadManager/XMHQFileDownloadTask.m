//
//  XMHQFileDownloadTask.m
//  HQChat
//
//  Created by PX_Mac on 2018/3/27.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import "XMHQFileDownloadTask.h"

@interface XMHQFileDownloadTask()

@property (nonatomic,strong)NSMutableArray *innerTaskObserverArray;

@property (nonatomic,strong)NSMutableArray *innerTaskCachePathArray;
@end

@implementation XMHQFileDownloadTask

- (instancetype)init{
    
    if (self = [super init]) {
        
        self.taskState = XMHQFileDownloadStateNeverBegin;
        self.innerTaskObserverArray = [NSMutableArray array];
        self.innerTaskCachePathArray = [NSMutableArray array];
        self.useDowloadManagerHost = NO;
        _taskUniqueIdentifier = [XMHQFileDownloadTask currentTimeStamp];
    }
    return self;
}

+ (NSString *)currentTimeStamp
{
    NSDate *now = [NSDate date];
    NSTimeInterval timeInterval = [now timeIntervalSinceReferenceDate];
    
    NSString *timeString = [NSString stringWithFormat:@"%lf",timeInterval];
    timeString = [timeString stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    
    return timeString;
}

- (NSArray *)taskObservers{
    return self.innerTaskObserverArray;
}


#pragma mark -  公开方法
- (void)addTaskObserver:(NSObject *)observer{
    
    if (!observer) {
        return;
    }
    
}

@end
