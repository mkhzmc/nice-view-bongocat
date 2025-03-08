#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_KAYOKO_C
#define LV_ATTRIBUTE_IMG_KAYOKO_C
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_KAYOKO_C uint8_t kayoko_c_map[] = {
  0xfd, 0xfd, 0xfd, 0xff, 	/*Color of index 0*/
  0x09, 0x09, 0x09, 0xff, 	/*Color of index 1*/

  0x77, 0x60, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xc9, 0x00, 0x00, 0x00, 0x03, 0x60, 0x3b, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x9c, 0x4c, 0x6d, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x19, 0x9c, 0xe5, 0x95, 0xd9, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x05, 0x3b, 0xe3, 0xb3, 0x3b, 0x40, 0x06, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x4c, 0xb4, 0xcb, 0x2a, 0x60, 0x02, 0x60, 0x01, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xb1, 0x20, 0x00, 0x17, 0x00, 0x01, 0x98, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x58, 0x00, 0x1c, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x27, 0x30, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0xb4, 0xe4, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x1d, 0x81, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x03, 0x30, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x00, 0x40, 0x00, 0x00, 0x08, 0x00, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x01, 0x80, 0x00, 0x00, 0x04, 0x00, 0x08, 0x12, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x04, 0x00, 0x08, 0x0e, 0xd9, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x82, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x03, 0x4e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x01, 0x80, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0xb3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x37, 0x40, 0x42, 0x00, 0x00, 0x00, 0x0e, 0xc0, 0x00, 0x02, 0x9c, 0xb0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd4, 0xc0, 0xc1, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x00, 0x01, 0x66, 0xe8, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x56, 0xa0, 0x01, 0x00, 0x01, 0xf8, 0x00, 0x98, 0x00, 0x01, 0x39, 0xf9, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xa0, 0x22, 0x00, 0x01, 0x7f, 0x30, 0xa4, 0x00, 0x00, 0xe7, 0x37, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x21, 0x00, 0x01, 0xef, 0x28, 0x1d, 0xc0, 0x00, 0xcc, 0xe6, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x23, 0x00, 0x01, 0xbb, 0x0d, 0x93, 0x38, 0x00, 0x1b, 0x79, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x13, 0x46, 0xab, 0x00, 0x73, 0x5b, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x16, 0x6c, 0xe6, 0x60, 0x4c, 0xf6, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x13, 0x00, 0x00, 0x00, 0x0d, 0x9b, 0x1c, 0xcc, 0x1b, 0x3c, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x09, 0xb3, 0x73, 0x9a, 0x33, 0x6d, 0xb1, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1c, 0x11, 0x00, 0x00, 0x00, 0x06, 0x6c, 0xce, 0x72, 0x0c, 0xdb, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x99, 0x96, 0x11, 0x9c, 0xe0, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x50, 0x02, 0x00, 0x40, 0x00, 0x00, 0xb3, 0x36, 0x70, 0x00, 0x3b, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x01, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x73, 0xc8, 0x10, 0x6b, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x80, 0x40, 0x00, 0x00, 0x0e, 0xcc, 0x98, 0x04, 0x04, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc0, 0x00, 0x00, 0x40, 0x00, 0x00, 0x01, 0xb3, 0xb6, 0x04, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x03, 0x36, 0x65, 0x0c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x00, 0x01, 0x80, 0x40, 0x00, 0x00, 0x00, 0xcd, 0x9c, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xb3, 0x8c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x06, 0x66, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x84, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xa4, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x64, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x83, 0x40, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x86, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc0, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x04, 0x01, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x28, 0x50, 0x20, 0x40, 0x00, 0xff, 0x00, 0x00, 0x08, 0x01, 0x04, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x14, 0x20, 0x40, 0x00, 0xbf, 0x00, 0x00, 0x30, 0x03, 0x02, 0x00, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x04, 0x04, 0x20, 0x40, 0x00, 0xfb, 0x00, 0x00, 0x58, 0x02, 0x02, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x04, 0x20, 0x40, 0x00, 0x2f, 0x00, 0x01, 0xc0, 0x06, 0x0c, 0x6d, 0xa0, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x01, 0x10, 0x40, 0x00, 0x00, 0x00, 0x16, 0x30, 0x0c, 0x0d, 0x2c, 0xe8, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x80, 0x10, 0x00, 0x00, 0x00, 0x01, 0xce, 0xe0, 0x14, 0x13, 0xaf, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x20, 0x20, 0x00, 0x00, 0x03, 0x38, 0x98, 0x34, 0x16, 0x6c, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x30, 0x60, 0x30, 0x60, 0x00, 0x00, 0x0c, 0xa6, 0x70, 0xc8, 0x2c, 0xdb, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd9, 0x10, 0x40, 0x40, 0x00, 0x00, 0x16, 0x8c, 0x0d, 0x30, 0x0d, 0x9b, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x67, 0x20, 0x20, 0x20, 0x00, 0x00, 0x33, 0x59, 0x2d, 0x90, 0x73, 0x6c, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3c, 0xeb, 0x60, 0x20, 0x00, 0x00, 0x0d, 0x73, 0xf2, 0xc0, 0x0e, 0x6d, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x5c, 0xd6, 0xe4, 0x00, 0x00, 0x0c, 0x8e, 0x4e, 0x00, 0x19, 0x9b, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x53, 0x99, 0x9c, 0x00, 0x04, 0x03, 0xb3, 0x60, 0x00, 0x36, 0xdb, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xa4, 0xc6, 0x6b, 0x68, 0x10, 0x02, 0x00, 0x60, 0x00, 0x01, 0x66, 0x60, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xbf, 0x00, 0x22, 0x60, 0x08, 0x00, 0x01, 0xc8, 0x00, 0x02, 0xd9, 0x80, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0xc0, 0x00, 0x00, 0x0e, 0xd4, 0x00, 0x1d, 0x50, 0x02, 0xcd, 0x80, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xcc, 0x00, 0x35, 0xd0, 0x0d, 0x36, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x30, 0x00, 0x06, 0x3b, 0xac, 0x13, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xdd, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd3, 0x33, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0xd3, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0xed, 0x59, 0x6b, 0x6d, 0xa0, 0x00, 0x03, 0x1e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xac, 0xcf, 0x9b, 0x66, 0x6d, 0x72, 0x6c, 0xe5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x23, 0xb2, 0xb4, 0x9b, 0x5d, 0x8d, 0x9d, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t kayoko_c = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = kayoko_c_map,
};
