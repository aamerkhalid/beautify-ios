//
//  BYControlRenderer_Private.h
//  Beautify
//
//  Created by Colin Eberhardt on 30/05/2013.
//  Copyright (c) Beautify. All rights reserved.
//

#import "BYControlRenderer.h"

@class BYControlRenderingLayer, UIImageView;

@interface BYControlRenderer ()

@property BYControlRenderingLayer *controlLayer;

// indicates whether the control this renderer is associated with is currenlty highlighted.
@property BOOL highlighted;

-(void)addRendererLayers:(UIView*)view;

-(void)addRendererLayers;

@end