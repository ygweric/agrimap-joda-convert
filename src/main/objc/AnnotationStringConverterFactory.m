//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/AnnotationStringConverterFactory.java
//

#include "AnnotationStringConverterFactory.h"
#include "FromString.h"
#include "FromStringFactory.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "MethodConstructorStringConverter.h"
#include "MethodsStringConverter.h"
#include "StringConverter.h"
#include "StringConverterFactory.h"
#include "ToString.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/reflect/Method.h"

@interface OrgJodaConvertAnnotationStringConverterFactory ()

- (instancetype)init;

- (id<OrgJodaConvertStringConverter>)findAnnotatedConverterWithIOSClass:(IOSClass *)cls;

- (JavaLangReflectMethod *)findToStringMethodWithIOSClass:(IOSClass *)cls;

- (OrgJodaConvertMethodConstructorStringConverter *)findFromStringConstructorWithIOSClass:(IOSClass *)cls
                                                                withJavaLangReflectMethod:(JavaLangReflectMethod *)toString;

- (OrgJodaConvertMethodsStringConverter *)findFromStringMethodWithIOSClass:(IOSClass *)cls
                                                 withJavaLangReflectMethod:(JavaLangReflectMethod *)toString
                                                               withBoolean:(jboolean)searchSuperclasses;

- (JavaLangReflectMethod *)findFromStringWithIOSClass:(IOSClass *)cls;

- (IOSClass *)eliminateEnumSubclassWithIOSClass:(IOSClass *)cls;

@end

__attribute__((unused)) static void OrgJodaConvertAnnotationStringConverterFactory_init(OrgJodaConvertAnnotationStringConverterFactory *self);

__attribute__((unused)) static OrgJodaConvertAnnotationStringConverterFactory *new_OrgJodaConvertAnnotationStringConverterFactory_init() NS_RETURNS_RETAINED;

__attribute__((unused)) static OrgJodaConvertAnnotationStringConverterFactory *create_OrgJodaConvertAnnotationStringConverterFactory_init();

__attribute__((unused)) static id<OrgJodaConvertStringConverter> OrgJodaConvertAnnotationStringConverterFactory_findAnnotatedConverterWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls);

__attribute__((unused)) static JavaLangReflectMethod *OrgJodaConvertAnnotationStringConverterFactory_findToStringMethodWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls);

__attribute__((unused)) static OrgJodaConvertMethodConstructorStringConverter *OrgJodaConvertAnnotationStringConverterFactory_findFromStringConstructorWithIOSClass_withJavaLangReflectMethod_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls, JavaLangReflectMethod *toString);

__attribute__((unused)) static OrgJodaConvertMethodsStringConverter *OrgJodaConvertAnnotationStringConverterFactory_findFromStringMethodWithIOSClass_withJavaLangReflectMethod_withBoolean_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls, JavaLangReflectMethod *toString, jboolean searchSuperclasses);

__attribute__((unused)) static JavaLangReflectMethod *OrgJodaConvertAnnotationStringConverterFactory_findFromStringWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls);

__attribute__((unused)) static IOSClass *OrgJodaConvertAnnotationStringConverterFactory_eliminateEnumSubclassWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls);

J2OBJC_INITIALIZED_DEFN(OrgJodaConvertAnnotationStringConverterFactory)

id<OrgJodaConvertStringConverterFactory> OrgJodaConvertAnnotationStringConverterFactory_INSTANCE;

@implementation OrgJodaConvertAnnotationStringConverterFactory

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgJodaConvertAnnotationStringConverterFactory_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls {
  return OrgJodaConvertAnnotationStringConverterFactory_findAnnotatedConverterWithIOSClass_(self, cls);
}

- (id<OrgJodaConvertStringConverter>)findAnnotatedConverterWithIOSClass:(IOSClass *)cls {
  return OrgJodaConvertAnnotationStringConverterFactory_findAnnotatedConverterWithIOSClass_(self, cls);
}

- (JavaLangReflectMethod *)findToStringMethodWithIOSClass:(IOSClass *)cls {
  return OrgJodaConvertAnnotationStringConverterFactory_findToStringMethodWithIOSClass_(self, cls);
}

- (OrgJodaConvertMethodConstructorStringConverter *)findFromStringConstructorWithIOSClass:(IOSClass *)cls
                                                                withJavaLangReflectMethod:(JavaLangReflectMethod *)toString {
  return OrgJodaConvertAnnotationStringConverterFactory_findFromStringConstructorWithIOSClass_withJavaLangReflectMethod_(self, cls, toString);
}

