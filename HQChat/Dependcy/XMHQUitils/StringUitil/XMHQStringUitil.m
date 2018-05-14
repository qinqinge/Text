//
//  XMHQStringUitil.m
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import "XMHQStringUitil.h"
#import "XMHQStringMacrocDefine.h"
#import "XMHQUitils.h"
#import <CommonCrypto/CommonDigest.h>

@implementation XMHQStringUitil

+ (BOOL)stringIsNull:(NSString *)string
{
    if (![string isKindOfClass:[NSString class]]) {
        return YES;
    }
    
    if (!string || [string isKindOfClass:[NSNull class]] || string.length == 0 || [string isEqualToString:@""]) {
        return YES;
    }else{
        return NO;
    }
}

+ (BOOL)stringIsAllWhiteSpace:(NSString *)string
{
    if (XMHQStringIsNull(string)) {
        return YES;
    }else{
        
        NSString *trimString = [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        
        if (trimString.length > 0) {
            return NO;
        }else{
            return YES;
        }
    }
}

+ (BOOL)stringToBool:(NSString*)sourceString
{
    if (XMHQStringIsNull(sourceString)) {
        return NO;
    }else{
        return [sourceString boolValue];
    }
}

+ (NSInteger)stringToInt:(NSString*)sourceString
{
    if (XMHQStringIsNull(sourceString)) {
        return NSIntegerMax;
    }else{
        return [sourceString intValue];
    }
}

+ (CGFloat)stringToFloat:(NSString*)sourceString
{
    if (XMHQStringIsNull(sourceString)) {
        return CGFLOAT_MAX;
    }else{
        return [sourceString floatValue];
    }
}

+ (double)stringToDouble:(NSString*)sourceString
{
    if (XMHQStringIsNull(sourceString)) {
        return CGFLOAT_MAX;
    }else{
        return [sourceString doubleValue];
    }
}

+ (NSString *)boolToString:(BOOL)boolValue
{
    return [NSString stringWithFormat:@"%d",boolValue];
}

+ (NSString *)intToString:(NSInteger)intValue
{
    return [NSString stringWithFormat:@"%ld",(long)intValue];
}

+ (NSString *)floatToString:(CGFloat)floatValue
{
    return [NSString stringWithFormat:@"%f",floatValue];
}

+ (NSString *)doubleToString:(double)doubleValue
{
    return [NSString stringWithFormat:@"%lf",doubleValue];
}

+ (NSString*)stringFromFile:(NSString*)path
{
    if (XMHQStringIsNull(path)) {
        return nil;
    }
    return [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
}

+ (BOOL)sourceString:(NSString*)sourceString regexMatch:(NSString *)regexString
{
    if (XMHQStringIsNull(sourceString) || XMHQStringIsNull(regexString) ) {
        return NO;
    }
    
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regexString];
    return [emailTest evaluateWithObject:sourceString];
}

+ (BOOL)stringIsValidateEmailAddress:(NSString *)string
{
    NSString *emailRegex = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    return [XMHQStringUitil sourceString:string regexMatch:emailRegex];
}

+ (BOOL)stringISValidateMobilePhone:(NSString *)string
{
    //手机号以13， 15，18开头，八个 \d 数字字符
    NSString *phoneRegex = @"^((13[0-9])|(15[^4,\\D])|(18[0,0-9]))\\d{8}$";
    return [XMHQStringUitil sourceString:string regexMatch:phoneRegex];
}

+ (BOOL)stringISValidateCarNumber:(NSString *)string
{
    NSString *carRegex = @"^[\u4e00-\u9fa5]{1}[a-zA-Z]{1}[a-zA-Z_0-9]{4}[a-zA-Z_0-9_\u4e00-\u9fa5]$";
    return [XMHQStringUitil sourceString:string regexMatch:carRegex];
}

+ (BOOL)stringIsValidateUrl:(NSString *)string
{
    NSString *checkRegex = @"^(([hH][tT]{2}[pP][sS]?)|([fF][tT][pP]))\\:\\/\\/[wW]{3}\\.[\\w-]+\\.\\w{2,4}(\\/.*)?$";
    return [XMHQStringUitil sourceString:string regexMatch:checkRegex];
}

+ (BOOL)stringIsAllChineseWord:(NSString *)string
{
    NSString *checkRegex = @"^[\u4e00-\u9fa5]+$";
    return [XMHQStringUitil sourceString:string regexMatch:checkRegex];
}

+ (BOOL)stringISValidatePersonCardNumber:(NSString *)string
{
    NSString *regex2 = @"^(\\d{14}|\\d{17})(\\d|[xX])$";
    return [XMHQStringUitil sourceString:string regexMatch:regex2];
}

+ (BOOL)stringIsValidatePhone:(NSString *)string
{
    NSString *phoneRegex = @"^(^0\\d{2}-?\\d{8}$)|(^0\\d{3}-?\\d{7}$)|(^\\(0\\d{2}\\)-?\\d{8}$)|(^\\(0\\d{3}\\)-?\\d{7}$)$";
    return [XMHQStringUitil sourceString:string regexMatch:phoneRegex];
}

+ (BOOL)stringIsValidateMailCode:(NSString *)string
{
    NSString *mailCodeRegex = @"^\\d{6}$";
    return [XMHQStringUitil sourceString:string regexMatch:mailCodeRegex];
}

+ (BOOL)stringJustHasNumberAndCharacter:(NSString *)string
{
    NSString *checkRegex = @"[a-z][A-Z][0-9]";
    return [XMHQStringUitil sourceString:string regexMatch:checkRegex];
}

+ (BOOL)stringChineseNumberCharacterOnly:(NSString *)string
{
    NSString *checkRegex = @"[a-zA-Z\u4e00-\u9fa5][a-zA-Z0-9\u4e00-\u9fa5]+";
    return [XMHQStringUitil sourceString:string regexMatch:checkRegex];
}

+ (BOOL)stringJustHasNumber:(NSString *)string
{
    NSString *checkRegex = @"^[0-9]*$";
    return [XMHQStringUitil sourceString:string regexMatch:checkRegex];
}

+ (NSString*)currentTimeStampString
{
    NSDate *now = [NSDate date];
    NSTimeInterval timeInterval = [now timeIntervalSinceReferenceDate];
    
    NSString *timeString = [NSString stringWithFormat:@"%lf",timeInterval];
    timeString = [timeString stringByReplacingOccurrencesOfString:@"." withString:@""];
    
    return timeString;
    
}

+ (NSString *)unarchieveFromPath:(NSString *)filePath
{
    return XMHQUnArchieveObject(filePath);
}

+ (NSString *)MD5:(NSString *)string
{
    const char* aString = [string UTF8String];
    unsigned char result[16];
    CC_MD5(aString, (unsigned int)strlen(aString), result);
    NSString* hash = [NSString stringWithFormat:@"%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
                      result[0], result[1], result[2], result[3], result[4], result[5], result[6], result[7],
                      result[8], result[9], result[10], result[11], result[12], result[13], result[14], result[15]];
    
    return [hash lowercaseString];
}

+ (NSString *)stringByTrimingLeadingWhiteSpace:(NSString *)string
{
    NSRange range = [string rangeOfString:@"^\\s*" options:NSRegularExpressionSearch];
    return [string stringByReplacingCharactersInRange:range withString:@""];
}

+ (NSString *)stringByTrimingTailingWhiteSpace:(NSString *)string
{
    NSRange range = [string rangeOfString:@"\\s*$" options:NSRegularExpressionSearch];
    return [string stringByReplacingCharactersInRange:range withString:@""];
}

+ (NSString *)stringByTrimingWhiteSpace:(NSString *)string
{
    return [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
}

// 转化为UTF8编码
+ (NSString *)urlEncode:(id)object {
    
    if (XMHQCheckObjectNull(object)) {
        return nil;
    }
    
    if ([object isKindOfClass:[NSNumber class]]) {
        object = [NSString stringWithFormat:@"%@",object];
    }
    
    NSString *string = (NSString*)object;
    NSString *encodedValue = (__bridge NSString*)CFURLCreateStringByAddingPercentEscapes(nil,
                                                                                         (CFStringRef)string,
                                                                                         nil,
                                                                                         (CFStringRef)@"!*'();:@&=+$,/?%#[]",
                                                                                         kCFStringEncodingUTF8);
    return encodedValue;
}

+ (NSString *)encodeStringFromDict:(NSDictionary *)dict
{
    if (XMHQCheckObjectNull(dict)) {
        return nil;
    }
    
    NSMutableArray *parts = [NSMutableArray array];
    for (id key in dict) {
        @autoreleasepool {
            id value = [dict objectForKey: key];
            NSString *part = [NSString stringWithFormat: @"%@=%@",[XMHQStringUitil urlEncode:key],[XMHQStringUitil urlEncode:value]];
            [parts addObject: part];
        }
    }
    return [parts componentsJoinedByString: @"&"];//拼装字符串
}

+ (NSRange)stringRange:(NSString *)string
{
    if (XMHQStringIsNull(string)) {
        return NSMakeRange(NSNotFound, 0);
    }
    return NSMakeRange(0, string.length);
}

@end
