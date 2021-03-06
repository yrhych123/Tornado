/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/xoodoo/usuba/ua/xoodoo.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "MASKED_UA.h"

/* auxiliary functions */
void theta__V32 (/*inputs*/ DATATYPE A__[3][4][MASKING_ORDER], /*outputs*/ DATATYPE R__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE E__[4][MASKING_ORDER];
  DATATYPE P__[4][MASKING_ORDER];
  DATATYPE _tmp1_[4][MASKING_ORDER];
  DATATYPE _tmp2_[MASKING_ORDER];
  DATATYPE _tmp3_[MASKING_ORDER];

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp1_[0][_mask_idx] = XOR(A__[0][0][_mask_idx],A__[1][0][_mask_idx]);
    _tmp1_[1][_mask_idx] = XOR(A__[0][1][_mask_idx],A__[1][1][_mask_idx]);
    _tmp1_[2][_mask_idx] = XOR(A__[0][2][_mask_idx],A__[1][2][_mask_idx]);
    _tmp1_[3][_mask_idx] = XOR(A__[0][3][_mask_idx],A__[1][3][_mask_idx]);
    P__[0][_mask_idx] = XOR(_tmp1_[0][_mask_idx],A__[2][0][_mask_idx]);
    P__[1][_mask_idx] = XOR(_tmp1_[1][_mask_idx],A__[2][1][_mask_idx]);
    P__[2][_mask_idx] = XOR(_tmp1_[2][_mask_idx],A__[2][2][_mask_idx]);
    P__[3][_mask_idx] = XOR(_tmp1_[3][_mask_idx],A__[2][3][_mask_idx]);
  }
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp2_[_mask_idx] = L_ROTATE(P__[((i__ + 3) % 4)][_mask_idx],5,32);
      _tmp3_[_mask_idx] = L_ROTATE(P__[((i__ + 3) % 4)][_mask_idx],14,32);
      E__[i__][_mask_idx] = XOR(_tmp2_[_mask_idx],_tmp3_[_mask_idx]);
    }
  }
  for (int i__ = 0; i__ <= 2; i__++) {
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      R__[i__][0][_mask_idx] = XOR(A__[i__][0][_mask_idx],E__[0][_mask_idx]);
      R__[i__][1][_mask_idx] = XOR(A__[i__][1][_mask_idx],E__[1][_mask_idx]);
      R__[i__][2][_mask_idx] = XOR(A__[i__][2][_mask_idx],E__[2][_mask_idx]);
      R__[i__][3][_mask_idx] = XOR(A__[i__][3][_mask_idx],E__[3][_mask_idx]);
    }
  }

}

void rho_west__V32 (/*inputs*/ DATATYPE A__[3][4][MASKING_ORDER], /*outputs*/ DATATYPE R__[3][4][MASKING_ORDER]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    R__[0][0][_mask_idx] = A__[0][0][_mask_idx];
    R__[0][1][_mask_idx] = A__[0][1][_mask_idx];
    R__[0][2][_mask_idx] = A__[0][2][_mask_idx];
    R__[0][3][_mask_idx] = A__[0][3][_mask_idx];
    R__[1][0][_mask_idx] = A__[1][3][_mask_idx];
    R__[1][1][_mask_idx] = A__[1][0][_mask_idx];
    R__[1][2][_mask_idx] = A__[1][1][_mask_idx];
    R__[1][3][_mask_idx] = A__[1][2][_mask_idx];
  }
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      R__[2][i__][_mask_idx] = L_ROTATE(A__[2][i__][_mask_idx],11,32);
    }
  }

}

void iota__V32 (/*inputs*/ DATATYPE A__[3][4][MASKING_ORDER],DATATYPE rc__[MASKING_ORDER], /*outputs*/ DATATYPE R__[3][4][MASKING_ORDER]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    R__[0][0][_mask_idx] = XOR(A__[0][0][_mask_idx],rc__[_mask_idx]);
    R__[0][1][_mask_idx] = A__[0][1][_mask_idx];
    R__[0][2][_mask_idx] = A__[0][2][_mask_idx];
    R__[0][3][_mask_idx] = A__[0][3][_mask_idx];
    R__[1][0][_mask_idx] = A__[1][0][_mask_idx];
    R__[1][1][_mask_idx] = A__[1][1][_mask_idx];
    R__[1][2][_mask_idx] = A__[1][2][_mask_idx];
    R__[1][3][_mask_idx] = A__[1][3][_mask_idx];
    R__[2][0][_mask_idx] = A__[2][0][_mask_idx];
    R__[2][1][_mask_idx] = A__[2][1][_mask_idx];
    R__[2][2][_mask_idx] = A__[2][2][_mask_idx];
    R__[2][3][_mask_idx] = A__[2][3][_mask_idx];
  }

}

