//
//  FooItem.h
//  Supinfo
//
//  Created by Jonathan on 20/01/15.
//  Copyright (c) 2015 Jonathan Tribouharet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FooItem : NSObject

@property (nonatomic) NSString *title;
@property CGFloat value;

- (instancetype)initWithTitle:(NSString *)title andValue:(CGFloat)value;

@end
