#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_grp_fu_28158_p00() {
    grp_fu_28158_p00 = esl_zext<88,82>(p_Val2_2818_reg_82703.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28158_p1() {
    grp_fu_28158_p1 =  (sc_lv<6>) (grp_fu_28158_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28158_p10() {
    grp_fu_28158_p10 = esl_zext<88,6>(p_Val2_7030_reg_82709.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28248_p0() {
    grp_fu_28248_p0 =  (sc_lv<77>) (grp_fu_28248_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28248_p00() {
    grp_fu_28248_p00 = esl_zext<83,77>(p_Val2_2824_reg_82740.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28248_p1() {
    grp_fu_28248_p1 =  (sc_lv<6>) (grp_fu_28248_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28248_p10() {
    grp_fu_28248_p10 = esl_zext<83,6>(p_Val2_7031_reg_82746.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28257_p0() {
    grp_fu_28257_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_28395_p0() {
    grp_fu_28395_p0 =  (sc_lv<40>) (OP1_V_1353_cast_fu_28392_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28395_p1() {
    grp_fu_28395_p1 =  (sc_lv<40>) (OP1_V_1353_cast_fu_28392_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28651_p0() {
    grp_fu_28651_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_28762_p0() {
    grp_fu_28762_p0 =  (sc_lv<43>) (grp_fu_28762_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28762_p00() {
    grp_fu_28762_p00 = esl_zext<79,43>(tmp_4061_fu_28746_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28762_p1() {
    grp_fu_28762_p1 =  (sc_lv<36>) (grp_fu_28762_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28762_p10() {
    grp_fu_28762_p10 = esl_zext<79,36>(r_V_391_reg_82995.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28819_p0() {
    grp_fu_28819_p0 =  (sc_lv<49>) (grp_fu_28819_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28819_p00() {
    grp_fu_28819_p00 = esl_zext<93,49>(tmp_4066_fu_28803_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28819_p1() {
    grp_fu_28819_p1 =  (sc_lv<44>) (grp_fu_28819_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28819_p10() {
    grp_fu_28819_p10 = esl_zext<93,44>(p_Val2_2846_reg_83026.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28889_p0() {
    grp_fu_28889_p0 =  (sc_lv<50>) (grp_fu_28889_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28889_p00() {
    grp_fu_28889_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28889_p1() {
    grp_fu_28889_p1 =  (sc_lv<50>) (grp_fu_28889_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_28889_p10() {
    grp_fu_28889_p10 = esl_zext<100,50>(tmp_4069_reg_83052.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29218_p0() {
    grp_fu_29218_p0 =  (sc_lv<6>) (grp_fu_29218_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29218_p00() {
    grp_fu_29218_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29218_p1() {
    grp_fu_29218_p1 =  (sc_lv<54>) (grp_fu_29218_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29218_p10() {
    grp_fu_29218_p10 = esl_zext<60,54>(b_frac_V_114_reg_83215.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29314_p0() {
    grp_fu_29314_p0 =  (sc_lv<4>) (grp_fu_29314_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29314_p00() {
    grp_fu_29314_p00 = esl_zext<75,4>(p_Val2_7074_reg_83243.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29314_p1() {
    grp_fu_29314_p1 =  (sc_lv<71>) (grp_fu_29314_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29314_p10() {
    grp_fu_29314_p10 = esl_zext<75,71>(p_Val2_2924_fu_29238_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29396_p0() {
    grp_fu_29396_p0 =  (sc_lv<6>) (grp_fu_29396_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29396_p00() {
    grp_fu_29396_p00 = esl_zext<79,6>(p_Val2_7075_reg_83275.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29396_p1() {
    grp_fu_29396_p1 =  (sc_lv<73>) (grp_fu_29396_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29396_p10() {
    grp_fu_29396_p10 = esl_zext<79,73>(p_Val2_2930_reg_83269.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29482_p0() {
    grp_fu_29482_p0 =  (sc_lv<6>) (grp_fu_29482_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29482_p00() {
    grp_fu_29482_p00 = esl_zext<89,6>(p_Val2_7076_reg_83316.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29482_p1() {
    grp_fu_29482_p1 =  (sc_lv<83>) (grp_fu_29482_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29482_p10() {
    grp_fu_29482_p10 = esl_zext<89,83>(p_Val2_5788_fu_29440_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29572_p0() {
    grp_fu_29572_p0 =  (sc_lv<6>) (grp_fu_29572_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29572_p00() {
    grp_fu_29572_p00 = esl_zext<98,6>(p_Val2_7077_reg_83353.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29572_p1() {
    grp_fu_29572_p1 =  (sc_lv<92>) (grp_fu_29572_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29572_p10() {
    grp_fu_29572_p10 = esl_zext<98,92>(p_Val2_2941_reg_83347.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29662_p0() {
    grp_fu_29662_p0 =  (sc_lv<6>) (grp_fu_29662_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29662_p00() {
    grp_fu_29662_p00 = esl_zext<93,6>(p_Val2_7078_reg_83390.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29662_p1() {
    grp_fu_29662_p1 =  (sc_lv<87>) (grp_fu_29662_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29662_p10() {
    grp_fu_29662_p10 = esl_zext<93,87>(p_Val2_2947_reg_83384.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29752_p0() {
    grp_fu_29752_p0 =  (sc_lv<6>) (grp_fu_29752_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29752_p00() {
    grp_fu_29752_p00 = esl_zext<88,6>(p_Val2_7079_reg_83427.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29752_p1() {
    grp_fu_29752_p1 =  (sc_lv<82>) (grp_fu_29752_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29752_p10() {
    grp_fu_29752_p10 = esl_zext<88,82>(p_Val2_2953_reg_83421.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29842_p0() {
    grp_fu_29842_p0 =  (sc_lv<6>) (grp_fu_29842_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29842_p00() {
    grp_fu_29842_p00 = esl_zext<83,6>(p_Val2_7080_reg_83464.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29842_p1() {
    grp_fu_29842_p1 =  (sc_lv<77>) (grp_fu_29842_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29842_p10() {
    grp_fu_29842_p10 = esl_zext<83,77>(p_Val2_2959_reg_83458.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_29879_p0() {
    grp_fu_29879_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_30017_p0() {
    grp_fu_30017_p0 =  (sc_lv<40>) (OP1_V_1364_cast_fu_30014_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30017_p1() {
    grp_fu_30017_p1 =  (sc_lv<40>) (OP1_V_1364_cast_fu_30014_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30264_p0() {
    grp_fu_30264_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_30375_p0() {
    grp_fu_30375_p0 =  (sc_lv<36>) (grp_fu_30375_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30375_p00() {
    grp_fu_30375_p00 = esl_zext<79,36>(r_V_414_reg_83719.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30375_p1() {
    grp_fu_30375_p1 =  (sc_lv<43>) (grp_fu_30375_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30375_p10() {
    grp_fu_30375_p10 = esl_zext<79,43>(tmp_4265_fu_30359_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30432_p0() {
    grp_fu_30432_p0 =  (sc_lv<44>) (grp_fu_30432_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30432_p00() {
    grp_fu_30432_p00 = esl_zext<93,44>(p_Val2_2981_reg_83750.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30432_p1() {
    grp_fu_30432_p1 =  (sc_lv<49>) (grp_fu_30432_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30432_p10() {
    grp_fu_30432_p10 = esl_zext<93,49>(tmp_4270_fu_30416_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30502_p0() {
    grp_fu_30502_p0 =  (sc_lv<50>) (grp_fu_30502_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30502_p00() {
    grp_fu_30502_p00 = esl_zext<100,50>(tmp_4273_reg_83776.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30502_p1() {
    grp_fu_30502_p1 =  (sc_lv<50>) (grp_fu_30502_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_30502_p10() {
    grp_fu_30502_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31106_p0() {
    grp_fu_31106_p0 =  (sc_lv<54>) (grp_fu_31106_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31106_p00() {
    grp_fu_31106_p00 = esl_zext<60,54>(b_frac_V_120_reg_84123.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31106_p1() {
    grp_fu_31106_p1 =  (sc_lv<6>) (grp_fu_31106_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31106_p10() {
    grp_fu_31106_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31202_p0() {
    grp_fu_31202_p0 =  (sc_lv<71>) (grp_fu_31202_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31202_p00() {
    grp_fu_31202_p00 = esl_zext<75,71>(p_Val2_3057_fu_31126_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31202_p1() {
    grp_fu_31202_p1 =  (sc_lv<4>) (grp_fu_31202_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31202_p10() {
    grp_fu_31202_p10 = esl_zext<75,4>(p_Val2_7123_reg_84151.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31284_p0() {
    grp_fu_31284_p0 =  (sc_lv<73>) (grp_fu_31284_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31284_p00() {
    grp_fu_31284_p00 = esl_zext<79,73>(p_Val2_3063_reg_84177.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31284_p1() {
    grp_fu_31284_p1 =  (sc_lv<6>) (grp_fu_31284_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31284_p10() {
    grp_fu_31284_p10 = esl_zext<79,6>(p_Val2_7124_reg_84183.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31370_p0() {
    grp_fu_31370_p0 =  (sc_lv<83>) (grp_fu_31370_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31370_p00() {
    grp_fu_31370_p00 = esl_zext<89,83>(p_Val2_5916_fu_31328_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31370_p1() {
    grp_fu_31370_p1 =  (sc_lv<6>) (grp_fu_31370_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31370_p10() {
    grp_fu_31370_p10 = esl_zext<89,6>(p_Val2_7125_reg_84224.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31460_p0() {
    grp_fu_31460_p0 =  (sc_lv<92>) (grp_fu_31460_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31460_p00() {
    grp_fu_31460_p00 = esl_zext<98,92>(p_Val2_3074_reg_84255.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31460_p1() {
    grp_fu_31460_p1 =  (sc_lv<6>) (grp_fu_31460_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31460_p10() {
    grp_fu_31460_p10 = esl_zext<98,6>(p_Val2_7126_reg_84261.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31550_p0() {
    grp_fu_31550_p0 =  (sc_lv<87>) (grp_fu_31550_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31550_p00() {
    grp_fu_31550_p00 = esl_zext<93,87>(p_Val2_3080_reg_84292.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31550_p1() {
    grp_fu_31550_p1 =  (sc_lv<6>) (grp_fu_31550_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31550_p10() {
    grp_fu_31550_p10 = esl_zext<93,6>(p_Val2_7127_reg_84298.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31640_p0() {
    grp_fu_31640_p0 =  (sc_lv<82>) (grp_fu_31640_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31640_p00() {
    grp_fu_31640_p00 = esl_zext<88,82>(p_Val2_3086_reg_84329.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31640_p1() {
    grp_fu_31640_p1 =  (sc_lv<6>) (grp_fu_31640_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31640_p10() {
    grp_fu_31640_p10 = esl_zext<88,6>(p_Val2_7128_reg_84335.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31730_p0() {
    grp_fu_31730_p0 =  (sc_lv<77>) (grp_fu_31730_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31730_p00() {
    grp_fu_31730_p00 = esl_zext<83,77>(p_Val2_3092_reg_84366.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31730_p1() {
    grp_fu_31730_p1 =  (sc_lv<6>) (grp_fu_31730_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31730_p10() {
    grp_fu_31730_p10 = esl_zext<83,6>(p_Val2_7129_reg_84372.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31745_p0() {
    grp_fu_31745_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_31883_p0() {
    grp_fu_31883_p0 =  (sc_lv<40>) (OP1_V_1374_cast_fu_31880_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_31883_p1() {
    grp_fu_31883_p1 =  (sc_lv<40>) (OP1_V_1374_cast_fu_31880_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32139_p0() {
    grp_fu_32139_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_32250_p0() {
    grp_fu_32250_p0 =  (sc_lv<43>) (grp_fu_32250_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32250_p00() {
    grp_fu_32250_p00 = esl_zext<79,43>(tmp_4462_fu_32234_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32250_p1() {
    grp_fu_32250_p1 =  (sc_lv<36>) (grp_fu_32250_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32250_p10() {
    grp_fu_32250_p10 = esl_zext<79,36>(r_V_437_reg_84626.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32307_p0() {
    grp_fu_32307_p0 =  (sc_lv<49>) (grp_fu_32307_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32307_p00() {
    grp_fu_32307_p00 = esl_zext<93,49>(tmp_4467_fu_32291_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32307_p1() {
    grp_fu_32307_p1 =  (sc_lv<44>) (grp_fu_32307_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32307_p10() {
    grp_fu_32307_p10 = esl_zext<93,44>(p_Val2_3114_reg_84657.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32377_p0() {
    grp_fu_32377_p0 =  (sc_lv<50>) (grp_fu_32377_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32377_p00() {
    grp_fu_32377_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32377_p1() {
    grp_fu_32377_p1 =  (sc_lv<50>) (grp_fu_32377_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32377_p10() {
    grp_fu_32377_p10 = esl_zext<100,50>(tmp_4470_reg_84683.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32625_p0() {
    grp_fu_32625_p0 =  (sc_lv<6>) (grp_fu_32625_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32625_p00() {
    grp_fu_32625_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32625_p1() {
    grp_fu_32625_p1 =  (sc_lv<54>) (grp_fu_32625_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32625_p10() {
    grp_fu_32625_p10 = esl_zext<60,54>(b_frac_V_127_reg_84794.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32721_p0() {
    grp_fu_32721_p0 =  (sc_lv<4>) (grp_fu_32721_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32721_p00() {
    grp_fu_32721_p00 = esl_zext<75,4>(p_Val2_7130_reg_84822.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32721_p1() {
    grp_fu_32721_p1 =  (sc_lv<71>) (grp_fu_32721_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32721_p10() {
    grp_fu_32721_p10 = esl_zext<75,71>(p_Val2_3191_fu_32645_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32803_p0() {
    grp_fu_32803_p0 =  (sc_lv<6>) (grp_fu_32803_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32803_p00() {
    grp_fu_32803_p00 = esl_zext<79,6>(p_Val2_7131_reg_84854.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32803_p1() {
    grp_fu_32803_p1 =  (sc_lv<73>) (grp_fu_32803_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32803_p10() {
    grp_fu_32803_p10 = esl_zext<79,73>(p_Val2_3197_reg_84848.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32889_p0() {
    grp_fu_32889_p0 =  (sc_lv<6>) (grp_fu_32889_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32889_p00() {
    grp_fu_32889_p00 = esl_zext<89,6>(p_Val2_7132_reg_84895.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32889_p1() {
    grp_fu_32889_p1 =  (sc_lv<83>) (grp_fu_32889_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32889_p10() {
    grp_fu_32889_p10 = esl_zext<89,83>(p_Val2_5980_fu_32847_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32979_p0() {
    grp_fu_32979_p0 =  (sc_lv<6>) (grp_fu_32979_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32979_p00() {
    grp_fu_32979_p00 = esl_zext<98,6>(p_Val2_7133_reg_84932.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32979_p1() {
    grp_fu_32979_p1 =  (sc_lv<92>) (grp_fu_32979_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_32979_p10() {
    grp_fu_32979_p10 = esl_zext<98,92>(p_Val2_3208_reg_84926.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33069_p0() {
    grp_fu_33069_p0 =  (sc_lv<6>) (grp_fu_33069_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33069_p00() {
    grp_fu_33069_p00 = esl_zext<93,6>(p_Val2_7134_reg_84969.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33069_p1() {
    grp_fu_33069_p1 =  (sc_lv<87>) (grp_fu_33069_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33069_p10() {
    grp_fu_33069_p10 = esl_zext<93,87>(p_Val2_3215_reg_84963.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33159_p0() {
    grp_fu_33159_p0 =  (sc_lv<6>) (grp_fu_33159_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33159_p00() {
    grp_fu_33159_p00 = esl_zext<88,6>(p_Val2_7135_reg_85006.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33159_p1() {
    grp_fu_33159_p1 =  (sc_lv<82>) (grp_fu_33159_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33159_p10() {
    grp_fu_33159_p10 = esl_zext<88,82>(p_Val2_3221_reg_85000.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33249_p0() {
    grp_fu_33249_p0 =  (sc_lv<6>) (grp_fu_33249_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33249_p00() {
    grp_fu_33249_p00 = esl_zext<83,6>(p_Val2_7136_reg_85043.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33249_p1() {
    grp_fu_33249_p1 =  (sc_lv<77>) (grp_fu_33249_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33249_p10() {
    grp_fu_33249_p10 = esl_zext<83,77>(p_Val2_3229_reg_85037.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33296_p0() {
    grp_fu_33296_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_33434_p0() {
    grp_fu_33434_p0 =  (sc_lv<40>) (OP1_V_1375_cast_fu_33431_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33434_p1() {
    grp_fu_33434_p1 =  (sc_lv<40>) (OP1_V_1375_cast_fu_33431_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33681_p0() {
    grp_fu_33681_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_33792_p0() {
    grp_fu_33792_p0 =  (sc_lv<36>) (grp_fu_33792_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33792_p00() {
    grp_fu_33792_p00 = esl_zext<79,36>(r_V_440_reg_85309.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33792_p1() {
    grp_fu_33792_p1 =  (sc_lv<43>) (grp_fu_33792_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33792_p10() {
    grp_fu_33792_p10 = esl_zext<79,43>(tmp_4678_fu_33776_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33849_p0() {
    grp_fu_33849_p0 =  (sc_lv<44>) (grp_fu_33849_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33849_p00() {
    grp_fu_33849_p00 = esl_zext<93,44>(p_Val2_3255_reg_85340.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33849_p1() {
    grp_fu_33849_p1 =  (sc_lv<49>) (grp_fu_33849_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33849_p10() {
    grp_fu_33849_p10 = esl_zext<93,49>(tmp_4683_fu_33833_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33919_p0() {
    grp_fu_33919_p0 =  (sc_lv<50>) (grp_fu_33919_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33919_p00() {
    grp_fu_33919_p00 = esl_zext<100,50>(tmp_4686_reg_85366.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33919_p1() {
    grp_fu_33919_p1 =  (sc_lv<50>) (grp_fu_33919_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_33919_p10() {
    grp_fu_33919_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34382_p0() {
    grp_fu_34382_p0 =  (sc_lv<54>) (grp_fu_34382_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34382_p00() {
    grp_fu_34382_p00 = esl_zext<60,54>(b_frac_V_133_reg_85532.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34382_p1() {
    grp_fu_34382_p1 =  (sc_lv<6>) (grp_fu_34382_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34382_p10() {
    grp_fu_34382_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34478_p0() {
    grp_fu_34478_p0 =  (sc_lv<71>) (grp_fu_34478_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34478_p00() {
    grp_fu_34478_p00 = esl_zext<75,71>(p_Val2_3336_fu_34402_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34478_p1() {
    grp_fu_34478_p1 =  (sc_lv<4>) (grp_fu_34478_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34478_p10() {
    grp_fu_34478_p10 = esl_zext<75,4>(p_Val2_7137_reg_85560.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34560_p0() {
    grp_fu_34560_p0 =  (sc_lv<73>) (grp_fu_34560_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34560_p00() {
    grp_fu_34560_p00 = esl_zext<79,73>(p_Val2_3342_reg_85586.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34560_p1() {
    grp_fu_34560_p1 =  (sc_lv<6>) (grp_fu_34560_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34560_p10() {
    grp_fu_34560_p10 = esl_zext<79,6>(p_Val2_7138_reg_85592.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34646_p0() {
    grp_fu_34646_p0 =  (sc_lv<83>) (grp_fu_34646_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34646_p00() {
    grp_fu_34646_p00 = esl_zext<89,83>(p_Val2_6173_fu_34604_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34646_p1() {
    grp_fu_34646_p1 =  (sc_lv<6>) (grp_fu_34646_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34646_p10() {
    grp_fu_34646_p10 = esl_zext<89,6>(p_Val2_7139_reg_85633.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34736_p0() {
    grp_fu_34736_p0 =  (sc_lv<92>) (grp_fu_34736_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34736_p00() {
    grp_fu_34736_p00 = esl_zext<98,92>(p_Val2_3354_reg_85664.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34736_p1() {
    grp_fu_34736_p1 =  (sc_lv<6>) (grp_fu_34736_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34736_p10() {
    grp_fu_34736_p10 = esl_zext<98,6>(p_Val2_7140_reg_85670.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34826_p0() {
    grp_fu_34826_p0 =  (sc_lv<87>) (grp_fu_34826_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34826_p00() {
    grp_fu_34826_p00 = esl_zext<93,87>(p_Val2_3360_reg_85701.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34826_p1() {
    grp_fu_34826_p1 =  (sc_lv<6>) (grp_fu_34826_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34826_p10() {
    grp_fu_34826_p10 = esl_zext<93,6>(p_Val2_7141_reg_85707.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34916_p0() {
    grp_fu_34916_p0 =  (sc_lv<82>) (grp_fu_34916_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34916_p00() {
    grp_fu_34916_p00 = esl_zext<88,82>(p_Val2_3366_reg_85738.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34916_p1() {
    grp_fu_34916_p1 =  (sc_lv<6>) (grp_fu_34916_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34916_p10() {
    grp_fu_34916_p10 = esl_zext<88,6>(p_Val2_7142_reg_85744.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34978_p0() {
    grp_fu_34978_p0 =  (sc_lv<77>) (grp_fu_34978_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34978_p00() {
    grp_fu_34978_p00 = esl_zext<83,77>(p_Val2_3373_reg_85775.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34978_p1() {
    grp_fu_34978_p1 =  (sc_lv<6>) (grp_fu_34978_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34978_p10() {
    grp_fu_34978_p10 = esl_zext<83,6>(p_Val2_7143_reg_85781.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_34993_p0() {
    grp_fu_34993_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_35109_p0() {
    grp_fu_35109_p0 =  (sc_lv<40>) (OP1_V_1376_cast_fu_35106_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35109_p1() {
    grp_fu_35109_p1 =  (sc_lv<40>) (OP1_V_1376_cast_fu_35106_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35261_p0() {
    grp_fu_35261_p0 =  (sc_lv<54>) (ap_const_lv131_lc_1);
}

void particlemaster_ReadCalculations::thread_grp_fu_35261_p1() {
    grp_fu_35261_p1 =  (sc_lv<78>) (OP1_V_531_fu_35258_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35270_p0() {
    grp_fu_35270_p0 =  (sc_lv<55>) (ap_const_lv130_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_35276_p0() {
    grp_fu_35276_p0 =  (sc_lv<55>) (ap_const_lv131_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_35276_p1() {
    grp_fu_35276_p1 =  (sc_lv<78>) (OP1_V_531_fu_35258_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35388_p0() {
    grp_fu_35388_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_35499_p0() {
    grp_fu_35499_p0 =  (sc_lv<43>) (grp_fu_35499_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35499_p00() {
    grp_fu_35499_p00 = esl_zext<79,43>(tmp_4861_fu_35483_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35499_p1() {
    grp_fu_35499_p1 =  (sc_lv<36>) (grp_fu_35499_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35499_p10() {
    grp_fu_35499_p10 = esl_zext<79,36>(r_V_443_reg_86027.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35556_p0() {
    grp_fu_35556_p0 =  (sc_lv<49>) (grp_fu_35556_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35556_p00() {
    grp_fu_35556_p00 = esl_zext<93,49>(tmp_4866_fu_35540_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35556_p1() {
    grp_fu_35556_p1 =  (sc_lv<44>) (grp_fu_35556_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35556_p10() {
    grp_fu_35556_p10 = esl_zext<93,44>(p_Val2_3399_reg_86058.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35626_p0() {
    grp_fu_35626_p0 =  (sc_lv<50>) (grp_fu_35626_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35626_p00() {
    grp_fu_35626_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35626_p1() {
    grp_fu_35626_p1 =  (sc_lv<50>) (grp_fu_35626_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35626_p10() {
    grp_fu_35626_p10 = esl_zext<100,50>(tmp_4869_reg_86084.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35902_p0() {
    grp_fu_35902_p0 =  (sc_lv<6>) (grp_fu_35902_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35902_p00() {
    grp_fu_35902_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35902_p1() {
    grp_fu_35902_p1 =  (sc_lv<54>) (grp_fu_35902_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35902_p10() {
    grp_fu_35902_p10 = esl_zext<60,54>(b_frac_V_139_reg_86218.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35998_p0() {
    grp_fu_35998_p0 =  (sc_lv<4>) (grp_fu_35998_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35998_p00() {
    grp_fu_35998_p00 = esl_zext<75,4>(p_Val2_7144_reg_86246.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35998_p1() {
    grp_fu_35998_p1 =  (sc_lv<71>) (grp_fu_35998_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_35998_p10() {
    grp_fu_35998_p10 = esl_zext<75,71>(p_Val2_3483_fu_35922_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36080_p0() {
    grp_fu_36080_p0 =  (sc_lv<6>) (grp_fu_36080_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36080_p00() {
    grp_fu_36080_p00 = esl_zext<79,6>(p_Val2_7145_reg_86278.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36080_p1() {
    grp_fu_36080_p1 =  (sc_lv<73>) (grp_fu_36080_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36080_p10() {
    grp_fu_36080_p10 = esl_zext<79,73>(p_Val2_3490_reg_86272.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36166_p0() {
    grp_fu_36166_p0 =  (sc_lv<6>) (grp_fu_36166_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36166_p00() {
    grp_fu_36166_p00 = esl_zext<89,6>(p_Val2_7146_reg_86319.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36166_p1() {
    grp_fu_36166_p1 =  (sc_lv<83>) (grp_fu_36166_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36166_p10() {
    grp_fu_36166_p10 = esl_zext<89,83>(p_Val2_6256_fu_36124_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36256_p0() {
    grp_fu_36256_p0 =  (sc_lv<6>) (grp_fu_36256_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36256_p00() {
    grp_fu_36256_p00 = esl_zext<98,6>(p_Val2_7147_reg_86356.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36256_p1() {
    grp_fu_36256_p1 =  (sc_lv<92>) (grp_fu_36256_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36256_p10() {
    grp_fu_36256_p10 = esl_zext<98,92>(p_Val2_3503_reg_86350.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36346_p0() {
    grp_fu_36346_p0 =  (sc_lv<6>) (grp_fu_36346_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36346_p00() {
    grp_fu_36346_p00 = esl_zext<93,6>(p_Val2_7148_reg_86393.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36346_p1() {
    grp_fu_36346_p1 =  (sc_lv<87>) (grp_fu_36346_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36346_p10() {
    grp_fu_36346_p10 = esl_zext<93,87>(p_Val2_3509_reg_86387.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36436_p0() {
    grp_fu_36436_p0 =  (sc_lv<6>) (grp_fu_36436_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36436_p00() {
    grp_fu_36436_p00 = esl_zext<88,6>(p_Val2_7149_reg_86430.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36436_p1() {
    grp_fu_36436_p1 =  (sc_lv<82>) (grp_fu_36436_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36436_p10() {
    grp_fu_36436_p10 = esl_zext<88,82>(p_Val2_3517_reg_86424.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36526_p0() {
    grp_fu_36526_p0 =  (sc_lv<6>) (grp_fu_36526_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36526_p00() {
    grp_fu_36526_p00 = esl_zext<83,6>(p_Val2_7150_reg_86467.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36526_p1() {
    grp_fu_36526_p1 =  (sc_lv<77>) (grp_fu_36526_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36526_p10() {
    grp_fu_36526_p10 = esl_zext<83,77>(p_Val2_3526_reg_86461.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36568_p0() {
    grp_fu_36568_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_36706_p0() {
    grp_fu_36706_p0 =  (sc_lv<40>) (OP1_V_1377_cast_fu_36703_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36706_p1() {
    grp_fu_36706_p1 =  (sc_lv<40>) (OP1_V_1377_cast_fu_36703_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36834_p0() {
    grp_fu_36834_p0 =  (sc_lv<54>) (ap_const_lv131_lc_3);
}

void particlemaster_ReadCalculations::thread_grp_fu_36834_p1() {
    grp_fu_36834_p1 =  (sc_lv<78>) (OP1_V_555_fu_36831_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36843_p0() {
    grp_fu_36843_p0 =  (sc_lv<56>) (ap_const_lv130_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_36849_p0() {
    grp_fu_36849_p0 =  (sc_lv<56>) (ap_const_lv131_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_36849_p1() {
    grp_fu_36849_p1 =  (sc_lv<78>) (OP1_V_555_fu_36831_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_36969_p0() {
    grp_fu_36969_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_37080_p0() {
    grp_fu_37080_p0 =  (sc_lv<36>) (grp_fu_37080_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37080_p00() {
    grp_fu_37080_p00 = esl_zext<79,36>(r_V_446_reg_86760.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37080_p1() {
    grp_fu_37080_p1 =  (sc_lv<43>) (grp_fu_37080_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37080_p10() {
    grp_fu_37080_p10 = esl_zext<79,43>(tmp_5070_fu_37064_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37137_p0() {
    grp_fu_37137_p0 =  (sc_lv<44>) (grp_fu_37137_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37137_p00() {
    grp_fu_37137_p00 = esl_zext<93,44>(p_Val2_3552_reg_86791.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37137_p1() {
    grp_fu_37137_p1 =  (sc_lv<49>) (grp_fu_37137_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37137_p10() {
    grp_fu_37137_p10 = esl_zext<93,49>(tmp_5075_fu_37121_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37207_p0() {
    grp_fu_37207_p0 =  (sc_lv<50>) (grp_fu_37207_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37207_p00() {
    grp_fu_37207_p00 = esl_zext<100,50>(tmp_5079_reg_86817.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37207_p1() {
    grp_fu_37207_p1 =  (sc_lv<50>) (grp_fu_37207_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37207_p10() {
    grp_fu_37207_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37719_p0() {
    grp_fu_37719_p0 =  (sc_lv<54>) (grp_fu_37719_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37719_p00() {
    grp_fu_37719_p00 = esl_zext<60,54>(b_frac_V_145_reg_87010.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37719_p1() {
    grp_fu_37719_p1 =  (sc_lv<6>) (grp_fu_37719_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37719_p10() {
    grp_fu_37719_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37815_p0() {
    grp_fu_37815_p0 =  (sc_lv<71>) (grp_fu_37815_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37815_p00() {
    grp_fu_37815_p00 = esl_zext<75,71>(p_Val2_3643_fu_37739_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37815_p1() {
    grp_fu_37815_p1 =  (sc_lv<4>) (grp_fu_37815_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37815_p10() {
    grp_fu_37815_p10 = esl_zext<75,4>(p_Val2_7151_reg_87038.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37897_p0() {
    grp_fu_37897_p0 =  (sc_lv<73>) (grp_fu_37897_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37897_p00() {
    grp_fu_37897_p00 = esl_zext<79,73>(p_Val2_3652_reg_87064.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37897_p1() {
    grp_fu_37897_p1 =  (sc_lv<6>) (grp_fu_37897_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37897_p10() {
    grp_fu_37897_p10 = esl_zext<79,6>(p_Val2_7152_reg_87070.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37983_p0() {
    grp_fu_37983_p0 =  (sc_lv<83>) (grp_fu_37983_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37983_p00() {
    grp_fu_37983_p00 = esl_zext<89,83>(p_Val2_6308_fu_37941_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37983_p1() {
    grp_fu_37983_p1 =  (sc_lv<6>) (grp_fu_37983_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_37983_p10() {
    grp_fu_37983_p10 = esl_zext<89,6>(p_Val2_7153_reg_87111.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38073_p0() {
    grp_fu_38073_p0 =  (sc_lv<92>) (grp_fu_38073_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38073_p00() {
    grp_fu_38073_p00 = esl_zext<98,92>(p_Val2_3663_reg_87142.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38073_p1() {
    grp_fu_38073_p1 =  (sc_lv<6>) (grp_fu_38073_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38073_p10() {
    grp_fu_38073_p10 = esl_zext<98,6>(p_Val2_7154_reg_87148.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38163_p0() {
    grp_fu_38163_p0 =  (sc_lv<87>) (grp_fu_38163_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38163_p00() {
    grp_fu_38163_p00 = esl_zext<93,87>(p_Val2_3669_reg_87179.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38163_p1() {
    grp_fu_38163_p1 =  (sc_lv<6>) (grp_fu_38163_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38163_p10() {
    grp_fu_38163_p10 = esl_zext<93,6>(p_Val2_7155_reg_87185.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38253_p0() {
    grp_fu_38253_p0 =  (sc_lv<82>) (grp_fu_38253_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38253_p00() {
    grp_fu_38253_p00 = esl_zext<88,82>(p_Val2_3676_reg_87216.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38253_p1() {
    grp_fu_38253_p1 =  (sc_lv<6>) (grp_fu_38253_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38253_p10() {
    grp_fu_38253_p10 = esl_zext<88,6>(p_Val2_7156_reg_87222.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38343_p0() {
    grp_fu_38343_p0 =  (sc_lv<77>) (grp_fu_38343_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38343_p00() {
    grp_fu_38343_p00 = esl_zext<83,77>(p_Val2_3683_reg_87253.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38343_p1() {
    grp_fu_38343_p1 =  (sc_lv<6>) (grp_fu_38343_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38343_p10() {
    grp_fu_38343_p10 = esl_zext<83,6>(p_Val2_7157_reg_87259.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38358_p0() {
    grp_fu_38358_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_38496_p0() {
    grp_fu_38496_p0 =  (sc_lv<40>) (OP1_V_1378_cast_fu_38493_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38496_p1() {
    grp_fu_38496_p1 =  (sc_lv<40>) (OP1_V_1378_cast_fu_38493_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38752_p0() {
    grp_fu_38752_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_38863_p0() {
    grp_fu_38863_p0 =  (sc_lv<43>) (grp_fu_38863_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38863_p00() {
    grp_fu_38863_p00 = esl_zext<79,43>(tmp_5261_fu_38847_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38863_p1() {
    grp_fu_38863_p1 =  (sc_lv<36>) (grp_fu_38863_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38863_p10() {
    grp_fu_38863_p10 = esl_zext<79,36>(r_V_449_reg_87513.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38920_p0() {
    grp_fu_38920_p0 =  (sc_lv<49>) (grp_fu_38920_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38920_p00() {
    grp_fu_38920_p00 = esl_zext<93,49>(tmp_5266_fu_38904_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38920_p1() {
    grp_fu_38920_p1 =  (sc_lv<44>) (grp_fu_38920_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38920_p10() {
    grp_fu_38920_p10 = esl_zext<93,44>(p_Val2_3710_reg_87544.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38990_p0() {
    grp_fu_38990_p0 =  (sc_lv<50>) (grp_fu_38990_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38990_p00() {
    grp_fu_38990_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38990_p1() {
    grp_fu_38990_p1 =  (sc_lv<50>) (grp_fu_38990_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_38990_p10() {
    grp_fu_38990_p10 = esl_zext<100,50>(tmp_5269_reg_87570.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39263_p0() {
    grp_fu_39263_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_39384_p0() {
    grp_fu_39384_p0 =  (sc_lv<36>) (grp_fu_39384_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39384_p00() {
    grp_fu_39384_p00 = esl_zext<79,36>(r_V_451_reg_87705.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39384_p1() {
    grp_fu_39384_p1 =  (sc_lv<43>) (grp_fu_39384_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39384_p10() {
    grp_fu_39384_p10 = esl_zext<79,43>(tmp_5340_fu_39368_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39441_p0() {
    grp_fu_39441_p0 =  (sc_lv<44>) (grp_fu_39441_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39441_p00() {
    grp_fu_39441_p00 = esl_zext<93,44>(p_Val2_3754_reg_87736.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39441_p1() {
    grp_fu_39441_p1 =  (sc_lv<49>) (grp_fu_39441_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39441_p10() {
    grp_fu_39441_p10 = esl_zext<93,49>(tmp_5345_fu_39425_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39511_p0() {
    grp_fu_39511_p0 =  (sc_lv<50>) (grp_fu_39511_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39511_p00() {
    grp_fu_39511_p00 = esl_zext<100,50>(tmp_5348_reg_87762.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39511_p1() {
    grp_fu_39511_p1 =  (sc_lv<50>) (grp_fu_39511_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39511_p10() {
    grp_fu_39511_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39993_p0() {
    grp_fu_39993_p0 =  (sc_lv<54>) (grp_fu_39993_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39993_p00() {
    grp_fu_39993_p00 = esl_zext<60,54>(b_frac_V_150_reg_87960.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39993_p1() {
    grp_fu_39993_p1 =  (sc_lv<6>) (grp_fu_39993_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_39993_p10() {
    grp_fu_39993_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40089_p0() {
    grp_fu_40089_p0 =  (sc_lv<71>) (grp_fu_40089_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40089_p00() {
    grp_fu_40089_p00 = esl_zext<75,71>(p_Val2_3836_fu_40013_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40089_p1() {
    grp_fu_40089_p1 =  (sc_lv<4>) (grp_fu_40089_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40089_p10() {
    grp_fu_40089_p10 = esl_zext<75,4>(p_Val2_7158_reg_87988.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40171_p0() {
    grp_fu_40171_p0 =  (sc_lv<73>) (grp_fu_40171_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40171_p00() {
    grp_fu_40171_p00 = esl_zext<79,73>(p_Val2_3842_reg_88014.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40171_p1() {
    grp_fu_40171_p1 =  (sc_lv<6>) (grp_fu_40171_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40171_p10() {
    grp_fu_40171_p10 = esl_zext<79,6>(p_Val2_7159_reg_88020.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40257_p0() {
    grp_fu_40257_p0 =  (sc_lv<83>) (grp_fu_40257_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40257_p00() {
    grp_fu_40257_p00 = esl_zext<89,83>(p_Val2_6416_fu_40215_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40257_p1() {
    grp_fu_40257_p1 =  (sc_lv<6>) (grp_fu_40257_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40257_p10() {
    grp_fu_40257_p10 = esl_zext<89,6>(p_Val2_7160_reg_88061.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40347_p0() {
    grp_fu_40347_p0 =  (sc_lv<92>) (grp_fu_40347_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40347_p00() {
    grp_fu_40347_p00 = esl_zext<98,92>(p_Val2_3853_reg_88092.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40347_p1() {
    grp_fu_40347_p1 =  (sc_lv<6>) (grp_fu_40347_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40347_p10() {
    grp_fu_40347_p10 = esl_zext<98,6>(p_Val2_7161_reg_88098.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40437_p0() {
    grp_fu_40437_p0 =  (sc_lv<87>) (grp_fu_40437_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40437_p00() {
    grp_fu_40437_p00 = esl_zext<93,87>(p_Val2_3859_reg_88129.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40437_p1() {
    grp_fu_40437_p1 =  (sc_lv<6>) (grp_fu_40437_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40437_p10() {
    grp_fu_40437_p10 = esl_zext<93,6>(p_Val2_7162_reg_88135.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40527_p0() {
    grp_fu_40527_p0 =  (sc_lv<82>) (grp_fu_40527_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40527_p00() {
    grp_fu_40527_p00 = esl_zext<88,82>(p_Val2_3865_reg_88166.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40527_p1() {
    grp_fu_40527_p1 =  (sc_lv<6>) (grp_fu_40527_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40527_p10() {
    grp_fu_40527_p10 = esl_zext<88,6>(p_Val2_7163_reg_88172.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40617_p0() {
    grp_fu_40617_p0 =  (sc_lv<77>) (grp_fu_40617_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40617_p00() {
    grp_fu_40617_p00 = esl_zext<83,77>(p_Val2_3872_reg_88203.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40617_p1() {
    grp_fu_40617_p1 =  (sc_lv<6>) (grp_fu_40617_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40617_p10() {
    grp_fu_40617_p10 = esl_zext<83,6>(p_Val2_7164_reg_88209.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40626_p0() {
    grp_fu_40626_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_40764_p0() {
    grp_fu_40764_p0 =  (sc_lv<40>) (OP1_V_1380_cast_fu_40761_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_40764_p1() {
    grp_fu_40764_p1 =  (sc_lv<40>) (OP1_V_1380_cast_fu_40761_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41020_p0() {
    grp_fu_41020_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_41131_p0() {
    grp_fu_41131_p0 =  (sc_lv<43>) (grp_fu_41131_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41131_p00() {
    grp_fu_41131_p00 = esl_zext<79,43>(tmp_5542_fu_41115_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41131_p1() {
    grp_fu_41131_p1 =  (sc_lv<36>) (grp_fu_41131_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41131_p10() {
    grp_fu_41131_p10 = esl_zext<79,36>(r_V_454_reg_88458.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41188_p0() {
    grp_fu_41188_p0 =  (sc_lv<49>) (grp_fu_41188_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41188_p00() {
    grp_fu_41188_p00 = esl_zext<93,49>(tmp_5547_fu_41172_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41188_p1() {
    grp_fu_41188_p1 =  (sc_lv<44>) (grp_fu_41188_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41188_p10() {
    grp_fu_41188_p10 = esl_zext<93,44>(p_Val2_3897_reg_88489.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41258_p0() {
    grp_fu_41258_p0 =  (sc_lv<50>) (grp_fu_41258_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41258_p00() {
    grp_fu_41258_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41258_p1() {
    grp_fu_41258_p1 =  (sc_lv<50>) (grp_fu_41258_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41258_p10() {
    grp_fu_41258_p10 = esl_zext<100,50>(tmp_5550_reg_88515.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41461_p0() {
    grp_fu_41461_p0 =  (sc_lv<54>) (grp_fu_41461_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41461_p00() {
    grp_fu_41461_p00 = esl_zext<60,54>(b_frac_V_117_reg_88588.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41461_p1() {
    grp_fu_41461_p1 =  (sc_lv<6>) (grp_fu_41461_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41461_p10() {
    grp_fu_41461_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41557_p0() {
    grp_fu_41557_p0 =  (sc_lv<71>) (grp_fu_41557_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41557_p00() {
    grp_fu_41557_p00 = esl_zext<75,71>(p_Val2_2990_fu_41481_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41557_p1() {
    grp_fu_41557_p1 =  (sc_lv<4>) (grp_fu_41557_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41557_p10() {
    grp_fu_41557_p10 = esl_zext<75,4>(p_Val2_7081_reg_88616.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41639_p0() {
    grp_fu_41639_p0 =  (sc_lv<73>) (grp_fu_41639_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41639_p00() {
    grp_fu_41639_p00 = esl_zext<79,73>(p_Val2_2996_reg_88642.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41639_p1() {
    grp_fu_41639_p1 =  (sc_lv<6>) (grp_fu_41639_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41639_p10() {
    grp_fu_41639_p10 = esl_zext<79,6>(p_Val2_7082_reg_88648.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41725_p0() {
    grp_fu_41725_p0 =  (sc_lv<83>) (grp_fu_41725_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41725_p00() {
    grp_fu_41725_p00 = esl_zext<89,83>(p_Val2_5896_fu_41683_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41725_p1() {
    grp_fu_41725_p1 =  (sc_lv<6>) (grp_fu_41725_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41725_p10() {
    grp_fu_41725_p10 = esl_zext<89,6>(p_Val2_7083_reg_88689.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41815_p0() {
    grp_fu_41815_p0 =  (sc_lv<92>) (grp_fu_41815_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41815_p00() {
    grp_fu_41815_p00 = esl_zext<98,92>(p_Val2_3007_reg_88720.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41815_p1() {
    grp_fu_41815_p1 =  (sc_lv<6>) (grp_fu_41815_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41815_p10() {
    grp_fu_41815_p10 = esl_zext<98,6>(p_Val2_7084_reg_88726.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41905_p0() {
    grp_fu_41905_p0 =  (sc_lv<87>) (grp_fu_41905_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41905_p00() {
    grp_fu_41905_p00 = esl_zext<93,87>(p_Val2_3013_reg_88757.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41905_p1() {
    grp_fu_41905_p1 =  (sc_lv<6>) (grp_fu_41905_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41905_p10() {
    grp_fu_41905_p10 = esl_zext<93,6>(p_Val2_7085_reg_88763.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41995_p0() {
    grp_fu_41995_p0 =  (sc_lv<82>) (grp_fu_41995_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41995_p00() {
    grp_fu_41995_p00 = esl_zext<88,82>(p_Val2_3019_reg_88794.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41995_p1() {
    grp_fu_41995_p1 =  (sc_lv<6>) (grp_fu_41995_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_41995_p10() {
    grp_fu_41995_p10 = esl_zext<88,6>(p_Val2_7086_reg_88800.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42085_p0() {
    grp_fu_42085_p0 =  (sc_lv<77>) (grp_fu_42085_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42085_p00() {
    grp_fu_42085_p00 = esl_zext<83,77>(p_Val2_3025_reg_88831.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42085_p1() {
    grp_fu_42085_p1 =  (sc_lv<6>) (grp_fu_42085_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42085_p10() {
    grp_fu_42085_p10 = esl_zext<83,6>(p_Val2_7087_reg_88837.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42100_p0() {
    grp_fu_42100_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_42238_p0() {
    grp_fu_42238_p0 =  (sc_lv<40>) (OP1_V_1365_cast_fu_42235_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42238_p1() {
    grp_fu_42238_p1 =  (sc_lv<40>) (OP1_V_1365_cast_fu_42235_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42494_p0() {
    grp_fu_42494_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_42605_p0() {
    grp_fu_42605_p0 =  (sc_lv<43>) (grp_fu_42605_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42605_p00() {
    grp_fu_42605_p00 = esl_zext<79,43>(tmp_4375_fu_42589_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42605_p1() {
    grp_fu_42605_p1 =  (sc_lv<36>) (grp_fu_42605_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42605_p10() {
    grp_fu_42605_p10 = esl_zext<79,36>(r_V_417_reg_89091.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42662_p0() {
    grp_fu_42662_p0 =  (sc_lv<49>) (grp_fu_42662_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42662_p00() {
    grp_fu_42662_p00 = esl_zext<93,49>(tmp_4380_fu_42646_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42662_p1() {
    grp_fu_42662_p1 =  (sc_lv<44>) (grp_fu_42662_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42662_p10() {
    grp_fu_42662_p10 = esl_zext<93,44>(p_Val2_3047_reg_89122.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42732_p0() {
    grp_fu_42732_p0 =  (sc_lv<50>) (grp_fu_42732_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42732_p00() {
    grp_fu_42732_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42732_p1() {
    grp_fu_42732_p1 =  (sc_lv<50>) (grp_fu_42732_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42732_p10() {
    grp_fu_42732_p10 = esl_zext<100,50>(tmp_4383_reg_89148.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42980_p0() {
    grp_fu_42980_p0 =  (sc_lv<6>) (grp_fu_42980_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42980_p00() {
    grp_fu_42980_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42980_p1() {
    grp_fu_42980_p1 =  (sc_lv<54>) (grp_fu_42980_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_42980_p10() {
    grp_fu_42980_p10 = esl_zext<60,54>(b_frac_V_124_reg_89259.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43076_p0() {
    grp_fu_43076_p0 =  (sc_lv<4>) (grp_fu_43076_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43076_p00() {
    grp_fu_43076_p00 = esl_zext<75,4>(p_Val2_7088_reg_89287.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43076_p1() {
    grp_fu_43076_p1 =  (sc_lv<71>) (grp_fu_43076_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43076_p10() {
    grp_fu_43076_p10 = esl_zext<75,71>(p_Val2_3125_fu_43000_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43158_p0() {
    grp_fu_43158_p0 =  (sc_lv<6>) (grp_fu_43158_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43158_p00() {
    grp_fu_43158_p00 = esl_zext<79,6>(p_Val2_7089_reg_89319.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43158_p1() {
    grp_fu_43158_p1 =  (sc_lv<73>) (grp_fu_43158_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43158_p10() {
    grp_fu_43158_p10 = esl_zext<79,73>(p_Val2_3131_reg_89313.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43244_p0() {
    grp_fu_43244_p0 =  (sc_lv<6>) (grp_fu_43244_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43244_p00() {
    grp_fu_43244_p00 = esl_zext<89,6>(p_Val2_7090_reg_89360.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43244_p1() {
    grp_fu_43244_p1 =  (sc_lv<83>) (grp_fu_43244_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43244_p10() {
    grp_fu_43244_p10 = esl_zext<89,83>(p_Val2_5946_fu_43202_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43334_p0() {
    grp_fu_43334_p0 =  (sc_lv<6>) (grp_fu_43334_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43334_p00() {
    grp_fu_43334_p00 = esl_zext<98,6>(p_Val2_7091_reg_89397.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43334_p1() {
    grp_fu_43334_p1 =  (sc_lv<92>) (grp_fu_43334_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43334_p10() {
    grp_fu_43334_p10 = esl_zext<98,92>(p_Val2_3142_reg_89391.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43424_p0() {
    grp_fu_43424_p0 =  (sc_lv<6>) (grp_fu_43424_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43424_p00() {
    grp_fu_43424_p00 = esl_zext<93,6>(p_Val2_7092_reg_89434.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43424_p1() {
    grp_fu_43424_p1 =  (sc_lv<87>) (grp_fu_43424_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43424_p10() {
    grp_fu_43424_p10 = esl_zext<93,87>(p_Val2_3148_reg_89428.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43514_p0() {
    grp_fu_43514_p0 =  (sc_lv<6>) (grp_fu_43514_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43514_p00() {
    grp_fu_43514_p00 = esl_zext<88,6>(p_Val2_7093_reg_89471.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43514_p1() {
    grp_fu_43514_p1 =  (sc_lv<82>) (grp_fu_43514_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43514_p10() {
    grp_fu_43514_p10 = esl_zext<88,82>(p_Val2_3154_reg_89465.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43604_p0() {
    grp_fu_43604_p0 =  (sc_lv<6>) (grp_fu_43604_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43604_p00() {
    grp_fu_43604_p00 = esl_zext<83,6>(p_Val2_7094_reg_89508.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43604_p1() {
    grp_fu_43604_p1 =  (sc_lv<77>) (grp_fu_43604_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43604_p10() {
    grp_fu_43604_p10 = esl_zext<83,77>(p_Val2_3160_reg_89502.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43651_p0() {
    grp_fu_43651_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_43789_p0() {
    grp_fu_43789_p0 =  (sc_lv<40>) (OP1_V_1366_cast_fu_43786_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_43789_p1() {
    grp_fu_43789_p1 =  (sc_lv<40>) (OP1_V_1366_cast_fu_43786_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44036_p0() {
    grp_fu_44036_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_44147_p0() {
    grp_fu_44147_p0 =  (sc_lv<36>) (grp_fu_44147_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44147_p00() {
    grp_fu_44147_p00 = esl_zext<79,36>(r_V_420_reg_89774.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44147_p1() {
    grp_fu_44147_p1 =  (sc_lv<43>) (grp_fu_44147_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44147_p10() {
    grp_fu_44147_p10 = esl_zext<79,43>(tmp_4566_fu_44131_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44204_p0() {
    grp_fu_44204_p0 =  (sc_lv<44>) (grp_fu_44204_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44204_p00() {
    grp_fu_44204_p00 = esl_zext<93,44>(p_Val2_3182_reg_89805.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44204_p1() {
    grp_fu_44204_p1 =  (sc_lv<49>) (grp_fu_44204_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44204_p10() {
    grp_fu_44204_p10 = esl_zext<93,49>(tmp_4573_fu_44188_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44274_p0() {
    grp_fu_44274_p0 =  (sc_lv<50>) (grp_fu_44274_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44274_p00() {
    grp_fu_44274_p00 = esl_zext<100,50>(tmp_4576_reg_89831.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44274_p1() {
    grp_fu_44274_p1 =  (sc_lv<50>) (grp_fu_44274_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44274_p10() {
    grp_fu_44274_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44737_p0() {
    grp_fu_44737_p0 =  (sc_lv<54>) (grp_fu_44737_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44737_p00() {
    grp_fu_44737_p00 = esl_zext<60,54>(b_frac_V_130_reg_90000.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44737_p1() {
    grp_fu_44737_p1 =  (sc_lv<6>) (grp_fu_44737_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44737_p10() {
    grp_fu_44737_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44833_p0() {
    grp_fu_44833_p0 =  (sc_lv<71>) (grp_fu_44833_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44833_p00() {
    grp_fu_44833_p00 = esl_zext<75,71>(p_Val2_3265_fu_44757_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44833_p1() {
    grp_fu_44833_p1 =  (sc_lv<4>) (grp_fu_44833_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44833_p10() {
    grp_fu_44833_p10 = esl_zext<75,4>(p_Val2_7095_reg_90028.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44915_p0() {
    grp_fu_44915_p0 =  (sc_lv<73>) (grp_fu_44915_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44915_p00() {
    grp_fu_44915_p00 = esl_zext<79,73>(p_Val2_3271_reg_90054.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44915_p1() {
    grp_fu_44915_p1 =  (sc_lv<6>) (grp_fu_44915_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_44915_p10() {
    grp_fu_44915_p10 = esl_zext<79,6>(p_Val2_7096_reg_90060.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45001_p0() {
    grp_fu_45001_p0 =  (sc_lv<83>) (grp_fu_45001_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45001_p00() {
    grp_fu_45001_p00 = esl_zext<89,83>(p_Val2_6040_fu_44959_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45001_p1() {
    grp_fu_45001_p1 =  (sc_lv<6>) (grp_fu_45001_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45001_p10() {
    grp_fu_45001_p10 = esl_zext<89,6>(p_Val2_7097_reg_90101.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45091_p0() {
    grp_fu_45091_p0 =  (sc_lv<92>) (grp_fu_45091_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45091_p00() {
    grp_fu_45091_p00 = esl_zext<98,92>(p_Val2_3282_reg_90132.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45091_p1() {
    grp_fu_45091_p1 =  (sc_lv<6>) (grp_fu_45091_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45091_p10() {
    grp_fu_45091_p10 = esl_zext<98,6>(p_Val2_7098_reg_90138.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45181_p0() {
    grp_fu_45181_p0 =  (sc_lv<87>) (grp_fu_45181_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45181_p00() {
    grp_fu_45181_p00 = esl_zext<93,87>(p_Val2_3289_reg_90169.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45181_p1() {
    grp_fu_45181_p1 =  (sc_lv<6>) (grp_fu_45181_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45181_p10() {
    grp_fu_45181_p10 = esl_zext<93,6>(p_Val2_7099_reg_90175.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45271_p0() {
    grp_fu_45271_p0 =  (sc_lv<82>) (grp_fu_45271_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45271_p00() {
    grp_fu_45271_p00 = esl_zext<88,82>(p_Val2_3296_reg_90206.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45271_p1() {
    grp_fu_45271_p1 =  (sc_lv<6>) (grp_fu_45271_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45271_p10() {
    grp_fu_45271_p10 = esl_zext<88,6>(p_Val2_7100_reg_90212.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45333_p0() {
    grp_fu_45333_p0 =  (sc_lv<77>) (grp_fu_45333_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45333_p00() {
    grp_fu_45333_p00 = esl_zext<83,77>(p_Val2_3303_reg_90243.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45333_p1() {
    grp_fu_45333_p1 =  (sc_lv<6>) (grp_fu_45333_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45333_p10() {
    grp_fu_45333_p10 = esl_zext<83,6>(p_Val2_7101_reg_90249.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45348_p0() {
    grp_fu_45348_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_45464_p0() {
    grp_fu_45464_p0 =  (sc_lv<40>) (OP1_V_1367_cast_fu_45461_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45464_p1() {
    grp_fu_45464_p1 =  (sc_lv<40>) (OP1_V_1367_cast_fu_45461_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45616_p0() {
    grp_fu_45616_p0 =  (sc_lv<54>) (ap_const_lv131_lc_1);
}

void particlemaster_ReadCalculations::thread_grp_fu_45616_p1() {
    grp_fu_45616_p1 =  (sc_lv<78>) (OP1_V_519_fu_45613_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45625_p0() {
    grp_fu_45625_p0 =  (sc_lv<55>) (ap_const_lv130_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_45631_p0() {
    grp_fu_45631_p0 =  (sc_lv<55>) (ap_const_lv131_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_45631_p1() {
    grp_fu_45631_p1 =  (sc_lv<78>) (OP1_V_519_fu_45613_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45743_p0() {
    grp_fu_45743_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_45854_p0() {
    grp_fu_45854_p0 =  (sc_lv<43>) (grp_fu_45854_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45854_p00() {
    grp_fu_45854_p00 = esl_zext<79,43>(tmp_4779_fu_45838_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45854_p1() {
    grp_fu_45854_p1 =  (sc_lv<36>) (grp_fu_45854_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45854_p10() {
    grp_fu_45854_p10 = esl_zext<79,36>(r_V_423_reg_90495.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45911_p0() {
    grp_fu_45911_p0 =  (sc_lv<49>) (grp_fu_45911_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45911_p00() {
    grp_fu_45911_p00 = esl_zext<93,49>(tmp_4784_fu_45895_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45911_p1() {
    grp_fu_45911_p1 =  (sc_lv<44>) (grp_fu_45911_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45911_p10() {
    grp_fu_45911_p10 = esl_zext<93,44>(p_Val2_3326_reg_90526.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45981_p0() {
    grp_fu_45981_p0 =  (sc_lv<50>) (grp_fu_45981_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45981_p00() {
    grp_fu_45981_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45981_p1() {
    grp_fu_45981_p1 =  (sc_lv<50>) (grp_fu_45981_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_45981_p10() {
    grp_fu_45981_p10 = esl_zext<100,50>(tmp_4788_reg_90552.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46276_p0() {
    grp_fu_46276_p0 =  (sc_lv<6>) (grp_fu_46276_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46276_p00() {
    grp_fu_46276_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46276_p1() {
    grp_fu_46276_p1 =  (sc_lv<54>) (grp_fu_46276_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46276_p10() {
    grp_fu_46276_p10 = esl_zext<60,54>(b_frac_V_136_reg_90698.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46372_p0() {
    grp_fu_46372_p0 =  (sc_lv<4>) (grp_fu_46372_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46372_p00() {
    grp_fu_46372_p00 = esl_zext<75,4>(p_Val2_7102_reg_90726.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46372_p1() {
    grp_fu_46372_p1 =  (sc_lv<71>) (grp_fu_46372_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46372_p10() {
    grp_fu_46372_p10 = esl_zext<75,71>(p_Val2_3410_fu_46296_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46454_p0() {
    grp_fu_46454_p0 =  (sc_lv<6>) (grp_fu_46454_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46454_p00() {
    grp_fu_46454_p00 = esl_zext<79,6>(p_Val2_7103_reg_90758.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46454_p1() {
    grp_fu_46454_p1 =  (sc_lv<73>) (grp_fu_46454_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46454_p10() {
    grp_fu_46454_p10 = esl_zext<79,73>(p_Val2_3416_reg_90752.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46540_p0() {
    grp_fu_46540_p0 =  (sc_lv<6>) (grp_fu_46540_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46540_p00() {
    grp_fu_46540_p00 = esl_zext<89,6>(p_Val2_7104_reg_90799.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46540_p1() {
    grp_fu_46540_p1 =  (sc_lv<83>) (grp_fu_46540_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46540_p10() {
    grp_fu_46540_p10 = esl_zext<89,83>(p_Val2_6215_fu_46498_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46630_p0() {
    grp_fu_46630_p0 =  (sc_lv<6>) (grp_fu_46630_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46630_p00() {
    grp_fu_46630_p00 = esl_zext<98,6>(p_Val2_7105_reg_90836.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46630_p1() {
    grp_fu_46630_p1 =  (sc_lv<92>) (grp_fu_46630_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46630_p10() {
    grp_fu_46630_p10 = esl_zext<98,92>(p_Val2_3427_reg_90830.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46720_p0() {
    grp_fu_46720_p0 =  (sc_lv<6>) (grp_fu_46720_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46720_p00() {
    grp_fu_46720_p00 = esl_zext<93,6>(p_Val2_7106_reg_90873.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46720_p1() {
    grp_fu_46720_p1 =  (sc_lv<87>) (grp_fu_46720_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46720_p10() {
    grp_fu_46720_p10 = esl_zext<93,87>(p_Val2_3433_reg_90867.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46810_p0() {
    grp_fu_46810_p0 =  (sc_lv<6>) (grp_fu_46810_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46810_p00() {
    grp_fu_46810_p00 = esl_zext<88,6>(p_Val2_7107_reg_90910.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46810_p1() {
    grp_fu_46810_p1 =  (sc_lv<82>) (grp_fu_46810_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46810_p10() {
    grp_fu_46810_p10 = esl_zext<88,82>(p_Val2_3439_reg_90904.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46900_p0() {
    grp_fu_46900_p0 =  (sc_lv<6>) (grp_fu_46900_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46900_p00() {
    grp_fu_46900_p00 = esl_zext<83,6>(p_Val2_7108_reg_90947.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46900_p1() {
    grp_fu_46900_p1 =  (sc_lv<77>) (grp_fu_46900_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46900_p10() {
    grp_fu_46900_p10 = esl_zext<83,77>(p_Val2_3446_reg_90941.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_46937_p0() {
    grp_fu_46937_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_47075_p0() {
    grp_fu_47075_p0 =  (sc_lv<40>) (OP1_V_1368_cast_fu_47072_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47075_p1() {
    grp_fu_47075_p1 =  (sc_lv<40>) (OP1_V_1368_cast_fu_47072_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47203_p0() {
    grp_fu_47203_p0 =  (sc_lv<54>) (ap_const_lv131_lc_3);
}

void particlemaster_ReadCalculations::thread_grp_fu_47203_p1() {
    grp_fu_47203_p1 =  (sc_lv<78>) (OP1_V_543_fu_47200_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47212_p0() {
    grp_fu_47212_p0 =  (sc_lv<56>) (ap_const_lv130_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_47218_p0() {
    grp_fu_47218_p0 =  (sc_lv<56>) (ap_const_lv131_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_47218_p1() {
    grp_fu_47218_p1 =  (sc_lv<78>) (OP1_V_543_fu_47200_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47338_p0() {
    grp_fu_47338_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_47449_p0() {
    grp_fu_47449_p0 =  (sc_lv<36>) (grp_fu_47449_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47449_p00() {
    grp_fu_47449_p00 = esl_zext<79,36>(r_V_426_reg_91234.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47449_p1() {
    grp_fu_47449_p1 =  (sc_lv<43>) (grp_fu_47449_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47449_p10() {
    grp_fu_47449_p10 = esl_zext<79,43>(tmp_4964_fu_47433_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47506_p0() {
    grp_fu_47506_p0 =  (sc_lv<44>) (grp_fu_47506_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47506_p00() {
    grp_fu_47506_p00 = esl_zext<93,44>(p_Val2_3473_reg_91265.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47506_p1() {
    grp_fu_47506_p1 =  (sc_lv<49>) (grp_fu_47506_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47506_p10() {
    grp_fu_47506_p10 = esl_zext<93,49>(tmp_4969_fu_47490_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47576_p0() {
    grp_fu_47576_p0 =  (sc_lv<50>) (grp_fu_47576_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47576_p00() {
    grp_fu_47576_p00 = esl_zext<100,50>(tmp_4972_reg_91291.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47576_p1() {
    grp_fu_47576_p1 =  (sc_lv<50>) (grp_fu_47576_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_47576_p10() {
    grp_fu_47576_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48075_p0() {
    grp_fu_48075_p0 =  (sc_lv<54>) (grp_fu_48075_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48075_p00() {
    grp_fu_48075_p00 = esl_zext<60,54>(b_frac_V_142_reg_91473.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48075_p1() {
    grp_fu_48075_p1 =  (sc_lv<6>) (grp_fu_48075_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48075_p10() {
    grp_fu_48075_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48171_p0() {
    grp_fu_48171_p0 =  (sc_lv<71>) (grp_fu_48171_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48171_p00() {
    grp_fu_48171_p00 = esl_zext<75,71>(p_Val2_3563_fu_48095_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48171_p1() {
    grp_fu_48171_p1 =  (sc_lv<4>) (grp_fu_48171_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48171_p10() {
    grp_fu_48171_p10 = esl_zext<75,4>(p_Val2_7109_reg_91501.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48253_p0() {
    grp_fu_48253_p0 =  (sc_lv<73>) (grp_fu_48253_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48253_p00() {
    grp_fu_48253_p00 = esl_zext<79,73>(p_Val2_3570_reg_91527.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48253_p1() {
    grp_fu_48253_p1 =  (sc_lv<6>) (grp_fu_48253_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48253_p10() {
    grp_fu_48253_p10 = esl_zext<79,6>(p_Val2_7110_reg_91533.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48339_p0() {
    grp_fu_48339_p0 =  (sc_lv<83>) (grp_fu_48339_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48339_p00() {
    grp_fu_48339_p00 = esl_zext<89,83>(p_Val2_6288_fu_48297_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48339_p1() {
    grp_fu_48339_p1 =  (sc_lv<6>) (grp_fu_48339_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48339_p10() {
    grp_fu_48339_p10 = esl_zext<89,6>(p_Val2_7111_reg_91574.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48429_p0() {
    grp_fu_48429_p0 =  (sc_lv<92>) (grp_fu_48429_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48429_p00() {
    grp_fu_48429_p00 = esl_zext<98,92>(p_Val2_3586_reg_91605.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48429_p1() {
    grp_fu_48429_p1 =  (sc_lv<6>) (grp_fu_48429_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48429_p10() {
    grp_fu_48429_p10 = esl_zext<98,6>(p_Val2_7112_reg_91611.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48519_p0() {
    grp_fu_48519_p0 =  (sc_lv<87>) (grp_fu_48519_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48519_p00() {
    grp_fu_48519_p00 = esl_zext<93,87>(p_Val2_3593_reg_91642.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48519_p1() {
    grp_fu_48519_p1 =  (sc_lv<6>) (grp_fu_48519_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48519_p10() {
    grp_fu_48519_p10 = esl_zext<93,6>(p_Val2_7113_reg_91648.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48609_p0() {
    grp_fu_48609_p0 =  (sc_lv<82>) (grp_fu_48609_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48609_p00() {
    grp_fu_48609_p00 = esl_zext<88,82>(p_Val2_3599_reg_91679.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48609_p1() {
    grp_fu_48609_p1 =  (sc_lv<6>) (grp_fu_48609_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48609_p10() {
    grp_fu_48609_p10 = esl_zext<88,6>(p_Val2_7114_reg_91685.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48699_p0() {
    grp_fu_48699_p0 =  (sc_lv<77>) (grp_fu_48699_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48699_p00() {
    grp_fu_48699_p00 = esl_zext<83,77>(p_Val2_3606_reg_91716.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48699_p1() {
    grp_fu_48699_p1 =  (sc_lv<6>) (grp_fu_48699_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48699_p10() {
    grp_fu_48699_p10 = esl_zext<83,6>(p_Val2_7115_reg_91722.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48714_p0() {
    grp_fu_48714_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_48852_p0() {
    grp_fu_48852_p0 =  (sc_lv<40>) (OP1_V_1369_cast_fu_48849_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_48852_p1() {
    grp_fu_48852_p1 =  (sc_lv<40>) (OP1_V_1369_cast_fu_48849_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49108_p0() {
    grp_fu_49108_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_49219_p0() {
    grp_fu_49219_p0 =  (sc_lv<43>) (grp_fu_49219_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49219_p00() {
    grp_fu_49219_p00 = esl_zext<79,43>(tmp_5174_fu_49203_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49219_p1() {
    grp_fu_49219_p1 =  (sc_lv<36>) (grp_fu_49219_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49219_p10() {
    grp_fu_49219_p10 = esl_zext<79,36>(r_V_429_reg_91976.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49276_p0() {
    grp_fu_49276_p0 =  (sc_lv<49>) (grp_fu_49276_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49276_p00() {
    grp_fu_49276_p00 = esl_zext<93,49>(tmp_5179_fu_49260_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49276_p1() {
    grp_fu_49276_p1 =  (sc_lv<44>) (grp_fu_49276_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49276_p10() {
    grp_fu_49276_p10 = esl_zext<93,44>(p_Val2_3632_reg_92007.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49346_p0() {
    grp_fu_49346_p0 =  (sc_lv<50>) (grp_fu_49346_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49346_p00() {
    grp_fu_49346_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49346_p1() {
    grp_fu_49346_p1 =  (sc_lv<50>) (grp_fu_49346_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49346_p10() {
    grp_fu_49346_p10 = esl_zext<100,50>(tmp_5182_reg_92033.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49619_p0() {
    grp_fu_49619_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_49740_p0() {
    grp_fu_49740_p0 =  (sc_lv<36>) (grp_fu_49740_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49740_p00() {
    grp_fu_49740_p00 = esl_zext<79,36>(r_V_431_reg_92168.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49740_p1() {
    grp_fu_49740_p1 =  (sc_lv<43>) (grp_fu_49740_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49740_p10() {
    grp_fu_49740_p10 = esl_zext<79,43>(tmp_5292_fu_49724_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49797_p0() {
    grp_fu_49797_p0 =  (sc_lv<44>) (grp_fu_49797_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49797_p00() {
    grp_fu_49797_p00 = esl_zext<93,44>(p_Val2_3732_reg_92199.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49797_p1() {
    grp_fu_49797_p1 =  (sc_lv<49>) (grp_fu_49797_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49797_p10() {
    grp_fu_49797_p10 = esl_zext<93,49>(tmp_5297_fu_49781_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49867_p0() {
    grp_fu_49867_p0 =  (sc_lv<50>) (grp_fu_49867_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49867_p00() {
    grp_fu_49867_p00 = esl_zext<100,50>(tmp_5300_reg_92225.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49867_p1() {
    grp_fu_49867_p1 =  (sc_lv<50>) (grp_fu_49867_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_49867_p10() {
    grp_fu_49867_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50349_p0() {
    grp_fu_50349_p0 =  (sc_lv<54>) (grp_fu_50349_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50349_p00() {
    grp_fu_50349_p00 = esl_zext<60,54>(b_frac_V_147_reg_92423.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50349_p1() {
    grp_fu_50349_p1 =  (sc_lv<6>) (grp_fu_50349_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50349_p10() {
    grp_fu_50349_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50445_p0() {
    grp_fu_50445_p0 =  (sc_lv<71>) (grp_fu_50445_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50445_p00() {
    grp_fu_50445_p00 = esl_zext<75,71>(p_Val2_3764_fu_50369_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50445_p1() {
    grp_fu_50445_p1 =  (sc_lv<4>) (grp_fu_50445_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50445_p10() {
    grp_fu_50445_p10 = esl_zext<75,4>(p_Val2_7116_reg_92451.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50527_p0() {
    grp_fu_50527_p0 =  (sc_lv<73>) (grp_fu_50527_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50527_p00() {
    grp_fu_50527_p00 = esl_zext<79,73>(p_Val2_3771_reg_92477.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50527_p1() {
    grp_fu_50527_p1 =  (sc_lv<6>) (grp_fu_50527_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50527_p10() {
    grp_fu_50527_p10 = esl_zext<79,6>(p_Val2_7117_reg_92483.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50613_p0() {
    grp_fu_50613_p0 =  (sc_lv<83>) (grp_fu_50613_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50613_p00() {
    grp_fu_50613_p00 = esl_zext<89,83>(p_Val2_6396_fu_50571_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50613_p1() {
    grp_fu_50613_p1 =  (sc_lv<6>) (grp_fu_50613_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50613_p10() {
    grp_fu_50613_p10 = esl_zext<89,6>(p_Val2_7118_reg_92524.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50703_p0() {
    grp_fu_50703_p0 =  (sc_lv<92>) (grp_fu_50703_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50703_p00() {
    grp_fu_50703_p00 = esl_zext<98,92>(p_Val2_3783_reg_92555.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50703_p1() {
    grp_fu_50703_p1 =  (sc_lv<6>) (grp_fu_50703_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50703_p10() {
    grp_fu_50703_p10 = esl_zext<98,6>(p_Val2_7119_reg_92561.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50793_p0() {
    grp_fu_50793_p0 =  (sc_lv<87>) (grp_fu_50793_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50793_p00() {
    grp_fu_50793_p00 = esl_zext<93,87>(p_Val2_3791_reg_92592.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50793_p1() {
    grp_fu_50793_p1 =  (sc_lv<6>) (grp_fu_50793_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50793_p10() {
    grp_fu_50793_p10 = esl_zext<93,6>(p_Val2_7120_reg_92598.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50883_p0() {
    grp_fu_50883_p0 =  (sc_lv<82>) (grp_fu_50883_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50883_p00() {
    grp_fu_50883_p00 = esl_zext<88,82>(p_Val2_3798_reg_92629.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50883_p1() {
    grp_fu_50883_p1 =  (sc_lv<6>) (grp_fu_50883_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50883_p10() {
    grp_fu_50883_p10 = esl_zext<88,6>(p_Val2_7121_reg_92635.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50973_p0() {
    grp_fu_50973_p0 =  (sc_lv<77>) (grp_fu_50973_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50973_p00() {
    grp_fu_50973_p00 = esl_zext<83,77>(p_Val2_3804_reg_92666.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50973_p1() {
    grp_fu_50973_p1 =  (sc_lv<6>) (grp_fu_50973_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50973_p10() {
    grp_fu_50973_p10 = esl_zext<83,6>(p_Val2_7122_reg_92672.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_50982_p0() {
    grp_fu_50982_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_51120_p0() {
    grp_fu_51120_p0 =  (sc_lv<40>) (OP1_V_1371_cast_fu_51117_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51120_p1() {
    grp_fu_51120_p1 =  (sc_lv<40>) (OP1_V_1371_cast_fu_51117_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51376_p0() {
    grp_fu_51376_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_51487_p0() {
    grp_fu_51487_p0 =  (sc_lv<43>) (grp_fu_51487_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51487_p00() {
    grp_fu_51487_p00 = esl_zext<79,43>(tmp_5454_fu_51471_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51487_p1() {
    grp_fu_51487_p1 =  (sc_lv<36>) (grp_fu_51487_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51487_p10() {
    grp_fu_51487_p10 = esl_zext<79,36>(r_V_434_reg_92921.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51544_p0() {
    grp_fu_51544_p0 =  (sc_lv<49>) (grp_fu_51544_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51544_p00() {
    grp_fu_51544_p00 = esl_zext<93,49>(tmp_5459_fu_51528_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51544_p1() {
    grp_fu_51544_p1 =  (sc_lv<44>) (grp_fu_51544_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51544_p10() {
    grp_fu_51544_p10 = esl_zext<93,44>(p_Val2_3826_reg_92952.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51614_p0() {
    grp_fu_51614_p0 =  (sc_lv<50>) (grp_fu_51614_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51614_p00() {
    grp_fu_51614_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51614_p1() {
    grp_fu_51614_p1 =  (sc_lv<50>) (grp_fu_51614_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_51614_p10() {
    grp_fu_51614_p10 = esl_zext<100,50>(tmp_5463_reg_92978.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52024_p0() {
    grp_fu_52024_p0 =  (sc_lv<54>) (grp_fu_52024_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52024_p00() {
    grp_fu_52024_p00 = esl_zext<60,54>(b_frac_V_155_reg_93119.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52024_p1() {
    grp_fu_52024_p1 =  (sc_lv<6>) (grp_fu_52024_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52024_p10() {
    grp_fu_52024_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52120_p0() {
    grp_fu_52120_p0 =  (sc_lv<71>) (grp_fu_52120_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52120_p00() {
    grp_fu_52120_p00 = esl_zext<75,71>(p_Val2_3990_fu_52044_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52120_p1() {
    grp_fu_52120_p1 =  (sc_lv<4>) (grp_fu_52120_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52120_p10() {
    grp_fu_52120_p10 = esl_zext<75,4>(p_Val2_7207_reg_93147.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52202_p0() {
    grp_fu_52202_p0 =  (sc_lv<73>) (grp_fu_52202_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52202_p00() {
    grp_fu_52202_p00 = esl_zext<79,73>(p_Val2_3996_reg_93173.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52202_p1() {
    grp_fu_52202_p1 =  (sc_lv<6>) (grp_fu_52202_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52202_p10() {
    grp_fu_52202_p10 = esl_zext<79,6>(p_Val2_7208_reg_93179.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52288_p0() {
    grp_fu_52288_p0 =  (sc_lv<83>) (grp_fu_52288_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52288_p00() {
    grp_fu_52288_p00 = esl_zext<89,83>(p_Val2_6560_fu_52246_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52288_p1() {
    grp_fu_52288_p1 =  (sc_lv<6>) (grp_fu_52288_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52288_p10() {
    grp_fu_52288_p10 = esl_zext<89,6>(p_Val2_7209_reg_93220.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52378_p0() {
    grp_fu_52378_p0 =  (sc_lv<92>) (grp_fu_52378_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52378_p00() {
    grp_fu_52378_p00 = esl_zext<98,92>(p_Val2_4007_reg_93251.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52378_p1() {
    grp_fu_52378_p1 =  (sc_lv<6>) (grp_fu_52378_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52378_p10() {
    grp_fu_52378_p10 = esl_zext<98,6>(p_Val2_7210_reg_93257.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52468_p0() {
    grp_fu_52468_p0 =  (sc_lv<87>) (grp_fu_52468_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52468_p00() {
    grp_fu_52468_p00 = esl_zext<93,87>(p_Val2_4013_reg_93288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52468_p1() {
    grp_fu_52468_p1 =  (sc_lv<6>) (grp_fu_52468_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52468_p10() {
    grp_fu_52468_p10 = esl_zext<93,6>(p_Val2_7211_reg_93294.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52558_p0() {
    grp_fu_52558_p0 =  (sc_lv<82>) (grp_fu_52558_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52558_p00() {
    grp_fu_52558_p00 = esl_zext<88,82>(p_Val2_4019_reg_93325.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52558_p1() {
    grp_fu_52558_p1 =  (sc_lv<6>) (grp_fu_52558_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52558_p10() {
    grp_fu_52558_p10 = esl_zext<88,6>(p_Val2_7212_reg_93331.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52648_p0() {
    grp_fu_52648_p0 =  (sc_lv<77>) (grp_fu_52648_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52648_p00() {
    grp_fu_52648_p00 = esl_zext<83,77>(p_Val2_4025_reg_93362.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52648_p1() {
    grp_fu_52648_p1 =  (sc_lv<6>) (grp_fu_52648_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52648_p10() {
    grp_fu_52648_p10 = esl_zext<83,6>(p_Val2_7213_reg_93368.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52663_p0() {
    grp_fu_52663_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_52801_p0() {
    grp_fu_52801_p0 =  (sc_lv<40>) (OP1_V_1392_cast_fu_52798_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_52801_p1() {
    grp_fu_52801_p1 =  (sc_lv<40>) (OP1_V_1392_cast_fu_52798_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53057_p0() {
    grp_fu_53057_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_53168_p0() {
    grp_fu_53168_p0 =  (sc_lv<43>) (grp_fu_53168_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53168_p00() {
    grp_fu_53168_p00 = esl_zext<79,43>(tmp_5751_fu_53152_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53168_p1() {
    grp_fu_53168_p1 =  (sc_lv<36>) (grp_fu_53168_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53168_p10() {
    grp_fu_53168_p10 = esl_zext<79,36>(r_V_477_reg_93622.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53225_p0() {
    grp_fu_53225_p0 =  (sc_lv<49>) (grp_fu_53225_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53225_p00() {
    grp_fu_53225_p00 = esl_zext<93,49>(tmp_5756_fu_53209_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53225_p1() {
    grp_fu_53225_p1 =  (sc_lv<44>) (grp_fu_53225_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53225_p10() {
    grp_fu_53225_p10 = esl_zext<93,44>(p_Val2_4047_reg_93653.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53295_p0() {
    grp_fu_53295_p0 =  (sc_lv<50>) (grp_fu_53295_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53295_p00() {
    grp_fu_53295_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53295_p1() {
    grp_fu_53295_p1 =  (sc_lv<50>) (grp_fu_53295_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53295_p10() {
    grp_fu_53295_p10 = esl_zext<100,50>(tmp_5759_reg_93679.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53568_p0() {
    grp_fu_53568_p0 =  (sc_lv<6>) (grp_fu_53568_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53568_p00() {
    grp_fu_53568_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53568_p1() {
    grp_fu_53568_p1 =  (sc_lv<54>) (grp_fu_53568_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53568_p10() {
    grp_fu_53568_p10 = esl_zext<60,54>(b_frac_V_162_reg_93801.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53664_p0() {
    grp_fu_53664_p0 =  (sc_lv<4>) (grp_fu_53664_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53664_p00() {
    grp_fu_53664_p00 = esl_zext<75,4>(p_Val2_7214_reg_93829.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53664_p1() {
    grp_fu_53664_p1 =  (sc_lv<71>) (grp_fu_53664_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53664_p10() {
    grp_fu_53664_p10 = esl_zext<75,71>(p_Val2_4141_fu_53588_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53746_p0() {
    grp_fu_53746_p0 =  (sc_lv<6>) (grp_fu_53746_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53746_p00() {
    grp_fu_53746_p00 = esl_zext<79,6>(p_Val2_7215_reg_93861.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53746_p1() {
    grp_fu_53746_p1 =  (sc_lv<73>) (grp_fu_53746_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53746_p10() {
    grp_fu_53746_p10 = esl_zext<79,73>(p_Val2_4148_reg_93855.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53832_p0() {
    grp_fu_53832_p0 =  (sc_lv<6>) (grp_fu_53832_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53832_p00() {
    grp_fu_53832_p00 = esl_zext<89,6>(p_Val2_7216_reg_93902.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53832_p1() {
    grp_fu_53832_p1 =  (sc_lv<83>) (grp_fu_53832_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53832_p10() {
    grp_fu_53832_p10 = esl_zext<89,83>(p_Val2_6624_fu_53790_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53922_p0() {
    grp_fu_53922_p0 =  (sc_lv<6>) (grp_fu_53922_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53922_p00() {
    grp_fu_53922_p00 = esl_zext<98,6>(p_Val2_7217_reg_93939.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53922_p1() {
    grp_fu_53922_p1 =  (sc_lv<92>) (grp_fu_53922_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_53922_p10() {
    grp_fu_53922_p10 = esl_zext<98,92>(p_Val2_4160_reg_93933.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54012_p0() {
    grp_fu_54012_p0 =  (sc_lv<6>) (grp_fu_54012_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54012_p00() {
    grp_fu_54012_p00 = esl_zext<93,6>(p_Val2_7218_reg_93976.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54012_p1() {
    grp_fu_54012_p1 =  (sc_lv<87>) (grp_fu_54012_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54012_p10() {
    grp_fu_54012_p10 = esl_zext<93,87>(p_Val2_4166_reg_93970.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54102_p0() {
    grp_fu_54102_p0 =  (sc_lv<6>) (grp_fu_54102_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54102_p00() {
    grp_fu_54102_p00 = esl_zext<88,6>(p_Val2_7219_reg_94013.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54102_p1() {
    grp_fu_54102_p1 =  (sc_lv<82>) (grp_fu_54102_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54102_p10() {
    grp_fu_54102_p10 = esl_zext<88,82>(p_Val2_4174_reg_94007.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54192_p0() {
    grp_fu_54192_p0 =  (sc_lv<6>) (grp_fu_54192_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54192_p00() {
    grp_fu_54192_p00 = esl_zext<83,6>(p_Val2_7220_reg_94050.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54192_p1() {
    grp_fu_54192_p1 =  (sc_lv<77>) (grp_fu_54192_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54192_p10() {
    grp_fu_54192_p10 = esl_zext<83,77>(p_Val2_4182_reg_94044.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54229_p0() {
    grp_fu_54229_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_54367_p0() {
    grp_fu_54367_p0 =  (sc_lv<40>) (OP1_V_1393_cast_fu_54364_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54367_p1() {
    grp_fu_54367_p1 =  (sc_lv<40>) (OP1_V_1393_cast_fu_54364_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54614_p0() {
    grp_fu_54614_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_54725_p0() {
    grp_fu_54725_p0 =  (sc_lv<36>) (grp_fu_54725_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54725_p00() {
    grp_fu_54725_p00 = esl_zext<79,36>(r_V_480_reg_94305.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54725_p1() {
    grp_fu_54725_p1 =  (sc_lv<43>) (grp_fu_54725_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54725_p10() {
    grp_fu_54725_p10 = esl_zext<79,43>(tmp_5964_fu_54709_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54782_p0() {
    grp_fu_54782_p0 =  (sc_lv<44>) (grp_fu_54782_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54782_p00() {
    grp_fu_54782_p00 = esl_zext<93,44>(p_Val2_4207_reg_94336.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54782_p1() {
    grp_fu_54782_p1 =  (sc_lv<49>) (grp_fu_54782_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54782_p10() {
    grp_fu_54782_p10 = esl_zext<93,49>(tmp_5969_fu_54766_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54852_p0() {
    grp_fu_54852_p0 =  (sc_lv<50>) (grp_fu_54852_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54852_p00() {
    grp_fu_54852_p00 = esl_zext<100,50>(tmp_5972_reg_94362.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54852_p1() {
    grp_fu_54852_p1 =  (sc_lv<50>) (grp_fu_54852_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_54852_p10() {
    grp_fu_54852_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55301_p0() {
    grp_fu_55301_p0 =  (sc_lv<54>) (grp_fu_55301_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55301_p00() {
    grp_fu_55301_p00 = esl_zext<60,54>(b_frac_V_169_reg_94526.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55301_p1() {
    grp_fu_55301_p1 =  (sc_lv<6>) (grp_fu_55301_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55301_p10() {
    grp_fu_55301_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55397_p0() {
    grp_fu_55397_p0 =  (sc_lv<71>) (grp_fu_55397_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55397_p00() {
    grp_fu_55397_p00 = esl_zext<75,71>(p_Val2_4294_fu_55321_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55397_p1() {
    grp_fu_55397_p1 =  (sc_lv<4>) (grp_fu_55397_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55397_p10() {
    grp_fu_55397_p10 = esl_zext<75,4>(p_Val2_7221_reg_94554.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55479_p0() {
    grp_fu_55479_p0 =  (sc_lv<73>) (grp_fu_55479_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55479_p00() {
    grp_fu_55479_p00 = esl_zext<79,73>(p_Val2_4300_reg_94580.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55479_p1() {
    grp_fu_55479_p1 =  (sc_lv<6>) (grp_fu_55479_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55479_p10() {
    grp_fu_55479_p10 = esl_zext<79,6>(p_Val2_7222_reg_94586.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55565_p0() {
    grp_fu_55565_p0 =  (sc_lv<83>) (grp_fu_55565_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55565_p00() {
    grp_fu_55565_p00 = esl_zext<89,83>(p_Val2_6677_fu_55523_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55565_p1() {
    grp_fu_55565_p1 =  (sc_lv<6>) (grp_fu_55565_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55565_p10() {
    grp_fu_55565_p10 = esl_zext<89,6>(p_Val2_7223_reg_94627.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55655_p0() {
    grp_fu_55655_p0 =  (sc_lv<92>) (grp_fu_55655_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55655_p00() {
    grp_fu_55655_p00 = esl_zext<98,92>(p_Val2_4311_reg_94658.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55655_p1() {
    grp_fu_55655_p1 =  (sc_lv<6>) (grp_fu_55655_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55655_p10() {
    grp_fu_55655_p10 = esl_zext<98,6>(p_Val2_7224_reg_94664.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55745_p0() {
    grp_fu_55745_p0 =  (sc_lv<87>) (grp_fu_55745_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55745_p00() {
    grp_fu_55745_p00 = esl_zext<93,87>(p_Val2_4317_reg_94695.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55745_p1() {
    grp_fu_55745_p1 =  (sc_lv<6>) (grp_fu_55745_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55745_p10() {
    grp_fu_55745_p10 = esl_zext<93,6>(p_Val2_7225_reg_94701.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55835_p0() {
    grp_fu_55835_p0 =  (sc_lv<82>) (grp_fu_55835_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55835_p00() {
    grp_fu_55835_p00 = esl_zext<88,82>(p_Val2_4323_reg_94732.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55835_p1() {
    grp_fu_55835_p1 =  (sc_lv<6>) (grp_fu_55835_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55835_p10() {
    grp_fu_55835_p10 = esl_zext<88,6>(p_Val2_7226_reg_94738.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55897_p0() {
    grp_fu_55897_p0 =  (sc_lv<77>) (grp_fu_55897_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55897_p00() {
    grp_fu_55897_p00 = esl_zext<83,77>(p_Val2_4329_reg_94769.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55897_p1() {
    grp_fu_55897_p1 =  (sc_lv<6>) (grp_fu_55897_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55897_p10() {
    grp_fu_55897_p10 = esl_zext<83,6>(p_Val2_7227_reg_94775.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_55912_p0() {
    grp_fu_55912_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_56028_p0() {
    grp_fu_56028_p0 =  (sc_lv<40>) (OP1_V_1394_cast_fu_56025_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56028_p1() {
    grp_fu_56028_p1 =  (sc_lv<40>) (OP1_V_1394_cast_fu_56025_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56180_p0() {
    grp_fu_56180_p0 =  (sc_lv<54>) (ap_const_lv131_lc_1);
}

void particlemaster_ReadCalculations::thread_grp_fu_56180_p1() {
    grp_fu_56180_p1 =  (sc_lv<78>) (OP1_V_673_fu_56177_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56189_p0() {
    grp_fu_56189_p0 =  (sc_lv<55>) (ap_const_lv130_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_56195_p0() {
    grp_fu_56195_p0 =  (sc_lv<55>) (ap_const_lv131_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_56195_p1() {
    grp_fu_56195_p1 =  (sc_lv<78>) (OP1_V_673_fu_56177_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56307_p0() {
    grp_fu_56307_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_56418_p0() {
    grp_fu_56418_p0 =  (sc_lv<43>) (grp_fu_56418_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56418_p00() {
    grp_fu_56418_p00 = esl_zext<79,43>(tmp_6143_fu_56402_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56418_p1() {
    grp_fu_56418_p1 =  (sc_lv<36>) (grp_fu_56418_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56418_p10() {
    grp_fu_56418_p10 = esl_zext<79,36>(r_V_483_reg_95021.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56475_p0() {
    grp_fu_56475_p0 =  (sc_lv<49>) (grp_fu_56475_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56475_p00() {
    grp_fu_56475_p00 = esl_zext<93,49>(tmp_6151_fu_56459_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56475_p1() {
    grp_fu_56475_p1 =  (sc_lv<44>) (grp_fu_56475_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56475_p10() {
    grp_fu_56475_p10 = esl_zext<93,44>(p_Val2_4351_reg_95052.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56545_p0() {
    grp_fu_56545_p0 =  (sc_lv<50>) (grp_fu_56545_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56545_p00() {
    grp_fu_56545_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56545_p1() {
    grp_fu_56545_p1 =  (sc_lv<50>) (grp_fu_56545_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56545_p10() {
    grp_fu_56545_p10 = esl_zext<100,50>(tmp_6154_reg_95078.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56810_p0() {
    grp_fu_56810_p0 =  (sc_lv<6>) (grp_fu_56810_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56810_p00() {
    grp_fu_56810_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56810_p1() {
    grp_fu_56810_p1 =  (sc_lv<54>) (grp_fu_56810_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56810_p10() {
    grp_fu_56810_p10 = esl_zext<60,54>(b_frac_V_175_reg_95207.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56906_p0() {
    grp_fu_56906_p0 =  (sc_lv<4>) (grp_fu_56906_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56906_p00() {
    grp_fu_56906_p00 = esl_zext<75,4>(p_Val2_7228_reg_95235.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56906_p1() {
    grp_fu_56906_p1 =  (sc_lv<71>) (grp_fu_56906_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56906_p10() {
    grp_fu_56906_p10 = esl_zext<75,71>(p_Val2_4436_fu_56830_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56988_p0() {
    grp_fu_56988_p0 =  (sc_lv<6>) (grp_fu_56988_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56988_p00() {
    grp_fu_56988_p00 = esl_zext<79,6>(p_Val2_7229_reg_95267.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56988_p1() {
    grp_fu_56988_p1 =  (sc_lv<73>) (grp_fu_56988_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_56988_p10() {
    grp_fu_56988_p10 = esl_zext<79,73>(p_Val2_4443_reg_95261.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57074_p0() {
    grp_fu_57074_p0 =  (sc_lv<6>) (grp_fu_57074_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57074_p00() {
    grp_fu_57074_p00 = esl_zext<89,6>(p_Val2_7230_reg_95308.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57074_p1() {
    grp_fu_57074_p1 =  (sc_lv<83>) (grp_fu_57074_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57074_p10() {
    grp_fu_57074_p10 = esl_zext<89,83>(p_Val2_6760_fu_57032_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57164_p0() {
    grp_fu_57164_p0 =  (sc_lv<6>) (grp_fu_57164_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57164_p00() {
    grp_fu_57164_p00 = esl_zext<98,6>(p_Val2_7231_reg_95345.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57164_p1() {
    grp_fu_57164_p1 =  (sc_lv<92>) (grp_fu_57164_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57164_p10() {
    grp_fu_57164_p10 = esl_zext<98,92>(p_Val2_4456_reg_95339.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57254_p0() {
    grp_fu_57254_p0 =  (sc_lv<6>) (grp_fu_57254_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57254_p00() {
    grp_fu_57254_p00 = esl_zext<93,6>(p_Val2_7232_reg_95382.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57254_p1() {
    grp_fu_57254_p1 =  (sc_lv<87>) (grp_fu_57254_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57254_p10() {
    grp_fu_57254_p10 = esl_zext<93,87>(p_Val2_4463_reg_95376.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57344_p0() {
    grp_fu_57344_p0 =  (sc_lv<6>) (grp_fu_57344_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57344_p00() {
    grp_fu_57344_p00 = esl_zext<88,6>(p_Val2_7233_reg_95419.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57344_p1() {
    grp_fu_57344_p1 =  (sc_lv<82>) (grp_fu_57344_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57344_p10() {
    grp_fu_57344_p10 = esl_zext<88,82>(p_Val2_4469_reg_95413.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57434_p0() {
    grp_fu_57434_p0 =  (sc_lv<6>) (grp_fu_57434_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57434_p00() {
    grp_fu_57434_p00 = esl_zext<83,6>(p_Val2_7234_reg_95456.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57434_p1() {
    grp_fu_57434_p1 =  (sc_lv<77>) (grp_fu_57434_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57434_p10() {
    grp_fu_57434_p10 = esl_zext<83,77>(p_Val2_4477_reg_95450.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57481_p0() {
    grp_fu_57481_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_57619_p0() {
    grp_fu_57619_p0 =  (sc_lv<40>) (OP1_V_1395_cast_fu_57616_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57619_p1() {
    grp_fu_57619_p1 =  (sc_lv<40>) (OP1_V_1395_cast_fu_57616_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57747_p0() {
    grp_fu_57747_p0 =  (sc_lv<54>) (ap_const_lv131_lc_3);
}

void particlemaster_ReadCalculations::thread_grp_fu_57747_p1() {
    grp_fu_57747_p1 =  (sc_lv<78>) (OP1_V_697_fu_57744_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57756_p0() {
    grp_fu_57756_p0 =  (sc_lv<56>) (ap_const_lv130_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_57762_p0() {
    grp_fu_57762_p0 =  (sc_lv<56>) (ap_const_lv131_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_57762_p1() {
    grp_fu_57762_p1 =  (sc_lv<78>) (OP1_V_697_fu_57744_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57882_p0() {
    grp_fu_57882_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_57993_p0() {
    grp_fu_57993_p0 =  (sc_lv<36>) (grp_fu_57993_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57993_p00() {
    grp_fu_57993_p00 = esl_zext<79,36>(r_V_486_reg_95755.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57993_p1() {
    grp_fu_57993_p1 =  (sc_lv<43>) (grp_fu_57993_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_57993_p10() {
    grp_fu_57993_p10 = esl_zext<79,43>(tmp_6358_fu_57977_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58050_p0() {
    grp_fu_58050_p0 =  (sc_lv<44>) (grp_fu_58050_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58050_p00() {
    grp_fu_58050_p00 = esl_zext<93,44>(p_Val2_4503_reg_95786.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58050_p1() {
    grp_fu_58050_p1 =  (sc_lv<49>) (grp_fu_58050_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58050_p10() {
    grp_fu_58050_p10 = esl_zext<93,49>(tmp_6363_fu_58034_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58120_p0() {
    grp_fu_58120_p0 =  (sc_lv<50>) (grp_fu_58120_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58120_p00() {
    grp_fu_58120_p00 = esl_zext<100,50>(tmp_6366_reg_95812.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58120_p1() {
    grp_fu_58120_p1 =  (sc_lv<50>) (grp_fu_58120_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58120_p10() {
    grp_fu_58120_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58637_p0() {
    grp_fu_58637_p0 =  (sc_lv<54>) (grp_fu_58637_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58637_p00() {
    grp_fu_58637_p00 = esl_zext<60,54>(b_frac_V_181_reg_95997.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58637_p1() {
    grp_fu_58637_p1 =  (sc_lv<6>) (grp_fu_58637_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58637_p10() {
    grp_fu_58637_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58733_p0() {
    grp_fu_58733_p0 =  (sc_lv<71>) (grp_fu_58733_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58733_p00() {
    grp_fu_58733_p00 = esl_zext<75,71>(p_Val2_4582_fu_58657_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58733_p1() {
    grp_fu_58733_p1 =  (sc_lv<4>) (grp_fu_58733_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58733_p10() {
    grp_fu_58733_p10 = esl_zext<75,4>(p_Val2_7235_reg_96025.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58815_p0() {
    grp_fu_58815_p0 =  (sc_lv<73>) (grp_fu_58815_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58815_p00() {
    grp_fu_58815_p00 = esl_zext<79,73>(p_Val2_4589_reg_96051.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58815_p1() {
    grp_fu_58815_p1 =  (sc_lv<6>) (grp_fu_58815_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58815_p10() {
    grp_fu_58815_p10 = esl_zext<79,6>(p_Val2_7236_reg_96057.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58901_p0() {
    grp_fu_58901_p0 =  (sc_lv<83>) (grp_fu_58901_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58901_p00() {
    grp_fu_58901_p00 = esl_zext<89,83>(p_Val2_6812_fu_58859_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58901_p1() {
    grp_fu_58901_p1 =  (sc_lv<6>) (grp_fu_58901_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58901_p10() {
    grp_fu_58901_p10 = esl_zext<89,6>(p_Val2_7237_reg_96098.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58991_p0() {
    grp_fu_58991_p0 =  (sc_lv<92>) (grp_fu_58991_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58991_p00() {
    grp_fu_58991_p00 = esl_zext<98,92>(p_Val2_4602_reg_96129.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58991_p1() {
    grp_fu_58991_p1 =  (sc_lv<6>) (grp_fu_58991_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_58991_p10() {
    grp_fu_58991_p10 = esl_zext<98,6>(p_Val2_7238_reg_96135.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59081_p0() {
    grp_fu_59081_p0 =  (sc_lv<87>) (grp_fu_59081_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59081_p00() {
    grp_fu_59081_p00 = esl_zext<93,87>(p_Val2_4609_reg_96166.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59081_p1() {
    grp_fu_59081_p1 =  (sc_lv<6>) (grp_fu_59081_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59081_p10() {
    grp_fu_59081_p10 = esl_zext<93,6>(p_Val2_7239_reg_96172.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59171_p0() {
    grp_fu_59171_p0 =  (sc_lv<82>) (grp_fu_59171_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59171_p00() {
    grp_fu_59171_p00 = esl_zext<88,82>(p_Val2_4615_reg_96203.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59171_p1() {
    grp_fu_59171_p1 =  (sc_lv<6>) (grp_fu_59171_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59171_p10() {
    grp_fu_59171_p10 = esl_zext<88,6>(p_Val2_7240_reg_96209.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59261_p0() {
    grp_fu_59261_p0 =  (sc_lv<77>) (grp_fu_59261_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59261_p00() {
    grp_fu_59261_p00 = esl_zext<83,77>(p_Val2_4623_reg_96240.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59261_p1() {
    grp_fu_59261_p1 =  (sc_lv<6>) (grp_fu_59261_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59261_p10() {
    grp_fu_59261_p10 = esl_zext<83,6>(p_Val2_7241_reg_96246.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59276_p0() {
    grp_fu_59276_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_59414_p0() {
    grp_fu_59414_p0 =  (sc_lv<40>) (OP1_V_1396_cast_fu_59411_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59414_p1() {
    grp_fu_59414_p1 =  (sc_lv<40>) (OP1_V_1396_cast_fu_59411_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59670_p0() {
    grp_fu_59670_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_59781_p0() {
    grp_fu_59781_p0 =  (sc_lv<43>) (grp_fu_59781_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59781_p00() {
    grp_fu_59781_p00 = esl_zext<79,43>(tmp_6547_fu_59765_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59781_p1() {
    grp_fu_59781_p1 =  (sc_lv<36>) (grp_fu_59781_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59781_p10() {
    grp_fu_59781_p10 = esl_zext<79,36>(r_V_489_reg_96500.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59838_p0() {
    grp_fu_59838_p0 =  (sc_lv<49>) (grp_fu_59838_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59838_p00() {
    grp_fu_59838_p00 = esl_zext<93,49>(tmp_6552_fu_59822_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59838_p1() {
    grp_fu_59838_p1 =  (sc_lv<44>) (grp_fu_59838_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59838_p10() {
    grp_fu_59838_p10 = esl_zext<93,44>(p_Val2_4651_reg_96531.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59908_p0() {
    grp_fu_59908_p0 =  (sc_lv<50>) (grp_fu_59908_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59908_p00() {
    grp_fu_59908_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59908_p1() {
    grp_fu_59908_p1 =  (sc_lv<50>) (grp_fu_59908_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_59908_p10() {
    grp_fu_59908_p10 = esl_zext<100,50>(tmp_6556_reg_96557.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60181_p0() {
    grp_fu_60181_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_60302_p0() {
    grp_fu_60302_p0 =  (sc_lv<36>) (grp_fu_60302_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60302_p00() {
    grp_fu_60302_p00 = esl_zext<79,36>(r_V_491_reg_96692.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60302_p1() {
    grp_fu_60302_p1 =  (sc_lv<43>) (grp_fu_60302_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60302_p10() {
    grp_fu_60302_p10 = esl_zext<79,43>(tmp_6623_fu_60286_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60359_p0() {
    grp_fu_60359_p0 =  (sc_lv<44>) (grp_fu_60359_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60359_p00() {
    grp_fu_60359_p00 = esl_zext<93,44>(p_Val2_4690_reg_96723.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60359_p1() {
    grp_fu_60359_p1 =  (sc_lv<49>) (grp_fu_60359_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60359_p10() {
    grp_fu_60359_p10 = esl_zext<93,49>(tmp_6631_fu_60343_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60429_p0() {
    grp_fu_60429_p0 =  (sc_lv<50>) (grp_fu_60429_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60429_p00() {
    grp_fu_60429_p00 = esl_zext<100,50>(tmp_6634_reg_96749.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60429_p1() {
    grp_fu_60429_p1 =  (sc_lv<50>) (grp_fu_60429_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60429_p10() {
    grp_fu_60429_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60911_p0() {
    grp_fu_60911_p0 =  (sc_lv<54>) (grp_fu_60911_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60911_p00() {
    grp_fu_60911_p00 = esl_zext<60,54>(b_frac_V_186_reg_96947.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60911_p1() {
    grp_fu_60911_p1 =  (sc_lv<6>) (grp_fu_60911_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_60911_p10() {
    grp_fu_60911_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61007_p0() {
    grp_fu_61007_p0 =  (sc_lv<71>) (grp_fu_61007_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61007_p00() {
    grp_fu_61007_p00 = esl_zext<75,71>(p_Val2_4778_fu_60931_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61007_p1() {
    grp_fu_61007_p1 =  (sc_lv<4>) (grp_fu_61007_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61007_p10() {
    grp_fu_61007_p10 = esl_zext<75,4>(p_Val2_7242_reg_96975.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61089_p0() {
    grp_fu_61089_p0 =  (sc_lv<73>) (grp_fu_61089_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61089_p00() {
    grp_fu_61089_p00 = esl_zext<79,73>(p_Val2_4785_reg_97001.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61089_p1() {
    grp_fu_61089_p1 =  (sc_lv<6>) (grp_fu_61089_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61089_p10() {
    grp_fu_61089_p10 = esl_zext<79,6>(p_Val2_7243_reg_97007.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61175_p0() {
    grp_fu_61175_p0 =  (sc_lv<83>) (grp_fu_61175_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61175_p00() {
    grp_fu_61175_p00 = esl_zext<89,83>(p_Val2_6920_fu_61133_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61175_p1() {
    grp_fu_61175_p1 =  (sc_lv<6>) (grp_fu_61175_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61175_p10() {
    grp_fu_61175_p10 = esl_zext<89,6>(p_Val2_7244_reg_97048.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61265_p0() {
    grp_fu_61265_p0 =  (sc_lv<92>) (grp_fu_61265_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61265_p00() {
    grp_fu_61265_p00 = esl_zext<98,92>(p_Val2_4797_reg_97079.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61265_p1() {
    grp_fu_61265_p1 =  (sc_lv<6>) (grp_fu_61265_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61265_p10() {
    grp_fu_61265_p10 = esl_zext<98,6>(p_Val2_7245_reg_97085.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61355_p0() {
    grp_fu_61355_p0 =  (sc_lv<87>) (grp_fu_61355_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61355_p00() {
    grp_fu_61355_p00 = esl_zext<93,87>(p_Val2_4806_reg_97116.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61355_p1() {
    grp_fu_61355_p1 =  (sc_lv<6>) (grp_fu_61355_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61355_p10() {
    grp_fu_61355_p10 = esl_zext<93,6>(p_Val2_7246_reg_97122.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61445_p0() {
    grp_fu_61445_p0 =  (sc_lv<82>) (grp_fu_61445_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61445_p00() {
    grp_fu_61445_p00 = esl_zext<88,82>(p_Val2_4813_reg_97153.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61445_p1() {
    grp_fu_61445_p1 =  (sc_lv<6>) (grp_fu_61445_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61445_p10() {
    grp_fu_61445_p10 = esl_zext<88,6>(p_Val2_7247_reg_97159.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61535_p0() {
    grp_fu_61535_p0 =  (sc_lv<77>) (grp_fu_61535_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61535_p00() {
    grp_fu_61535_p00 = esl_zext<83,77>(p_Val2_4820_reg_97190.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61535_p1() {
    grp_fu_61535_p1 =  (sc_lv<6>) (grp_fu_61535_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61535_p10() {
    grp_fu_61535_p10 = esl_zext<83,6>(p_Val2_7248_reg_97196.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61544_p0() {
    grp_fu_61544_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_6164_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1259.read()))) {
        grp_fu_6164_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1408.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1989.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2571.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1786.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2366.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2948.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3528.read()))) {
        grp_fu_6164_opcode = ap_const_lv2_0;
    } else {
        grp_fu_6164_opcode = "XX";
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6164_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1786.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2366.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2948.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3528.read()))) {
        grp_fu_6164_p0 = x1s_load_reg_83141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1408.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1989.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2571.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3151.read()))) {
        grp_fu_6164_p0 = x2s_load_reg_84010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()))) {
        grp_fu_6164_p0 = particlemaster_x1_be_reg_73282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read()))) {
        grp_fu_6164_p0 = particlemaster_x2_be_reg_74119.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1259.read()))) {
        grp_fu_6164_p0 = ap_const_lv32_3F800000;
    } else {
        grp_fu_6164_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6164_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1259.read())) {
        grp_fu_6164_p1 = x1s_load_reg_83141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state163.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state743.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1408.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1989.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2571.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1786.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2366.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2948.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3528.read()))) {
        grp_fu_6164_p1 = ap_const_lv32_3F800000;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_fu_6164_p1 = particlemaster_x1_best_i.read();
    } else {
        grp_fu_6164_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_61682_p0() {
    grp_fu_61682_p0 =  (sc_lv<40>) (OP1_V_1398_cast_fu_61679_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_61682_p1() {
    grp_fu_61682_p1 =  (sc_lv<40>) (OP1_V_1398_cast_fu_61679_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6171_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3663.read())) {
        grp_fu_6171_p0 = p_0_in_i3_reg_6119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1921.read())) {
        grp_fu_6171_p0 = p_0_in_i2_phi_fu_5792_p4.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1256.read())) {
        grp_fu_6171_p0 = p_0_in_i_reg_5628.read();
    } else {
        grp_fu_6171_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6178_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1586.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2748.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3328.read()))) {
        grp_fu_6178_p0 = x2s_load_reg_84010.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1338.read())) {
        grp_fu_6178_p0 = x1s_load_reg_83141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state340.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state920.read()))) {
        grp_fu_6178_p0 = particlemaster_x2_be_reg_74119.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state93.read())) {
        grp_fu_6178_p0 = particlemaster_x1_be_reg_73282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state168.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state545.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state748.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1125.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1264.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1791.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1994.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2371.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2576.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2953.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3156.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3533.read()))) {
        grp_fu_6178_p0 = reg_6283.read();
    } else {
        grp_fu_6178_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6186_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3604.read())) {
        grp_fu_6186_p0 = tmp_6843_fu_72707_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3502.read())) {
        grp_fu_6186_p0 = tmp_6565_fu_71058_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3227.read())) {
        grp_fu_6186_p0 = tmp_5768_fu_65560_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3024.read())) {
        grp_fu_6186_p0 = tmp_6849_fu_62340_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2922.read())) {
        grp_fu_6186_p0 = tmp_6610_fu_60691_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2647.read())) {
        grp_fu_6186_p0 = tmp_5879_fu_55193_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2442.read())) {
        grp_fu_6186_p0 = tmp_5559_fu_51778_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2340.read())) {
        grp_fu_6186_p0 = tmp_5278_fu_50129_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2065.read())) {
        grp_fu_6186_p0 = tmp_4479_fu_44629_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1862.read())) {
        grp_fu_6186_p0 = tmp_5565_fu_41422_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1789.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2369.read()))) {
        grp_fu_6186_p0 = reg_6346.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1760.read())) {
        grp_fu_6186_p0 = tmp_5325_fu_39773_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1484.read())) {
        grp_fu_6186_p0 = tmp_4590_fu_34274_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read())) {
        grp_fu_6186_p0 = tmp_4167_fu_29053_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1094.read())) {
        grp_fu_6186_p0 = tmp_3886_fu_27404_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state996.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1662.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1916.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2496.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2824.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3078.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3404.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3658.read()))) {
        grp_fu_6186_p0 = reg_6353.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        grp_fu_6186_p0 = tmp_3089_fu_21910_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        grp_fu_6186_p0 = tmp_4173_fu_18703_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state543.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2951.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3531.read()))) {
        grp_fu_6186_p0 = reg_6321.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        grp_fu_6186_p0 = tmp_3934_fu_17054_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()))) {
        grp_fu_6186_p0 = reg_6327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state921.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2167.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2749.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3329.read()))) {
        grp_fu_6186_p0 = reg_6341.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_6186_p0 = tmp_3196_fu_11553_p1.read();
    } else {
        grp_fu_6186_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6186_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3604.read())) {
        grp_fu_6186_p1 = p_015_i41_reg_101298.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3502.read())) {
        grp_fu_6186_p1 = p_015_i41_fu_71062_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3404.read())) {
        grp_fu_6186_p1 = p_015_i38_reg_100419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3329.read())) {
        grp_fu_6186_p1 = p_015_i37_fu_67124_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3227.read())) {
        grp_fu_6186_p1 = p_015_i35_fu_65564_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3024.read())) {
        grp_fu_6186_p1 = p_015_i42_reg_96838.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2922.read())) {
        grp_fu_6186_p1 = p_015_i42_fu_60695_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2824.read())) {
        grp_fu_6186_p1 = p_015_i40_reg_95959.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2749.read())) {
        grp_fu_6186_p1 = p_015_i39_fu_56757_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2647.read())) {
        grp_fu_6186_p1 = p_015_i36_fu_55197_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2442.read())) {
        grp_fu_6186_p1 = p_015_i33_reg_92314.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2340.read())) {
        grp_fu_6186_p1 = p_015_i33_fu_50133_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2242.read())) {
        grp_fu_6186_p1 = p_015_i30_reg_91436.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2167.read())) {
        grp_fu_6186_p1 = p_015_i29_fu_46199_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2065.read())) {
        grp_fu_6186_p1 = p_015_i27_fu_44633_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1862.read())) {
        grp_fu_6186_p1 = p_015_i34_reg_87851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1789.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2369.read()))) {
        grp_fu_6186_p1 = reg_6370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1760.read())) {
        grp_fu_6186_p1 = p_015_i34_fu_39777_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1662.read())) {
        grp_fu_6186_p1 = p_015_i32_reg_86973.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1586.read())) {
        grp_fu_6186_p1 = p_015_i31_fu_35794_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1484.read())) {
        grp_fu_6186_p1 = p_015_i28_fu_34278_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1196.read())) {
        grp_fu_6186_p1 = p_015_i24_reg_82388.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1094.read())) {
        grp_fu_6186_p1 = p_015_i24_fu_27408_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state996.read())) {
        grp_fu_6186_p1 = p_015_i21_reg_81509.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state921.read())) {
        grp_fu_6186_p1 = p_015_i20_fu_23474_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state819.read())) {
        grp_fu_6186_p1 = p_015_i18_fu_21914_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1250.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1916.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2496.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3078.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3658.read()))) {
        grp_fu_6186_p1 = reg_6360.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read())) {
        grp_fu_6186_p1 = p_015_i25_reg_77926.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state543.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1123.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2951.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3531.read()))) {
        grp_fu_6186_p1 = reg_6346.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state514.read())) {
        grp_fu_6186_p1 = p_015_i25_fu_17058_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        grp_fu_6186_p1 = p_015_i23_reg_77047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        grp_fu_6186_p1 = p_015_i22_fu_13117_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        grp_fu_6186_p1 = p_015_i19_fu_11557_p1.read();
    } else {
        grp_fu_6186_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6190_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1783.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2363.read()))) {
        grp_fu_6190_p0 = reg_6370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1335.read())) {
        grp_fu_6190_p0 = p_015_i26_fu_30837_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1001.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1667.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2247.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2829.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3409.read()))) {
        grp_fu_6190_p0 = reg_6353.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state537.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2945.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3525.read()))) {
        grp_fu_6190_p0 = reg_6346.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read())) {
        grp_fu_6190_p0 = reg_6327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state842.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1507.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2088.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3250.read()))) {
        grp_fu_6190_p0 = reg_6321.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        grp_fu_6190_p0 = p_015_i_fu_8117_p1.read();
    } else {
        grp_fu_6190_p0 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_6190_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state421.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1001.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1667.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2247.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2829.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3409.read()))) {
        grp_fu_6190_p1 = ap_const_lv64_4024000000000000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state537.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state842.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1117.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1507.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1783.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2088.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2363.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2945.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3250.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3525.read()))) {
        grp_fu_6190_p1 = reg_6335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1335.read()))) {
        grp_fu_6190_p1 = ap_const_lv64_4008000000000000;
    } else {
        grp_fu_6190_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

}

