//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSView;

@interface TransparentImageView : NSImageView
{
    NSView *_backgroundView;	// 192 = 0xc0
}

@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;	// IMP=0x000000010030e27c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010030e08a
- (void)awakeFromNib;	// IMP=0x000000010030df18

@end

