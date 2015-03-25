#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R	   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R	  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
    {0  , 4158},
    {2  , 4125},
    {3  , 4098},
    {5  , 4083},
    {7  , 4060},
    {9  , 4030},
    {10 , 4006},
    {12 , 3989},
    {14 , 3977},
    {16 , 3970},
    {17 , 3961},
    {19 , 3953},
    {21 , 3948},
    {23 , 3938},
    {24 , 3929},
    {26 , 3919},
    {28 , 3908},
    {29 , 3897},
    {31 , 3886},
    {33 , 3874},
    {35 , 3865},
    {36 , 3855},
    {38 , 3847},
    {40 , 3839},
    {42 , 3832},
    {43 , 3827},
    {45 , 3822},
    {47 , 3815},
    {49 , 3811},
    {50 , 3806},
    {52 , 3802},
    {54 , 3798},
    {56 , 3794},
    {57 , 3792},
    {59 , 3788},
    {61 , 3785},
    {62 , 3784},
    {64 , 3781},
    {66 , 3780},
    {68 , 3778},
    {69 , 3775},
    {71 , 3772},
    {73 , 3768},
    {75 , 3766},
    {76 , 3760},
    {78 , 3756},
    {80 , 3752},
    {82 , 3747},
    {83 , 3739},
    {85 , 3733},
    {87 , 3726},
    {88 , 3718},
    {90 , 3712},
    {92 , 3706},
    {94 , 3698},
    {95 , 3688},
    {97 , 3665},
    {99 , 3625},
    {100, 3591},
    {100, 3562},
    {100, 3539},
    {100, 3519},
    {100, 3500},
    {100, 3488},
    {100, 3475},
    {100, 3466},
    {100, 3457},
    {100, 3451},
    {100, 3443},
    {100, 3439},
    {100, 3434},
    {100, 3430},
    {100, 3427},
    {100, 3423},
    {100, 3420}     
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
    {0  , 4168},
    {2  , 4142},
    {3  , 4123},
    {5  , 4109},
    {6  , 4095},
    {8  , 4089},
    {9  , 4079},
    {11 , 4060},
    {13 , 4035},
    {14 , 4012},
    {16 , 3996},
    {17 , 3986},
    {19 , 3976},
    {20 , 3969},
    {22 , 3962},
    {24 , 3955},
    {25 , 3949},
    {27 , 3940},
    {28 , 3929},
    {30 , 3919},
    {32 , 3908},
    {33 , 3896},
    {35 , 3884},
    {36 , 3871},
    {38 , 3861},
    {39 , 3853},
    {41 , 3844},
    {43 , 3838},
    {44 , 3833},
    {46 , 3826},
    {47 , 3821},
    {49 , 3815},
    {50 , 3810},
    {52 , 3806},
    {54 , 3803},
    {55 , 3798},
    {57 , 3795},
    {58 , 3792},
    {60 , 3789},
    {61 , 3787},
    {63 , 3785},
    {65 , 3782},
    {66 , 3780},
    {68 , 3778},
    {69 , 3774},
    {71 , 3771},
    {72 , 3768},
    {74 , 3765},
    {76 , 3761},
    {77 , 3757},
    {79 , 3752},
    {80 , 3745},
    {82 , 3740},
    {84 , 3733},
    {85 , 3726},
    {87 , 3717},
    {88 , 3708},
    {90 , 3705},
    {91 , 3701},
    {93 , 3697},
    {95 , 3682},
    {96 , 3641},
    {98 , 3573},
    {99 , 3471},
    {100, 3406},
    {100, 3374},
    {100, 3356},
    {100, 3344},
    {100, 3337},
    {100, 3331},
    {100, 3328},
    {100, 3323},
    {100, 3319},
    {100, 3318},
    {100, 3317}  
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
    {0  , 4185},
    {1  , 4169},
    {3  , 4153},
    {4  , 4138},
    {6  , 4123},
    {7  , 4109},
    {9  , 4096},
    {10 , 4085},
    {12 , 4076},
    {13 , 4065},
    {15 , 4049},
    {16 , 4029},
    {18 , 4013},
    {19 , 3999},
    {21 , 3990},
    {22 , 3981},
    {24 , 3975},
    {25 , 3966},
    {27 , 3957},
    {28 , 3949},
    {30 , 3939},
    {31 , 3929},
    {33 , 3919},
    {34 , 3909},
    {36 , 3895},
    {37 , 3881},
    {39 , 3869},
    {40 , 3859},
    {42 , 3851},
    {43 , 3842},
    {45 , 3836},
    {46 , 3830},
    {48 , 3824},
    {49 , 3820},
    {51 , 3814},
    {52 , 3809},
    {54 , 3805},
    {55 , 3802},
    {57 , 3798},
    {58 , 3795},
    {60 , 3791},
    {61 , 3788},
    {63 , 3786},
    {64 , 3782},
    {66 , 3781},
    {67 , 3777},
    {69 , 3771},
    {70 , 3766},
    {72 , 3760},
    {73 , 3754},
    {75 , 3749},
    {76 , 3745},
    {78 , 3742},
    {79 , 3737},
    {81 , 3733},
    {82 , 3723},
    {84 , 3717},
    {85 , 3713},
    {87 , 3703},
    {88 , 3694},
    {90 , 3692},
    {91 , 3688},
    {93 , 3683},
    {94 , 3662},
    {96 , 3612},
    {97 , 3540},
    {99 , 3433},
    {100, 3298},
    {100, 3279},
    {100, 3270},
    {100, 3263},
    {100, 3262},
    {100, 3260},
    {100, 3258},
    {100, 3258}      
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{

{0  , 4189},
{1  , 4172},
{3  , 4156},
{4  , 4141},
{6  , 4128},
{7  , 4112},
{9  , 4099},
{10 , 4085},
{12 , 4071},
{13 , 4059},
{15 , 4049},
{16 , 4036},
{18 , 4023},
{19 , 4010},
{21 , 4001},
{22 , 3989},
{24 , 3978},
{25 , 3969},
{27 , 3960},
{28 , 3950},
{30 , 3940},
{31 , 3930},
{33 , 3920},
{34 , 3912},
{36 , 3900},
{37 , 3887},
{39 , 3872},
{40 , 3862},
{42 , 3852},
{43 , 3844},
{45 , 3837},
{46 , 3831},
{48 , 3826},
{49 , 3818},
{51 , 3815},
{52 , 3810},
{54 , 3805},
{55 , 3800},
{57 , 3796},
{58 , 3793},
{60 , 3790},
{61 , 3786},
{63 , 3782},
{64 , 3780},
{66 , 3776},
{67 , 3772},
{69 , 3763},
{70 , 3753},
{72 , 3746},
{73 , 3740},
{75 , 3734},
{76 , 3729},
{78 , 3725},
{79 , 3721},
{81 , 3715},
{82 , 3710},
{84 , 3703},
{85 , 3697},
{87 , 3687},
{88 , 3680},
{90 , 3676},
{91 , 3674},
{93 , 3669},
{94 , 3647},
{96 , 3597},
{97 , 3523},
{99 , 3417},
{100, 3275},
{100, 3261},
{100, 3257},
{100, 3254},
{100, 3254},
{100, 3251},
{100, 3250},
{100, 3251}
       
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{100  , 4182},         
	{100  , 4162},         
	{100  , 4144},         
	{100  , 4128},         
	{100  , 4113},         
	{100  , 4100},         
	{102  , 4087},         
	{100  , 4073},         
	{103  , 4062},         
	{102  , 4049},         
	{103  , 4038},         
	{102  , 4026},         
	{105  , 4016},         
	{105  , 4005},         
	{105  , 3995},         
	{108  , 3986},         
	{110  , 3977},         
	{112  , 3967},         
	{113  , 3959},         
	{115  , 3950},         
	{115  , 3941},         
	{118  , 3933},         
	{122  , 3926},         
	{122  , 3918},         
	{123  , 3910},         
	{125  , 3902},         
	{123  , 3893},         
	{122  , 3884},         
	{120  , 3875},         
	{118  , 3866},         
	{115  , 3857},         
	{112  , 3848},         
	{110  , 3840},         
	{108  , 3833},         
	{105  , 3825},         
	{103  , 3819},         
	{103  , 3813},         
	{103  , 3808},         
	{103  , 3803},         
	{103  , 3799},         
	{103  , 3795},         
	{103  , 3791},         
	{102  , 3787},         
	{103  , 3785},         
	{103  , 3782},         
	{103  , 3779},         
	{105  , 3777},         
	{103  , 3775},         
	{105  , 3773},         
	{103  , 3771},         
	{103  , 3769},         
	{105  , 3768},         
	{105  , 3766},         
	{102  , 3762},         
	{103  , 3760},         
	{100  , 3755},         
	{100  , 3750},         
	{97  , 3743},         
	{98  , 3738},         
	{100  , 3732},         
	{100  , 3724},         
	{100  , 3714},         
	{98  , 3704},         
	{98  , 3691},         
	{100  , 3684},         
	{98  , 3681},         
	{103  , 3679},         
	{105  , 3676},         
	{112  , 3671},         
	{117  , 3659},         
	{108  , 3612},         
	{115  , 3536},         
	{125  , 3421},         
	{143  , 3286},         
	{118  , 3269},         
	{105  , 3262},         
	{103  , 3260},         
	{98  , 3258},         
	{98  , 3257},         
	{95  , 3256},         
	{97  , 3256},         
	{93  , 3254},         
	{92  , 3253},         
	{92  , 3253},         
	{90  , 3252},         
	{90  , 3252}         
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{100  , 4182},         
	{100  , 4162},         
	{100  , 4144},         
	{100  , 4128},         
	{100  , 4113},         
	{100  , 4100},         
	{102  , 4087},         
	{100  , 4073},         
	{103  , 4062},         
	{102  , 4049},         
	{103  , 4038},         
	{102  , 4026},         
	{105  , 4016},         
	{105  , 4005},         
	{105  , 3995},         
	{108  , 3986},         
	{110  , 3977},         
	{112  , 3967},         
	{113  , 3959},         
	{115  , 3950},         
	{115  , 3941},         
	{118  , 3933},         
	{122  , 3926},         
	{122  , 3918},         
	{123  , 3910},         
	{125  , 3902},         
	{123  , 3893},         
	{122  , 3884},         
	{120  , 3875},         
	{118  , 3866},         
	{115  , 3857},         
	{112  , 3848},         
	{110  , 3840},         
	{108  , 3833},         
	{105  , 3825},         
	{103  , 3819},         
	{103  , 3813},         
	{103  , 3808},         
	{103  , 3803},         
	{103  , 3799},         
	{103  , 3795},         
	{103  , 3791},         
	{102  , 3787},         
	{103  , 3785},         
	{103  , 3782},         
	{103  , 3779},         
	{105  , 3777},         
	{103  , 3775},         
	{105  , 3773},         
	{103  , 3771},         
	{103  , 3769},         
	{105  , 3768},         
	{105  , 3766},         
	{102  , 3762},         
	{103  , 3760},         
	{100  , 3755},         
	{100  , 3750},         
	{97  , 3743},         
	{98  , 3738},         
	{100  , 3732},         
	{100  , 3724},         
	{100  , 3714},         
	{98  , 3704},         
	{98  , 3691},         
	{100  , 3684},         
	{98  , 3681},         
	{103  , 3679},         
	{105  , 3676},         
	{112  , 3671},         
	{117  , 3659},         
	{108  , 3612},         
	{115  , 3536},         
	{125  , 3421},         
	{143  , 3286},         
	{118  , 3269},         
	{105  , 3262},         
	{103  , 3260},         
	{98  , 3258},         
	{98  , 3257},         
	{95  , 3256},         
	{97  , 3256},         
	{93  , 3254},         
	{92  , 3253},         
	{92  , 3253},         
	{90  , 3252},         
	{90  , 3252}         
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{100  , 4182},         
	{100  , 4162},         
	{100  , 4144},         
	{100  , 4128},         
	{100  , 4113},         
	{100  , 4100},         
	{102  , 4087},         
	{100  , 4073},         
	{103  , 4062},         
	{102  , 4049},         
	{103  , 4038},         
	{102  , 4026},         
	{105  , 4016},         
	{105  , 4005},         
	{105  , 3995},         
	{108  , 3986},         
	{110  , 3977},         
	{112  , 3967},         
	{113  , 3959},         
	{115  , 3950},         
	{115  , 3941},         
	{118  , 3933},         
	{122  , 3926},         
	{122  , 3918},         
	{123  , 3910},         
	{125  , 3902},         
	{123  , 3893},         
	{122  , 3884},         
	{120  , 3875},         
	{118  , 3866},         
	{115  , 3857},         
	{112  , 3848},         
	{110  , 3840},         
	{108  , 3833},         
	{105  , 3825},         
	{103  , 3819},         
	{103  , 3813},         
	{103  , 3808},         
	{103  , 3803},         
	{103  , 3799},         
	{103  , 3795},         
	{103  , 3791},         
	{102  , 3787},         
	{103  , 3785},         
	{103  , 3782},         
	{103  , 3779},         
	{105  , 3777},         
	{103  , 3775},         
	{105  , 3773},         
	{103  , 3771},         
	{103  , 3769},         
	{105  , 3768},         
	{105  , 3766},         
	{102  , 3762},         
	{103  , 3760},         
	{100  , 3755},         
	{100  , 3750},         
	{97  , 3743},         
	{98  , 3738},         
	{100  , 3732},         
	{100  , 3724},         
	{100  , 3714},         
	{98  , 3704},         
	{98  , 3691},         
	{100  , 3684},         
	{98  , 3681},         
	{103  , 3679},         
	{105  , 3676},         
	{112  , 3671},         
	{117  , 3659},         
	{108  , 3612},         
	{115  , 3536},         
	{125  , 3421},         
	{143  , 3286},         
	{118  , 3269},         
	{105  , 3262},         
	{103  , 3260},         
	{98  , 3258},         
	{98  , 3257},         
	{95  , 3256},         
	{97  , 3256},         
	{93  , 3254},         
	{92  , 3253},         
	{92  , 3253},         
	{90  , 3252},         
	{90  , 3252}         
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{100  , 4182},         
	{100  , 4162},         
	{100  , 4144},         
	{100  , 4128},         
	{100  , 4113},         
	{100  , 4100},         
	{102  , 4087},         
	{100  , 4073},         
	{103  , 4062},         
	{102  , 4049},         
	{103  , 4038},         
	{102  , 4026},         
	{105  , 4016},         
	{105  , 4005},         
	{105  , 3995},         
	{108  , 3986},         
	{110  , 3977},         
	{112  , 3967},         
	{113  , 3959},         
	{115  , 3950},         
	{115  , 3941},         
	{118  , 3933},         
	{122  , 3926},         
	{122  , 3918},         
	{123  , 3910},         
	{125  , 3902},         
	{123  , 3893},         
	{122  , 3884},         
	{120  , 3875},         
	{118  , 3866},         
	{115  , 3857},         
	{112  , 3848},         
	{110  , 3840},         
	{108  , 3833},         
	{105  , 3825},         
	{103  , 3819},         
	{103  , 3813},         
	{103  , 3808},         
	{103  , 3803},         
	{103  , 3799},         
	{103  , 3795},         
	{103  , 3791},         
	{102  , 3787},         
	{103  , 3785},         
	{103  , 3782},         
	{103  , 3779},         
	{105  , 3777},         
	{103  , 3775},         
	{105  , 3773},         
	{103  , 3771},         
	{103  , 3769},         
	{105  , 3768},         
	{105  , 3766},         
	{102  , 3762},         
	{103  , 3760},         
	{100  , 3755},         
	{100  , 3750},         
	{97  , 3743},         
	{98  , 3738},         
	{100  , 3732},         
	{100  , 3724},         
	{100  , 3714},         
	{98  , 3704},         
	{98  , 3691},         
	{100  , 3684},         
	{98  , 3681},         
	{103  , 3679},         
	{105  , 3676},         
	{112  , 3671},         
	{117  , 3659},         
	{108  , 3612},         
	{115  , 3536},         
	{125  , 3421},         
	{143  , 3286},         
	{118  , 3269},         
	{105  , 3262},         
	{103  , 3260},         
	{98  , 3258},         
	{98  , 3257},         
	{95  , 3256},         
	{97  , 3256},         
	{93  , 3254},         
	{92  , 3253},         
	{92  , 3253},         
	{90  , 3252},         
	{90  , 3252}         
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
