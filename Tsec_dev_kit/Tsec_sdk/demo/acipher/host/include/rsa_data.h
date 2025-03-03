#ifndef __RSA__DATA_H__
#define __RSA__DATA_H__
#include <stdint.h>


static const uint8_t rsa_data_modulus_256[] = {
	0xbe, 0xbb, 0x97, 0xea, 0xd6, 0x92, 0x1f, 0x8d, 0x65, 0xc1, 0xfd, 0x8f, 0xd6, 0xae, 0x83, 0x1a, 
    0x3d, 0xf6, 0x75, 0x4b, 0xf2, 0x66, 0x2a, 0xed, 0xb8, 0xba, 0x6a, 0x3d, 0x47, 0xec, 0xd4, 0x75, 
    0x8a, 0x9d, 0x99, 0x95, 0x3c, 0x00, 0xae, 0xdb, 0x1b, 0x5a, 0x04, 0x72, 0x70, 0x3e, 0x9d, 0xc4, 
    0x37, 0x60, 0x95, 0x70, 0x3c, 0xec, 0x5b, 0x9c, 0xe9, 0xb7, 0x0f, 0xe2, 0xbf, 0x4b, 0x22, 0x30, 
    0xa2, 0x31, 0x7b, 0xc4, 0x53, 0x30, 0x47, 0xb5, 0x71, 0x70, 0x55, 0x93, 0xa9, 0xcd, 0x43, 0x93, 
    0x75, 0xfb, 0x2e, 0x38, 0x63, 0x4a, 0xdf, 0x22, 0xb3, 0x2c, 0x0c, 0xd6, 0x1b, 0x7e, 0xb4, 0x3e, 
    0x7e, 0x80, 0xb3, 0x59, 0xd9, 0x46, 0xce, 0xdc, 0x8a, 0xdd, 0xee, 0x0c, 0x00, 0x1b, 0x2d, 0x1f, 
    0x9e, 0xfe, 0xc3, 0x12, 0xf8, 0xfa, 0xf5, 0xd1, 0x17, 0x16, 0x37, 0x97, 0x70, 0xdc, 0x8b, 0x6c, 
    0x32, 0xa8, 0xb4, 0xd0, 0x22, 0x8f, 0xc2, 0x74, 0xa8, 0xc2, 0x6b, 0xfe, 0x6a, 0xd9, 0x52, 0x96, 
    0xc0, 0x32, 0x56, 0x22, 0x2c, 0x6f, 0x54, 0x28, 0xb8, 0x42, 0x61, 0x38, 0x8d, 0x0e, 0xca, 0x49, 
    0xc2, 0x65, 0x42, 0x81, 0x7d, 0xdc, 0x0b, 0x14, 0x8b, 0x8a, 0x4b, 0xa9, 0x0d, 0x96, 0x78, 0x73, 
    0x82, 0x71, 0x14, 0xc2, 0x24, 0xec, 0x91, 0x83, 0xea, 0x7d, 0xff, 0x90, 0x64, 0x48, 0x6e, 0x20, 
    0x90, 0xee, 0x33, 0x7a, 0x9e, 0x2d, 0xc5, 0x11, 0xac, 0xdf, 0x67, 0x12, 0x05, 0x67, 0x58, 0x1a, 
    0xa1, 0x4d, 0xa6, 0x32, 0x7d, 0xb3, 0x81, 0x0a, 0x51, 0x43, 0xb9, 0x6a, 0xed, 0x57, 0x42, 0xc9, 
    0x4e, 0x20, 0x7c, 0xdc, 0xc8, 0x19, 0x5d, 0xf8, 0x7f, 0xa7, 0x1c, 0x6e, 0x87, 0x18, 0x0e, 0x07, 
    0x5f, 0x47, 0x85, 0x56, 0x3a, 0x8c, 0xde, 0x89, 0x78, 0xd8, 0xd6, 0x69, 0x18, 0x7d, 0xcf, 0x37,
};

static const uint8_t rsa_data_pub_exp_256[] = {
	0x01, 0x00, 0x01,
};

