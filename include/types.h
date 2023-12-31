#pragma once

#include "env.h"

#include <stdint.h>
#include <stdlib.h>
#include <uchar.h>

#define ND_FALSE 0
#define ND_TRUE  1

typedef char str[];

typedef uint8_t  c8;
typedef uint16_t c16;
typedef uint32_t c32;

typedef c8  str8[];
typedef c16 str16[];
typedef c32 str32[];

typedef uint8_t  byte;
typedef uint8_t  b8;
typedef uint16_t b16;
typedef uint32_t b32;
typedef uint64_t b64;

typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float  f32;
typedef double f64;

#if defined(ND_ARCH_BIT_X32)
typedef i32 isize;
typedef u32 usize;
#elif defined(ND_ARCH_BIT_X64)
typedef i64 isize;
typedef u64 usize;
#else
    #error ND_FILE_MSG("Unable to typedef i64/u64: unknown architecture bitness. Supported: ND_ARCH_BIT_X32, ND_ARCH_BIT_X64")
#endif

#define ND_SIZEOF(x)   (usize)sizeof(x)
#define ND_COUNTOF(x)  (sizeof(x) / sizeof(*x))
#define ND_LENGTHOF(s) (countof(s) - 1)
#define ND_ALIGNOF(x)  (usize) _Alignof(x)
#define ND_ALIGNAS(x)  _Alignas(x)
