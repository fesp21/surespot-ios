//
//  HelpViewController.h
//  surespot
//
//  Created by Adam on 1/7/14.
//  Copyright (c) 2014 2fours. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TTTAttributedLabel.h"

@interface HelpViewController : UIViewController<TTTAttributedLabelDelegate>
@property (nonatomic, strong) UIPopoverController * poController;
@end
