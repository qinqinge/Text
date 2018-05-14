//
//  XMHQQuickUIMacrocDefine.h
//  HQChat
//
//  Created by PX_Mac on 2018/3/26.
//  Copyright © 2018年 T59Team. All rights reserved.
//

/**
 *  UI相关的快速访问工具宏
 */

#import "XMHQQuickUIUitil.h"

/**
 *  将0-360的角度转换为圆角度表示
 *
 *  @param degree
 *
 *  @return 真实的角度表示
 */
#define XMHQDegreeToRadius(degree) (degree * M_PI / 180)

/**
 *  获取角度对应的NSNumber对象
 */
#define XMHQDegreeToRadiusValue(degree) @(XMHQDegreeToRadius(degree))

/**
 *  快速得到RGB颜色
 */
#define XMHQQuickRGBColor(redValue,greenValue,blueValue) [XMHQQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue]

/**
 *  获取带alpha值的RGB颜色
 */
#define XMHQQuickRGBColorAlpha(redValue,greenValue,blueValue,alpha) [XMHQQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue withAlpha:alpha]

/**
 *  从16进制字符中得到颜色
 */
#define XMHQQuickHexColor(hexString) [XMHQQuickUIUitil colorFromHexString:hexString]

/**
 *  从一个View获取翻转的文本绘制的图形上下文CGContextRef
 */
#define XMHQContextRefTextMatrixFromView(aView) [XMHQQuickUIUitil getTextCTMContextRefFromView:aView]

/**
 *  快速获取图片
 */
#define XMHQQuickImage(imageName) [XMHQQuickUIUitil imageWithName:imageName]

/**
 *  修正图片方向
 *
 */
#define XMHQFixOretationImage(aImage) [XMHQQuickUIUitil fixOretationImage:aImage]

/**
 *  创建圆角图片
 */
#define XMHQRoundCornerImage(aImage,cornerSize,boardSize) [XMHQQuickUIUitil createRoundCornerImage:aImage withCornerSize:cornerSize withBoardSize:boardSize]

/**
 *  组合图片
 */
#define XMHQQuickCombineImage(backgroundImage,maskImage) [XMHQQuickUIUitil combineImage:backgroundImage withMaskImage:maskImage]

/**
 *  返回圆形图片,默认用白色作为遮挡颜色
 */
#define XMHQCycleImage(aImage) [XMHQQuickUIUitil roundImage:aImage]

/**
 *  截取Rect部分的图片
 */
#define XMHQPartImage(aImage,rect) [XMHQQuickUIUitil partImage:aImage withRect:rect]

/**
 *  返回纠正方向后得图片
 */
#define XMHQCorrectOrientationImage(aImage) [XMHQQuickUIUitil correctImageOrientation:aImage]

/**
 *  返回一个纠正了方向并且进行了scale倍数缩放的图片
 */
#define XMHQCorrectOrientationImageWithScale(aImage,scale) [XMHQQuickUIUitil correctImageOrientation:aImage withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后并且进行了scale倍数缩放的fullResolutionImage图片
 */
#define XMHQCorrectOrientationALAssetFullResolutionImageWithScale(aALAsset,scale) [XMHQQuickUIUitil  correctFullSolutionImageFromALAsset:aALAsset withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后的fullResolutionImage图片
 */
#define XMHQCorrectOrientationALAssetFullResolutionImage(aALAsset) [XMHQQuickUIUitil correctFullSolutionImageFromALAsset:aALAsset]

/**
 *  获取一个View的截图
 */
#define XMHQScreenShotFromView(aView) [XMHQQuickUIUitil viewScreenShot:aView]

/**
 *  获取一个Layer的截图
 */
#define XMHQScreenShotFromLayer(aLayer) [XMHQQuickUIUitil layerScreenShot:aLayer]

/**
 *  按照aColor颜色创建一张size大小的图片
 *
 */
#define XMHQQuickImageByColorWithSize(aColor,size) [XMHQQuickUIUitil imageForColor:aColor withSize:size]

