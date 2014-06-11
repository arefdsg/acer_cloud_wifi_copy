//
//  Copyright (C) 2009, BroadOn Communications Corp.
//
//  These coded instructions, statements, and computer programs contain
//  unpublished  proprietary information of BroadOn Communications Corp.,
//  and are protected by Federal copyright law. They may not be disclosed
//  to third parties or copied or duplicated in any form, in whole or in
//  part, without the prior written consent of BroadOn Communications Corp.
//

#include "vplex_serialization.h"

#include "vplexTest.h"

typedef struct {
    size_t len;
    void * data;
    const char * encoded;
} Base64TestData;

void testBase64Encode(void);
void testBase64Decode(void);
void testBase64DecodeMalformed(void);


void testBase64Encode(void) {
    u8 data1[] = {0xf9,0xd,0x7c,0x49,0xb1};
    u8 data2[] = {0xa0,0xa4,0x38,0x32,0xb6,0x74,0x85,0x53,0xb9,0x84,0xc4,0xb1,
            0x5f,0x46,0x6c,0x2c,0x33,0x65,0xb6,0x25,0x2e};
    u8 data3[] = {0x8c,0x82,0xce,0x85,0xd9,0xd9,0xdd,0xb5,0xd9,0xc5,0xbb,0x31,
            0xc,0xe4,0x8d,0x5c,0xaa,0x68,0x82,0x67,0x95,0x32,0xec,0x8b,0x79,
            0xae,0x94,0x7b,0xd3,0x9,0x91,0xab,0x68,0x36,0xc8,0xf4,0x11,0x1e,
            0xa9,0xea};
    u8 data4[] = {0x27,0xbc,0xc1,0x75,0x49,0x67,0x43,0xcd,0x75,0x0,0x50,0xab,
            0x94,0xf8,0x56,0x59,0xfc,0xf7,0x36,0x77,0x26,0x9f,0x7f,0xec,0xbc,
            0x9a,0xc2,0x39,0xd9,0x2,0x7a,0x6a,0x6,0x61,0xcd,0x39,0x81,0xd4,
            0x24,0x1f,0xd2,0xc1,0x68,0x47,0xc,0x48,0x92,0x8d,0xbe,0x24,0xfe,
            0x6c,0xc7,0x9a,0x51,0x4b,0x1c,0x27,0xfc,0x19,0xfd,0x9e,0x6b,0x3e,
            0x1c,0x4e,0xf8,0x61,0xe1,0x3a,0xba,0x9b,0x6a,0xe2,0xe1,0xb9,0xbf,
            0x90};
    u8 data5[] = {0x65};
    u8 data6[] = {0x65,0x65};
    
    char enc1[] = "+Q18SbE=";
    char enc2[] = "oKQ4MrZ0hVO5hMSxX0ZsLDNltiUu";
    char enc3[] = "jILOhdnZ3bXZxbsxDOSNXKpogmeVMuyLea6Ue9MJkatoNsj0ER6p6g==";
    char enc4[] = "J7zBdUlnQ811AFCrlPhWWfz3Nncmn3/svJrCOdkCemoGYc05gdQkH9LBa" \
            "EcMSJKNviT+bMeaUUsc\nJ/wZ/Z5rPhxO+GHhOrqbauLhub+Q";
    char enc5[] = "ZQ==";
    char enc6[] = "ZWU=";
    
    Base64TestData data[] = {
            {sizeof(data1), data1, enc1},{sizeof(data2), data2, enc2},
            {sizeof(data3), data3, enc3},{sizeof(data4), data4, enc4},
            {sizeof(data5), data5, enc5},{sizeof(data6), data6, enc6}
    };

    int i;

    VPLTEST_LOG("Base64 encode data");
    for (i = 0; i < ARRAY_ELEMENT_COUNT(data); i++) {
        char buf[256];
        size_t bufLen = sizeof(buf);
        // Reset the buffer with junk for each iteration.
        memset(buf, 0xE0, sizeof(buf));
        VPL_EncodeBase64(data[i].data, data[i].len, buf, &bufLen, VPL_TRUE, VPL_FALSE);
        VPLTEST_CHK_EQ_STRING(buf, data[i].encoded, "Base64 encoded string");
    }
}

