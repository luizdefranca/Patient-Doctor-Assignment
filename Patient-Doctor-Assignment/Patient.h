//
//  Patient.h
//  Patient-Doctor-Assignment
//
//  Created by Luiz on 5/2/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Patient : NSObject
@property (assign, nonatomic) NSString* name;
@property (assign, nonatomic) NSUInteger* age;
- (instancetype)initWithName: (NSString *) name andAge: (NSUInteger) age;
@end

NS_ASSUME_NONNULL_END
