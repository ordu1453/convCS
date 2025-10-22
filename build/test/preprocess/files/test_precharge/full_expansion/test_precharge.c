# 0 "test/test_precharge.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "test/test_precharge.c"



# 1 "build/vendor/unity/src/unity.h" 1
# 22 "build/vendor/unity/src/unity.h"
# 1 "build/vendor/unity/src/unity_internals.h" 1
# 16 "build/vendor/unity/src/unity_internals.h"
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 1 3
# 9 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/crtdefs.h" 1 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/crtdefs.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 1 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 1 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 108 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h" 3
             
# 117 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h" 3
             
# 326 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h" 3
       
# 405 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_mac.h" 3
       
# 11 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 2 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_secapi.h" 1 3
# 12 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 2 3
# 306 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 1 3
# 9 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 1 3
# 685 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 686 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 2 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 24 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 3
  
# 24 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 3
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/vadefs.h" 3
#pragma pack(pop)
# 307 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 2 3
# 604 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{



  __asm__ __volatile__("int {$}3":);





}
# 625 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int code);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int code)
{




  __asm__ __volatile__("int {$}0x29"::"c"(code));






  __builtin_unreachable();
}
# 665 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw.h" 3
const char *__mingw_get_crt_info (void);
# 11 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 35 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
__extension__ typedef unsigned long long size_t;
# 45 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
__extension__ typedef long long ssize_t;






typedef size_t rsize_t;
# 62 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
__extension__ typedef long long intptr_t;
# 75 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 88 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
__extension__ typedef long long ptrdiff_t;
# 98 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 138 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
typedef __time64_t time_t;
# 430 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {

  const unsigned short *_locale_pctype;
  int _locale_mb_cur_max;
  unsigned int _locale_lc_codepage;
# 482 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
} threadlocinfo;
# 501 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt.h" 3
#pragma pack(pop)
# 11 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/crtdefs.h" 2 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 2 3

#pragma pack(push,_CRT_PACKING)
# 112 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 3
  typedef __attribute__ ((__aligned__ (16))) struct _SETJMP_FLOAT128 {
    __extension__ unsigned long long Part[2];
  } SETJMP_FLOAT128;


  typedef SETJMP_FLOAT128 _JBTYPE;

  typedef struct _JUMP_BUFFER {
    __extension__ unsigned long long Frame;
    __extension__ unsigned long long Rbx;
    __extension__ unsigned long long Rsp;
    __extension__ unsigned long long Rbp;
    __extension__ unsigned long long Rsi;
    __extension__ unsigned long long Rdi;
    __extension__ unsigned long long R12;
    __extension__ unsigned long long R13;
    __extension__ unsigned long long R14;
    __extension__ unsigned long long R15;
    __extension__ unsigned long long Rip;
    unsigned long MxCsr;
    unsigned short FpCsr;
    unsigned short Spare;
    SETJMP_FLOAT128 Xmm6;
    SETJMP_FLOAT128 Xmm7;
    SETJMP_FLOAT128 Xmm8;
    SETJMP_FLOAT128 Xmm9;
    SETJMP_FLOAT128 Xmm10;
    SETJMP_FLOAT128 Xmm11;
    SETJMP_FLOAT128 Xmm12;
    SETJMP_FLOAT128 Xmm13;
    SETJMP_FLOAT128 Xmm14;
    SETJMP_FLOAT128 Xmm15;
  } _JUMP_BUFFER;
# 201 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 3
  typedef _JBTYPE jmp_buf[16];



__attribute__ ((__dllimport__)) __attribute__ ((__noreturn__)) __attribute__ ((__nothrow__)) void __attribute__((__cdecl__)) longjmp(jmp_buf _Buf,int _Value);

void * __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mingw_getsp (void);

       
# 243 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 3
  int __attribute__((__cdecl__)) __attribute__ ((__nothrow__,__returns_twice__)) __intrinsic_setjmpex(jmp_buf _Buf, void *_Ctx);
  int __attribute__((__cdecl__)) __attribute__ ((__nothrow__,__returns_twice__)) _setjmp3(jmp_buf _Buf, void *_Ctx);
# 262 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/setjmp.h" 3
       





#pragma pack(pop)
# 17 "build/vendor/unity/src/unity_internals.h" 2



# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 1 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
       
# 11 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3




struct _exception;

#pragma pack(push,_CRT_PACKING)
# 117 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  typedef union __mingw_dbl_type_t {
    double x;
    unsigned long long val;
    __extension__ struct {
      unsigned int low, high;
    } lh;
  } __mingw_dbl_type_t;

  typedef union __mingw_flt_type_t {
    float x;
    unsigned int val;
  } __mingw_flt_type_t;

  typedef union __mingw_ldbl_type_t
  {
    long double x;
    __extension__ struct {
      unsigned int low, high;
      int sign_exponent : 16;
      int res1 : 16;
      int res0 : 32;
    } lh;
  } __mingw_ldbl_type_t;




  extern double * __imp__HUGE;
# 156 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int (__attribute__((__cdecl__)) *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int (__attribute__((__cdecl__)) *)(struct _exception *));



  double __attribute__((__cdecl__)) sin(double _X);
  double __attribute__((__cdecl__)) cos(double _X);
  double __attribute__((__cdecl__)) tan(double _X);
  double __attribute__((__cdecl__)) sinh(double _X);
  double __attribute__((__cdecl__)) cosh(double _X);
  double __attribute__((__cdecl__)) tanh(double _X);
  double __attribute__((__cdecl__)) asin(double _X);
  double __attribute__((__cdecl__)) acos(double _X);
  double __attribute__((__cdecl__)) atan(double _X);
  double __attribute__((__cdecl__)) atan2(double _Y,double _X);
  double __attribute__((__cdecl__)) exp(double _X);
  double __attribute__((__cdecl__)) log(double _X);
  double __attribute__((__cdecl__)) log10(double _X);
  double __attribute__((__cdecl__)) pow(double _X,double _Y);
  double __attribute__((__cdecl__)) sqrt(double _X);
  double __attribute__((__cdecl__)) ceil(double _X);
  double __attribute__((__cdecl__)) floor(double _X);


  extern float __attribute__((__cdecl__)) fabsf (float x);
  extern long double __attribute__((__cdecl__)) fabsl (long double);
  extern double __attribute__((__cdecl__)) fabs (double _X);
