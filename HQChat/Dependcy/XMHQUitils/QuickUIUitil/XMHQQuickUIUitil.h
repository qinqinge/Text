//
//  XMHQQuickUIUitil.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <UIKit/UIKit.h>

typedef void (^XMHQQuickAnimationCompletionBlock) (BOOL finished);

@interface XMHQQuickUIUitil : NSObject

#pragma mark - Color 颜色设置
/**
 快速得到RGB颜色

 @param red <#red description#>
 @param green <#green description#>
 @param blue <#blue description#>
 @return <#return value description#>
 */
+ (UIColor *)colorFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

/**
 获取带alpha值的RGB颜色

 @param red <#red description#>
 @param green <#green description#>
 @param blue <#blue description#>
 @param alpha <#alpha description#>
 @return <#return value description#>
 */
+ (UIColor *)colorFromRed:(CGFloat)red green:(CGFloat)green
                     blue:(CGFloat)blue withAlpha:(CGFloat)alpha;

/**
 从16进制字符中得到颜色

 @param hexString <#hexString description#>
 @return <#return value description#>
 */
+ (UIColor *)colorFromHexString:(NSString *)hexString;


#pragma mark - Image  图片处理
/**
 快速获取图片

 @param imageName <#imageName description#>
 @return <#return value description#>
 */
+ (UIImage *)imageWithName:(NSString *)imageName;

/**
 快速从文件夹读取图片

 @param filePath <#filePath description#>
 @return <#return value description#>
 */
+ (UIImage *)imageWithFilePath:(NSString *)filePath;

/**
 快速从归档路径读取图片

 @param filePath <#filePath description#>
 @return <#return value description#>
 */
+ (UIImage *)imageUnArchievedFromFilePath:(NSString *)filePath;

/**
  返回圆形图片,默认用白色作为遮挡颜色

 @param aImage <#aImage description#>
 @return <#return value description#>
 */
+ (UIImage *)roundImage:(UIImage *)aImage;

/**
  截取Rect部分的图片

 @param aImage <#aImage description#>
 @param partRect <#partRect description#>
 @return <#return value description#>
 */
+ (UIImage *)partImage:(UIImage *)aImage withRect:(CGRect)partRect;

/**
 返回纠正方向后得图片

 @param aImage <#aImage description#>
 @return <#return value description#>
 */
+ (UIImage *)correctImageOrientation:(UIImage *)aImage;

/**
 返回一个纠正了方向并且进行了scale倍数缩放的图片

 @param aImage <#aImage description#>
 @param scale <#scale description#>
 @return <#return value description#>
 */
+ (UIImage *)correctImageOrientation:(UIImage *)aImage withScaleSize:(CGFloat)scale;

/**
 返回ALAsset纠正方向后的fullResolutionImage图片

 @param asset <#asset description#>
 @return <#return value description#>
 */
+ (UIImage *)correctFullSolutionImageFromALAsset:(ALAsset *)asset;

/**
 返回ALAsset纠正方向后并且进行了scale倍数缩放的fullResolutionImage图片

 @param asset <#asset description#>
 @param scaleSize <#scaleSize description#>
 @return <#return value description#>
 */
+ (UIImage *)correctFullSolutionImageFromALAsset:(ALAsset *)asset
                                   withScaleSize:(CGFloat)scaleSize;

/**
 组合图片

 @param backgroundImage <#backgroundImage description#>
 @param maskImage <#maskImage description#>
 @return <#return value description#>
 */
+ (UIImage *)combineImage:(UIImage *)backgroundImage withMaskImage:(UIImage *)maskImage;

/**
 修正图片方向

 @param aImage <#aImage description#>
 @return <#return value description#>
 */
+ (UIImage *)fixOretationImage:(UIImage *)aImage;

/**
 创建圆角图片

 @param aImage <#aImage description#>
 @param cornerSize <#cornerSize description#>
 @param boardSize <#boardSize description#>
 @return <#return value description#>
 */
