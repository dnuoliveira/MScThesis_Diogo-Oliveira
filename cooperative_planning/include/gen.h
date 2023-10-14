/* This file was automatically generated by CasADi 3.6.3.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

#include <casadi/mem.h>
extern "C" int F(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
extern "C" int F_alloc_mem(void);
extern "C" int F_init_mem(int mem);
extern "C" void F_free_mem(int mem);
extern "C" int F_checkout(void);
extern "C" void F_release(int mem);
extern "C" void F_incref(void);
extern "C" void F_decref(void);
extern "C" casadi_int F_n_in(void);
extern "C" casadi_int F_n_out(void);
extern "C" casadi_real F_default_in(casadi_int i);
extern "C" const char* F_name_in(casadi_int i);
extern "C" const char* F_name_out(casadi_int i);
extern "C" const casadi_int* F_sparsity_in(casadi_int i);
extern "C" const casadi_int* F_sparsity_out(casadi_int i);
extern "C" int F_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define F_SZ_ARG 145
#define F_SZ_RES 88
#define F_SZ_IW 4640
#define F_SZ_W 77587
extern "C" casadi_functions* F_functions(void);