static const uint8_t rsa_data_priv_exp_256[] = {
	0xb9, 0x16, 0x37, 0xf4, 0xf6, 0xe5, 0xf3, 0xe2, 0x75, 0xe5, 0xcb, 0x56, 0x82, 0xe0, 0xf4, 0x6e, 
    0x49, 0xc4, 0xd9, 0xcc, 0xaa, 0x5c, 0x84, 0xba, 0x0d, 0x72, 0x30, 0xd8, 0x68, 0xec, 0xa4, 0xbb, 
    0xaf, 0x99, 0x02, 0x49, 0xf4, 0x61, 0x41, 0x4d, 0x74, 0x7c, 0x65, 0x26, 0x5c, 0x50, 0x17, 0x2f, 
    0x2b, 0x01, 0xf9, 0xe2, 0x61, 0xec, 0x87, 0x76, 0x7c, 0xc2, 0x5d, 0x93, 0x0f, 0x49, 0x2c, 0xd3, 
    0x7f, 0x01, 0x7f, 0xf6, 0x63, 0x37, 0xcd, 0xce, 0x80, 0x57, 0x9f, 0x63, 0xdc, 0xfa, 0x48, 0xe2, 
    0x57, 0x32, 0x39, 0x87, 0x14, 0xab, 0xba, 0x5e, 0xe4, 0xfa, 0x11, 0x36, 0xd0, 0x95, 0xa2, 0xf9, 
    0xa6, 0x2e, 0xe4, 0x5c, 0x83, 0x61, 0x98, 0x2a, 0x22, 0x43, 0xfc, 0xd5, 0xfe, 0x60, 0x60, 0xe8, 
    0x77, 0x95, 0x07, 0xde, 0x68, 0x68, 0xb8, 0x94, 0x7f, 0xcf, 0xda, 0x80, 0x86, 0x50, 0x2e, 0xa6, 
    0x52, 0x8a, 0x6c, 0x3e, 0x69, 0x89, 0xd0, 0x19, 0xe9, 0xe4, 0x3d, 0x1a, 0xf0, 0x29, 0xaa, 0x95, 
    0x11, 0x88, 0x63, 0xd8, 0x53, 0x6f, 0x23, 0xec, 0x61, 0xfd, 0x83, 0x8a, 0x54, 0x2f, 0x09, 0x26, 
    0x73, 0x49, 0x88, 0x59, 0xd1, 0x71, 0x19, 0xb8, 0xeb, 0xd4, 0x33, 0xbb, 0xf5, 0xc4, 0x3e, 0x30, 
    0x2a, 0x22, 0xa5, 0xf7, 0xc9, 0x79, 0x4b, 0x75, 0x50, 0x17, 0x71, 0x15, 0xc8, 0xe7, 0x5b, 0x9e, 
    0x12, 0x65, 0x35, 0x5d, 0x21, 0xbe, 0x38, 0xc2, 0x2a, 0x8d, 0x78, 0xa6, 0x15, 0x55, 0xba, 0x76, 
    0xee, 0xaa, 0x4c, 0xf4, 0x0b, 0xb8, 0x37, 0x8c, 0xed, 0xc0, 0x6c, 0x66, 0x6a, 0x02, 0x3f, 0x40, 
    0x2f, 0xcf, 0x48, 0xe1, 0x09, 0xe2, 0x28, 0x78, 0x54, 0x2a, 0xf9, 0xa8, 0x5e, 0xf9, 0xe5, 0x4c, 
    0xb3, 0x5f, 0xae, 0x5b, 0x07, 0xe7, 0x90, 0xdf, 0xa6, 0x18, 0x64, 0x6f, 0xa7, 0x76, 0xcb, 0x51,
};