# 231 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  double __attribute__((__cdecl__)) ldexp(double _X,int _Y);
  double __attribute__((__cdecl__)) frexp(double _X,int *_Y);
  double __attribute__((__cdecl__)) modf(double _X,double *_Y);
  double __attribute__((__cdecl__)) fmod(double _X,double _Y);

  void __attribute__((__cdecl__)) sincos (double __x, double *p_sin, double *p_cos);
  void __attribute__((__cdecl__)) sincosl (long double __x, long double *p_sin, long double *p_cos);
  void __attribute__((__cdecl__)) sincosf (float __x, float *p_sin, float *p_cos);



  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);



  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);







  struct _complex {
    double x;
    double y;
  };


  double __attribute__((__cdecl__)) _cabs(struct _complex _ComplexA);
  double __attribute__((__cdecl__)) _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 283 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _chgsign (double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _logb (double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _nextafter (double, double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _scalb (double, long);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclass (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnan (double);






__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) jn (int, double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) yn (int, double) ;



__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) chgsign (double);
# 315 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fpclass (double);
# 359 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
typedef float float_t;
typedef double double_t;
# 394 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
  extern int __attribute__((__cdecl__)) __fpclassifyf (float);
  extern int __attribute__((__cdecl__)) __fpclassify (double);
# 507 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __isnan (double);
  extern int __attribute__((__cdecl__)) __isnanf (float);
  extern int __attribute__((__cdecl__)) __isnanl (long double);
# 594 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __signbit (double);
  extern int __attribute__((__cdecl__)) __signbitf (float);
  extern int __attribute__((__cdecl__)) __signbitl (long double);
# 651 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern float __attribute__((__cdecl__)) sinf(float _X);
  extern long double __attribute__((__cdecl__)) sinl(long double);

  extern float __attribute__((__cdecl__)) cosf(float _X);
  extern long double __attribute__((__cdecl__)) cosl(long double);

  extern float __attribute__((__cdecl__)) tanf(float _X);
  extern long double __attribute__((__cdecl__)) tanl(long double);
  extern float __attribute__((__cdecl__)) asinf(float _X);
  extern long double __attribute__((__cdecl__)) asinl(long double);

  extern float __attribute__((__cdecl__)) acosf (float);
  extern long double __attribute__((__cdecl__)) acosl (long double);

  extern float __attribute__((__cdecl__)) atanf (float);
  extern long double __attribute__((__cdecl__)) atanl (long double);

  extern float __attribute__((__cdecl__)) atan2f (float, float);
  extern long double __attribute__((__cdecl__)) atan2l (long double, long double);


  extern float __attribute__((__cdecl__)) sinhf(float _X);



  extern long double __attribute__((__cdecl__)) sinhl(long double);

  extern float __attribute__((__cdecl__)) coshf(float _X);



  extern long double __attribute__((__cdecl__)) coshl(long double);

  extern float __attribute__((__cdecl__)) tanhf(float _X);



  extern long double __attribute__((__cdecl__)) tanhl(long double);



  extern double __attribute__((__cdecl__)) acosh (double);
  extern float __attribute__((__cdecl__)) acoshf (float);
  extern long double __attribute__((__cdecl__)) acoshl (long double);


  extern double __attribute__((__cdecl__)) asinh (double);
  extern float __attribute__((__cdecl__)) asinhf (float);
  extern long double __attribute__((__cdecl__)) asinhl (long double);


  extern double __attribute__((__cdecl__)) atanh (double);
  extern float __attribute__((__cdecl__)) atanhf (float);
  extern long double __attribute__((__cdecl__)) atanhl (long double);



  extern float __attribute__((__cdecl__)) expf(float _X);



  extern long double __attribute__((__cdecl__)) expl(long double);


  extern double __attribute__((__cdecl__)) exp2(double);
  extern float __attribute__((__cdecl__)) exp2f(float);
  extern long double __attribute__((__cdecl__)) exp2l(long double);



  extern double __attribute__((__cdecl__)) expm1(double);
  extern float __attribute__((__cdecl__)) expm1f(float);
  extern long double __attribute__((__cdecl__)) expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double __attribute__((__cdecl__)) frexpl(long double,int *);




  extern int __attribute__((__cdecl__)) ilogb (double);
  extern int __attribute__((__cdecl__)) ilogbf (float);
  extern int __attribute__((__cdecl__)) ilogbl (long double);


  extern float __attribute__((__cdecl__)) ldexpf(float _X,int _Y);



  extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


  extern float __attribute__((__cdecl__)) logf (float);
  extern long double __attribute__((__cdecl__)) logl(long double);


  extern float __attribute__((__cdecl__)) log10f (float);
  extern long double __attribute__((__cdecl__)) log10l(long double);


  extern double __attribute__((__cdecl__)) log1p(double);
  extern float __attribute__((__cdecl__)) log1pf(float);
  extern long double __attribute__((__cdecl__)) log1pl(long double);


  extern double __attribute__((__cdecl__)) log2 (double);
  extern float __attribute__((__cdecl__)) log2f (float);
  extern long double __attribute__((__cdecl__)) log2l (long double);


  extern double __attribute__((__cdecl__)) logb (double);
  extern float __attribute__((__cdecl__)) logbf (float);
  extern long double __attribute__((__cdecl__)) logbl (long double);


  extern float __attribute__((__cdecl__)) modff (float, float*);
  extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


  extern double __attribute__((__cdecl__)) scalbn (double, int);
  extern float __attribute__((__cdecl__)) scalbnf (float, int);
  extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

  extern double __attribute__((__cdecl__)) scalbln (double, long);
  extern float __attribute__((__cdecl__)) scalblnf (float, long);
  extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



  extern double __attribute__((__cdecl__)) cbrt (double);
  extern float __attribute__((__cdecl__)) cbrtf (float);
  extern long double __attribute__((__cdecl__)) cbrtl (long double);


  extern double __attribute__((__cdecl__)) hypot (double, double) ;
  extern float __attribute__((__cdecl__)) hypotf (float x, float y);



  extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


  extern float __attribute__((__cdecl__)) powf(float _X,float _Y);



  extern long double __attribute__((__cdecl__)) powl (long double, long double);


  extern float __attribute__((__cdecl__)) sqrtf (float);
  extern long double sqrtl(long double);


  extern double __attribute__((__cdecl__)) erf (double);
  extern float __attribute__((__cdecl__)) erff (float);
  extern long double __attribute__((__cdecl__)) erfl (long double);


  extern double __attribute__((__cdecl__)) erfc (double);
  extern float __attribute__((__cdecl__)) erfcf (float);
  extern long double __attribute__((__cdecl__)) erfcl (long double);


  extern double __attribute__((__cdecl__)) lgamma (double);
  extern float __attribute__((__cdecl__)) lgammaf (float);
  extern long double __attribute__((__cdecl__)) lgammal (long double);

  extern int signgam;


  extern double __attribute__((__cdecl__)) tgamma (double);
  extern float __attribute__((__cdecl__)) tgammaf (float);
  extern long double __attribute__((__cdecl__)) tgammal (long double);


  extern float __attribute__((__cdecl__)) ceilf (float);
  extern long double __attribute__((__cdecl__)) ceill (long double);


  extern float __attribute__((__cdecl__)) floorf (float);
  extern long double __attribute__((__cdecl__)) floorl (long double);


  extern double __attribute__((__cdecl__)) nearbyint ( double);
  extern float __attribute__((__cdecl__)) nearbyintf (float);
  extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

__extension__ long long __attribute__((__cdecl__)) llrint (double);
__extension__ long long __attribute__((__cdecl__)) llrintf (float);
__extension__ long long __attribute__((__cdecl__)) llrintl (long double);



  extern double __attribute__((__cdecl__)) round (double);
  extern float __attribute__((__cdecl__)) roundf (float);
  extern long double __attribute__((__cdecl__)) roundl (long double);


  extern long __attribute__((__cdecl__)) lround (double);
  extern long __attribute__((__cdecl__)) lroundf (float);
  extern long __attribute__((__cdecl__)) lroundl (long double);
  __extension__ long long __attribute__((__cdecl__)) llround (double);
  __extension__ long long __attribute__((__cdecl__)) llroundf (float);
  __extension__ long long __attribute__((__cdecl__)) llroundl (long double);



  extern double __attribute__((__cdecl__)) trunc (double);
  extern float __attribute__((__cdecl__)) truncf (float);
  extern long double __attribute__((__cdecl__)) truncl (long double);


  extern float __attribute__((__cdecl__)) fmodf (float, float);
  extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


  extern double __attribute__((__cdecl__)) remainder (double, double);
  extern float __attribute__((__cdecl__)) remainderf (float, float);
  extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


  extern double __attribute__((__cdecl__)) remquo(double, double, int *);
  extern float __attribute__((__cdecl__)) remquof(float, float, int *);
  extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


  extern double __attribute__((__cdecl__)) copysign (double, double);
  extern float __attribute__((__cdecl__)) copysignf (float, float);
  extern long double __attribute__((__cdecl__)) copysignl (long double, long double);
# 916 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nan(const char *tagp);
  extern float __attribute__((__cdecl__)) nanf(const char *tagp);
  extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 927 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nextafter (double, double);
  extern float __attribute__((__cdecl__)) nextafterf (float, float);
  extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


  extern double __attribute__((__cdecl__)) nexttoward (double, long double);
  extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
  extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



  extern double __attribute__((__cdecl__)) fdim (double x, double y);
  extern float __attribute__((__cdecl__)) fdimf (float x, float y);
  extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







  extern double __attribute__((__cdecl__)) fmax (double, double);
  extern float __attribute__((__cdecl__)) fmaxf (float, float);
  extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


  extern double __attribute__((__cdecl__)) fmin (double, double);
  extern float __attribute__((__cdecl__)) fminf (float, float);
  extern long double __attribute__((__cdecl__)) fminl (long double, long double);



  extern double __attribute__((__cdecl__)) fma (double, double, double);
  extern float __attribute__((__cdecl__)) fmaf (float, float, float);
  extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 1010 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _logbf(float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finitef(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnanf(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclassf(float _X);



   extern long double __attribute__((__cdecl__)) _chgsignl (long double);
# 1410 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/math.h" 3
#pragma pack(pop)
# 21 "build/vendor/unity/src/unity_internals.h" 2



# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 1 3 4
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 18 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stddef.h" 3 4
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);


  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 424 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 2 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 2 3 4
# 25 "build/vendor/unity/src/unity_internals.h" 2
# 37 "build/vendor/unity/src/unity_internals.h"
# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stdint.h" 1 3 4
# 9 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stdint.h" 3 4
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdint.h" 1 3 4
# 32 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdint.h" 3 4
# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 1 3 4
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 2 3 4
# 33 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdint.h" 2 3 4


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 12 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stdint.h" 2 3 4
#pragma GCC diagnostic pop
# 38 "build/vendor/unity/src/unity_internals.h" 2



# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 1 3 4
# 34 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 3 4
# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/syslimits.h" 1 3 4






#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 1 3 4
# 210 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 3 4
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/limits.h" 1 3 4
# 211 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 2 3 4
# 10 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/syslimits.h" 2 3 4
#pragma GCC diagnostic pop
# 35 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/limits.h" 2 3 4
# 42 "build/vendor/unity/src/unity_internals.h" 2
# 156 "build/vendor/unity/src/unity_internals.h"
    
# 156 "build/vendor/unity/src/unity_internals.h"
   typedef unsigned char UNITY_UINT8;
    typedef unsigned short UNITY_UINT16;
    typedef unsigned int UNITY_UINT32;
    typedef signed char UNITY_INT8;
    typedef signed short UNITY_INT16;
    typedef signed int UNITY_INT32;
# 193 "build/vendor/unity/src/unity_internals.h"
    typedef unsigned long long UNITY_UINT64;
    typedef signed long long UNITY_INT64;






    typedef UNITY_UINT64 UNITY_UINT;
    typedef UNITY_INT64 UNITY_INT;
# 322 "build/vendor/unity/src/unity_internals.h"
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 1 3
# 9 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt_stdio_config.h" 1 3
# 16 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt_stdio_config.h" 3

# 16 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/corecrt_stdio_config.h" 3
unsigned long long* __attribute__((__cdecl__)) __local_stdio_printf_options(void);
unsigned long long* __attribute__((__cdecl__)) __local_stdio_scanf_options(void);
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)

       

       

       

       
# 33 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  struct _iobuf {

    void *_Placeholder;
# 46 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  };
  typedef struct _iobuf FILE;
# 99 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/_mingw_off_t.h" 3
typedef off32_t off_t;
# 100 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 2 3

__attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __acrt_iob_func(unsigned index);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
# 112 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __extension__ typedef long long fpos_t;
# 156 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
extern
  __attribute__((__format__(__gnu_scanf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__(__gnu_scanf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__(__gnu_scanf__, 1,2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__(__gnu_scanf__, 1,0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__(__gnu_scanf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__(__gnu_scanf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__(__gnu_printf__,3,0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__(__gnu_printf__,3,4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__(__gnu_printf__,1,2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,1,0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__gnu_printf__,2,0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

extern
  __attribute__((__format__(__ms_scanf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...)
  __asm__("sscanf");
extern
  __attribute__((__format__(__ms_scanf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsscanf(const char * __restrict__ _Str,const char * __restrict__ _Format,va_list argp)
  __asm__("vsscanf");
extern
  __attribute__((__format__(__ms_scanf__, 1,2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_scanf(const char * __restrict__ _Format,...)
  __asm__("scanf");
extern
  __attribute__((__format__(__ms_scanf__, 1,0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vscanf(const char * __restrict__ _Format,va_list argp)
  __asm__("vscanf");
extern
  __attribute__((__format__(__ms_scanf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...)
  __asm__("fscanf");
extern
  __attribute__((__format__(__ms_scanf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list argp)
  __asm__("vfscanf");

extern
  __attribute__((__format__(__ms_printf__, 1,2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_printf(const char * __restrict__ , ... )
  __asm__("printf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 1,0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vprintf (const char * __restrict__ , va_list)
  __asm__("vprintf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...)
  __asm__("fprintf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list)
  __asm__("vfprintf") __attribute__ ((__nothrow__))
;
extern
  __attribute__((__format__(__ms_printf__, 2,3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...)
  __asm__("sprintf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 2,0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list)
  __asm__("vsprintf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 3,4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_snprintf (char * __restrict__ , size_t , const char * __restrict__ , ...)
  __asm__("snprintf") __attribute__ ((__nothrow__));
extern
  __attribute__((__format__(__ms_printf__, 3,0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_vsnprintf (char * __restrict__ , size_t , const char * __restrict__ , va_list)
  __asm__("vsnprintf") __attribute__ ((__nothrow__));


  int __attribute__((__cdecl__)) __stdio_common_vsprintf(unsigned long long options, char *str, size_t len, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf(unsigned long long options, FILE *file, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vsscanf(unsigned long long options, const char *input, size_t length, const char *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfscanf(unsigned long long options, FILE *file, const char *format, _locale_t locale, va_list valist);
# 444 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"

  __attribute__((__format__ (__gnu_printf__, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (__gnu_printf__, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (__gnu_printf__, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;

  __attribute__((__format__ (__gnu_printf__, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__gnu_printf__, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__gnu_printf__, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;

 
  __attribute__((__format__ (__gnu_scanf__, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
 
  __attribute__((__format__ (__gnu_scanf__, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) scanf(const char * __restrict__ _Format,...);
 
  __attribute__((__format__ (__gnu_scanf__, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);







  __attribute__((__format__ (__gnu_scanf__, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv);

  __attribute__((__format__ (__gnu_scanf__, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv);
  __attribute__((__format__ (__gnu_scanf__, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int vscanf(const char *__format, __builtin_va_list __local_argv);


#pragma GCC diagnostic pop
# 535 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);







  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  long __attribute__((__cdecl__)) ftell(FILE *_File);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int fseeko(FILE *_File, _off_t _Offset, int _Origin) {
    return fseek(_File, _Offset, _Origin);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int fseeko64(FILE *_File, _off64_t _Offset, int _Origin) {
    return _fseeki64(_File, _Offset, _Origin);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) _off_t ftello(FILE *_File) {
    return ftell(_File);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) _off64_t ftello64(FILE *_File) {
    return _ftelli64(_File);
  }
# 622 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer)
    __attribute__((__warning__("Using gets() is always unsafe - use fgets() instead")));
  int __attribute__((__cdecl__)) _getw(FILE *_File);


  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);





  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);

  __attribute__ ((__pure__))
  __attribute__((__format__ (__gnu_printf__, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (__gnu_scanf__, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;







  __attribute__ ((__pure__))
  __attribute__((__format__(__ms_printf__, 1,0))) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);


  __attribute__((__format__ (__gnu_printf__, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__((__format__ (__gnu_printf__, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
# 737 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"

  __attribute__((__format__ (__gnu_printf__, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv);

  __attribute__((__format__ (__gnu_printf__, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...);
# 803 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic pop
# 905 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);




                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ ,va_list);

                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...)
  __asm__("swscanf");
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vswscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,va_list)
  __asm__("vswscanf");
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wscanf(const wchar_t * __restrict__ _Format,...)
  __asm__("wscanf");
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vwscanf(const wchar_t * __restrict__ _Format, va_list)
  __asm__("vwscanf");
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  __asm__("fwscanf");
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list)
  __asm__("vfwscanf");

                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);


                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wprintf(const wchar_t * __restrict__ _Format,...)
  __asm__("wprintf");
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList)
  __asm__("vfwprintf");
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList)
  __asm__("vwprintf");
                                                     __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_swprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , ...)
  __asm__("swprintf");
                                                     __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_vswprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ ,va_list)
  __asm__("vswprintf");
                                                     __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_snwprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , ...)
  __asm__("snwprintf");
                                                     __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_vsnwprintf(wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list)
  __asm__("vsnwprintf");


  int __attribute__((__cdecl__)) __stdio_common_vswprintf(unsigned long long options, wchar_t *str, size_t len, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfwprintf(unsigned long long options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vswscanf(unsigned long long options, const wchar_t *input, size_t length, const wchar_t *format, _locale_t locale, va_list valist);
  int __attribute__((__cdecl__)) __stdio_common_vfwscanf(unsigned long long options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
# 1101 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
 
  int __attribute__((__cdecl__)) fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

 
  int __attribute__((__cdecl__)) swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);

 
  int __attribute__((__cdecl__)) wscanf(const wchar_t * __restrict__ _Format,...);

  __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vfwscanf(FILE *__stream, const wchar_t *__format, va_list __local_argv);

  __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vswscanf(const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, va_list __local_argv);

  __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) vwscanf(const wchar_t *__format, va_list __local_argv);

  int __attribute__((__cdecl__)) fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
# 1145 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  int __attribute__((__cdecl__)) swprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) vswprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args);
  int __attribute__((__cdecl__)) snwprintf(wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __attribute__((__cdecl__)) vsnwprintf(wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg);
# 1158 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);


# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/swprintf.inl" 1 3
# 1188 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 2 3
# 1201 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);

  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 1249 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputc_nolock(int _Char, FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putc_nolock(int _Char, FILE *_File);
# 1264 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);
# 1286 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;



  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 1315 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1329 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1338 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);






  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 1369 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);







       
       
       
       

#pragma pack(pop)

# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 1 3
# 9 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 1 3
# 10 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 2 3
# 29 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);

  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);


  int __attribute__((__cdecl__)) __stdio_common_vsprintf_s(unsigned long long _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsprintf_p(unsigned long long _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsnprintf_s(unsigned long long _Options, char *_Str, size_t _Len, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf_s(unsigned long long _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfprintf_p(unsigned long long _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(0x0001ULL, _File, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfscanf_s(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfscanf_s_l(_File, _Format, ((void *)0), _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscanf_s_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vscanf_s(const char *_Format, va_list _ArgList)
  {
    return _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fscanf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format, _locale_t _Locale ,...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) scanf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(0, _File, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscanf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(0x0001ULL, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsscanf_s(const char *_Src, const char *_Format, va_list _ArgList)
  {
    return _vsscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(0, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(0x0001ULL, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = __stdio_common_vsscanf(0x0001ULL, _Src, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfprintf_s(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vprintf_s(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fprintf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) printf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf((*__local_stdio_printf_options()), _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnprintf_s((*__local_stdio_printf_options()), _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_s((*__local_stdio_printf_options()), _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf, size_t _Size, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_s_l(_DstBuf, _Size, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf, size_t _DstSize, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p((*__local_stdio_printf_options()), _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_p_l(_Dst, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_p_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_p_l(_Dst, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p(0x0002ULL, ((void *)0), 0, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vscprintf_p_l(_Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_p_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vscprintf_p_l(_Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf((*__local_stdio_printf_options()), _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0x0001ULL, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vsnprintf_l(_DstBuf, (size_t)-1, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_l(_DstBuf, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0x0002ULL, ((void *)0), 0, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
# 583 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
 
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpfile_s(FILE **_File);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
 




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
 


  int __attribute__((__cdecl__)) __stdio_common_vswprintf_s(unsigned long long _Options, wchar_t *_Str, size_t _Len, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vsnwprintf_s(unsigned long long _Options, wchar_t *_Str, size_t _Len, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __attribute__((__cdecl__)) __stdio_common_vfwprintf_s(unsigned long long _Options, FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | 0x0001ULL, _File, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfwscanf_s(FILE* _File, const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwscanf_s_l(_File, _Format, ((void *)0), _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vwscanf_s_l(const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vwscanf_s(const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fwscanf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) wscanf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vswscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | 0x0001ULL, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vswscanf_s(const wchar_t *_Src, const wchar_t *_Format, va_list _ArgList)
  {
    return _vswscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswscanf_s_l(_Src, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | 0x0001ULL, _Src, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _File, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File, const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l(_File, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) fwprintf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l(_File, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswprintf_s((*__local_stdio_printf_options()), _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, va_list _ArgList)
  {
    return _vswprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) swprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnwprintf_s((*__local_stdio_printf_options()), _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, va_list _ArgList)
  {
    return _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, ((void *)0), _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
# 862 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
 
# 912 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 1388 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stdio.h" 2 3
# 323 "build/vendor/unity/src/unity_internals.h" 2
# 444 "build/vendor/unity/src/unity_internals.h"

# 444 "build/vendor/unity/src/unity_internals.h"
typedef void (*UnityTestFunction)(void);






typedef enum
{
    UNITY_DISPLAY_STYLE_INT = ((32) / 8) + (0x10),
    UNITY_DISPLAY_STYLE_INT8 = 1 + (0x10),
    UNITY_DISPLAY_STYLE_INT16 = 2 + (0x10),
    UNITY_DISPLAY_STYLE_INT32 = 4 + (0x10),

    UNITY_DISPLAY_STYLE_INT64 = 8 + (0x10),


    UNITY_DISPLAY_STYLE_UINT = ((32) / 8) + (0x20),
    UNITY_DISPLAY_STYLE_UINT8 = 1 + (0x20),
    UNITY_DISPLAY_STYLE_UINT16 = 2 + (0x20),
    UNITY_DISPLAY_STYLE_UINT32 = 4 + (0x20),

    UNITY_DISPLAY_STYLE_UINT64 = 8 + (0x20),


    UNITY_DISPLAY_STYLE_HEX8 = 1 + (0x40),
    UNITY_DISPLAY_STYLE_HEX16 = 2 + (0x40),
    UNITY_DISPLAY_STYLE_HEX32 = 4 + (0x40),

    UNITY_DISPLAY_STYLE_HEX64 = 8 + (0x40),


    UNITY_DISPLAY_STYLE_CHAR = 1 + (0x80) + (0x10),

    UNITY_DISPLAY_STYLE_UNKNOWN
} UNITY_DISPLAY_STYLE_T;

typedef enum
{
    UNITY_WITHIN = 0x0,
    UNITY_EQUAL_TO = 0x1,
    UNITY_GREATER_THAN = 0x2,
    UNITY_GREATER_OR_EQUAL = 0x2 + UNITY_EQUAL_TO,
    UNITY_SMALLER_THAN = 0x4,
    UNITY_SMALLER_OR_EQUAL = 0x4 + UNITY_EQUAL_TO,
    UNITY_NOT_EQUAL = 0x0,
    UNITY_UNKNOWN
} UNITY_COMPARISON_T;
# 508 "build/vendor/unity/src/unity_internals.h"
typedef enum
{
    UNITY_ARRAY_TO_VAL = 0,
    UNITY_ARRAY_TO_ARRAY,
    UNITY_ARRAY_UNKNOWN
} UNITY_FLAGS_T;

struct UNITY_STORAGE_T
{
    const char* TestFile;
    const char* CurrentTestName;

    const char* CurrentDetail1;
    const char* CurrentDetail2;

    UNITY_UINT CurrentTestLineNumber;
    UNITY_UINT NumberOfTests;
    UNITY_UINT TestFailures;
    UNITY_UINT TestIgnores;
    UNITY_UINT CurrentTestFailed;
    UNITY_UINT CurrentTestIgnored;





    jmp_buf AbortFrame;

};

extern struct UNITY_STORAGE_T Unity;





void UnityBegin(const char* filename);
int UnityEnd(void);
void UnitySetTestFile(const char* filename);
void UnityConcludeTest(void);


void UnityDefaultTestRun(UnityTestFunction Func, const char* FuncName, const int FuncLineNum);
# 585 "build/vendor/unity/src/unity_internals.h"
void UnityPrint(const char* string);





void UnityPrintLen(const char* string, const UNITY_UINT32 length);
void UnityPrintMask(const UNITY_UINT mask, const UNITY_UINT number);
void UnityPrintNumberByStyle(const UNITY_INT number, const UNITY_DISPLAY_STYLE_T style);
void UnityPrintNumber(const UNITY_INT number_to_print);
void UnityPrintNumberUnsigned(const UNITY_UINT number);
void UnityPrintNumberHex(const UNITY_UINT number, const char nibbles_to_print);
# 610 "build/vendor/unity/src/unity_internals.h"
void UnityAssertEqualNumber(const UNITY_INT expected,
                            const UNITY_INT actual,
                            const char* msg,
                            const UNITY_UINT lineNumber,
                            const UNITY_DISPLAY_STYLE_T style);

void UnityAssertGreaterOrLessOrEqualNumber(const UNITY_INT threshold,
                                           const UNITY_INT actual,
                                           const UNITY_COMPARISON_T compare,
                                           const char *msg,
                                           const UNITY_UINT lineNumber,
                                           const UNITY_DISPLAY_STYLE_T style);

void UnityAssertEqualIntArray( const void* expected,
                              const void* actual,
                              const UNITY_UINT32 num_elements,
                              const char* msg,
                              const UNITY_UINT lineNumber,
                              const UNITY_DISPLAY_STYLE_T style,
                              const UNITY_FLAGS_T flags);

void UnityAssertBits(const UNITY_INT mask,
                     const UNITY_INT expected,
                     const UNITY_INT actual,
                     const char* msg,
                     const UNITY_UINT lineNumber);

void UnityAssertEqualString(const char* expected,
                            const char* actual,
                            const char* msg,
                            const UNITY_UINT lineNumber);

void UnityAssertEqualStringLen(const char* expected,
                            const char* actual,
                            const UNITY_UINT32 length,
                            const char* msg,
                            const UNITY_UINT lineNumber);

void UnityAssertEqualStringArray( const void* expected,
                                  const char** actual,
                                  const UNITY_UINT32 num_elements,
                                  const char* msg,
                                  const UNITY_UINT lineNumber,
                                  const UNITY_FLAGS_T flags);

void UnityAssertEqualMemory( const void* expected,
                             const void* actual,
                             const UNITY_UINT32 length,
                             const UNITY_UINT32 num_elements,
                             const char* msg,
                             const UNITY_UINT lineNumber,
                             const UNITY_FLAGS_T flags);

void UnityAssertNumbersWithin(const UNITY_UINT delta,
                              const UNITY_INT expected,
                              const UNITY_INT actual,
                              const char* msg,
                              const UNITY_UINT lineNumber,
                              const UNITY_DISPLAY_STYLE_T style);

void UnityAssertNumbersArrayWithin(const UNITY_UINT delta,
                                   const void* expected,
                                   const void* actual,
                                   const UNITY_UINT32 num_elements,
                                   const char* msg,
                                   const UNITY_UINT lineNumber,
                                   const UNITY_DISPLAY_STYLE_T style,
                                   const UNITY_FLAGS_T flags);


[[ noreturn ]] void UnityFail(const char* message, const UNITY_UINT line);
[[ noreturn ]] void UnityIgnore(const char* message, const UNITY_UINT line);





void UnityMessage(const char* message, const UNITY_UINT line);
# 759 "build/vendor/unity/src/unity_internals.h"
 const void* UnityNumToPtr(const UNITY_INT num, const UNITY_UINT8 size);
# 771 "build/vendor/unity/src/unity_internals.h"
extern const char UnityStrOk[];
extern const char UnityStrPass[];
extern const char UnityStrFail[];
extern const char UnityStrIgnore[];

extern const char UnityStrErrFloat[];
extern const char UnityStrErrDouble[];
extern const char UnityStrErr64[];
extern const char UnityStrErrShorthand[];
# 23 "build/vendor/unity/src/unity.h" 2
# 32 "build/vendor/unity/src/unity.h"
void setUp(void);
void tearDown(void);







void suiteSetUp(void);
int suiteTearDown(int num_failures);
# 53 "build/vendor/unity/src/unity.h"
void resetTest(void);
void verifyTest(void);
# 5 "test/test_precharge.c" 2
# 1 "Core/Inc/precharge.h" 1
# 18 "Core/Inc/precharge.h"
void prechargeInit(void);
void prechargeStart(void);

static uint8_t prechargeDone = 0;
# 6 "test/test_precharge.c" 2

# 1 "build/test/mocks/test_precharge/mock_stm32g4xx_hal.h" 1





# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h" 1
# 29 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
# 1 "Core/Inc/stm32g4xx_hal_conf.h" 1
# 212 "Core/Inc/stm32g4xx_hal_conf.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h" 1
# 27 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_def.h" 1
# 29 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_def.h"
# 1 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h" 1
# 117 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h"
# 1 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h" 1
# 65 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  WWDG_IRQn = 0,
  PVD_PVM_IRQn = 1,
  RTC_TAMP_LSECSS_IRQn = 2,
  RTC_WKUP_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Channel1_IRQn = 11,
  DMA1_Channel2_IRQn = 12,
  DMA1_Channel3_IRQn = 13,
  DMA1_Channel4_IRQn = 14,
  DMA1_Channel5_IRQn = 15,
  DMA1_Channel6_IRQn = 16,
  DMA1_Channel7_IRQn = 17,
  ADC1_2_IRQn = 18,
  USB_HP_IRQn = 19,
  USB_LP_IRQn = 20,
  FDCAN1_IT0_IRQn = 21,
  FDCAN1_IT1_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_TIM15_IRQn = 24,
  TIM1_UP_TIM16_IRQn = 25,
  TIM1_TRG_COM_TIM17_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  USBWakeUp_IRQn = 42,
  TIM8_BRK_IRQn = 43,
  TIM8_UP_IRQn = 44,
  TIM8_TRG_COM_IRQn = 45,
  TIM8_CC_IRQn = 46,
  ADC3_IRQn = 47,
  FMC_IRQn = 48,
  LPTIM1_IRQn = 49,
  TIM5_IRQn = 50,
  SPI3_IRQn = 51,
  UART4_IRQn = 52,
  UART5_IRQn = 53,
  TIM6_DAC_IRQn = 54,
  TIM7_DAC_IRQn = 55,
  DMA2_Channel1_IRQn = 56,
  DMA2_Channel2_IRQn = 57,
  DMA2_Channel3_IRQn = 58,
  DMA2_Channel4_IRQn = 59,
  DMA2_Channel5_IRQn = 60,
  ADC4_IRQn = 61,
  ADC5_IRQn = 62,
  UCPD1_IRQn = 63,
  COMP1_2_3_IRQn = 64,
  COMP4_5_6_IRQn = 65,
  COMP7_IRQn = 66,
  CRS_IRQn = 75,
  SAI1_IRQn = 76,
  TIM20_BRK_IRQn = 77,
  TIM20_UP_IRQn = 78,
  TIM20_TRG_COM_IRQn = 79,
  TIM20_CC_IRQn = 80,
  FPU_IRQn = 81,
  I2C4_EV_IRQn = 82,
  I2C4_ER_IRQn = 83,
  SPI4_IRQn = 84,
  FDCAN2_IT0_IRQn = 86,
  FDCAN2_IT1_IRQn = 87,
  FDCAN3_IT0_IRQn = 88,
  FDCAN3_IT1_IRQn = 89,
  RNG_IRQn = 90,
  LPUART1_IRQn = 91,
  I2C3_EV_IRQn = 92,
  I2C3_ER_IRQn = 93,
  DMAMUX_OVR_IRQn = 94,
  QUADSPI_IRQn = 95,
  DMA1_Channel8_IRQn = 96,
  DMA2_Channel6_IRQn = 97,
  DMA2_Channel7_IRQn = 98,
  DMA2_Channel8_IRQn = 99,
  CORDIC_IRQn = 100,
  FMAC_IRQn = 101
} IRQn_Type;





# 1 "Drivers/CMSIS/Include/core_cm4.h" 1
# 63 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "Drivers/CMSIS/Include/cmsis_version.h" 1
# 64 "Drivers/CMSIS/Include/core_cm4.h" 2
# 162 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 54 "Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 29 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 131 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}
# 196 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 248 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 272 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 344 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 368 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 398 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 449 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 479 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 833 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 849 "Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 872 "Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 933 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 967 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 986 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 1001 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 1021 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 1048 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  uint32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
# 1078 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1089 "Drivers/CMSIS/Include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1382 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}
# 1407 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}
# 2166 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 55 "Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 163 "Drivers/CMSIS/Include/core_cm4.h" 2
# 259 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 298 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 316 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 371 "Drivers/CMSIS/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 406 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 440 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 719 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 759 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 811 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1208 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1304 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;
# 1416 "Drivers/CMSIS/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1648 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1679 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __asm volatile("":::"memory");
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __asm volatile("":::"memory");
  }
}
# 1698 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1717 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1736 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1755 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1770 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1787 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1809 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
}
# 1831 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4U)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4U)));
  }
}
# 1856 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1883 "Drivers/CMSIS/Include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1906 "Drivers/CMSIS/Include/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  (* (int *) (vectors + ((int32_t)IRQn + 16) * 4)) = vector;

}
# 1922 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return (uint32_t)(* (int *) (vectors + ((int32_t)IRQn + 16) * 4));
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1955 "Drivers/CMSIS/Include/core_cm4.h"
# 1 "Drivers/CMSIS/Include/mpu_armv7.h" 1
# 183 "Drivers/CMSIS/Include/mpu_armv7.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1956 "Drivers/CMSIS/Include/core_cm4.h" 2
# 1976 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2017 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4U) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2047 "Drivers/CMSIS/Include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2059 "Drivers/CMSIS/Include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2080 "Drivers/CMSIS/Include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2100 "Drivers/CMSIS/Include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 178 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h" 2
# 1 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/system_stm32g4xx.h" 1
# 57 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/system_stm32g4xx.h"
extern uint32_t SystemCoreClock;

extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];
# 86 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/system_stm32g4xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 179 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h" 2
# 189 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h"
typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IER;
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CFGR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
       uint32_t RESERVED1;
  volatile uint32_t TR1;
  volatile uint32_t TR2;
  volatile uint32_t TR3;
       uint32_t RESERVED2;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t SQR4;
  volatile uint32_t DR;
       uint32_t RESERVED3;
       uint32_t RESERVED4;
  volatile uint32_t JSQR;
       uint32_t RESERVED5[4];
  volatile uint32_t OFR1;
  volatile uint32_t OFR2;
  volatile uint32_t OFR3;
  volatile uint32_t OFR4;
       uint32_t RESERVED6[4];
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
       uint32_t RESERVED7[4];
  volatile uint32_t AWD2CR;
  volatile uint32_t AWD3CR;
       uint32_t RESERVED8;
       uint32_t RESERVED9;
  volatile uint32_t DIFSEL;
  volatile uint32_t CALFACT;
       uint32_t RESERVED10[2];
  volatile uint32_t GCOMP;
} ADC_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  uint32_t RESERVED1;
  volatile uint32_t CCR;
  volatile uint32_t CDR;
} ADC_Common_TypeDef;





typedef struct
{
  volatile uint32_t CREL;
  volatile uint32_t ENDN;
       uint32_t RESERVED1;
  volatile uint32_t DBTP;
  volatile uint32_t TEST;
  volatile uint32_t RWD;
  volatile uint32_t CCCR;
  volatile uint32_t NBTP;
  volatile uint32_t TSCC;
  volatile uint32_t TSCV;
  volatile uint32_t TOCC;
  volatile uint32_t TOCV;
       uint32_t RESERVED2[4];
  volatile uint32_t ECR;
  volatile uint32_t PSR;
  volatile uint32_t TDCR;
       uint32_t RESERVED3;
  volatile uint32_t IR;
  volatile uint32_t IE;
  volatile uint32_t ILS;
  volatile uint32_t ILE;
       uint32_t RESERVED4[8];
  volatile uint32_t RXGFC;
  volatile uint32_t XIDAM;
  volatile uint32_t HPMS;
       uint32_t RESERVED5;
  volatile uint32_t RXF0S;
  volatile uint32_t RXF0A;
  volatile uint32_t RXF1S;
  volatile uint32_t RXF1A;
       uint32_t RESERVED6[8];
  volatile uint32_t TXBC;
  volatile uint32_t TXFQS;
  volatile uint32_t TXBRP;
  volatile uint32_t TXBAR;
  volatile uint32_t TXBCR;
  volatile uint32_t TXBTO;
  volatile uint32_t TXBCF;
  volatile uint32_t TXBTIE;
  volatile uint32_t TXBCIE;
  volatile uint32_t TXEFS;
  volatile uint32_t TXEFA;
} FDCAN_GlobalTypeDef;





typedef struct
{
  volatile uint32_t CKDIV;
} FDCAN_Config_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
} COMP_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint32_t IDR;
  volatile uint32_t CR;
  uint32_t RESERVED0;
  volatile uint32_t INIT;
  volatile uint32_t POL;
} CRC_TypeDef;




typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
} CRS_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SWTRIGR;
  volatile uint32_t DHR12R1;
  volatile uint32_t DHR12L1;
  volatile uint32_t DHR8R1;
  volatile uint32_t DHR12R2;
  volatile uint32_t DHR12L2;
  volatile uint32_t DHR8R2;
  volatile uint32_t DHR12RD;
  volatile uint32_t DHR12LD;
  volatile uint32_t DHR8RD;
  volatile uint32_t DOR1;
  volatile uint32_t DOR2;
  volatile uint32_t SR;
  volatile uint32_t CCR;
  volatile uint32_t MCR;
  volatile uint32_t SHSR1;
  volatile uint32_t SHSR2;
  volatile uint32_t SHHR;
  volatile uint32_t SHRR;
  volatile uint32_t RESERVED[2];
  volatile uint32_t STR1;
  volatile uint32_t STR2;
  volatile uint32_t STMODR;
} DAC_TypeDef;





typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
  volatile uint32_t APB1FZR1;
  volatile uint32_t APB1FZR2;
  volatile uint32_t APB2FZ;
} DBGMCU_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
}DMAMUX_Channel_TypeDef;

typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CFR;
}DMAMUX_ChannelStatus_TypeDef;

typedef struct
{
  volatile uint32_t RGCR;
}DMAMUX_RequestGen_TypeDef;

typedef struct
{
  volatile uint32_t RGSR;
  volatile uint32_t RGCFR;
}DMAMUX_RequestGenStatus_TypeDef;





typedef struct
{
  volatile uint32_t IMR1;
  volatile uint32_t EMR1;
  volatile uint32_t RTSR1;
  volatile uint32_t FTSR1;
  volatile uint32_t SWIER1;
  volatile uint32_t PR1;
  uint32_t RESERVED1;
  uint32_t RESERVED2;
  volatile uint32_t IMR2;
  volatile uint32_t EMR2;
  volatile uint32_t RTSR2;
  volatile uint32_t FTSR2;
  volatile uint32_t SWIER2;
  volatile uint32_t PR2;
} EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t PDKEYR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t ECCR;
       uint32_t RESERVED1;
  volatile uint32_t OPTR;
  volatile uint32_t PCROP1SR;
  volatile uint32_t PCROP1ER;
  volatile uint32_t WRP1AR;
  volatile uint32_t WRP1BR;
       uint32_t RESERVED2[4];
  volatile uint32_t PCROP2SR;
  volatile uint32_t PCROP2ER;
  volatile uint32_t WRP2AR;
  volatile uint32_t WRP2BR;
       uint32_t RESERVED3[7];
  volatile uint32_t SEC1R;
  volatile uint32_t SEC2R;
} FLASH_TypeDef;




typedef struct
{
  volatile uint32_t X1BUFCFG;
  volatile uint32_t X2BUFCFG;
  volatile uint32_t YBUFCFG;
  volatile uint32_t PARAM;
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t WDATA;
  volatile uint32_t RDATA;
} FMAC_TypeDef;





typedef struct
{
  volatile uint32_t BTCR[8];
  volatile uint32_t PCSCNTR;
} FMC_Bank1_TypeDef;





typedef struct
{
  volatile uint32_t BWTR[7];
} FMC_Bank1E_TypeDef;





typedef struct
{
  volatile uint32_t PCR;
  volatile uint32_t SR;
  volatile uint32_t PMEM;
  volatile uint32_t PATT;
  uint32_t RESERVED0;
  volatile uint32_t ECCR;
} FMC_Bank3_TypeDef;





typedef struct
{
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFR[2];
  volatile uint32_t BRR;
} GPIO_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t TIMINGR;
  volatile uint32_t TIMEOUTR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t PECR;
  volatile uint32_t RXDR;
  volatile uint32_t TXDR;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
  volatile uint32_t WINR;
} IWDG_TypeDef;





typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t IER;
  volatile uint32_t CFGR;
  volatile uint32_t CR;
  volatile uint32_t CMP;
  volatile uint32_t ARR;
  volatile uint32_t CNT;
  volatile uint32_t OR;
} LPTIM_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t RESERVED[5];
  volatile uint32_t TCMR;
} OPAMP_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t CR4;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t SCR;
  uint32_t RESERVED;
  volatile uint32_t PUCRA;
  volatile uint32_t PDCRA;
  volatile uint32_t PUCRB;
  volatile uint32_t PDCRB;
  volatile uint32_t PUCRC;
  volatile uint32_t PDCRC;
  volatile uint32_t PUCRD;
  volatile uint32_t PDCRD;
  volatile uint32_t PUCRE;
  volatile uint32_t PDCRE;
  volatile uint32_t PUCRF;
  volatile uint32_t PDCRF;
  volatile uint32_t PUCRG;
  volatile uint32_t PDCRG;
  uint32_t RESERVED1[10];
  volatile uint32_t CR5;
} PWR_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t DCR;
  volatile uint32_t SR;
  volatile uint32_t FCR;
  volatile uint32_t DLR;
  volatile uint32_t CCR;
  volatile uint32_t AR;
  volatile uint32_t ABR;
  volatile uint32_t DR;
  volatile uint32_t PSMKR;
  volatile uint32_t PSMAR;
  volatile uint32_t PIR;
  volatile uint32_t LPTR;
} QUADSPI_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t ICSCR;
  volatile uint32_t CFGR;
  volatile uint32_t PLLCFGR;
  uint32_t RESERVED0;
  uint32_t RESERVED1;
  volatile uint32_t CIER;
  volatile uint32_t CIFR;
  volatile uint32_t CICR;
  uint32_t RESERVED2;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;
  volatile uint32_t AHB3RSTR;
  uint32_t RESERVED3;
  volatile uint32_t APB1RSTR1;
  volatile uint32_t APB1RSTR2;
  volatile uint32_t APB2RSTR;
  uint32_t RESERVED4;
  volatile uint32_t AHB1ENR;
  volatile uint32_t AHB2ENR;
  volatile uint32_t AHB3ENR;
  uint32_t RESERVED5;
  volatile uint32_t APB1ENR1;
  volatile uint32_t APB1ENR2;
  volatile uint32_t APB2ENR;
  uint32_t RESERVED6;
  volatile uint32_t AHB1SMENR;
  volatile uint32_t AHB2SMENR;
  volatile uint32_t AHB3SMENR;
  uint32_t RESERVED7;
  volatile uint32_t APB1SMENR1;
  volatile uint32_t APB1SMENR2;
  volatile uint32_t APB2SMENR;
  uint32_t RESERVED8;
  volatile uint32_t CCIPR;
  uint32_t RESERVED9;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  volatile uint32_t CRRCR;
  volatile uint32_t CCIPR2;
} RCC_TypeDef;
# 713 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g473xx.h"
typedef struct
{
  volatile uint32_t TR;
  volatile uint32_t DR;
  volatile uint32_t SSR;
  volatile uint32_t ICSR;
  volatile uint32_t PRER;
  volatile uint32_t WUTR;
  volatile uint32_t CR;
       uint32_t RESERVED0;
       uint32_t RESERVED1;
  volatile uint32_t WPR;
  volatile uint32_t CALR;
  volatile uint32_t SHIFTR;
  volatile uint32_t TSTR;
  volatile uint32_t TSDR;
  volatile uint32_t TSSSR;
       uint32_t RESERVED2;
  volatile uint32_t ALRMAR;
  volatile uint32_t ALRMASSR;
  volatile uint32_t ALRMBR;
  volatile uint32_t ALRMBSSR;
  volatile uint32_t SR;
  volatile uint32_t MISR;
       uint32_t RESERVED3;
  volatile uint32_t SCR;
} RTC_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
       uint32_t RESERVED0;
  volatile uint32_t FLTCR;
       uint32_t RESERVED1[6];
       uint32_t RESERVED2;
  volatile uint32_t IER;
  volatile uint32_t SR;
  volatile uint32_t MISR;
       uint32_t RESERVED3;
  volatile uint32_t SCR;
       uint32_t RESERVED4[48];
  volatile uint32_t BKP0R;
  volatile uint32_t BKP1R;
  volatile uint32_t BKP2R;
  volatile uint32_t BKP3R;
  volatile uint32_t BKP4R;
  volatile uint32_t BKP5R;
  volatile uint32_t BKP6R;
  volatile uint32_t BKP7R;
  volatile uint32_t BKP8R;
  volatile uint32_t BKP9R;
  volatile uint32_t BKP10R;
  volatile uint32_t BKP11R;
  volatile uint32_t BKP12R;
  volatile uint32_t BKP13R;
  volatile uint32_t BKP14R;
  volatile uint32_t BKP15R;
  volatile uint32_t BKP16R;
  volatile uint32_t BKP17R;
  volatile uint32_t BKP18R;
  volatile uint32_t BKP19R;
  volatile uint32_t BKP20R;
  volatile uint32_t BKP21R;
  volatile uint32_t BKP22R;
  volatile uint32_t BKP23R;
  volatile uint32_t BKP24R;
  volatile uint32_t BKP25R;
  volatile uint32_t BKP26R;
  volatile uint32_t BKP27R;
  volatile uint32_t BKP28R;
  volatile uint32_t BKP29R;
  volatile uint32_t BKP30R;
  volatile uint32_t BKP31R;
} TAMP_TypeDef;





typedef struct
{
  uint32_t RESERVED[17];
  volatile uint32_t PDMCR;
  volatile uint32_t PDMDLY;
} SAI_TypeDef;

typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t FRCR;
  volatile uint32_t SLOTR;
  volatile uint32_t IMR;
  volatile uint32_t SR;
  volatile uint32_t CLRFR;
  volatile uint32_t DR;
} SAI_Block_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
  volatile uint32_t I2SPR;
} SPI_TypeDef;





typedef struct
{
  volatile uint32_t MEMRMP;
  volatile uint32_t CFGR1;
  volatile uint32_t EXTICR[4];
  volatile uint32_t SCSR;
  volatile uint32_t CFGR2;
  volatile uint32_t SWPR;
  volatile uint32_t SKR;
} SYSCFG_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t CCR5;
  volatile uint32_t CCR6;
  volatile uint32_t CCMR3;
  volatile uint32_t DTR2;
  volatile uint32_t ECR;
  volatile uint32_t TISEL;
  volatile uint32_t AF1;
  volatile uint32_t AF2;
  volatile uint32_t OR ;
       uint32_t RESERVED0[220];
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
} TIM_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t BRR;
  volatile uint32_t GTPR;
  volatile uint32_t RTOR;
  volatile uint32_t RQR;
  volatile uint32_t ISR;
  volatile uint32_t ICR;
  volatile uint32_t RDR;
  volatile uint32_t TDR;
  volatile uint32_t PRESC;
} USART_TypeDef;





typedef struct
{
  volatile uint16_t EP0R;
  volatile uint16_t RESERVED0;
  volatile uint16_t EP1R;
  volatile uint16_t RESERVED1;
  volatile uint16_t EP2R;
  volatile uint16_t RESERVED2;
  volatile uint16_t EP3R;
  volatile uint16_t RESERVED3;
  volatile uint16_t EP4R;
  volatile uint16_t RESERVED4;
  volatile uint16_t EP5R;
  volatile uint16_t RESERVED5;
  volatile uint16_t EP6R;
  volatile uint16_t RESERVED6;
  volatile uint16_t EP7R;
  volatile uint16_t RESERVED7[17];
  volatile uint16_t CNTR;
  volatile uint16_t RESERVED8;
  volatile uint16_t ISTR;
  volatile uint16_t RESERVED9;
  volatile uint16_t FNR;
  volatile uint16_t RESERVEDA;
  volatile uint16_t DADDR;
  volatile uint16_t RESERVEDB;
  volatile uint16_t BTABLE;
  volatile uint16_t RESERVEDC;
  volatile uint16_t LPMCSR;
  volatile uint16_t RESERVEDD;
  volatile uint16_t BCDR;
  volatile uint16_t RESERVEDE;
} USB_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t CCR;
} VREFBUF_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t SR;
  volatile uint32_t DR;
} RNG_TypeDef;





typedef struct
{
  volatile uint32_t CSR;
  volatile uint32_t WDATA;
  volatile uint32_t RDATA;
} CORDIC_TypeDef;





typedef struct
{
  volatile uint32_t CFG1;
  volatile uint32_t CFG2;
  volatile uint32_t RESERVED0;
  volatile uint32_t CR;
  volatile uint32_t IMR;
  volatile uint32_t SR;
  volatile uint32_t ICR;
  volatile uint32_t TX_ORDSET;
  volatile uint32_t TX_PAYSZ;
  volatile uint32_t TXDR;
  volatile uint32_t RX_ORDSET;
  volatile uint32_t RX_PAYSZ;
  volatile uint32_t RXDR;
  volatile uint32_t RX_ORDEXT1;
  volatile uint32_t RX_ORDEXT2;
} UCPD_TypeDef;
# 118 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h" 2
# 147 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h"
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  SUCCESS = 0,
  ERROR = !SUCCESS
} ErrorStatus;
# 251 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h" 1
# 252 "Drivers/CMSIS/Device/ST/STM32G4xx/Include/stm32g4xx.h" 2
# 30 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_def.h" 2
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/Legacy/stm32_hal_legacy.h" 1
# 31 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_def.h" 2
# 1 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 1 3 4
# 1 "C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/15.2.0/include/stddef.h" 2 3 4
# 32 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_def.h" 2






typedef enum
{
  HAL_OK = 0x00U,
  HAL_ERROR = 0x01U,
  HAL_BUSY = 0x02U,
  HAL_TIMEOUT = 0x03U
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00U,
  HAL_LOCKED = 0x01U
} HAL_LockTypeDef;
# 28 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h" 2
# 45 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLM;


  uint32_t PLLN;


  uint32_t PLLP;


  uint32_t PLLQ;


  uint32_t PLLR;



}RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t OscillatorType;


  uint32_t HSEState;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;


  uint32_t LSIState;


  uint32_t HSI48State;


  RCC_PLLInitTypeDef PLL;

}RCC_OscInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;


}RCC_ClkInitTypeDef;
# 3344 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc_ex.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t PeriphClockSelection;


  uint32_t Usart1ClockSelection;


  uint32_t Usart2ClockSelection;


  uint32_t Usart3ClockSelection;




  uint32_t Uart4ClockSelection;




  uint32_t Uart5ClockSelection;




  uint32_t Lpuart1ClockSelection;


  uint32_t I2c1ClockSelection;


  uint32_t I2c2ClockSelection;


  uint32_t I2c3ClockSelection;




  uint32_t I2c4ClockSelection;



  uint32_t Lptim1ClockSelection;


  uint32_t Sai1ClockSelection;


  uint32_t I2sClockSelection;



  uint32_t FdcanClockSelection;




  uint32_t UsbClockSelection;



  uint32_t RngClockSelection;


  uint32_t Adc12ClockSelection;



  uint32_t Adc345ClockSelection;




  uint32_t QspiClockSelection;



  uint32_t RTCClockSelection;

}RCC_PeriphCLKInitTypeDef;




typedef struct
{
  uint32_t Prescaler;


  uint32_t Source;


  uint32_t Polarity;


  uint32_t ReloadValue;



  uint32_t ErrorLimitValue;


  uint32_t HSI48CalibrationValue;


}RCC_CRSInitTypeDef;




typedef struct
{
  uint32_t ReloadValue;


  uint32_t HSI48CalibrationValue;


  uint32_t FreqErrorCapture;



  uint32_t FreqErrorDirection;




}RCC_CRSSynchroInfoTypeDef;
# 1271 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
# 1283 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc_ex.h"
void HAL_RCCEx_EnableLSECSS(void);
void HAL_RCCEx_DisableLSECSS(void);
void HAL_RCCEx_EnableLSECSS_IT(void);
void HAL_RCCEx_LSECSS_IRQHandler(void);
void HAL_RCCEx_LSECSS_Callback(void);
void HAL_RCCEx_EnableLSCO(uint32_t LSCOSource);
void HAL_RCCEx_DisableLSCO(void);
# 1299 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc_ex.h"
void HAL_RCCEx_CRSConfig(RCC_CRSInitTypeDef *pInit);
void HAL_RCCEx_CRSSoftwareSynchronizationGenerate(void);
void HAL_RCCEx_CRSGetSynchronizationInfo(RCC_CRSSynchroInfoTypeDef *pSynchroInfo);
uint32_t HAL_RCCEx_CRSWaitSynchronization(uint32_t Timeout);
void HAL_RCCEx_CRS_IRQHandler(void);
void HAL_RCCEx_CRS_SyncOkCallback(void);
void HAL_RCCEx_CRS_SyncWarnCallback(void);
void HAL_RCCEx_CRS_ExpectedSyncCallback(void);
void HAL_RCCEx_CRS_ErrorCallback(uint32_t Error);
# 3345 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h" 2
# 3357 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h"
HAL_StatusTypeDef HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
# 3370 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
void HAL_RCC_EnableLSECSS(void);
void HAL_RCC_DisableLSECSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);

void HAL_RCC_NMI_IRQHandler(void);

void HAL_RCC_CSSCallback(void);
# 213 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h" 1
# 47 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;


  uint32_t Alternate;

} GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0U,
  GPIO_PIN_SET
} GPIO_PinState;
# 271 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio_ex.h" 1
# 272 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h" 2
# 285 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 298 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 217 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h"
typedef struct
{
  uint32_t Request;


  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;

} DMA_InitTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_TIMEOUT = 0x03U,
} HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01U
} HAL_DMA_LevelCompleteTypeDef;





typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x02U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x03U,
  HAL_DMA_XFER_ALL_CB_ID = 0x04U

} HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Channel_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  volatile HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferHalfCpltCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferErrorCallback)(struct __DMA_HandleTypeDef *hdma);

  void (* XferAbortCallback)(struct __DMA_HandleTypeDef *hdma);

  volatile uint32_t ErrorCode;

  DMA_TypeDef *DmaBaseAddress;

  uint32_t ChannelIndex;

  DMAMUX_Channel_TypeDef *DMAmuxChannel;

  DMAMUX_ChannelStatus_TypeDef *DMAmuxChannelStatus;

  uint32_t DMAmuxChannelStatusMask;

  DMAMUX_RequestGen_TypeDef *DMAmuxRequestGen;

  DMAMUX_RequestGenStatus_TypeDef *DMAmuxRequestGenStatus;

  uint32_t DMAmuxRequestGenStatusMask;

} DMA_HandleTypeDef;
# 747 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma_ex.h" 1
# 51 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma_ex.h"
typedef struct
{
  uint32_t SyncSignalID;


  uint32_t SyncPolarity;


  FunctionalState SyncEnable;



  FunctionalState EventEnable;


  uint32_t RequestNumber;



} HAL_DMA_MuxSyncConfigTypeDef;





typedef struct
{
  uint32_t SignalID;


  uint32_t Polarity;


  uint32_t RequestNumber;


} HAL_DMA_MuxRequestGeneratorConfigTypeDef;
# 197 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma_ex.h"
HAL_StatusTypeDef HAL_DMAEx_ConfigMuxRequestGenerator(DMA_HandleTypeDef *hdma,
                                                      HAL_DMA_MuxRequestGeneratorConfigTypeDef *pRequestGeneratorConfig);
HAL_StatusTypeDef HAL_DMAEx_EnableMuxRequestGenerator(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMAEx_DisableMuxRequestGenerator(DMA_HandleTypeDef *hdma);



HAL_StatusTypeDef HAL_DMAEx_ConfigMuxSync(DMA_HandleTypeDef *hdma, HAL_DMA_MuxSyncConfigTypeDef *pSyncConfig);


void HAL_DMAEx_MUX_IRQHandler(DMA_HandleTypeDef *hdma);
# 748 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h" 2
# 759 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *hdma);
# 769 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress,
                                   uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel,
                                          uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)(DMA_HandleTypeDef *_hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
# 788 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 221 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_cortex.h" 1
# 48 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_cortex.h"
typedef struct
{
  uint8_t Enable;

  uint8_t Number;

  uint32_t BaseAddress;
  uint8_t Size;

  uint8_t SubRegionDisable;

  uint8_t TypeExtField;

  uint8_t AccessPermission;

  uint8_t DisableExec;

  uint8_t IsShareable;

  uint8_t IsCacheable;

  uint8_t IsBufferable;

}MPU_Region_InitTypeDef;
# 269 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 285 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);


void HAL_MPU_Enable(uint32_t MPU_Control);
void HAL_MPU_Disable(void);
void HAL_MPU_EnableRegion(uint32_t RegionNumber);
void HAL_MPU_DisableRegion(uint32_t RegionNumber);
void HAL_MPU_ConfigRegion(MPU_Region_InitTypeDef *MPU_Init);
# 225 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h" 1
# 31 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h" 1
# 3608 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_DMA_GetRegAddr(const ADC_TypeDef *ADCx, uint32_t Register)
{
  uint32_t data_reg_addr;

  if (Register == (0x00000000UL))
  {

    data_reg_addr = (uint32_t) &(ADCx->DR);
  }
  else
  {

    data_reg_addr = (uint32_t) &((((((ADCx) == ((ADC_TypeDef *) (((0x40000000UL) + 0x08000000UL) + 0x08000000UL))) || ((ADCx) == ((ADC_TypeDef *) (((0x40000000UL) + 0x08000000UL) + 0x08000100UL)))) ? ( (((ADC_Common_TypeDef *) (((0x40000000UL) + 0x08000000UL) + 0x08000300UL))) ) : ( (((ADC_Common_TypeDef *) (((0x40000000UL) + 0x08000000UL) + 0x08000700UL))) ) ))->CDR);
  }

  return data_reg_addr;
}
# 3679 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetCommonClock(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t CommonClock)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x3UL << (16U)) | (0xFUL << (18U))))) | (CommonClock))));
}
# 3707 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonClock(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x3UL << (16U)) | (0xFUL << (18U)))));
}
# 3744 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetCommonPathInternalCh(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t PathInternal)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x1UL << (22U)) | (0x1UL << (23U)) | (0x1UL << (24U))))) | (PathInternal))));
}
# 3780 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetCommonPathInternalChAdd(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t PathInternal)
{
  ((ADCxy_COMMON->CCR) |= (PathInternal));
}
# 3804 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetCommonPathInternalChRem(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t PathInternal)
{
  ((ADCxy_COMMON->CCR) &= ~(PathInternal));
}
# 3826 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCommonPathInternalCh(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x1UL << (22U)) | (0x1UL << (23U)) | (0x1UL << (24U)))));
}
# 3870 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetCalibrationFactor(ADC_TypeDef *ADCx, uint32_t SingleDiff, uint32_t CalibrationFactor)
{
  (((ADCx->CALFACT)) = ((((((ADCx->CALFACT))) & (~(SingleDiff & ((0x7FUL << (16U)) | (0x7FUL << (0U)))))) | (CalibrationFactor << (((SingleDiff & (0x00010000UL)) >> ((16UL) - 4UL)) & ~(SingleDiff & (0x7FUL << (0U))))))))



                                                                            ;
}
# 3895 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetCalibrationFactor(const ADC_TypeDef *ADCx, uint32_t SingleDiff)
{




  return (uint32_t)(((ADCx->CALFACT) & ((SingleDiff & ((0x7FUL << (16U)) | (0x7FUL << (0U))))))

                    >> ((SingleDiff & (0x00010000UL)) >>
                        ((16UL) - 4UL)));
}
# 3924 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetResolution(ADC_TypeDef *ADCx, uint32_t Resolution)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (3U))))) | (Resolution))));
}
# 3941 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetResolution(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x3UL << (3U)))));
}
# 3961 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetDataAlignment(ADC_TypeDef *ADCx, uint32_t DataAlignment)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (15U))))) | (DataAlignment))));
}
# 3976 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetDataAlignment(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (15U)))));
}
# 4026 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetLowPowerMode(ADC_TypeDef *ADCx, uint32_t LowPowerMode)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (14U))))) | (LowPowerMode))));
}
# 4071 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetLowPowerMode(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (14U)))));
}
# 4163 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOffset(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t Channel, uint32_t OffsetLevel)
{
  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (31U)) | (0x1FUL << (26U)) | (0xFFFUL << (0U))))) | ((0x1UL << (31U)) | (Channel & ((0x1FUL << (26U)))) | OffsetLevel))))

                                                                                        ;
}
# 4249 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetChannel(const ADC_TypeDef *ADCx, uint32_t Offsety)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1FUL << (26U))));
}
# 4275 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetLevel(const ADC_TypeDef *ADCx, uint32_t Offsety)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0xFFFUL << (0U))));
}
# 4308 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOffsetState(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t OffsetState)
{
  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (31U))))) | (OffsetState))))

                         ;
}
# 4334 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetState(const ADC_TypeDef *ADCx, uint32_t Offsety)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1UL << (31U))));
}
# 4363 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOffsetSign(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t OffsetSign)
{
  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (24U))))) | (OffsetSign))))

                        ;
}
# 4389 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetSign(const ADC_TypeDef *ADCx, uint32_t Offsety)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1UL << (24U))));
}
# 4418 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOffsetSaturation(ADC_TypeDef *ADCx, uint32_t Offsety, uint32_t OffsetSaturation)
{
  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  (((*preg)) = ((((((*preg))) & (~((0x1UL << (25U))))) | (OffsetSaturation))))

                              ;
}
# 4444 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOffsetSaturation(const ADC_TypeDef *ADCx, uint32_t Offsety)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->OFR1)) + ((Offsety) << 2UL))));

  return (uint32_t) ((*preg) & ((0x1UL << (25U))));
}
# 4471 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetGainCompensation(ADC_TypeDef *ADCx, uint32_t GainCompensation)
{
  (((ADCx->GCOMP)) = ((((((ADCx->GCOMP))) & (~((0x3FFFUL << (0U))))) | (GainCompensation))));
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (16U))))) | (((GainCompensation == 0UL) ? 0UL : 1UL) << (16U)))));
}
# 4486 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetGainCompensation(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CFGR2) & ((0x1UL << (16U)))) == (0x1UL << (16U))) ?
          ((ADCx->GCOMP) & ((0x3FFFUL << (0U)))) : 0UL);
}
# 4507 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetSamplingTimeCommonConfig(ADC_TypeDef *ADCx, uint32_t SamplingTimeCommonConfig)
{
  (((ADCx->SMPR1)) = ((((((ADCx->SMPR1))) & (~((0x1UL << (31U))))) | (SamplingTimeCommonConfig))));
}
# 4521 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetSamplingTimeCommonConfig(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->SMPR1) & ((0x1UL << (31U)))));
}
# 4602 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (10U)) | (0x1FUL << (5U))))) | (TriggerSource))));
}
# 4669 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerSource(const ADC_TypeDef *ADCx)
{
  volatile uint32_t trigger_source = ((ADCx->CFGR) & ((0x1FUL << (5U)) | (0x3UL << (10U))));



  uint32_t shift_exten = ((trigger_source & (0x3UL << (10U))) >> (((10U)) - 2UL));



  return ((trigger_source
           & (((((0x00000000UL) & (0x1FUL << (5U))) << (4U * 0UL)) | (((0x1FUL << (5U))) << (4U * 1UL)) | (((0x1FUL << (5U))) << (4U * 2UL)) | (((0x1FUL << (5U))) << (4U * 3UL)) ) >> shift_exten) & (0x1FUL << (5U)))
          | ((((((0x00000000UL) & (0x3UL << (10U))) << (4U * 0UL)) | ((((0x1UL << (10U)))) << (4U * 1UL)) | ((((0x1UL << (10U)))) << (4U * 2UL)) | ((((0x1UL << (10U)))) << (4U * 3UL)) ) >> shift_exten) & (0x3UL << (10U)))
         );
}
# 4696 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_IsTriggerSourceSWStart(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CFGR) & ((0x3UL << (10U)))) == ((0x00000000UL) & (0x3UL << (10U)))) ? 1UL : 0UL);
}
# 4716 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetTriggerEdge(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x3UL << (10U))))) | (ExternalTriggerEdge))));
}
# 4731 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetTriggerEdge(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x3UL << (10U)))));
}
# 4754 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSamplingMode(ADC_TypeDef *ADCx, uint32_t SamplingMode)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (26U)) | (0x1UL << (27U))))) | (SamplingMode))));
}
# 4769 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSamplingMode(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x1UL << (26U)) | (0x1UL << (27U)))));
}
# 4828 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->SQR1)) = ((((((ADCx->SQR1))) & (~((0xFUL << (0U))))) | (SequencerNbRanks))));
}
# 4882 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerLength(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->SQR1) & ((0xFUL << (0U)))));
}
# 4914 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (16U)) | (0x7UL << (17U))))) | (SeqDiscont))));
}
# 4937 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerDiscont(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (16U)) | (0x7UL << (17U)))));
}
# 5043 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                              ;

  (((*preg)) = ((((((*preg))) & (~(((0x1FUL << (0U))) << (Rank & (((0x1FUL << (0U)))))))) | (((Channel & ((0x1FUL << (26U)))) >> ((26U))) << (Rank & (((0x1FUL << (0U)))))))))


                                                   ;
}
# 5161 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetSequencerRanks(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SQR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint32_t)((((*preg) & (((0x1FUL << (0U))) << (Rank & (((0x1FUL << (0U)))))))

                     >> (Rank & (((0x1FUL << (0U)))))) << ((26U))
                   );
}
# 5191 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetContinuousMode(ADC_TypeDef *ADCx, uint32_t Continuous)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (13U))))) | (Continuous))));
}
# 5208 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetContinuousMode(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (13U)))));
}
# 5248 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetDMATransfer(ADC_TypeDef *ADCx, uint32_t DMATransfer)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (0U)) | (0x1UL << (1U))))) | (DMATransfer))));
}
# 5283 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetDMATransfer(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (0U)) | (0x1UL << (1U)))));
}
# 5308 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_SetOverrun(ADC_TypeDef *ADCx, uint32_t Overrun)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (12U))))) | (Overrun))));
}
# 5322 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_GetOverrun(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (12U)))));
}
# 5401 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTriggerSource(ADC_TypeDef *ADCx, uint32_t TriggerSource)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x1FUL << (2U)) | (0x3UL << (7U))))) | (TriggerSource))));
}
# 5467 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerSource(const ADC_TypeDef *ADCx)
{
  volatile uint32_t trigger_source = ((ADCx->JSQR) & ((0x1FUL << (2U)) | (0x3UL << (7U))));



  uint32_t shift_jexten = ((trigger_source & (0x3UL << (7U))) >> (((7U)) - 2UL));



  return ((trigger_source
           & (((((0x00000000UL) & (0x1FUL << (2U))) << (4U * 0UL)) | (((0x1FUL << (2U))) << (4U * 1UL)) | (((0x1FUL << (2U))) << (4U * 2UL)) | (((0x1FUL << (2U))) << (4U * 3UL)) ) >> shift_jexten) & (0x1FUL << (2U)))
          | ((((((0x00000000UL) & (0x3UL << (7U))) << (4U * 0UL)) | ((((0x1UL << (7U)))) << (4U * 1UL)) | ((((0x1UL << (7U)))) << (4U * 2UL)) | ((((0x1UL << (7U)))) << (4U * 3UL)) ) >> shift_jexten) & (0x3UL << (7U)))
         );
}
# 5494 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_IsTriggerSourceSWStart(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->JSQR) & ((0x3UL << (7U)))) == ((0x00000000UL) & (0x3UL << (7U)))) ? 1UL : 0UL);
}
# 5514 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTriggerEdge(ADC_TypeDef *ADCx, uint32_t ExternalTriggerEdge)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x3UL << (7U))))) | (ExternalTriggerEdge))));
}
# 5529 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTriggerEdge(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->JSQR) & ((0x3UL << (7U)))));
}
# 5555 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerLength(ADC_TypeDef *ADCx, uint32_t SequencerNbRanks)
{
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x3UL << (0U))))) | (SequencerNbRanks))));
}
# 5576 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerLength(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->JSQR) & ((0x3UL << (0U)))));
}
# 5594 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerDiscont(ADC_TypeDef *ADCx, uint32_t SeqDiscont)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (20U))))) | (SeqDiscont))));
}
# 5609 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerDiscont(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (20U)))));
}
# 5686 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetSequencerRanks(ADC_TypeDef *ADCx, uint32_t Rank, uint32_t Channel)
{




  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((((0x1FUL << (26U))) >> ((26U))) << (Rank & (((0x1FUL << (0U)))))))) | (((Channel & ((0x1FUL << (26U)))) >> ((26U))) << (Rank & (((0x1FUL << (0U)))))))))



                                                   ;
}
# 5774 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetSequencerRanks(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  return (uint32_t)((((ADCx->JSQR) & ((((0x1FUL << (26U))) >> ((26U))) << (Rank & (((0x1FUL << (0U)))))))


                     >> (Rank & (((0x1FUL << (0U)))))) << ((26U))
                   );
}
# 5813 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetTrigAuto(ADC_TypeDef *ADCx, uint32_t TrigAuto)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (25U))))) | (TrigAuto))));
}
# 5827 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetTrigAuto(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (25U)))));
}
# 5873 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_SetQueueMode(ADC_TypeDef *ADCx, uint32_t QueueMode)
{
  (((ADCx->CFGR)) = ((((((ADCx->CFGR))) & (~((0x1UL << (21U)) | (0x1UL << (31U))))) | (QueueMode))));
}
# 5888 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_GetQueueMode(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR) & ((0x1UL << (21U)) | (0x1UL << (31U)))));
}
# 6167 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_ConfigQueueContext(ADC_TypeDef *ADCx,
                                                   uint32_t TriggerSource,
                                                   uint32_t ExternalTriggerEdge,
                                                   uint32_t SequencerNbRanks,
                                                   uint32_t Rank1_Channel,
                                                   uint32_t Rank2_Channel,
                                                   uint32_t Rank3_Channel,
                                                   uint32_t Rank4_Channel)
{






  uint32_t is_trigger_not_sw = (uint32_t)((TriggerSource != (0x00000000UL)) ? 1UL : 0UL);
  (((ADCx->JSQR)) = ((((((ADCx->JSQR))) & (~((0x1FUL << (2U)) | (0x3UL << (7U)) | (0x1FUL << (27U)) | (0x1FUL << (21U)) | (0x1FUL << (15U)) | (0x1FUL << (9U)) | (0x3UL << (0U))))) | ((TriggerSource & (0x1FUL << (2U))) | (ExternalTriggerEdge * (is_trigger_not_sw)) | (((Rank4_Channel & ((0x1FUL << (26U)))) >> ((26U))) << (((0x00000300UL) | ((27U))) & (((0x1FUL << (0U)))))) | (((Rank3_Channel & ((0x1FUL << (26U)))) >> ((26U))) << (((0x00000200UL) | ((21U))) & (((0x1FUL << (0U)))))) | (((Rank2_Channel & ((0x1FUL << (26U)))) >> ((26U))) << (((0x00000100UL) | ((15U))) & (((0x1FUL << (0U)))))) | (((Rank1_Channel & ((0x1FUL << (26U)))) >> ((26U))) << (((0x00000000UL) | ((9U))) & (((0x1FUL << (0U)))))) | SequencerNbRanks))))
# 6202 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
             ;
}
# 6319 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetChannelSamplingTime(ADC_TypeDef *ADCx, uint32_t Channel, uint32_t SamplingTime)
{




  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + ((((Channel & ((0x00000000UL) | (0x02000000UL))) >> (25UL))) << 2UL))))
                                                                                                                       ;

  (((*preg)) = ((((((*preg))) & (~((0x7UL << (0U)) << ((Channel & (0x01F00000UL)) >> (20UL))))) | (SamplingTime << ((Channel & (0x01F00000UL)) >> (20UL))))))

                                                                                                               ;
}
# 6423 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetChannelSamplingTime(const ADC_TypeDef *ADCx, uint32_t Channel)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->SMPR1)) + ((((Channel & ((0x00000000UL) | (0x02000000UL))) >> (25UL))) << 2UL))))
                                                                                             ;

  return (uint32_t)(((*preg) & ((0x7UL << (0U)) << ((Channel & (0x01F00000UL)) >> (20UL))))


                    >> ((Channel & (0x01F00000UL)) >> (20UL))
                   );
}
# 6490 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetChannelSingleDiff(ADC_TypeDef *ADCx, uint32_t Channel, uint32_t SingleDiff)
{



  (((ADCx->DIFSEL)) = ((((((ADCx->DIFSEL))) & (~(Channel & (((0x7FFFFUL << (0U))))))) | ((Channel & (((0x7FFFFUL << (0U))))) & ((0x7FFFFUL << (0U)) >> (SingleDiff & ((0x10UL << (0U)) | (0x08UL << (0U)))))))))


                                                                                       ;
}
# 6548 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetChannelSingleDiff(const ADC_TypeDef *ADCx, uint32_t Channel)
{
  return (uint32_t)(((ADCx->DIFSEL) & ((Channel & (((0x7FFFFUL << (0U))))))));
}
# 6714 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDMonitChannels(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDChannelGroup)
{




  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->CFGR)) + ((((AWDy & ((0x00000000UL) | (0x00100000UL) | (0x00200000UL))) >> (20UL)) + ((AWDy & ((0x00001UL << (0U)))) * (0x00000024UL))) << 2UL))))


                                                                                 ;

  (((*preg)) = ((((((*preg))) & (~((AWDy & (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | ((0x7FFFFUL << (0U)))))))) | (AWDChannelGroup & AWDy))))

                                    ;
}
# 6852 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDMonitChannels(const ADC_TypeDef *ADCx, uint32_t AWDy)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->CFGR)) + ((((AWDy & ((0x00000000UL) | (0x00100000UL) | (0x00200000UL))) >> (20UL)) + ((AWDy & ((0x00001UL << (0U)))) * (0x00000024UL))) << 2UL))))


                                                                                       ;

  uint32_t analog_wd_monit_channels = (((*preg) & (AWDy)) & AWDy & (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | ((0x7FFFFUL << (0U)))));





  if (analog_wd_monit_channels != 0UL)
  {
    if (AWDy == (((0x1FUL << (26U)) | (0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U))) | (0x00000000UL)))
    {
      if ((analog_wd_monit_channels & (0x1UL << (22U))) == 0UL)
      {

        analog_wd_monit_channels = ((analog_wd_monit_channels
                                     | (((0x7FFFFUL << (0U))))
                                    )
                                    & (~((0x1FUL << (26U))))
                                   );
      }
      else
      {

        analog_wd_monit_channels = (analog_wd_monit_channels
                                    | ((0x00001UL << (0U)) << (analog_wd_monit_channels >> (26U)))
                                   );
      }
    }
    else
    {
      if ((analog_wd_monit_channels & ((0x7FFFFUL << (0U)))) == ((0x7FFFFUL << (0U))))
      {

        analog_wd_monit_channels = (((0x7FFFFUL << (0U)))
                                    | (((0x1UL << (24U)) | (0x1UL << (23U))))
                                   );
      }
      else
      {


        analog_wd_monit_channels = (analog_wd_monit_channels
                                    | ((0x1UL << (24U)) | (0x1UL << (23U)) | (0x1UL << (22U)))
                                    | (((((analog_wd_monit_channels) & ((0x7FFFFUL << (0U)))) == 0UL) ? ( ((analog_wd_monit_channels) & ((0x1FUL << (26U)))) >> ((26U)) ) : ( (uint32_t)(__CLZ(__RBIT((analog_wd_monit_channels)))) ) ) << (26U))
                                   );
      }
    }
  }

  return analog_wd_monit_channels;
}
# 6968 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_ConfigAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDThresholdHighValue,
                                                     uint32_t AWDThresholdLowValue)
{





  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))))
                                                                                                                ;

  (((*preg)) = ((((((*preg))) & (~((0xFFFUL << (16U)) | (0xFFFUL << (0U))))) | ((AWDThresholdHighValue << ((16U))) | AWDThresholdLowValue))))

                                                                                         ;
}
# 7048 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetAnalogWDThresholds(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t AWDThresholdsHighLow,
                                                  uint32_t AWDThresholdValue)
{





  volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))))
                                                                                                                ;

  (((*preg)) = ((((((*preg))) & (~(AWDThresholdsHighLow))) | (AWDThresholdValue << ((AWDThresholdsHighLow & (0x00010000UL)) >> ((16UL) - 4UL))))))

                                                                                                                      ;
}
# 7092 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAnalogWDThresholds(const ADC_TypeDef *ADCx,
                                                      uint32_t AWDy, uint32_t AWDThresholdsHighLow)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->TR1)) + ((((AWDy & (((0x00000000UL)) | ((0x00100000UL)) | ((0x00200000UL)))) >> ((20UL)))) << 2UL))))
                                                                                                                      ;

  return (uint32_t)(((*preg) & ((AWDThresholdsHighLow | (0xFFFUL << (0U)))))

                    >> (((AWDThresholdsHighLow & (0x00010000UL)) >> ((16UL) - 4UL))
                        & ~(AWDThresholdsHighLow & (0xFFFUL << (0U)))));
}
# 7127 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetAWDFilteringConfiguration(ADC_TypeDef *ADCx, uint32_t AWDy, uint32_t FilteringConfig)
{

  (void)(AWDy);
  (((ADCx->TR1)) = ((((((ADCx->TR1))) & (~((0x7UL << (12U))))) | (FilteringConfig))));
}
# 7152 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetAWDFilteringConfiguration(const ADC_TypeDef *ADCx, uint32_t AWDy)
{

  (void)(AWDy);
  return (uint32_t)(((ADCx->TR1) & ((0x7UL << (12U)))));
}
# 7192 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOverSamplingScope(ADC_TypeDef *ADCx, uint32_t OvsScope)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (10U))))) | (OvsScope))));
}
# 7217 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingScope(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (10U)))));
}
# 7244 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetOverSamplingDiscont(ADC_TypeDef *ADCx, uint32_t OverSamplingDiscont)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~((0x1UL << (9U))))) | (OverSamplingDiscont))));
}
# 7263 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingDiscont(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x1UL << (9U)))));
}
# 7302 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_ConfigOverSamplingRatioShift(ADC_TypeDef *ADCx, uint32_t Ratio, uint32_t Shift)
{
  (((ADCx->CFGR2)) = ((((((ADCx->CFGR2))) & (~(((0xFUL << (5U)) | (0x7UL << (2U)))))) | ((Shift | Ratio)))));
}
# 7322 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingRatio(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0x7UL << (2U)))));
}
# 7343 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetOverSamplingShift(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->CFGR2) & ((0xFUL << (5U)))));
}
# 7383 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetMultimode(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t Multimode)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x1FUL << (0U))))) | (Multimode))));
}
# 7407 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultimode(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x1FUL << (0U)))));
}
# 7458 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetMultiDMATransfer(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t MultiDMATransfer)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0x3UL << (14U)) | (0x1UL << (13U))))) | (MultiDMATransfer))));
}
# 7504 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultiDMATransfer(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0x3UL << (14U)) | (0x1UL << (13U)))));
}
# 7544 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_SetMultiTwoSamplingDelay(ADC_Common_TypeDef *ADCxy_COMMON, uint32_t MultiTwoSamplingDelay)
{
  (((ADCxy_COMMON->CCR)) = ((((((ADCxy_COMMON->CCR))) & (~((0xFUL << (8U))))) | (MultiTwoSamplingDelay))));
}
# 7572 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_GetMultiTwoSamplingDelay(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return (uint32_t)(((ADCxy_COMMON->CCR) & ((0xFUL << (8U)))));
}
# 7598 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_EnableDeepPowerDown(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (29U))))))

                            ;
}
# 7621 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_DisableDeepPowerDown(ADC_TypeDef *ADCx)
{



  ((ADCx->CR) &= ~(((0x1UL << (29U)) | ((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U))))));
}