/**
 *  创建一个线性渐变图片
 *
 *  @param colors    按顺序渐变颜色数组
 *  @param size      需要创建的图片的大小
 *
 *  最大只支持三种颜色，起始位置颜色，中间颜色，结束颜色
 *  依次位置为 0,0.5,1.0
 *  超过3种颜色也只取前三种颜色为渐变色
 *
 *  @return 返回渐变颜色图片
 */
#define XMHQLinearGradientImageByColorsWithSize(colors,size) [XMHQQuickUIUitil gradientLinearImageFromColors:colors withImageSize:size]

/**
 *  创建线性渐变图片
 *
 *  @param fromColor 起始发颜色
 *  @param toColor   中间颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define XMHQLinearGradientImageFromColorToColor(fromColor,toColor,size) [XMHQQuickUIUitil gradientLinearImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param fromColor 中心颜色
 *  @param toColor   外层颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define XMHQRadialGradientImageFromColorToColor(fromColor,toColor,size) [XMHQQuickUIUitil gradientRadialImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param colors 颜色值数组
 *  @param size 图片大小
 *
 *  @return 渐变图片
 */
#define XMHQRadialGradientImageByColorsWithSize(colors,size) [XMHQQuickUIUitil gradientRadialImageFromColors:colors withImageSize:size]

/**
 *  创建网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define XMHQGridImageByLineGapAndColorWithSize(lineGap,color,size) [XMHQQuickUIUitil gridImageByHoriLineGap:lineGap withVerticalLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建水平网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define XMHQGridImageHorizByLineGapAndColorWithSize(lineGap,color,size) [XMHQQuickUIUitil gridImageHorizonByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建垂直网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define XMHQGridImageVerticalByLineGapAndColorWithSize(lineGap,color,size) [XMHQQuickUIUitil gridImageVerticalByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  快速从文件夹读取图片
 */
#define XMHQQuickImageByFilePath(filePath) [XMHQQuickUIUitil imageWithFilePath:filePath]

/**
 *  快速从归档路径读取图片
 */
#define XMHQQuickUnArchievedImage(filePath) [XMHQQuickUIUitil imageUnArchievedFromFilePath:filePath]

/**
 *  获取拉伸的图片
 *
 *  @param image      原图片
 *  @param leftOffset 左边起始位置
 *  @param topOffset  顶部起始位置
 *
 *  @return 返回拉伸后的图片
 */
#define XMHQImageStrecth(image,leftOffset,topOffset) [XMHQQuickUIUitil stretchImage:image withTopOffset:topOffset withLeftOffset:leftOffset]

/**
 *  获取重设大小拉伸后的图片
 *
 *  @param image  原图片
 *  @param top    顶部起始位置
 *  @param bottom 底部起始位置
 *  @param left   左边起始位置
 *  @param right  右边起始位置
 *
 *  @return 重设大小拉伸后后的图片
 */
#define XMHQImageResize(image,top,bottom,left,right) [XMHQQuickUIUitil resizeImage:image withEdgeTop:top withEdgeBottom:bottom withEdgeLeft:left withEdgeRight:right]

/**
 *  以duration持续时间执行一个UIView动画block
 */
#define XMHQAnimationWithDuration(duration,block) [XMHQQuickUIUitil animationDuration:duration action:block]

/**
 *  延迟second秒，以duration持续时间执行一个UIView动画block
 */
#define XMHQAnimationDelayWithDuration(second,duration,block) [XMHQQuickUIUitil animationDelay:second animationDuration:duration action:block]

/**
 *  默认隐藏显示视图动画
 */
#define XMHQAnimationHiddenShowView(view) [XMHQQuickUIUitil defaultHiddenShowView:view]

/**
 *  指定duration时长隐藏显示动画
 */
#define XMHQAnimationHiddenShowViewDuration(view,duration) [XMHQQuickUIUitil hiddenShowView:view withDuration:duration]

/**
 *  默认显示隐藏视图动画
 */
#define XMHQAnimationShowHiddenView(view) [XMHQQuickUIUitil defaultShowHiddenView:view]

/**
 *  指定duration时长显示隐藏动画
 */
#define XMHQAnimationShowHiddenViewDuration(view,duration) [XMHQQuickUIUitil showHiddenView:view withDuration:duration]