static const uint8_t rsa_data_ptx_data[] = {
    0xe8, 0x31, 0x27, 0x42, 0xae, 0x23, 0xc4, 0x56, 0xef, 0x28, 0xa2, 0x31, 0x42, 0xc4, 0x49, 0x08, 
    0x95, 0x83, 0x27, 0x65, 0xda, 0xdc, 0xe0, 0x2a, 0xfe, 0x5b, 0xe5, 0xd3, 0x1b, 0x00, 0x48, 0xfb, 
    0xee, 0xe2, 0xcf, 0x21, 0x8b, 0x17, 0x47, 0xad, 0x4f, 0xd8, 0x1a, 0x2e, 0x17, 0xe1, 0x24, 0xe6, 
    0xaf, 0x17, 0xc3, 0x88, 0x8e, 0x6d, 0x2d, 0x40, 0xc0, 0x08, 0x07, 0xf4, 0x23, 0xa2, 0x33, 0xca, 
    0xd6, 0x2c, 0xe9, 0xea, 0xef, 0xb7, 0x09, 0x85, 0x6c, 0x94, 0xaf, 0x16, 0x6d, 0xba, 0x08, 0xe7, 
    0xa0, 0x69, 0x65, 0xd7, 0xfc, 0x0d, 0x8e, 0x5c, 0xb2, 0x65, 0x59, 0xc4, 0x60, 0xe4, 0x7b, 0xc0, 
    0x88, 0x58, 0x9d, 0x22, 0x42, 0xc9, 0xb3, 0xe6, 0x2d, 0xa4, 0x89, 0x6f, 0xab, 0x19, 0x9e, 0x14, 
    0x4e, 0xc1, 0x36, 0xdb, 0x8d, 0x84, 0xab, 0x84, 0xbc, 0xba, 0x04, 0xca, 0x3b, 0x90, 0xc8, 0xe5,
    0xe8, 0x31, 0x27, 0x42, 0xae, 0x23, 0xc4, 0x56, 0xef, 0x28, 0xa2, 0x31, 0x42, 0xc4, 0x49, 0x08, 
    0x95, 0x83, 0x27, 0x65, 0xda, 0xdc, 0xe0, 0x2a, 0xfe, 0x5b, 0xe5, 0xd3, 0x1b, 0x00, 0x48, 0xfb, 
    0xee, 0xe2, 0xcf, 0x21, 0x8b, 0x17, 0x47, 0xad, 0x4f, 0xd8, 0x1a, 0x2e, 0x17, 0xe1, 0x24, 0xe6, 
    0xaf, 0x17, 0xc3, 0x88, 0x8e, 0x6d, 0x2d, 0x40, 0xc0, 0x08, 0x07, 0xf4, 0x23, 0xa2, 0x33, 0xca, 
    0xd6, 0x2c, 0xe9, 0xea, 0xef, 0xb7, 0x09, 0x85, 0x6c, 0x94, 0xaf, 0x16, 0x6d, 0xba, 0x08, 0xe7, 
    0xa0, 0x69, 0x65, 0xd7, 0xfc, 0x0d, 0x8e, 0x5c, 0xb2, 0x65, 0x59, 0xc4, 0x60, 0xe4, 0x7b, 0xc0, 
    0x88, 0x58, 0x9d, 0x22, 0x42, 0xc9, 0xb3, 0xe6, 0x2d, 0xa4, 0x89, 0x6f, 0xab, 0x19, 0x9e, 0x14, 
    0x4e, 0xc1, 0x36, 0xdb, 0x8d, 0x84, 0xab, 0x84, 0xbc, 0xba, 0x04, 0xca, 0x3b, 0x90, 0xc8, 0xe5,
    0xe8, 0x31, 0x27, 0x42, 0xae, 0x23, 0xc4, 0x56, 0xef, 0x28, 0xa2, 0x31, 0x42, 0xc4, 0x49, 0x08, 
    0x95, 0x83, 0x27, 0x65, 0xda, 0xdc, 0xe0, 0x2a, 0xfe, 0x5b, 0xe5, 0xd3, 0x1b, 0x00, 0x48, 0xfb, 
    0xee, 0xe2, 0xcf, 0x21, 0x8b, 0x17, 0x47, 0xad, 0x4f, 0xd8, 0x1a, 0x2e, 0x17, 0xe1, 0x24, 0xe6, 
    0xaf, 0x17, 0xc3, 0x88, 0x8e, 0x6d, 0x2d, 0x40, 0xc0, 0x08, 0x07, 0xf4, 0x23, 0xa2, 0x33, 0xca, 
    0xd6, 0x2c, 0xe9, 0xea, 0xef, 0xb7, 0x09, 0x85, 0x6c, 0x94, 0xaf, 0x16, 0x6d, 0xba, 0x08, 0xe7, 
    0xa0, 0x69, 0x65, 0xd7, 0xfc, 0x0d, 0x8e, 0x5c, 0xb2, 0x65, 0x59, 0xc4, 0x60, 0xe4, 0x7b, 0xc0, 
    0x88, 0x58, 0x9d, 0x22, 0x42, 0xc9, 0xb3, 0xe6, 0x2d, 0xa4, 0x89, 0x6f, 0xab, 0x19, 0x9e, 0x14, 
    0x4e, 0xc1, 0x36, 0xdb, 0x8d, 0x84, 0xab, 0x84, 0xbc, 0xba, 0x04, 0xca, 0x3b, 0x90, 0xc8, 0xe5,
    0xe8, 0x31, 0x27, 0x42, 0xae, 0x23, 0xc4, 0x56, 0xef, 0x28, 0xa2, 0x31, 0x42, 0xc4, 0x49, 0x08, 
    0x95, 0x83, 0x27, 0x65, 0xda, 0xdc, 0xe0, 0x2a, 0xfe, 0x5b, 0xe5, 0xd3, 0x1b, 0x00, 0x48, 0xfb, 
    0xee, 0xe2, 0xcf, 0x21, 0x8b, 0x17, 0x47, 0xad, 0x4f, 0xd8, 0x1a, 0x2e, 0x17, 0xe1, 0x24, 0xe6, 
    0xaf, 0x17, 0xc3, 0x88, 0x8e, 0x6d, 0x2d, 0x40, 0xc0, 0x08, 0x07, 0xf4, 0x23, 0xa2, 0x33, 0xca, 
    0xd6, 0x2c, 0xe9, 0xea, 0xef, 0xb7, 0x09, 0x85, 0x6c, 0x94, 0xaf, 0x16, 0x6d, 0xba, 0x08, 0xe7, 
    0xa0, 0x69, 0x65, 0xd7, 0xfc, 0x0d, 0x8e, 0x5c, 0xb2, 0x65, 0x59, 0xc4, 0x60, 0xe4, 0x7b, 0xc0, 
    0x88, 0x58, 0x9d, 0x22, 0x42, 0xc9, 0xb3, 0xe6, 0x2d, 0xa4, 0x89, 0x6f, 0xab, 0x19, 0x9e, 0x14, 
    0x4e, 0xc1, 0x36, 0xdb, 0x8d, 0x84, 0xab, 0x84, 0xbc, 0xba, 0x04, 0xca, 0x3b, 0x90, 0xc8, 0xe5,
};



