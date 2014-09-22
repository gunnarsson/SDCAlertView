//
//  SDCAlertViewNew.h
//  SDCAlertView
//
//  Created by Scott Berrevoets on 9/21/14.
//  Copyright (c) 2014 Scotty Doesn't Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SDCAlertViewNew : UIView

- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;

@end
