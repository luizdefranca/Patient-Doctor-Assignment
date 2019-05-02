//
//  MedicalRecords.h
//  Patient-Doctor-Assignment
//
//  Created by Luiz on 5/2/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MedicalRecord : NSObject
@property (nonatomic, strong) NSString* doctorName;
@property (nonatomic, strong) NSArray* symptoms;
@property (nonatomic, strong) NSArray* prescritions;

@end

NS_ASSUME_NONNULL_END