/**
 *  默认隐藏视图动画
 */
#define XMHQAnimationHiddenView(view) [XMHQQuickUIUitil defaultHiddenView:view]

/**
 *  指定duration时长隐藏动画
 */
#define XMHQAnimationHiddenViewDuration(view,duration) [XMHQQuickUIUitil hiddenView:view withDuration:duration]

/**
 *  默认显示视图动画
 */
#define XMHQAnimationShowView(view) [XMHQQuickUIUitil defaultShowView:view]

/**
 *  指定duration时长显示视图动画
 */
#define XMHQAnimationShowViewDuration(view,duration) [XMHQQuickUIUitil showView:view withDuration:duration]

/**
 *  指定duration时间长度，从当前视图alpha到目标alpha
 */
#define XMHQAnimationShowAlphaViewDuration(view,alpha,duration) [XMHQQuickUIUitil showView:view finalAlpha:alpha withDuration:duration]

/**
 *  移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake
 */
#define XMHQAnimationMoveViewRect(view,rect,duration) [XMHQQuickUIUitil moveView:view newRect:rect withDuration:duration]

/**
 *  x轴增量移动动画
 */
#define XMHQAnimationMoveViewX(view,xDetal,duration) [XMHQQuickUIUitil moveViewX:view originXDetal:xDetal withDuration:duration]

/**
 *  y轴增量移动动画
 */
#define XMHQAnimationMoveViewY(view,yDetal,duration) [XMHQQuickUIUitil moveViewY:view originYDetal:yDetal withDuration:duration]

/**
 *  width增量变化动画
 */
#define XMHQAnimationMoveViewWidth(view,detal,duration) [XMHQQuickUIUitil moveViewWidth:view widthDetal:detal withDuration:duration]

/**
 *  height增量变化动画
 */
#define XMHQAnimationMoveViewHeight(view,detal,duration) [XMHQQuickUIUitil moveViewHeight:view heightDetal:detal withDuration:duration]

/**
 *  移动到指定x轴点动画
 */
#define XMHQAnimationMoveViewToX(view,toX,duration) [XMHQQuickUIUitil moveViewToX:view toOriginX:toX withDuration:duration]

/**
 *  移动到指定y轴点动画
 */
#define XMHQAnimationMoveViewToY(view,toY,duration) [XMHQQuickUIUitil moveViewToY:view toOriginY:toY withDuration:duration]

/**
 *  指定视图width到目标宽度的动画
 */
#define XMHQAnimationMoveViewToWidth(view,width,duration) [XMHQQuickUIUitil moveViewToWidth:view toWidth:width withDuration:duration]

/**
 *  指定视图height到目标高度的动画
 */
#define XMHQAnimationMoveViewToHeight(view,height,duration) [XMHQQuickUIUitil moveViewToHeight:view toHeight:height withDuration:duration]

/**
 *  移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake
 */
#define XMHQAnimationMoveViewCenter(view,center,duration) [XMHQQuickUIUitil moveViewCenter:view newCenter:center withDuration:duration]

/**
 *  缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake
 */
#define XMHQAnimationMoveViewSize(view,size,duration) [XMHQQuickUIUitil moveViewSize:view newSize:size withDuration:duration]

/**
 *  从左开始翻转视图动画
 */
#define XMHQAnimationLeftFlipView(view,duration,block,completion) [XMHQQuickUIUitil flipViewFromLeft:view withDuration:duration action:block completionBlock:completion]

/**
 *  从右开始翻转视图动画
 */
#define XMHQAnimationRightFlipView(view,duration,block,completion) [XMHQQuickUIUitil flipViewFromRight:view withDuration:duration action:block completionBlock:completion]

/**
 *  从顶部开始翻转视图动画
 */
#define XMHQAnimationTopFlipView(view,duration,block,completion) [XMHQQuickUIUitil flipViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  从底部开始翻转视图动画
 */
#define XMHQAnimationBottomFlipView(view,duration,block,completion) [XMHQQuickUIUitil flipViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向上翻页动画
 */