void testBase64Decode(void) {
    char enc1[] = "A82qWfU=";
    char enc2[] = "4TaXYw+GojHV8RQjMpK9";
    char enc2b[] = "4TaXYw+GojHV8RQjMpK9  ";
    char enc3[] = "7JsZEt8tzt0pt743Eq8zQw==";
    char enc4[] = "bKlaR89DoPZZALTncfDfm2iQqkMtCA==";
    char enc5[] = "J7zBdUlnQ811AFCrlPhWWfz3Nncmn3/svJrCOdkCemoGYc05gdQkH9LBa" \
            "EcMSJKNviT+bMeaUUsc\nJ/wZ/Z5rPhxO+GHhOrqbauLhub+Q";
    
    u8 data1[] = {0x3,0xcd,0xaa,0x59,0xf5};
    u8 data2[] = {0xe1,0x36,0x97,0x63,0xf,0x86,0xa2,0x31,0xd5,0xf1,0x14,0x23,
            0x32,0x92,0xbd};
    u8 data3[] = {0xec,0x9b,0x19,0x12,0xdf,0x2d,0xce,0xdd,0x29,0xb7,0xbe,0x37,
            0x12,0xaf,0x33,0x43};
    u8 data4[] = {0x6c,0xa9,0x5a,0x47,0xcf,0x43,0xa0,0xf6,0x59,0x0,0xb4,0xe7,
            0x71,0xf0,0xdf,0x9b,0x68,0x90,0xaa,0x43,0x2d,0x8};
    u8 data5[] = {0x27,0xbc,0xc1,0x75,0x49,0x67,0x43,0xcd,0x75,0x0,0x50,0xab,
            0x94,0xf8,0x56,0x59,0xfc,0xf7,0x36,0x77,0x26,0x9f,0x7f,0xec,0xbc,
            0x9a,0xc2,0x39,0xd9,0x2,0x7a,0x6a,0x6,0x61,0xcd,0x39,0x81,0xd4,
            0x24,0x1f,0xd2,0xc1,0x68,0x47,0xc,0x48,0x92,0x8d,0xbe,0x24,0xfe,
            0x6c,0xc7,0x9a,0x51,0x4b,0x1c,0x27,0xfc,0x19,0xfd,0x9e,0x6b,0x3e,
            0x1c,0x4e,0xf8,0x61,0xe1,0x3a,0xba,0x9b,0x6a,0xe2,0xe1,0xb9,0xbf,
            0x90};
    
    Base64TestData data[] = {
            {sizeof(data1), data1, enc1},{sizeof(data2), data2, enc2},
            {sizeof(data3), data3, enc3},{sizeof(data4), data4, enc4},
            {sizeof(data5), data5, enc5},
            {sizeof(data2), data2, enc2b},
    };

    char buf[256];
    size_t bufLen;
    int i;

    VPLTEST_LOG("Decode base64 strings");
    for (i = 0; i < ARRAY_ELEMENT_COUNT(data); i++) {
        bufLen = 256;
        VPL_DecodeBase64(data[i].encoded, strlen(data[i].encoded), buf, &bufLen);
        VPLTEST_CHK_EQ_MEM(buf, bufLen, data[i].data, data[i].len, "Decode");
    }
}

void testBase64DecodeMalformed(void) {
    char enc3[] = "7JsZEt8tzt0pt\n743Eq8zQw==";
    char enc4[] = "bKlaR8{9\"D:,,oPZ=====ZALTncfDfm2??iQqkMtCA";
    char enc4b[] = "\n bKla  R89DoPZZAL\nTncfDfm  \n\t 2iQq\n kMtCA==  ";
    char enc7[] = "a";

    u8 data3[] = {0xec,0x9b,0x19,0x12,0xdf,0x2d,0xce,0xdd,0x29,0xb7,0xbe,0x37,
            0x12,0xaf,0x33,0x43};
    u8 data4[] = {0x6c,0xa9,0x5a,0x47,0xcf,0x43,0xa0,0xf6,0x59,0x0,0xb4,0xe7,
            0x71,0xf0,0xdf,0x9b,0x68,0x90,0xaa,0x43,0x2d,0x8};
    u8 data7[1]; // Should be "u8 data7[] = {};" but MSVC prohibits array of size 0.
    
    Base64TestData data[] = {
            {sizeof(data3), data3, enc3},{sizeof(data4), data4, enc4},
            {0/*sizeof(data7)*/, data7, enc7},
            {sizeof(data4), data4, enc4b}
    };

    char buf[256];
    size_t bufLen;
    int i;

    VPLTEST_LOG("Decode malformed base64 strings");
    for (i = 0; i < ARRAY_ELEMENT_COUNT(data); i++) {
        bufLen = 256;
        VPL_DecodeBase64(data[i].encoded, strlen(data[i].encoded), buf, &bufLen);
        VPLTEST_CHK_EQ_MEM(buf, bufLen, data[i].data, data[i].len, "DecodeMalformed");
    }
}

void testVPLSerialization(void)
{
    testBase64Encode();
    testBase64Decode();
    testBase64DecodeMalformed();
}