void chi__V32 (/*inputs*/ DATATYPE A__[3][4][MASKING_ORDER], /*outputs*/ DATATYPE R__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE B__[3][4][MASKING_ORDER];
  DATATYPE _tmp4_[4][MASKING_ORDER];
  DATATYPE _tmp5_[4][MASKING_ORDER];
  DATATYPE _tmp6_[4][MASKING_ORDER];

  // Instructions (body)
  _tmp4_[0][0] = NOT(A__[1][0][0]);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    _tmp4_[0][_mask_idx] = A__[1][0][_mask_idx];
    _tmp4_[1][_mask_idx] = A__[1][1][_mask_idx];
    _tmp4_[2][_mask_idx] = A__[1][2][_mask_idx];
    _tmp4_[3][_mask_idx] = A__[1][3][_mask_idx];
    _tmp5_[0][_mask_idx] = A__[2][0][_mask_idx];
    _tmp5_[1][_mask_idx] = A__[2][1][_mask_idx];
    _tmp5_[2][_mask_idx] = A__[2][2][_mask_idx];
    _tmp5_[3][_mask_idx] = A__[2][3][_mask_idx];
    _tmp6_[0][_mask_idx] = A__[0][0][_mask_idx];
    _tmp6_[1][_mask_idx] = A__[0][1][_mask_idx];
    _tmp6_[2][_mask_idx] = A__[0][2][_mask_idx];
    _tmp6_[3][_mask_idx] = A__[0][3][_mask_idx];
  }
  _tmp4_[1][0] = NOT(A__[1][1][0]);
  _tmp4_[2][0] = NOT(A__[1][2][0]);
  _tmp4_[3][0] = NOT(A__[1][3][0]);
  MASKED_AND(B__[0][0],_tmp4_[0],A__[2][0]);
  MASKED_AND(B__[0][1],_tmp4_[1],A__[2][1]);
  MASKED_AND(B__[0][2],_tmp4_[2],A__[2][2]);
  MASKED_AND(B__[0][3],_tmp4_[3],A__[2][3]);
  _tmp5_[0][0] = NOT(A__[2][0][0]);
  _tmp5_[1][0] = NOT(A__[2][1][0]);
  _tmp5_[2][0] = NOT(A__[2][2][0]);
  _tmp5_[3][0] = NOT(A__[2][3][0]);
  MASKED_AND(B__[1][0],_tmp5_[0],A__[0][0]);
  MASKED_AND(B__[1][1],_tmp5_[1],A__[0][1]);
  MASKED_AND(B__[1][2],_tmp5_[2],A__[0][2]);
  MASKED_AND(B__[1][3],_tmp5_[3],A__[0][3]);
  _tmp6_[0][0] = NOT(A__[0][0][0]);
  _tmp6_[1][0] = NOT(A__[0][1][0]);
  _tmp6_[2][0] = NOT(A__[0][2][0]);
  _tmp6_[3][0] = NOT(A__[0][3][0]);
  MASKED_AND(B__[2][0],_tmp6_[0],A__[1][0]);
  MASKED_AND(B__[2][1],_tmp6_[1],A__[1][1]);
  MASKED_AND(B__[2][2],_tmp6_[2],A__[1][2]);
  MASKED_AND(B__[2][3],_tmp6_[3],A__[1][3]);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    R__[0][0][_mask_idx] = XOR(A__[0][0][_mask_idx],B__[0][0][_mask_idx]);
    R__[0][1][_mask_idx] = XOR(A__[0][1][_mask_idx],B__[0][1][_mask_idx]);
    R__[0][2][_mask_idx] = XOR(A__[0][2][_mask_idx],B__[0][2][_mask_idx]);
    R__[0][3][_mask_idx] = XOR(A__[0][3][_mask_idx],B__[0][3][_mask_idx]);
    R__[1][0][_mask_idx] = XOR(A__[1][0][_mask_idx],B__[1][0][_mask_idx]);
    R__[1][1][_mask_idx] = XOR(A__[1][1][_mask_idx],B__[1][1][_mask_idx]);
    R__[1][2][_mask_idx] = XOR(A__[1][2][_mask_idx],B__[1][2][_mask_idx]);
    R__[1][3][_mask_idx] = XOR(A__[1][3][_mask_idx],B__[1][3][_mask_idx]);
    R__[2][0][_mask_idx] = XOR(A__[2][0][_mask_idx],B__[2][0][_mask_idx]);
    R__[2][1][_mask_idx] = XOR(A__[2][1][_mask_idx],B__[2][1][_mask_idx]);
    R__[2][2][_mask_idx] = XOR(A__[2][2][_mask_idx],B__[2][2][_mask_idx]);
    R__[2][3][_mask_idx] = XOR(A__[2][3][_mask_idx],B__[2][3][_mask_idx]);
  }

}