#define XMHQAnimationPageUpView(view,duration,block,completion) [XMHQQuickUIUitil pageUpViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向下翻页动画
 */
#define XMHQAnimationPageDownView(view,duration,block,completion) [XMHQQuickUIUitil pageDownViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  立体翻转动画
 */
#define XMHQAnimationCubeView(view,duration,block,completion) [XMHQQuickUIUitil cubeView:view withDuration:duration  action:block completionBlock:completion]

/**
 *  绕X轴倾斜视图degree角度  degree范围:0-360
 */
#define XMHQAnimationViewRotateX(view,degree,duration) [XMHQQuickUIUitil rotationViewX:view withDegree:degree withDuration:duration]

/**
 *  绕Y轴倾斜视图degree角度  degree范围:0-360
 */
#define XMHQAnimationViewRotateY(view,degree,duration) [XMHQQuickUIUitil rotationViewY:view withDegree:degree withDuration:duration]

/**
 *  绕Z轴倾斜视图degree角度  degree范围:0-360
 */
#define XMHQAnimationViewRotateZ(view,degree,duration) [XMHQQuickUIUitil rotationViewZ:view withDegree:degree withDuration:duration]

/**
 *  translationX动画
 */
#define XMHQAnimationViewTranslationX(view,originX,duration) [XMHQQuickUIUitil translationViewX:view withOriginX:originX withDuration:duration]

/**
 *  translationY动画
 */
#define XMHQAnimationViewTranslationY(view,originY,duration) [XMHQQuickUIUitil translationViewY:view withOriginY:originY withDuration:duration]

/**
 *  translationZ动画
 */
#define XMHQAnimationViewTranslationZ(view,originZ,duration) [XMHQQuickUIUitil translationViewZ:view withOriginZ:originZ withDuration:duration]

/**
 *  scaleX动画
 */
#define XMHQAnimationViewScaleX(view,size,duration) [XMHQQuickUIUitil scaleViewX:view withScaleSize:size withDuration:duration]

/**
 *  scaleY动画
 */
#define XMHQAnimationViewScaleY(view,size,duration) [XMHQQuickUIUitil scaleViewY:view withScaleSize:size withDuration:duration]

/**
 *  scaleZ动画
 */
#define XMHQAnimationViewScaleZ(view,size,duration) [XMHQQuickUIUitil scaleViewZ:view withScaleSize:size withDuration:duration]

/**
 *  将视图绕X轴倾斜degree角度，degree范围 -360到360
 */
#define XMHQView3DRotateX(view,degree) [XMHQQuickUIUitil view3DRotateX:view withDegree:degree]

/**
 *  将视图绕Y轴倾斜degree角度，degree范围 -360到360
 */
#define XMHQView3DRotateY(view,degree) [XMHQQuickUIUitil view3DRotateY:view withDegree:degree]

/**
 *  将视图绕Z轴倾斜degree角度，degree范围 -360到360
 */
#define XMHQView3DRotateZ(view,degree) [XMHQQuickUIUitil view3DRotateZ:view withDegree:degree]

/**
 *  X轴变换
 */
#define XMHQView3DTranslateX(view,value) [XMHQQuickUIUitil view3DTranslateX:view withValue:value]

/**
 *  Y轴变换
 */
#define XMHQView3DTranslateY(view,value) [XMHQQuickUIUitil view3DTranslateY:view withValue:value]

/**
 *  Z轴变换
 */
#define XMHQView3DTranslateZ(view,value) [XMHQQuickUIUitil view3DTranslateZ:view withValue:value]

/**
 *  X轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define XMHQView3DScaleX(view,value) [XMHQQuickUIUitil view3DScaleX:view withValue:value]

/**
 *  Y轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define XMHQView3DScaleY(view,value) [XMHQQuickUIUitil view3DScaleY:view withValue:value]

/**
 *  Z轴方向缩放,整体比例变换时，也就是m11（sx）== m22（sy）时，若m33（sz）>1，图形整体缩小，若0<1，
 *  图形整体放大，若m33（sz）<0，发生关于原点的对称等比变换
 */
#define XMHQView3DScaleZ(view,value) [XMHQQuickUIUitil view3DScaleZ:view withValue:value]

