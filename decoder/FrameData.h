/*
 * Copyright 2016 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// we put all data in header file.This is intended.
// it avoid static init order problem
// you should only include this in a cpp file
#ifndef FrameData_h
#define FrameData_h

#include <stdint.h>
#include <stdlib.h>

namespace YamiMediaCodec {

static const uint8_t s_avc8x8I[] = {
    0x00, 0x00, 0x00, 0x01, 0x67, 0x4d, 0x40, 0x28, 0xab, 0x6e, 0xcb, 0x2c,
    0x20, 0x00, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x07, 0x90, 0x80, 0x00,
    0x00, 0x00, 0x01, 0x68, 0xee, 0x3c, 0x30, 0x00, 0x00, 0x00, 0x01, 0x2e,
    0xc0, 0x80, 0x0f, 0x20, 0x00, 0x00, 0x00, 0x01, 0x65, 0xb8, 0x10, 0x06,
    0x42, 0x7f, 0xb8, 0x13, 0xf4, 0xff, 0xf8, 0x2c, 0x86, 0xea, 0xe6, 0x31,
    0x5e, 0x4a, 0x22, 0x19, 0xdd, 0xa9, 0x66, 0x33, 0xec, 0x13, 0x58, 0x39,
    0x65, 0xbb, 0xc6, 0x0d, 0x81, 0xda, 0x6d, 0x1c, 0xd5, 0xc0, 0x00, 0x00,
    0x00, 0x01
};

static const uint8_t s_avc8x8P[] = {
    0x2e, 0x80, 0x80, 0x0f, 0x20, 0x00, 0x00, 0x00, 0x01, 0x41, 0xe1, 0x13,
    0x39, 0x09, 0xfe, 0x87, 0x67, 0x81, 0x0b, 0xcd, 0x6c, 0xff, 0xc7, 0x85,
    0x44, 0x90, 0xbe, 0x3b, 0xb2, 0x2d, 0x2b, 0x9b, 0xc1, 0x81, 0x47, 0xa1,
    0x10, 0xbb, 0x74, 0xb0, 0x96, 0xfe, 0x05, 0xe8, 0x6f, 0x44, 0x35, 0xb8,
    0x24, 0xe5, 0x7d, 0x97, 0x62, 0x6e, 0x36, 0x5d, 0x29, 0x51, 0x27, 0xa6,
    0x34, 0x41, 0xa0, 0x00, 0x00, 0x00, 0x01
};

static const uint8_t s_avc8x8B[] = {
    0x0e, 0x80, 0x80, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0xa8, 0x42,
    0x73, 0x90, 0x9f, 0xf8, 0xe3, 0xac, 0xc3, 0x6c, 0xf4, 0x31, 0xfb, 0xd3,
    0xd4, 0x0e, 0xbb, 0xb8, 0xf9, 0x6e, 0x6f, 0x2c, 0xdd, 0xe6, 0x1f, 0xf0,
    0x93, 0x37, 0x62, 0xc7, 0xbf, 0x17, 0xa8, 0x5a, 0xc4, 0xa4, 0x92, 0x7a,
    0x40, 0x0f, 0x2d, 0xfc, 0x11, 0xb8, 0x53, 0x4c, 0xb7, 0xac, 0xd0, 0x27,
    0x2f, 0xaf, 0x73, 0x6d, 0x49, 0xb8, 0x95, 0xd5, 0xd0, 0xbe, 0x51, 0xa5,
    0xfe, 0xaa, 0xb4
};

static const uint8_t s_avc16x16[] = {
    0x00, 0x00, 0x00, 0x01, 0x67, 0x64, 0x00, 0x0a, 0xac, 0xd9, 0x5e, 0x84,
    0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x03, 0x00, 0xc8, 0x3c, 0x48,
    0x96, 0x58, 0x00, 0x00, 0x00, 0x01, 0x68, 0xeb, 0xe3, 0xcb, 0x22, 0xc0,
    0x00, 0x00, 0x01, 0x06, 0x05, 0xff, 0xff, 0xaa, 0xdc, 0x45, 0xe9, 0xbd,
    0xe6, 0xd9, 0x48, 0xb7, 0x96, 0x2c, 0xd8, 0x20, 0xd9, 0x23, 0xee, 0xef,
    0x78, 0x32, 0x36, 0x34, 0x20, 0x2d, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20,
    0x31, 0x34, 0x38, 0x20, 0x72, 0x32, 0x37, 0x32, 0x31, 0x20, 0x37, 0x32,
    0x64, 0x35, 0x33, 0x61, 0x62, 0x20, 0x2d, 0x20, 0x48, 0x2e, 0x32, 0x36,
    0x34, 0x2f, 0x4d, 0x50, 0x45, 0x47, 0x2d, 0x34, 0x20, 0x41, 0x56, 0x43,
    0x20, 0x63, 0x6f, 0x64, 0x65, 0x63, 0x20, 0x2d, 0x20, 0x43, 0x6f, 0x70,
    0x79, 0x6c, 0x65, 0x66, 0x74, 0x20, 0x32, 0x30, 0x30, 0x33, 0x2d, 0x32,
    0x30, 0x31, 0x36, 0x20, 0x2d, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f,
    0x2f, 0x77, 0x77, 0x77, 0x2e, 0x76, 0x69, 0x64, 0x65, 0x6f, 0x6c, 0x61,
    0x6e, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x78, 0x32, 0x36, 0x34, 0x2e, 0x68,
    0x74, 0x6d, 0x6c, 0x20, 0x2d, 0x20, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e,
    0x73, 0x3a, 0x20, 0x63, 0x61, 0x62, 0x61, 0x63, 0x3d, 0x31, 0x20, 0x72,
    0x65, 0x66, 0x3d, 0x33, 0x20, 0x64, 0x65, 0x62, 0x6c, 0x6f, 0x63, 0x6b,
    0x3d, 0x31, 0x3a, 0x30, 0x3a, 0x30, 0x20, 0x61, 0x6e, 0x61, 0x6c, 0x79,
    0x73, 0x65, 0x3d, 0x30, 0x78, 0x33, 0x3a, 0x30, 0x78, 0x31, 0x31, 0x33,
    0x20, 0x6d, 0x65, 0x3d, 0x68, 0x65, 0x78, 0x20, 0x73, 0x75, 0x62, 0x6d,
    0x65, 0x3d, 0x37, 0x20, 0x70, 0x73, 0x79, 0x3d, 0x31, 0x20, 0x70, 0x73,
    0x79, 0x5f, 0x72, 0x64, 0x3d, 0x31, 0x2e, 0x30, 0x30, 0x3a, 0x30, 0x2e,
    0x30, 0x30, 0x20, 0x6d, 0x69, 0x78, 0x65, 0x64, 0x5f, 0x72, 0x65, 0x66,
    0x3d, 0x31, 0x20, 0x6d, 0x65, 0x5f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x3d,
    0x31, 0x36, 0x20, 0x63, 0x68, 0x72, 0x6f, 0x6d, 0x61, 0x5f, 0x6d, 0x65,
    0x3d, 0x31, 0x20, 0x74, 0x72, 0x65, 0x6c, 0x6c, 0x69, 0x73, 0x3d, 0x31,
    0x20, 0x38, 0x78, 0x38, 0x64, 0x63, 0x74, 0x3d, 0x31, 0x20, 0x63, 0x71,
    0x6d, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65,
    0x3d, 0x32, 0x31, 0x2c, 0x31, 0x31, 0x20, 0x66, 0x61, 0x73, 0x74, 0x5f,
    0x70, 0x73, 0x6b, 0x69, 0x70, 0x3d, 0x31, 0x20, 0x63, 0x68, 0x72, 0x6f,
    0x6d, 0x61, 0x5f, 0x71, 0x70, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74,
    0x3d, 0x2d, 0x32, 0x20, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d,
    0x31, 0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x5f,
    0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d, 0x31, 0x20, 0x73, 0x6c,
    0x69, 0x63, 0x65, 0x64, 0x5f, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73,
    0x3d, 0x30, 0x20, 0x6e, 0x72, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x63, 0x69,
    0x6d, 0x61, 0x74, 0x65, 0x3d, 0x31, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72,
    0x6c, 0x61, 0x63, 0x65, 0x64, 0x3d, 0x30, 0x20, 0x62, 0x6c, 0x75, 0x72,
    0x61, 0x79, 0x5f, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x3d, 0x30, 0x20,
    0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x69, 0x6e, 0x65, 0x64, 0x5f,
    0x69, 0x6e, 0x74, 0x72, 0x61, 0x3d, 0x30, 0x20, 0x62, 0x66, 0x72, 0x61,
    0x6d, 0x65, 0x73, 0x3d, 0x33, 0x20, 0x62, 0x5f, 0x70, 0x79, 0x72, 0x61,
    0x6d, 0x69, 0x64, 0x3d, 0x32, 0x20, 0x62, 0x5f, 0x61, 0x64, 0x61, 0x70,
    0x74, 0x3d, 0x31, 0x20, 0x62, 0x5f, 0x62, 0x69, 0x61, 0x73, 0x3d, 0x30,
    0x20, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x3d, 0x31, 0x20, 0x77, 0x65,
    0x69, 0x67, 0x68, 0x74, 0x62, 0x3d, 0x31, 0x20, 0x6f, 0x70, 0x65, 0x6e,
    0x5f, 0x67, 0x6f, 0x70, 0x3d, 0x30, 0x20, 0x77, 0x65, 0x69, 0x67, 0x68,
    0x74, 0x70, 0x3d, 0x32, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x3d,
    0x32, 0x35, 0x30, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x5f, 0x6d,
    0x69, 0x6e, 0x3d, 0x32, 0x35, 0x20, 0x73, 0x63, 0x65, 0x6e, 0x65, 0x63,
    0x75, 0x74, 0x3d, 0x34, 0x30, 0x20, 0x69, 0x6e, 0x74, 0x72, 0x61, 0x5f,
    0x72, 0x65, 0x66, 0x72, 0x65, 0x73, 0x68, 0x3d, 0x30, 0x20, 0x72, 0x63,
    0x5f, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x3d, 0x34,
    0x30, 0x20, 0x72, 0x63, 0x3d, 0x63, 0x72, 0x66, 0x20, 0x6d, 0x62, 0x74,
    0x72, 0x65, 0x65, 0x3d, 0x31, 0x20, 0x63, 0x72, 0x66, 0x3d, 0x32, 0x33,
    0x2e, 0x30, 0x20, 0x71, 0x63, 0x6f, 0x6d, 0x70, 0x3d, 0x30, 0x2e, 0x36,
    0x30, 0x20, 0x71, 0x70, 0x6d, 0x69, 0x6e, 0x3d, 0x30, 0x20, 0x71, 0x70,
    0x6d, 0x61, 0x78, 0x3d, 0x36, 0x39, 0x20, 0x71, 0x70, 0x73, 0x74, 0x65,
    0x70, 0x3d, 0x34, 0x20, 0x69, 0x70, 0x5f, 0x72, 0x61, 0x74, 0x69, 0x6f,
    0x3d, 0x31, 0x2e, 0x34, 0x30, 0x20, 0x61, 0x71, 0x3d, 0x31, 0x3a, 0x31,
    0x2e, 0x30, 0x30, 0x00, 0x80, 0x00, 0x00, 0x01, 0x65, 0x88, 0x84, 0x00,
    0x29, 0xff, 0xc5, 0xa1, 0x95, 0xea, 0xd5, 0xff, 0xf0, 0x34, 0x1d, 0x07,
    0x3a, 0xda, 0x37, 0x5f, 0x49, 0x5b, 0xe7, 0x40, 0x37, 0x78, 0x74, 0xd2,
    0xd8, 0xc0, 0xd5, 0xcb, 0xfb, 0xdc, 0x5a, 0xf7, 0xfb, 0xbe, 0x46, 0xfc,
    0x3f, 0x17, 0xd7, 0x94, 0x29, 0x85, 0x55, 0x0f, 0x2b, 0xbe, 0xfa, 0x14,
    0xe9, 0x6c, 0x80, 0xa1, 0xbd, 0x2a, 0x50, 0x2d
};

static const uint8_t s_avc8x18[] = {
    0x00, 0x00, 0x00, 0x01, 0x67, 0x64, 0x00, 0x0a, 0xac, 0xd9, 0x55, 0xe5,
    0x88, 0xc0, 0x44, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x03, 0x00,
    0xc8, 0x3c, 0x48, 0x96, 0x58, 0x00, 0x00, 0x00, 0x01, 0x68, 0xeb, 0xe3,
    0xcb, 0x22, 0xc0, 0x00, 0x00, 0x01, 0x06, 0x05, 0xff, 0xff, 0xab, 0xdc,
    0x45, 0xe9, 0xbd, 0xe6, 0xd9, 0x48, 0xb7, 0x96, 0x2c, 0xd8, 0x20, 0xd9,
    0x23, 0xee, 0xef, 0x78, 0x32, 0x36, 0x34, 0x20, 0x2d, 0x20, 0x63, 0x6f,
    0x72, 0x65, 0x20, 0x31, 0x34, 0x32, 0x20, 0x72, 0x32, 0x33, 0x38, 0x39,
    0x20, 0x39, 0x35, 0x36, 0x63, 0x38, 0x64, 0x38, 0x20, 0x2d, 0x20, 0x48,
    0x2e, 0x32, 0x36, 0x34, 0x2f, 0x4d, 0x50, 0x45, 0x47, 0x2d, 0x34, 0x20,
    0x41, 0x56, 0x43, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x63, 0x20, 0x2d, 0x20,
    0x43, 0x6f, 0x70, 0x79, 0x6c, 0x65, 0x66, 0x74, 0x20, 0x32, 0x30, 0x30,
    0x33, 0x2d, 0x32, 0x30, 0x31, 0x34, 0x20, 0x2d, 0x20, 0x68, 0x74, 0x74,
    0x70, 0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x76, 0x69, 0x64, 0x65,
    0x6f, 0x6c, 0x61, 0x6e, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x78, 0x32, 0x36,
    0x34, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x20, 0x2d, 0x20, 0x6f, 0x70, 0x74,
    0x69, 0x6f, 0x6e, 0x73, 0x3a, 0x20, 0x63, 0x61, 0x62, 0x61, 0x63, 0x3d,
    0x31, 0x20, 0x72, 0x65, 0x66, 0x3d, 0x33, 0x20, 0x64, 0x65, 0x62, 0x6c,
    0x6f, 0x63, 0x6b, 0x3d, 0x31, 0x3a, 0x30, 0x3a, 0x30, 0x20, 0x61, 0x6e,
    0x61, 0x6c, 0x79, 0x73, 0x65, 0x3d, 0x30, 0x78, 0x33, 0x3a, 0x30, 0x78,
    0x31, 0x31, 0x33, 0x20, 0x6d, 0x65, 0x3d, 0x68, 0x65, 0x78, 0x20, 0x73,
    0x75, 0x62, 0x6d, 0x65, 0x3d, 0x37, 0x20, 0x70, 0x73, 0x79, 0x3d, 0x31,
    0x20, 0x70, 0x73, 0x79, 0x5f, 0x72, 0x64, 0x3d, 0x31, 0x2e, 0x30, 0x30,
    0x3a, 0x30, 0x2e, 0x30, 0x30, 0x20, 0x6d, 0x69, 0x78, 0x65, 0x64, 0x5f,
    0x72, 0x65, 0x66, 0x3d, 0x31, 0x20, 0x6d, 0x65, 0x5f, 0x72, 0x61, 0x6e,
    0x67, 0x65, 0x3d, 0x31, 0x36, 0x20, 0x63, 0x68, 0x72, 0x6f, 0x6d, 0x61,
    0x5f, 0x6d, 0x65, 0x3d, 0x31, 0x20, 0x74, 0x72, 0x65, 0x6c, 0x6c, 0x69,
    0x73, 0x3d, 0x31, 0x20, 0x38, 0x78, 0x38, 0x64, 0x63, 0x74, 0x3d, 0x31,
    0x20, 0x63, 0x71, 0x6d, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x61, 0x64, 0x7a,
    0x6f, 0x6e, 0x65, 0x3d, 0x32, 0x31, 0x2c, 0x31, 0x31, 0x20, 0x66, 0x61,
    0x73, 0x74, 0x5f, 0x70, 0x73, 0x6b, 0x69, 0x70, 0x3d, 0x31, 0x20, 0x63,
    0x68, 0x72, 0x6f, 0x6d, 0x61, 0x5f, 0x71, 0x70, 0x5f, 0x6f, 0x66, 0x66,
    0x73, 0x65, 0x74, 0x3d, 0x2d, 0x32, 0x20, 0x74, 0x68, 0x72, 0x65, 0x61,
    0x64, 0x73, 0x3d, 0x31, 0x32, 0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68,
    0x65, 0x61, 0x64, 0x5f, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d,
    0x31, 0x20, 0x73, 0x6c, 0x69, 0x63, 0x65, 0x64, 0x5f, 0x74, 0x68, 0x72,
    0x65, 0x61, 0x64, 0x73, 0x3d, 0x30, 0x20, 0x6e, 0x72, 0x3d, 0x30, 0x20,
    0x64, 0x65, 0x63, 0x69, 0x6d, 0x61, 0x74, 0x65, 0x3d, 0x31, 0x20, 0x69,
    0x6e, 0x74, 0x65, 0x72, 0x6c, 0x61, 0x63, 0x65, 0x64, 0x3d, 0x30, 0x20,
    0x62, 0x6c, 0x75, 0x72, 0x61, 0x79, 0x5f, 0x63, 0x6f, 0x6d, 0x70, 0x61,
    0x74, 0x3d, 0x30, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x69,
    0x6e, 0x65, 0x64, 0x5f, 0x69, 0x6e, 0x74, 0x72, 0x61, 0x3d, 0x30, 0x20,
    0x62, 0x66, 0x72, 0x61, 0x6d, 0x65, 0x73, 0x3d, 0x33, 0x20, 0x62, 0x5f,
    0x70, 0x79, 0x72, 0x61, 0x6d, 0x69, 0x64, 0x3d, 0x32, 0x20, 0x62, 0x5f,
    0x61, 0x64, 0x61, 0x70, 0x74, 0x3d, 0x31, 0x20, 0x62, 0x5f, 0x62, 0x69,
    0x61, 0x73, 0x3d, 0x30, 0x20, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x3d,
    0x31, 0x20, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x62, 0x3d, 0x31, 0x20,
    0x6f, 0x70, 0x65, 0x6e, 0x5f, 0x67, 0x6f, 0x70, 0x3d, 0x30, 0x20, 0x77,
    0x65, 0x69, 0x67, 0x68, 0x74, 0x70, 0x3d, 0x32, 0x20, 0x6b, 0x65, 0x79,
    0x69, 0x6e, 0x74, 0x3d, 0x32, 0x35, 0x30, 0x20, 0x6b, 0x65, 0x79, 0x69,
    0x6e, 0x74, 0x5f, 0x6d, 0x69, 0x6e, 0x3d, 0x32, 0x35, 0x20, 0x73, 0x63,
    0x65, 0x6e, 0x65, 0x63, 0x75, 0x74, 0x3d, 0x34, 0x30, 0x20, 0x69, 0x6e,
    0x74, 0x72, 0x61, 0x5f, 0x72, 0x65, 0x66, 0x72, 0x65, 0x73, 0x68, 0x3d,
    0x30, 0x20, 0x72, 0x63, 0x5f, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65,
    0x61, 0x64, 0x3d, 0x34, 0x30, 0x20, 0x72, 0x63, 0x3d, 0x63, 0x72, 0x66,
    0x20, 0x6d, 0x62, 0x74, 0x72, 0x65, 0x65, 0x3d, 0x31, 0x20, 0x63, 0x72,
    0x66, 0x3d, 0x32, 0x33, 0x2e, 0x30, 0x20, 0x71, 0x63, 0x6f, 0x6d, 0x70,
    0x3d, 0x30, 0x2e, 0x36, 0x30, 0x20, 0x71, 0x70, 0x6d, 0x69, 0x6e, 0x3d,
    0x30, 0x20, 0x71, 0x70, 0x6d, 0x61, 0x78, 0x3d, 0x36, 0x39, 0x20, 0x71,
    0x70, 0x73, 0x74, 0x65, 0x70, 0x3d, 0x34, 0x20, 0x69, 0x70, 0x5f, 0x72,
    0x61, 0x74, 0x69, 0x6f, 0x3d, 0x31, 0x2e, 0x34, 0x30, 0x20, 0x61, 0x71,
    0x3d, 0x31, 0x3a, 0x31, 0x2e, 0x30, 0x30, 0x00, 0x80, 0x00, 0x00, 0x01,
    0x65, 0x88, 0x84, 0x00, 0x2b, 0xff, 0xfe, 0xf6, 0x73, 0x7c, 0x0a, 0x6b,
    0x47, 0x32, 0xf5, 0x1f
};

static const uint8_t  s_vp8_8x8I[] = {
    0x30, 0x02, 0x00, 0x9d, 0x01, 0x2a, 0x08, 0x00, 0x08, 0x00, 0x04, 0xc7,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x1a, 0x04, 0x00, 0x18,
    0x1b, 0xdc, 0x00, 0xfe, 0xf6, 0xf4, 0xff, 0xff, 0x3e, 0x1f, 0xff, 0xe7,
    0xac, 0x3f, 0xff, 0xcf, 0x1b, 0xfd, 0xff, 0xff, 0xcd, 0x76, 0xff, 0xfe,
    0x6b, 0xb7, 0xfc, 0xd7, 0x6e, 0x7f, 0xff, 0xcd, 0x76, 0xff, 0xfe, 0x6b,
    0xb7, 0xfc, 0xd0, 0x60, 0x00, 0x00, 0x00
};

static const uint8_t  s_vp8_8x8P1[] = {
    0x31, 0x04, 0x00, 0x13, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x08, 0x68, 0x03, 0x18, 0x00, 0x30, 0x2d, 0xf4, 0x0c, 0x11, 0x44, 0x0e,
    0x91, 0xc5, 0xce, 0x62, 0xc8, 0x80, 0xea, 0xc6, 0x5f, 0x3b, 0xf1, 0x68,
    0xfe, 0xfa, 0x59, 0xc7, 0x5e, 0xf7, 0xc7, 0xf1, 0xd5, 0xae, 0x1d, 0xd6,
    0x53, 0xff, 0xe6, 0x91, 0x7f, 0xf9, 0xa4, 0x5e, 0xd8, 0xac, 0x43, 0x7f,
    0x65, 0xe4, 0x51, 0xd6, 0xee, 0xb2, 0x95, 0x83, 0x20, 0xe6, 0xe9, 0x4a,
    0x48, 0x28, 0xff, 0xde, 0xc8, 0x19, 0x88, 0xaf, 0xfd, 0xfd, 0x71, 0xbe,
    0x62, 0x83, 0x39, 0xef, 0x73, 0x7d, 0x42, 0x35, 0x3a, 0x45, 0x40, 0x05,
    0x71, 0xcc, 0x2b, 0xbf, 0xe9, 0x55, 0x58, 0xff, 0xfe, 0x6b, 0xb7, 0xff,
    0xf3, 0x5d, 0xbf, 0xe6, 0xbb, 0x7f, 0xfb, 0x56, 0xc6, 0xbf, 0xcf, 0xfe,
    0x31, 0xc8, 0xbb, 0x7f, 0xfe, 0x6b, 0xb7, 0xff, 0xf3, 0x5d, 0xbf, 0xe6,
    0x83, 0x00, 0x00, 0x00, 0x00
};

static const uint8_t  s_vp8_8x8P2[] = {
    0x91, 0x03, 0x00, 0x13, 0x1c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x08, 0x68, 0x03, 0x18, 0x00, 0x30, 0x2d, 0xf4, 0x0c, 0x11, 0x44, 0x0e,
    0x91, 0xc5, 0xce, 0x62, 0xc8, 0xbb, 0x00, 0xfe, 0xba, 0x5e, 0xa9, 0xec,
    0x5b, 0xff, 0xed, 0xe7, 0x79, 0x15, 0xa7, 0x12, 0xff, 0xff, 0xba, 0x3e,
    0x3f, 0xe9, 0x6f, 0xfd, 0x3d, 0x74, 0xfe, 0x27, 0x44, 0xb7, 0xff, 0x7d,
    0xd4, 0xff, 0xbe, 0x4f, 0xfd, 0x6a, 0x3f, 0xe2, 0x74, 0x25, 0xff, 0xe1,
    0xfd, 0xff, 0x89, 0xd6, 0x75, 0xdf, 0x58, 0x1f, 0xfe, 0x25, 0x7e, 0xf7,
    0xf9, 0x9c, 0x26, 0x3b, 0xf9, 0xa0, 0x00, 0x00, 0x00
};

static const uint8_t s_vp8_16x16[] = {
    0xd0, 0x02, 0x00, 0x9d, 0x01, 0x2a, 0x10, 0x00, 0x10, 0x00, 0x04, 0xc7,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x1a, 0x04, 0x00, 0x18,
    0x17, 0x6f, 0x22, 0x12, 0xd0, 0xed, 0x83, 0x00, 0xfe, 0xff, 0x00, 0xaf,
    0xe4, 0xa3, 0xcb, 0xa7, 0x21, 0xff, 0xc1, 0xaf, 0xff, 0xc9, 0xe3, 0xfc,
    0xd3, 0xff, 0x71, 0x2d, 0x39, 0x3b, 0x63, 0xff, 0xc4, 0xfd, 0x6f, 0xeb,
    0x39, 0xd9, 0xc2, 0x34, 0xc3, 0x9c, 0xe9, 0x7f, 0x9c, 0xce, 0x75, 0x54,
    0x3b, 0x87, 0xfc, 0xf8, 0x64, 0xdf, 0xfe, 0x1c, 0xde, 0xbc, 0x23, 0x2c,
    0x99, 0xd0, 0x3f, 0xfe, 0x1a, 0x87, 0xde, 0x14, 0x8e, 0x05, 0xfd, 0x5f,
    0x7a, 0xaf, 0xf5, 0x5f, 0xf1, 0xfe, 0xdf, 0xd4, 0xb2, 0xf4, 0xf9, 0x57,
    0x7b, 0xec, 0xff, 0xff, 0x13, 0x58, 0x34, 0x0a, 0x71, 0xab, 0x04, 0xd0,
    0xb9, 0x25, 0xbf, 0xf9, 0xbc, 0x8f, 0xf3, 0xff, 0xee, 0x6e, 0x7d, 0x3b,
    0xff, 0x33, 0xbf, 0xd7, 0xfd, 0x7f, 0xef, 0xff, 0xef, 0xfe, 0xfe, 0x63,
    0xed, 0x40, 0x00, 0x00, 0x00
};

static const uint8_t s_hevc8x8I[] = {
  0x00, 0x00, 0x00, 0x01, 0x40, 0x01, 0x0c, 0x01, 0xff, 0xff, 0x01, 0x40,
  0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00,
  0x99, 0x19, 0x40, 0x90, 0x00, 0x00, 0x00, 0x01, 0x42, 0x01, 0x01, 0x01,
  0x40, 0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03,
  0x00, 0x99, 0xa0, 0x88, 0x47, 0x2c, 0xbb, 0x19, 0x6e, 0xdb, 0x48, 0x80,
  0x40, 0x00, 0x00, 0x03, 0x00, 0x40, 0x00, 0x00, 0x07, 0x82, 0x00, 0x00,
  0x00, 0x01, 0x44, 0x01, 0xc0, 0x73, 0xe0, 0x09, 0x00, 0x00, 0x00, 0x01,
  0x26, 0x01, 0xaf, 0xc0, 0x35, 0x17, 0x7e, 0xc3, 0x4f, 0xc3, 0x4f, 0xfc,
  0xe1, 0x07, 0xfd, 0x25, 0xff, 0xe9, 0x7c, 0x4f, 0xf7, 0x93, 0x5f, 0xf2,
  0x0d, 0xef, 0x3a, 0x30, 0x86, 0x2a, 0xe1, 0xb4, 0xb9, 0xef, 0xed, 0xeb,
  0x86, 0x97, 0x7c, 0xf4, 0x45, 0xa4, 0x84, 0x9d, 0xaf, 0x80
};

static const uint8_t s_hevc8x8P[] = {
  0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0xd0, 0x45, 0x5f, 0xe0, 0xf2, 0x29,
  0xd8, 0x4f, 0xf8, 0x5a, 0x05, 0x28, 0x01, 0x0b, 0x54, 0x65, 0x34, 0x66,
  0xb5, 0x23, 0x83, 0x67, 0x4b, 0x68, 0x88, 0x17, 0x24, 0x5e, 0x75, 0x0c,
  0x62, 0xda, 0x42, 0xff, 0x4c, 0x4c, 0x7e, 0xb5, 0x83, 0x59, 0x9a, 0xcf,
  0x07, 0xb9, 0x29, 0x00, 0x6c, 0x76, 0xd6, 0x1e, 0x45, 0xfc, 0x36, 0x17,
  0xe8, 0xab, 0xcc, 0x65, 0x69, 0x3b, 0xc0, 0xb1, 0xfe, 0xb9, 0x7e, 0x70,
  0x5e, 0x4d, 0xa7, 0x62, 0x55, 0x9f, 0xf6, 0x46, 0xeb, 0x19, 0xe9, 0xa2,
  0x32, 0xc4, 0xed, 0x9f, 0x3f, 0xc1, 0xb3, 0x04, 0xbd, 0xd9, 0xbe, 0xd8,
  0x3f, 0xe0, 0xe9, 0xdd, 0xaa, 0x61
};

static const uint8_t s_hevc8x8B[] = {
  0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0xe0, 0x92, 0xfe, 0xf8, 0xf3, 0x1d,
  0x6f, 0xff, 0x9c, 0xdc, 0x78, 0x8c, 0x52, 0x0a, 0x58, 0x2d, 0xf6, 0x8d,
  0x70, 0x22, 0x80, 0x4a, 0xbc, 0x47, 0xad, 0x6c, 0x57, 0xae, 0xab, 0x60,
  0x01, 0x9b, 0xcb, 0xce, 0x38, 0x51, 0xff, 0x94, 0x19, 0xec, 0xfa, 0xff,
  0x0f, 0x3e, 0x33, 0xd8, 0x64, 0x94, 0xbb, 0xe6, 0x67, 0xfc, 0xd7, 0x67,
  0xe9, 0x0e, 0x2b, 0x47, 0x2e, 0xa7, 0xa4, 0x7f, 0xbc, 0xdf, 0xe5, 0x7d,
  0x13, 0xfa, 0x88, 0xfd, 0x81, 0xb0, 0xdf, 0xd8, 0x68, 0x1f, 0xfd, 0x9d,
  0xaa, 0xf5, 0x8a, 0x69, 0x00, 0xa5, 0x45, 0xb6, 0x7c, 0xe6, 0xeb, 0xb0,
  0x5f, 0x73, 0x86, 0x9a, 0x91, 0x20, 0x65, 0xd4, 0x1c, 0x10
};

static const uint8_t s_hevc8x18[] = {
  0x00, 0x00, 0x00, 0x01, 0x40, 0x01, 0x0c, 0x01, 0xff, 0xff, 0x01, 0x40,
  0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00,
  0x99, 0x19, 0x40, 0x90, 0x00, 0x00, 0x00, 0x01, 0x42, 0x01, 0x01, 0x01,
  0x40, 0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03,
  0x00, 0x99, 0xa0, 0x88, 0x21, 0xcb, 0x11, 0xb1, 0x96, 0xed, 0xb4, 0x88,
  0x04, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x03, 0x00, 0x78, 0x20,
  0x00, 0x00, 0x00, 0x01, 0x44, 0x01, 0xc0, 0x73, 0xe0, 0x09, 0x00, 0x00,
  0x00, 0x01, 0x26, 0x01, 0xaf, 0xc0, 0x35, 0x0a, 0xbc, 0x5e, 0x1c, 0x9b,
  0xff, 0xb8, 0x4b, 0x1f, 0xc1, 0x8e, 0xfe, 0x5d, 0xd3, 0xff, 0xb9, 0x74,
  0x65, 0x8d, 0xc3, 0xd7, 0x57, 0x0e, 0x5f, 0xb4, 0x67, 0xf4, 0x8d, 0x59,
  0xfb, 0xbe, 0x56, 0x22, 0xd2, 0x8c, 0xae, 0x03, 0x73, 0x7f, 0x07, 0x48,
  0xbd, 0x1a, 0x79, 0xe0, 0x02, 0xeb, 0xce, 0xf6, 0xbc, 0x44, 0xaf, 0xff,
  0xd5, 0xcd, 0x7a, 0x96, 0xac, 0x0c, 0x95, 0xd3, 0x0f, 0x45, 0x82, 0x40,
  0xde, 0x18, 0x43, 0xd7, 0x8f, 0x05, 0x09, 0xa5, 0x1d, 0xd6, 0x59, 0x52,
  0xb6, 0x81, 0xdb, 0xca, 0xb5, 0x19, 0x32, 0xee, 0x0b, 0xc7, 0x41, 0x10,
  0x30, 0xdf, 0xff, 0xcc, 0x91, 0x77, 0x80
};

static const uint8_t s_hevc16x16[] = {
  0x00, 0x00, 0x00, 0x01, 0x40, 0x01, 0x0c, 0x01, 0xff, 0xff, 0x01, 0x40,
  0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00,
  0x99, 0x19, 0x40, 0x90, 0x00, 0x00, 0x00, 0x01, 0x42, 0x01, 0x01, 0x01,
  0x40, 0x00, 0x00, 0x03, 0x00, 0x90, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03,
  0x00, 0x99, 0xa0, 0x88, 0x45, 0xb1, 0x96, 0xed, 0xb4, 0x88, 0x04, 0x00,
  0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x03, 0x00, 0x78, 0x20, 0x00, 0x00,
  0x00, 0x01, 0x44, 0x01, 0xc0, 0x73, 0xe0, 0x09, 0x00, 0x00, 0x00, 0x01,
  0x26, 0x01, 0xaf, 0xc0, 0xc6, 0x7c, 0x02, 0xea, 0x1a, 0x20, 0x17, 0x3b,
  0xa1, 0x75, 0xc5, 0xc3, 0xf0, 0x46, 0x94, 0xcc, 0x1f, 0x59, 0xd8, 0x3e,
  0xed, 0x5b, 0x37, 0x37, 0x55, 0x79, 0xbf, 0x32, 0x7f, 0x82, 0x0c, 0x58,
  0x31, 0xd5, 0xe8, 0x23, 0x75, 0xad, 0xb0, 0x75, 0xb4, 0x75, 0x94, 0x00,
  0x7c, 0xc7, 0x4f, 0x88, 0x60, 0xe6, 0x7f, 0x9b, 0x1d, 0xed, 0xea, 0xfd,
  0xcb, 0x4a, 0x37, 0x58, 0x9a, 0x16, 0x31, 0xeb, 0x7c, 0x18, 0x34, 0x21,
  0x9c, 0xf9, 0xd2, 0x7b, 0x64, 0x71, 0x20, 0x5f, 0xac, 0x25, 0xbb, 0x08,
  0x3e, 0xfe, 0xc3, 0x05, 0xd2, 0x1a, 0xc9, 0x78
};

struct FrameInfo {
    uint32_t m_width;
    uint32_t m_height;
    FrameInfo()
        : m_width(0)
        , m_height(0)
    {
    }

    FrameInfo(uint32_t width, uint32_t height)
        : m_width(width)
        , m_height(height)
    {
        /* nothing */
    }
};

