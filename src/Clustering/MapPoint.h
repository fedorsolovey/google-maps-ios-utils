//
//  MapPoint.h
//  GoogleMapsUtils
//
//  Created by Fedor Solovev on 25.08.16.
//  Copyright © 2016 Google. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMUClusterItem.h"

@class UIImage;

// Point of Interest Item which implements the GMUClusterItem protocol.
@interface MapPoint : NSObject<GMUClusterItem>

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) CLLocationCoordinate2D position;
@property (nonatomic, readonly) UIImage *icon;

- (instancetype)initWithPosition:(CLLocationCoordinate2D)position andIcon:(UIImage *)icon andTitle:(NSString *)title;

@end