void rho_east__V32 (/*inputs*/ DATATYPE A__[3][4][MASKING_ORDER], /*outputs*/ DATATYPE R__[3][4][MASKING_ORDER]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    R__[0][0][_mask_idx] = A__[0][0][_mask_idx];
    R__[0][1][_mask_idx] = A__[0][1][_mask_idx];
    R__[0][2][_mask_idx] = A__[0][2][_mask_idx];
    R__[0][3][_mask_idx] = A__[0][3][_mask_idx];
  }
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      R__[1][i__][_mask_idx] = L_ROTATE(A__[1][i__][_mask_idx],1,32);
      R__[2][i__][_mask_idx] = L_ROTATE(A__[2][((i__ + 2) % 4)][_mask_idx],8,32);
    }
  }

}

void round__V32 (/*inputs*/ DATATYPE state__[3][4][MASKING_ORDER],DATATYPE rc__[MASKING_ORDER], /*outputs*/ DATATYPE stateR__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp10_[3][4][MASKING_ORDER];
  DATATYPE _tmp7_[3][4][MASKING_ORDER];
  DATATYPE _tmp8_[3][4][MASKING_ORDER];
  DATATYPE _tmp9_[3][4][MASKING_ORDER];

  // Instructions (body)
  theta__V32(state__,_tmp7_);
  rho_west__V32(_tmp7_,_tmp8_);
  iota__V32(_tmp8_,rc__,_tmp9_);
  chi__V32(_tmp9_,_tmp10_);
  rho_east__V32(_tmp10_,stateR__);

}