+ (UIImage *)createRoundCornerImage:(UIImage *)aImage
                     withCornerSize:(NSInteger)cornerSize
                      withBoardSize:(NSInteger)boardSize;

#pragma mark - 根据颜色创建图片
/* 根据颜色创建图片 */

/**
 按照aColor颜色创建一张size大小的图片

 @param aColor <#aColor description#>
 @param aSize <#aSize description#>
 @return <#return value description#>
 */
+ (UIImage *)imageForColor:(UIColor*)aColor withSize:(CGSize)aSize;

/**
 创建线性渐变图片

 @param fromColor 起始发颜色
 @param toColor 中间颜色
 @param size 图片大小
 @return 渐变图片g
 */
+ (UIImage *)gradientLinearImageFromColor:(UIColor *)fromColor
                              withToColor:(UIColor *)toColor
                            withImageSize:(CGSize)size;

/**
 创建一个线性渐变图片
 
 最大只支持三种颜色，起始位置颜色，中间颜色，结束颜色
 依次位置为 0,0.5,1.0
 超过3种颜色也只取前三种颜色为渐变色
 
 @param colors 按顺序渐变颜色数组
 @param size 需要创建的图片的大小
 @return 返回渐变颜色图片
 */
+ (UIImage *)gradientLinearImageFromColors:(NSArray *)colors withImageSize:(CGSize)size;

/**
 创建球形渐变图片

 @param fromColor 中心颜色
 @param toColor 外层颜色
 @param size 图片大小
 @return 渐变图片
 */
+ (UIImage *)gradientRadialImageFromColor:(UIColor *)fromColor
                              withToColor:(UIColor *)toColor
                            withImageSize:(CGSize)size;

/**
 创建球形渐变图片

 @param colors 颜色值数组
 @param size 图片大小
 @return 渐变图片
 */
+ (UIImage *)gradientRadialImageFromColors:(NSArray *)colors withImageSize:(CGSize)size;

/**
 创建水平网格线图片

 @param lineGap 格线距离
 @param lineColor 格线颜色
 @param size 图片大小
 @return 网格线图片
 */
+ (UIImage *)gridImageHorizonByLineGap:(CGFloat)lineGap
                         withLineColor:(UIColor *)lineColor
                         withImageSize:(CGSize)size;

/**
 创建垂直网格线图片

 @param lineGap 格线距离
 @param lineColor 格线颜色
 @param size 图片大小
 @return 网格线图片
 */
+ (UIImage *)gridImageVerticalByLineGap:(CGFloat)lineGap
                          withLineColor:(UIColor *)lineColor
                          withImageSize:(CGSize)size;

/**
 创建网格线图片

 @param hLineGap 格线距离
 @param vLineGap 格线颜色
 @param lineColor 格线颜色
 @param size 图片大小
 @return 网格线图片
 */
+ (UIImage *)gridImageByHoriLineGap:(CGFloat)hLineGap
                withVerticalLineGap:(CGFloat)vLineGap
                      withLineColor:(UIColor *)lineColor
                      withImageSize:(CGSize)size;

#pragma mark - 图片拉伸
/* 图片拉伸 */

/**
 获取拉伸的图片

 @param originImage 原图片
 @param top 顶部起始位置
 @param left 左边起始位置
 @return 返回拉伸后的图片
 */
+ (UIImage *)stretchImage:(UIImage *)originImage
            withTopOffset:(CGFloat)top
           withLeftOffset:(CGFloat)left;

/**
 获取重设大小拉伸后的图片

 @param originImage 原图片
 @param top 顶部起始位置
 @param bottom 底部起始位置
 @param left 左边起始位置
 @param right 右边起始位置
 @return 重设大小拉伸后后的图片
 */
+ (UIImage *)resizeImage:(UIImage *)originImage
             withEdgeTop:(CGFloat)top
          withEdgeBottom:(CGFloat)bottom
            withEdgeLeft:(CGFloat)left
           withEdgeRight:(CGFloat)right;

