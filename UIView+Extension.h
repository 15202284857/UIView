//
//  UIView+Extension.h
//  黑马微博2期
//
//  Created by apple on 14-10-7.
//  Copyright (c) 2014年 heima. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;

/**
 *  设置锚点
 *
 *  @param anchorPoint 锚点  0-1
 *  @param view        需要设置锚点的view
 */
- (void)setAnchorPoint:(CGPoint)anchorPoint
/**
 *  恢复默认的锚点
 *
 *  @param view   需要恢复锚点的view
 */
- (void)setDefaultAnchorPoint
@end