static inline uint32_t LL_ADC_IsDeepPowerDownEnabled(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (29U)))) == ((0x1UL << (29U)))) ? 1UL : 0UL);
}
# 7654 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_EnableInternalRegulator(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (28U))))))

                             ;
}
# 7673 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_DisableInternalRegulator(ADC_TypeDef *ADCx)
{
  ((ADCx->CR) &= ~(((0x1UL << (28U)) | ((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U))))));
}







static inline uint32_t LL_ADC_IsInternalRegulatorEnabled(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (28U)))) == ((0x1UL << (28U)))) ? 1UL : 0UL);
}
# 7705 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_Enable(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (0U))))))

                         ;
}
# 7725 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_Disable(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (1U))))))

                          ;
}
# 7744 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabled(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsDisableOngoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}
# 7783 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_StartCalibration(ADC_TypeDef *ADCx, uint32_t SingleDiff)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~((0x1UL << (30U)) | ((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (31U)) | (SingleDiff & ((0x1UL << (30U))))))))

                                                                           ;
}







static inline uint32_t LL_ADC_IsCalibrationOnGoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (31U)))) == ((0x1UL << (31U)))) ? 1UL : 0UL);
}
# 7830 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_StartConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (2U))))))

                            ;
}
# 7850 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_StopConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (4U))))))

                          ;
}