#pragma mark - 动画处理

#pragma mark 以duration持续时间执行一个UIView动画block
/**
  以duration持续时间执行一个UIView动画block

 @param duration <#duration description#>
 @param block <#block description#>
 */
+ (void)animationDuration:(NSTimeInterval)duration action:(dispatch_block_t)block;

#pragma mark 延迟second秒，以duration持续时间执行一个UIView动画block
/**
 延迟second秒，以duration持续时间执行一个UIView动画block

 @param delaySecond <#delaySecond description#>
 @param duration <#duration description#>
 @param block <#block description#>
 */
+ (void)animationDelay:(NSTimeInterval )delaySecond
     animationDuration:(NSTimeInterval)duration
                action:(dispatch_block_t)block;

+ (void)animationView:(UIView *)view
         withDuration:(NSTimeInterval)duration
               action:(dispatch_block_t)block
          withOptions:(UIViewAnimationOptions)options
      completionBlock:(XMHQQuickAnimationCompletionBlock)completion;


+ (void)animationView:(UIView *)view
                delay:(NSTimeInterval)delaySecond
    animationDuration:(NSTimeInterval)duration
               action:(dispatch_block_t)block
          withOptions:(UIViewAnimationOptions)options
      completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 默认隐藏显示视图动画
/**
 默认隐藏显示视图动画

 @param view <#view description#>
 */
+ (void)defaultHiddenShowView:(UIView *)view;

#pragma mark 默认显示隐藏视图动画
/**
 默认显示隐藏视图动画

 @param view <#view description#>
 */
+ (void)defaultShowHiddenView:(UIView *)view;

#pragma mark 默认隐藏视图动画
/**
 默认隐藏视图动画

 @param view <#view description#>
 */
+ (void)defaultHiddenView:(UIView *)view;

#pragma mark 默认显示视图动画
/**
 默认显示视图动画

 @param view <#view description#>
 */
+ (void)defaultShowView:(UIView *)view;

#pragma mark 指定duration时长隐藏动画
/**
 指定duration时长隐藏动画

 @param view <#view description#>
 @param duration <#duration description#>
 */
+ (void)hiddenView:(UIView *)view withDuration:(NSTimeInterval)duration;

#pragma mark 指定duration时长显示视图动画
/**
 指定duration时长显示视图动画

 @param view <#view description#>
 @param duration <#duration description#>
 */
+ (void)showView:(UIView *)view withDuration:(NSTimeInterval)duration;

#pragma mark 指定duration时间长度，从当前视图alpha到目标alpha
/**
 指定duration时间长度，从当前视图alpha到目标alpha

 @param view <#view description#>
 @param alpha <#alpha description#>
 @param duration <#duration description#>
 */
+ (void)showView:(UIView *)view finalAlpha:(CGFloat)alpha withDuration:(NSTimeInterval)duration;

#pragma mark 指定duration时长隐藏显示动画
/**
 指定duration时长隐藏显示动画

 @param view <#view description#>
 @param duration <#duration description#>
 */
+ (void)hiddenShowView:(UIView *)view withDuration:(NSTimeInterval)duration;

#pragma mark 指定duration时长显示隐藏动画
/**
 指定duration时长显示隐藏动画

 @param view <#view description#>
 @param duration <#duration description#>
 */
+ (void)showHiddenView:(UIView *)view withDuration:(NSTimeInterval)duration;

#pragma mark 移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake
/**
 移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake

 @param view <#view description#>
 @param rect <#rect description#>
 @param duration <#duration description#>
 */
+ (void)moveView:(UIView *)view newRect:(CGRect)rect withDuration:(NSTimeInterval)duration;

#pragma mark x轴增量移动动画
/**
 x轴增量移动动画

 @param view <#view description#>
 @param moveX <#moveX description#>
 @param duration <#duration description#>
 */
