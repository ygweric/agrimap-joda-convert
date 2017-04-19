//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/TypeTokenStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_TypeTokenStringConverter")
#ifdef RESTRICT_TypeTokenStringConverter
#define INCLUDE_ALL_TypeTokenStringConverter 0
#else
#define INCLUDE_ALL_TypeTokenStringConverter 1
#endif
#undef RESTRICT_TypeTokenStringConverter

#if !defined (OrgJodaConvertTypeTokenStringConverter_) && (INCLUDE_ALL_TypeTokenStringConverter || defined(INCLUDE_OrgJodaConvertTypeTokenStringConverter))
#define OrgJodaConvertTypeTokenStringConverter_

#define RESTRICT_AbstractTypeStringConverter 1
#define INCLUDE_OrgJodaConvertAbstractTypeStringConverter 1
#include "AbstractTypeStringConverter.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

@interface OrgJodaConvertTypeTokenStringConverter : OrgJodaConvertAbstractTypeStringConverter < OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonReflectTypeToken *)convertFromStringWithIOSClass:(IOSClass *)cls
                                                      withNSString:(NSString *)str;

- (NSString *)convertToStringWithId:(ComGoogleCommonReflectTypeToken *)object;

- (IOSClass *)getEffectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertTypeTokenStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertTypeTokenStringConverter_init(OrgJodaConvertTypeTokenStringConverter *self);

FOUNDATION_EXPORT OrgJodaConvertTypeTokenStringConverter *new_OrgJodaConvertTypeTokenStringConverter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertTypeTokenStringConverter *create_OrgJodaConvertTypeTokenStringConverter_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertTypeTokenStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_TypeTokenStringConverter")