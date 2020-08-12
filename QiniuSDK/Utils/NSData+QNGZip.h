//
//  NSData+QNGZip.h
//  GZipTest
//
//  Created by yangsen on 2020/8/12.
//  Copyright © 2020 yangsen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData(QNGZip)

- (NSData *)qn_gZip;

- (NSData *)qn_gUnzip;

@end

NS_ASSUME_NONNULL_END