+ (void)moveViewX:(UIView *)view
     originXDetal:(CGFloat)moveX
     withDuration:(NSTimeInterval)duration;

#pragma mark y轴增量移动动画
/**
 y轴增量移动动画

 @param view <#view description#>
 @param moveY <#moveY description#>
 @param duration <#duration description#>
 */
+ (void)moveViewY:(UIView *)view
     originYDetal:(CGFloat)moveY
     withDuration:(NSTimeInterval)duration;

#pragma mark width增量变化动画
/**
  width增量变化动画

 @param view <#view description#>
 @param moveWidth <#moveWidth description#>
 @param duration <#duration description#>
 */
+ (void)moveViewWidth:(UIView *)view
           widthDetal:(CGFloat)moveWidth
         withDuration:(NSTimeInterval)duration;

#pragma mark height增量变化动画
/**
 height增量变化动画

 @param view <#view description#>
 @param moveHeight <#moveHeight description#>
 @param duration <#duration description#>
 */
+ (void)moveViewHeight:(UIView *)view
           heightDetal:(CGFloat)moveHeight
          withDuration:(NSTimeInterval)duration;

#pragma mark 移动到指定x轴点动画
/**
 移动到指定x轴点动画

 @param view <#view description#>
 @param moveX <#moveX description#>
 @param duration <#duration description#>
 */
+ (void)moveViewToX:(UIView *)view
          toOriginX:(CGFloat)moveX
       withDuration:(NSTimeInterval)duration;

#pragma mark 移动到指定y轴点动画
/**
 移动到指定y轴点动画

 @param view <#view description#>
 @param moveY <#moveY description#>
 @param duration <#duration description#>
 */
+ (void)moveViewToY:(UIView *)view
          toOriginY:(CGFloat)moveY
       withDuration:(NSTimeInterval)duration;

#pragma mark 指定视图width到目标宽度的动画
/**
 指定视图width到目标宽度的动画

 @param view <#view description#>
 @param moveWidth <#moveWidth description#>
 @param duration <#duration description#>
 */
+ (void)moveViewToWidth:(UIView *)view
                toWidth:(CGFloat)moveWidth
           withDuration:(NSTimeInterval)duration;

#pragma mark 指定视图height到目标高度的动画
/**
 指定视图height到目标高度的动画

 @param view <#view description#>
 @param moveHeight <#moveHeight description#>
 @param duration <#duration description#>
 */
+ (void)moveViewToHeight:(UIView *)view
                toHeight:(CGFloat)moveHeight
            withDuration:(NSTimeInterval)duration;

#pragma mark 移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake
/**
 移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake

 @param view <#view description#>
 @param center <#center description#>
 @param duration <#duration description#>
 */
+ (void)moveViewCenter:(UIView *)view
             newCenter:(CGPoint)center
          withDuration:(NSTimeInterval)duration;

#pragma mark 缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake
/**
 缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake

 @param view <#view description#>
 @param size <#size description#>
 @param duration <#duration description#>
 */
+ (void)moveViewSize:(UIView *)view
             newSize:(CGSize)size
        withDuration:(NSTimeInterval)duration;

#pragma mark y轴增量移动动画
/**
 y轴增量移动动画

 @param view <#view description#>
 @param moveX <#moveX description#>
 @param moveY <#moveY description#>
 @param moveWidth <#moveWidth description#>
 @param moveHeight <#moveHeight description#>
 @param duration <#duration description#>
 */
+ (void)moveView:(UIView *)view
    originXDetal:(CGFloat)moveX
    originYDetal:(CGFloat)moveY
      widthDetal:(CGFloat)moveWidth
     heightDetla:(CGFloat)moveHeight
    withDuration:(NSTimeInterval)duration;

