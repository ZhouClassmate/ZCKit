//
//  JFCollection.h
//  gobe
//
//  Created by zjy on 2019/3/16.
//  Copyright © 2019年 com.jinfeng.credit. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFCollection : NSObject

+ (void)startCollectionAddressList:(void(^)(BOOL success, NSArray *list))block;

@end

NS_ASSUME_NONNULL_END
