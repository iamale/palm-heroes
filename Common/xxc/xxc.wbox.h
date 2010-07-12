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

//
// WBoxing (simple Feistel cipher with whitened key schedule)
//

#ifndef XXC_WBOX_H__
#define XXC_WBOX_H__

#include "xxc.defs.h"

namespace xxc {

// autogenerated by 'wwbox':
// w-box functions (whiteboxed s-boxes)
unsigned char wbox001( const unsigned char );
unsigned char wbox002( const unsigned char );

// constants decryptor function
// NB:: should be strictly inlined??
uint32 wbox_dec( uint32 in );

// constants file
// 
extern const uint32 e_eccX[7];
extern const uint32 e_eccY[7];
extern const uint32 e_hashBoot[16];
extern const uint32 e_cipherKey[4];
extern const uint32 e_bloomMix[7];
extern const uint32 e_puk[4];

} //xxc

#endif //XXC_WBOX_H__
