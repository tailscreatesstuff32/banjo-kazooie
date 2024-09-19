#include <ultra64.h>
#include "functions.h"
#include "variables.h"

extern void func_802BE720(void);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8  unk1C;
    // u8 pad1D[3];
}Struct_core2_33F90_0;

void func_802BB200(void);
void func_802BB22C(void);
void func_802BB318(s32 arg0);
void func_802BB360(s32 arg0, f32 arg1);
void func_802BB3AC(s32 arg0, f32 arg1);

/* .data */
extern s32  D_80364E00 = 0;
extern s32  D_80364E04 = -1;
s16 D_80364E08[] = {   0,            -1,   0,     1, 0x13,    0,                       -1, 0x32};
s16 D_80364E18[] = { 0xF,            -1, 0xF,     2, 0x1B,    3,                       -1, 0x2A};
s16 D_80364E28[] = { 0x3,            -1, 0xF,     4, 0x20,    5,                       -1, 0x37};
s16 D_80364E38[] = { 0x9,    6, 0x9, -1, 0x14,    7,                                   -1, 0x2E};
s16 D_80364E48[] = {   0,    9,   0, -1,                                               -1, 0x32}; 
s16 D_80364E54[] = {   4,  0xE,   4, -1,                                               -1, 0x1E};
s16 D_80364E60[] = {   4,  0xF,   4, -1,                                               -1, 0x1E};
s16 D_80364E6C[] = {   4, 0x10,   4, -1,                                               -1, 0x1E};
s16 D_80364E78[] = {   4, 0x11,   4, -1,                                               -1, 0x1E};
s16 D_80364E84[] = { 0xC,  0xF, 0xC, -1, 0x28, 0x12,                                   -1, 0x3C}; 
s16 D_80364E94[] = {   0, 0x10,   0, -1, 0x1C, 0x11,                                   -1, 0x32};
s16 D_80364EA4[] = {   0,    4,   0, -1,                                               -1, 0x5A};
s16 D_80364EB0[] = {   8,    0,   0, -1,                                               -1, 0x32};
s16 D_80364EBC[] = {   0,    1,   0, -1,                                               -1, 0x28};
s16 D_80364EC8[] = {   0, 0x13,   0, -1,                                               -1, 0x1E};
s16 D_80364ED4[] = {   0, 0x14,   0, -1,                                               -1, 0x1E};
s16 D_80364EE0[] = {   0, 0x15,   0, -1,                                               -1, 0x1E};
s16 D_80364EEC[] = {   0,            -1,    0,    2,                                   -1, 0x2D};
s16 D_80364EF8[] = {   0,            -1,    0,    0,                                   -1, 0x2D};
s16 D_80364F04[] = {   0,            -1,    0, 0x18,                                   -1, 0x19};
s16 D_80364F10[] = { 0xB, 0x13, 0xB, -1,                                               -1, 0x22};
s16 D_80364F1C[] = {   8,    9,   8, -1,                                               -1, 0x22};
s16 D_80364F28[] = {   8,  0xA,   8, -1,                                               -1, 0x22};
s16 D_80364F34[] = {   8,  0xB,   8, -1,                                               -1, 0x22};
s16 D_80364F40[] = {   8,  0xC,   8, -1,                                               -1, 0x22};
s16 D_80364F4C[] = {   0,  0xC,   0, -1,                                               -1, 0x28};
s16 D_80364F58[] = {   0,            -1,    0,    8,                                   -1, 0x23};
s16 D_80364F64[] = { -1, 1};    
s16 D_80364F68[] = {   0,            -1,    0,  0xA,                                   -1, 0x1A};
s16 D_80364F74[] = {   8,  0xE,   0, -1,                                               -1, 0x32};
s16 D_80364F80[] = {   0,  0xF,   0, -1,                                               -1, 0x28};
s16 D_80364F8C[] = {   0,  0xD,   0, -1,                                               -1, 0x28};
s16 D_80364F98[] = {0x50,    4,   0, -1,                                               -1, 0x78};
s16 D_80364FA4[] = {   8,  0xF,   0, -1,                                               -1, 0x32};
s16 D_80364FB0[] = {   0, 0x10,   0, -1,                                               -1, 0x28};
s16 D_80364FBC[] = {   0, 0x11,   0, -1,                                               -1, 0x1E};
s16 D_80364FC8[] = { -1, 1};    
s16 D_80364FCC[] = {   0,            -1,    0,    1,                                   -1, 0x28};
s16 D_80364FD8[] = {   0,            -1,    0,    0,                                   -4, 0x28};
s16 D_80364FE4[] = {   0,            -1,    0,    0,                                   -4, 0x28};
s16 D_80364FF0[] = {   0,            -1,    0,    0,    8,    1,                       -4, 0x19};
s16 D_80365000[] = {   0,            -1,    0,    0,                                   -4, 0x28};
s16 D_8036500C[] = {   0,            -1,    0,    0,  0xB,    1,                       -1, 0x2D};
s16 D_8036501C[] = {   0,            -1,    0,    3, 0x14,    2,                       -1, 0x2D};
s16 D_8036502C[] = {   0,            -1,    0,    4, 0x12,    5,                       -1, 0x29};
s16 D_8036503C[] = {   0,            -1,    0,    0,                                   -4, 0x1E};
s16 D_80365048[] = {   0,            -1,    0,    2, 0x23,    1, 0x46,             -6, -1, 0x46};
s16 D_8036505C[] = {   0,            -1,    0,    1, 0x1A,                         -6, -1, 0x1A};
s16 D_8036506C[] = {   0,            -1,    0,  0xC,  0xD,  0xD, 0x20,  0x3, 0x34, -6, -1, 0x39};
s16 D_80365084[] = {   0,            -1,    0,    0, 0x13,    1, 0x30,  0xD,           -4, 0x53};
s16 D_80365098[] = {   0,            -1,    0,    6,  0xD,    7, 0x20, 0x14,           -4, 0x39};
s16 D_803650AC[] = {   0,            -1,    0,    2,  0xD,    3, 0x20,  0xB,           -4, 0x39};
s16 D_803650C0[] = {   0,            -1,    0,    0,  0xD,    1, 0x20,  0xC,           -4, 0x39};
s16 D_803650D4[] = {   0,            -1,    0,    3,  0xD,    4, 0x20, 0x13,           -4, 0x39};
s16 D_803650E8[] = {   0,            -1,    0,    0,  0xD,    1, 0x20,  0x4,           -4, 0x39};
s16 D_803650FC[] = {   0,            -1,    0,    0,  0xD,    1, 0x20,  0xD,           -4, 0x41};
s16 D_80365110[] = {   0,            -1,    0,    3,  0xD,    4, 0x20, 0x20,           -4, 0x39};
s16 D_80365124[] = {   0,            -1,    0,    2,  0xF,    3,                       -4, 0x28};
s16 D_80365134[] = {   0,            -1,    0,    5,  0xC,    6,                       -4, 0x21};
s16 D_80365144[] = {   0,            -1,    0,    0,  0xC,    1,                       -4, 0x21};
s16 D_80365154[] = {   0,            -1,    0,    0, 0x2D,                         -6, -1, 0x2D};
s16 D_80365164[] = {   0,            -1,    0,    1,                                   -4, 0x2D};
s16 D_80365170[] = {   0,            -1,    0,    2,                                   -4, 0x2D};
s16 D_8036517C[] = {   0,            -1,    0,    3,                                   -4, 0x2D};
s16 D_80365188[] = {   0,            -1,    0,    6,  0xD, 0x10, 0x32,             -6, -1, 0x32};
s16 D_8036519C[] = {-1, 1};
s16 D_803651A0[] = {-1, 1};
s16 D_803651A4[] = {-1, 1};
s16 D_803651A8[] = {-1, 1};
s16 D_803651AC[] = {-1, 1};
s16 D_803651B0[] = {-1, 1};
s16 D_803651B4[] = {-1, 1};
s16 D_803651B8[] = {-1, 1};
s16 D_803651BC[] = {-1, 1};
s16 D_803651C0[] = {-1, 1};
s16 D_803651C4[] = {-1, 1};
s16 D_803651C8[] = {-1, 1};
s16 D_803651CC[] = {-1, 1};
s16 D_803651D0[] = {-1, 1};
s16 D_803651D4[] = {-1, 1};
s16 D_803651D8[] = {-1, 1};
s16 D_803651DC[] = {-1, 1};
s16 D_803651E0[] = {-1, 1};
s16 D_803651E4[] = {-1, 1};
s16 D_803651E8[] = {-1, 1};
s16 D_803651EC[] = {-1, 1};
s16 D_803651F0[] = {-1, 1};
s16 D_803651F4[] = {-1, 1};
s16 D_803651F8[] = {-1, 1};
s16 D_803651FC[] = {-1, 1};
s16 D_80365200[] = {-1, 0};
s16 D_80365204[] = {-1, 0};
s16 D_80365208[] = {-1, 0};
s16 D_8036520C[] = {-1, 0};
s16 D_80365210[] = {-1, 0};
s16 D_80365214[] = {-1, 0};
s16 D_80365218[] = {-1, 0};
s16 D_8036521C[] = {-1, 0};
s16 D_80365220[] = {   0,            -1,    0,    4,                                   -4, 0x17};
s16 D_8036522C[] = {   0,            -1,    0, 0x1E,                                   -4, 0x17};
s16 D_80365238[] = {   0,            -1,    0, 0x1F,                                   -4, 0x17};
s16 D_80365244[] = {   0,            -1,    0,  0xF,                                   -4, 0x17};
s16 D_80365250[] = {   0,            -1,    0,    6,                                   -4, 0x17};
s16 D_8036525C[] = {   0,            -1,    0,  0xA,                                   -4, 0x17};
s16 D_80365268[] = {   0,            -1,    0,  0xD,                                   -4, 0x17};
s16 D_80365274[] = {   0,            -1,                                               -4, 0x17};
s16 D_8036527C[] = {   0,            -1,                                               -1, 0x23};
s16 D_80365284[] = {   0,            -1,                                               -1, 0x23};
s16 D_8036528C[] = {   0,            -1,                                               -1, 0x23};
s16 D_80365294[] = {   0,            -1,                                               -1, 0x23};
s16 D_8036529C[] = {   0,            -1,                                               -1, 0x23};
s16 D_803652A4[] = {   0,            -1,                                               -1, 0x23};
s16 D_803652AC[] = {   0,            -1,                                               -1, 0x23};
s16 D_803652B4[] = {   0,            -1,                                               -1, 0x23};
s16 D_803652BC[] = {   0,            -1,    0,  0xB,                                   -1, 0x1E};
s16 D_803652C8[] = {   0,            -1,    0,    1,                                   -1, 0x1E};
s16 D_803652D4[] = {   0,            -1,    0,    2,                                   -1, 0x1E};
s16 D_803652E0[] = {   0,            -1,    0,    5,                                   -1, 0x1E};
s16 D_803652EC[] = {   0,            -1,    0,    4,                                   -1, 0x1E};
s16 D_803652F8[] = {   0,            -1,    0,    4,                                   -1, 0x1E};
s16 D_80365304[] = {   0,            -1,                                               -1, 0x1E};
s16 D_8036530C[] = {   0,            -1,                                               -1, 0x1E};
s16 D_80365314[] = {   0,            -1,    0,   0xD,                                  -4,  0xD};
s16 D_80365320[] = {   0,            -1,    0,   0xE,                                  -1, 0x19};
s16 D_8036532C[] = {   0,            -1,    0,   0xB,  0x8,  0xC,                      -4, 0x20};
s16 D_8036533C[] = {   0,            -1,    0,     2,  0x8,  0x3,                      -4, 0x1E};
s16 D_8036534C[] = { 0xB,  0x1, 0xB, -1,                                               -1, 0x22};
s16 D_80365358[] = {   0,            -1,    0,     0,  0xF,    1, 0x1E,            -6, -1, 0x1E};
s16 D_8036536C[] = {   0,            -1,    8,  0x1A,                                  -1, 0x1E};
s16 D_80365378[] = {   0,            -1,    0,     4, 0x1E,                        -6, -1, 0x1E};
s16 D_80365388[] = {   0,    3,   5,  4,                                               -1, 0x32};
s16 D_80365394[] = {   0,            -1,    0,     1,                                  -4, 0x1E};
s16 D_803653A0[] = {   0,            -1,    0,     1,                                  -4, 0x1E};
s16 D_803653AC[] = {   0,            -1,    0,     2,                                  -4, 0x1E};
s16 D_803653B8[] = {   0,            -1,    0,  0x2E,                                  -4, 0x1E};
s16 D_803653C4[] = {   0,            -1,    0,  0x1B,                                  -4, 0x1E};
s16 D_803653D0[] = {   0,            -1,    0,     9,                                  -4, 0x1E}; 
s16 D_803653DC[] = {   0,            -1,    0,     5,                                  -4, 0x1E}; 
s16 D_803653E8[] = {-1, 0};
s16 D_803653EC[] = {-1, 0};
s16 D_803653F0[] = {   0,            -1,    0,     8,                                  -4, 0x17};
s16 D_803653FC[] = {   0,            -1,    0,     8,                                  -4, 0x17};
s16 D_80365408[] = {   0,            -1,                                               -1, 0x23};
s16 D_80365410[] = {   0,            -1,                                               -1, 0x23};
s16 D_80365418[] = {   0,            -1,    0,     6,                                  -1, 0x1E};
s16 D_80365424[] = {   0,            -1,    0,   0xC,                                  -1, 0x1E};
s16 D_80365430[] = {-1, 1};
s16 D_80365434[] = {-1, 1};
s16 D_80365438[] = {-1, 1};
s16 D_8036543C[] = {-1, 1};
s16 D_80365440[] = {-1, 1};
s16 D_80365444[] = {-1, 1};
s16 D_80365448[] = {-1, 1};
s16 D_8036544C[] = {-1, 1};
s16 D_80365450[] = {-1, 1};
s16 D_80365454[] = {-1, 1};
s16 D_80365458[] = {-1, 1};
s16 D_8036545C[] = {-1, 1};
s16 D_80365460[] = {-1, 1};
s16 D_80365464[] = {-1, 1};
s16 D_80365468[] = {-1, 1};
s16 D_8036546C[] = {-1, 1};
s16 D_80365470[] = {-1, 1};
s16 D_80365474[] = {-1, 1};
s16 D_80365478[] = {-1, 1};
s16 D_8036547C[] = {-1, 1};
s16 D_80365480[] = {-1, 1};
s16 D_80365484[] = {-1, 1};
s16 D_80365488[] = {-1, 1};
s16 D_8036548C[] = {-1, 1};
s16 D_80365490[] = {-1, 1};
s16 D_80365494[] = {-1, 1};
s16 D_80365498[] = {-1, 1};
s16 D_8036549C[] = {-1, 1};
s16 D_803654A0[] = {-1, 1};
s16 D_803654A4[] = {-1, 1};
s16 D_803654A8[] = {-1, 1};
s16 D_803654AC[] = {-1, 1};
s16 D_803654B0[] = {-1, 1};
s16 D_803654B4[] = {-1, 1};

s16 *D_803654B8[] = { 
    D_80364E08,
    D_80364E18,
    D_80364E28,
    D_80364E38, 
    D_80364E48,
    D_80364E54,
    D_80364E60,
    D_80364E6C, 
    D_80364E78,
    D_80364E84,
    D_80364E94,
    D_80364EA4, 
    D_80364EB0,
    D_80364EBC,
    D_80364EC8,
    D_80364ED4, 
    D_80364EE0,
    D_80364EEC,
    D_80364EF8,
    D_80364F04, 
    D_80364F10,
    D_80364F1C,
    D_80364F28,
    D_80364F34, 
    D_80364F40,
    D_80364F4C,
    D_80364F58,
    D_80364F64, 
    D_80364F68,
    D_80364F74,
    D_80364F80,
    D_80364F8C, 
    D_80364F98,
    D_80364FA4,
    D_80364FB0,
    D_80364FBC, 
    D_80364FC8,
    D_80364FCC,
    D_80364FD8,
    D_80364FE4, 
    D_80364FF0,
    D_80365000,
    D_8036500C,
    D_8036501C, 
    D_8036502C,
    D_8036503C,
    D_80365048,
    D_8036505C, 
    D_8036506C,
    D_80365084,
    D_80365098,
    D_803650AC, 
    D_803650C0,
    D_803650D4,
    D_803650E8,
    D_803650FC, 
    D_80365110,
    D_80365124,
    D_80365134,
    D_80365144, 
    D_80365154,
    D_80365164,
    D_80365170,
    D_8036517C, 
    D_80365188,
    D_8036519C,
    D_803651A0,
    D_803651A4, 
    D_803651A8,
    D_803651AC,
    D_803651B0,
    D_803651B4, 
    D_803651B8,
    D_803651BC,
    D_803651C0,
    D_803651C4, 
    D_803651C8,
    D_803651CC,
    D_803651D0,
    D_803651D4, 
    D_803651D8,
    D_803651DC,
    D_803651E0,
    D_803651E4, 
    D_803651E8,
    D_803651EC,
    D_803651F0,
    D_803651F4, 
    D_803651F8,
    D_803651FC,
    D_80365200,
    D_80365204, 
    D_80365208,
    D_8036520C,
    D_80365210,
    D_80365214, 
    D_80365218,
    D_8036521C,
    D_80365220,
    D_8036522C, 
    D_80365238,
    D_80365244,
    D_80365250,
    D_8036525C, 
    D_80365268,
    D_80365274,
    D_8036527C,
    D_80365284, 
    D_8036528C,
    D_80365294,
    D_8036529C,
    D_803652A4, 
    D_803652AC,
    D_803652B4,
    D_803652BC,
    D_803652C8, 
    D_803652D4,
    D_803652E0,
    D_803652EC,
    D_803652F8, 
    D_80365304,
    D_8036530C,
    D_80365314,
    D_80365320, 
    D_8036532C,
    D_8036533C,
    D_8036534C,
    D_80365358, 
    D_8036536C,
    D_80365378,
    D_80365388,
    D_80365394, 
    D_803653A0,
    D_803653AC,
    D_803653B8,
    D_803653C4, 
    D_803653D0,
    D_803653DC,
    D_803653E8,
    D_803653EC, 
    D_803653F0,
    D_803653FC,
    D_80365408,
    D_80365410, 
    D_80365418,
    D_80365424,
    D_80365430,
    D_80365434, 
    D_80365438,
    D_8036543C,
    D_80365440,
    D_80365444, 
    D_80365448,
    D_8036544C,
    D_80365450,
    D_80365454, 
    D_80365458,
    D_8036545C,
    D_80365460,
    D_80365464, 
    D_80365468,
    D_8036546C,
    D_80365470,
    D_80365474, 
    D_80365478,
    D_8036547C,
    D_80365480,
    D_80365484, 
    D_80365488,
    D_8036548C,
    D_80365490,
    D_80365494, 
    D_80365498,
    D_8036549C,
    D_803654A0,
    D_803654A4, 
    D_803654A8,
    D_803654AC,
    D_803654B0,
    D_803654B4 
};