static inline uint32_t LL_ADC_REG_IsConversionOngoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_REG_IsStopConversionOngoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}
# 7897 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_StartSamplingPhase(ADC_TypeDef *ADCx)
{
  ((ADCx->CFGR2) |= ((0x1UL << (25U))));
}
# 7919 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_REG_StopSamplingPhase(ADC_TypeDef *ADCx)
{
  ((ADCx->CFGR2) &= ~((0x1UL << (25U))));
}
# 7933 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_ReadConversionData32(const ADC_TypeDef *ADCx)
{
  return (uint32_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 7948 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData12(const ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 7963 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint16_t LL_ADC_REG_ReadConversionData10(const ADC_TypeDef *ADCx)
{
  return (uint16_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 7978 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData8(const ADC_TypeDef *ADCx)
{
  return (uint8_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 7993 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint8_t LL_ADC_REG_ReadConversionData6(const ADC_TypeDef *ADCx)
{
  return (uint8_t)(((ADCx->DR) & ((0xFFFFUL << (0U)))));
}
# 8020 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_REG_ReadMultiConversionData32(const ADC_Common_TypeDef *ADCxy_COMMON,
                                                              uint32_t ConversionData)
{
  return (uint32_t)(((ADCxy_COMMON->CDR) & (ConversionData))

                    >> ((__CLZ(__RBIT(ConversionData))) & 0x1FUL)
                   );
}
# 8056 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_StartConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (3U))))))

                             ;
}
# 8076 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_INJ_StopConversion(ADC_TypeDef *ADCx)
{



  (((ADCx->CR)) = ((((((ADCx->CR))) & (~(((0x1UL << (31U)) | (0x1UL << (0U)) | (0x1UL << (1U)) | (0x1UL << (3U)) | (0x1UL << (5U)) | (0x1UL << (2U)) | (0x1UL << (4U)))))) | ((0x1UL << (5U))))))

                           ;
}







static inline uint32_t LL_ADC_INJ_IsConversionOngoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_INJ_IsStopConversionOngoing(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->CR) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}
# 8125 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_INJ_ReadConversionData32(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint32_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 8153 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData12(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint16_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 8181 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint16_t LL_ADC_INJ_ReadConversionData10(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint16_t)(((*preg) & ((0xFFFFUL << (0U))))

                   );
}
# 8209 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData8(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint8_t)(((*preg) & ((0xFFFFUL << (0U))))

                  );
}
# 8237 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint8_t LL_ADC_INJ_ReadConversionData6(const ADC_TypeDef *ADCx, uint32_t Rank)
{
  const volatile uint32_t *preg = ((volatile uint32_t *)((uint32_t) ((uint32_t)(&(ADCx->JDR1)) + ((((Rank & ((0x00000000UL) | (0x00000100UL) | (0x00000200UL) | (0x00000300UL))) >> (8UL))) << 2UL))))
                                                                                                                    ;

  return (uint8_t)(((*preg) & ((0xFFFFUL << (0U))))

                  );
}
# 8264 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_ADRDY(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOC(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOS(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_OVR(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_EOSMP(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JEOC(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JEOS(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_JQOVF(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (10U)))) == ((0x1UL << (10U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD1(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD2(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (8U)))) == ((0x1UL << (8U)))) ? 1UL : 0UL);
}







