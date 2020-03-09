//
//  UIBezierPath+Interpolation.h
//  Curve Interpolation
//
//  Created by John Fisher on 4/26/14.
//  Copyright (c) 2014 John Fisher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBezierPath (Interpolation)

// pointsAsNSValues must be NSValue objects containing CGPoints.
+(UIBezierPath *)interpolateCGPointsWithCatmullRom:(NSArray *)pointsAsNSValues closed:(BOOL)closed alpha:(float)alpha;
+(UIBezierPath *)interpolateCGPointsWithHermite:(NSArray *)pointsAsNSValues controlPoints:(NSMutableArray *)controlPoints closed:(BOOL)closed;
-(NSArray<NSValue *> *)points;
-(NSArray<NSValue *> *)pointsOnCurveForControlPoints:(NSArray<NSValue *> *) controlPoints;
@end