#pragma mark  从左开始翻转视图动画
/**
 从左开始翻转视图动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)flipViewFromLeft:(UIView *)view
            withDuration:(NSTimeInterval)duration
                  action:(dispatch_block_t)block
         completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 从右开始翻转视图动画
/**
 从右开始翻转视图动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)flipViewFromRight:(UIView *)view
             withDuration:(NSTimeInterval)duration
                   action:(dispatch_block_t)block
          completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 从顶部开始翻转视图动画
/**
 从顶部开始翻转视图动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)flipViewFromTop:(UIView *)view
           withDuration:(NSTimeInterval)duration
                 action:(dispatch_block_t)block
        completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 从底部开始翻转视图动画
/**
 从底部开始翻转视图动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)flipViewFromBottom:(UIView *)view
              withDuration:(NSTimeInterval)duration
                    action:(dispatch_block_t)block
           completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

+ (void)flipView:(UIView *)view
        fromLeft:(BOOL)isLeft
       fromRight:(BOOL)isRight
         fromTop:(BOOL)isTop
      fromBottom:(BOOL)isBottom
          action:(dispatch_block_t)block
    withDuration:(NSTimeInterval)duration
 completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 向上翻页动画
/**
 向上翻页动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)pageUpViewFromBottom:(UIView *)view
                withDuration:(NSTimeInterval)duration
                      action:(dispatch_block_t)block
             completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

+ (void)pageUpView:(UIView *)view
          fromLeft:(BOOL)isLeft
         fromRight:(BOOL)isRight
           fromTop:(BOOL)isTop
        fromBottom:(BOOL)isBottom
            action:(dispatch_block_t)block
      withDuration:(NSTimeInterval)duration
   completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 向下翻页动画
/**
 向下翻页动画

 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)pageDownViewFromTop:(UIView *)view
               withDuration:(NSTimeInterval)duration
                     action:(dispatch_block_t)block
            completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

+ (void)pageDownView:(UIView *)view
            fromLeft:(BOOL)isLeft
           fromRight:(BOOL)isRight
             fromTop:(BOOL)isTop
          fromBottom:(BOOL)isBottom
              action:(dispatch_block_t)block
        withDuration:(NSTimeInterval)duration
     completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

#pragma mark 立体翻转动画
/**
 立体翻转动画
 
 @param view <#view description#>
 @param duration <#duration description#>
 @param block <#block description#>
 @param completion <#completion description#>
 */
+ (void)cubeView:(UIView *)view
    withDuration:(NSTimeInterval)duration
          action:(dispatch_block_t)block
 completionBlock:(XMHQQuickAnimationCompletionBlock)completion;

/* CAAnimation */
#pragma mark - /* CAAnimation */
#pragma mark 绕X轴倾斜视图degree角度  degree范围:0-360
/**
 绕X轴倾斜视图degree角度  degree范围:0-360

 @param view <#view description#>
 @param degree <#degree description#>
 @param duration <#duration description#>
 */
+ (void)rotationViewX:(UIView *)view
           withDegree:(CGFloat)degree
         withDuration:(NSTimeInterval)duration;

#pragma mark 绕Y轴倾斜视图degree角度  degree范围:0-360
/**
 绕Y轴倾斜视图degree角度  degree范围:0-360

 @param view <#view description#>
 @param degree <#degree description#>
 @param duration <#duration description#>
 */
+ (void)rotationViewY:(UIView *)view
           withDegree:(CGFloat)degree
         withDuration:(NSTimeInterval)duration;

#pragma mark 绕Z轴倾斜视图degree角度  degree范围:0-360
/**
 绕Z轴倾斜视图degree角度  degree范围:0-360

 @param view <#view description#>
 @param degree <#degree description#>
 @param duration <#duration description#>
 */
+ (void)rotationViewZ:(UIView *)view
           withDegree:(CGFloat)degree
         withDuration:(NSTimeInterval)duration;

#pragma mark translationX动画
/**
 translationX动画

 @param view <#view description#>
 @param originX <#originX description#>
 @param duration <#duration description#>
 */
+ (void)translationViewX:(UIView *)view
             withOriginX:(CGFloat)originX
            withDuration:(NSTimeInterval)duration;

