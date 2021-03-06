//
//  BYTableViewCellStyle.h
//  Beautify
//
//  Created by Colin Eberhardt on 02/06/2013.
//  Copyright (c) Beautify. All rights reserved.
//
#import "BYViewStyle.h"
#import "BYText.h"
#import "BYFont.h"
#import "BYBorder.h"
#import "BYShadow.h"
#import "BYGradient.h"
#import "BYBackgroundImage.h"
#import "BYTextShadow.h"

@interface BYTableViewCellStyle : BYViewStyle

// text
@property BYText *title;
@property BYTextShadow<Optional> *titleShadow;

// background
@property UIColor<Optional> *backgroundColor;
@property BYGradient<Optional> *backgroundGradient;
@property BYBackgroundImage<Optional> *backgroundImage;

// border
@property BYBorder<Optional> *border;
@property BYShadow<Optional> *innerShadow;
@property BYShadow<Optional> *outerShadow;

// accessory views
@property UIImage<Optional> *accessoryViewImage;
@property UIImage<Optional> *editingAccessoryViewImage;

+(BYTableViewCellStyle*)defaultStyle;

@end