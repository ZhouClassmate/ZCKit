//
//  UIImage+ZC.h
//  ZCKit
//
//  Created by admin on 2018/9/29.
//  Copyright © 2018 Squat in house. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (ZC)

#pragma mark - usually
/** 从PDF文件数据或路径创建，只返回PDF第一页，大小等于原大小 */
+ (nullable UIImage *)imageWithPDF:(nullable id)dataOrPath;

/** 1px * 1px，不给颜色默认白色 */
+ (nullable UIImage *)imageWithColor:(nullable UIColor *)color;

/** 不给颜色默认白色 */
+ (nullable UIImage *)imageWithColor:(nullable UIColor *)color size:(CGSize)size;

/** 此图像是否具有alpha通道 */
- (BOOL)hasAlphaChannel;

/** 在指定矩形中绘制整个图像，clips确定内容是否被限制在Rect中 */
- (void)drawInRect:(CGRect)rect withContentMode:(UIViewContentMode)contentMode clipsToBounds:(BOOL)clips;


#pragma mark - image modify
/** 返回从该图像缩放的新图像，图像将根据需要拉伸 */
- (nullable UIImage *)imageByResizeToSize:(CGSize)size;

/** 返回从该图像缩放的新图像，图像将根据内容模式自适应 */
- (nullable UIImage *)imageByResizeToSize:(CGSize)size contentMode:(UIViewContentMode)contentMode;

/** 返回从该图像裁剪的新图像，rect为图像内部的rect */
- (nullable UIImage *)imageByCropToRect:(CGRect)rect;

/** 扩展边缘的填充颜色，NIL意味着透明的颜色 */
- (nullable UIImage *)imageByInsetEdge:(UIEdgeInsets)insets withColor:(nullable UIColor *)color;

/** 以给定的角大小新的圆角图像 */
- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius;

/** 以给定的角大小新的圆角图像，没color意味着透明颜色 */
- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius borderWidth:(CGFloat)borderWidth borderColor:(nullable UIColor *)borderColor;

/** 以给定的角大小新的圆角图像，可以某一角圆角，没color意味着透明颜色 */
- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius corners:(UIRectCorner)corners borderWidth:(CGFloat)borderWidth
                                   borderColor:(nullable UIColor *)borderColor borderLineJoin:(CGLineJoin)borderLineJoin;

/** 新的旋转图像，逆时针旋转弧度，fitSize设置为NO时图像的大小不会改变，内容可能会被剪辑 */
- (nullable UIImage *)imageByRotate:(CGFloat)radians fitSize:(BOOL)fitSize;

/** 逆时针旋转 90° ⤺ */
- (nullable UIImage *)imageByRotateLeft90;

/** 顺时针旋转 90° ⤼ */
- (nullable UIImage *)imageByRotateRight90;

/** 顺时针旋转 180° ↻ */
- (nullable UIImage *)imageByRotate180;

/** 垂直翻转图像 ⥯ */
- (nullable UIImage *)imageByFlipVertical;

/** 水平翻转图像 ⇋ */
- (nullable UIImage *)imageByFlipHorizontal;


#pragma mark - image effect
/** 用给定颜色在alpha通道中着色图像 */
- (nullable UIImage *)imageByTintColor:(UIColor *)color;

/** 返回灰度图像 */
- (nullable UIImage *)imageByGrayscale;

/** 图像应用模糊效果，试用所有 */
- (nullable UIImage *)imageByBlurSoft;

/** 图像应用模糊效果，除纯白色外，类似 iOS Control Panel */
- (nullable UIImage *)imageByBlurLight;

/** 对该图像应用模糊效果，适用于显示黑色文本，类似 iOS Navigation Bar White */
- (nullable UIImage *)imageByBlurExtraLight;

/** 对该图像应用模糊效果，适用于显示白色文本，类似 iOS Notification Center */
- (nullable UIImage *)imageByBlurDark;

/** 对该图像应用特定颜色模糊 */
- (nullable UIImage *)imageByBlurWithTint:(UIColor *)tintColor;

/** 对该图像应用自定义模糊，包括模糊半径(0表示没有模糊效果)、模糊颜色(color的alpha通道决定了色调，nil意味着不着色)、
 混合模式(默认kCGBlendModeNormal (0))、饱和度(小于1图像变饱和，而大于1相反的效果，0表示灰度)、
 遮罩图(如果指定，则仅在由此区域中进行修改，必须满足CGContextClipToMask */
- (nullable UIImage *)imageByBlurRadius:(CGFloat)blurRadius tintColor:(nullable UIColor *)tintColor
                               tintMode:(CGBlendMode)tintBlendMode saturation:(CGFloat)saturation
                              maskImage:(nullable UIImage *)maskImage;

@end

NS_ASSUME_NONNULL_END










