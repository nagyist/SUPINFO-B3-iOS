//
//  SliderCell.h
//  Supinfo
//
//  Created by Jonathan on 20/01/15.
//  Copyright (c) 2015 Jonathan Tribouharet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SliderCell : UITableViewCell{
    UILabel *sliderLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UISlider *slider;
@end
