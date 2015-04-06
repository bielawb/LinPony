/* @migen@ */
#include <MI.h>
#include "Pony_Class_Provider.h"

MI_BEGIN_NAMESPACE

Pony_Class_Provider::Pony_Class_Provider(
    Module* module) :
    m_Module(module)
{
}

Pony_Class_Provider::~Pony_Class_Provider()
{
}

void Pony_Class_Provider::Load(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void Pony_Class_Provider::Unload(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void Pony_Class_Provider::EnumerateInstances(
    Context& context,
    const String& nameSpace,
    const PropertySet& propertySet,
    bool keysOnly,
    const MI_Filter* filter)
{
    Pony_Class pony;
    pony.Name_value("Twilight Sparkle");
    pony.Colour_value("Lilac");
    pony.Sign_value("Star and sparkles");
    pony.Horn_value(true);
    pony.Wings_value(false);
    context.Post(pony);

    pony.Name_value("Rainbow Dash");
    pony.Colour_value("Blue");
    pony.Sign_value("Cloud and lightning");
    pony.Horn_value(false);
    pony.Wings_value(true);
    context.Post(pony);

    pony.Name_value("Pinky Pie");
    pony.Colour_value("Pink");
    pony.Sign_value("Baloons");
    pony.Horn_value(false);
    pony.Wings_value(false);
    context.Post(pony);

    pony.Name_value("Fluttershy");
    pony.Colour_value("GrayishGold");
    pony.Sign_value("Butterflies");
    pony.Horn_value(false);
    pony.Wings_value(true);
    context.Post(pony);

    pony.Name_value("Rarity");
    pony.Colour_value("LightGray");
    pony.Sign_value("Diamonds");
    pony.Horn_value(true);
    pony.Wings_value(false);
    context.Post(pony);

    pony.Name_value("Applejack");
    pony.Colour_value("Gamboge");
    pony.Sign_value("Apples");
    pony.Horn_value(false);
    pony.Wings_value(false);
    context.Post(pony);
  
    context.Post(MI_RESULT_OK);
}

void Pony_Class_Provider::GetInstance(
    Context& context,
    const String& nameSpace,
    const Pony_Class& instanceName,
    const PropertySet& propertySet)
{
    if (instanceName.Name_value() == "Twilight Sparkle")
    {
	Pony_Class pony;
	pony.Name_value("Twilight Sparkle");
	pony.Colour_value("Lilac");
	pony.Sign_value("Star and sparkles");
	pony.Horn_value(true);
	pony.Wings_value(false);
	context.Post(pony);
	context.Post(MI_RESULT_OK);
    }
    else if (instanceName.Name_value() == "Rainbow Dash")
    {
        Pony_Class pony;
        pony.Name_value("Rainbow Dash");
        pony.Colour_value("Blue");
        pony.Sign_value("Cloud and lightning");
        pony.Horn_value(false);
        pony.Wings_value(true);
        context.Post(pony);
        context.Post(MI_RESULT_OK);
    }
    else if (instanceName.Name_value() == "Pinky Pie")
    {
        Pony_Class pony;
	pony.Name_value("Pinky Pie");
	pony.Colour_value("Pink");
	pony.Sign_value("Baloons");
	pony.Horn_value(false);
	pony.Wings_value(false);
	context.Post(pony);
        context.Post(MI_RESULT_OK);
    }
    else if (instanceName.Name_value() == "Fluttershy")
    {
        Pony_Class pony;
	pony.Name_value("Fluttershy");
	pony.Colour_value("GrayishGold");
	pony.Sign_value("Butterflies");
	pony.Horn_value(false);
	pony.Wings_value(true);
	context.Post(pony);
        context.Post(MI_RESULT_OK);
    }
    else if (instanceName.Name_value() == "Rarity")
    {
        Pony_Class pony;
	pony.Name_value("Rarity");
	pony.Colour_value("LightGray");
	pony.Sign_value("Diamonds");
	pony.Horn_value(true);
	pony.Wings_value(false);
	context.Post(pony);
        context.Post(MI_RESULT_OK);
    }
    else if (instanceName.Name_value() == "Applejack")
    {
        Pony_Class pony;
	pony.Name_value("Applejack");
	pony.Colour_value("Gamboge");
	pony.Sign_value("Apples");
	pony.Horn_value(false);
	pony.Wings_value(false);
	context.Post(pony);
        context.Post(MI_RESULT_OK);
    }

    else
    {
        context.Post(MI_RESULT_NOT_FOUND);
    }
}

void Pony_Class_Provider::CreateInstance(
    Context& context,
    const String& nameSpace,
    const Pony_Class& newInstance)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Pony_Class_Provider::ModifyInstance(
    Context& context,
    const String& nameSpace,
    const Pony_Class& modifiedInstance,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void Pony_Class_Provider::DeleteInstance(
    Context& context,
    const String& nameSpace,
    const Pony_Class& instanceName)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}


MI_END_NAMESPACE
