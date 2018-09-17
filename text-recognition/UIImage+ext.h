//
//  UIImage+ext.h
//  text-recognition
//
//  Created by Manh Toan NGUYEN on 8/31/18.
//  Copyright © 2018 David East. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <ImageIO/CGImageProperties.h>
NS_ASSUME_NONNULL_BEGIN

@interface UIImage (CS_Extensions)
-(UIImage*)imageByRotatingUpFromImageOrientation:(UIImageOrientation)orientation;
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
@end;

NS_ASSUME_NONNULL_END
