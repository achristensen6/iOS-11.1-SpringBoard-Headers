//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageControl.h"

@class NSMutableArray, _UILegibilitySettings;

@interface SBDashBoardPageControl : UIPageControl
{
    _UILegibilitySettings *_sbLegibilitySettings;
    NSMutableArray *_legibilityViews;
    unsigned long long _cameraPageIndex;
}

+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1 desiredSize:(struct CGSize)arg2;
+ (struct CGRect)suggestedFrameForPageBounds:(struct CGRect)arg1;
+ (struct CGSize)defaultSize;
@property(nonatomic) unsigned long long cameraPageIndex; // @synthesize cameraPageIndex=_cameraPageIndex;
- (void).cxx_destruct;
- (double)_indicatorSpacing;
- (struct CGRect)_modernBounds;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (id)_currentPageIndicatorColor;
- (id)_pageIndicatorColor;
- (id)_pageIndicatorImage:(_Bool)arg1;
- (id)_cameraIndicatorImage:(_Bool)arg1;
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (void)_updateLegibilityViews;
- (void)setLegibilitySettings:(id)arg1;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

