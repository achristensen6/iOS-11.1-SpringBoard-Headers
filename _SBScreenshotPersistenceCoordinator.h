//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _SBScreenshotPersistenceCoordinator : NSObject
{
    unsigned long long _screenshotWriteCount;
}

- (void)_decrementWriteCount;
- (void)_incrementWriteCount;
- (_Bool)_isWritingSnapshot;
- (void)_finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void *)arg3;
- (void)saveScreenshot:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isSaving; // @dynamic isSaving;

@end
