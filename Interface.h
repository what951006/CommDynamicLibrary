#pragma once

#ifndef LIB_TEMPLATE_STATIC
	#ifndef LIB_TEMPLATE_EXPORT
		#define LIB_VPN_CORE __declspec(dllimport)
	#else
		#define LIB_VPN_CORE __declspec(dllexport)
	#endif // !LIB_VPN_EXPORT
#else
#define LIB_VPN_CORE
#endif // !LIB_VPN_STATIC


class TemplateClass
{

};


extern "C" LIB_VPN_CORE TemplateClass* CreateTemplateClass();
extern "C" LIB_VPN_CORE void DeleteTemplateClass(TemplateClass*);