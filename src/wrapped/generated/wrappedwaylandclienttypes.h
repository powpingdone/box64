/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.21) *
 *******************************************************************/
#ifndef __wrappedwaylandclientTYPES_H_
#define __wrappedwaylandclientTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFppp_t)(void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(wl_proxy_add_listener, iFppp_t)

#endif // __wrappedwaylandclientTYPES_H_
