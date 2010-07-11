/*
Licensed to the Apache Software Foundation (ASF) under one
or more contributor license agreements.  See the NOTICE file
distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file
to you under the Apache License, Version 2.0 (the
"License"); you may not use this file except in compliance
with the License.  You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an
"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied.  See the License for the
specific language governing permissions and limitations
under the License.
*/   



// table for gamma step 0
const uint8 gammaTab0[32+64] = {
0x00, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 
0x12, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1c, 0x1d, 0x1e, 0x1f, 
0x00, 0x02, 0x03, 0x04, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 
0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
0x32, 0x33, 0x34, 0x35, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3d, 0x3e, 0x3f };

// table for gamma step 1
const uint8 gammaTab1[32+64] = {
0x00, 0x02, 0x04, 0x05, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 
0x13, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1e, 0x1f, 
0x00, 0x02, 0x04, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 
0x15, 0x16, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x30, 0x31, 0x32, 
0x33, 0x34, 0x35, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3e, 0x3f };

// table for gamma step 2
const uint8 gammaTab2[32+64] = {
0x00, 0x03, 0x04, 0x06, 0x07, 0x08, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 
0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1c, 0x1d, 0x1e, 0x1f, 0x1f, 
0x00, 0x03, 0x05, 0x07, 0x09, 0x0a, 0x0c, 0x0d, 0x0e, 0x0f, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
0x17, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
0x27, 0x28, 0x29, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x32, 0x33, 
0x34, 0x35, 0x36, 0x36, 0x37, 0x38, 0x39, 0x39, 0x3a, 0x3b, 0x3c, 0x3c, 0x3d, 0x3e, 0x3f, 0x3f };

// table for gamma step 3
const uint8 gammaTab3[32+64] = {
0x00, 0x03, 0x05, 0x07, 0x08, 0x09, 0x0a, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x12, 0x13, 
0x14, 0x15, 0x16, 0x17, 0x17, 0x18, 0x19, 0x1a, 0x1a, 0x1b, 0x1c, 0x1d, 0x1d, 0x1e, 0x1f, 0x1f, 
0x00, 0x04, 0x06, 0x08, 0x0a, 0x0c, 0x0d, 0x0f, 0x10, 0x11, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x27, 
0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x30, 0x31, 0x32, 0x33, 0x33, 0x34, 
0x35, 0x36, 0x36, 0x37, 0x38, 0x38, 0x39, 0x3a, 0x3b, 0x3b, 0x3c, 0x3d, 0x3d, 0x3e, 0x3f, 0x3f };

// table for gamma step 4
const uint8 gammaTab4[32+64] = {
0x00, 0x04, 0x06, 0x07, 0x09, 0x0a, 0x0b, 0x0c, 0x0e, 0x0f, 0x10, 0x11, 0x11, 0x12, 0x13, 0x14, 
0x15, 0x16, 0x16, 0x17, 0x18, 0x19, 0x19, 0x1a, 0x1b, 0x1b, 0x1c, 0x1d, 0x1d, 0x1e, 0x1f, 0x1f, 
0x00, 0x05, 0x08, 0x0a, 0x0c, 0x0d, 0x0f, 0x10, 0x12, 0x13, 0x14, 0x16, 0x17, 0x18, 0x19, 0x1a, 
0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x26, 0x27, 0x28, 0x29, 
0x2a, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2e, 0x2f, 0x30, 0x31, 0x31, 0x32, 0x33, 0x33, 0x34, 0x35, 
0x36, 0x36, 0x37, 0x38, 0x38, 0x39, 0x3a, 0x3a, 0x3b, 0x3c, 0x3c, 0x3d, 0x3d, 0x3e, 0x3f, 0x3f };

// table for gamma step 5
const uint8 gammaTab5[32+64] = {
0x00, 0x04, 0x06, 0x08, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
0x15, 0x16, 0x17, 0x18, 0x18, 0x19, 0x1a, 0x1a, 0x1b, 0x1c, 0x1c, 0x1d, 0x1e, 0x1e, 0x1f, 0x1f, 
0x00, 0x06, 0x09, 0x0b, 0x0d, 0x0f, 0x10, 0x12, 0x13, 0x15, 0x16, 0x17, 0x18, 0x1a, 0x1b, 0x1c, 
0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x29, 0x2a, 
0x2b, 0x2c, 0x2c, 0x2d, 0x2e, 0x2f, 0x2f, 0x30, 0x31, 0x31, 0x32, 0x33, 0x34, 0x34, 0x35, 0x36, 
0x36, 0x37, 0x38, 0x38, 0x39, 0x39, 0x3a, 0x3b, 0x3b, 0x3c, 0x3c, 0x3d, 0x3e, 0x3e, 0x3f, 0x3f };

// grand table
const uint32  gammaTabNum = 6;

const uint8* const gammaTabs[gammaTabNum] = {
	gammaTab0, gammaTab1, gammaTab2, gammaTab3, gammaTab4, gammaTab5
};
