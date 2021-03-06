//
//  ViewRenderer.h
//  Beautify
//
//  Copyright (c) Beautify. All rights reserved.
//

#import "BYStyleRenderer.h"

/**
 *  A renderer responsible for enhancing a UIView.
 *
 *  The style properties for a UIView can be customized using methods defined in this class.
 */
@interface BYViewRenderer : BYStyleRenderer

/**
 *  Set the alpha for the view associated with this renderer.
 */
- (void)setAlpha:(float)alpha forState:(UIControlState)state;

/**
 *  Set the tint color for the view associated with this renderer.
 */
- (void)setTintColor:(UIColor*)color;

@end