#pragma mark translationY动画
/**
 translationY动画

 @param view <#view description#>
 @param originY <#originY description#>
 @param duration <#duration description#>
 */
+ (void)translationViewY:(UIView *)view
             withOriginY:(CGFloat)originY
            withDuration:(NSTimeInterval)duration;

#pragma mark translationZ动画
/**
 translationZ动画

 @param view <#view description#>
 @param originZ <#originZ description#>
 @param duration <#duration description#>
 */
+ (void)translationViewZ:(UIView *)view
             withOriginZ:(CGFloat)originZ
            withDuration:(NSTimeInterval)duration;

#pragma mark scaleX动画
/**
 scaleX动画
 
 @param view <#view description#>
 @param size <#size description#>
 @param duration <#duration description#>
 */
+ (void)scaleViewX:(UIView *)view
     withScaleSize:(CGFloat)size
      withDuration:(NSTimeInterval)duration;

#pragma mark scaleY动画
/**
 scaleY动画

 @param view <#view description#>
 @param size <#size description#>
 @param duration <#duration description#>
 */
+ (void)scaleViewY:(UIView *)view
     withScaleSize:(CGFloat)size
      withDuration:(NSTimeInterval)duration;

#pragma mark scaleZ动画
/**
 scaleZ动画

 @param view <#view description#>
 @param size <#size description#>
 @param duration <#duration description#>
 */
+ (void)scaleViewZ:(UIView *)view
     withScaleSize:(CGFloat)size
      withDuration:(NSTimeInterval)duration;

+ (void)animationView:(UIView *)view
    withAnimationPath:(NSString *)path
              toValue:(NSValue *)value
         withDuration:(NSTimeInterval)duration;

/* repeat block in mainQueue*/
- (void)addRepeatBlockInfo:(NSDictionary *)blockActionInfoDict;

- (void)removeBlockInfo:(NSString *)blockIdentifier;

- (void)startRepeatAction;

/**
 重复某个block

 @param block <#block description#>
 @return <#return value description#>
 */
+ (NSString *)repeatDoAction:(dispatch_block_t)block;

/**
 延迟second秒开始重复某个动作

 @param block <#block description#>
 @param delaySecond <#delaySecond description#>
 @return <#return value description#>
 */
+ (NSString *)repeatDoAction:(dispatch_block_t)block withDelay:(NSTimeInterval)delaySecond;

/**
 重复某个动作duration时长

 @param block <#block description#>
 @param duration <#duration description#>
 @return <#return value description#>
 */
+ (NSString *)repeatDoAction:(dispatch_block_t)block
          withRepeatDuration:(NSTimeInterval)duration;

/**
 延迟某个动作second秒，并且只执行duration时长

 @param block <#block description#>
 @param delaySecond <#delaySecond description#>
 @param duration <#duration description#>
 @return <#return value description#>
 */
+ (NSString *)repeatDoAction:(dispatch_block_t)block
                   withDelay:(NSTimeInterval)delaySecond
          withRepeatDuration:(NSTimeInterval)duration;

/**
 根据blockIdentifier停止某个block重复动作

 @param blockIdentifier <#blockIdentifier description#>
 */
+ (void)stopRepeatAction:(NSString *)blockIdentifier;

/* transform */


/**
 将视图绕X轴倾斜degree角度，degree范围 -360到360

 @param view <#view description#>
 @param degree <#degree description#>
 */
+ (void)view3DRotateX:(UIView *)view withDegree:(CGFloat)degree;

/**
 将视图绕Y轴倾斜degree角度，degree范围 -360到360

 @param view <#view description#>
 @param degree <#degree description#>
 */
+ (void)view3DRotateY:(UIView *)view withDegree:(CGFloat)degree;

/**
 将视图绕Z轴倾斜degree角度，degree范围 -360到360

 @param view <#view description#>
 @param degree <#degree description#>
 */
