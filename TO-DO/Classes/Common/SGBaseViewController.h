//
//  SGBaseViewController.h
//  TO-DO
//
//  Created by Siegrain on 16/5/19.
//  Copyright © 2016年 com.siegrain. All rights reserved.
//

#import "CDUser.h"
#import "SGHeaderView.h"
#import "LCUser.h"
#import "Masonry.h"
#import "SGViews.h"

/**
 *  基页（除登录）
 */
@interface SGBaseViewController : UIViewController <SGViews>
/**
 *  右侧导航栏按钮
 */
@property(nonatomic, readonly, strong) UIButton *rightNavigationButton;
/**
 *  左侧导航栏按钮
 */
@property(nonatomic, readonly, strong) UIButton *leftNavigationButton;
/**
 *  头视图
 */
@property(nonatomic, readwrite, strong) SGHeaderView *headerView;
/**
 *  当前用户(LeanCloud)
 */
@property(nonatomic, readonly, strong) LCUser *lcUser;
/**
 *  当前用户(Coredata)
 */
@property(nonatomic, readonly, strong) CDUser *cdUser;

/**
 *  替代导航栏的Title
 * */
@property(nonatomic, readwrite, strong) UILabel *titleLabel;

/* 指示当前视图是否是编辑状态 */
@property(nonatomic, assign) BOOL isEditing;
/* 是否自定义导航栏 */
@property(nonatomic, assign) BOOL isCustomNavigation;

- (void)rightNavButtonDidPress;
@end
