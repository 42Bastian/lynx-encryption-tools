#ifndef _LOADERS_H_
#define _LOADERS_H_

#define LOADER_LENGTH (410)
#define FULL_LOADER_LENGTH (506)

unsigned char wookies_micro_loader_encrypted_bin[52] = {
    0xff, 0x88, 0x6c, 0x24, 0xd0, 0xf5, 0x9a, 0x62, 
    0x8c, 0xa1, 0x08, 0x7e, 0xda, 0x87, 0x3f, 0x1b, 
    0xeb, 0x48, 0x50, 0xba, 0x0d, 0xc9, 0xcb, 0x7b,
    0x3e, 0x10, 0x7c, 0xfd, 0x7e, 0xde, 0x8c, 0x06, 
    0x3a, 0x12, 0x35, 0x1a, 0x8c, 0x74, 0x07, 0xdb, 
    0xd1, 0x60, 0x7e, 0xe5, 0x88, 0x90, 0x60, 0x5b,
    0x2e, 0x4b, 0xa2, 0x25
};

unsigned char wookies_micro_loader_plaintext_bin[50] = {
    0x9c, 0xf9, 0xff, 0xa9, 0x03, 0x8d, 0x8a, 0xfd, 
    0xa9, 0x04, 0x8d, 0x8c, 0xfd, 0xa9, 0x08, 0x8d, 
    0x8b, 0xfd, 0xa2, 0x00, 0xad, 0xb2, 0xfc, 0x9d,
    0x00, 0x03, 0xe8, 0xd0, 0xf7, 0x4c, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

/* The 410 byte encrypted form of Harry's miniloader created by Harry for 
 * the cc65 compiler. */
const unsigned char HarrysEncryptedLoader[LOADER_LENGTH] = {
    0xFD, 0xC1, 0x0D, 0x8E, 0xE9, 0xEE, 0x09, 0x13,
    0xE5, 0x96, 0x0C, 0x34, 0x64, 0xDA, 0xD4, 0xBB,
    0x99, 0xEC, 0xCE, 0x4F, 0xAA, 0x8C, 0xED, 0x65,
    0xF0, 0x32, 0x70, 0xA3, 0x84, 0xC4, 0xFC, 0xA2,
    0x6D, 0x3A, 0xF8, 0x77, 0x4B, 0xAC, 0x9B, 0x54,
    0x7D, 0x82, 0x6F, 0xF8, 0xA5, 0x06, 0x4D, 0x7B,
    0x77, 0x55, 0xE4, 0x31, 0xC4, 0x2C, 0x2F, 0x2F,
    0xB6, 0x4D, 0x15, 0xA9, 0xC7, 0x99, 0x5D, 0x6E,
    0xB3, 0x97, 0x92, 0x44, 0x7B, 0x2B, 0x85, 0x18,
    0xE6, 0xF1, 0x96, 0xF4, 0xC4, 0xDE, 0xA4, 0xCF,
    0x79, 0xE2, 0xC1, 0x1A, 0xE0, 0x0C, 0x93, 0xC5,
    0x26, 0xBD, 0xA3, 0x16, 0x8A, 0xC3, 0x59, 0xA0,
    0x39, 0x38, 0xA0, 0x3B, 0xEF, 0xBB, 0x1D, 0x5C,
    0x0D, 0x1D, 0xCC, 0x48, 0x1D, 0xDD, 0x98, 0x9A,
    0x7A, 0xF7, 0x96, 0xF9, 0x61, 0x03, 0x50, 0xDA,
    0x47, 0x69, 0x94, 0xC3, 0x80, 0xDA, 0xA9, 0x99,
    0xA1, 0x21, 0x2B, 0x2E, 0x7D, 0xF5, 0xE4, 0xF7,
    0xB3, 0x5C, 0xA8, 0x14, 0xFA, 0xE9, 0x06, 0xAC,
    0x1E, 0x9F, 0xB5, 0x31, 0xBE, 0x42, 0x14, 0x08,
    0x0E, 0x05, 0xFB, 0x25, 0xBB, 0x5C, 0x5C, 0x66,
    0x76, 0x8E, 0x36, 0xE8, 0xEB, 0x39, 0xF2, 0x26,
    0xBD, 0x17, 0x29, 0xF4, 0xB8, 0x1D, 0x7E, 0xEE,
    0x47, 0x61, 0xBB, 0x9E, 0xF5, 0x72, 0xC9, 0xBC,
    0x26, 0x37, 0xD5, 0x78, 0x8F, 0xD0, 0xCE, 0x95,
    0x21, 0xEB, 0x4A, 0x07, 0x8D, 0x3A, 0x3A, 0x01,
    0x82, 0xCF, 0x01, 0xC5, 0x1E, 0x1D, 0xA8, 0x41,
    0x4F, 0xBD, 0xC1, 0x76, 0x22, 0xA3, 0x88, 0xD9,
    0x57, 0xC9, 0x51, 0x3A, 0x26, 0xBE, 0x4A, 0x1A,
    0x7F, 0x42, 0x61, 0xCF, 0xFC, 0xFC, 0x5B, 0x06,
    0x94, 0xD2, 0x2C, 0x78, 0x45, 0xBA, 0x93, 0xC4,
    0x7D, 0x7C, 0x81, 0x73, 0x07, 0x4F, 0xE2, 0x6C,
    0xE9, 0x81, 0x1A, 0xDE, 0x77, 0x74, 0x87, 0xDE,
    0x26, 0x9E, 0x7A, 0xA8, 0x19, 0xA7, 0x34, 0x32,
    0x70, 0xED, 0x59, 0xA8, 0x4A, 0xD8, 0xFE, 0xCB,
    0xDD, 0x02, 0x2F, 0xCE, 0x92, 0xE9, 0x13, 0xA6,
    0xFF, 0xB4, 0x4B, 0x18, 0x9D, 0x63, 0x48, 0xE0,
    0x3B, 0x3B, 0x0D, 0x2B, 0xFC, 0x04, 0xA4, 0xE3,
    0x5E, 0x4C, 0x3C, 0x94, 0x70, 0xC4, 0xF0, 0x64,
    0x15, 0x48, 0x68, 0x17, 0xDE, 0x14, 0x72, 0xF0,
    0x59, 0x33, 0x4C, 0x49, 0x47, 0x8D, 0xB6, 0xF4,
    0x82, 0x4E, 0xB7, 0x4E, 0x01, 0xC9, 0xC2, 0x82,
    0x0B, 0x7A, 0xAC, 0x67, 0x9B, 0x0F, 0x04, 0xE1,
    0xB6, 0x78, 0x34, 0xC8, 0x4F, 0x2A, 0x11, 0xED,
    0xD0, 0x1C, 0x6D, 0xCD, 0x3D, 0x47, 0x09, 0x8B,
    0xE5, 0x38, 0x19, 0x7A, 0x31, 0x6E, 0x30, 0x71,
    0x1C, 0x90, 0x34, 0xE5, 0x44, 0xCC, 0x00, 0xC7,
    0x41, 0xD0, 0x27, 0x8A, 0x06, 0x29, 0x5C, 0x2B,
    0xE4, 0x26, 0x63, 0x09, 0x52, 0xD3, 0x97, 0x33,
    0xD7, 0x59, 0x1C, 0x36, 0x2F, 0xC9, 0xA9, 0xA2,
    0xB5, 0xBB, 0xA9, 0x1D, 0xE6, 0x36, 0x7E, 0x56,
    0x05, 0xA4, 0x9C, 0xE0, 0x45, 0x59, 0x21, 0xE1,
    0xE6, 0x21
};

/* this is Harrys truncated miniloader in plaintext */
const unsigned char HarrysPlaintextLoader[LOADER_LENGTH] = {
    0x80, 0x00, 0x20, 0x4f, 0x02, 0x64, 0x05, 0xe6,
    0x06, 0xa9, 0x08, 0x8d, 0x8b, 0xfd, 0x4c, 0x4a,
    0xfe, 0xa2, 0x00, 0x20, 0x00, 0x03, 0xa2, 0x0b,
    0xbd, 0x6d, 0x02, 0xbc, 0x76, 0x02, 0x99, 0x00,
    0xfc, 0xca, 0xd0, 0xf4, 0x9c, 0x91, 0xfd, 0xa9,
    0x04, 0x8d, 0x95, 0xfd, 0xa0, 0x1f, 0xb9, 0x00,
    0x24, 0x99, 0xa0, 0xfd, 0x88, 0x10, 0xf7, 0x8a,
    0x9d, 0x00, 0x24, 0xe8, 0xd0, 0xf9, 0x4c, 0x49,
    0x03, 0x00, 0x7a, 0x02, 0x00, 0x24, 0x40, 0x1c,
    0x07, 0xba, 0x02, 0x00, 0x04, 0x64, 0x60, 0xa2,
    0x1f, 0x9e, 0xa0, 0xfd, 0xca, 0x10, 0xfa, 0xa9,
    0x04, 0x8d, 0x8c, 0xfd, 0xa9, 0x0f, 0x8d, 0x01,
    0x02, 0x60, 0xa0, 0x10, 0xad, 0xb2, 0xfc, 0x95,
    0x36, 0xe8, 0x88, 0xd0, 0xf7, 0x60, 0x01, 0x20,
    0x04, 0x00, 0x01, 0x00, 0x00, 0x24, 0x20, 0x91,
    0x92, 0x09, 0x08, 0x90, 0x04, 0x06, 0x11, 0x10,
    0x28, 0x2a, 0x47, 0x39, 0x00, 0x9d, 0x11, 0x8f,
    0x5e, 0xd9, 0x87, 0x94, 0x5e, 0xa7, 0x4e, 0xff,
    0xe7, 0x05, 0xba, 0xd1, 0x55, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x62, 0x02, 0xe6, 0x3c, 0xe6, 0x3d, 0xa5,
    0x36, 0x20, 0x00, 0xfe, 0xa6, 0x37, 0xe8, 0xa4,
    0x38, 0xc8, 0x20, 0x42, 0x03, 0x38, 0xa6, 0x37,
    0xa5, 0x38, 0xe9, 0x04, 0xa8, 0xc6, 0x3c, 0xd0,
    0x04, 0xc6, 0x3d, 0xf0, 0x19, 0xad, 0xb2, 0xfc,
    0x92, 0x3a, 0xe6, 0x3a, 0xd0, 0x02, 0xe6, 0x3b,
    0xe8, 0xd0, 0xea, 0xc8, 0xd0, 0xe7, 0xe6, 0x36,
    0x64, 0x37, 0x64, 0x38, 0x80, 0xc9, 0x60, 0xad,
    0xb2, 0xfc, 0xca, 0xd0, 0xfa, 0x88, 0xd0, 0xf7,
    0x60, 0xa9, 0x12, 0x85, 0x33, 0xa5, 0x33, 0x4a,
    0x4a, 0xe5, 0x33, 0x4a, 0x2e, 0x82, 0x02, 0x2e,
    0x83, 0x02, 0x66, 0x33, 0xa5, 0x33, 0x6d, 0x82,
    0x02, 0x4d, 0x83, 0x02, 0xa8, 0xbd, 0x00, 0x24,
    0x48, 0xb9, 0x00, 0x24, 0x9d, 0x00, 0x24, 0x68,
    0x99, 0x00, 0x24, 0xe8, 0xd0, 0xd7, 0xce, 0xf5,
    0x03, 0xd0, 0xd2, 0xa2, 0x32, 0x74, 0x00, 0xca,
    0xd0, 0xfb, 0xa5, 0x31, 0x20, 0x00, 0xfe, 0xad,
    0xb0, 0xfc, 0xf0, 0x03, 0x20, 0x4f, 0x02, 0xa9,
    0x10, 0x85, 0x32, 0x38, 0xa2, 0x10, 0xad, 0xb2,
    0xfc, 0xa0
};

/* the full decrypted form of Harry's mini loader */
const unsigned char HarrysFullPlaintextLoader[FULL_LOADER_LENGTH] = {
    0x80, 0x00, 0x20, 0x4f, 0x02, 0x64, 0x05, 0xe6, 
    0x06, 0xa9, 0x08, 0x8d, 0x8b, 0xfd, 0x4c, 0x4a, 
    0xfe, 0xa2, 0x00, 0x20, 0x00, 0x03, 0xa2, 0x0b, 
    0xbd, 0x6d, 0x02, 0xbc, 0x76, 0x02, 0x99, 0x00, 
    0xfc, 0xca, 0xd0, 0xf4, 0x9c, 0x91, 0xfd, 0xa9, 
    0x04, 0x8d, 0x95, 0xfd, 0xa0, 0x1f, 0xb9, 0x00, 
    0x24, 0x99, 0xa0, 0xfd, 0x88, 0x10, 0xf7, 0x8a, 
    0x9d, 0x00, 0x24, 0xe8, 0xd0, 0xf9, 0x4c, 0x49, 
    0x03, 0x00, 0x7a, 0x02, 0x00, 0x24, 0x40, 0x1c, 
    0x07, 0xba, 0x02, 0x00, 0x04, 0x64, 0x60, 0xa2, 
    0x1f, 0x9e, 0xa0, 0xfd, 0xca, 0x10, 0xfa, 0xa9, 
    0x04, 0x8d, 0x8c, 0xfd, 0xa9, 0x0f, 0x8d, 0x01, 
    0x02, 0x60, 0xa0, 0x10, 0xad, 0xb2, 0xfc, 0x95, 
    0x36, 0xe8, 0x88, 0xd0, 0xf7, 0x60, 0x01, 0x20, 
    0x04, 0x00, 0x01, 0x00, 0x00, 0x24, 0x20, 0x91, 
    0x92, 0x09, 0x08, 0x90, 0x04, 0x06, 0x11, 0x10, 
    0x28, 0x2a, 0x47, 0x39, 0x00, 0x9d, 0x11, 0x8f, 
    0x5e, 0xd9, 0x87, 0x94, 0x5e, 0xa7, 0x4e, 0xff, 
    0xe7, 0x05, 0xba, 0xd1, 0x55, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x20, 0x62, 0x02, 0xe6, 0x3c, 0xe6, 0x3d, 0xa5, 
    0x36, 0x20, 0x00, 0xfe, 0xa6, 0x37, 0xe8, 0xa4, 
    0x38, 0xc8, 0x20, 0x42, 0x03, 0x38, 0xa6, 0x37, 
    0xa5, 0x38, 0xe9, 0x04, 0xa8, 0xc6, 0x3c, 0xd0, 
    0x04, 0xc6, 0x3d, 0xf0, 0x19, 0xad, 0xb2, 0xfc, 
    0x92, 0x3a, 0xe6, 0x3a, 0xd0, 0x02, 0xe6, 0x3b, 
    0xe8, 0xd0, 0xea, 0xc8, 0xd0, 0xe7, 0xe6, 0x36, 
    0x64, 0x37, 0x64, 0x38, 0x80, 0xc9, 0x60, 0xad, 
    0xb2, 0xfc, 0xca, 0xd0, 0xfa, 0x88, 0xd0, 0xf7, 
    0x60, 0xa9, 0x12, 0x85, 0x33, 0xa5, 0x33, 0x4a, 
    0x4a, 0xe5, 0x33, 0x4a, 0x2e, 0x82, 0x02, 0x2e, 
    0x83, 0x02, 0x66, 0x33, 0xa5, 0x33, 0x6d, 0x82, 
    0x02, 0x4d, 0x83, 0x02, 0xa8, 0xbd, 0x00, 0x24, 
    0x48, 0xb9, 0x00, 0x24, 0x9d, 0x00, 0x24, 0x68, 
    0x99, 0x00, 0x24, 0xe8, 0xd0, 0xd7, 0xce, 0xf5, 
    0x03, 0xd0, 0xd2, 0xa2, 0x32, 0x74, 0x00, 0xca, 
    0xd0, 0xfb, 0xa5, 0x31, 0x20, 0x00, 0xfe, 0xad, 
    0xb0, 0xfc, 0xf0, 0x03, 0x20, 0x4f, 0x02, 0xa9, 
    0x10, 0x85, 0x32, 0x38, 0xa2, 0x10, 0xad, 0xb2, 
    0xfc, 0xa0, 0x03, 0x6d, 0xb2, 0xfc, 0x88, 0xd0, 
    0xfa, 0x95, 0x20, 0xca, 0xd0, 0xf0, 0x4e, 0xf4, 
    0x03, 0xd0, 0x2a, 0xa9, 0x02, 0x85, 0x46, 0x8a, 
    0x64, 0x00, 0x18, 0xa2, 0x1f, 0x75, 0x11, 0x95, 
    0x11, 0x65, 0x00, 0xa8, 0xb9, 0x00, 0x24, 0xe6, 
    0x00, 0xca, 0x10, 0xf1, 0xc6, 0x46, 0xd0, 0xeb, 
    0xa2, 0x10, 0xb5, 0x00, 0x55, 0x10, 0x95, 0x00, 
    0x95, 0x10, 0xca, 0xd0, 0xf5, 0xc6, 0x32, 0xd0, 
    0xba, 0xe6, 0x31, 0xd0, 0xa5, 0xa2, 0x08, 0xb5, 
    0x3e, 0x95, 0x36, 0xca, 0xd0, 0xf9, 0xea, 0xea, 
    0xea, 0x20, 0x4f, 0x02, 0xea, 0xea, 0x20, 0x03, 
    0x03, 0x6c, 0x42, 0x00, 0xff, 0x08, 0x00, 0x00, 
    0x00, 0x00, 
};


#endif /*_LOADERS_H_*/

