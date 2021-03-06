//
//  XMGTagSortView.h
//  喜马拉雅FM
//
//  Created by 叶建华 on 16/8/21.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol XMGTagSortViewDelegate<NSObject>
- (void)tagSortDidClickButton:(NSString *)title;
@end

@interface XMGTagSortView : UIView
@property (nonatomic, weak) id<XMGTagSortViewDelegate> delegate;
@end
