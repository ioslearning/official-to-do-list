//
//  ToDoItem.h
//  ToDoList
//
//  Created by Qiaofu on 15/3/21.
//  Copyright (c) 2015年 Qiaofu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

    @property NSString *itemName;
    @property BOOL completed;
    @property (readonly) NSDate *creationDate;

@end
