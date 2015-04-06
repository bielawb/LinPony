/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _Pony_h
#define _Pony_h

#include <MI.h>

/*
**==============================================================================
**
** Pony [CIM_Pony]
**
** Keys:
**    Name
**
**==============================================================================
*/

typedef struct _Pony
{
    MI_Instance __instance;
    /* Pony properties */
    /*KEY*/ MI_ConstStringField Name;
    MI_ConstStringField Colour;
    MI_ConstStringField Sign;
    MI_ConstBooleanField Horn;
    MI_ConstBooleanField Wings;
}
Pony;

typedef struct _Pony_Ref
{
    Pony* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Pony_Ref;

typedef struct _Pony_ConstRef
{
    MI_CONST Pony* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Pony_ConstRef;

typedef struct _Pony_Array
{
    struct _Pony** data;
    MI_Uint32 size;
}
Pony_Array;

typedef struct _Pony_ConstArray
{
    struct _Pony MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
Pony_ConstArray;

typedef struct _Pony_ArrayRef
{
    Pony_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Pony_ArrayRef;

typedef struct _Pony_ConstArrayRef
{
    Pony_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
Pony_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl Pony_rtti;

MI_INLINE MI_Result MI_CALL Pony_Construct(
    Pony* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &Pony_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL Pony_Clone(
    const Pony* self,
    Pony** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL Pony_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &Pony_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL Pony_Destruct(Pony* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Pony_Delete(Pony* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL Pony_Post(
    const Pony* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL Pony_Set_Name(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Pony_SetPtr_Name(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Pony_Clear_Name(
    Pony* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL Pony_Set_Colour(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Pony_SetPtr_Colour(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Pony_Clear_Colour(
    Pony* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL Pony_Set_Sign(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL Pony_SetPtr_Sign(
    Pony* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL Pony_Clear_Sign(
    Pony* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL Pony_Set_Horn(
    Pony* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Horn)->value = x;
    ((MI_BooleanField*)&self->Horn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Pony_Clear_Horn(
    Pony* self)
{
    memset((void*)&self->Horn, 0, sizeof(self->Horn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Pony_Set_Wings(
    Pony* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Wings)->value = x;
    ((MI_BooleanField*)&self->Wings)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL Pony_Clear_Wings(
    Pony* self)
{
    memset((void*)&self->Wings, 0, sizeof(self->Wings));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** Pony provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _Pony_Self Pony_Self;

MI_EXTERN_C void MI_CALL Pony_Load(
    Pony_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Pony_Unload(
    Pony_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL Pony_EnumerateInstances(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL Pony_GetInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Pony_CreateInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* newInstance);

MI_EXTERN_C void MI_CALL Pony_ModifyInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL Pony_DeleteInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* instanceName);


/*
**==============================================================================
**
** Pony_Class
**
**==============================================================================
*/

#ifdef __cplusplus
# include <micxx/micxx.h>

MI_BEGIN_NAMESPACE

class Pony_Class : public Instance
{
public:
    
    typedef Pony Self;
    
    Pony_Class() :
        Instance(&Pony_rtti)
    {
    }
    
    Pony_Class(
        const Pony* instanceName,
        bool keysOnly) :
        Instance(
            &Pony_rtti,
            &instanceName->__instance,
            keysOnly)
    {
    }
    
    Pony_Class(
        const MI_ClassDecl* clDecl,
        const MI_Instance* instance,
        bool keysOnly) :
        Instance(clDecl, instance, keysOnly)
    {
    }
    
    Pony_Class(
        const MI_ClassDecl* clDecl) :
        Instance(clDecl)
    {
    }
    
    Pony_Class& operator=(
        const Pony_Class& x)
    {
        CopyRef(x);
        return *this;
    }
    
    Pony_Class(
        const Pony_Class& x) :
        Instance(x)
    {
    }

    static const MI_ClassDecl* GetClassDecl()
    {
        return &Pony_rtti;
    }

    //
    // Pony_Class.Name
    //
    
    const Field<String>& Name() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n);
    }
    
    void Name(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n) = x;
    }
    
    const String& Name_value() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).value;
    }
    
    void Name_value(const String& x)
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Set(x);
    }
    
    bool Name_exists() const
    {
        const size_t n = offsetof(Self, Name);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Name_clear()
    {
        const size_t n = offsetof(Self, Name);
        GetField<String>(n).Clear();
    }

    //
    // Pony_Class.Colour
    //
    
    const Field<String>& Colour() const
    {
        const size_t n = offsetof(Self, Colour);
        return GetField<String>(n);
    }
    
    void Colour(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Colour);
        GetField<String>(n) = x;
    }
    
    const String& Colour_value() const
    {
        const size_t n = offsetof(Self, Colour);
        return GetField<String>(n).value;
    }
    
    void Colour_value(const String& x)
    {
        const size_t n = offsetof(Self, Colour);
        GetField<String>(n).Set(x);
    }
    
    bool Colour_exists() const
    {
        const size_t n = offsetof(Self, Colour);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Colour_clear()
    {
        const size_t n = offsetof(Self, Colour);
        GetField<String>(n).Clear();
    }

    //
    // Pony_Class.Sign
    //
    
    const Field<String>& Sign() const
    {
        const size_t n = offsetof(Self, Sign);
        return GetField<String>(n);
    }
    
    void Sign(const Field<String>& x)
    {
        const size_t n = offsetof(Self, Sign);
        GetField<String>(n) = x;
    }
    
    const String& Sign_value() const
    {
        const size_t n = offsetof(Self, Sign);
        return GetField<String>(n).value;
    }
    
    void Sign_value(const String& x)
    {
        const size_t n = offsetof(Self, Sign);
        GetField<String>(n).Set(x);
    }
    
    bool Sign_exists() const
    {
        const size_t n = offsetof(Self, Sign);
        return GetField<String>(n).exists ? true : false;
    }
    
    void Sign_clear()
    {
        const size_t n = offsetof(Self, Sign);
        GetField<String>(n).Clear();
    }

    //
    // Pony_Class.Horn
    //
    
    const Field<Boolean>& Horn() const
    {
        const size_t n = offsetof(Self, Horn);
        return GetField<Boolean>(n);
    }
    
    void Horn(const Field<Boolean>& x)
    {
        const size_t n = offsetof(Self, Horn);
        GetField<Boolean>(n) = x;
    }
    
    const Boolean& Horn_value() const
    {
        const size_t n = offsetof(Self, Horn);
        return GetField<Boolean>(n).value;
    }
    
    void Horn_value(const Boolean& x)
    {
        const size_t n = offsetof(Self, Horn);
        GetField<Boolean>(n).Set(x);
    }
    
    bool Horn_exists() const
    {
        const size_t n = offsetof(Self, Horn);
        return GetField<Boolean>(n).exists ? true : false;
    }
    
    void Horn_clear()
    {
        const size_t n = offsetof(Self, Horn);
        GetField<Boolean>(n).Clear();
    }

    //
    // Pony_Class.Wings
    //
    
    const Field<Boolean>& Wings() const
    {
        const size_t n = offsetof(Self, Wings);
        return GetField<Boolean>(n);
    }
    
    void Wings(const Field<Boolean>& x)
    {
        const size_t n = offsetof(Self, Wings);
        GetField<Boolean>(n) = x;
    }
    
    const Boolean& Wings_value() const
    {
        const size_t n = offsetof(Self, Wings);
        return GetField<Boolean>(n).value;
    }
    
    void Wings_value(const Boolean& x)
    {
        const size_t n = offsetof(Self, Wings);
        GetField<Boolean>(n).Set(x);
    }
    
    bool Wings_exists() const
    {
        const size_t n = offsetof(Self, Wings);
        return GetField<Boolean>(n).exists ? true : false;
    }
    
    void Wings_clear()
    {
        const size_t n = offsetof(Self, Wings);
        GetField<Boolean>(n).Clear();
    }
};

typedef Array<Pony_Class> Pony_ClassA;

MI_END_NAMESPACE

#endif /* __cplusplus */

#endif /* _Pony_h */
