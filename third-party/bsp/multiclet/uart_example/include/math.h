#ifndef STDMATH
#define	STDMATH
/* Константы (из файла math.h glibc, http://www.gnu.org/software/glibc/) */
#define M_E		2.7182818284590452354	/* e */
#define M_LOG2E		1.4426950408889634074	/* log_2 e */
#define M_LOG10E	0.43429448190325182765	/* log_10 e */
#define M_LN2		0.69314718055994530942	/* log_e 2 */
#define M_LN10		2.30258509299404568402	/* log_e 10 */
#define M_PI		3.14159265358979323846	/* pi */
#define M_PI_2		1.57079632679489661923	/* pi/2 */
#define M_PI_4		0.78539816339744830962	/* pi/4 */
#define M_1_PI		0.31830988618379067154	/* 1/pi */
#define M_2_PI		0.63661977236758134308	/* 2/pi */
#define M_2_SQRTPI	1.12837916709551257390	/* 2/sqrt(pi) */
#define M_SQRT2		1.41421356237309504880	/* sqrt(2) */
#define M_SQRT1_2	0.70710678118654752440	/* 1/sqrt(2) */

/* Функция вычисления синуса */
float sinf(float angle);

/* Функция вычисления косинуса */
float cosf(float angle);

/* Функция вычисления тангенса */
float tanf(float angle);

/* Функция вычисления арктангенса */
float atanf(float arg);

/* Функция вычисления экспоненты */
float expf(float x);

/* Функция вычисления натурального логарифма */
float logf(float x);

/* Функция вычисления десятичного логарифма */
float log10f(float x);

/* Функция извлечения квадратного корня */
float sqrtf(float x);

/* Функция возведения x в степень y */
float powf(float x, float y);

/* Функция разбиения числа с плавающей точкой x на мантиссу и показатель степени */
float frexpf(float x, int *exp);

/* Функция умножения числа с плавающей точкой x на целую степень двух */
float ldexp(float x, int exp);

/* Функция извлечения целой и дробной частей (с учетом знака) из числа с плавающей точкой x */
float modff(float x, float *iptr);

/* Функция умножения матриц A и B размером NxN; результат сохраняется в R */
int mxmulf(unsigned N, float *R, float *A, float *B);

#define floor(x) (((float)(int)(x))<(x))?((float)(int)(x)):((float)((int)(x)-1))
#define acos(x) (M_PI_2-atanf((x)/sqrtf(1-(x)*(x))))
#define cos(x) cosf(x)
#define sqrt(x) sqrtf(x)
#define fabs(x) (((x)>0)?(x):(0-(x)))
#define abs(...) fabs(__VA_ARGS__)
#define labs(...) fabs(__VA_ARGS__)
#define frexp(...) frexpf(__VA_ARGS__) /*Should be double*/
#define log10(...) log10f(__VA_ARGS__)
#define pow(...) powf(__VA_ARGS__)

#endif
