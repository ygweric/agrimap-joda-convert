//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/ReflectionStringConverter.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "ReflectionStringConverter.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/reflect/Method.h"

#pragma clang diagnostic ignored "-Wprotocol"

@interface OrgJodaConvertReflectionStringConverter () {
 @public
  IOSClass *cls_;
  JavaLangReflectMethod *toString_;
}

@end

J2OBJC_FIELD_SETTER(OrgJodaConvertReflectionStringConverter, cls_, IOSClass *)
J2OBJC_FIELD_SETTER(OrgJodaConvertReflectionStringConverter, toString_, JavaLangReflectMethod *)

@implementation OrgJodaConvertReflectionStringConverter

- (instancetype)initWithIOSClass:(IOSClass *)cls
       withJavaLangReflectMethod:(JavaLangReflectMethod *)toString {
  OrgJodaConvertReflectionStringConverter_initWithIOSClass_withJavaLangReflectMethod_(self, cls, toString);
  return self;
}

- (NSString *)convertToStringWithId:(id)object {
  @try {
    return (NSString *) cast_chk([((JavaLangReflectMethod *) nil_chk(toString_)) invokeWithId:object withNSObjectArray:[IOSObjectArray newArrayWithLength:0 type:NSObject_class_()]], [NSString class]);
  }
  @catch (JavaLangIllegalAccessException *ex) {
    @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$@", @"Method is not accessible: ", toString_));
  }
  @catch (JavaLangReflectInvocationTargetException *ex) {
    if ([[((JavaLangReflectInvocationTargetException *) nil_chk(ex)) getCause] isKindOfClass:[JavaLangRuntimeException class]]) {
      @throw (JavaLangRuntimeException *) cast_chk([ex getCause], [JavaLangRuntimeException class]);
    }
    @throw new_JavaLangRuntimeException_initWithNSString_withNSException_([ex getMessage], [ex getCause]);
  }
}

- (NSString *)description {
  return JreStrcat("$$C", @"RefectionStringConverter[", [((IOSClass *) nil_chk(cls_)) getSimpleName], ']');
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x0, -1, 0, -1, 1, -1, -1 },
    { NULL, "LNSString;", 0x1, 2, 3, -1, 4, -1, -1 },
    { NULL, "LNSString;", 0x1, 5, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithIOSClass:withJavaLangReflectMethod:);
  methods[1].selector = @selector(convertToStringWithId:);
  methods[2].selector = @selector(description);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "cls_", "LIOSClass;", .constantValue.asLong = 0, 0x12, -1, -1, 6, -1 },
    { "toString_", "LJavaLangReflectMethod;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LIOSClass;LJavaLangReflectMethod;", "(Ljava/lang/Class<TT;>;Ljava/lang/reflect/Method;)V", "convertToString", "LNSObject;", "(TT;)Ljava/lang/String;", "toString", "Ljava/lang/Class<TT;>;", "<T:Ljava/lang/Object;>Ljava/lang/Object;Lorg/joda/convert/TypedStringConverter<TT;>;" };
  static const J2ObjcClassInfo _OrgJodaConvertReflectionStringConverter = { "ReflectionStringConverter", "org.joda.convert", ptrTable, methods, fields, 7, 0x400, 3, 2, -1, -1, -1, 7, -1 };
  return &_OrgJodaConvertReflectionStringConverter;
}

@end

void OrgJodaConvertReflectionStringConverter_initWithIOSClass_withJavaLangReflectMethod_(OrgJodaConvertReflectionStringConverter *self, IOSClass *cls, JavaLangReflectMethod *toString) {
  NSObject_init(self);
  if (((IOSObjectArray *) nil_chk([((JavaLangReflectMethod *) nil_chk(toString)) getParameterTypes]))->size_ != 0) {
    @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$@", @"ToString method must have no parameters: ", toString));
  }
  if ([toString getReturnType] != NSString_class_()) {
    @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$@", @"ToString method must return a String: ", toString));
  }
  self->cls_ = cls;
  self->toString_ = toString;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertReflectionStringConverter)
