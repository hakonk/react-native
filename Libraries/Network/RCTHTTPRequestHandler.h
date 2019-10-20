/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTInvalidating.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTURLRequestHandler.h>

@class NSURLSessionConfiguration;

@protocol RCTHTTPRequestHandlerConfigurationProvider <RCTBridgeModule>
-(NSURLSessionConfiguration *)sessionConfiguration;
@end

/**
 * This is the default RCTURLRequestHandler implementation for HTTP requests.
 */
@interface RCTHTTPRequestHandler : NSObject <RCTURLRequestHandler, RCTInvalidating>

@end
