//
//  POIItem.m
//  GoogleMapsUtils
//
//  Created by Fedor Solovev on 25.08.16.
//  Copyright © 2016 Google. All rights reserved.
//

#import "MapPoint.h"

@implementation MapPoint

- (instancetype)initWithPosition:(CLLocationCoordinate2D)position andIcon:(nullable UIImage *)icon
{
    if ((self = [super init])) {
        _position = position;
        _icon = icon;
    }
    return self;
}

@end