+ (void)view3DRotateZ:(UIView *)view withDegree:(CGFloat)degree;

+ (void)view3DRotate:(UIView *)view
                   x:(CGFloat)x
                   y:(CGFloat)yState
                   z:(CGFloat)zState
          withDegree:(CGFloat)degree;

/**
 X轴变换

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DTranslateX:(UIView *)view withValue:(CGFloat)value;

/**
 Y轴变换

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DTranslateY:(UIView *)view withValue:(CGFloat)value;

/**
 Z轴变换

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DTranslateZ:(UIView *)view withValue:(CGFloat)value;

+ (void)view3DTranslate:(UIView *)view
                      x:(CGFloat)xState
                      y:(CGFloat)yState
                      z:(CGFloat)zState;

/**
 X轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DScaleX:(UIView *)view withValue:(CGFloat)value;

/**
 Y轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DScaleY:(UIView *)view withValue:(CGFloat)value;

/**
 Z轴方向缩放,整体比例变换时，也就是m11（sx）== m22（sy）时，若m33（sz）>1，图形整体缩小，若0<1，
 图形整体放大，若m33（sz）<0，发生关于原点的对称等比变换

 @param view <#view description#>
 @param value <#value description#>
 */
+ (void)view3DScaleZ:(UIView *)view withValue:(CGFloat)value;

+ (void)view3DScale:(UIView *)view
                  x:(CGFloat)xState
                  y:(CGFloat)yState
                  z:(CGFloat)zState;

/* cycle Animation */
#pragma mark X轴上以moveXDetal偏移量一个来回,moveXDetal > 0
/**
 X轴上以moveXDetal偏移量一个来回,moveXDetal > 0

 @param view <#view description#>
 @param moveX <#moveX description#>
 @param duration <#duration description#>
 */
+ (void)animationViewXCycle:(UIView *)view
             withXMoveDetal:(CGFloat)moveX
               withDuration:(NSTimeInterval)duration;

#pragma mark Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0
/**
 Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0

 @param view <#view description#>
 @param moveY <#moveY description#>
 @param duration <#duration description#>
 */
+ (void)animationViewYCycle:(UIView *)view
             withYMoveDetal:(CGFloat)moveY
               withDuration:(NSTimeInterval)duration;

#pragma mark Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0
/**
 Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0

 @param view <#view description#>
 @param moveZ <#moveZ description#>
 @param duration <#duration description#>
 */
+ (void)animationViewZCycle:(UIView *)view
             withZMoveDetal:(CGFloat)moveZ
               withDuration:(NSTimeInterval)duration;

#pragma mark 绕X轴上以degree角度为偏移量一个来回,degree: 0-360
/**
 绕X轴上以degree角度为偏移量一个来回,degree: 0-360

 @param view <#view description#>
 @param xDegree <#xDegree description#>
 @param duration <#duration description#>
 */
+ (void)animationViewRotateXCycle:(UIView *)view
                 withXRotateDetal:(CGFloat)xDegree
                     withDuration:(NSTimeInterval)duration;

#pragma mark 绕Y轴上以degree角度为偏移量一个来回,degree: 0-360
/**
 绕Y轴上以degree角度为偏移量一个来回,degree: 0-360

 @param view <#view description#>
 @param yDegree <#yDegree description#>
 @param duration <#duration description#>
 */
+ (void)animationViewRotateYCycle:(UIView *)view
                 withYRotateDetal:(CGFloat)yDegree
                     withDuration:(NSTimeInterval)duration;

#pragma mark 绕Z轴上以degree角度为偏移量一个来回,degree: 0-360
/**
 绕Z轴上以degree角度为偏移量一个来回,degree: 0-360

 @param view <#view description#>
 @param zDegree <#zDegree description#>
 @param duration <#duration description#>
 */
+ (void)animationViewRotateZCycle:(UIView *)view
                 withZRotateDetal:(CGFloat)zDegree
                     withDuration:(NSTimeInterval)duration;