static inline uint32_t LL_ADC_IsActiveFlag_AWD3(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->ISR) & ((0x1UL << (9U)))) == ((0x1UL << (9U)))) ? 1UL : 0UL);
}
# 8388 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_ClearFlag_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (0U))));
}







static inline void LL_ADC_ClearFlag_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (2U))));
}







static inline void LL_ADC_ClearFlag_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (3U))));
}







static inline void LL_ADC_ClearFlag_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (4U))));
}







static inline void LL_ADC_ClearFlag_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (1U))));
}







static inline void LL_ADC_ClearFlag_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (5U))));
}







static inline void LL_ADC_ClearFlag_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (6U))));
}







static inline void LL_ADC_ClearFlag_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (10U))));
}







static inline void LL_ADC_ClearFlag_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (7U))));
}







static inline void LL_ADC_ClearFlag_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (8U))));
}







static inline void LL_ADC_ClearFlag_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->ISR) = ((0x1UL << (9U))));
}
# 8511 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_ADRDY(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}
# 8523 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_ADRDY(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (16U)))) == ((0x1UL << (16U)))) ? 1UL : 0UL);
}
# 8535 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_EOC(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (18U)))) == ((0x1UL << (18U)))) ? 1UL : 0UL);
}
# 8547 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_EOC(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (18U)))) == ((0x1UL << (18U)))) ? 1UL : 0UL);
}
# 8559 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_EOS(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}
# 8571 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_EOS(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (19U)))) == ((0x1UL << (19U)))) ? 1UL : 0UL);
}
# 8583 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_OVR(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}
# 8595 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_OVR(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (20U)))) == ((0x1UL << (20U)))) ? 1UL : 0UL);
}
# 8607 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_EOSMP(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}
# 8619 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_EOSMP(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (17U)))) == ((0x1UL << (17U)))) ? 1UL : 0UL);
}
# 8631 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_JEOC(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}
# 8643 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_JEOC(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (21U)))) == ((0x1UL << (21U)))) ? 1UL : 0UL);
}
# 8655 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_JEOS(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? 1UL : 0UL);
}
# 8667 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_JEOS(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (22U)))) == ((0x1UL << (22U)))) ? 1UL : 0UL);
}
# 8679 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_JQOVF(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (10U)))) == ((0x1UL << (10U)))) ? 1UL : 0UL);
}
# 8691 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_JQOVF(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (26U)))) == ((0x1UL << (26U)))) ? 1UL : 0UL);
}
# 8703 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_AWD1(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? 1UL : 0UL);
}
# 8715 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_AWD1(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (23U)))) == ((0x1UL << (23U)))) ? 1UL : 0UL);
}
# 8727 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_AWD2(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (8U)))) == ((0x1UL << (8U)))) ? 1UL : 0UL);
}
# 8739 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_AWD2(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (24U)))) == ((0x1UL << (24U)))) ? 1UL : 0UL);
}
# 8751 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_MST_AWD3(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (9U)))) == ((0x1UL << (9U)))) ? 1UL : 0UL);
}
# 8763 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsActiveFlag_SLV_AWD3(const ADC_Common_TypeDef *ADCxy_COMMON)
{
  return ((((ADCxy_COMMON->CSR) & ((0x1UL << (25U)))) == ((0x1UL << (25U)))) ? 1UL : 0UL);
}
# 8783 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline void LL_ADC_EnableIT_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (0U))));
}







static inline void LL_ADC_EnableIT_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (2U))));
}







static inline void LL_ADC_EnableIT_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (3U))));
}







static inline void LL_ADC_EnableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (4U))));
}







static inline void LL_ADC_EnableIT_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (1U))));
}







static inline void LL_ADC_EnableIT_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (5U))));
}







static inline void LL_ADC_EnableIT_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (6U))));
}







static inline void LL_ADC_EnableIT_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (10U))));
}







static inline void LL_ADC_EnableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (7U))));
}







static inline void LL_ADC_EnableIT_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (8U))));
}







static inline void LL_ADC_EnableIT_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) |= ((0x1UL << (9U))));
}







static inline void LL_ADC_DisableIT_ADRDY(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (0U))));
}







static inline void LL_ADC_DisableIT_EOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (2U))));
}







static inline void LL_ADC_DisableIT_EOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (3U))));
}







static inline void LL_ADC_DisableIT_OVR(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (4U))));
}







static inline void LL_ADC_DisableIT_EOSMP(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (1U))));
}







static inline void LL_ADC_DisableIT_JEOC(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (5U))));
}







static inline void LL_ADC_DisableIT_JEOS(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (6U))));
}







static inline void LL_ADC_DisableIT_JQOVF(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (10U))));
}







static inline void LL_ADC_DisableIT_AWD1(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (7U))));
}







static inline void LL_ADC_DisableIT_AWD2(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (8U))));
}







static inline void LL_ADC_DisableIT_AWD3(ADC_TypeDef *ADCx)
{
  ((ADCx->IER) &= ~((0x1UL << (9U))));
}
# 9026 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_ADRDY(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (0U)))) == ((0x1UL << (0U)))) ? 1UL : 0UL);
}
# 9038 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOC(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (2U)))) == ((0x1UL << (2U)))) ? 1UL : 0UL);
}
# 9050 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOS(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (3U)))) == ((0x1UL << (3U)))) ? 1UL : 0UL);
}
# 9062 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_OVR(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (4U)))) == ((0x1UL << (4U)))) ? 1UL : 0UL);
}
# 9074 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_EOSMP(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (1U)))) == ((0x1UL << (1U)))) ? 1UL : 0UL);
}
# 9086 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JEOC(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (5U)))) == ((0x1UL << (5U)))) ? 1UL : 0UL);
}
# 9098 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JEOS(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (6U)))) == ((0x1UL << (6U)))) ? 1UL : 0UL);
}
# 9110 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_JQOVF(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (10U)))) == ((0x1UL << (10U)))) ? 1UL : 0UL);
}
# 9122 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD1(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (7U)))) == ((0x1UL << (7U)))) ? 1UL : 0UL);
}
# 9134 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD2(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (8U)))) == ((0x1UL << (8U)))) ? 1UL : 0UL);
}
# 9146 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_ll_adc.h"
static inline uint32_t LL_ADC_IsEnabledIT_AWD3(const ADC_TypeDef *ADCx)
{
  return ((((ADCx->IER) & ((0x1UL << (9U)))) == ((0x1UL << (9U)))) ? 1UL : 0UL);
}
# 32 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h" 2
# 49 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
typedef struct
{
  uint32_t Ratio;


  uint32_t RightBitShift;


  uint32_t TriggeredMode;


  uint32_t OversamplingStopReset;
# 69 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
} ADC_OversamplingTypeDef;
# 90 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
typedef struct
{
  uint32_t ClockPrescaler;
# 109 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t Resolution;


  uint32_t DataAlign;



  uint32_t GainCompensation;
# 128 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t ScanConvMode;
# 140 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t EOCSelection;



  FunctionalState LowPowerAutoWait;
# 166 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  FunctionalState ContinuousConvMode;




  uint32_t NbrOfConversion;
# 189 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  FunctionalState DiscontinuousConvMode;
# 200 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t NbrOfDiscConversion;




  uint32_t ExternalTrigConv;






  uint32_t ExternalTrigConvEdge;



  uint32_t SamplingMode;


  FunctionalState DMAContinuousRequests;







  uint32_t Overrun;
# 243 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  FunctionalState OversamplingMode;




  ADC_OversamplingTypeDef Oversampling;



} ADC_InitTypeDef;
# 267 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
typedef struct
{
  uint32_t Channel;





  uint32_t Rank;





  uint32_t SamplingTime;
# 294 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t SingleDiff;
# 312 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t OffsetNumber;




  uint32_t Offset;
# 326 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t OffsetSign;





  FunctionalState OffsetSaturation;





} ADC_ChannelConfTypeDef;
# 349 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
typedef struct
{
  uint32_t WatchdogNumber;






  uint32_t WatchdogMode;
# 370 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t Channel;
# 380 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  FunctionalState ITMode;


  uint32_t HighThreshold;
# 395 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t LowThreshold;
# 407 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
  uint32_t FilteringConfig;





} ADC_AnalogWDGConfTypeDef;





typedef struct
{
  uint32_t ContextQueue;



  uint32_t ChannelCount;
} ADC_InjectionConfigTypeDef;
# 489 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
typedef struct

{
  ADC_TypeDef *Instance;
  ADC_InitTypeDef Init;

  DMA_HandleTypeDef *DMA_Handle;
  HAL_LockTypeDef Lock;
  volatile uint32_t State;
  volatile uint32_t ErrorCode;
  ADC_InjectionConfigTypeDef InjectionConfig ;
# 517 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
} ADC_HandleTypeDef;
# 2198 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t Ratio;


  uint32_t RightBitShift;

} ADC_InjOversamplingTypeDef;
# 80 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t InjectedChannel;





  uint32_t InjectedRank;






  uint32_t InjectedSamplingTime;
