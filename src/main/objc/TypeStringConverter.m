//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/TypeStringConverter.java
//

#include "AbstractTypeStringConverter.h"
#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "TypeStringConverter.h"
#include "com/google/common/reflect/TypeToken.h"
#include "java/lang/reflect/Type.h"

@implementation OrgJodaConvertTypeStringConverter

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgJodaConvertTypeStringConverter_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (NSString *)convertToStringWithId:(id<JavaLangReflectType>)object {
  return [((ComGoogleCommonReflectTypeToken *) nil_chk(ComGoogleCommonReflectTypeToken_ofWithJavaLangReflectType_(object))) description];
}

- (id<JavaLangReflectType>)convertFromStringWithIOSClass:(IOSClass *)cls
                                            withNSString:(NSString *)str {
  return OrgJodaConvertAbstractTypeStringConverter_parseWithNSString_(str);
}

- (IOSClass *)getEffectiveType {
  return JavaLangReflectType_class_();
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, 0, 1, -1, -1, -1, -1 },
    { NULL, "LJavaLangReflectType;", 0x1, 2, 3, -1, 4, -1, -1 },
    { NULL, "LIOSClass;", 0x1, -1, -1, -1, 5, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(convertToStringWithId:);
  methods[2].selector = @selector(convertFromStringWithIOSClass:withNSString:);
  methods[3].selector = @selector(getEffectiveType);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "convertToString", "LJavaLangReflectType;", "convertFromString", "LIOSClass;LNSString;", "(Ljava/lang/Class<+Ljava/lang/reflect/Type;>;Ljava/lang/String;)Ljava/lang/reflect/Type;", "()Ljava/lang/Class<*>;", "Lorg/joda/convert/AbstractTypeStringConverter;Lorg/joda/convert/TypedStringConverter<Ljava/lang/reflect/Type;>;" };
  static const J2ObjcClassInfo _OrgJodaConvertTypeStringConverter = { "TypeStringConverter", "org.joda.convert", ptrTable, methods, NULL, 7, 0x10, 4, 0, -1, -1, -1, 6, -1 };
  return &_OrgJodaConvertTypeStringConverter;
}

@end

void OrgJodaConvertTypeStringConverter_init(OrgJodaConvertTypeStringConverter *self) {
  OrgJodaConvertAbstractTypeStringConverter_init(self);
}

OrgJodaConvertTypeStringConverter *new_OrgJodaConvertTypeStringConverter_init() {
  J2OBJC_NEW_IMPL(OrgJodaConvertTypeStringConverter, init)
}

OrgJodaConvertTypeStringConverter *create_OrgJodaConvertTypeStringConverter_init() {
  J2OBJC_CREATE_IMPL(OrgJodaConvertTypeStringConverter, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertTypeStringConverter)