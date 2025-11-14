#ifndef lampa_2_h
#define lampa_2_h

////Lampa_2 part 2 1 3
//const long Cue = 294;
const long Cue = 310;

int R_lo = 200; // 127
int G_lo = 150; // 100

int R_l1 = 180;  // 80
int G_l1 = 130;  // 70

int R_m1 = 140; // 140
int G_m1 = 110; // 110

int R_m2 = 80; // 180
int G_m2 = 70; // 130

int R_hi = 127; // 200
int G_hi = 100; // 150

//          part 1
int RList2[Cue] = {R_m1, R_l1, R_m1, R_lo, R_lo, R_l1, R_m1, R_l1, R_m1, R_l1,
                   R_m1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_l1, R_lo, R_m1, R_l1, R_m1, R_l1, R_m1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_l1, R_m1, R_l1, R_m1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo,

                   R_l1, R_m1, R_m2, R_hi, R_m1, R_m2, R_hi, R_m1, R_m2, R_lo,
                   R_lo, R_l1, R_m1, R_m2, R_m1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo,

                   R_m2, R_l1, R_m2, R_l1, R_m2, R_l1, R_m2, R_l1, R_m2, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_m1, R_l1, R_m1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo,

                   R_hi, R_l1, R_m2, R_hi, R_m1, R_m2, R_hi, R_m1, R_m2, R_hi,
                   R_m1, R_m2, R_hi, R_m1, R_m2, R_hi, R_m1, R_m2,

                   R_lo, R_lo, R_lo, R_lo, R_lo

};

int GList2[Cue] = {G_m1, G_l1, G_m1, G_lo, G_lo, G_l1, G_m1, G_l1, G_m1, G_l1,
                   G_m1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_l1, G_lo, G_m1, G_l1, G_m1, G_l1, G_m1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_l1, G_m1, G_l1, G_m1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo,

                   G_l1, G_m1, G_m2, G_hi, G_m1, G_m2, G_hi, G_m1, G_m2, G_lo,
                   G_lo, G_l1, G_m1, G_m2, G_m1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo,

                   G_m2, G_l1, G_m2, G_l1, G_m2, G_l1, G_m2, G_l1, G_m2, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_m1, G_l1, G_m1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo,

                   G_hi, G_l1, G_m2, G_hi, G_m1, G_m2, G_hi, G_m1, G_m2, G_hi,
                   G_m1, G_m2, G_hi, G_m1, G_m2, G_hi, G_m1, G_m2,

                   G_lo, G_lo, G_lo, G_lo, G_lo

};

//          part 2
int RList1[Cue] = {R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo,

                   R_hi, R_l1, R_m2, R_hi, R_lo, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_l1, R_lo, R_m1, R_lo, R_l1, R_l1, R_lo, R_m1, R_lo, R_l1,
                   R_l1, R_lo, R_l1, R_lo, R_m1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo,

                   R_l1, R_lo, R_l1, R_l1, R_lo, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo,

                   R_m2, R_l1, R_m2, R_l1, R_lo, R_lo, R_hi, R_m1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo,

                   R_l1, R_lo, R_l1, R_lo, R_l1, R_l1, R_lo, R_l1,
                   R_l1, R_lo, R_l1, R_lo, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo

};

int GList1[Cue] = {G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo,

                   G_hi, G_l1, G_m2, G_hi, G_lo, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_l1, G_lo, G_m1, G_lo, G_l1, G_l1, G_lo, G_m1, G_lo, G_l1,
                   G_l1, G_lo, G_l1, G_lo, G_m1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo,

                   G_l1, G_lo, G_l1, G_l1, G_lo, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo,

                   G_m2, G_l1, G_m2, G_l1, G_lo, G_lo, G_hi, G_m1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo,

                   G_l1, G_lo, G_l1, G_lo, G_l1, G_l1, G_lo, G_l1,
                   G_l1, G_lo, G_l1, G_lo, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo

};

// part 3
int RList3[Cue] = {R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_m2, R_l1, R_hi, R_l1, R_m2, R_hi, R_m2, R_m2, R_m1, R_m1,
                   R_l1, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_hi, R_hi, R_l1, R_m2, R_m1, R_l1, R_m2, R_m1, R_l1, R_m2,
                   R_lo, R_l1, R_lo,

                   R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_hi, R_hi, R_l1, R_m2, R_m1, R_l1, R_m2, R_m1, R_l1, R_m2,
                   R_lo, R_l1, R_lo, R_l1,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_m2, R_lo, R_m1, R_lo, R_m2, R_lo, R_m1, R_lo, R_m2,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo,

                   R_hi, R_l1, R_m2, R_l1, R_m1, R_hi, R_l1, R_m2, R_l1, R_m1,
                   R_hi,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,

                   R_hi, R_l1, R_hi, R_l1, R_hi, R_l1, R_m2, R_hi, R_l1, R_m2,
                   R_hi, R_m2, R_hi, R_lo, R_hi,

                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo,
                   R_lo, R_lo, R_lo, R_lo, R_lo, R_lo, R_lo

};

int GList3[Cue] = {G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_m2, G_l1, G_hi, G_l1, G_m2, G_hi, G_m2, G_m2, G_m1, G_m1,
                   G_l1, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_hi, G_hi, G_l1, G_m2, G_m1, G_l1, G_m2, G_m1, G_l1, G_m2,
                   G_lo, G_l1, G_lo,

                   G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_hi, G_hi, G_l1, G_m2, G_m1, G_l1, G_m2, G_m1, G_l1, G_m2,
                   G_lo, G_l1, G_lo, G_l1,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_m2, G_lo, G_m1, G_lo, G_m2, G_lo, G_m1, G_lo, G_m2,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo,

                   G_hi, G_l1, G_m2, G_l1, G_m1, G_hi, G_l1, G_m2, G_l1, G_m1,
                   G_hi,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,

                   G_hi, G_l1, G_hi, G_l1, G_hi, G_l1, G_m2, G_hi, G_l1, G_m2,
                   G_hi, G_m2, G_hi, G_lo, G_hi,

                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo,
                   G_lo, G_lo, G_lo, G_lo, G_lo, G_lo, G_lo

};

#endif