- (OrgJodaConvertMethodsStringConverter *)findFromStringMethodWithIOSClass:(IOSClass *)cls
                                                 withJavaLangReflectMethod:(JavaLangReflectMethod *)toString
                                                               withBoolean:(jboolean)searchSuperclasses {
  return OrgJodaConvertAnnotationStringConverterFactory_findFromStringMethodWithIOSClass_withJavaLangReflectMethod_withBoolean_(self, cls, toString, searchSuperclasses);
}

- (JavaLangReflectMethod *)findFromStringWithIOSClass:(IOSClass *)cls {
  return OrgJodaConvertAnnotationStringConverterFactory_findFromStringWithIOSClass_(self, cls);
}

- (IOSClass *)eliminateEnumSubclassWithIOSClass:(IOSClass *)cls {
  return OrgJodaConvertAnnotationStringConverterFactory_eliminateEnumSubclassWithIOSClass_(self, cls);
}

- (NSString *)description {
  return [[self getClass] getSimpleName];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x2, -1, -1, -1, -1, -1, -1 },
    { NULL, "LOrgJodaConvertStringConverter;", 0x1, 0, 1, -1, 2, -1, -1 },
    { NULL, "LOrgJodaConvertStringConverter;", 0x2, 3, 1, -1, 4, -1, -1 },
    { NULL, "LJavaLangReflectMethod;", 0x2, 5, 1, -1, 6, -1, -1 },
    { NULL, "LOrgJodaConvertMethodConstructorStringConverter;", 0x2, 7, 8, -1, 9, -1, -1 },
    { NULL, "LOrgJodaConvertMethodsStringConverter;", 0x2, 10, 11, -1, 12, -1, -1 },
    { NULL, "LJavaLangReflectMethod;", 0x2, 13, 1, -1, 6, -1, -1 },
    { NULL, "LIOSClass;", 0x2, 14, 1, -1, 15, -1, -1 },
    { NULL, "LNSString;", 0x1, 16, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(findConverterWithIOSClass:);
  methods[2].selector = @selector(findAnnotatedConverterWithIOSClass:);
  methods[3].selector = @selector(findToStringMethodWithIOSClass:);
  methods[4].selector = @selector(findFromStringConstructorWithIOSClass:withJavaLangReflectMethod:);
  methods[5].selector = @selector(findFromStringMethodWithIOSClass:withJavaLangReflectMethod:withBoolean:);
  methods[6].selector = @selector(findFromStringWithIOSClass:);
  methods[7].selector = @selector(eliminateEnumSubclassWithIOSClass:);
  methods[8].selector = @selector(description);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE", "LOrgJodaConvertStringConverterFactory;", .constantValue.asLong = 0, 0x18, -1, 17, -1, -1 },
  };
  static const void *ptrTable[] = { "findConverter", "LIOSClass;", "(Ljava/lang/Class<*>;)Lorg/joda/convert/StringConverter<*>;", "findAnnotatedConverter", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Lorg/joda/convert/StringConverter<TT;>;", "findToStringMethod", "(Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", "findFromStringConstructor", "LIOSClass;LJavaLangReflectMethod;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/reflect/Method;)Lorg/joda/convert/MethodConstructorStringConverter<TT;>;", "findFromStringMethod", "LIOSClass;LJavaLangReflectMethod;Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/reflect/Method;Z)Lorg/joda/convert/MethodsStringConverter<TT;>;", "findFromString", "eliminateEnumSubclass", "(Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", "toString", &OrgJodaConvertAnnotationStringConverterFactory_INSTANCE };
  static const J2ObjcClassInfo _OrgJodaConvertAnnotationStringConverterFactory = { "AnnotationStringConverterFactory", "org.joda.convert", ptrTable, methods, fields, 7, 0x10, 9, 1, -1, -1, -1, -1, -1 };
  return &_OrgJodaConvertAnnotationStringConverterFactory;
}

+ (void)initialize {
  if (self == [OrgJodaConvertAnnotationStringConverterFactory class]) {
    OrgJodaConvertAnnotationStringConverterFactory_INSTANCE = new_OrgJodaConvertAnnotationStringConverterFactory_init();
    J2OBJC_SET_INITIALIZED(OrgJodaConvertAnnotationStringConverterFactory)
  }
}

@end

void OrgJodaConvertAnnotationStringConverterFactory_init(OrgJodaConvertAnnotationStringConverterFactory *self) {
  NSObject_init(self);
}

OrgJodaConvertAnnotationStringConverterFactory *new_OrgJodaConvertAnnotationStringConverterFactory_init() {
  J2OBJC_NEW_IMPL(OrgJodaConvertAnnotationStringConverterFactory, init)
}

