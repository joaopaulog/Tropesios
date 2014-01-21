//
//  Topic.h
//  Tropesios
//
//  Created by João Paulo Gonçalves on 20/01/14.
//  Copyright (c) 2014 João Paulo Gonçalves. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Content;

@interface Topic : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * topicId;
@property (nonatomic, retain) Content *content;

@end
