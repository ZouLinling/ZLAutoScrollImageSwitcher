//
//  SGFocusImageItem.h
//  BaseProject
//
//  Created by Shane Gao on 17/6/12.
//  Created by Vincent Tang on 13-7-18.
//  Improved by ZouLinling on 10/28/14.
//  Copyright (c) 2014 Zou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SGFocusImageItem : NSObject

@property (nonatomic, retain)  NSString *title;
@property (nonatomic, retain)  NSString *image;
@property int tag;
@property BOOL isLocal;
@end