OrgJodaConvertAnnotationStringConverterFactory *create_OrgJodaConvertAnnotationStringConverterFactory_init() {
  J2OBJC_CREATE_IMPL(OrgJodaConvertAnnotationStringConverterFactory, init)
}

id<OrgJodaConvertStringConverter> OrgJodaConvertAnnotationStringConverterFactory_findAnnotatedConverterWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls) {
  JavaLangReflectMethod *toString = OrgJodaConvertAnnotationStringConverterFactory_findToStringMethodWithIOSClass_(self, cls);
  if (toString == nil) {
    return nil;
  }
  OrgJodaConvertMethodConstructorStringConverter *con = OrgJodaConvertAnnotationStringConverterFactory_findFromStringConstructorWithIOSClass_withJavaLangReflectMethod_(self, cls, toString);
  OrgJodaConvertMethodsStringConverter *mth = OrgJodaConvertAnnotationStringConverterFactory_findFromStringMethodWithIOSClass_withJavaLangReflectMethod_withBoolean_(self, cls, toString, con == nil);
  if (con == nil && mth == nil) {
    @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Class annotated with @ToString but not with @FromString: ", [((IOSClass *) nil_chk(cls)) getName]));
  }
  if (con != nil && mth != nil) {
    @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Both method and constructor are annotated with @FromString: ", [((IOSClass *) nil_chk(cls)) getName]));
  }
  return (con != nil ? con : (id) mth);
}

JavaLangReflectMethod *OrgJodaConvertAnnotationStringConverterFactory_findToStringMethodWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls) {
  JavaLangReflectMethod *matched = nil;
  IOSClass *loopCls = cls;
  while (loopCls != nil && matched == nil) {
    IOSObjectArray *methods = [loopCls getDeclaredMethods];
    {
      IOSObjectArray *a__ = methods;
      JavaLangReflectMethod * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
      JavaLangReflectMethod * const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        JavaLangReflectMethod *method = *b__++;
        id<OrgJodaConvertToString> toString = ((id<OrgJodaConvertToString>) [((JavaLangReflectMethod *) nil_chk(method)) getAnnotationWithIOSClass:OrgJodaConvertToString_class_()]);
        if (toString != nil) {
          if (matched != nil) {
            @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Two methods are annotated with @ToString: ", [((IOSClass *) nil_chk(cls)) getName]));
          }
          matched = method;
        }
      }
    }
    loopCls = [loopCls getSuperclass];
  }
  if (matched == nil) {
    {
      IOSObjectArray *a__ = [((IOSClass *) nil_chk(OrgJodaConvertAnnotationStringConverterFactory_eliminateEnumSubclassWithIOSClass_(self, cls))) getInterfaces];
      IOSClass * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
      IOSClass * const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        IOSClass *loopIfc = *b__++;
        IOSObjectArray *methods = [((IOSClass *) nil_chk(loopIfc)) getDeclaredMethods];
        {
          IOSObjectArray *a__ = methods;
          JavaLangReflectMethod * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
          JavaLangReflectMethod * const *e__ = b__ + a__->size_;
          while (b__ < e__) {
            JavaLangReflectMethod *method = *b__++;
            id<OrgJodaConvertToString> toString = ((id<OrgJodaConvertToString>) [((JavaLangReflectMethod *) nil_chk(method)) getAnnotationWithIOSClass:OrgJodaConvertToString_class_()]);
            if (toString != nil) {
              if (matched != nil) {
                @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Two methods are annotated with @ToString on interfaces: ", [((IOSClass *) nil_chk(cls)) getName]));
              }
              matched = method;
            }
          }
        }
      }
    }
  }
  return matched;
}

OrgJodaConvertMethodConstructorStringConverter *OrgJodaConvertAnnotationStringConverterFactory_findFromStringConstructorWithIOSClass_withJavaLangReflectMethod_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls, JavaLangReflectMethod *toString) {
  JavaLangReflectConstructor *con;
  @try {
    con = [((IOSClass *) nil_chk(cls)) getDeclaredConstructor:[IOSObjectArray newArrayWithObjects:(id[]){ NSString_class_() } count:1 type:IOSClass_class_()]];
  }
  @catch (JavaLangNoSuchMethodException *ex) {
    @try {
      con = [cls getDeclaredConstructor:[IOSObjectArray newArrayWithObjects:(id[]){ JavaLangCharSequence_class_() } count:1 type:IOSClass_class_()]];
    }
    @catch (JavaLangNoSuchMethodException *ex2) {
      return nil;
    }
  }
  id<OrgJodaConvertFromString> fromString = ((id<OrgJodaConvertFromString>) [((JavaLangReflectConstructor *) nil_chk(con)) getAnnotationWithIOSClass:OrgJodaConvertFromString_class_()]);
  if (fromString == nil) {
    return nil;
  }
  return new_OrgJodaConvertMethodConstructorStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectConstructor_(cls, toString, con);
}

