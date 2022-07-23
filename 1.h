/* Automatically generated by wasm2c */
#ifndef 1_H_GENERATED_
#define 1_H_GENERATED_

#include <stdint.h>

#include "wasm-rt.h"

/* TODO(binji): only use stdint.h types in header */
#ifndef WASM_RT_CORE_TYPES_DEFINED
#define WASM_RT_CORE_TYPES_DEFINED
typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef uint64_t u64;
typedef int64_t s64;
typedef float f32;
typedef double f64;
#endif

#ifdef __cplusplus
extern "C" {
#endif


/* import: 'imports' 'mem' */
extern wasm_rt_memory_t (*Z_importsZ_mem);
void Z_1_init(void);
void Z_1_free(void);

/* export: 'read_i32' */
extern u32 (*Z_1Z_read_i32)(u32);
/* export: 'write_i32' */
extern void (*Z_1Z_write_i32)(u32, u32);
/* export: 'read_i16' */
extern u32 (*Z_1Z_read_i16)(u32);
/* export: 'write_i16' */
extern void (*Z_1Z_write_i16)(u32, u32);
/* export: 'read_i8' */
extern u32 (*Z_1Z_read_i8)(u32);
/* export: 'write_i8' */
extern void (*Z_1Z_write_i8)(u32, u32);

#ifdef __cplusplus
}
#endif

#endif  /* 1_H_GENERATED_ */
