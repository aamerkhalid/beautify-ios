//
//  BYLabelRenderer.h
//  Beautify
//
//  Created by Adrian Conlin on 30/04/2013.
//  Copyright (c) Beautify. All rights reserved.
//

#import "BYViewRenderer.h"

@class BYText, BYTextShadow;

/**
 A renderer responsible for enhancing a UILabel.
 
 The style properties for a UILabel can be customized using methods defined in this class.
 */
@interface BYLabelRenderer : BYViewRenderer

#pragma mark - Text customizers

/**
 Set the text style for the button associated with this renderer.
 */
-(void)setTextStyle:(BYText*)textStyle forState:(UIControlState)state;

/**
 Set the text style for the button associated with this renderer.
 */
-(void)setTextShadow:(BYTextShadow*)textShadow forState:(UIControlState)state;

/**
 If the renderer is managed by another renderer, ignore the theme updates and apply the styles from that renderer.
 */
@property BOOL ignoreThemeUpdates;

@end