OrgJodaConvertMethodsStringConverter *OrgJodaConvertAnnotationStringConverterFactory_findFromStringMethodWithIOSClass_withJavaLangReflectMethod_withBoolean_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls, JavaLangReflectMethod *toString, jboolean searchSuperclasses) {
  IOSClass *loopCls = cls;
  while (loopCls != nil) {
    JavaLangReflectMethod *fromString = OrgJodaConvertAnnotationStringConverterFactory_findFromStringWithIOSClass_(self, loopCls);
    if (fromString != nil) {
      return new_OrgJodaConvertMethodsStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectMethod_withIOSClass_(cls, toString, fromString, loopCls);
    }
    if (searchSuperclasses == false) {
      break;
    }
    loopCls = [loopCls getSuperclass];
  }
  OrgJodaConvertMethodsStringConverter *matched = nil;
  if (searchSuperclasses) {
    {
      IOSObjectArray *a__ = [((IOSClass *) nil_chk(OrgJodaConvertAnnotationStringConverterFactory_eliminateEnumSubclassWithIOSClass_(self, cls))) getInterfaces];
      IOSClass * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
      IOSClass * const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        IOSClass *loopIfc = *b__++;
        JavaLangReflectMethod *fromString = OrgJodaConvertAnnotationStringConverterFactory_findFromStringWithIOSClass_(self, loopIfc);
        if (fromString != nil) {
          if (matched != nil) {
            @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Two different interfaces are annotated with @FromString or @FromStringFactory: ", [((IOSClass *) nil_chk(cls)) getName]));
          }
          matched = new_OrgJodaConvertMethodsStringConverter_initWithIOSClass_withJavaLangReflectMethod_withJavaLangReflectMethod_withIOSClass_(cls, toString, fromString, loopIfc);
        }
      }
    }
  }
  return matched;
}

JavaLangReflectMethod *OrgJodaConvertAnnotationStringConverterFactory_findFromStringWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls) {
  IOSObjectArray *methods = [((IOSClass *) nil_chk(cls)) getDeclaredMethods];
  JavaLangReflectMethod *matched = nil;
  {
    IOSObjectArray *a__ = methods;
    JavaLangReflectMethod * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    JavaLangReflectMethod * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      JavaLangReflectMethod *method = *b__++;
      id<OrgJodaConvertFromString> fromString = ((id<OrgJodaConvertFromString>) [((JavaLangReflectMethod *) nil_chk(method)) getAnnotationWithIOSClass:OrgJodaConvertFromString_class_()]);
      if (fromString != nil) {
        if (matched != nil) {
          @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Two methods are annotated with @FromString: ", [cls getName]));
        }
        matched = method;
      }
    }
  }
  id<OrgJodaConvertFromStringFactory> factory = ((id<OrgJodaConvertFromStringFactory>) [cls getAnnotationWithIOSClass:OrgJodaConvertFromStringFactory_class_()]);
  if (factory != nil) {
    if (matched != nil) {
      @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Class annotated with @FromString and @FromStringFactory: ", [cls getName]));
    }
    IOSObjectArray *factoryMethods = [((IOSClass *) nil_chk([factory factory])) getDeclaredMethods];
    {
      IOSObjectArray *a__ = factoryMethods;
      JavaLangReflectMethod * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
      JavaLangReflectMethod * const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        JavaLangReflectMethod *method = *b__++;
        if ([cls isAssignableFrom:[((JavaLangReflectMethod *) nil_chk(method)) getReturnType]]) {
          id<OrgJodaConvertFromString> fromString = ((id<OrgJodaConvertFromString>) [method getAnnotationWithIOSClass:OrgJodaConvertFromString_class_()]);
          if (fromString != nil) {
            if (matched != nil) {
              @throw new_JavaLangIllegalStateException_initWithNSString_(JreStrcat("$$", @"Two methods are annotated with @FromString on the factory: ", [((IOSClass *) nil_chk([factory factory])) getName]));
            }
            matched = method;
          }
        }
      }
    }
  }
  return matched;
}

IOSClass *OrgJodaConvertAnnotationStringConverterFactory_eliminateEnumSubclassWithIOSClass_(OrgJodaConvertAnnotationStringConverterFactory *self, IOSClass *cls) {
  IOSClass *sup = [((IOSClass *) nil_chk(cls)) getSuperclass];
  if (sup != nil && [sup getSuperclass] == (id) JavaLangEnum_class_()) {
    return sup;
  }
  return cls;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaConvertAnnotationStringConverterFactory)
