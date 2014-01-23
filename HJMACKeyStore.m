//
//  HJMACKeyStore.m
//
//  Created by Himanshu on 1/23/14.
//  Copyright (c) 2014 com.thinksys. All rights reserved.
//

#import "HJMACKeyStore.h"

@implementation HJMACKeyStore


-(id)initWithIdentifier:(NSString *)identifier accessGroup:(NSString *)accessGroup Accessibility:(CFTypeRef *)accessibility
{
    if(self = [super init])
    {
        genericPasswordQuery = [[NSMutableDictionary alloc] init];
        
        [genericPasswordQuery setObject:(id)kSecClassGenericPassword forKey:(id)kSecClass];
        [genericPasswordQuery setObject:identifier forKey:(id)kSecAttrGeneric];
        if (accessGroup != nil) {
            [genericPasswordQuery setObject:accessGroup forKey:(id)kSecAttrAccessGroup];
        }
    }
    
    return self;
}


@end