# 108 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  uint32_t InjectedSingleDiff;
# 127 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  uint32_t InjectedOffsetNumber;




  uint32_t InjectedOffset;
# 142 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  uint32_t InjectedOffsetSign;






  FunctionalState InjectedOffsetSaturation;






  uint32_t InjectedNbrOfConversion;
# 166 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  FunctionalState InjectedDiscontinuousConvMode;
# 182 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  FunctionalState AutoInjectedConv;
# 201 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  FunctionalState QueueInjectedContext;
# 220 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  uint32_t ExternalTrigInjecConv;
# 231 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  uint32_t ExternalTrigInjecConvEdge;
# 240 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
  FunctionalState InjecOversamplingMode;




  ADC_InjOversamplingTypeDef InjecOversampling;




} ADC_InjectionConfTypeDef;
# 259 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
typedef struct
{
  uint32_t Mode;


  uint32_t DMAAccessMode;




  uint32_t TwoSamplingDelay;




} ADC_MultiModeTypeDef;
# 1491 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_Calibration_Start(ADC_HandleTypeDef *hadc, uint32_t SingleDiff);
uint32_t HAL_ADCEx_Calibration_GetValue(const ADC_HandleTypeDef *hadc, uint32_t SingleDiff);
HAL_StatusTypeDef HAL_ADCEx_Calibration_SetValue(ADC_HandleTypeDef *hadc, uint32_t SingleDiff,
                                                       uint32_t CalibrationFactor);


HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedPollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout);


HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef *hadc);



HAL_StatusTypeDef HAL_ADCEx_MultiModeStart_DMA(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADCEx_MultiModeStop_DMA(ADC_HandleTypeDef *hadc);
uint32_t HAL_ADCEx_MultiModeGetValue(const ADC_HandleTypeDef *hadc);



uint32_t HAL_ADCEx_InjectedGetValue(const ADC_HandleTypeDef *hadc, uint32_t InjectedRank);


void HAL_ADCEx_InjectedConvCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_InjectedQueueOverflowCallback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_LevelOutOfWindow2Callback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_LevelOutOfWindow3Callback(ADC_HandleTypeDef *hadc);
void HAL_ADCEx_EndOfSamplingCallback(ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADCEx_RegularStop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_RegularStop_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_RegularStop_DMA(ADC_HandleTypeDef *hadc);

HAL_StatusTypeDef HAL_ADCEx_RegularMultiModeStop_DMA(ADC_HandleTypeDef *hadc);
# 1538 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc_ex.h"
HAL_StatusTypeDef HAL_ADCEx_InjectedConfigChannel(ADC_HandleTypeDef *hadc,
                                                        const ADC_InjectionConfTypeDef *pConfigInjected);

HAL_StatusTypeDef HAL_ADCEx_MultiModeConfigChannel(ADC_HandleTypeDef *hadc,
                                                         const ADC_MultiModeTypeDef *pMultimode);


HAL_StatusTypeDef HAL_ADCEx_EnableInjectedQueue(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_DisableInjectedQueue(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_DisableVoltageRegulator(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADCEx_EnterADCDeepPowerDownMode(ADC_HandleTypeDef *hadc);
# 2199 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h" 2
# 2210 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspInit(ADC_HandleTypeDef *hadc);
void HAL_ADC_MspDeInit(ADC_HandleTypeDef *hadc);
# 2232 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout);
HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef *hadc, uint32_t EventType, uint32_t Timeout);


HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length);
HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef *hadc);


uint32_t HAL_ADC_GetValue(const ADC_HandleTypeDef *hadc);


HAL_StatusTypeDef HAL_ADC_StartSampling(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef HAL_ADC_StopSampling(ADC_HandleTypeDef *hadc);


void HAL_ADC_IRQHandler(ADC_HandleTypeDef *hadc);
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef *hadc);
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc);
# 2267 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef *hadc, const ADC_ChannelConfTypeDef *pConfig);
HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef *hadc,
                                                const ADC_AnalogWDGConfTypeDef *pAnalogWDGConfig);
# 2279 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
uint32_t HAL_ADC_GetState(const ADC_HandleTypeDef *hadc);
uint32_t HAL_ADC_GetError(const ADC_HandleTypeDef *hadc);
# 2294 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_adc.h"
HAL_StatusTypeDef ADC_ConversionStop(ADC_HandleTypeDef *hadc, uint32_t ConversionGroup);
HAL_StatusTypeDef ADC_Enable(ADC_HandleTypeDef *hadc);
HAL_StatusTypeDef ADC_Disable(ADC_HandleTypeDef *hadc);
void ADC_DMAConvCplt(DMA_HandleTypeDef *hdma);
void ADC_DMAHalfConvCplt(DMA_HandleTypeDef *hdma);
void ADC_DMAError(DMA_HandleTypeDef *hdma);
# 229 "Core/Inc/stm32g4xx_hal_conf.h" 2
# 252 "Core/Inc/stm32g4xx_hal_conf.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_exti.h" 1
# 44 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_exti.h"
typedef enum
{
  HAL_EXTI_COMMON_CB_ID = 0x00UL
} EXTI_CallbackIDTypeDef;





typedef struct
{
  uint32_t Line;
  void (* PendingCallback)(void);
} EXTI_HandleTypeDef;




typedef struct
{
  uint32_t Line;

  uint32_t Mode;

  uint32_t Trigger;

  uint32_t GPIOSel;


} EXTI_ConfigTypeDef;
# 275 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_exti.h"
HAL_StatusTypeDef HAL_EXTI_SetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_GetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_ClearConfigLine(EXTI_HandleTypeDef *hexti);
HAL_StatusTypeDef HAL_EXTI_RegisterCallback(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void));
HAL_StatusTypeDef HAL_EXTI_GetHandle(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine);
# 289 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_exti.h"
void HAL_EXTI_IRQHandler(EXTI_HandleTypeDef *hexti);
uint32_t HAL_EXTI_GetPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_ClearPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_GenerateSWI(EXTI_HandleTypeDef *hexti);
# 253 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h" 1
# 48 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
typedef enum
{
  HAL_FDCAN_STATE_RESET = 0x00U,
  HAL_FDCAN_STATE_READY = 0x01U,
  HAL_FDCAN_STATE_BUSY = 0x02U,
  HAL_FDCAN_STATE_ERROR = 0x03U
} HAL_FDCAN_StateTypeDef;




typedef struct
{
  uint32_t ClockDivider;





  uint32_t FrameFormat;


  uint32_t Mode;


  FunctionalState AutoRetransmission;


  FunctionalState TransmitPause;


  FunctionalState ProtocolException;


  uint32_t NominalPrescaler;



  uint32_t NominalSyncJumpWidth;




  uint32_t NominalTimeSeg1;


  uint32_t NominalTimeSeg2;


  uint32_t DataPrescaler;



  uint32_t DataSyncJumpWidth;




  uint32_t DataTimeSeg1;


  uint32_t DataTimeSeg2;


  uint32_t StdFiltersNbr;


  uint32_t ExtFiltersNbr;


  uint32_t TxFifoQueueMode;


} FDCAN_InitTypeDef;




typedef struct
{
  uint32_t IdType;


  uint32_t FilterIndex;




  uint32_t FilterType;




  uint32_t FilterConfig;


  uint32_t FilterID1;




  uint32_t FilterID2;




} FDCAN_FilterTypeDef;




typedef struct
{
  uint32_t Identifier;




  uint32_t IdType;



  uint32_t TxFrameType;


  uint32_t DataLength;


  uint32_t ErrorStateIndicator;


  uint32_t BitRateSwitch;



  uint32_t FDFormat;



  uint32_t TxEventFifoControl;


  uint32_t MessageMarker;



} FDCAN_TxHeaderTypeDef;




typedef struct
{
  uint32_t Identifier;




  uint32_t IdType;


  uint32_t RxFrameType;


  uint32_t DataLength;


  uint32_t ErrorStateIndicator;


  uint32_t BitRateSwitch;



  uint32_t FDFormat;



  uint32_t RxTimestamp;



  uint32_t FilterIndex;






  uint32_t IsFilterMatchingFrame;





} FDCAN_RxHeaderTypeDef;




typedef struct
{
  uint32_t Identifier;




  uint32_t IdType;


  uint32_t TxFrameType;


  uint32_t DataLength;


  uint32_t ErrorStateIndicator;


  uint32_t BitRateSwitch;



  uint32_t FDFormat;



  uint32_t TxTimestamp;



  uint32_t MessageMarker;



  uint32_t EventType;


} FDCAN_TxEventFifoTypeDef;




typedef struct
{
  uint32_t FilterList;




  uint32_t FilterIndex;




  uint32_t MessageStorage;


  uint32_t MessageIndex;






} FDCAN_HpMsgStatusTypeDef;




typedef struct
{
  uint32_t LastErrorCode;


  uint32_t DataLastErrorCode;



  uint32_t Activity;


  uint32_t ErrorPassive;




  uint32_t Warning;






  uint32_t BusOff;




  uint32_t RxESIflag;




  uint32_t RxBRSflag;




  uint32_t RxFDFflag;





  uint32_t ProtocolException;




  uint32_t TDCvalue;


} FDCAN_ProtocolStatusTypeDef;




typedef struct
{
  uint32_t TxErrorCnt;


  uint32_t RxErrorCnt;


  uint32_t RxErrorPassive;






  uint32_t ErrorLogging;






} FDCAN_ErrorCountersTypeDef;




typedef struct
{
  uint32_t StandardFilterSA;


  uint32_t ExtendedFilterSA;


  uint32_t RxFIFO0SA;


  uint32_t RxFIFO1SA;


  uint32_t TxEventFIFOSA;


  uint32_t TxFIFOQSA;


} FDCAN_MsgRamAddressTypeDef;







typedef struct

{
  FDCAN_GlobalTypeDef *Instance;

  FDCAN_InitTypeDef Init;

  FDCAN_MsgRamAddressTypeDef msgRam;

  uint32_t LatestTxFifoQRequest;


  volatile HAL_FDCAN_StateTypeDef State;

  HAL_LockTypeDef Lock;

  volatile uint32_t ErrorCode;
# 467 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
} FDCAN_HandleTypeDef;
# 1135 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
HAL_StatusTypeDef HAL_FDCAN_Init(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DeInit(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_MspInit(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_MspDeInit(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnterPowerDownMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ExitPowerDownMode(FDCAN_HandleTypeDef *hfdcan);
# 1174 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
HAL_StatusTypeDef HAL_FDCAN_ConfigFilter(FDCAN_HandleTypeDef *hfdcan, const FDCAN_FilterTypeDef *sFilterConfig);
HAL_StatusTypeDef HAL_FDCAN_ConfigGlobalFilter(FDCAN_HandleTypeDef *hfdcan, uint32_t NonMatchingStd,
                                               uint32_t NonMatchingExt, uint32_t RejectRemoteStd,
                                               uint32_t RejectRemoteExt);
HAL_StatusTypeDef HAL_FDCAN_ConfigExtendedIdMask(FDCAN_HandleTypeDef *hfdcan, uint32_t Mask);
HAL_StatusTypeDef HAL_FDCAN_ConfigRxFifoOverwrite(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo, uint32_t OperationMode);
HAL_StatusTypeDef HAL_FDCAN_ConfigRamWatchdog(FDCAN_HandleTypeDef *hfdcan, uint32_t CounterStartValue);
HAL_StatusTypeDef HAL_FDCAN_ConfigTimestampCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimestampPrescaler);
HAL_StatusTypeDef HAL_FDCAN_EnableTimestampCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimestampOperation);
HAL_StatusTypeDef HAL_FDCAN_DisableTimestampCounter(FDCAN_HandleTypeDef *hfdcan);
uint16_t HAL_FDCAN_GetTimestampCounter(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ResetTimestampCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ConfigTimeoutCounter(FDCAN_HandleTypeDef *hfdcan, uint32_t TimeoutOperation,
                                                 uint32_t TimeoutPeriod);
HAL_StatusTypeDef HAL_FDCAN_EnableTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
uint16_t HAL_FDCAN_GetTimeoutCounter(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ResetTimeoutCounter(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ConfigTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan, uint32_t TdcOffset,
                                                      uint32_t TdcFilter);
HAL_StatusTypeDef HAL_FDCAN_EnableTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableTxDelayCompensation(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnableISOMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableISOMode(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_EnableEdgeFiltering(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_DisableEdgeFiltering(FDCAN_HandleTypeDef *hfdcan);
# 1208 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
HAL_StatusTypeDef HAL_FDCAN_Start(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_Stop(FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_AddMessageToTxFifoQ(FDCAN_HandleTypeDef *hfdcan, const FDCAN_TxHeaderTypeDef *pTxHeader,
                                                const uint8_t *pTxData);
uint32_t HAL_FDCAN_GetLatestTxFifoQRequestBuffer(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_AbortTxRequest(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndex);
HAL_StatusTypeDef HAL_FDCAN_GetRxMessage(FDCAN_HandleTypeDef *hfdcan, uint32_t RxLocation,
                                         FDCAN_RxHeaderTypeDef *pRxHeader, uint8_t *pRxData);
HAL_StatusTypeDef HAL_FDCAN_GetTxEvent(FDCAN_HandleTypeDef *hfdcan, FDCAN_TxEventFifoTypeDef *pTxEvent);
HAL_StatusTypeDef HAL_FDCAN_GetHighPriorityMessageStatus(const FDCAN_HandleTypeDef *hfdcan,
                                                         FDCAN_HpMsgStatusTypeDef *HpMsgStatus);
HAL_StatusTypeDef HAL_FDCAN_GetProtocolStatus(const FDCAN_HandleTypeDef *hfdcan,
                                              FDCAN_ProtocolStatusTypeDef *ProtocolStatus);
HAL_StatusTypeDef HAL_FDCAN_GetErrorCounters(const FDCAN_HandleTypeDef *hfdcan,
                                             FDCAN_ErrorCountersTypeDef *ErrorCounters);
uint32_t HAL_FDCAN_IsTxBufferMessagePending(const FDCAN_HandleTypeDef *hfdcan, uint32_t TxBufferIndex);
uint32_t HAL_FDCAN_GetRxFifoFillLevel(const FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo);
uint32_t HAL_FDCAN_GetTxFifoFreeLevel(const FDCAN_HandleTypeDef *hfdcan);
uint32_t HAL_FDCAN_IsRestrictedOperationMode(const FDCAN_HandleTypeDef *hfdcan);
HAL_StatusTypeDef HAL_FDCAN_ExitRestrictedOperationMode(FDCAN_HandleTypeDef *hfdcan);
# 1236 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
HAL_StatusTypeDef HAL_FDCAN_ConfigInterruptLines(FDCAN_HandleTypeDef *hfdcan, uint32_t ITList, uint32_t InterruptLine);
HAL_StatusTypeDef HAL_FDCAN_ActivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t ActiveITs,
                                                 uint32_t BufferIndexes);
HAL_StatusTypeDef HAL_FDCAN_DeactivateNotification(FDCAN_HandleTypeDef *hfdcan, uint32_t InactiveITs);
void HAL_FDCAN_IRQHandler(FDCAN_HandleTypeDef *hfdcan);
# 1249 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
void HAL_FDCAN_TxEventFifoCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t TxEventFifoITs);
void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs);
void HAL_FDCAN_RxFifo1Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo1ITs);
void HAL_FDCAN_TxFifoEmptyCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TxBufferCompleteCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
void HAL_FDCAN_TxBufferAbortCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t BufferIndexes);
void HAL_FDCAN_HighPriorityMessageCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TimestampWraparoundCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_TimeoutOccurredCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_ErrorCallback(FDCAN_HandleTypeDef *hfdcan);
void HAL_FDCAN_ErrorStatusCallback(FDCAN_HandleTypeDef *hfdcan, uint32_t ErrorStatusITs);
# 1268 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_fdcan.h"
uint32_t HAL_FDCAN_GetError(const FDCAN_HandleTypeDef *hfdcan);
HAL_FDCAN_StateTypeDef HAL_FDCAN_GetState(const FDCAN_HandleTypeDef *hfdcan);
# 257 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h" 1
# 45 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
typedef struct
{
  uint32_t TypeErase;

  uint32_t Banks;


  uint32_t Page;


  uint32_t NbPages;

} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;

  uint32_t WRPArea;


  uint32_t WRPStartOffset;

  uint32_t WRPEndOffset;

  uint32_t RDPLevel;

  uint32_t USERType;

  uint32_t USERConfig;
# 86 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
  uint32_t PCROPConfig;


  uint32_t PCROPStartAddr;


  uint32_t PCROPEndAddr;

  uint32_t BootEntryPoint;

  uint32_t SecBank;





  uint32_t SecSize;



} FLASH_OBProgramInitTypeDef;




typedef enum
{
  FLASH_PROC_NONE = 0,
  FLASH_PROC_PAGE_ERASE,
  FLASH_PROC_MASS_ERASE,
  FLASH_PROC_PROGRAM,
  FLASH_PROC_PROGRAM_LAST
} FLASH_ProcedureTypeDef;




typedef enum
{
  FLASH_CACHE_DISABLED = 0,
  FLASH_CACHE_ICACHE_ENABLED,
  FLASH_CACHE_DCACHE_ENABLED,
  FLASH_CACHE_ICACHE_DCACHE_ENABLED
} FLASH_CacheTypeDef;




typedef struct
{
  HAL_LockTypeDef Lock;
  volatile uint32_t ErrorCode;
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;
  volatile uint32_t Address;
  volatile uint32_t Bank;
  volatile uint32_t Page;
  volatile uint32_t NbPagesToErase;
  volatile FLASH_CacheTypeDef CacheToReactivate;
} FLASH_ProcessTypeDef;
# 797 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash_ex.h" 1
# 52 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *PageError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
HAL_StatusTypeDef HAL_FLASHEx_EnableSecMemProtection(uint32_t Bank);
void HAL_FLASHEx_EnableDebugger(void);
void HAL_FLASHEx_DisableDebugger(void);
# 70 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash_ex.h"
void FLASH_PageErase(uint32_t Page, uint32_t Banks);
void FLASH_FlushCaches(void);
# 798 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h" 2
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash_ramfunc.h" 1
# 48 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash_ramfunc.h"
__attribute__((section(".RamFunc"))) HAL_StatusTypeDef HAL_FLASHEx_EnableRunPowerDown(void);
__attribute__((section(".RamFunc"))) HAL_StatusTypeDef HAL_FLASHEx_DisableRunPowerDown(void);

__attribute__((section(".RamFunc"))) HAL_StatusTypeDef HAL_FLASHEx_OB_DBankConfig(uint32_t DBankConfig);
# 799 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h" 2





extern FLASH_ProcessTypeDef pFlash;
# 818 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);

void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 833 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);

HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Launch(void);
# 847 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
# 859 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_flash.h"
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 261 "Core/Inc/stm32g4xx_hal_conf.h" 2
# 308 "Core/Inc/stm32g4xx_hal_conf.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h" 1
# 47 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 341 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr_ex.h" 1
# 49 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr_ex.h"
typedef struct
{
  uint32_t PVMType;

  uint32_t Mode;

}PWR_PVMTypeDef;
# 741 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr_ex.h"
uint32_t HAL_PWREx_GetVoltageRange(void);
HAL_StatusTypeDef HAL_PWREx_ControlVoltageScaling(uint32_t VoltageScaling);
void HAL_PWREx_EnableBatteryCharging(uint32_t ResistorSelection);
void HAL_PWREx_DisableBatteryCharging(void);
void HAL_PWREx_EnableInternalWakeUpLine(void);
void HAL_PWREx_DisableInternalWakeUpLine(void);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullUp(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullUp(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_EnableGPIOPullDown(uint32_t GPIO, uint32_t GPIONumber);
HAL_StatusTypeDef HAL_PWREx_DisableGPIOPullDown(uint32_t GPIO, uint32_t GPIONumber);
void HAL_PWREx_EnablePullUpPullDownConfig(void);
void HAL_PWREx_DisablePullUpPullDownConfig(void);
void HAL_PWREx_EnableSRAM2ContentRetention(void);
void HAL_PWREx_DisableSRAM2ContentRetention(void);

void HAL_PWREx_EnablePVM1(void);
void HAL_PWREx_DisablePVM1(void);


void HAL_PWREx_EnablePVM2(void);
void HAL_PWREx_DisablePVM2(void);

void HAL_PWREx_EnablePVM3(void);
void HAL_PWREx_DisablePVM3(void);
void HAL_PWREx_EnablePVM4(void);
void HAL_PWREx_DisablePVM4(void);
HAL_StatusTypeDef HAL_PWREx_ConfigPVM(PWR_PVMTypeDef *sConfigPVM);


void HAL_PWREx_EnableLowPowerRunMode(void);
HAL_StatusTypeDef HAL_PWREx_DisableLowPowerRunMode(void);
void HAL_PWREx_EnterSTOP0Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSTOP1Mode(uint8_t STOPEntry);
void HAL_PWREx_EnterSHUTDOWNMode(void);

void HAL_PWREx_PVD_PVM_IRQHandler(void);

void HAL_PWREx_PVM1Callback(void);


void HAL_PWREx_PVM2Callback(void);

void HAL_PWREx_PVM3Callback(void);
void HAL_PWREx_PVM4Callback(void);


void HAL_PWREx_EnableUCPDStandbyMode(void);
void HAL_PWREx_DisableUCPDStandbyMode(void);


void HAL_PWREx_EnableUCPDDeadBattery(void);
void HAL_PWREx_DisableUCPDDeadBattery(void);
# 342 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h" 2
# 354 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);
# 367 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_pwr.h"
HAL_StatusTypeDef HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD);
void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);



void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinPolarity);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSTANDBYMode(void);

void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);

void HAL_PWR_PVDCallback(void);
# 309 "Core/Inc/stm32g4xx_hal_conf.h" 2
# 344 "Core/Inc/stm32g4xx_hal_conf.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
typedef struct
{
  uint32_t Prescaler;



  uint32_t CounterMode;


  uint32_t Period;






  uint32_t ClockDivision;


  uint32_t RepetitionCounter;
# 76 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
  uint32_t AutoReloadPreload;

} TIM_Base_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;





  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCFastMode;




  uint32_t OCIdleState;



  uint32_t OCNIdleState;


} TIM_OC_InitTypeDef;