struct FrameData {
    const uint8_t* m_data;
    size_t m_size;
    FrameInfo m_info;
    FrameData(const uint8_t* data, size_t size, uint32_t width, uint32_t height)
        : m_data(data)
        , m_size(size)
        , m_info(width, height)
    {
        /* nothing */
    }
};

const static FrameData g_avc8x8I(s_avc8x8I, N_ELEMENTS(s_avc8x8I), 8, 8);
const static FrameData g_avc8x8P(s_avc8x8P, N_ELEMENTS(s_avc8x8P), 8, 8);
const static FrameData g_avc8x8B(s_avc8x8B, N_ELEMENTS(s_avc8x8B), 8, 8);
const static FrameData g_avc8x16(s_avc8x18, N_ELEMENTS(s_avc8x18), 8, 18);
const static FrameData g_avc16x16(s_avc16x16, N_ELEMENTS(s_avc16x16), 16, 16);

const static FrameData g_hevc8x8I(s_hevc8x8I, N_ELEMENTS(s_hevc8x8I), 8, 8);
const static FrameData g_hevc8x8P(s_hevc8x8P, N_ELEMENTS(s_hevc8x8P), 8, 8);
const static FrameData g_hevc8x8B(s_hevc8x8B, N_ELEMENTS(s_hevc8x8B), 8, 8);
const static FrameData g_hevc8x18(s_hevc8x18, N_ELEMENTS(s_hevc8x18), 8, 18);
const static FrameData g_hevc16x16(s_hevc16x16, N_ELEMENTS(s_hevc16x16), 16, 16);

const static FrameData g_vp8_8x8I(s_vp8_8x8I, N_ELEMENTS(s_vp8_8x8I), 8, 8);
const static FrameData g_vp8_8x8P1(s_vp8_8x8P1, N_ELEMENTS(s_vp8_8x8P1), 8, 8);
const static FrameData g_vp8_8x8P2(s_vp8_8x8P2, N_ELEMENTS(s_vp8_8x8P2), 8, 8);
const static FrameData g_vp8_16x16(s_vp8_16x16, N_ELEMENTS(s_vp8_16x16), 16, 16);

const static FrameData g_EOF(NULL, 0, 0, 0);
};
#endif