static const uint8_t rsaes_data_ctx_NOPAD_data255_key256[] = {
    0xbc, 0x84, 0x48, 0x04, 0x62, 0x2b, 0x3f, 0xed, 0xc0, 0x50, 0x55, 0x99, 0x48, 0x9f, 0x69, 0x26, 
    0x3d, 0xfc, 0x1d, 0xa4, 0x61, 0x8e, 0xd8, 0xf6, 0x37, 0x72, 0xb4, 0xf9, 0x0c, 0x6f, 0x8e, 0x7e, 
    0xc0, 0x2e, 0xb7, 0x93, 0x36, 0x04, 0x7d, 0x32, 0x86, 0x7b, 0xd6, 0xc8, 0xea, 0x8e, 0x85, 0x18, 
    0x3a, 0x6d, 0x43, 0xda, 0xcd, 0x08, 0x35, 0x58, 0x2f, 0xa6, 0xfa, 0x67, 0x62, 0x82, 0xc7, 0x98, 
    0x80, 0x56, 0x48, 0xdd, 0x5b, 0x64, 0x77, 0xd0, 0x66, 0x0e, 0xe4, 0x97, 0xd1, 0xa6, 0xed, 0x3b, 
    0x83, 0x39, 0xc0, 0x57, 0xde, 0xce, 0x89, 0xb9, 0x92, 0xc5, 0x92, 0x64, 0x0f, 0x85, 0x53, 0x1c, 
    0xf1, 0xd6, 0xdc, 0xed, 0x09, 0xa7, 0xc3, 0xe6, 0x94, 0x3c, 0x97, 0x4c, 0x0a, 0x25, 0x84, 0xfd, 
    0x1f, 0x8f, 0xfb, 0xc4, 0x23, 0x61, 0xed, 0xfb, 0xf3, 0x46, 0x02, 0x5d, 0x36, 0xb3, 0x12, 0xcb, 
    0xe8, 0xdf, 0x64, 0xc6, 0x4f, 0x3d, 0xdb, 0x9c, 0x95, 0x69, 0x06, 0x06, 0xb5, 0xcc, 0x6e, 0x63, 
    0x8c, 0xa6, 0x2e, 0x0a, 0xde, 0x2c, 0x49, 0xaa, 0x12, 0x99, 0x4e, 0x2b, 0x94, 0xae, 0x88, 0xed, 
    0xdd, 0xae, 0x84, 0xee, 0xca, 0xbf, 0x4a, 0x37, 0xda, 0x78, 0xf1, 0x32, 0x0b, 0xa7, 0x97, 0xa5, 
    0x09, 0x55, 0x49, 0x61, 0x53, 0x0d, 0x56, 0xe3, 0xd9, 0xf6, 0xa9, 0xca, 0x6d, 0x8b, 0x43, 0x41, 
    0x1b, 0xef, 0xc1, 0xda, 0xa4, 0x47, 0x37, 0x08, 0xcf, 0x06, 0x6d, 0x3b, 0x7d, 0x61, 0x61, 0xf0, 
    0xb7, 0xa5, 0x93, 0x3a, 0x0f, 0x83, 0x3e, 0x9b, 0x4d, 0x30, 0xd6, 0x3a, 0xb9, 0xa5, 0xb2, 0x0c, 
    0x97, 0x6a, 0xfb, 0x68, 0xb2, 0xe0, 0x97, 0x5d, 0x51, 0xf4, 0x0a, 0xd9, 0x11, 0x0e, 0xc1, 0xe1, 
    0x7b, 0x50, 0x23, 0x8b, 0x38, 0x61, 0x03, 0x4f, 0x4d, 0x70, 0xa0, 0xf3, 0x4f, 0xb3, 0xea, 0xc3,
};



#endif /* __RSA__DATA_H__ */