#pragma mark 从一个View获取翻转的文本绘制的图形上下文CGContextRef
/**
 从一个View获取翻转的文本绘制的图形上下文CGContextRef

 @param aView <#aView description#>
 @return <#return value description#>
 */
+ (CGContextRef)getTextCTMContextRefFromView:(UIView *)aView;

#pragma mark 获取一个View的截图
/**
 获取一个View的截图

 @param aView <#aView description#>
 @return <#return value description#>
 */
+ (UIImage *)viewScreenShot:(UIView *)aView;

#pragma mark 获取一个Layer的截图
/**
 获取一个Layer的截图

 @param layer <#layer description#>
 @return <#return value description#>
 */
+ (UIImage *)layerScreenShot:(CALayer *)layer;

/* CAAnimation */
#pragma mark  fromValue到toValue的position.x移动CAAnimation animationKey 为 @"XMHQ_animation_position.x"
/**
 fromValue到toValue的position.x移动CAAnimation
 animationKey 为 @"XMHQ_animation_position.x"

 @param aLayer <#aLayer description#>
 @param fromValue <#fromValue description#>
 @param toValue <#toValue description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
positionXWithFromValue:(NSValue *)fromValue
           withToValue:(NSValue *)toValue
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

#pragma mark fromValue到toValue的position.y移动CAAnimation animationKey 为 @"XMHQ_animation_position.y"
/**
 fromValue到toValue的position.y移动CAAnimation
 animationKey 为 @"XMHQ_animation_position.y"

 @param aLayer <#aLayer description#>
 @param fromValue <#fromValue description#>
 @param toValue <#toValue description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
positionYWithFromValue:(NSValue *)fromValue
           withToValue:(NSValue *)toValue
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

#pragma mark fromValue到toValue的position移动CAAnimation animationKey 为 @"XMHQ_animation_position"
/**
 fromValue到toValue的position移动CAAnimation
 animationKey 为 @"XMHQ_animation_position"

 @param aLayer <#aLayer description#>
 @param fromValue <#fromValue description#>
 @param toValue <#toValue description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
positionCenterWithFromValue:(NSValue *)fromValue
           withToValue:(NSValue *)toValue
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

+ (void)animationLayer:(CALayer *)aLayer
                  path:(NSString *)path
         withFromValue:(NSValue *)fromValue
           withToValue:(NSValue *)toValue
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

#pragma mark 按照value移动postion.x的CAAnimation animationKey 为 @"XMHQ_animation_by_position.x"
/**
 按照value移动postion.x的CAAnimation
 animationKey 为 @"XMHQ_animation_by_position.x"

 @param aLayer <#aLayer description#>
 @param value <#value description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
      positionXByValue:(NSValue *)value
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

#pragma mark 按照value移动postion.y的CAAnimation animationKey 为 @"XMHQ_animation_by_position.y"
/**
 按照value移动postion.y的CAAnimation
 animationKey 为 @"XMHQ_animation_by_position.y"

 @param aLayer <#aLayer description#>
 @param value <#value description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
      positionYByValue:(NSValue *)value
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;


#pragma mark 按照value移动postion的CAAnimation animationKey 为 @"XMHQ_animation_by_position"
/**
 按照value移动postion的CAAnimation
 animationKey 为 @"XMHQ_animation_by_position"

 @param aLayer <#aLayer description#>
 @param value <#value description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
 positionCenterByValue:(NSValue *)value
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

#pragma mark 按照指定路径做动画
/**
 按照指定路径做动画

 @param aLayer <#aLayer description#>
 @param path <#path description#>
 @param value <#value description#>
 @param repeatCount <#repeatCount description#>
 @param duration <#duration description#>
 */
+ (void)animationLayer:(CALayer *)aLayer
                  path:(NSString *)path
               ByValue:(NSValue *)value
       withRepeatCount:(NSInteger)repeatCount
          withDuration:(NSTimeInterval)duration;

@end
