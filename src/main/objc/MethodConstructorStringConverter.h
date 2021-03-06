//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/MethodConstructorStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_MethodConstructorStringConverter")
#ifdef RESTRICT_MethodConstructorStringConverter
#define INCLUDE_ALL_MethodConstructorStringConverter 0
#else
#define INCLUDE_ALL_MethodConstructorStringConverter 1
#endif
#undef RESTRICT_MethodConstructorStringConverter

#if !defined (OrgJodaConvertMethodConstructorStringConverter_) && (INCLUDE_ALL_MethodConstructorStringConverter || defined(INCLUDE_OrgJodaConvertMethodConstructorStringConverter))
#define OrgJodaConvertMethodConstructorStringConverter_

#define RESTRICT_ReflectionStringConverter 1
#define INCLUDE_OrgJodaConvertReflectionStringConverter 1
#include "ReflectionStringConverter.h"

@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;

@interface OrgJodaConvertMethodConstructorStringConverter : OrgJodaConvertReflectionStringConverter

#pragma mark Public

- (id)convertFromStringWithIOSClass:(IOSClass *)cls
                       withNSString:(NSString *)str;

- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)cls
       withJavaLangReflectMethod:(JavaLangReflectMethod *)toString
  withJavaLangReflectConstructor:(JavaLangReflectConstructor *)fromString;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertMethodConstructorStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(OrgJodaConvertMethodConstructorStringConverter *self, IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString);

FOUNDATION_EXPORT OrgJodaConvertMethodConstructorStringConverter *new_OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertMethodConstructorStringConverter *create_OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectConstructor *fromString);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertMethodConstructorStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_MethodConstructorStringConverter")
