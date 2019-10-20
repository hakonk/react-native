/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTInvalidating.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTURLRequestHandler.h>

@protocol RCTHTTPRequestHandlerConfigurationProvider <RCTBridgeModule>
-(NSURLSessionConfiguration *)sessionConfiguration;
@end

@class NSURLSessionConfiguration;

typedef NSURLSessionConfiguration* (^NSURLSessionConfigurationProvider)(void);

/**
 * This is the default RCTURLRequestHandler implementation for HTTP requests.
 */
@interface RCTHTTPRequestHandler : NSObject <RCTURLRequestHandler, RCTInvalidating>
+(void)setNSURLSessionConfigurationProvider:(NSURLSessionConfigurationProvider)provider;
@end
