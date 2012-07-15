//
//  FaceView.h
//  Happiness
//
//  Created by Kristen Sundquist on 7/14/12.
//  Copyright (c) 2012 Me. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;    // Forward Reference - tells comiler "There is a class FaceView and I promise I'll define it in a sec"

@protocol FaceViewDataSource
- (float)smileForFaceView:(FaceView *)sender;
@end

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@property (nonatomic, weak) IBOutlet id <FaceViewDataSource> dataSource;

@end
