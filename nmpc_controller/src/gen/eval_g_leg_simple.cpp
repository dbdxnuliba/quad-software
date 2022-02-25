/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_leg_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[40] = {36, 1, 0, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
static const casadi_int casadi_s1[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s2[32] = {28, 1, 0, 28, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

/* eval_g_leg_simple:(w[36],p[14])->(g[28]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a5, a6, a7, a8, a9;
  a0=arg[0]? arg[0][24] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=arg[0]? arg[0][6] : 0;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a2*a3);
  a4=(a1+a4);
  a5=5.0000000000000000e-01;
  a6=arg[0]? arg[0][12] : 0;
  a7=arg[0]? arg[0][15] : 0;
  a8=(a6+a7);
  a9=arg[0]? arg[0][18] : 0;
  a8=(a8+a9);
  a10=arg[0]? arg[0][21] : 0;
  a8=(a8+a10);
  a11=1.3300000000000001e+01;
  a8=(a8/a11);
  a8=(a5*a8);
  a12=casadi_sq(a3);
  a8=(a8*a12);
  a4=(a4+a8);
  a0=(a0-a4);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][25] : 0;
  a4=arg[0]? arg[0][1] : 0;
  a8=arg[0]? arg[0][7] : 0;
  a13=(a8*a3);
  a13=(a4+a13);
  a14=arg[0]? arg[0][13] : 0;
  a15=arg[0]? arg[0][16] : 0;
  a16=(a14+a15);
  a17=arg[0]? arg[0][19] : 0;
  a16=(a16+a17);
  a18=arg[0]? arg[0][22] : 0;
  a16=(a16+a18);
  a16=(a16/a11);
  a16=(a5*a16);
  a16=(a16*a12);
  a13=(a13+a16);
  a0=(a0-a13);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][26] : 0;
  a13=arg[0]? arg[0][2] : 0;
  a16=arg[0]? arg[0][8] : 0;
  a19=(a16*a3);
  a19=(a13+a19);
  a20=arg[0]? arg[0][14] : 0;
  a21=arg[0]? arg[0][17] : 0;
  a22=(a20+a21);
  a23=arg[0]? arg[0][20] : 0;
  a22=(a22+a23);
  a24=arg[0]? arg[0][23] : 0;
  a22=(a22+a24);
  a22=(a22/a11);
  a25=9.8100000000000005e+00;
  a22=(a22-a25);
  a5=(a5*a22);
  a5=(a5*a12);
  a19=(a19+a5);
  a0=(a0-a19);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][27] : 0;
  a19=arg[0]? arg[0][3] : 0;
  a0=(a0-a19);
  a0=(a0/a3);
  a5=arg[0]? arg[0][9] : 0;
  a12=arg[0]? arg[0][4] : 0;
  a22=cos(a12);
  a26=(a5*a22);
  a27=arg[0]? arg[0][11] : 0;
  a28=cos(a19);
  a29=(a27*a28);
  a30=sin(a12);
  a29=(a29*a30);
  a26=(a26+a29);
  a29=arg[0]? arg[0][10] : 0;
  a19=sin(a19);
  a31=(a29*a19);
  a31=(a31*a30);
  a26=(a26+a31);
  a26=(a26/a22);
  a0=(a0-a26);
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[0]? arg[0][28] : 0;
  a0=(a0-a12);
  a0=(a0/a3);
  a12=(a29*a28);
  a26=(a27*a19);
  a12=(a12-a26);
  a0=(a0-a12);
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[0]? arg[0][29] : 0;
  a12=arg[0]? arg[0][5] : 0;
  a0=(a0-a12);
  a0=(a0/a3);
  a26=(a27*a28);
  a31=(a29*a19);
  a26=(a26+a31);
  a26=(a26/a22);
  a0=(a0-a26);
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[0]? arg[0][30] : 0;
  a26=(a6+a7);
  a26=(a26+a9);
  a26=(a26+a10);
  a26=(a26/a11);
  a26=(a26*a3);
  a2=(a2+a26);
  a0=(a0-a2);
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[0]? arg[0][31] : 0;
  a2=(a14+a15);
  a2=(a2+a17);
  a2=(a2+a18);
  a2=(a2/a11);
  a2=(a2*a3);
  a8=(a8+a2);
  a0=(a0-a8);
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[0]? arg[0][32] : 0;
  a8=(a20+a21);
  a8=(a8+a23);
  a8=(a8+a24);
  a8=(a8/a11);
  a8=(a8-a25);
  a8=(a8*a3);
  a16=(a16+a8);
  a0=(a0-a16);
  if (res[0]!=0) res[0][8]=a0;
  a0=1.2102232626086960e-01;
  a16=arg[0]? arg[0][33] : 0;
  a16=(a16-a5);
  a0=(a0*a16);
  a0=(a0/a3);
  a8=5.6778848000000048e-02;
  a25=(a29*a27);
  a8=(a8*a25);
  a0=(a0+a8);
  a8=arg[1]? arg[1][3] : 0;
  a25=(a8-a4);
  a25=(a30*a25);
  a11=sin(a12);
  a2=(a22*a11);
  a26=arg[1]? arg[1][4] : 0;
  a26=(a26-a13);
  a2=(a2*a26);
  a25=(a25+a2);
  a25=(a25*a6);
  a2=arg[1]? arg[1][2] : 0;
  a31=(a2-a1);
  a32=(a30*a31);
  a12=cos(a12);
  a33=(a22*a12);
  a33=(a33*a26);
  a32=(a32+a33);
  a32=(a32*a14);
  a25=(a25-a32);
  a32=(a4*a12);
  a33=(a1*a11);
  a34=(a32-a33);
  a35=(a8*a12);
  a34=(a34-a35);
  a35=(a2*a11);
  a34=(a34+a35);
  a34=(a22*a34);
  a34=(a34*a20);
  a25=(a25-a34);
  a34=arg[1]? arg[1][6] : 0;
  a35=(a34-a4);
  a35=(a30*a35);
  a36=(a22*a11);
  a37=arg[1]? arg[1][7] : 0;
  a37=(a37-a13);
  a36=(a36*a37);
  a35=(a35+a36);
  a35=(a35*a7);
  a25=(a25+a35);
  a35=arg[1]? arg[1][5] : 0;
  a36=(a35-a1);
  a38=(a30*a36);
  a39=(a22*a12);
  a39=(a39*a37);
  a38=(a38+a39);
  a38=(a38*a15);
  a25=(a25-a38);
  a38=(a32-a33);
  a39=(a34*a12);
  a38=(a38-a39);
  a39=(a35*a11);
  a38=(a38+a39);
  a38=(a22*a38);
  a38=(a38*a21);
  a25=(a25-a38);
  a38=arg[1]? arg[1][9] : 0;
  a39=(a38-a4);
  a39=(a30*a39);
  a40=(a22*a11);
  a41=arg[1]? arg[1][10] : 0;
  a41=(a41-a13);
  a40=(a40*a41);
  a39=(a39+a40);
  a39=(a39*a9);
  a25=(a25+a39);
  a39=arg[1]? arg[1][8] : 0;
  a40=(a39-a1);
  a42=(a30*a40);
  a43=(a22*a12);
  a43=(a43*a41);
  a42=(a42+a43);
  a42=(a42*a17);
  a25=(a25-a42);
  a42=(a32-a33);
  a43=(a38*a12);
  a42=(a42-a43);
  a43=(a39*a11);
  a42=(a42+a43);
  a42=(a22*a42);
  a42=(a42*a23);
  a25=(a25-a42);
  a42=arg[1]? arg[1][12] : 0;
  a43=(a42-a4);
  a43=(a30*a43);
  a44=(a22*a11);
  a45=arg[1]? arg[1][13] : 0;
  a45=(a45-a13);
  a44=(a44*a45);
  a43=(a43+a44);
  a43=(a43*a10);
  a25=(a25+a43);
  a43=arg[1]? arg[1][11] : 0;
  a44=(a43-a1);
  a13=(a30*a44);
  a46=(a22*a12);
  a46=(a46*a45);
  a13=(a13+a46);
  a13=(a13*a18);
  a25=(a25-a13);
  a32=(a32-a33);
  a33=(a42*a12);
  a32=(a32-a33);
  a33=(a43*a11);
  a32=(a32+a33);
  a32=(a22*a32);
  a32=(a32*a24);
  a25=(a25-a32);
  a0=(a0-a25);
  if (res[0]!=0) res[0][9]=a0;
  a0=4.3125046780173909e-01;
  a25=(a0*a28);
  a32=arg[0]? arg[0][34] : 0;
  a32=(a32-a29);
  a25=(a25*a32);
  a33=-4.8802931580173908e-01;
  a33=(a33*a19);
  a13=arg[0]? arg[0][35] : 0;
  a13=(a13-a27);
  a33=(a33*a13);
  a25=(a25+a33);
  a25=(a25/a3);
  a33=-1.3877787807814460e-17;
  a46=26445640661418040.;
  a47=(a27*a28);
  a46=(a46*a47);
  a47=22354293482292820.;
  a48=(a29*a19);
  a47=(a47*a48);
  a46=(a46+a47);
  a46=(a5*a46);
  a33=(a33*a46);
  a25=(a25+a33);
  a33=(a12*a26);
  a33=(a33*a6);
  a26=(a11*a26);
  a26=(a26*a14);
  a33=(a33+a26);
  a1=(a1*a12);
  a26=(a4*a11);
  a46=(a1+a26);
  a2=(a2*a12);
  a46=(a46-a2);
  a2=(a8*a11);
  a46=(a46-a2);
  a46=(a46*a20);
  a33=(a33+a46);
  a46=(a12*a37);
  a46=(a46*a7);
  a33=(a33+a46);
  a37=(a11*a37);
  a37=(a37*a15);
  a33=(a33+a37);
  a37=(a1+a26);
  a35=(a35*a12);
  a37=(a37-a35);
  a35=(a34*a11);
  a37=(a37-a35);
  a37=(a37*a21);
  a33=(a33+a37);
  a37=(a12*a41);
  a37=(a37*a9);
  a33=(a33+a37);
  a41=(a11*a41);
  a41=(a41*a17);
  a33=(a33+a41);
  a41=(a1+a26);
  a39=(a39*a12);
  a41=(a41-a39);
  a39=(a38*a11);
  a41=(a41-a39);
  a41=(a41*a23);
  a33=(a33+a41);
  a41=(a12*a45);
  a41=(a41*a10);
  a33=(a33+a41);
  a45=(a11*a45);
  a45=(a45*a18);
  a33=(a33+a45);
  a1=(a1+a26);
  a43=(a43*a12);
  a1=(a1-a43);
  a11=(a42*a11);
  a1=(a1-a11);
  a1=(a1*a24);
  a33=(a33+a1);
  a25=(a25-a33);
  if (res[0]!=0) res[0][10]=a25;
  a25=-1.2102232626086960e-01;
  a25=(a25*a30);
  a25=(a25*a16);
  a16=(a22*a19);
  a0=(a0*a16);
  a0=(a0*a32);
  a25=(a25+a0);
  a0=4.8802931580173908e-01;
  a32=(a28*a22);
  a0=(a0*a32);
  a0=(a0*a13);
  a25=(a25+a0);
  a25=(a25/a3);
  a3=-5.6778848000000048e-02;
  a0=(a29*a27);
  a0=(a0*a30);
  a3=(a3*a0);
  a0=3.1022814154086947e-01;
  a29=(a5*a29);
  a29=(a29*a28);
  a29=(a29*a22);
  a0=(a0*a29);
  a3=(a3+a0);
  a0=3.6700698954086958e-01;
  a5=(a5*a27);
  a5=(a5*a22);
  a5=(a5*a19);
  a0=(a0*a5);
  a3=(a3-a0);
  a25=(a25+a3);
  a8=(a4-a8);
  a8=(a8*a6);
  a31=(a31*a14);
  a8=(a8+a31);
  a34=(a4-a34);
  a34=(a34*a7);
  a8=(a8+a34);
  a36=(a36*a15);
  a8=(a8+a36);
  a38=(a4-a38);
  a38=(a38*a9);
  a8=(a8+a38);
  a40=(a40*a17);
  a8=(a8+a40);
  a4=(a4-a42);
  a4=(a4*a10);
  a8=(a8+a4);
  a44=(a44*a18);
  a8=(a8+a44);
  a25=(a25-a8);
  if (res[0]!=0) res[0][11]=a25;
  a25=arg[1]? arg[1][1] : 0;
  a8=(a25*a20);
  a8=(a6-a8);
  if (res[0]!=0) res[0][12]=a8;
  a8=(a25*a20);
  a6=(a6+a8);
  a6=(-a6);
  if (res[0]!=0) res[0][13]=a6;
  a6=(a25*a20);
  a6=(a14-a6);
  if (res[0]!=0) res[0][14]=a6;
  a20=(a25*a20);
  a14=(a14+a20);
  a14=(-a14);
  if (res[0]!=0) res[0][15]=a14;
  a14=(a25*a21);
  a14=(a7-a14);
  if (res[0]!=0) res[0][16]=a14;
  a14=(a25*a21);
  a7=(a7+a14);
  a7=(-a7);
  if (res[0]!=0) res[0][17]=a7;
  a7=(a25*a21);
  a7=(a15-a7);
  if (res[0]!=0) res[0][18]=a7;
  a21=(a25*a21);
  a15=(a15+a21);
  a15=(-a15);
  if (res[0]!=0) res[0][19]=a15;
  a15=(a25*a23);
  a15=(a9-a15);
  if (res[0]!=0) res[0][20]=a15;
  a15=(a25*a23);
  a9=(a9+a15);
  a9=(-a9);
  if (res[0]!=0) res[0][21]=a9;
  a9=(a25*a23);
  a9=(a17-a9);
  if (res[0]!=0) res[0][22]=a9;
  a23=(a25*a23);
  a17=(a17+a23);
  a17=(-a17);
  if (res[0]!=0) res[0][23]=a17;
  a17=(a25*a24);
  a17=(a10-a17);
  if (res[0]!=0) res[0][24]=a17;
  a17=(a25*a24);
  a10=(a10+a17);
  a10=(-a10);
  if (res[0]!=0) res[0][25]=a10;
  a10=(a25*a24);
  a10=(a18-a10);
  if (res[0]!=0) res[0][26]=a10;
  a25=(a25*a24);
  a18=(a18+a25);
  a18=(-a18);
  if (res[0]!=0) res[0][27]=a18;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

