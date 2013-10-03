//
//  JSONValueTransformer+UIColorExtension.h
//  Beautify
//
//  Created by Chris Grant on 30/09/2013.
//  Copyright (c) 2013 Beautify. All rights reserved.
//

#import "JSONValueTransformer.h"
#import <UIKit/UIKit.h>

@interface JSONValueTransformer (BeautifyExtensions)

-(UIColor*)UIColorFromNSString:(NSString*)color;
-(NSString*)JSONObjectFromUIColor:(UIColor*)color;

-(NSValue*)CGSizeFromNSDictionary:(NSDictionary*)dict;
-(NSDictionary*)JSONObjectFromCGSize:(CGSize)size;

-(UIImage*)UIImageFromNSString:(NSString*)string;
-(NSString*)JSONObjectFromUIImage:(UIImage*)image;

-(UIControlState)stateFromString:(NSString*)stateString;

@end