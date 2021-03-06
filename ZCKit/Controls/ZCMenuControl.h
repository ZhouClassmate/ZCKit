//
//  ZCMenuControl.h
//  ZCKit
//
//  Created by admin on 2018/10/29.
//  Copyright © 2018 Squat in house. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZCMenuControl : UIView  /**< 点击菜单控件 */

@property (nonatomic, assign) BOOL isShowShadow;  /**< 是否显示阴影，默认NO */

@property (nonatomic, assign) BOOL isMaskHide;  /**< 点击背景是否隐藏，默认YES */

@property (nonatomic, assign) BOOL isMaskClear;  /**< 是否使用透明背景，默认YES，不用灰色 */

@property (nonatomic, assign) unsigned short maxLine;  /**< 最大多少行，默认7行 */

@property (nonatomic, assign) CGFloat rowHeight;  /**< 行高，默认 47.0 */

@property (nonatomic, assign) CGFloat topHeight;  /**< 头尾部高，默认 8.0 */

@property (nonatomic, assign) CGRect initArrowRect;  /**< 箭头位置 */

/**< 点击背景或者取消时，selectIndex = -1，vertex顶点坐标，set 回调可以设置一些属性 */
+ (void)display:(NSArray <NSString *>*)menus width:(CGFloat)width vertex:(CGPoint)vertex
            set:(nullable void(^)(ZCMenuControl *menuControl))set
         btnSet:(nullable void(^)(NSInteger index, UIButton *itemBtn, UIView * _Nullable line))btnSet
          click:(nullable void(^)(NSInteger selectIndex))click;

@end

NS_ASSUME_NONNULL_END
