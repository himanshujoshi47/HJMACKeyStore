//
//  HJMACKeyStore.h
//
//  Created by Himanshu on 1/23/14.
//  Copyright (c) 2014 com.thinksys. All rights reserved.
//

#import <Security/Security.h>

@interface HJMACKeyStore : NSObject
{
    NSMutableDictionary *keychainItemData;      // The actual keychain item data backing store.
    NSMutableDictionary *genericPasswordQuery;  // A placeholder for the generic keychain item query used to locate the item.
}

/********* Intializing Method *********/

-(id)initWithIdentifier:(NSString *)identifier accessGroup:(NSString *) accessGroup accessibility:(CFTypeRef*)accessibility;


/********* String Values Operation *********/

-(BOOL)setString:(NSString *)obj forKey:(NSString*)key;
-(NSString*)stringForKey:(NSString*)key;




/******** Integer Values Operation *********/

-(BOOL)setInteger:(NSInteger)value forKey:(NSString*)key;
-(NSInteger)integerForKey:(NSString*)key;




/******** Double Values Operation *********/

-(BOOL)setDoubleValue:(double)value forKey:(NSString*)key;
-(double)doubleValueForKey:(NSString*)key;




/******** Dictionary Values Operation *********/

-(BOOL)setDictionary:(NSDictionary*)obj forKey:(NSString*)key;
-(NSDictionary*)dictionaryForKey:(NSString*)key;




/******** Array Values Operation *********/

-(BOOL)setArray:(NSArray *)obj forKey:(NSString*)key;
-(NSArray*)arrayForKey:(NSString*)key;




/******** Mutable Array Values Operation *********/

-(BOOL)setMutableArray:(NSMutableArray*)obj forKey:(NSString*)key;
-(NSMutableArray*)mutableArrayForKey:(NSString*)key;




/******** Set Values Operation *********/

-(BOOL)setSet:(NSSet*)obj forKey:(NSString *)key;
-(NSSet*)setForKey:(NSString *)key;




/******** Date Values Operation *********/

-(BOOL)setDate:(NSDate*)obj forKey:(NSString *)key;
-(NSDate*)dateForKey:(NSString *)key;

@end