typedef struct
{
  uint32_t OCMode;


  uint32_t Pulse;





  uint32_t OCPolarity;


  uint32_t OCNPolarity;



  uint32_t OCIdleState;



  uint32_t OCNIdleState;



  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICFilter;

} TIM_OnePulse_InitTypeDef;




typedef struct
{
  uint32_t ICPolarity;


  uint32_t ICSelection;


  uint32_t ICPrescaler;


  uint32_t ICFilter;

} TIM_IC_InitTypeDef;




typedef struct
{
  uint32_t EncoderMode;


  uint32_t IC1Polarity;


  uint32_t IC1Selection;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t IC2Polarity;


  uint32_t IC2Selection;


  uint32_t IC2Prescaler;


  uint32_t IC2Filter;

} TIM_Encoder_InitTypeDef;




typedef struct
{
  uint32_t ClockSource;

  uint32_t ClockPolarity;

  uint32_t ClockPrescaler;

  uint32_t ClockFilter;

} TIM_ClockConfigTypeDef;




typedef struct
{
  uint32_t ClearInputState;

  uint32_t ClearInputSource;

  uint32_t ClearInputPolarity;

  uint32_t ClearInputPrescaler;


  uint32_t ClearInputFilter;

} TIM_ClearInputConfigTypeDef;






typedef struct
{
  uint32_t MasterOutputTrigger;

  uint32_t MasterOutputTrigger2;

  uint32_t MasterSlaveMode;






} TIM_MasterConfigTypeDef;




typedef struct
{
  uint32_t SlaveMode;

  uint32_t InputTrigger;

  uint32_t TriggerPolarity;

  uint32_t TriggerPrescaler;

  uint32_t TriggerFilter;


} TIM_SlaveConfigTypeDef;






typedef struct
{
  uint32_t OffStateRunMode;

  uint32_t OffStateIDLEMode;

  uint32_t LockLevel;

  uint32_t DeadTime;

  uint32_t BreakState;

  uint32_t BreakPolarity;

  uint32_t BreakFilter;

  uint32_t BreakAFMode;

  uint32_t Break2State;

  uint32_t Break2Polarity;

  uint32_t Break2Filter;

  uint32_t Break2AFMode;

  uint32_t AutomaticOutput;

} TIM_BreakDeadTimeConfigTypeDef;




typedef enum
{
  HAL_TIM_STATE_RESET = 0x00U,
  HAL_TIM_STATE_READY = 0x01U,
  HAL_TIM_STATE_BUSY = 0x02U,
  HAL_TIM_STATE_TIMEOUT = 0x03U,
  HAL_TIM_STATE_ERROR = 0x04U
} HAL_TIM_StateTypeDef;




typedef enum
{
  HAL_TIM_CHANNEL_STATE_RESET = 0x00U,
  HAL_TIM_CHANNEL_STATE_READY = 0x01U,
  HAL_TIM_CHANNEL_STATE_BUSY = 0x02U,
} HAL_TIM_ChannelStateTypeDef;




typedef enum
{
  HAL_DMA_BURST_STATE_RESET = 0x00U,
  HAL_DMA_BURST_STATE_READY = 0x01U,
  HAL_DMA_BURST_STATE_BUSY = 0x02U,
} HAL_TIM_DMABurstStateTypeDef;




typedef enum
{
  HAL_TIM_ACTIVE_CHANNEL_1 = 0x01U,
  HAL_TIM_ACTIVE_CHANNEL_2 = 0x02U,
  HAL_TIM_ACTIVE_CHANNEL_3 = 0x04U,
  HAL_TIM_ACTIVE_CHANNEL_4 = 0x08U,
  HAL_TIM_ACTIVE_CHANNEL_5 = 0x10U,
  HAL_TIM_ACTIVE_CHANNEL_6 = 0x20U,
  HAL_TIM_ACTIVE_CHANNEL_CLEARED = 0x00U
} HAL_TIM_ActiveChannel;







typedef struct

{
  TIM_TypeDef *Instance;
  TIM_Base_InitTypeDef Init;
  HAL_TIM_ActiveChannel Channel;
  DMA_HandleTypeDef *hdma[7];

  HAL_LockTypeDef Lock;
  volatile HAL_TIM_StateTypeDef State;
  volatile HAL_TIM_ChannelStateTypeDef ChannelState[6];
  volatile HAL_TIM_ChannelStateTypeDef ChannelNState[4];
  volatile HAL_TIM_DMABurstStateTypeDef DMABurstState;
# 411 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
} TIM_HandleTypeDef;
# 2336 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h" 1
# 47 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
typedef struct
{
  uint32_t IC1Polarity;


  uint32_t IC1Prescaler;


  uint32_t IC1Filter;


  uint32_t Commutation_Delay;

} TIM_HallSensor_InitTypeDef;




typedef struct
{
  uint32_t Source;

  uint32_t Enable;

  uint32_t Polarity;

} TIMEx_BreakInputConfigTypeDef;




typedef struct
{
  uint32_t Polarity;

  uint32_t Prescaler;

  uint32_t Filter;

  FunctionalState FirstIndexEnable;

  uint32_t Position;

  uint32_t Direction;

} TIMEx_EncoderIndexConfigTypeDef;
# 1961 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef *htim, const TIM_HallSensor_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef *htim);

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef *htim);


HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef *htim);
# 1986 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, const uint32_t *pData,
                                          uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2007 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);


HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, const uint32_t *pData,
                                           uint16_t Length);
HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2027 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);


HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 2042 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                              uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_IT(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                 uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_DMA(TIM_HandleTypeDef *htim, uint32_t InputTrigger,
                                                  uint32_t CommutationSource);
HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *htim,
                                                        const TIM_MasterConfigTypeDef *sMasterConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef *htim,
                                                const TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);
HAL_StatusTypeDef HAL_TIMEx_ConfigBreakInput(TIM_HandleTypeDef *htim, uint32_t BreakInput,
                                             const TIMEx_BreakInputConfigTypeDef *sBreakInputConfig);
HAL_StatusTypeDef HAL_TIMEx_GroupChannel5(TIM_HandleTypeDef *htim, uint32_t Channels);
HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef *htim, uint32_t Remap);
HAL_StatusTypeDef HAL_TIMEx_TISelection(TIM_HandleTypeDef *htim, uint32_t TISelection, uint32_t Channel);

HAL_StatusTypeDef HAL_TIMEx_DisarmBreakInput(TIM_HandleTypeDef *htim, uint32_t BreakInput);
HAL_StatusTypeDef HAL_TIMEx_ReArmBreakInput(const TIM_HandleTypeDef *htim, uint32_t BreakInput);
HAL_StatusTypeDef HAL_TIMEx_DitheringEnable(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DitheringDisable(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_OC_ConfigPulseOnCompare(TIM_HandleTypeDef *htim, uint32_t PulseWidthPrescaler,
                                                    uint32_t PulseWidth);
HAL_StatusTypeDef HAL_TIMEx_ConfigSlaveModePreload(TIM_HandleTypeDef *htim, uint32_t Source);
HAL_StatusTypeDef HAL_TIMEx_EnableSlaveModePreload(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DisableSlaveModePreload(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_EnableDeadTimePreload(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DisableDeadTimePreload(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_ConfigDeadTime(TIM_HandleTypeDef *htim, uint32_t Deadtime);
HAL_StatusTypeDef HAL_TIMEx_ConfigAsymmetricalDeadTime(TIM_HandleTypeDef *htim, uint32_t FallingDeadtime);
HAL_StatusTypeDef HAL_TIMEx_EnableAsymmetricalDeadTime(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DisableAsymmetricalDeadTime(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_ConfigEncoderIndex(TIM_HandleTypeDef *htim,
                                               TIMEx_EncoderIndexConfigTypeDef *sEncoderIndexConfig);
HAL_StatusTypeDef HAL_TIMEx_EnableEncoderIndex(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DisableEncoderIndex(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_EnableEncoderFirstIndex(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIMEx_DisableEncoderFirstIndex(TIM_HandleTypeDef *htim);
# 2088 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
void HAL_TIMEx_CommutCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_CommutHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_Break2Callback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_EncoderIndexCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_DirectionChangeCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_IndexErrorCallback(TIM_HandleTypeDef *htim);
void HAL_TIMEx_TransitionErrorCallback(TIM_HandleTypeDef *htim);
# 2105 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_ChannelStateTypeDef HAL_TIMEx_GetChannelNState(const TIM_HandleTypeDef *htim, uint32_t ChannelN);
# 2120 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim_ex.h"
void TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma);
void TIMEx_DMACommutationHalfCplt(DMA_HandleTypeDef *hdma);
# 2337 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h" 2
# 2348 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, const uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim);
# 2370 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, const uint32_t *pData,
                                       uint16_t Length);
HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2393 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, const uint32_t *pData,
                                        uint16_t Length);
HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2416 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim);
HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2438 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel);

HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
# 2457 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, const TIM_Encoder_InitTypeDef *sConfig);
HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim);
void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim);

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel);

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1,
                                            uint32_t *pData2, uint16_t Length);
HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel);
# 2480 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim);
# 2490 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, const TIM_OC_InitTypeDef *sConfig,
                                           uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, const TIM_OC_InitTypeDef *sConfig,
                                            uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, const TIM_IC_InitTypeDef *sConfig,
                                           uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig,
                                                 uint32_t OutputChannel, uint32_t InputChannel);
HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim,
                                           const TIM_ClearInputConfigTypeDef *sClearInputConfig,
                                           uint32_t Channel);
HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, const TIM_ClockConfigTypeDef *sClockSourceConfig);
HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro(TIM_HandleTypeDef *htim, const TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro_IT(TIM_HandleTypeDef *htim, const TIM_SlaveConfigTypeDef *sSlaveConfig);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                              uint32_t BurstRequestSrc, const uint32_t *BurstBuffer,
                                              uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiWriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                   uint32_t BurstRequestSrc, const uint32_t *BurstBuffer,
                                                   uint32_t BurstLength, uint32_t DataLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                             uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_MultiReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress,
                                                  uint32_t BurstRequestSrc, uint32_t *BurstBuffer,
                                                  uint32_t BurstLength, uint32_t DataLength);
HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource);
uint32_t HAL_TIM_ReadCapturedValue(const TIM_HandleTypeDef *htim, uint32_t Channel);
# 2529 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PeriodElapsedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_IC_CaptureHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_TriggerHalfCpltCallback(TIM_HandleTypeDef *htim);
void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim);
# 2556 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(const TIM_HandleTypeDef *htim);
HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(const TIM_HandleTypeDef *htim);


HAL_TIM_ActiveChannel HAL_TIM_GetActiveChannel(const TIM_HandleTypeDef *htim);
HAL_TIM_ChannelStateTypeDef HAL_TIM_GetChannelState(const TIM_HandleTypeDef *htim, uint32_t Channel);
HAL_TIM_DMABurstStateTypeDef HAL_TIM_DMABurstState(const TIM_HandleTypeDef *htim);
# 2580 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_tim.h"
void TIM_Base_SetConfig(TIM_TypeDef *TIMx, const TIM_Base_InitTypeDef *Structure);
void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, const TIM_OC_InitTypeDef *OC_Config);
void TIM_ETR_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler,
                       uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter);

void TIM_DMADelayPulseHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_DMAError(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma);
void TIM_DMACaptureHalfCplt(DMA_HandleTypeDef *hdma);
void TIM_CCxChannelCmd(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState);
# 345 "Core/Inc/stm32g4xx_hal_conf.h" 2



# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
typedef struct
{
  uint32_t BaudRate;
# 66 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
  uint32_t WordLength;


  uint32_t StopBits;


  uint32_t Parity;






  uint32_t Mode;


  uint32_t HwFlowCtl;



  uint32_t OverSampling;



  uint32_t OneBitSampling;



  uint32_t ClockPrescaler;


} UART_InitTypeDef;




typedef struct
{
  uint32_t AdvFeatureInit;




  uint32_t TxPinLevelInvert;


  uint32_t RxPinLevelInvert;


  uint32_t DataInvert;



  uint32_t Swap;


  uint32_t OverrunDisable;


  uint32_t DMADisableonRxError;


  uint32_t AutoBaudRateEnable;


  uint32_t AutoBaudRateMode;



  uint32_t MSBFirst;

} UART_AdvFeatureInitTypeDef;
# 179 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
typedef uint32_t HAL_UART_StateTypeDef;




typedef enum
{
  UART_CLOCKSOURCE_PCLK1 = 0x00U,
  UART_CLOCKSOURCE_PCLK2 = 0x01U,
  UART_CLOCKSOURCE_HSI = 0x02U,
  UART_CLOCKSOURCE_SYSCLK = 0x04U,
  UART_CLOCKSOURCE_LSE = 0x08U,
  UART_CLOCKSOURCE_UNDEFINED = 0x10U
} UART_ClockSourceTypeDef;
# 203 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
typedef uint32_t HAL_UART_RxTypeTypeDef;
# 214 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
typedef uint32_t HAL_UART_RxEventTypeTypeDef;




typedef struct __UART_HandleTypeDef
{
  USART_TypeDef *Instance;

  UART_InitTypeDef Init;

  UART_AdvFeatureInitTypeDef AdvancedInit;

  const uint8_t *pTxBuffPtr;

  uint16_t TxXferSize;

  volatile uint16_t TxXferCount;

  uint8_t *pRxBuffPtr;

  uint16_t RxXferSize;

  volatile uint16_t RxXferCount;

  uint16_t Mask;

  uint32_t FifoMode;


  uint16_t NbRxDataToProcess;

  uint16_t NbTxDataToProcess;

  volatile HAL_UART_RxTypeTypeDef ReceptionType;

  volatile HAL_UART_RxEventTypeTypeDef RxEventType;

  void (*RxISR)(struct __UART_HandleTypeDef *huart);

  void (*TxISR)(struct __UART_HandleTypeDef *huart);

  DMA_HandleTypeDef *hdmatx;

  DMA_HandleTypeDef *hdmarx;

  HAL_LockTypeDef Lock;

  volatile HAL_UART_StateTypeDef gState;



  volatile HAL_UART_StateTypeDef RxState;


  volatile uint32_t ErrorCode;
# 289 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
} UART_HandleTypeDef;
# 1594 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
# 1 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart_ex.h" 1
# 46 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart_ex.h"
typedef struct
{
  uint32_t WakeUpEvent;




  uint16_t AddressLength;


  uint8_t Address;
} UART_WakeUpTypeDef;
# 140 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_RS485Ex_Init(UART_HandleTypeDef *huart, uint32_t Polarity, uint32_t AssertionTime,
                                   uint32_t DeassertionTime);
# 151 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart_ex.h"
void HAL_UARTEx_WakeupCallback(UART_HandleTypeDef *huart);

void HAL_UARTEx_RxFifoFullCallback(UART_HandleTypeDef *huart);
void HAL_UARTEx_TxFifoEmptyCallback(UART_HandleTypeDef *huart);
# 165 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart_ex.h"
HAL_StatusTypeDef HAL_UARTEx_StopModeWakeUpSourceConfig(UART_HandleTypeDef *huart, UART_WakeUpTypeDef WakeUpSelection);
HAL_StatusTypeDef HAL_UARTEx_EnableStopMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_DisableStopMode(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_MultiProcessorEx_AddressLength_Set(UART_HandleTypeDef *huart, uint32_t AddressLength);

HAL_StatusTypeDef HAL_UARTEx_EnableFifoMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_DisableFifoMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UARTEx_SetTxFifoThreshold(UART_HandleTypeDef *huart, uint32_t Threshold);
HAL_StatusTypeDef HAL_UARTEx_SetRxFifoThreshold(UART_HandleTypeDef *huart, uint32_t Threshold);

HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint16_t *RxLen,
                                           uint32_t Timeout);
HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

HAL_UART_RxEventTypeTypeDef HAL_UARTEx_GetRxEventType(const UART_HandleTypeDef *huart);
# 1595 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h" 2
# 1606 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod);
HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart);
void HAL_UART_MspInit(UART_HandleTypeDef *huart);
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);
# 1633 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart);

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortTransmitCpltCallback(UART_HandleTypeDef *huart);
void HAL_UART_AbortReceiveCpltCallback(UART_HandleTypeDef *huart);

void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size);
# 1671 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
void HAL_UART_ReceiverTimeout_Config(UART_HandleTypeDef *huart, uint32_t TimeoutValue);
HAL_StatusTypeDef HAL_UART_EnableReceiverTimeout(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_UART_DisableReceiverTimeout(UART_HandleTypeDef *huart);

HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_EnableMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_MultiProcessor_DisableMuteMode(UART_HandleTypeDef *huart);
void HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart);
HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart);
# 1691 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
HAL_UART_StateTypeDef HAL_UART_GetState(const UART_HandleTypeDef *huart);
uint32_t HAL_UART_GetError(const UART_HandleTypeDef *huart);
# 1709 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
HAL_StatusTypeDef UART_SetConfig(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_CheckIdleState(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_WaitOnFlagUntilTimeout(UART_HandleTypeDef *huart, uint32_t Flag, FlagStatus Status,
                                              uint32_t Tickstart, uint32_t Timeout);
void UART_AdvFeatureConfig(UART_HandleTypeDef *huart);
HAL_StatusTypeDef UART_Start_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
HAL_StatusTypeDef UART_Start_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
# 1727 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal_uart.h"
extern const uint16_t UARTPrescTable[12];
# 349 "Core/Inc/stm32g4xx_hal_conf.h" 2
# 30 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h" 2
# 525 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority);
# 540 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(uint32_t Delay);
uint32_t HAL_GetTick(void);
uint32_t HAL_GetTickPrio(void);
HAL_StatusTypeDef HAL_SetTickFreq(uint32_t Freq);
uint32_t HAL_GetTickFreq(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
uint32_t HAL_GetUIDw0(void);
uint32_t HAL_GetUIDw1(void);
uint32_t HAL_GetUIDw2(void);
# 564 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
void HAL_DBGMCU_EnableDBGSleepMode(void);
void HAL_DBGMCU_DisableDBGSleepMode(void);
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
# 579 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
extern volatile uint32_t uwTick;
extern uint32_t uwTickPrio;
extern uint32_t uwTickFreq;
# 591 "Drivers/STM32G4xx_HAL_Driver/Inc/stm32g4xx_hal.h"
void HAL_SYSCFG_CCMSRAMErase(void);
void HAL_SYSCFG_EnableMemorySwappingBank(void);
void HAL_SYSCFG_DisableMemorySwappingBank(void);


void HAL_SYSCFG_VREFBUF_VoltageScalingConfig(uint32_t VoltageScaling);
void HAL_SYSCFG_VREFBUF_HighImpedanceConfig(uint32_t Mode);
void HAL_SYSCFG_VREFBUF_TrimmingConfig(uint32_t TrimmingValue);
HAL_StatusTypeDef HAL_SYSCFG_EnableVREFBUF(void);
void HAL_SYSCFG_DisableVREFBUF(void);


void HAL_SYSCFG_EnableIOSwitchBooster(void);
void HAL_SYSCFG_DisableIOSwitchBooster(void);
void HAL_SYSCFG_EnableIOSwitchVDD(void);
void HAL_SYSCFG_DisableIOSwitchVDD(void);
void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable(uint32_t Page);
# 7 "build/test/mocks/test_precharge/mock_stm32g4xx_hal.h" 2




#pragma GCC diagnostic push


#pragma GCC diagnostic ignored "-Wpragmas"

#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"






void mock_stm32g4xx_hal_Init(void);
void mock_stm32g4xx_hal_Destroy(void);
void mock_stm32g4xx_hal_Verify(void);






void HAL_Init_CMockIgnoreAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);

void HAL_Init_CMockStopIgnore(void);


void HAL_Init_CMockExpectAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_Init_CALLBACK)(int cmock_num_calls);
void HAL_Init_AddCallback(CMOCK_HAL_Init_CALLBACK Callback);
void HAL_Init_Stub(CMOCK_HAL_Init_CALLBACK Callback);



void HAL_DeInit_CMockIgnoreAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);