/* .code */
void func_802BAF20(void){
    func_802BB200();
}

void func_802BAF40(void){
    if(D_80364E00 && timedFuncQueue_is_empty()){
        func_802BB200();
    }
}

void func_802BAF80(s32 arg0){
    func_802BE720();
}

f32  func_802BAFA0(s32 arg0, s32 arg1){
    return (f32)D_803654B8[arg0][arg1]/10.0;
}

void func_802BAFE4(s32 arg0) {
    f32 temp_f0;
    s32 phi_s1;
    s32 phi_s0;

    phi_s0 = 0;
    if (arg0 != D_80364E04) {
        D_80364E04 = arg0;
        func_802BB22C();
        D_80364E00 = 1;
        for(phi_s1 = 0; D_803654B8[arg0][phi_s1] != -1 && D_803654B8[arg0][phi_s1] != -4; phi_s1+=2){
            temp_f0 = func_802BAFA0(arg0, phi_s1);
            switch(D_803654B8[arg0][phi_s1 + 1]){
                case -5:
                    timedFunc_set_6(temp_f0, (GenFunction_6) func_802BAF80, NULL);
                    phi_s0++;
                    break;

                case -3:
                    func_80324E38(temp_f0, 1);
                    phi_s0++;
                    break;

                case -2:
                    func_80324E38(temp_f0, 2);
                    phi_s0++;
                    break;

                case -1:
                    func_80324E38(temp_f0, 3);
                    phi_s0++;
                    break;

                case -4:
                    func_80324E38(temp_f0, 4);
                    break;

                case -6:
                    func_80324E38(temp_f0, 4);
                    break;
                
                default:
                    timed_setStaticCameraToNode(temp_f0, D_803654B8[arg0][phi_s1 + 1]);
                    break;
            }
        }
        temp_f0 = func_802BAFA0(arg0, phi_s1 + 1);
        if (D_803654B8[arg0][phi_s1] == -4) {
            func_80324E38(temp_f0, 4);
        } else {
            timed_exitStaticCamera(temp_f0);
        }
        for(phi_s1 = 0; phi_s1 < phi_s0; phi_s1++){
            func_80324E38(temp_f0, 0);
        }
    }
}

void func_802BB200(void){
    if(D_80364E00){
        D_80364E00 = FALSE;
        D_80364E04 = -1;
    }
}

void func_802BB22C(void){
    if(D_80364E00){
        timedFuncQueue_flush();
        D_80364E00 = FALSE;
        D_80364E04 = -1;
    }
}

bool func_802BB270(void) {
    return BOOL(!D_80364E00);
}

s32 func_802BB294(void){
    return D_80364E04;
}
