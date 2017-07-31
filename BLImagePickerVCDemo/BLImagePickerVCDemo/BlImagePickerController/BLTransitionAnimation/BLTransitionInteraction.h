//
//  BLTransitionInteraction.h
//  翻页效果
//
//  Created by 冰泪 on 2017/6/20.
//  Copyright © 2017年 冰泪. All rights reserved.
//

#import "BLTrasitionAnimatorConfig.h"
#import <UIKit/UIKit.h>

typedef void(^GestureConifg)();
@interface BLTransitionInteraction : UIPercentDrivenInteractiveTransition

@property (nonatomic, weak) UIViewController *vc;
/**手势方向*/
@property (nonatomic, assign)BLGestureDirection  direction;
///**手势类型*/
@property (nonatomic, assign) BLTransitionType type;


/**记录是否开始手势，判断pop操作是手势触发还是返回键触发*/
@property (nonatomic, assign) BOOL interation;
/**促发手势present的时候的config，config中初始化并present需要弹出的控制器*/
@property (nonatomic, copy) GestureConifg presentConifg;
/**促发手势push的时候的config，config中初始化并push需要弹出的控制器*/
@property (nonatomic, copy) GestureConifg pushConifg;

//初始化方法

+ (instancetype)interactiveTransitionWithTransitionType:(BLTransitionType) type GestureDirection:(BLGestureDirection)direction;
- (instancetype)initWithTransitionType:(BLTransitionType)type GestureDirection:(BLGestureDirection)direction;

/** 给传入的控制器添加手势*/
- (void)addPanGestureForViewController:(UIViewController *)viewController;
@end
