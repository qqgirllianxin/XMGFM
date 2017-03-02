//
//  HomeModuleAPI.h
//  Pods
//
//  Created by 王顺子 on 16/10/30.
//
//

#import <Foundation/Foundation.h>

@interface HomeModuleAPI : NSObject

+ (instancetype)shareInstance;


/**
 获取首页控制器
 */
@property (nonatomic, weak, readonly) UIViewController *homeVC;

/**
 跳转到专辑详情的block
 */
@property (nonatomic, copy) void(^jumpAlbumDetailBlock)(NSInteger albumID, UINavigationController *currentNav);


/**
 弹出播放器界面的block
 */
@property (nonatomic, copy) void(^presentPlayerBlock)(NSInteger trackID);

@end