void HAL_DeInit_CMockStopIgnore(void);


void HAL_DeInit_CMockExpectAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_DeInit_CALLBACK)(int cmock_num_calls);
void HAL_DeInit_AddCallback(CMOCK_HAL_DeInit_CALLBACK Callback);
void HAL_DeInit_Stub(CMOCK_HAL_DeInit_CALLBACK Callback);



void HAL_MspInit_CMockIgnore(void);

void HAL_MspInit_CMockStopIgnore(void);


void HAL_MspInit_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_MspInit_CALLBACK)(int cmock_num_calls);
void HAL_MspInit_AddCallback(CMOCK_HAL_MspInit_CALLBACK Callback);
void HAL_MspInit_Stub(CMOCK_HAL_MspInit_CALLBACK Callback);



void HAL_MspDeInit_CMockIgnore(void);

void HAL_MspDeInit_CMockStopIgnore(void);


void HAL_MspDeInit_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_MspDeInit_CALLBACK)(int cmock_num_calls);
void HAL_MspDeInit_AddCallback(CMOCK_HAL_MspDeInit_CALLBACK Callback);
void HAL_MspDeInit_Stub(CMOCK_HAL_MspDeInit_CALLBACK Callback);



void HAL_InitTick_CMockIgnoreAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);

void HAL_InitTick_CMockStopIgnore(void);


void HAL_InitTick_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t TickPriority, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_InitTick_CALLBACK)(uint32_t TickPriority, int cmock_num_calls);
void HAL_InitTick_AddCallback(CMOCK_HAL_InitTick_CALLBACK Callback);
void HAL_InitTick_Stub(CMOCK_HAL_InitTick_CALLBACK Callback);



void HAL_IncTick_CMockIgnore(void);

void HAL_IncTick_CMockStopIgnore(void);


void HAL_IncTick_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_IncTick_CALLBACK)(int cmock_num_calls);
void HAL_IncTick_AddCallback(CMOCK_HAL_IncTick_CALLBACK Callback);
void HAL_IncTick_Stub(CMOCK_HAL_IncTick_CALLBACK Callback);



void HAL_Delay_CMockIgnore(void);

void HAL_Delay_CMockStopIgnore(void);


void HAL_Delay_CMockExpect(UNITY_UINT cmock_line, uint32_t Delay);
typedef void (* CMOCK_HAL_Delay_CALLBACK)(uint32_t Delay, int cmock_num_calls);
void HAL_Delay_AddCallback(CMOCK_HAL_Delay_CALLBACK Callback);
void HAL_Delay_Stub(CMOCK_HAL_Delay_CALLBACK Callback);



void HAL_GetTick_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetTick_CMockStopIgnore(void);


void HAL_GetTick_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetTick_CALLBACK)(int cmock_num_calls);
void HAL_GetTick_AddCallback(CMOCK_HAL_GetTick_CALLBACK Callback);
void HAL_GetTick_Stub(CMOCK_HAL_GetTick_CALLBACK Callback);



void HAL_GetTickPrio_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetTickPrio_CMockStopIgnore(void);


void HAL_GetTickPrio_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetTickPrio_CALLBACK)(int cmock_num_calls);
void HAL_GetTickPrio_AddCallback(CMOCK_HAL_GetTickPrio_CALLBACK Callback);
void HAL_GetTickPrio_Stub(CMOCK_HAL_GetTickPrio_CALLBACK Callback);



void HAL_SetTickFreq_CMockIgnoreAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);

void HAL_SetTickFreq_CMockStopIgnore(void);


void HAL_SetTickFreq_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t Freq, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_SetTickFreq_CALLBACK)(uint32_t Freq, int cmock_num_calls);
void HAL_SetTickFreq_AddCallback(CMOCK_HAL_SetTickFreq_CALLBACK Callback);
void HAL_SetTickFreq_Stub(CMOCK_HAL_SetTickFreq_CALLBACK Callback);



void HAL_GetTickFreq_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetTickFreq_CMockStopIgnore(void);


void HAL_GetTickFreq_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetTickFreq_CALLBACK)(int cmock_num_calls);
void HAL_GetTickFreq_AddCallback(CMOCK_HAL_GetTickFreq_CALLBACK Callback);
void HAL_GetTickFreq_Stub(CMOCK_HAL_GetTickFreq_CALLBACK Callback);



void HAL_SuspendTick_CMockIgnore(void);

void HAL_SuspendTick_CMockStopIgnore(void);


void HAL_SuspendTick_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SuspendTick_CALLBACK)(int cmock_num_calls);
void HAL_SuspendTick_AddCallback(CMOCK_HAL_SuspendTick_CALLBACK Callback);
void HAL_SuspendTick_Stub(CMOCK_HAL_SuspendTick_CALLBACK Callback);



void HAL_ResumeTick_CMockIgnore(void);

void HAL_ResumeTick_CMockStopIgnore(void);


void HAL_ResumeTick_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_ResumeTick_CALLBACK)(int cmock_num_calls);
void HAL_ResumeTick_AddCallback(CMOCK_HAL_ResumeTick_CALLBACK Callback);
void HAL_ResumeTick_Stub(CMOCK_HAL_ResumeTick_CALLBACK Callback);



void HAL_GetHalVersion_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetHalVersion_CMockStopIgnore(void);


void HAL_GetHalVersion_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetHalVersion_CALLBACK)(int cmock_num_calls);
void HAL_GetHalVersion_AddCallback(CMOCK_HAL_GetHalVersion_CALLBACK Callback);
void HAL_GetHalVersion_Stub(CMOCK_HAL_GetHalVersion_CALLBACK Callback);



void HAL_GetREVID_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetREVID_CMockStopIgnore(void);


void HAL_GetREVID_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetREVID_CALLBACK)(int cmock_num_calls);
void HAL_GetREVID_AddCallback(CMOCK_HAL_GetREVID_CALLBACK Callback);
void HAL_GetREVID_Stub(CMOCK_HAL_GetREVID_CALLBACK Callback);



void HAL_GetDEVID_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetDEVID_CMockStopIgnore(void);


void HAL_GetDEVID_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetDEVID_CALLBACK)(int cmock_num_calls);
void HAL_GetDEVID_AddCallback(CMOCK_HAL_GetDEVID_CALLBACK Callback);
void HAL_GetDEVID_Stub(CMOCK_HAL_GetDEVID_CALLBACK Callback);



void HAL_GetUIDw0_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetUIDw0_CMockStopIgnore(void);


void HAL_GetUIDw0_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw0_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw0_AddCallback(CMOCK_HAL_GetUIDw0_CALLBACK Callback);
void HAL_GetUIDw0_Stub(CMOCK_HAL_GetUIDw0_CALLBACK Callback);



void HAL_GetUIDw1_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetUIDw1_CMockStopIgnore(void);


void HAL_GetUIDw1_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw1_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw1_AddCallback(CMOCK_HAL_GetUIDw1_CALLBACK Callback);
void HAL_GetUIDw1_Stub(CMOCK_HAL_GetUIDw1_CALLBACK Callback);



void HAL_GetUIDw2_CMockIgnoreAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);

void HAL_GetUIDw2_CMockStopIgnore(void);


void HAL_GetUIDw2_CMockExpectAndReturn(UNITY_UINT cmock_line, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_GetUIDw2_CALLBACK)(int cmock_num_calls);
void HAL_GetUIDw2_AddCallback(CMOCK_HAL_GetUIDw2_CALLBACK Callback);
void HAL_GetUIDw2_Stub(CMOCK_HAL_GetUIDw2_CALLBACK Callback);



void HAL_DBGMCU_EnableDBGSleepMode_CMockIgnore(void);

void HAL_DBGMCU_EnableDBGSleepMode_CMockStopIgnore(void);


void HAL_DBGMCU_EnableDBGSleepMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGSleepMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGSleepMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGSleepMode_CALLBACK Callback);



void HAL_DBGMCU_DisableDBGSleepMode_CMockIgnore(void);

void HAL_DBGMCU_DisableDBGSleepMode_CMockStopIgnore(void);


void HAL_DBGMCU_DisableDBGSleepMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGSleepMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGSleepMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGSleepMode_CALLBACK Callback);



void HAL_DBGMCU_EnableDBGStopMode_CMockIgnore(void);

void HAL_DBGMCU_EnableDBGStopMode_CMockStopIgnore(void);


void HAL_DBGMCU_EnableDBGStopMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGStopMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGStopMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGStopMode_CALLBACK Callback);



void HAL_DBGMCU_DisableDBGStopMode_CMockIgnore(void);

void HAL_DBGMCU_DisableDBGStopMode_CMockStopIgnore(void);


void HAL_DBGMCU_DisableDBGStopMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGStopMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGStopMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGStopMode_CALLBACK Callback);



void HAL_DBGMCU_EnableDBGStandbyMode_CMockIgnore(void);

void HAL_DBGMCU_EnableDBGStandbyMode_CMockStopIgnore(void);


void HAL_DBGMCU_EnableDBGStandbyMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_EnableDBGStandbyMode_AddCallback(CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK Callback);
void HAL_DBGMCU_EnableDBGStandbyMode_Stub(CMOCK_HAL_DBGMCU_EnableDBGStandbyMode_CALLBACK Callback);



void HAL_DBGMCU_DisableDBGStandbyMode_CMockIgnore(void);

void HAL_DBGMCU_DisableDBGStandbyMode_CMockStopIgnore(void);


void HAL_DBGMCU_DisableDBGStandbyMode_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK)(int cmock_num_calls);
void HAL_DBGMCU_DisableDBGStandbyMode_AddCallback(CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK Callback);
void HAL_DBGMCU_DisableDBGStandbyMode_Stub(CMOCK_HAL_DBGMCU_DisableDBGStandbyMode_CALLBACK Callback);



void HAL_SYSCFG_CCMSRAMErase_CMockIgnore(void);

void HAL_SYSCFG_CCMSRAMErase_CMockStopIgnore(void);


void HAL_SYSCFG_CCMSRAMErase_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_CCMSRAMErase_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_CCMSRAMErase_AddCallback(CMOCK_HAL_SYSCFG_CCMSRAMErase_CALLBACK Callback);
void HAL_SYSCFG_CCMSRAMErase_Stub(CMOCK_HAL_SYSCFG_CCMSRAMErase_CALLBACK Callback);



void HAL_SYSCFG_EnableMemorySwappingBank_CMockIgnore(void);

void HAL_SYSCFG_EnableMemorySwappingBank_CMockStopIgnore(void);


void HAL_SYSCFG_EnableMemorySwappingBank_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_EnableMemorySwappingBank_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_EnableMemorySwappingBank_AddCallback(CMOCK_HAL_SYSCFG_EnableMemorySwappingBank_CALLBACK Callback);
void HAL_SYSCFG_EnableMemorySwappingBank_Stub(CMOCK_HAL_SYSCFG_EnableMemorySwappingBank_CALLBACK Callback);



void HAL_SYSCFG_DisableMemorySwappingBank_CMockIgnore(void);

void HAL_SYSCFG_DisableMemorySwappingBank_CMockStopIgnore(void);


void HAL_SYSCFG_DisableMemorySwappingBank_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_DisableMemorySwappingBank_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_DisableMemorySwappingBank_AddCallback(CMOCK_HAL_SYSCFG_DisableMemorySwappingBank_CALLBACK Callback);
void HAL_SYSCFG_DisableMemorySwappingBank_Stub(CMOCK_HAL_SYSCFG_DisableMemorySwappingBank_CALLBACK Callback);



void HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CMockIgnore(void);

void HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CMockStopIgnore(void);


void HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CMockExpect(UNITY_UINT cmock_line, uint32_t VoltageScaling);
typedef void (* CMOCK_HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CALLBACK)(uint32_t VoltageScaling, int cmock_num_calls);
void HAL_SYSCFG_VREFBUF_VoltageScalingConfig_AddCallback(CMOCK_HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CALLBACK Callback);
void HAL_SYSCFG_VREFBUF_VoltageScalingConfig_Stub(CMOCK_HAL_SYSCFG_VREFBUF_VoltageScalingConfig_CALLBACK Callback);



void HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CMockIgnore(void);

void HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CMockStopIgnore(void);


void HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CMockExpect(UNITY_UINT cmock_line, uint32_t Mode);
typedef void (* CMOCK_HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CALLBACK)(uint32_t Mode, int cmock_num_calls);
void HAL_SYSCFG_VREFBUF_HighImpedanceConfig_AddCallback(CMOCK_HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CALLBACK Callback);
void HAL_SYSCFG_VREFBUF_HighImpedanceConfig_Stub(CMOCK_HAL_SYSCFG_VREFBUF_HighImpedanceConfig_CALLBACK Callback);



void HAL_SYSCFG_VREFBUF_TrimmingConfig_CMockIgnore(void);

void HAL_SYSCFG_VREFBUF_TrimmingConfig_CMockStopIgnore(void);


void HAL_SYSCFG_VREFBUF_TrimmingConfig_CMockExpect(UNITY_UINT cmock_line, uint32_t TrimmingValue);
typedef void (* CMOCK_HAL_SYSCFG_VREFBUF_TrimmingConfig_CALLBACK)(uint32_t TrimmingValue, int cmock_num_calls);
void HAL_SYSCFG_VREFBUF_TrimmingConfig_AddCallback(CMOCK_HAL_SYSCFG_VREFBUF_TrimmingConfig_CALLBACK Callback);
void HAL_SYSCFG_VREFBUF_TrimmingConfig_Stub(CMOCK_HAL_SYSCFG_VREFBUF_TrimmingConfig_CALLBACK Callback);



void HAL_SYSCFG_EnableVREFBUF_CMockIgnoreAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);

void HAL_SYSCFG_EnableVREFBUF_CMockStopIgnore(void);


void HAL_SYSCFG_EnableVREFBUF_CMockExpectAndReturn(UNITY_UINT cmock_line, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_SYSCFG_EnableVREFBUF_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_EnableVREFBUF_AddCallback(CMOCK_HAL_SYSCFG_EnableVREFBUF_CALLBACK Callback);
void HAL_SYSCFG_EnableVREFBUF_Stub(CMOCK_HAL_SYSCFG_EnableVREFBUF_CALLBACK Callback);



void HAL_SYSCFG_DisableVREFBUF_CMockIgnore(void);

void HAL_SYSCFG_DisableVREFBUF_CMockStopIgnore(void);


void HAL_SYSCFG_DisableVREFBUF_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_DisableVREFBUF_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_DisableVREFBUF_AddCallback(CMOCK_HAL_SYSCFG_DisableVREFBUF_CALLBACK Callback);
void HAL_SYSCFG_DisableVREFBUF_Stub(CMOCK_HAL_SYSCFG_DisableVREFBUF_CALLBACK Callback);



void HAL_SYSCFG_EnableIOSwitchBooster_CMockIgnore(void);

void HAL_SYSCFG_EnableIOSwitchBooster_CMockStopIgnore(void);


void HAL_SYSCFG_EnableIOSwitchBooster_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_EnableIOSwitchBooster_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_EnableIOSwitchBooster_AddCallback(CMOCK_HAL_SYSCFG_EnableIOSwitchBooster_CALLBACK Callback);
void HAL_SYSCFG_EnableIOSwitchBooster_Stub(CMOCK_HAL_SYSCFG_EnableIOSwitchBooster_CALLBACK Callback);



void HAL_SYSCFG_DisableIOSwitchBooster_CMockIgnore(void);

void HAL_SYSCFG_DisableIOSwitchBooster_CMockStopIgnore(void);


void HAL_SYSCFG_DisableIOSwitchBooster_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_DisableIOSwitchBooster_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_DisableIOSwitchBooster_AddCallback(CMOCK_HAL_SYSCFG_DisableIOSwitchBooster_CALLBACK Callback);
void HAL_SYSCFG_DisableIOSwitchBooster_Stub(CMOCK_HAL_SYSCFG_DisableIOSwitchBooster_CALLBACK Callback);



void HAL_SYSCFG_EnableIOSwitchVDD_CMockIgnore(void);

void HAL_SYSCFG_EnableIOSwitchVDD_CMockStopIgnore(void);


void HAL_SYSCFG_EnableIOSwitchVDD_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_EnableIOSwitchVDD_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_EnableIOSwitchVDD_AddCallback(CMOCK_HAL_SYSCFG_EnableIOSwitchVDD_CALLBACK Callback);
void HAL_SYSCFG_EnableIOSwitchVDD_Stub(CMOCK_HAL_SYSCFG_EnableIOSwitchVDD_CALLBACK Callback);



void HAL_SYSCFG_DisableIOSwitchVDD_CMockIgnore(void);

void HAL_SYSCFG_DisableIOSwitchVDD_CMockStopIgnore(void);


void HAL_SYSCFG_DisableIOSwitchVDD_CMockExpect(UNITY_UINT cmock_line);
typedef void (* CMOCK_HAL_SYSCFG_DisableIOSwitchVDD_CALLBACK)(int cmock_num_calls);
void HAL_SYSCFG_DisableIOSwitchVDD_AddCallback(CMOCK_HAL_SYSCFG_DisableIOSwitchVDD_CALLBACK Callback);
void HAL_SYSCFG_DisableIOSwitchVDD_Stub(CMOCK_HAL_SYSCFG_DisableIOSwitchVDD_CALLBACK Callback);



void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CMockIgnore(void);

void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CMockStopIgnore(void);


void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CMockExpect(UNITY_UINT cmock_line, uint32_t Page);
typedef void (* CMOCK_HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CALLBACK)(uint32_t Page, int cmock_num_calls);
void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_AddCallback(CMOCK_HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CALLBACK Callback);
void HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_Stub(CMOCK_HAL_SYSCFG_CCMSRAM_WriteProtectionEnable_CALLBACK Callback);
# 494 "build/test/mocks/test_precharge/mock_stm32g4xx_hal.h"
#pragma GCC diagnostic pop
# 8 "test/test_precharge.c" 2


void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState) {

    printf("HAL_GPIO_WritePin called: GPIOx=%p, Pin=%u, State=%s\n",
           (void*)GPIOx,
           GPIO_Pin,
           (PinState == GPIO_PIN_SET) ? "SET" : "RESET");
}


extern uint8_t prechargeDone;

void setUp(void) { }
void tearDown(void) { }

void test_prechargeInit_setsPrechargeDoneToZero(void) {
    prechargeInit();
    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT8 )((0)), (UNITY_INT)(UNITY_UINT8 )((prechargeDone)), (
# 26 "test/test_precharge.c" 3 4
   ((void *)0)
# 26 "test/test_precharge.c"
   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_UINT8);
}