/* main function */
void xoodoo__ (/*inputs*/ DATATYPE input__[3][4][MASKING_ORDER], /*outputs*/ DATATYPE output__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE RC__[12][MASKING_ORDER];
  DATATYPE state__[3][4][MASKING_ORDER];

  // Instructions (body)
  RC__[0][0] = LIFT_32(88);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    RC__[0][_mask_idx] = LIFT_32(0);
    RC__[1][_mask_idx] = LIFT_32(0);
    RC__[2][_mask_idx] = LIFT_32(0);
    RC__[3][_mask_idx] = LIFT_32(0);
    RC__[4][_mask_idx] = LIFT_32(0);
    RC__[5][_mask_idx] = LIFT_32(0);
    RC__[6][_mask_idx] = LIFT_32(0);
    RC__[7][_mask_idx] = LIFT_32(0);
    RC__[8][_mask_idx] = LIFT_32(0);
    RC__[9][_mask_idx] = LIFT_32(0);
    RC__[10][_mask_idx] = LIFT_32(0);
    RC__[11][_mask_idx] = LIFT_32(0);
  }
  RC__[1][0] = LIFT_32(56);
  RC__[2][0] = LIFT_32(960);
  RC__[3][0] = LIFT_32(208);
  RC__[4][0] = LIFT_32(288);
  RC__[5][0] = LIFT_32(20);
  RC__[6][0] = LIFT_32(96);
  RC__[7][0] = LIFT_32(44);
  RC__[8][0] = LIFT_32(896);
  RC__[9][0] = LIFT_32(240);
  RC__[10][0] = LIFT_32(416);
  RC__[11][0] = LIFT_32(18);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    state__[0][0][_mask_idx] = input__[0][0][_mask_idx];
    state__[0][1][_mask_idx] = input__[0][1][_mask_idx];
    state__[0][2][_mask_idx] = input__[0][2][_mask_idx];
    state__[0][3][_mask_idx] = input__[0][3][_mask_idx];
    state__[1][0][_mask_idx] = input__[1][0][_mask_idx];
    state__[1][1][_mask_idx] = input__[1][1][_mask_idx];
    state__[1][2][_mask_idx] = input__[1][2][_mask_idx];
    state__[1][3][_mask_idx] = input__[1][3][_mask_idx];
    state__[2][0][_mask_idx] = input__[2][0][_mask_idx];
    state__[2][1][_mask_idx] = input__[2][1][_mask_idx];
    state__[2][2][_mask_idx] = input__[2][2][_mask_idx];
    state__[2][3][_mask_idx] = input__[2][3][_mask_idx];
  }
  for (int i__ = 0; i__ <= 11; i__++) {
    round__V32(state__,RC__[i__],state__);
  }
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    output__[0][0][_mask_idx] = state__[0][0][_mask_idx];
    output__[0][1][_mask_idx] = state__[0][1][_mask_idx];
    output__[0][2][_mask_idx] = state__[0][2][_mask_idx];
    output__[0][3][_mask_idx] = state__[0][3][_mask_idx];
    output__[1][0][_mask_idx] = state__[1][0][_mask_idx];
    output__[1][1][_mask_idx] = state__[1][1][_mask_idx];
    output__[1][2][_mask_idx] = state__[1][2][_mask_idx];
    output__[1][3][_mask_idx] = state__[1][3][_mask_idx];
    output__[2][0][_mask_idx] = state__[2][0][_mask_idx];
    output__[2][1][_mask_idx] = state__[2][1][_mask_idx];
    output__[2][2][_mask_idx] = state__[2][2][_mask_idx];
    output__[2][3][_mask_idx] = state__[2][3][_mask_idx];
  }

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE input__[3][4][MASKING_ORDER] = { 0 };
  /* outputs */
  DATATYPE output__[3][4][MASKING_ORDER] = { 0 };
  /* fun call */
  xoodoo__(input__,output__);

  /* Returning the number of encrypted bytes */
  return 48;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node theta(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  P :  u32[4] :: base,
  E :  u32[4] :: base
let
  (P) = ((A[0] ^ A[1]) ^ A[2]);
  forall i in [0,3] {
    (E[i]) = ((P[((i + 3) % 4)] <<< 5) ^ (P[((i + 3) % 4)] <<< 14))
  };
  forall i in [0,2] {
    (R[i]) = (A[i] ^ E)
  }
tel

 node rho_west(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0]) = A[0];
  (R[1]) = (A[1] >>> 1);
  forall i in [0,3] {
    (R[2][i]) = (A[2][i] <<< 11)
  }
tel

 node iota(A :  u32[3][4] :: base,rc :  u32 :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0][0]) = (A[0][0] ^ rc);
  (R[0][1 .. 3]) = A[0][1 .. 3];
  (R[1,2]) = A[1,2]
tel

 node chi(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  B :  u32[3][4] :: base
let
  (B[0]) = ((~ A[1]) & A[2]);
  (B[1]) = ((~ A[2]) & A[0]);
  (B[2]) = ((~ A[0]) & A[1]);
  (R) = (A ^ B)
tel

 node rho_east(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0]) = A[0];
  forall i in [0,3] {
    (R[1][i]) = (A[1][i] <<< 1)
  };
  forall i in [0,3] {
    (R[2][i]) = (A[2][((i + 2) % 4)] <<< 8)
  }
tel

 node round(state :  u32[3][4] :: base,rc :  u32 :: base)
  returns stateR :  u32[3][4] :: base
vars

let
  (stateR) = rho_east(chi(iota(rho_west(theta(state)),rc)))
tel

 node xoodoo(input :  u32[3][4] :: base)
  returns output :  u32[3][4] :: base
vars
  state :  u32[13][3][4] :: base,
  RC :  u32[12] :: base
let
  (RC) = (88,56,960,208,288,20,96,44,896,240,416,18);
  (state[0]) = input;
  forall i in [0,11] {
    (state[(i + 1)]) = round(state[i],RC[i])
  };
  (output) = state[12]
tel

*/
 