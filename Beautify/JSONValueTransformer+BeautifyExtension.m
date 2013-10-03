//
//  JSONValueTransformer+UIColorExtension.m
//  Beautify
//
//  Created by Chris Grant on 30/09/2013.
//  Copyright (c) 2013 Beautify. All rights reserved.
//

#import "JSONValueTransformer+BeautifyExtension.h"
#import "UIColor+HexColors.h"
#import "UIImage+Base64.h"

@implementation JSONValueTransformer (BeautifyExtensions)

-(UIColor*)UIColorFromNSString:(NSString*)string {
    return [UIColor colorWithHexString:string];
}

-(NSString*)JSONObjectFromUIColor:(UIColor*)color {
    return [UIColor hexValuesFromUIColor:color];
}

-(NSValue*)CGSizeFromNSDictionary:(NSDictionary*)offsetDict {
    float x = 0;
    float y = 0;
    
    if(offsetDict) {
        if ([[offsetDict allKeys] containsObject:@"x"]) {
            if([NSNull null] != offsetDict[@"x"]) {
                x = [offsetDict[@"x"] doubleValue];
            }
        }
        if ([[offsetDict allKeys] containsObject:@"y"]) {
            if([NSNull null] != offsetDict[@"y"]) {
                y = [offsetDict[@"y"] doubleValue];
            }
        }
    }
    return [NSValue valueWithCGSize:CGSizeMake(x, y)];
}

-(NSDictionary*)JSONObjectFromCGSize:(CGSize)size {
    return @{@"x": [NSNumber numberWithFloat:size.width],
             @"y": [NSNumber numberWithFloat:size.height]};
}

-(UIImage *)UIImageFromNSString:(NSString *)string {
    return [UIImage imageFromBase64String:string];
}

-(NSString*)JSONObjectFromUIImage:(UIImage*)image {
    return [UIImage base64ImageFromUIImage:image];
}

-(UIControlState)stateFromString:(NSString*)stateString {
    if ([[stateString lowercaseString] isEqualToString:@"highlighted"]) {
        return UIControlStateHighlighted;
    }
    else if ([[stateString lowercaseString] isEqualToString:@"disabled"]) {
        return UIControlStateDisabled;
    }
    else if ([[stateString lowercaseString] isEqualToString:@"selected"]) {
        return UIControlStateSelected;
    }
    return UIControlStateNormal;
}

@end