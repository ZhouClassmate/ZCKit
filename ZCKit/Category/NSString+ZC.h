//
//  NSString+ZC.h
//  ZCKit
//
//  Created by admin on 2018/9/11.
//  Copyright © 2018年 Squat in house. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (ZC)

#pragma mark - usually
- (nullable NSString *)md5String;

- (nullable NSString *)base64EncodedString;

- (nullable NSNumber *)numberObject;

- (nullable NSData *)dataObject;

- (nullable id)jsonObject;

- (CGFloat)widthForFont:(UIFont *)font;  /**< 计算宽度，NSLineBreakByWordWrapping */

- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;  /**< 计算高度，NSLineBreakByWordWrapping */

- (NSUInteger)charCount;  /**< 字符长度 */

- (NSUInteger)bytesCount;  /**< 字节长度 */

- (NSString *)preciseString;  /**< 精确浮点数 & 去除无效数字 */

- (NSString *)formatterPrice;  /**< 保留两位有效数字 */

- (NSString *)stringByTrim;  /**< 去掉两端空格和换行符 */

- (NSString *)arabiaDgitalToChinese;  /**< 阿拉伯数字转中文格式，只限整数，其余返回@"" */

- (NSString *)deletePictureResolution;  /**< 删除图片尾缀@2x、@3x */


#pragma mark - judge
@property (nonatomic, readonly) BOOL isPureInteger;  /**< 是否是整形 */

@property (nonatomic, readonly) BOOL isPureFloat;  /**< 是否是浮点型 */

@property (nonatomic, readonly) BOOL isPureDouble;  /**< 是否是浮点型 */

@property (nonatomic, readonly) BOOL isPureNumber;  /**< 是否是全数字 */

@property (nonatomic, readonly) BOOL isPureAlpha;  /**< 是否是全字母 */

@property (nonatomic, readonly) BOOL isPureChinese;  /**< 是否是全中文 */

@property (nonatomic, readonly) BOOL isContainNumber;  /**< 是否包含数字 */

@property (nonatomic, readonly) BOOL isContainAlpha;  /**< 是否包含字母 */

@property (nonatomic, readonly) BOOL isContainChinese;  /**< 是否包含字母 */

@property (nonatomic, readonly) BOOL isContainEmoji;  /**< 是否有emoji */

@property (nonatomic, readonly) BOOL isPhone;  /**< 是否是手机号 */

@property (nonatomic, readonly) BOOL isUrl;  /**< 是否是网址 */

@property (nonatomic, readonly) BOOL isPostalcode;  /**< 是否是邮政编码 */

@property (nonatomic, readonly) BOOL isEmail;  /**< 是否是邮箱 */

@property (nonatomic, readonly) BOOL isTaxNo;  /**< 是否是工商税号 */

@property (nonatomic, readonly) BOOL isIP;  /**< 是否是IP地址xxx.xxx.xxx.xxx */

@property (nonatomic, readonly) BOOL isCorrect;  /**< 是否是身份证号码 */

@property (nonatomic, readonly) BOOL isBankCard;  /**< 是否是银行卡号 */

@property (nonatomic, readonly) BOOL isUserName;  /**< 是否是用户姓名，1-20位的中文或英文 */

@property (nonatomic, readonly) BOOL isNotBlank;  /**< 是否不是空白，nil，@""，@"  "，@"\n" will Returns NO */


- (BOOL)isContainAdmitSpecialCharacter;  /**< 是否包含承认的特殊字符 */

- (BOOL)isContainsCharacterSet:(NSCharacterSet *)set;  /**< 是否包含字符集 */

- (BOOL)isEqualIgnoreCase:(NSString *)str;  /**< 不区分大小写比对字符串相等 */

- (BOOL)isPasswordAllowAdmitSpecialCharacter:(BOOL)specialChar mustAllContain:(BOOL)allContain allowSimple:(BOOL)allowSimple
                                   shieldStr:(nullable NSString *)shieldStr min:(int)min max:(int)max;  /**< 是否是规范的密码 */


#pragma mark - class
+ (NSString *)stringWithUUID;  /**< 生成唯一个的UUID */

+ (NSString *)emojiWithIntCode:(int)intCode;  /**< 将十六进制的编码转为emoji字符 */

+ (NSString *)emojiWithStringCode:(NSString *)stringCode;  /**< 将十六进制的编码转为emoji字符 */

+ (nullable NSString *)stringWithBase64EncodedString:(nullable NSString *)base64EncodedString;  /**< 转换base64字符串 */


#pragma mark - expand
- (NSString *)stringByURLEncode;

- (NSString *)stringByURLDecode;

- (NSString *)stringByEscapingHTML;

@end

NS_ASSUME_NONNULL_END

