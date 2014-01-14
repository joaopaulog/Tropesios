//
//  Topic.h
//  Tropesios
//
//  Created by João Paulo Gonçalves on 12/01/14.
//  Copyright (c) 2014 João Paulo Gonçalves. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Page;

@interface Topic : NSManagedObject

@property (nonatomic, retain) NSString * topicId;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) Page *page;

@end
