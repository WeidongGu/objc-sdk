//
//  LCDatabaseCommon.h
//  AVOS
//
//  Created by Tang Tianyong on 6/1/15.
//  Copyright (c) 2015 LeanCloud Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMDatabase;

typedef void(^LCDatabaseJob)(FMDatabase *db);
