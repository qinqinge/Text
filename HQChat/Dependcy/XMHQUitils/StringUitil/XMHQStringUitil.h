//
//  XMHQStringUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface XMHQStringUitil : NSObject


/**
 字符串是否为空

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsNull:(NSString *)string;

/**
 字符串是否全为空格

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsAllWhiteSpace:(NSString *)string;

/**
 字符串转Bool

 @param sourceString <#sourceString description#>
 @return <#return value description#>
 */
+ (BOOL)stringToBool:(NSString*)sourceString;

/**
 字符串转NSInteger

 @param sourceString <#sourceString description#>
 @return <#return value description#>
 */
+ (NSInteger)stringToInt:(NSString*)sourceString;

/**
 字符串转CGFloat

 @param sourceString <#sourceString description#>
 @return <#return value description#>
 */
+ (CGFloat)stringToFloat:(NSString*)sourceString;

/**
 字符串转double

 @param sourceString <#sourceString description#>
 @return <#return value description#>
 */
+ (double)stringToDouble:(NSString*)sourceString;


/**
  bool转字符串

 @param boolValue <#boolValue description#>
 @return <#return value description#>
 */
+ (NSString *)boolToString:(BOOL)boolValue;

/**
 int转字符串

 @param intValue <#intValue description#>
 @return <#return value description#>
 */
+ (NSString *)intToString:(NSInteger)intValue;

/**
 float转字符串

 @param floatValue <#floatValue description#>
 @return <#return value description#>
 */
+ (NSString *)floatToString:(CGFloat)floatValue;

/**
 double转字符串

 @param doubleValue <#doubleValue description#>
 @return <#return value description#>
 */
+ (NSString *)doubleToString:(double)doubleValue;


/**
 字符串是否合法邮箱

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsValidateEmailAddress:(NSString *)string;

/**
 字符串是否合法手机号码

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringISValidateMobilePhone:(NSString *)string;

/**
 字符串是否合法座机

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsValidatePhone:(NSString *)string;

/**
 字符串是否合法邮政编码

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsValidateMailCode:(NSString *)string;

/**
 字符串是否只有中文字符

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsAllChineseWord:(NSString *)string;

/**
 字符串是否合法车牌号

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringISValidateCarNumber:(NSString *)string;

/**
 字符串是否合法url

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringIsValidateUrl:(NSString *)string;

/**
 字符串是否合法身份证号

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringISValidatePersonCardNumber:(NSString *)string;

/**
 字符串是否只有英文字符

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringJustHasNumberAndCharacter:(NSString *)string;

/**
 字符串是否纯数字

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringJustHasNumber:(NSString *)string;

/**
 字符串是否只包含字符，中文，数字

 @param string <#string description#>
 @return <#return value description#>
 */
+ (BOOL)stringChineseNumberCharacterOnly:(NSString *)string;

+ (BOOL)sourceString:(NSString*)sourceString regexMatch:(NSString *)regexString;

/**
 从文件中读取出字符串

 @param path <#path description#>
 @return <#return value description#>
 */
+ (NSString*)stringFromFile:(NSString*)path;

/**
 获取一个当前时间戳字符串

 @return <#return value description#>
 */
+ (NSString*)currentTimeStampString;

/**
 从归档路径读取出字符串

 @param filePath <#filePath description#>
 @return <#return value description#>
 */
+ (NSString *)unarchieveFromPath:(NSString *)filePath;

/**
 将字符串转为MD5字符串

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSString *)MD5:(NSString *)string;

/**
 返回去除字符串首的空格的字符串

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSString *)stringByTrimingLeadingWhiteSpace:(NSString *)string;

/**
 返回去除字符串结尾的空格的字符串

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSString *)stringByTrimingTailingWhiteSpace:(NSString *)string;

/**
 返回去除字符串中所有的空格的字符串

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSString *)stringByTrimingWhiteSpace:(NSString *)string;

/**
 Url编码对象,通常是字符串,返回编码后的字符串

 @param object <#object description#>
 @return <#return value description#>
 */
+ (NSString *)urlEncode:(id)object;

/**
 Url编码一个字典,键值对用@链接,返回编码后的字符串

 @param dict <#dict description#>
 @return <#return value description#>
 */
+ (NSString *)encodeStringFromDict:(NSDictionary *)dict;

/**
 返回字符串范围

 @param string <#string description#>
 @return <#return value description#>
 */
+ (NSRange)stringRange:(NSString *)string;

@end
