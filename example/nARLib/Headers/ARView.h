/*
 Copyright (c) 2010, Naja von Schmude
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of the organization nor the
 names of its contributors may be used to endorse or promote products
 derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

//
//  ARView.h
//  nARLib
//
//  Created by Naja von Schmude on 15.07.10.
//  Copyright 2010 Naja's Corner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#import "ARViewDelegate.h"

@interface ARView : UIView {

	id<ARViewDelegate>	delegate;
	CALayer				*backgroundLayer;
	UIColor				*defaultBackgroundColor;
	
	CGPoint				originalPosition;
}

@property (nonatomic, assign)	id<ARViewDelegate>	delegate;
@property (nonatomic, readonly)	CALayer				*backgroundLayer;
@property (nonatomic, retain)	UIColor				*defaultBackgroundColor;
@property (nonatomic)			CGPoint				originalPosition;

/**
 * Tests, if self intersects with otherView
 * @param otherView
 * @return
 */
- (BOOL) intersectsWithARView:(ARView*) otherView;

/**
 * Tests, if self would intersect with otherView, if self would be at position position
 * @param otherView
 * @param position
 * @return
 */
- (BOOL) wouldIntersectWithARView:(ARView *)otherView atPosition:(CGPoint)position;

/**
 * Calculates the distance from self to otherView
 * @param otherView
 * @return distance
 */
- (CGFloat) distanceToOtherARView:(ARView *)otherView;

/**
 * Calculates the distance between the points p1 and p2
 * @param p1
 * @param p2
 * @return distance
 */
- (CGFloat) distanceBetweenPosition1:(CGPoint)p1 Position2:(CGPoint)p2;
@end
