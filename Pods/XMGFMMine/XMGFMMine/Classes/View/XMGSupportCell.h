//
//  XMGSupportCell.h
//  喜马拉雅FM
//
//  Created by 弓虽_子 on 16/8/14.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XMGSupportModel;
@interface XMGSupportCell : UITableViewCell

+ (instancetype)supportCell;

@property (nonatomic, strong)  XMGSupportModel *supportM;

@end
