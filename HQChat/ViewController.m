//
//  ViewController.m
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import "ViewController.h"
#import "XMHQUitils.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString *str = [ViewController currentTimeStamp];
    NSLog(@"%@",str);
    
    NSString *timeStr = [XMHQStringUitil currentTimeStampString];
    NSLog(@"%@",timeStr);
}


+ (NSString *)currentTimeStamp
{
    // 543831153_416276
    NSDate *now = [NSDate date];
    NSTimeInterval timeInterval = [now timeIntervalSinceReferenceDate];
    
    NSString *timeString = [NSString stringWithFormat:@"%lf",timeInterval];
    timeString = [timeString stringByReplacingOccurrencesOfString:@"." withString:@"_"];
    
    return timeString;
}

@end
