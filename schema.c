/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <ctype.h>
#include <MI.h>
#include "Pony.h"

/*
**==============================================================================
**
** Schema Declaration
**
**==============================================================================
*/

extern MI_SchemaDecl schemaDecl;

/*
**==============================================================================
**
** Qualifier declarations
**
**==============================================================================
*/

/*
**==============================================================================
**
** Pony
**
**==============================================================================
*/

/* property Pony.Name */
static MI_CONST MI_PropertyDecl Pony_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Pony, Name), /* offset */
    MI_T("CIM_Pony"), /* origin */
    MI_T("CIM_Pony"), /* propagator */
    NULL,
};

/* property Pony.Colour */
static MI_CONST MI_PropertyDecl Pony_Colour_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637206, /* code */
    MI_T("Colour"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Pony, Colour), /* offset */
    MI_T("CIM_Pony"), /* origin */
    MI_T("CIM_Pony"), /* propagator */
    NULL,
};

/* property Pony.Sign */
static MI_CONST MI_PropertyDecl Pony_Sign_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736E04, /* code */
    MI_T("Sign"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Pony, Sign), /* offset */
    MI_T("CIM_Pony"), /* origin */
    MI_T("CIM_Pony"), /* propagator */
    NULL,
};

/* property Pony.Horn */
static MI_CONST MI_PropertyDecl Pony_Horn_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00686E04, /* code */
    MI_T("Horn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Pony, Horn), /* offset */
    MI_T("CIM_Pony"), /* origin */
    MI_T("CIM_Pony"), /* propagator */
    NULL,
};

/* property Pony.Wings */
static MI_CONST MI_PropertyDecl Pony_Wings_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00777305, /* code */
    MI_T("Wings"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(Pony, Wings), /* offset */
    MI_T("CIM_Pony"), /* origin */
    MI_T("CIM_Pony"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST Pony_props[] =
{
    &Pony_Name_prop,
    &Pony_Colour_prop,
    &Pony_Sign_prop,
    &Pony_Horn_prop,
    &Pony_Wings_prop,
};

static MI_CONST MI_ProviderFT Pony_funcs =
{
  (MI_ProviderFT_Load)Pony_Load,
  (MI_ProviderFT_Unload)Pony_Unload,
  (MI_ProviderFT_GetInstance)Pony_GetInstance,
  (MI_ProviderFT_EnumerateInstances)Pony_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)Pony_CreateInstance,
  (MI_ProviderFT_ModifyInstance)Pony_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)Pony_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class Pony */
MI_CONST MI_ClassDecl Pony_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637908, /* code */
    MI_T("CIM_Pony"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    Pony_props, /* properties */
    MI_COUNT(Pony_props), /* numProperties */
    sizeof(Pony), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &Pony_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** __mi_server
**
**==============================================================================
*/

MI_Server* __mi_server;
/*
**==============================================================================
**
** Schema
**
**==============================================================================
*/

static MI_ClassDecl MI_CONST* MI_CONST classes[] =
{
    &Pony_rtti,
};

MI_SchemaDecl schemaDecl =
{
    NULL, /* qualifierDecls */
    0, /* numQualifierDecls */
    classes, /* classDecls */
    MI_COUNT(classes), /* classDecls */
};

/*
**==============================================================================
**
** MI_Server Methods
**
**==============================================================================
*/

MI_Result MI_CALL MI_Server_GetVersion(
    MI_Uint32* version){
    return __mi_server->serverFT->GetVersion(version);
}

MI_Result MI_CALL MI_Server_GetSystemName(
    const MI_Char** systemName)
{
    return __mi_server->serverFT->GetSystemName(systemName);
}

