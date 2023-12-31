/* Automatically generated by wasm2c */
#ifndef TEST_H_GENERATED_
#define TEST_H_GENERATED_

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


/* import: 'wbg' '__wbindgen_string_get' */
extern void (*Z_wbgZ___wbindgen_string_get)(u32, u32);
/* import: 'wbg' '__wbindgen_object_drop_ref' */
extern void (*Z_wbgZ___wbindgen_object_drop_ref)(u32);
/* import: 'wbg' '__wbg_getTime_ed6ee333b702f8fc' */
extern f64 (*Z_wbgZ___wbg_getTime_ed6ee333b702f8fc)(u32);
/* import: 'wbg' '__wbg_new0_ad75dd38f92424e2' */
extern u32 (*Z_wbgZ___wbg_new0_ad75dd38f92424e2)(void);
/* import: 'wbg' '__wbindgen_throw' */
extern void (*Z_wbgZ___wbindgen_throw)(u32, u32);
void Z_yuyuko_init(void);
void Z_yuyuko_free(void);

/* export: 'memory' */
extern wasm_rt_memory_t (*Z_yuyukoZ_memory);
/* export: 'o' */
extern u32 (*Z_yuyukoZ_o)(u32);
/* export: 'f' */
extern void (*Z_yuyukoZ_f)(u32, u32, u32);
/* export: '__wbindgen_malloc' */
extern u32 (*Z_yuyukoZ___wbindgen_malloc)(u32, u32);
/* export: '__wbindgen_realloc' */
extern u32 (*Z_yuyukoZ___wbindgen_realloc)(u32, u32, u32, u32);
/* export: '__wbindgen_add_to_stack_pointer' */
extern u32 (*Z_yuyukoZ___wbindgen_add_to_stack_pointer)(u32);
/* export: '__wbindgen_free' */
extern void (*Z_yuyukoZ___wbindgen_free)(u32, u32, u32);

#ifdef __cplusplus
}
#endif

#endif  /* TEST_H_GENERATED_ */