/**
 *  重复某个block
 */
#define XMHQRepeatAction(repeatBlock) [XMHQQuickUIUitil repeatDoAction:repeatBlock]

/**
 *  延迟second秒开始重复某个动作
 */
#define XMHQRepeatActionDelay(second,repeatBlock) [XMHQQuickUIUitil repeatDoAction:repeatBlock withDelay:second]

/**
 *  重复某个动作duration时长
 */
#define XMHQRepeatActionDuration(duration,repeatBlock) [XMHQQuickUIUitil repeatDoAction:repeatBlock withRepeatDuration:duration]

/**
 *  延迟某个动作second秒，并且只执行duration时长
 */
#define XMHQRepeatActionDelayDuration(second,duration,repeatBlock) [XMHQQuickUIUitil repeatDoAction:repeatBlock withDelay:second withRepeatDuration:duration]

/**
 *  根据blockIdentifier停止某个block重复动作
 */
#define XMHQStopRepeatAction(blockIdentifier) [XMHQQuickUIUitil stopRepeatAction:blockIdentifier]

/**
 *  X轴上以moveXDetal偏移量一个来回,moveXDetal > 0
 */
#define XMHQAnimationViewXCycle(view,moveXDetal,duration) [XMHQQuickUIUitil animationViewXCycle:view withXMoveDetal:moveXDetal withDuration:duration]

/**
 *  Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0
 */
#define XMHQAnimationViewYCycle(view,moveYDetal,duration) [XMHQQuickUIUitil animationViewYCycle:view withYMoveDetal:moveYDetal withDuration:duration]

/**
 *  Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0
 */
#define XMHQAnimationViewZCycle(view,moveZDetal,duration) [XMHQQuickUIUitil animationViewZCycle:view withZMoveDetal:moveZDetal withDuration:duration]

/**
 *  绕X轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define XMHQAnimationViewRotateXCycle(view,degree,duration) [XMHQQuickUIUitil animationViewRotateXCycle:view withXRotateDetal:degree withDuration:duration]

/**
 *  绕Y轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define XMHQAnimationViewRotateYCycle(view,degree,duration) [XMHQQuickUIUitil animationViewRotateYCycle:view withYRotateDetal:degree withDuration:duration]

/**
 *  绕Z轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define XMHQAnimationViewRotateZCycle(view,degree,duration) [XMHQQuickUIUitil animationViewRotateZCycle:view withZRotateDetal:degree withDuration:duration]

/**
 *  fromValue到toValue的position移动CAAnimation
 *  animationKey 为 @"XMHQ_animation_position"
 *
 */
#define XMHQCAAnimationPosition(aLayer,fromValue,toValue,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionCenterWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount  withDuration:duration]

/**
 *  fromValue到toValue的position.x移动CAAnimation
 *  animationKey 为 @"XMHQ_animation_position.x"
 */
#define XMHQCAAnimationPositionX(aLayer,fromValue,toValue,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionXWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  fromValue到toValue的position.y移动CAAnimation
 *  animationKey 为 @"XMHQ_animation_position.y"
 */
#define XMHQCAAnimationPositionY(aLayer,fromValue,toValue,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionYWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion的CAAnimation
 *  animationKey 为 @"XMHQ_animation_by_position"
 */
#define XMHQCAAnimationPositionByValue(aLayer,value,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionCenterByValue:value  withRepeatCount:repeatCount  withDuration:duration]

/**
 *  按照value移动postion.x的CAAnimation
 *  animationKey 为 @"XMHQ_animation_by_position.x"
 */
#define XMHQCAAnimationPositionXByValue(aLayer,value,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionXByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion.y的CAAnimation
 *  animationKey 为 @"XMHQ_animation_by_position.y"
 */
#define XMHQCAAnimationPositionYByValue(aLayer,value,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer positionYByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照指定路径做动画
 */
#define XMHQAnimationPathByValue(aLayer,aPath,value,repeatCount,duration) [XMHQQuickUIUitil animationLayer:aLayer path:aPath ByValue:value  withRepeatCount:repeatCount  withDuration:duration]
