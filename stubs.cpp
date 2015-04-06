/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <MI.h>
#include "module.h"
#include "Pony_Class_Provider.h"

using namespace mi;

MI_EXTERN_C void MI_CALL Pony_Load(
    Pony_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Pony_Class_Provider* prov = new Pony_Class_Provider((Module*)selfModule);

    prov->Load(ctx);
    if (MI_RESULT_OK != r)
    {
        delete prov;
        MI_Context_PostResult(context, r);
        return;
    }
    *self = (Pony_Self*)prov;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C void MI_CALL Pony_Unload(
    Pony_Self* self,
    MI_Context* context)
{
    MI_Result r = MI_RESULT_OK;
    Context ctx(context, &r);
    Pony_Class_Provider* prov = (Pony_Class_Provider*)self;

    prov->Unload(ctx);
    delete ((Pony_Class_Provider*)self);
    MI_Context_PostResult(context, r);
}

MI_EXTERN_C void MI_CALL Pony_EnumerateInstances(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    Pony_Class_Provider* cxxSelf =((Pony_Class_Provider*)self);
    Context  cxxContext(context);

    cxxSelf->EnumerateInstances(
        cxxContext,
        nameSpace,
        __PropertySet(propertySet),
        __bool(keysOnly),
        filter);
}

MI_EXTERN_C void MI_CALL Pony_GetInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* instanceName,
    const MI_PropertySet* propertySet)
{
    Pony_Class_Provider* cxxSelf =((Pony_Class_Provider*)self);
    Context  cxxContext(context);
    Pony_Class cxxInstanceName(instanceName, true);

    cxxSelf->GetInstance(
        cxxContext,
        nameSpace,
        cxxInstanceName,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Pony_CreateInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* newInstance)
{
    Pony_Class_Provider* cxxSelf =((Pony_Class_Provider*)self);
    Context  cxxContext(context);
    Pony_Class cxxNewInstance(newInstance, false);

    cxxSelf->CreateInstance(cxxContext, nameSpace, cxxNewInstance);
}

MI_EXTERN_C void MI_CALL Pony_ModifyInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    Pony_Class_Provider* cxxSelf =((Pony_Class_Provider*)self);
    Context  cxxContext(context);
    Pony_Class cxxModifiedInstance(modifiedInstance, false);

    cxxSelf->ModifyInstance(
        cxxContext,
        nameSpace,
        cxxModifiedInstance,
        __PropertySet(propertySet));
}

MI_EXTERN_C void MI_CALL Pony_DeleteInstance(
    Pony_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const Pony* instanceName)
{
    Pony_Class_Provider* cxxSelf =((Pony_Class_Provider*)self);
    Context  cxxContext(context);
    Pony_Class cxxInstanceName(instanceName, true);

    cxxSelf->DeleteInstance(cxxContext, nameSpace, cxxInstanceName);
}


MI_EXTERN_C MI_SchemaDecl schemaDecl;

void MI_CALL Load(MI_Module_Self** self, struct _MI_Context* context)
{
    *self = (MI_Module_Self*)new Module;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL Unload(MI_Module_Self* self, struct _MI_Context* context)
{
    Module* module = (Module*)self;
    delete module;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

MI_EXTERN_C MI_EXPORT MI_Module* MI_MAIN_CALL MI_Main(MI_Server* server)
{
    /* WARNING: THIS FUNCTION AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT. */
    extern MI_Server* __mi_server;
    static MI_Module module;
    __mi_server = server;
    module.flags |= MI_MODULE_FLAG_STANDARD_QUALIFIERS;
    module.flags |= MI_MODULE_FLAG_CPLUSPLUS;
    module.charSize = sizeof(MI_Char);
    module.version = MI_VERSION;
    module.generatorVersion = MI_MAKE_VERSION(1,0,8);
    module.schemaDecl = &schemaDecl;
    module.Load = Load;
    module.Unload = Unload;
    return &module;
}

