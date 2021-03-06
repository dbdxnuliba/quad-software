/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_g_tail_ ## ID
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

static const casadi_int casadi_s0[50] = {46, 1, 0, 46, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
static const casadi_int casadi_s1[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s2[36] = {32, 1, 0, 32, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

/* eval_g_tail:(w[46],p[13])->(g[32]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][30] : 0;
  a1=arg[0]? arg[0][0] : 0;
  a2=arg[0]? arg[0][8] : 0;
  a3=arg[1]? arg[1][0] : 0;
  a4=(a2*a3);
  a1=(a1+a4);
  a4=5.0000000000000000e-001;
  a5=arg[0]? arg[0][18] : 0;
  a6=arg[0]? arg[0][21] : 0;
  a7=(a5+a6);
  a8=arg[0]? arg[0][24] : 0;
  a7=(a7+a8);
  a9=arg[0]? arg[0][27] : 0;
  a7=(a7+a9);
  a10=1.1661999999999999e+001;
  a7=(a7/a10);
  a7=(a4*a7);
  a11=casadi_sq(a3);
  a7=(a7*a11);
  a1=(a1+a7);
  a0=(a0-a1);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0]? arg[0][31] : 0;
  a1=arg[0]? arg[0][1] : 0;
  a7=arg[0]? arg[0][9] : 0;
  a12=(a7*a3);
  a1=(a1+a12);
  a12=arg[0]? arg[0][19] : 0;
  a13=arg[0]? arg[0][22] : 0;
  a14=(a12+a13);
  a15=arg[0]? arg[0][25] : 0;
  a14=(a14+a15);
  a16=arg[0]? arg[0][28] : 0;
  a14=(a14+a16);
  a14=(a14/a10);
  a14=(a4*a14);
  a14=(a14*a11);
  a1=(a1+a14);
  a0=(a0-a1);
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][32] : 0;
  a1=arg[0]? arg[0][2] : 0;
  a14=arg[0]? arg[0][10] : 0;
  a17=(a14*a3);
  a1=(a1+a17);
  a17=arg[0]? arg[0][20] : 0;
  a18=arg[0]? arg[0][23] : 0;
  a19=(a17+a18);
  a20=arg[0]? arg[0][26] : 0;
  a19=(a19+a20);
  a21=arg[0]? arg[0][29] : 0;
  a19=(a19+a21);
  a19=(a19/a10);
  a22=9.8100000000000005e+000;
  a19=(a19-a22);
  a4=(a4*a19);
  a4=(a4*a11);
  a1=(a1+a4);
  a0=(a0-a1);
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0]? arg[0][33] : 0;
  a1=arg[0]? arg[0][3] : 0;
  a4=(a0-a1);
  a4=(a4/a3);
  a11=arg[0]? arg[0][11] : 0;
  a19=arg[0]? arg[0][41] : 0;
  a23=(a11+a19);
  a24=2.;
  a23=(a23/a24);
  a25=arg[0]? arg[0][4] : 0;
  a26=arg[0]? arg[0][34] : 0;
  a27=(a25+a26);
  a27=(a27/a24);
  a28=cos(a27);
  a29=(a23*a28);
  a30=arg[0]? arg[0][13] : 0;
  a31=arg[0]? arg[0][43] : 0;
  a32=(a30+a31);
  a32=(a32/a24);
  a1=(a1+a0);
  a1=(a1/a24);
  a0=cos(a1);
  a33=(a32*a0);
  a27=sin(a27);
  a33=(a33*a27);
  a29=(a29+a33);
  a33=arg[0]? arg[0][12] : 0;
  a34=arg[0]? arg[0][42] : 0;
  a35=(a33+a34);
  a35=(a35/a24);
  a36=sin(a1);
  a37=(a35*a36);
  a37=(a37*a27);
  a29=(a29+a37);
  a29=(a29/a28);
  a4=(a4-a29);
  if (res[0]!=0) res[0][3]=a4;
  a26=(a26-a25);
  a26=(a26/a3);
  a25=(a35*a0);
  a4=(a32*a36);
  a25=(a25-a4);
  a26=(a26-a25);
  if (res[0]!=0) res[0][4]=a26;
  a26=arg[0]? arg[0][35] : 0;
  a25=arg[0]? arg[0][5] : 0;
  a4=(a26-a25);
  a4=(a4/a3);
  a29=(a32*a0);
  a37=(a35*a36);
  a29=(a29+a37);
  a29=(a29/a28);
  a4=(a4-a29);
  if (res[0]!=0) res[0][5]=a4;
  a4=arg[0]? arg[0][36] : 0;
  a29=arg[0]? arg[0][6] : 0;
  a37=(a4-a29);
  a37=(a37/a3);
  a38=arg[0]? arg[0][14] : 0;
  a39=arg[0]? arg[0][44] : 0;
  a40=(a38+a39);
  a40=(a40/a24);
  a37=(a37-a40);
  if (res[0]!=0) res[0][6]=a37;
  a37=arg[0]? arg[0][37] : 0;
  a41=arg[0]? arg[0][7] : 0;
  a42=(a37-a41);
  a42=(a42/a3);
  a43=arg[0]? arg[0][15] : 0;
  a44=arg[0]? arg[0][45] : 0;
  a45=(a43+a44);
  a45=(a45/a24);
  a42=(a42-a45);
  if (res[0]!=0) res[0][7]=a42;
  a42=arg[0]? arg[0][38] : 0;
  a46=(a5+a6);
  a46=(a46+a8);
  a46=(a46+a9);
  a46=(a46/a10);
  a46=(a46*a3);
  a46=(a2+a46);
  a46=(a42-a46);
  if (res[0]!=0) res[0][8]=a46;
  a46=arg[0]? arg[0][39] : 0;
  a47=(a12+a13);
  a47=(a47+a15);
  a47=(a47+a16);
  a47=(a47/a10);
  a47=(a47*a3);
  a47=(a7+a47);
  a47=(a46-a47);
  if (res[0]!=0) res[0][9]=a47;
  a47=arg[0]? arg[0][40] : 0;
  a48=(a17+a18);
  a48=(a48+a20);
  a48=(a48+a21);
  a48=(a48/a10);
  a48=(a48-a22);
  a48=(a48*a3);
  a48=(a14+a48);
  a48=(a47-a48);
  if (res[0]!=0) res[0][10]=a48;
  a48=3.1199999999999999e-002;
  a25=(a25+a26);
  a25=(a25/a24);
  a26=sin(a25);
  a22=(a0*a26);
  a22=(a48*a22);
  a25=cos(a25);
  a10=(a25*a36);
  a10=(a10*a27);
  a10=(a48*a10);
  a22=(a22-a10);
  a10=3.2400000000000001e-001;
  a41=(a41+a37);
  a37=(a41/a24);
  a49=cos(a37);
  a29=(a29+a4);
  a29=(a29/a24);
  a24=cos(a29);
  a4=(a24*a0);
  a4=(a4*a26);
  a50=(a49*a4);
  a50=(a10*a50);
  a22=(a22+a50);
  a50=sin(a29);
  a51=(a50*a36);
  a51=(a51*a26);
  a52=(a49*a51);
  a52=(a10*a52);
  a22=(a22-a52);
  a52=(a24*a25);
  a52=(a52*a36);
  a52=(a52*a27);
  a53=(a49*a52);
  a53=(a10*a53);
  a22=(a22-a53);
  a53=(a0*a25);
  a53=(a53*a50);
  a53=(a53*a27);
  a54=(a49*a53);
  a54=(a10*a54);
  a22=(a22-a54);
  a42=(a42-a2);
  a22=(a22*a42);
  a2=(a25*a50);
  a2=(a2*a36);
  a54=(a49*a2);
  a54=(a10*a54);
  a55=(a0*a25);
  a55=(a48*a55);
  a56=(a36*a27);
  a56=(a56*a26);
  a56=(a48*a56);
  a56=(a55+a56);
  a54=(a54-a56);
  a56=(a24*a0);
  a56=(a56*a25);
  a57=(a49*a56);
  a57=(a10*a57);
  a54=(a54-a57);
  a57=(a24*a36);
  a57=(a57*a27);
  a57=(a57*a26);
  a58=(a49*a57);
  a58=(a10*a58);
  a54=(a54-a58);
  a58=(a0*a50);
  a58=(a58*a27);
  a58=(a58*a26);
  a59=(a49*a58);
  a59=(a10*a59);
  a54=(a54-a59);
  a46=(a46-a7);
  a54=(a54*a46);
  a22=(a22+a54);
  a54=2.3999999999999998e-003;
  a7=13.;
  a59=(a7*a36);
  a60=135.;
  a61=(a24*a49);
  a61=(a61*a36);
  a61=(a60*a61);
  a59=(a59+a61);
  a61=(a49*a0);
  a61=(a61*a50);
  a61=(a60*a61);
  a59=(a59+a61);
  a61=(a28*a59);
  a61=(a54*a61);
  a47=(a47-a14);
  a61=(a61*a47);
  a22=(a22-a61);
  a61=1.7496000000000000e-001;
  a14=casadi_sq(a49);
  a62=(a61*a14);
  a63=3.3695999999999997e-002;
  a64=(a24*a49);
  a64=(a63*a64);
  a64=(a62+a64);
  a65=1.0900124800000000e-001;
  a64=(a64+a65);
  a19=(a19-a11);
  a64=(a64*a19);
  a22=(a22+a64);
  a64=(a49*a50);
  a11=sin(a37);
  a64=(a64*a11);
  a64=(a61*a64);
  a34=(a34-a33);
  a33=(a64*a34);
  a22=(a22+a33);
  a33=-1.2960000000000001e-003;
  a65=(a24*a49);
  a65=(a60*a65);
  a65=(a65+a7);
  a65=(a11*a65);
  a33=(a33*a65);
  a31=(a31-a30);
  a33=(a33*a31);
  a22=(a22+a33);
  a33=1.6847999999999998e-002;
  a30=(a24*a49);
  a30=(a33*a30);
  a30=(a30+a62);
  a65=5.9999999999999995e-004;
  a30=(a30+a65);
  a39=(a39-a38);
  a38=(a30*a39);
  a22=(a22+a38);
  a38=(a50*a11);
  a38=(a33*a38);
  a44=(a44-a43);
  a43=(a38*a44);
  a22=(a22-a43);
  a22=(a22/a3);
  a43=(a35*a45);
  a43=(a43*a50);
  a43=(a65*a43);
  a66=(a32*a45);
  a66=(a66*a24);
  a66=(a65*a66);
  a67=(a43-a66);
  a68=(a35*a32);
  a68=(a68*a62);
  a67=(a67+a68);
  a69=3.4992000000000001e-001;
  a70=(a35*a45);
  a70=(a70*a50);
  a70=(a70*a14);
  a70=(a69*a70);
  a67=(a67+a70);
  a71=(a23*a45);
  a41=sin(a41);
  a71=(a71*a41);
  a71=(a61*a71);
  a67=(a67-a71);
  a72=(a40*a45);
  a72=(a72*a41);
  a72=(a61*a72);
  a67=(a67-a72);
  a73=(a49*a50);
  a74=casadi_sq(a35);
  a73=(a73*a74);
  a73=(a33*a73);
  a67=(a67+a73);
  a75=(a32*a45);
  a75=(a75*a24);
  a75=(a75*a14);
  a75=(a69*a75);
  a67=(a67-a75);
  a76=(a23*a35);
  a76=(a76*a24);
  a76=(a76*a49);
  a76=(a76*a11);
  a76=(a61*a76);
  a67=(a67-a76);
  a77=-1.7496000000000000e-001;
  a78=(a23*a32);
  a78=(a78*a49);
  a78=(a78*a50);
  a78=(a78*a11);
  a78=(a77*a78);
  a67=(a67+a78);
  a79=(a35*a32);
  a80=casadi_sq(a24);
  a79=(a79*a80);
  a79=(a79*a14);
  a79=(a69*a79);
  a67=(a67-a79);
  a81=(a24*a50);
  a81=(a81*a74);
  a81=(a81*a62);
  a67=(a67+a81);
  a82=3.1784400000000002e+000;
  a83=(a24*a49);
  a83=(a83*a28);
  a83=(a83*a36);
  a83=(a82*a83);
  a67=(a67-a83);
  a84=(a49*a0);
  a84=(a84*a28);
  a84=(a84*a50);
  a84=(a82*a84);
  a67=(a67-a84);
  a85=(a24*a50);
  a86=casadi_sq(a32);
  a85=(a85*a86);
  a85=(a85*a14);
  a85=(a77*a85);
  a67=(a67+a85);
  a87=5.5156447999999990e-002;
  a88=(a35*a32);
  a88=(a87*a88);
  a67=(a67+a88);
  a88=3.0607200000000001e-001;
  a89=(a28*a36);
  a89=(a88*a89);
  a67=(a67-a89);
  a89=(a23*a35);
  a89=(a89*a11);
  a89=(a33*a89);
  a67=(a67-a89);
  a89=(a32*a45);
  a89=(a89*a49);
  a89=(a63*a89);
  a67=(a67-a89);
  a89=(a49*a50);
  a89=(a89*a86);
  a89=(a33*a89);
  a67=(a67-a89);
  a89=(a49*a50);
  a90=casadi_sq(a40);
  a89=(a89*a90);
  a89=(a33*a89);
  a67=(a67-a89);
  a89=(a49*a50);
  a91=casadi_sq(a45);
  a89=(a89*a91);
  a89=(a33*a89);
  a67=(a67-a89);
  a89=(a35*a32);
  a89=(a89*a24);
  a89=(a89*a49);
  a89=(a63*a89);
  a67=(a67-a89);
  a89=(a23*a40);
  a89=(a89*a49);
  a89=(a89*a50);
  a89=(a63*a89);
  a67=(a67-a89);
  a89=(a23*a45);
  a89=(a89*a24);
  a89=(a89*a11);
  a89=(a63*a89);
  a67=(a67-a89);
  a89=-3.3695999999999997e-002;
  a92=(a40*a45);
  a92=(a92*a24);
  a92=(a92*a11);
  a89=(a89*a92);
  a67=(a67+a89);
  a22=(a22+a67);
  a67=arg[1]? arg[1][1] : 0;
  a89=(a67*a27);
  a92=arg[1]? arg[1][3] : 0;
  a93=(a92*a28);
  a93=(a93*a25);
  a89=(a89+a93);
  a89=(a89*a12);
  a93=arg[1]? arg[1][2] : 0;
  a94=(a93*a27);
  a95=(a92*a28);
  a95=(a95*a26);
  a94=(a94+a95);
  a94=(a94*a5);
  a89=(a89-a94);
  a94=(a93*a25);
  a95=(a67*a26);
  a94=(a94-a95);
  a94=(a28*a94);
  a94=(a94*a17);
  a89=(a89-a94);
  a94=arg[1]? arg[1][5] : 0;
  a95=(a94*a27);
  a96=arg[1]? arg[1][6] : 0;
  a97=(a96*a28);
  a97=(a97*a26);
  a95=(a95+a97);
  a95=(a95*a6);
  a89=(a89-a95);
  a95=arg[1]? arg[1][4] : 0;
  a97=(a95*a27);
  a98=(a96*a28);
  a98=(a98*a25);
  a97=(a97+a98);
  a97=(a97*a13);
  a89=(a89+a97);
  a97=(a94*a25);
  a98=(a95*a26);
  a97=(a97-a98);
  a97=(a28*a97);
  a97=(a97*a18);
  a89=(a89-a97);
  a97=arg[1]? arg[1][8] : 0;
  a98=(a97*a27);
  a99=arg[1]? arg[1][9] : 0;
  a100=(a99*a28);
  a100=(a100*a26);
  a98=(a98+a100);
  a98=(a98*a8);
  a89=(a89-a98);
  a98=arg[1]? arg[1][7] : 0;
  a100=(a98*a27);
  a101=(a99*a28);
  a101=(a101*a25);
  a100=(a100+a101);
  a100=(a100*a15);
  a89=(a89+a100);
  a100=(a97*a25);
  a101=(a98*a26);
  a100=(a100-a101);
  a100=(a28*a100);
  a100=(a100*a20);
  a89=(a89-a100);
  a100=arg[1]? arg[1][11] : 0;
  a101=(a100*a27);
  a102=arg[1]? arg[1][12] : 0;
  a103=(a102*a28);
  a103=(a103*a26);
  a101=(a101+a103);
  a101=(a101*a9);
  a89=(a89-a101);
  a101=arg[1]? arg[1][10] : 0;
  a103=(a101*a27);
  a104=(a102*a28);
  a104=(a104*a25);
  a103=(a103+a104);
  a103=(a103*a16);
  a89=(a89+a103);
  a103=(a100*a25);
  a104=(a101*a26);
  a103=(a103-a104);
  a103=(a28*a103);
  a103=(a103*a21);
  a89=(a89-a103);
  a22=(a22-a89);
  if (res[0]!=0) res[0][11]=a22;
  a22=(a0*a28);
  a7=(a7*a22);
  a22=(a11*a27);
  a22=(a60*a22);
  a7=(a7-a22);
  a22=(a24*a49);
  a22=(a22*a0);
  a22=(a22*a28);
  a22=(a60*a22);
  a7=(a7+a22);
  a22=(a49*a28);
  a22=(a22*a50);
  a22=(a22*a36);
  a60=(a60*a22);
  a7=(a7-a60);
  a60=(a25*a7);
  a60=(a54*a60);
  a60=(a60*a42);
  a7=(a26*a7);
  a54=(a54*a7);
  a54=(a54*a46);
  a60=(a60+a54);
  a54=-3.2400000000000001e-001;
  a7=(a28*a11);
  a54=(a54*a7);
  a7=(a0*a27);
  a7=(a48*a7);
  a54=(a54-a7);
  a7=(a50*a36);
  a22=(a49*a27);
  a22=(a10*a22);
  a7=(a7*a22);
  a54=(a54+a7);
  a7=(a24*a49);
  a7=(a7*a0);
  a7=(a7*a27);
  a7=(a10*a7);
  a54=(a54-a7);
  a54=(a54*a47);
  a60=(a60+a54);
  a54=1.2960000000000001e-003;
  a59=(a11*a59);
  a54=(a54*a59);
  a54=(a54*a19);
  a60=(a60+a54);
  a54=5.7994591127999995e-001;
  a59=(a54*a0);
  a7=(a0*a14);
  a7=(a61*a7);
  a59=(a59-a7);
  a7=(a24*a49);
  a7=(a7*a0);
  a7=(a63*a7);
  a59=(a59+a7);
  a7=(a49*a50);
  a7=(a7*a36);
  a7=(a33*a7);
  a59=(a59-a7);
  a7=(a0*a80);
  a7=(a7*a62);
  a59=(a59+a7);
  a7=(a24*a50);
  a7=(a7*a36);
  a7=(a7*a14);
  a7=(a61*a7);
  a59=(a59-a7);
  a59=(a59*a34);
  a60=(a60+a59);
  a59=-6.3510235928000003e-001;
  a59=(a59*a36);
  a7=(a49*a0);
  a7=(a7*a50);
  a7=(a33*a7);
  a59=(a59+a7);
  a7=(a36*a80);
  a7=(a7*a62);
  a59=(a59+a7);
  a7=(a24*a0);
  a7=(a7*a50);
  a7=(a7*a62);
  a59=(a59+a7);
  a59=(a59*a31);
  a60=(a60+a59);
  a59=8.7480000000000002e-002;
  a29=(a29+a1);
  a7=sin(a29);
  a89=(a41*a7);
  a89=(a59*a89);
  a89=(a89*a39);
  a60=(a60+a89);
  a89=8.4239999999999992e-003;
  a103=(a37-a1);
  a103=cos(a103);
  a103=(a89*a103);
  a37=(a37+a1);
  a37=cos(a37);
  a89=(a89*a37);
  a103=(a103+a89);
  a89=1.7555999999999999e-001;
  a29=cos(a29);
  a29=(a89*a29);
  a103=(a103+a29);
  a103=(a103*a44);
  a60=(a60+a103);
  a60=(a60/a3);
  a103=-3.1784400000000002e+000;
  a29=(a28*a11);
  a29=(a103*a29);
  a37=(a0*a27);
  a88=(a88*a37);
  a29=(a29-a88);
  a88=5.2610111128000003e-001;
  a37=(a23*a32);
  a37=(a37*a0);
  a37=(a88*a37);
  a29=(a29-a37);
  a37=4.7094466328000001e-001;
  a1=(a23*a35);
  a1=(a1*a36);
  a1=(a37*a1);
  a29=(a29-a1);
  a1=(a32*a40);
  a1=(a1*a0);
  a1=(a65*a1);
  a29=(a29+a1);
  a1=(a35*a40);
  a1=(a1*a36);
  a1=(a65*a1);
  a29=(a29+a1);
  a1=(a0*a11);
  a104=casadi_sq(a23);
  a1=(a1*a104);
  a1=(a33*a1);
  a29=(a29+a1);
  a1=(a0*a11);
  a1=(a1*a86);
  a1=(a33*a1);
  a29=(a29-a1);
  a1=(a0*a11);
  a1=(a1*a91);
  a1=(a33*a1);
  a29=(a29-a1);
  a1=(a36*a74);
  a1=(a1*a64);
  a29=(a29+a1);
  a1=-1.6847999999999998e-002;
  a105=(a35*a32);
  a105=(a105*a11);
  a105=(a105*a36);
  a105=(a1*a105);
  a106=(a23*a35);
  a106=(a106*a36);
  a106=(a106*a14);
  a106=(a69*a106);
  a105=(a105+a106);
  a106=(a23*a32);
  a106=(a106*a0);
  a106=(a106*a62);
  a105=(a105+a106);
  a106=(a35*a32);
  a106=(a106*a0);
  a106=(a106*a64);
  a105=(a105+a106);
  a106=3.5052000000000000e-001;
  a107=(a23*a45);
  a107=(a107*a24);
  a107=(a107*a36);
  a107=(a106*a107);
  a105=(a105-a107);
  a107=(a23*a45);
  a107=(a107*a0);
  a107=(a107*a50);
  a107=(a106*a107);
  a105=(a105-a107);
  a107=(a35*a40);
  a107=(a107*a36);
  a107=(a107*a14);
  a107=(a69*a107);
  a105=(a105+a107);
  a107=(a40*a45);
  a107=(a107*a24);
  a107=(a107*a36);
  a107=(a106*a107);
  a105=(a105-a107);
  a107=(a40*a45);
  a107=(a107*a0);
  a107=(a107*a50);
  a107=(a106*a107);
  a105=(a105-a107);
  a107=(a24*a49);
  a107=(a107*a0);
  a107=(a107*a27);
  a107=(a82*a107);
  a105=(a105-a107);
  a107=(a49*a50);
  a107=(a107*a36);
  a107=(a107*a27);
  a107=(a82*a107);
  a105=(a105+a107);
  a107=(a23*a32);
  a107=(a107*a24);
  a107=(a107*a49);
  a107=(a107*a0);
  a107=(a63*a107);
  a105=(a105+a107);
  a107=(a23*a35);
  a107=(a107*a49);
  a107=(a107*a0);
  a107=(a107*a50);
  a107=(a33*a107);
  a105=(a105-a107);
  a29=(a29+a105);
  a105=(a23*a32);
  a105=(a105*a49);
  a105=(a105*a50);
  a105=(a105*a36);
  a1=(a1*a105);
  a105=(a23*a35);
  a105=(a105*a36);
  a105=(a105*a80);
  a105=(a105*a14);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a23*a32);
  a105=(a105*a0);
  a105=(a105*a80);
  a105=(a105*a62);
  a1=(a1+a105);
  a105=(a32*a40);
  a105=(a105*a24);
  a105=(a105*a49);
  a105=(a105*a0);
  a105=(a63*a105);
  a1=(a1+a105);
  a105=(a35*a40);
  a105=(a105*a49);
  a105=(a105*a0);
  a105=(a105*a50);
  a105=(a63*a105);
  a1=(a1-a105);
  a105=(a35*a45);
  a105=(a105*a24);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a63*a105);
  a1=(a1-a105);
  a105=(a35*a45);
  a105=(a105*a49);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a69*a105);
  a1=(a1+a105);
  a105=(a32*a45);
  a105=(a105*a0);
  a105=(a105*a50);
  a105=(a105*a11);
  a105=(a63*a105);
  a1=(a1-a105);
  a105=(a23*a45);
  a105=(a105*a24);
  a105=(a105*a36);
  a105=(a105*a14);
  a105=(a69*a105);
  a1=(a1+a105);
  a105=(a23*a45);
  a105=(a105*a0);
  a105=(a105*a50);
  a105=(a105*a14);
  a105=(a69*a105);
  a1=(a1+a105);
  a105=(a32*a40);
  a105=(a105*a0);
  a105=(a105*a80);
  a105=(a105*a14);
  a105=(a69*a105);
  a1=(a1+a105);
  a105=(a35*a40);
  a105=(a105*a36);
  a105=(a105*a80);
  a105=(a105*a14);
  a105=(a69*a105);
  a1=(a1-a105);
  a105=(a40*a45);
  a105=(a105*a24);
  a105=(a105*a36);
  a105=(a105*a14);
  a105=(a69*a105);
  a1=(a1+a105);
  a29=(a29+a1);
  a1=(a40*a45);
  a1=(a1*a0);
  a1=(a1*a50);
  a1=(a1*a14);
  a1=(a69*a1);
  a105=(a24*a49);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a105*a104);
  a105=(a61*a105);
  a1=(a1+a105);
  a105=(a24*a49);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a105*a86);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a24*a49);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a105*a90);
  a105=(a61*a105);
  a1=(a1+a105);
  a105=(a49*a50);
  a105=(a105*a11);
  a105=(a105*a36);
  a105=(a105*a104);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a49*a50);
  a105=(a105*a11);
  a105=(a105*a36);
  a105=(a105*a90);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a35*a32);
  a105=(a105*a24);
  a105=(a105*a49);
  a105=(a105*a11);
  a105=(a105*a36);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a23*a35);
  a105=(a105*a24);
  a105=(a105*a0);
  a105=(a105*a50);
  a105=(a105*a14);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a23*a32);
  a105=(a105*a24);
  a105=(a105*a50);
  a105=(a105*a36);
  a105=(a105*a14);
  a105=(a61*a105);
  a1=(a1-a105);
  a105=(a23*a40);
  a105=(a105*a24);
  a105=(a105*a49);
  a105=(a105*a0);
  a105=(a105*a11);
  a105=(a69*a105);
  a1=(a1+a105);
  a105=(a23*a40);
  a105=(a105*a49);
  a105=(a105*a50);
  a105=(a105*a11);
  a105=(a105*a36);
  a105=(a69*a105);
  a1=(a1-a105);
  a29=(a29+a1);
  a1=-3.4992000000000001e-001;
  a105=(a35*a40);
  a105=(a105*a24);
  a105=(a105*a0);
  a105=(a105*a50);
  a105=(a105*a14);
  a105=(a1*a105);
  a107=(a35*a45);
  a107=(a107*a49);
  a107=(a107*a0);
  a107=(a107*a11);
  a107=(a107*a80);
  a107=(a69*a107);
  a105=(a105-a107);
  a107=(a32*a40);
  a107=(a107*a24);
  a107=(a107*a50);
  a107=(a107*a36);
  a107=(a107*a14);
  a107=(a69*a107);
  a105=(a105-a107);
  a107=(a32*a45);
  a107=(a107*a49);
  a107=(a107*a11);
  a107=(a107*a36);
  a107=(a107*a80);
  a107=(a69*a107);
  a105=(a105-a107);
  a107=(a32*a45);
  a107=(a107*a24);
  a107=(a107*a49);
  a107=(a107*a0);
  a107=(a107*a50);
  a107=(a107*a11);
  a107=(a69*a107);
  a105=(a105-a107);
  a107=(a35*a45);
  a107=(a107*a24);
  a107=(a107*a49);
  a107=(a107*a50);
  a107=(a107*a11);
  a107=(a107*a36);
  a107=(a69*a107);
  a105=(a105+a107);
  a29=(a29+a105);
  a60=(a60+a29);
  a29=(a67*a25);
  a105=(a93*a26);
  a29=(a29+a105);
  a29=(a29*a17);
  a105=(a92*a25);
  a105=(a105*a5);
  a92=(a92*a26);
  a92=(a92*a12);
  a105=(a105+a92);
  a29=(a29-a105);
  a105=(a96*a25);
  a105=(a105*a6);
  a29=(a29-a105);
  a96=(a96*a26);
  a96=(a96*a13);
  a29=(a29-a96);
  a96=(a95*a25);
  a105=(a94*a26);
  a96=(a96+a105);
  a96=(a96*a18);
  a29=(a29+a96);
  a96=(a99*a25);
  a96=(a96*a8);
  a29=(a29-a96);
  a99=(a99*a26);
  a99=(a99*a15);
  a29=(a29-a99);
  a99=(a98*a25);
  a96=(a97*a26);
  a99=(a99+a96);
  a99=(a99*a20);
  a29=(a29+a99);
  a99=(a102*a25);
  a99=(a99*a9);
  a29=(a29-a99);
  a102=(a102*a26);
  a102=(a102*a16);
  a29=(a29-a102);
  a102=(a101*a25);
  a99=(a100*a26);
  a102=(a102+a99);
  a102=(a102*a21);
  a29=(a29+a102);
  a60=(a60-a29);
  if (res[0]!=0) res[0][12]=a60;
  a60=(a25*a36);
  a60=(a48*a60);
  a29=(a51*a22);
  a60=(a60+a29);
  a29=(a28*a11);
  a29=(a29*a26);
  a29=(a10*a29);
  a60=(a60-a29);
  a29=(a0*a27);
  a29=(a29*a26);
  a29=(a48*a29);
  a60=(a60-a29);
  a29=(a49*a27);
  a29=(a29*a4);
  a29=(a10*a29);
  a60=(a60-a29);
  a29=(a24*a49);
  a29=(a29*a25);
  a29=(a29*a36);
  a29=(a10*a29);
  a60=(a60+a29);
  a29=(a49*a0);
  a29=(a29*a25);
  a29=(a29*a50);
  a29=(a10*a29);
  a60=(a60+a29);
  a60=(a60*a42);
  a29=(a36*a26);
  a48=(a48*a29);
  a55=(a27*a55);
  a48=(a48+a55);
  a55=(a56*a22);
  a48=(a48+a55);
  a55=(a28*a25);
  a55=(a55*a11);
  a55=(a10*a55);
  a48=(a48+a55);
  a55=(a49*a27);
  a55=(a55*a2);
  a55=(a10*a55);
  a48=(a48-a55);
  a55=(a24*a49);
  a55=(a55*a36);
  a55=(a55*a26);
  a55=(a10*a55);
  a48=(a48+a55);
  a55=(a49*a0);
  a55=(a55*a50);
  a55=(a55*a26);
  a55=(a10*a55);
  a48=(a48+a55);
  a48=(a48*a46);
  a60=(a60+a48);
  a48=-1.0900124800000000e-001;
  a48=(a48*a27);
  a55=(a27*a14);
  a55=(a77*a55);
  a48=(a48+a55);
  a29=(a28*a36);
  a29=(a29*a64);
  a48=(a48+a29);
  a102=(a24*a49);
  a102=(a102*a0);
  a102=(a102*a28);
  a102=(a102*a11);
  a102=(a61*a102);
  a48=(a48-a102);
  a99=(a24*a49);
  a99=(a99*a27);
  a99=(a63*a99);
  a48=(a48-a99);
  a99=(a0*a28);
  a99=(a99*a11);
  a99=(a33*a99);
  a48=(a48-a99);
  a48=(a48*a19);
  a60=(a60+a48);
  a48=(a28*a36);
  a54=(a54*a48);
  a48=(a28*a36);
  a48=(a48*a14);
  a48=(a61*a48);
  a54=(a54-a48);
  a48=(a24*a49);
  a48=(a48*a28);
  a48=(a48*a36);
  a48=(a63*a48);
  a54=(a54+a48);
  a48=(a49*a0);
  a48=(a48*a28);
  a48=(a48*a50);
  a48=(a33*a48);
  a54=(a54+a48);
  a48=(a49*a50);
  a48=(a48*a11);
  a48=(a48*a27);
  a48=(a61*a48);
  a54=(a54-a48);
  a48=(a28*a36);
  a48=(a48*a80);
  a48=(a48*a62);
  a54=(a54+a48);
  a48=(a24*a0);
  a48=(a48*a28);
  a48=(a48*a50);
  a48=(a48*a62);
  a54=(a54+a48);
  a54=(a54*a34);
  a60=(a60+a54);
  a54=6.3510235928000003e-001;
  a48=(a0*a28);
  a54=(a54*a48);
  a48=(a11*a27);
  a48=(a33*a48);
  a54=(a54+a48);
  a48=(a24*a49);
  a48=(a48*a11);
  a48=(a48*a27);
  a48=(a61*a48);
  a54=(a54+a48);
  a48=(a49*a28);
  a48=(a48*a50);
  a48=(a48*a36);
  a48=(a33*a48);
  a54=(a54+a48);
  a48=(a0*a28);
  a48=(a48*a80);
  a48=(a48*a14);
  a48=(a61*a48);
  a54=(a54-a48);
  a48=(a24*a28);
  a48=(a48*a50);
  a48=(a48*a36);
  a48=(a48*a62);
  a54=(a54+a48);
  a54=(a54*a31);
  a60=(a60+a54);
  a54=-5.9999999999999995e-004;
  a54=(a54*a27);
  a54=(a54+a55);
  a54=(a54+a29);
  a54=(a54-a102);
  a48=(a24*a49);
  a48=(a48*a27);
  a48=(a33*a48);
  a54=(a54-a48);
  a54=(a54*a39);
  a60=(a60+a54);
  a54=(a27*a38);
  a48=(a24*a28);
  a48=(a48*a36);
  a48=(a89*a48);
  a54=(a54+a48);
  a48=(a0*a28);
  a48=(a48*a50);
  a48=(a89*a48);
  a54=(a54+a48);
  a48=(a49*a28);
  a48=(a48*a36);
  a48=(a33*a48);
  a54=(a54+a48);
  a54=(a54*a44);
  a60=(a60+a54);
  a60=(a60/a3);
  a54=(a27*a66);
  a48=(a27*a75);
  a54=(a54+a48);
  a48=(a27*a76);
  a54=(a54+a48);
  a48=(a23*a32);
  a48=(a48*a64);
  a48=(a27*a48);
  a54=(a54+a48);
  a48=(a27*a79);
  a54=(a54+a48);
  a48=(a35*a32);
  a48=(a48*a27);
  a87=(a87*a48);
  a54=(a54-a87);
  a87=(a35*a32);
  a87=(a87*a55);
  a54=(a54+a87);
  a87=(a35*a32);
  a87=(a87*a102);
  a54=(a54+a87);
  a87=(a35*a32);
  a87=(a87*a29);
  a54=(a54+a87);
  a87=(a23*a35);
  a87=(a87*a0);
  a87=(a87*a28);
  a37=(a37*a87);
  a54=(a54+a37);
  a37=(a23*a32);
  a37=(a37*a28);
  a37=(a37*a36);
  a88=(a88*a37);
  a54=(a54-a88);
  a88=(a23*a35);
  a88=(a88*a11);
  a88=(a88*a27);
  a88=(a33*a88);
  a54=(a54+a88);
  a88=(a35*a40);
  a88=(a88*a0);
  a88=(a88*a28);
  a88=(a65*a88);
  a54=(a54-a88);
  a88=(a32*a40);
  a88=(a88*a28);
  a88=(a88*a36);
  a88=(a65*a88);
  a37=(a32*a45);
  a37=(a37*a49);
  a37=(a37*a27);
  a37=(a63*a37);
  a88=(a88+a37);
  a37=(a35*a45);
  a37=(a37*a50);
  a37=(a37*a27);
  a37=(a65*a37);
  a88=(a88-a37);
  a37=(a49*a50);
  a37=(a37*a27);
  a37=(a37*a74);
  a37=(a33*a37);
  a88=(a88-a37);
  a37=(a49*a50);
  a37=(a37*a27);
  a37=(a37*a86);
  a37=(a33*a37);
  a88=(a88+a37);
  a37=(a28*a11);
  a37=(a37*a36);
  a37=(a37*a104);
  a37=(a33*a37);
  a88=(a88+a37);
  a37=(a49*a50);
  a37=(a37*a27);
  a37=(a37*a90);
  a37=(a33*a37);
  a88=(a88+a37);
  a37=(a28*a11);
  a37=(a37*a36);
  a37=(a37*a86);
  a37=(a33*a37);
  a88=(a88-a37);
  a37=(a49*a50);
  a37=(a37*a27);
  a37=(a37*a91);
  a37=(a33*a37);
  a88=(a88+a37);
  a37=(a28*a11);
  a37=(a37*a36);
  a37=(a37*a91);
  a37=(a33*a37);
  a88=(a88-a37);
  a37=(a24*a50);
  a37=(a37*a86);
  a91=(a27*a62);
  a37=(a37*a91);
  a88=(a88+a37);
  a37=(a0*a28);
  a37=(a37*a104);
  a37=(a37*a64);
  a88=(a88+a37);
  a37=(a24*a50);
  a37=(a37*a74);
  a37=(a37*a55);
  a88=(a88+a37);
  a37=(a0*a28);
  a37=(a37*a90);
  a37=(a37*a64);
  a88=(a88+a37);
  a37=(a35*a32);
  a37=(a37*a24);
  a37=(a37*a49);
  a37=(a37*a27);
  a37=(a63*a37);
  a88=(a88+a37);
  a37=(a35*a32);
  a37=(a37*a0);
  a37=(a37*a28);
  a37=(a37*a11);
  a37=(a33*a37);
  a88=(a88+a37);
  a54=(a54+a88);
  a88=(a23*a35);
  a88=(a88*a0);
  a88=(a88*a28);
  a88=(a88*a14);
  a1=(a1*a88);
  a88=(a23*a32);
  a88=(a88*a28);
  a88=(a88*a36);
  a88=(a88*a62);
  a1=(a1+a88);
  a88=(a23*a45);
  a88=(a88*a24);
  a88=(a88*a0);
  a88=(a88*a28);
  a88=(a106*a88);
  a1=(a1+a88);
  a88=(a23*a40);
  a88=(a88*a49);
  a88=(a88*a50);
  a88=(a88*a27);
  a88=(a63*a88);
  a1=(a1+a88);
  a88=(a23*a45);
  a88=(a88*a24);
  a88=(a88*a11);
  a88=(a88*a27);
  a88=(a63*a88);
  a1=(a1+a88);
  a88=(a23*a45);
  a88=(a88*a49);
  a88=(a88*a11);
  a88=(a88*a27);
  a88=(a69*a88);
  a1=(a1+a88);
  a88=(a23*a45);
  a88=(a88*a28);
  a88=(a88*a50);
  a88=(a88*a36);
  a88=(a106*a88);
  a1=(a1-a88);
  a88=(a35*a40);
  a88=(a88*a0);
  a88=(a88*a28);
  a88=(a88*a14);
  a88=(a69*a88);
  a1=(a1-a88);
  a88=(a35*a45);
  a88=(a88*a50);
  a88=(a88*a27);
  a88=(a88*a14);
  a88=(a69*a88);
  a1=(a1-a88);
  a88=(a40*a45);
  a88=(a88*a24);
  a88=(a88*a0);
  a88=(a88*a28);
  a106=(a106*a88);
  a1=(a1+a106);
  a106=(a40*a45);
  a106=(a106*a24);
  a106=(a106*a11);
  a106=(a106*a27);
  a106=(a63*a106);
  a1=(a1+a106);
  a106=(a40*a45);
  a106=(a106*a49);
  a106=(a106*a11);
  a106=(a106*a27);
  a106=(a69*a106);
  a1=(a1+a106);
  a54=(a54+a1);
  a1=-3.5052000000000000e-001;
  a106=(a40*a45);
  a106=(a106*a28);
  a106=(a106*a50);
  a106=(a106*a36);
  a1=(a1*a106);
  a106=(a23*a32);
  a106=(a106*a24);
  a106=(a106*a49);
  a106=(a106*a28);
  a106=(a106*a36);
  a106=(a63*a106);
  a1=(a1+a106);
  a106=(a23*a32);
  a106=(a106*a49);
  a106=(a106*a0);
  a106=(a106*a28);
  a106=(a106*a50);
  a106=(a33*a106);
  a1=(a1+a106);
  a106=(a23*a35);
  a106=(a106*a49);
  a106=(a106*a28);
  a106=(a106*a50);
  a106=(a106*a36);
  a106=(a33*a106);
  a1=(a1-a106);
  a106=(a23*a35);
  a106=(a106*a0);
  a106=(a106*a28);
  a106=(a106*a80);
  a106=(a106*a62);
  a1=(a1+a106);
  a106=(a23*a32);
  a106=(a106*a28);
  a106=(a106*a36);
  a106=(a106*a80);
  a106=(a106*a62);
  a1=(a1+a106);
  a106=(a32*a40);
  a106=(a106*a24);
  a106=(a106*a49);
  a106=(a106*a28);
  a106=(a106*a36);
  a106=(a63*a106);
  a1=(a1+a106);
  a106=(a35*a40);
  a106=(a106*a49);
  a106=(a106*a28);
  a106=(a106*a50);
  a106=(a106*a36);
  a106=(a63*a106);
  a1=(a1-a106);
  a106=(a35*a45);
  a106=(a106*a24);
  a106=(a106*a28);
  a106=(a106*a11);
  a106=(a106*a36);
  a106=(a63*a106);
  a1=(a1-a106);
  a106=(a35*a45);
  a106=(a106*a49);
  a106=(a106*a28);
  a106=(a106*a11);
  a106=(a106*a36);
  a106=(a69*a106);
  a1=(a1+a106);
  a106=(a23*a45);
  a106=(a106*a24);
  a106=(a106*a0);
  a106=(a106*a28);
  a106=(a106*a14);
  a106=(a69*a106);
  a1=(a1-a106);
  a106=(a32*a45);
  a106=(a106*a28);
  a106=(a106*a50);
  a106=(a106*a11);
  a106=(a106*a36);
  a63=(a63*a106);
  a1=(a1-a63);
  a54=(a54+a1);
  a1=(a23*a45);
  a1=(a1*a28);
  a1=(a1*a50);
  a1=(a1*a36);
  a1=(a1*a14);
  a1=(a69*a1);
  a63=(a35*a40);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a80);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1+a63);
  a63=(a32*a40);
  a63=(a63*a28);
  a63=(a63*a36);
  a63=(a63*a80);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1+a63);
  a63=(a40*a45);
  a63=(a63*a24);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1-a63);
  a63=(a40*a45);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a36);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1+a63);
  a63=(a24*a49);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a36);
  a63=(a63*a104);
  a63=(a61*a63);
  a1=(a1+a63);
  a63=(a49*a0);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a11);
  a63=(a63*a74);
  a63=(a61*a63);
  a1=(a1-a63);
  a63=(a24*a49);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a36);
  a63=(a63*a86);
  a63=(a61*a63);
  a1=(a1-a63);
  a63=(a24*a49);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a36);
  a63=(a63*a90);
  a63=(a61*a63);
  a1=(a1+a63);
  a63=(a23*a35);
  a63=(a63*a24);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a36);
  a63=(a63*a14);
  a63=(a61*a63);
  a1=(a1-a63);
  a63=(a23*a32);
  a63=(a63*a24);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a62);
  a1=(a1+a63);
  a63=(a23*a40);
  a63=(a63*a24);
  a63=(a63*a49);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a36);
  a63=(a69*a63);
  a1=(a1+a63);
  a54=(a54+a1);
  a1=(a23*a40);
  a1=(a1*a49);
  a1=(a1*a0);
  a1=(a1*a28);
  a1=(a1*a50);
  a1=(a1*a11);
  a1=(a69*a1);
  a63=(a32*a40);
  a63=(a63*a24);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1+a63);
  a63=(a32*a45);
  a63=(a63*a49);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a80);
  a63=(a69*a63);
  a1=(a1+a63);
  a63=(a35*a40);
  a63=(a63*a24);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a36);
  a63=(a63*a14);
  a63=(a69*a63);
  a1=(a1-a63);
  a63=(a35*a45);
  a63=(a63*a49);
  a63=(a63*a28);
  a63=(a63*a11);
  a63=(a63*a36);
  a63=(a63*a80);
  a63=(a69*a63);
  a1=(a1-a63);
  a63=(a35*a45);
  a63=(a63*a24);
  a63=(a63*a49);
  a63=(a63*a0);
  a63=(a63*a28);
  a63=(a63*a50);
  a63=(a63*a11);
  a63=(a69*a63);
  a1=(a1-a63);
  a45=(a32*a45);
  a45=(a45*a24);
  a45=(a45*a49);
  a45=(a45*a28);
  a45=(a45*a50);
  a45=(a45*a11);
  a45=(a45*a36);
  a45=(a69*a45);
  a1=(a1-a45);
  a54=(a54+a1);
  a60=(a60+a54);
  a93=(a93*a5);
  a67=(a67*a12);
  a93=(a93-a67);
  a94=(a94*a6);
  a93=(a93+a94);
  a95=(a95*a13);
  a93=(a93-a95);
  a97=(a97*a8);
  a93=(a93+a97);
  a98=(a98*a15);
  a93=(a93-a98);
  a100=(a100*a9);
  a93=(a93+a100);
  a101=(a101*a16);
  a93=(a93-a101);
  a60=(a60-a93);
  if (res[0]!=0) res[0][13]=a60;
  a30=(a30*a19);
  a52=(a51+a52);
  a52=(a52+a53);
  a52=(a52-a4);
  a52=(a49*a52);
  a52=(a10*a52);
  a52=(a52*a42);
  a53=(a56-a2);
  a53=(a53+a57);
  a53=(a53+a58);
  a53=(a49*a53);
  a53=(a10*a53);
  a53=(a53*a46);
  a52=(a52+a53);
  a53=(a49*a28);
  a53=(a53*a7);
  a53=(a10*a53);
  a53=(a53*a47);
  a52=(a52+a53);
  a30=(a30-a52);
  a64=(a64*a34);
  a30=(a30+a64);
  a64=(a24*a49);
  a64=(a64*a11);
  a77=(a77*a64);
  a77=(a77*a31);
  a30=(a30+a77);
  a62=(a62+a65);
  a62=(a62*a39);
  a30=(a30+a62);
  a30=(a30/a3);
  a43=(a43-a66);
  a43=(a43+a68);
  a43=(a43+a70);
  a43=(a43-a71);
  a43=(a43-a72);
  a43=(a43+a73);
  a43=(a43-a75);
  a43=(a43-a76);
  a43=(a43+a78);
  a43=(a43-a79);
  a43=(a43+a81);
  a43=(a43-a83);
  a43=(a43-a84);
  a43=(a43+a85);
  a85=(a49*a50);
  a85=(a85*a104);
  a85=(a33*a85);
  a43=(a43+a85);
  a85=(a35*a32);
  a85=(a85*a24);
  a85=(a85*a49);
  a85=(a33*a85);
  a43=(a43-a85);
  a30=(a30+a43);
  a43=arg[0]? arg[0][16] : 0;
  a30=(a30-a43);
  if (res[0]!=0) res[0][14]=a30;
  a30=(a49*a28);
  a30=(a30*a25);
  a30=(a10*a30);
  a43=(a24*a11);
  a43=(a43*a36);
  a43=(a43*a26);
  a43=(a10*a43);
  a30=(a30-a43);
  a43=(a0*a50);
  a43=(a43*a11);
  a43=(a43*a26);
  a43=(a10*a43);
  a30=(a30-a43);
  a43=(a11*a27);
  a43=(a43*a2);
  a43=(a10*a43);
  a30=(a30+a43);
  a43=(a11*a27);
  a43=(a43*a56);
  a43=(a10*a43);
  a30=(a30-a43);
  a30=(a30*a42);
  a42=(a49*a28);
  a42=(a42*a26);
  a42=(a10*a42);
  a26=(a24*a25);
  a26=(a26*a11);
  a26=(a26*a36);
  a26=(a10*a26);
  a42=(a42+a26);
  a25=(a0*a25);
  a25=(a25*a50);
  a25=(a25*a11);
  a25=(a10*a25);
  a42=(a42+a25);
  a25=(a11*a27);
  a25=(a25*a51);
  a25=(a10*a25);
  a42=(a42+a25);
  a25=(a11*a27);
  a25=(a25*a4);
  a25=(a10*a25);
  a42=(a42-a25);
  a42=(a42*a46);
  a30=(a30+a42);
  a42=(a28*a50);
  a42=(a42*a11);
  a42=(a42*a36);
  a42=(a10*a42);
  a42=(a42-a22);
  a22=(a24*a0);
  a22=(a22*a28);
  a22=(a22*a11);
  a10=(a10*a22);
  a42=(a42-a10);
  a42=(a42*a47);
  a30=(a30+a42);
  a19=(a38*a19);
  a30=(a30-a19);
  a19=(a89*a24);
  a42=(a33*a49);
  a19=(a19+a42);
  a19=(a19*a34);
  a30=(a30+a19);
  a19=(a89*a50);
  a19=(a19*a31);
  a30=(a30+a19);
  a89=(a89*a44);
  a30=(a30+a89);
  a30=(a30/a3);
  a27=(a49*a27);
  a103=(a103*a27);
  a27=(a104*a41);
  a27=(a59*a27);
  a103=(a103+a27);
  a27=(a74*a41);
  a27=(a59*a27);
  a103=(a103-a27);
  a90=(a90*a41);
  a59=(a59*a90);
  a103=(a103+a59);
  a59=(a23*a32);
  a59=(a59*a24);
  a59=(a61*a59);
  a103=(a103-a59);
  a59=(a23*a32);
  a59=(a59*a49);
  a59=(a33*a59);
  a103=(a103+a59);
  a59=(a23*a35);
  a59=(a59*a50);
  a59=(a61*a59);
  a103=(a103+a59);
  a59=(a35*a32);
  a59=(a59*a38);
  a103=(a103+a59);
  a59=(a32*a40);
  a59=(a59*a24);
  a59=(a65*a59);
  a103=(a103+a59);
  a59=(a35*a40);
  a59=(a59*a50);
  a65=(a65*a59);
  a103=(a103-a65);
  a65=(a23*a40);
  a65=(a65*a41);
  a65=(a61*a65);
  a103=(a103+a65);
  a65=(a24*a11);
  a65=(a65*a104);
  a65=(a33*a65);
  a103=(a103+a65);
  a65=(a24*a11);
  a65=(a65*a74);
  a33=(a33*a65);
  a103=(a103+a33);
  a33=(a23*a32);
  a33=(a33*a24);
  a33=(a33*a14);
  a33=(a69*a33);
  a103=(a103+a33);
  a23=(a23*a35);
  a23=(a23*a50);
  a23=(a23*a14);
  a23=(a69*a23);
  a103=(a103-a23);
  a23=(a32*a40);
  a23=(a23*a24);
  a23=(a23*a14);
  a23=(a69*a23);
  a40=(a35*a40);
  a40=(a40*a50);
  a40=(a40*a14);
  a40=(a69*a40);
  a23=(a23-a40);
  a0=(a24*a0);
  a0=(a0*a28);
  a0=(a0*a11);
  a0=(a82*a0);
  a23=(a23-a0);
  a28=(a28*a50);
  a28=(a28*a11);
  a28=(a28*a36);
  a82=(a82*a28);
  a23=(a23+a82);
  a82=(a49*a11);
  a82=(a82*a74);
  a82=(a82*a80);
  a82=(a61*a82);
  a23=(a23+a82);
  a82=(a49*a11);
  a82=(a82*a86);
  a82=(a82*a80);
  a61=(a61*a82);
  a23=(a23-a61);
  a35=(a35*a32);
  a35=(a35*a24);
  a35=(a35*a49);
  a35=(a35*a50);
  a35=(a35*a11);
  a69=(a69*a35);
  a23=(a23+a69);
  a103=(a103+a23);
  a30=(a30+a103);
  a103=arg[0]? arg[0][17] : 0;
  a30=(a30-a103);
  if (res[0]!=0) res[0][15]=a30;
  a30=-5.0000000000000000e-001;
  a103=(a30*a17);
  a103=(a5+a103);
  if (res[0]!=0) res[0][16]=a103;
  a103=(a30*a17);
  a103=(a103-a5);
  if (res[0]!=0) res[0][17]=a103;
  a103=(a30*a17);
  a103=(a12+a103);
  if (res[0]!=0) res[0][18]=a103;
  a17=(a30*a17);
  a17=(a17-a12);
  if (res[0]!=0) res[0][19]=a17;
  a17=(a30*a18);
  a17=(a6+a17);
  if (res[0]!=0) res[0][20]=a17;
  a17=(a30*a18);
  a17=(a17-a6);
  if (res[0]!=0) res[0][21]=a17;
  a17=(a30*a18);
  a17=(a13+a17);
  if (res[0]!=0) res[0][22]=a17;
  a18=(a30*a18);
  a18=(a18-a13);
  if (res[0]!=0) res[0][23]=a18;
  a18=(a30*a20);
  a18=(a8+a18);
  if (res[0]!=0) res[0][24]=a18;
  a18=(a30*a20);
  a18=(a18-a8);
  if (res[0]!=0) res[0][25]=a18;
  a18=(a30*a20);
  a18=(a15+a18);
  if (res[0]!=0) res[0][26]=a18;
  a20=(a30*a20);
  a20=(a20-a15);
  if (res[0]!=0) res[0][27]=a20;
  a20=(a30*a21);
  a20=(a9+a20);
  if (res[0]!=0) res[0][28]=a20;
  a20=(a30*a21);
  a20=(a20-a9);
  if (res[0]!=0) res[0][29]=a20;
  a20=(a30*a21);
  a20=(a16+a20);
  if (res[0]!=0) res[0][30]=a20;
  a30=(a30*a21);
  a30=(a30-a16);
  if (res[0]!=0) res[0][31]=a30;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_tail(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_tail_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_tail_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_tail_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_tail_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_tail_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_tail_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_g_tail_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_tail_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_g_tail_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_g_tail_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_tail_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_g_tail_name_out(casadi_int i){
  switch (i) {
    case 0: return "g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_tail_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_g_tail_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_g_tail_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


