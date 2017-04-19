//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/MethodsStringConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_MethodsStringConverter")
#ifdef RESTRICT_MethodsStringConverter
#define INCLUDE_ALL_MethodsStringConverter 0
#else
#define INCLUDE_ALL_MethodsStringConverter 1
#endif
#undef RESTRICT_MethodsStringConverter

#if !defined (OrgJodaConvertMethodsStringConverter_) && (INCLUDE_ALL_MethodsStringConverter || defined(INCLUDE_OrgJodaConvertMethodsStringConverter))
#define OrgJodaConvertMethodsStringConverter_

#define RESTRICT_ReflectionStringConverter 1
#define INCLUDE_OrgJodaConvertReflectionStringConverter 1
#include "ReflectionStringConverter.h"

@class IOSClass;
@class JavaLangReflectMethod;

@interface OrgJodaConvertMethodsStringConverter : OrgJodaConvertReflectionStringConverter

#pragma mark Public

- (id)convertFromStringWithIOSClass:(IOSClass *)cls
                       withNSString:(NSString *)str;

- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)cls
       withJavaLangReflectMethod:(JavaLangReflectMethod *)toString
       withJavaLangReflectMethod:(JavaLangReflectMethod *)fromString
                    withIOSClass:(IOSClass *)effectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertMethodsStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertMethodsStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectMethod_withIOSClass_(OrgJodaConvertMethodsStringConverter *self, IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectMethod *fromString, IOSClass *effectiveType);

FOUNDATION_EXPORT OrgJodaConvertMethodsStringConverter *new_OrgJodaConvertMethodsStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectMethod_withIOSClass_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectMethod *fromString, IOSClass *effectiveType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertMethodsStringConverter *create_OrgJodaConvertMethodsStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectMethod_withIOSClass_(IOSClass *cls, JavaLangReflectMethod *toString, JavaLangReflectMethod *fromString, IOSClass *effectiveType);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertMethodsStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_MethodsStringConverter")
