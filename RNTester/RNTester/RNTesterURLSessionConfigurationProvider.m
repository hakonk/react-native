#import "RNTesterURLSessionConfigurationProvider.h"

@implementation RNTesterURLSessionConfigurationProvider

RCT_EXPORT_MODULE()

- (NSURLSessionConfiguration *)sessionConfiguration {
  NSURLSessionConfiguration *configuration = [NSURLSessionConfiguration defaultSessionConfiguration];
  [configuration setHTTPShouldSetCookies:YES];
  [configuration setHTTPCookieAcceptPolicy:NSHTTPCookieAcceptPolicyAlways];
  [configuration setHTTPCookieStorage:[NSHTTPCookieStorage sharedHTTPCookieStorage]];
  return configuration;
}

@end
