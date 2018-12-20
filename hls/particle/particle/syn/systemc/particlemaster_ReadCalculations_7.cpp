#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_grp_fu_61938_p0() {
    grp_fu_61938_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_62049_p0() {
    grp_fu_62049_p0 =  (sc_lv<43>) (grp_fu_62049_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62049_p00() {
    grp_fu_62049_p00 = esl_zext<79,43>(tmp_6822_fu_62033_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62049_p1() {
    grp_fu_62049_p1 =  (sc_lv<36>) (grp_fu_62049_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62049_p10() {
    grp_fu_62049_p10 = esl_zext<79,36>(r_V_494_reg_97445.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6206_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1867.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2447.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3029.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3609.read()))) {
        grp_fu_6206_p1 = reg_6365.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state621.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state824.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1099.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1489.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1765.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2070.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2345.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2652.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2927.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3232.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3507.read()))) {
        grp_fu_6206_p1 = reg_6353.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state244.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state519.read()))) {
        grp_fu_6206_p1 = reg_6327.read();
    } else {
        grp_fu_6206_p1 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_grp_fu_62106_p0() {
    grp_fu_62106_p0 =  (sc_lv<49>) (grp_fu_62106_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62106_p00() {
    grp_fu_62106_p00 = esl_zext<93,49>(tmp_6829_fu_62090_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62106_p1() {
    grp_fu_62106_p1 =  (sc_lv<44>) (grp_fu_62106_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62106_p10() {
    grp_fu_62106_p10 = esl_zext<93,44>(p_Val2_4850_reg_97476.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6211_p4() {
    grp_fu_6211_p4 = hls_pow_reduce_an_q0.read().range(25, 16);
}

void particlemaster_ReadCalculations::thread_grp_fu_62176_p0() {
    grp_fu_62176_p0 =  (sc_lv<50>) (grp_fu_62176_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62176_p00() {
    grp_fu_62176_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62176_p1() {
    grp_fu_62176_p1 =  (sc_lv<50>) (grp_fu_62176_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62176_p10() {
    grp_fu_62176_p10 = esl_zext<100,50>(tmp_6832_reg_97502.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62392_p0() {
    grp_fu_62392_p0 =  (sc_lv<54>) (grp_fu_62392_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62392_p00() {
    grp_fu_62392_p00 = esl_zext<60,54>(b_frac_V_153_reg_97574.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62392_p1() {
    grp_fu_62392_p1 =  (sc_lv<6>) (grp_fu_62392_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62392_p10() {
    grp_fu_62392_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6241_p4() {
    grp_fu_6241_p4 = p_Val2_4717_reg_74029.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_grp_fu_62488_p0() {
    grp_fu_62488_p0 =  (sc_lv<71>) (grp_fu_62488_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62488_p00() {
    grp_fu_62488_p00 = esl_zext<75,71>(p_Val2_3910_fu_62412_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62488_p1() {
    grp_fu_62488_p1 =  (sc_lv<4>) (grp_fu_62488_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62488_p10() {
    grp_fu_62488_p10 = esl_zext<75,4>(p_Val2_7165_reg_97602.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6250_p3() {
    grp_fu_6250_p3 = p_Val2_4717_reg_74029.read().range(51, 51);
}

void particlemaster_ReadCalculations::thread_grp_fu_62570_p0() {
    grp_fu_62570_p0 =  (sc_lv<73>) (grp_fu_62570_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62570_p00() {
    grp_fu_62570_p00 = esl_zext<79,73>(p_Val2_3919_reg_97628.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62570_p1() {
    grp_fu_62570_p1 =  (sc_lv<6>) (grp_fu_62570_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62570_p10() {
    grp_fu_62570_p10 = esl_zext<79,6>(p_Val2_7166_reg_97634.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6257_p2() {
    grp_fu_6257_p2 = (!ap_const_lv12_C02.is_01() || !tmp_5646_cast_reg_74056.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C02) + sc_biguint<12>(tmp_5646_cast_reg_74056.read()));
}

void particlemaster_ReadCalculations::thread_grp_fu_6262_p4() {
    grp_fu_6262_p4 = p_Val2_6785_reg_83893.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_grp_fu_62656_p0() {
    grp_fu_62656_p0 =  (sc_lv<83>) (grp_fu_62656_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62656_p00() {
    grp_fu_62656_p00 = esl_zext<89,83>(p_Val2_6540_fu_62614_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62656_p1() {
    grp_fu_62656_p1 =  (sc_lv<6>) (grp_fu_62656_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62656_p10() {
    grp_fu_62656_p10 = esl_zext<89,6>(p_Val2_7167_reg_97675.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6271_p3() {
    grp_fu_6271_p3 = p_Val2_6785_reg_83893.read().range(51, 51);
}

void particlemaster_ReadCalculations::thread_grp_fu_62746_p0() {
    grp_fu_62746_p0 =  (sc_lv<92>) (grp_fu_62746_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62746_p00() {
    grp_fu_62746_p00 = esl_zext<98,92>(p_Val2_3932_reg_97706.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62746_p1() {
    grp_fu_62746_p1 =  (sc_lv<6>) (grp_fu_62746_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62746_p10() {
    grp_fu_62746_p10 = esl_zext<98,6>(p_Val2_7168_reg_97712.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6278_p2() {
    grp_fu_6278_p2 = (!ap_const_lv12_C02.is_01() || !tmp_8300_cast_reg_83933.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C02) + sc_biguint<12>(tmp_8300_cast_reg_83933.read()));
}

void particlemaster_ReadCalculations::thread_grp_fu_62836_p0() {
    grp_fu_62836_p0 =  (sc_lv<87>) (grp_fu_62836_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62836_p00() {
    grp_fu_62836_p00 = esl_zext<93,87>(p_Val2_3939_reg_97743.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62836_p1() {
    grp_fu_62836_p1 =  (sc_lv<6>) (grp_fu_62836_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62836_p10() {
    grp_fu_62836_p10 = esl_zext<93,6>(p_Val2_7169_reg_97749.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62926_p0() {
    grp_fu_62926_p0 =  (sc_lv<82>) (grp_fu_62926_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62926_p00() {
    grp_fu_62926_p00 = esl_zext<88,82>(p_Val2_3946_reg_97780.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62926_p1() {
    grp_fu_62926_p1 =  (sc_lv<6>) (grp_fu_62926_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_62926_p10() {
    grp_fu_62926_p10 = esl_zext<88,6>(p_Val2_7170_reg_97786.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63016_p0() {
    grp_fu_63016_p0 =  (sc_lv<77>) (grp_fu_63016_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63016_p00() {
    grp_fu_63016_p00 = esl_zext<83,77>(p_Val2_3952_reg_97817.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63016_p1() {
    grp_fu_63016_p1 =  (sc_lv<6>) (grp_fu_63016_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63016_p10() {
    grp_fu_63016_p10 = esl_zext<83,6>(p_Val2_7171_reg_97823.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63031_p0() {
    grp_fu_63031_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_63169_p0() {
    grp_fu_63169_p0 =  (sc_lv<40>) (OP1_V_1383_cast_fu_63166_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63169_p1() {
    grp_fu_63169_p1 =  (sc_lv<40>) (OP1_V_1383_cast_fu_63166_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63425_p0() {
    grp_fu_63425_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_63536_p0() {
    grp_fu_63536_p0 =  (sc_lv<43>) (grp_fu_63536_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63536_p00() {
    grp_fu_63536_p00 = esl_zext<79,43>(tmp_5660_fu_63520_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63536_p1() {
    grp_fu_63536_p1 =  (sc_lv<36>) (grp_fu_63536_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63536_p10() {
    grp_fu_63536_p10 = esl_zext<79,36>(r_V_457_reg_98077.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63593_p0() {
    grp_fu_63593_p0 =  (sc_lv<49>) (grp_fu_63593_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63593_p00() {
    grp_fu_63593_p00 = esl_zext<93,49>(tmp_5666_fu_63577_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63593_p1() {
    grp_fu_63593_p1 =  (sc_lv<44>) (grp_fu_63593_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63593_p10() {
    grp_fu_63593_p10 = esl_zext<93,44>(p_Val2_3980_reg_98108.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63663_p0() {
    grp_fu_63663_p0 =  (sc_lv<50>) (grp_fu_63663_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63663_p00() {
    grp_fu_63663_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63663_p1() {
    grp_fu_63663_p1 =  (sc_lv<50>) (grp_fu_63663_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63663_p10() {
    grp_fu_63663_p10 = esl_zext<100,50>(tmp_5669_reg_98134.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63911_p0() {
    grp_fu_63911_p0 =  (sc_lv<6>) (grp_fu_63911_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63911_p00() {
    grp_fu_63911_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63911_p1() {
    grp_fu_63911_p1 =  (sc_lv<54>) (grp_fu_63911_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_63911_p10() {
    grp_fu_63911_p10 = esl_zext<60,54>(b_frac_V_158_reg_98245.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64007_p0() {
    grp_fu_64007_p0 =  (sc_lv<4>) (grp_fu_64007_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64007_p00() {
    grp_fu_64007_p00 = esl_zext<75,4>(p_Val2_7172_reg_98273.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64007_p1() {
    grp_fu_64007_p1 =  (sc_lv<71>) (grp_fu_64007_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64007_p10() {
    grp_fu_64007_p10 = esl_zext<75,71>(p_Val2_4061_fu_63931_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64089_p0() {
    grp_fu_64089_p0 =  (sc_lv<6>) (grp_fu_64089_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64089_p00() {
    grp_fu_64089_p00 = esl_zext<79,6>(p_Val2_7173_reg_98305.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64089_p1() {
    grp_fu_64089_p1 =  (sc_lv<73>) (grp_fu_64089_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64089_p10() {
    grp_fu_64089_p10 = esl_zext<79,73>(p_Val2_4067_reg_98299.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64175_p0() {
    grp_fu_64175_p0 =  (sc_lv<6>) (grp_fu_64175_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64175_p00() {
    grp_fu_64175_p00 = esl_zext<89,6>(p_Val2_7174_reg_98346.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64175_p1() {
    grp_fu_64175_p1 =  (sc_lv<83>) (grp_fu_64175_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64175_p10() {
    grp_fu_64175_p10 = esl_zext<89,83>(p_Val2_6590_fu_64133_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64265_p0() {
    grp_fu_64265_p0 =  (sc_lv<6>) (grp_fu_64265_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64265_p00() {
    grp_fu_64265_p00 = esl_zext<98,6>(p_Val2_7175_reg_98383.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64265_p1() {
    grp_fu_64265_p1 =  (sc_lv<92>) (grp_fu_64265_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64265_p10() {
    grp_fu_64265_p10 = esl_zext<98,92>(p_Val2_4080_reg_98377.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64355_p0() {
    grp_fu_64355_p0 =  (sc_lv<6>) (grp_fu_64355_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64355_p00() {
    grp_fu_64355_p00 = esl_zext<93,6>(p_Val2_7176_reg_98420.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64355_p1() {
    grp_fu_64355_p1 =  (sc_lv<87>) (grp_fu_64355_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64355_p10() {
    grp_fu_64355_p10 = esl_zext<93,87>(p_Val2_4089_reg_98414.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64445_p0() {
    grp_fu_64445_p0 =  (sc_lv<6>) (grp_fu_64445_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64445_p00() {
    grp_fu_64445_p00 = esl_zext<88,6>(p_Val2_7177_reg_98457.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64445_p1() {
    grp_fu_64445_p1 =  (sc_lv<82>) (grp_fu_64445_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64445_p10() {
    grp_fu_64445_p10 = esl_zext<88,82>(p_Val2_4096_reg_98451.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64535_p0() {
    grp_fu_64535_p0 =  (sc_lv<6>) (grp_fu_64535_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64535_p00() {
    grp_fu_64535_p00 = esl_zext<83,6>(p_Val2_7178_reg_98494.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64535_p1() {
    grp_fu_64535_p1 =  (sc_lv<77>) (grp_fu_64535_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64535_p10() {
    grp_fu_64535_p10 = esl_zext<83,77>(p_Val2_4103_reg_98488.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64582_p0() {
    grp_fu_64582_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_64720_p0() {
    grp_fu_64720_p0 =  (sc_lv<40>) (OP1_V_1384_cast_fu_64717_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64720_p1() {
    grp_fu_64720_p1 =  (sc_lv<40>) (OP1_V_1384_cast_fu_64717_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6493_p0() {
    grp_fu_6493_p0 =  (sc_lv<6>) (grp_fu_6493_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6493_p00() {
    grp_fu_6493_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6493_p1() {
    grp_fu_6493_p1 =  (sc_lv<54>) (grp_fu_6493_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6493_p10() {
    grp_fu_6493_p10 = esl_zext<60,54>(b_frac_V_81_reg_73350.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_64967_p0() {
    grp_fu_64967_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_65078_p0() {
    grp_fu_65078_p0 =  (sc_lv<36>) (grp_fu_65078_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65078_p00() {
    grp_fu_65078_p00 = esl_zext<79,36>(r_V_460_reg_98760.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65078_p1() {
    grp_fu_65078_p1 =  (sc_lv<43>) (grp_fu_65078_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65078_p10() {
    grp_fu_65078_p10 = esl_zext<79,43>(tmp_5855_fu_65062_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65135_p0() {
    grp_fu_65135_p0 =  (sc_lv<44>) (grp_fu_65135_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65135_p00() {
    grp_fu_65135_p00 = esl_zext<93,44>(p_Val2_4127_reg_98791.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65135_p1() {
    grp_fu_65135_p1 =  (sc_lv<49>) (grp_fu_65135_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65135_p10() {
    grp_fu_65135_p10 = esl_zext<93,49>(tmp_5860_fu_65119_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65205_p0() {
    grp_fu_65205_p0 =  (sc_lv<50>) (grp_fu_65205_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65205_p00() {
    grp_fu_65205_p00 = esl_zext<100,50>(tmp_5863_reg_98817.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65205_p1() {
    grp_fu_65205_p1 =  (sc_lv<50>) (grp_fu_65205_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65205_p10() {
    grp_fu_65205_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65668_p0() {
    grp_fu_65668_p0 =  (sc_lv<54>) (grp_fu_65668_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65668_p00() {
    grp_fu_65668_p00 = esl_zext<60,54>(b_frac_V_166_reg_98986.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65668_p1() {
    grp_fu_65668_p1 =  (sc_lv<6>) (grp_fu_65668_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65668_p10() {
    grp_fu_65668_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65764_p0() {
    grp_fu_65764_p0 =  (sc_lv<71>) (grp_fu_65764_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65764_p00() {
    grp_fu_65764_p00 = esl_zext<75,71>(p_Val2_4216_fu_65688_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65764_p1() {
    grp_fu_65764_p1 =  (sc_lv<4>) (grp_fu_65764_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65764_p10() {
    grp_fu_65764_p10 = esl_zext<75,4>(p_Val2_7179_reg_99014.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65846_p0() {
    grp_fu_65846_p0 =  (sc_lv<73>) (grp_fu_65846_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65846_p00() {
    grp_fu_65846_p00 = esl_zext<79,73>(p_Val2_4226_reg_99040.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65846_p1() {
    grp_fu_65846_p1 =  (sc_lv<6>) (grp_fu_65846_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65846_p10() {
    grp_fu_65846_p10 = esl_zext<79,6>(p_Val2_7180_reg_99046.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6589_p0() {
    grp_fu_6589_p0 =  (sc_lv<4>) (grp_fu_6589_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6589_p00() {
    grp_fu_6589_p00 = esl_zext<75,4>(p_Val2_6983_reg_73378.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6589_p1() {
    grp_fu_6589_p1 =  (sc_lv<71>) (grp_fu_6589_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6589_p10() {
    grp_fu_6589_p10 = esl_zext<75,71>(p_Val2_2022_fu_6513_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65932_p0() {
    grp_fu_65932_p0 =  (sc_lv<83>) (grp_fu_65932_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65932_p00() {
    grp_fu_65932_p00 = esl_zext<89,83>(p_Val2_6656_fu_65890_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65932_p1() {
    grp_fu_65932_p1 =  (sc_lv<6>) (grp_fu_65932_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_65932_p10() {
    grp_fu_65932_p10 = esl_zext<89,6>(p_Val2_7181_reg_99087.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66022_p0() {
    grp_fu_66022_p0 =  (sc_lv<92>) (grp_fu_66022_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66022_p00() {
    grp_fu_66022_p00 = esl_zext<98,92>(p_Val2_4238_reg_99118.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66022_p1() {
    grp_fu_66022_p1 =  (sc_lv<6>) (grp_fu_66022_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66022_p10() {
    grp_fu_66022_p10 = esl_zext<98,6>(p_Val2_7182_reg_99124.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66112_p0() {
    grp_fu_66112_p0 =  (sc_lv<87>) (grp_fu_66112_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66112_p00() {
    grp_fu_66112_p00 = esl_zext<93,87>(p_Val2_4245_reg_99155.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66112_p1() {
    grp_fu_66112_p1 =  (sc_lv<6>) (grp_fu_66112_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66112_p10() {
    grp_fu_66112_p10 = esl_zext<93,6>(p_Val2_7183_reg_99161.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66202_p0() {
    grp_fu_66202_p0 =  (sc_lv<82>) (grp_fu_66202_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66202_p00() {
    grp_fu_66202_p00 = esl_zext<88,82>(p_Val2_4253_reg_99192.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66202_p1() {
    grp_fu_66202_p1 =  (sc_lv<6>) (grp_fu_66202_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66202_p10() {
    grp_fu_66202_p10 = esl_zext<88,6>(p_Val2_7184_reg_99198.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66264_p0() {
    grp_fu_66264_p0 =  (sc_lv<77>) (grp_fu_66264_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66264_p00() {
    grp_fu_66264_p00 = esl_zext<83,77>(p_Val2_4262_reg_99229.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66264_p1() {
    grp_fu_66264_p1 =  (sc_lv<6>) (grp_fu_66264_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66264_p10() {
    grp_fu_66264_p10 = esl_zext<83,6>(p_Val2_7185_reg_99235.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66279_p0() {
    grp_fu_66279_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_66395_p0() {
    grp_fu_66395_p0 =  (sc_lv<40>) (OP1_V_1385_cast_fu_66392_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66395_p1() {
    grp_fu_66395_p1 =  (sc_lv<40>) (OP1_V_1385_cast_fu_66392_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66547_p0() {
    grp_fu_66547_p0 =  (sc_lv<54>) (ap_const_lv131_lc_1);
}

void particlemaster_ReadCalculations::thread_grp_fu_66547_p1() {
    grp_fu_66547_p1 =  (sc_lv<78>) (OP1_V_661_fu_66544_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66556_p0() {
    grp_fu_66556_p0 =  (sc_lv<55>) (ap_const_lv130_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_66562_p0() {
    grp_fu_66562_p0 =  (sc_lv<55>) (ap_const_lv131_lc_2);
}

void particlemaster_ReadCalculations::thread_grp_fu_66562_p1() {
    grp_fu_66562_p1 =  (sc_lv<78>) (OP1_V_661_fu_66544_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66674_p0() {
    grp_fu_66674_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_6671_p0() {
    grp_fu_6671_p0 =  (sc_lv<6>) (grp_fu_6671_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6671_p00() {
    grp_fu_6671_p00 = esl_zext<79,6>(p_Val2_6984_reg_73410.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6671_p1() {
    grp_fu_6671_p1 =  (sc_lv<73>) (grp_fu_6671_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6671_p10() {
    grp_fu_6671_p10 = esl_zext<79,73>(p_Val2_2028_reg_73404.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66785_p0() {
    grp_fu_66785_p0 =  (sc_lv<43>) (grp_fu_66785_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66785_p00() {
    grp_fu_66785_p00 = esl_zext<79,43>(tmp_6065_fu_66769_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66785_p1() {
    grp_fu_66785_p1 =  (sc_lv<36>) (grp_fu_66785_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66785_p10() {
    grp_fu_66785_p10 = esl_zext<79,36>(r_V_463_reg_99481.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66842_p0() {
    grp_fu_66842_p0 =  (sc_lv<49>) (grp_fu_66842_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66842_p00() {
    grp_fu_66842_p00 = esl_zext<93,49>(tmp_6070_fu_66826_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66842_p1() {
    grp_fu_66842_p1 =  (sc_lv<44>) (grp_fu_66842_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66842_p10() {
    grp_fu_66842_p10 = esl_zext<93,44>(p_Val2_4284_reg_99512.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66912_p0() {
    grp_fu_66912_p0 =  (sc_lv<50>) (grp_fu_66912_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66912_p00() {
    grp_fu_66912_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66912_p1() {
    grp_fu_66912_p1 =  (sc_lv<50>) (grp_fu_66912_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_66912_p10() {
    grp_fu_66912_p10 = esl_zext<100,50>(tmp_6073_reg_99538.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67177_p0() {
    grp_fu_67177_p0 =  (sc_lv<6>) (grp_fu_67177_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67177_p00() {
    grp_fu_67177_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67177_p1() {
    grp_fu_67177_p1 =  (sc_lv<54>) (grp_fu_67177_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67177_p10() {
    grp_fu_67177_p10 = esl_zext<60,54>(b_frac_V_172_reg_99667.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67273_p0() {
    grp_fu_67273_p0 =  (sc_lv<4>) (grp_fu_67273_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67273_p00() {
    grp_fu_67273_p00 = esl_zext<75,4>(p_Val2_7186_reg_99695.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67273_p1() {
    grp_fu_67273_p1 =  (sc_lv<71>) (grp_fu_67273_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67273_p10() {
    grp_fu_67273_p10 = esl_zext<75,71>(p_Val2_4362_fu_67197_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67355_p0() {
    grp_fu_67355_p0 =  (sc_lv<6>) (grp_fu_67355_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67355_p00() {
    grp_fu_67355_p00 = esl_zext<79,6>(p_Val2_7187_reg_99727.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67355_p1() {
    grp_fu_67355_p1 =  (sc_lv<73>) (grp_fu_67355_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67355_p10() {
    grp_fu_67355_p10 = esl_zext<79,73>(p_Val2_4368_reg_99721.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67441_p0() {
    grp_fu_67441_p0 =  (sc_lv<6>) (grp_fu_67441_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67441_p00() {
    grp_fu_67441_p00 = esl_zext<89,6>(p_Val2_7188_reg_99768.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67441_p1() {
    grp_fu_67441_p1 =  (sc_lv<83>) (grp_fu_67441_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67441_p10() {
    grp_fu_67441_p10 = esl_zext<89,83>(p_Val2_6719_fu_67399_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67531_p0() {
    grp_fu_67531_p0 =  (sc_lv<6>) (grp_fu_67531_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67531_p00() {
    grp_fu_67531_p00 = esl_zext<98,6>(p_Val2_7189_reg_99805.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67531_p1() {
    grp_fu_67531_p1 =  (sc_lv<92>) (grp_fu_67531_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67531_p10() {
    grp_fu_67531_p10 = esl_zext<98,92>(p_Val2_4379_reg_99799.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6757_p0() {
    grp_fu_6757_p0 =  (sc_lv<6>) (grp_fu_6757_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6757_p00() {
    grp_fu_6757_p00 = esl_zext<89,6>(p_Val2_6985_reg_73451.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6757_p1() {
    grp_fu_6757_p1 =  (sc_lv<83>) (grp_fu_6757_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6757_p10() {
    grp_fu_6757_p10 = esl_zext<89,83>(p_Val2_3235_fu_6715_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67621_p0() {
    grp_fu_67621_p0 =  (sc_lv<6>) (grp_fu_67621_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67621_p00() {
    grp_fu_67621_p00 = esl_zext<93,6>(p_Val2_7190_reg_99842.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67621_p1() {
    grp_fu_67621_p1 =  (sc_lv<87>) (grp_fu_67621_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67621_p10() {
    grp_fu_67621_p10 = esl_zext<93,87>(p_Val2_4385_reg_99836.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67711_p0() {
    grp_fu_67711_p0 =  (sc_lv<6>) (grp_fu_67711_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67711_p00() {
    grp_fu_67711_p00 = esl_zext<88,6>(p_Val2_7191_reg_99879.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67711_p1() {
    grp_fu_67711_p1 =  (sc_lv<82>) (grp_fu_67711_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67711_p10() {
    grp_fu_67711_p10 = esl_zext<88,82>(p_Val2_4391_reg_99873.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67801_p0() {
    grp_fu_67801_p0 =  (sc_lv<6>) (grp_fu_67801_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67801_p00() {
    grp_fu_67801_p00 = esl_zext<83,6>(p_Val2_7192_reg_99916.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67801_p1() {
    grp_fu_67801_p1 =  (sc_lv<77>) (grp_fu_67801_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67801_p10() {
    grp_fu_67801_p10 = esl_zext<83,77>(p_Val2_4399_reg_99910.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67848_p0() {
    grp_fu_67848_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_67986_p0() {
    grp_fu_67986_p0 =  (sc_lv<40>) (OP1_V_1386_cast_fu_67983_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_67986_p1() {
    grp_fu_67986_p1 =  (sc_lv<40>) (OP1_V_1386_cast_fu_67983_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68114_p0() {
    grp_fu_68114_p0 =  (sc_lv<54>) (ap_const_lv131_lc_3);
}

void particlemaster_ReadCalculations::thread_grp_fu_68114_p1() {
    grp_fu_68114_p1 =  (sc_lv<78>) (OP1_V_685_fu_68111_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68123_p0() {
    grp_fu_68123_p0 =  (sc_lv<56>) (ap_const_lv130_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_68129_p0() {
    grp_fu_68129_p0 =  (sc_lv<56>) (ap_const_lv131_lc_4);
}

void particlemaster_ReadCalculations::thread_grp_fu_68129_p1() {
    grp_fu_68129_p1 =  (sc_lv<78>) (OP1_V_685_fu_68111_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68249_p0() {
    grp_fu_68249_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_68360_p0() {
    grp_fu_68360_p0 =  (sc_lv<36>) (grp_fu_68360_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68360_p00() {
    grp_fu_68360_p00 = esl_zext<79,36>(r_V_466_reg_100215.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68360_p1() {
    grp_fu_68360_p1 =  (sc_lv<43>) (grp_fu_68360_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68360_p10() {
    grp_fu_68360_p10 = esl_zext<79,43>(tmp_6250_fu_68344_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68417_p0() {
    grp_fu_68417_p0 =  (sc_lv<44>) (grp_fu_68417_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68417_p00() {
    grp_fu_68417_p00 = esl_zext<93,44>(p_Val2_4424_reg_100246.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68417_p1() {
    grp_fu_68417_p1 =  (sc_lv<49>) (grp_fu_68417_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68417_p10() {
    grp_fu_68417_p10 = esl_zext<93,49>(tmp_6255_fu_68401_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6847_p0() {
    grp_fu_6847_p0 =  (sc_lv<6>) (grp_fu_6847_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6847_p00() {
    grp_fu_6847_p00 = esl_zext<98,6>(p_Val2_6986_reg_73488.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6847_p1() {
    grp_fu_6847_p1 =  (sc_lv<92>) (grp_fu_6847_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6847_p10() {
    grp_fu_6847_p10 = esl_zext<98,92>(p_Val2_2039_reg_73482.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68487_p0() {
    grp_fu_68487_p0 =  (sc_lv<50>) (grp_fu_68487_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68487_p00() {
    grp_fu_68487_p00 = esl_zext<100,50>(tmp_6258_reg_100272.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68487_p1() {
    grp_fu_68487_p1 =  (sc_lv<50>) (grp_fu_68487_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_68487_p10() {
    grp_fu_68487_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69004_p0() {
    grp_fu_69004_p0 =  (sc_lv<54>) (grp_fu_69004_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69004_p00() {
    grp_fu_69004_p00 = esl_zext<60,54>(b_frac_V_178_reg_100457.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69004_p1() {
    grp_fu_69004_p1 =  (sc_lv<6>) (grp_fu_69004_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69004_p10() {
    grp_fu_69004_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69100_p0() {
    grp_fu_69100_p0 =  (sc_lv<71>) (grp_fu_69100_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69100_p00() {
    grp_fu_69100_p00 = esl_zext<75,71>(p_Val2_4511_fu_69024_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69100_p1() {
    grp_fu_69100_p1 =  (sc_lv<4>) (grp_fu_69100_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69100_p10() {
    grp_fu_69100_p10 = esl_zext<75,4>(p_Val2_7193_reg_100485.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69182_p0() {
    grp_fu_69182_p0 =  (sc_lv<73>) (grp_fu_69182_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69182_p00() {
    grp_fu_69182_p00 = esl_zext<79,73>(p_Val2_4517_reg_100511.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69182_p1() {
    grp_fu_69182_p1 =  (sc_lv<6>) (grp_fu_69182_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69182_p10() {
    grp_fu_69182_p10 = esl_zext<79,6>(p_Val2_7194_reg_100517.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69268_p0() {
    grp_fu_69268_p0 =  (sc_lv<83>) (grp_fu_69268_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69268_p00() {
    grp_fu_69268_p00 = esl_zext<89,83>(p_Val2_6792_fu_69226_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69268_p1() {
    grp_fu_69268_p1 =  (sc_lv<6>) (grp_fu_69268_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69268_p10() {
    grp_fu_69268_p10 = esl_zext<89,6>(p_Val2_7195_reg_100558.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69358_p0() {
    grp_fu_69358_p0 =  (sc_lv<92>) (grp_fu_69358_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69358_p00() {
    grp_fu_69358_p00 = esl_zext<98,92>(p_Val2_4528_reg_100589.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69358_p1() {
    grp_fu_69358_p1 =  (sc_lv<6>) (grp_fu_69358_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69358_p10() {
    grp_fu_69358_p10 = esl_zext<98,6>(p_Val2_7196_reg_100595.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6937_p0() {
    grp_fu_6937_p0 =  (sc_lv<6>) (grp_fu_6937_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6937_p00() {
    grp_fu_6937_p00 = esl_zext<93,6>(p_Val2_6987_reg_73525.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6937_p1() {
    grp_fu_6937_p1 =  (sc_lv<87>) (grp_fu_6937_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_6937_p10() {
    grp_fu_6937_p10 = esl_zext<93,87>(p_Val2_2045_reg_73519.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69448_p0() {
    grp_fu_69448_p0 =  (sc_lv<87>) (grp_fu_69448_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69448_p00() {
    grp_fu_69448_p00 = esl_zext<93,87>(p_Val2_4534_reg_100626.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69448_p1() {
    grp_fu_69448_p1 =  (sc_lv<6>) (grp_fu_69448_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69448_p10() {
    grp_fu_69448_p10 = esl_zext<93,6>(p_Val2_7197_reg_100632.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69538_p0() {
    grp_fu_69538_p0 =  (sc_lv<82>) (grp_fu_69538_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69538_p00() {
    grp_fu_69538_p00 = esl_zext<88,82>(p_Val2_4540_reg_100663.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69538_p1() {
    grp_fu_69538_p1 =  (sc_lv<6>) (grp_fu_69538_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69538_p10() {
    grp_fu_69538_p10 = esl_zext<88,6>(p_Val2_7198_reg_100669.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69628_p0() {
    grp_fu_69628_p0 =  (sc_lv<77>) (grp_fu_69628_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69628_p00() {
    grp_fu_69628_p00 = esl_zext<83,77>(p_Val2_4546_reg_100700.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69628_p1() {
    grp_fu_69628_p1 =  (sc_lv<6>) (grp_fu_69628_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69628_p10() {
    grp_fu_69628_p10 = esl_zext<83,6>(p_Val2_7199_reg_100706.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69643_p0() {
    grp_fu_69643_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_69781_p0() {
    grp_fu_69781_p0 =  (sc_lv<40>) (OP1_V_1387_cast_fu_69778_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_69781_p1() {
    grp_fu_69781_p1 =  (sc_lv<40>) (OP1_V_1387_cast_fu_69778_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70037_p0() {
    grp_fu_70037_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_70148_p0() {
    grp_fu_70148_p0 =  (sc_lv<43>) (grp_fu_70148_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70148_p00() {
    grp_fu_70148_p00 = esl_zext<79,43>(tmp_6462_fu_70132_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70148_p1() {
    grp_fu_70148_p1 =  (sc_lv<36>) (grp_fu_70148_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70148_p10() {
    grp_fu_70148_p10 = esl_zext<79,36>(r_V_469_reg_100960.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70205_p0() {
    grp_fu_70205_p0 =  (sc_lv<49>) (grp_fu_70205_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70205_p00() {
    grp_fu_70205_p00 = esl_zext<93,49>(tmp_6467_fu_70189_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70205_p1() {
    grp_fu_70205_p1 =  (sc_lv<44>) (grp_fu_70205_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70205_p10() {
    grp_fu_70205_p10 = esl_zext<93,44>(p_Val2_4570_reg_100991.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70275_p0() {
    grp_fu_70275_p0 =  (sc_lv<50>) (grp_fu_70275_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70275_p00() {
    grp_fu_70275_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70275_p1() {
    grp_fu_70275_p1 =  (sc_lv<50>) (grp_fu_70275_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70275_p10() {
    grp_fu_70275_p10 = esl_zext<100,50>(tmp_6470_reg_101017.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7027_p0() {
    grp_fu_7027_p0 =  (sc_lv<6>) (grp_fu_7027_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7027_p00() {
    grp_fu_7027_p00 = esl_zext<88,6>(p_Val2_6988_reg_73562.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7027_p1() {
    grp_fu_7027_p1 =  (sc_lv<82>) (grp_fu_7027_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7027_p10() {
    grp_fu_7027_p10 = esl_zext<88,82>(p_Val2_2051_reg_73556.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70548_p0() {
    grp_fu_70548_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_70669_p0() {
    grp_fu_70669_p0 =  (sc_lv<36>) (grp_fu_70669_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70669_p00() {
    grp_fu_70669_p00 = esl_zext<79,36>(r_V_471_reg_101152.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70669_p1() {
    grp_fu_70669_p1 =  (sc_lv<43>) (grp_fu_70669_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70669_p10() {
    grp_fu_70669_p10 = esl_zext<79,43>(tmp_6578_fu_70653_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70726_p0() {
    grp_fu_70726_p0 =  (sc_lv<44>) (grp_fu_70726_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70726_p00() {
    grp_fu_70726_p00 = esl_zext<93,44>(p_Val2_4672_reg_101183.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70726_p1() {
    grp_fu_70726_p1 =  (sc_lv<49>) (grp_fu_70726_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70726_p10() {
    grp_fu_70726_p10 = esl_zext<93,49>(tmp_6583_fu_70710_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70796_p0() {
    grp_fu_70796_p0 =  (sc_lv<50>) (grp_fu_70796_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70796_p00() {
    grp_fu_70796_p00 = esl_zext<100,50>(tmp_6586_reg_101209.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70796_p1() {
    grp_fu_70796_p1 =  (sc_lv<50>) (grp_fu_70796_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_70796_p10() {
    grp_fu_70796_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7117_p0() {
    grp_fu_7117_p0 =  (sc_lv<6>) (grp_fu_7117_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7117_p00() {
    grp_fu_7117_p00 = esl_zext<83,6>(p_Val2_6989_reg_73599.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7117_p1() {
    grp_fu_7117_p1 =  (sc_lv<77>) (grp_fu_7117_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7117_p10() {
    grp_fu_7117_p10 = esl_zext<83,77>(p_Val2_2057_reg_73593.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71278_p0() {
    grp_fu_71278_p0 =  (sc_lv<54>) (grp_fu_71278_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71278_p00() {
    grp_fu_71278_p00 = esl_zext<60,54>(b_frac_V_183_reg_101407.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71278_p1() {
    grp_fu_71278_p1 =  (sc_lv<6>) (grp_fu_71278_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71278_p10() {
    grp_fu_71278_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71374_p0() {
    grp_fu_71374_p0 =  (sc_lv<71>) (grp_fu_71374_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71374_p00() {
    grp_fu_71374_p00 = esl_zext<75,71>(p_Val2_4699_fu_71298_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71374_p1() {
    grp_fu_71374_p1 =  (sc_lv<4>) (grp_fu_71374_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71374_p10() {
    grp_fu_71374_p10 = esl_zext<75,4>(p_Val2_7200_reg_101435.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71456_p0() {
    grp_fu_71456_p0 =  (sc_lv<73>) (grp_fu_71456_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71456_p00() {
    grp_fu_71456_p00 = esl_zext<79,73>(p_Val2_4705_reg_101461.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71456_p1() {
    grp_fu_71456_p1 =  (sc_lv<6>) (grp_fu_71456_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71456_p10() {
    grp_fu_71456_p10 = esl_zext<79,6>(p_Val2_7201_reg_101467.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71542_p0() {
    grp_fu_71542_p0 =  (sc_lv<83>) (grp_fu_71542_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71542_p00() {
    grp_fu_71542_p00 = esl_zext<89,83>(p_Val2_6900_fu_71500_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71542_p1() {
    grp_fu_71542_p1 =  (sc_lv<6>) (grp_fu_71542_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71542_p10() {
    grp_fu_71542_p10 = esl_zext<89,6>(p_Val2_7202_reg_101508.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7159_p0() {
    grp_fu_7159_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_71632_p0() {
    grp_fu_71632_p0 =  (sc_lv<92>) (grp_fu_71632_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71632_p00() {
    grp_fu_71632_p00 = esl_zext<98,92>(p_Val2_4716_reg_101539.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71632_p1() {
    grp_fu_71632_p1 =  (sc_lv<6>) (grp_fu_71632_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71632_p10() {
    grp_fu_71632_p10 = esl_zext<98,6>(p_Val2_7203_reg_101545.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71722_p0() {
    grp_fu_71722_p0 =  (sc_lv<87>) (grp_fu_71722_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71722_p00() {
    grp_fu_71722_p00 = esl_zext<93,87>(p_Val2_4723_reg_101576.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71722_p1() {
    grp_fu_71722_p1 =  (sc_lv<6>) (grp_fu_71722_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71722_p10() {
    grp_fu_71722_p10 = esl_zext<93,6>(p_Val2_7204_reg_101582.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71812_p0() {
    grp_fu_71812_p0 =  (sc_lv<82>) (grp_fu_71812_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71812_p00() {
    grp_fu_71812_p00 = esl_zext<88,82>(p_Val2_4729_reg_101613.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71812_p1() {
    grp_fu_71812_p1 =  (sc_lv<6>) (grp_fu_71812_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71812_p10() {
    grp_fu_71812_p10 = esl_zext<88,6>(p_Val2_7205_reg_101619.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71902_p0() {
    grp_fu_71902_p0 =  (sc_lv<77>) (grp_fu_71902_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71902_p00() {
    grp_fu_71902_p00 = esl_zext<83,77>(p_Val2_4735_reg_101650.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71902_p1() {
    grp_fu_71902_p1 =  (sc_lv<6>) (grp_fu_71902_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71902_p10() {
    grp_fu_71902_p10 = esl_zext<83,6>(p_Val2_7206_reg_101656.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_71911_p0() {
    grp_fu_71911_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_72049_p0() {
    grp_fu_72049_p0 =  (sc_lv<40>) (OP1_V_1389_cast_fu_72046_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72049_p1() {
    grp_fu_72049_p1 =  (sc_lv<40>) (OP1_V_1389_cast_fu_72046_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72305_p0() {
    grp_fu_72305_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_72416_p0() {
    grp_fu_72416_p0 =  (sc_lv<43>) (grp_fu_72416_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72416_p00() {
    grp_fu_72416_p00 = esl_zext<79,43>(tmp_6736_fu_72400_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72416_p1() {
    grp_fu_72416_p1 =  (sc_lv<36>) (grp_fu_72416_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72416_p10() {
    grp_fu_72416_p10 = esl_zext<79,36>(r_V_474_reg_101905.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72473_p0() {
    grp_fu_72473_p0 =  (sc_lv<49>) (grp_fu_72473_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72473_p00() {
    grp_fu_72473_p00 = esl_zext<93,49>(tmp_6741_fu_72457_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72473_p1() {
    grp_fu_72473_p1 =  (sc_lv<44>) (grp_fu_72473_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72473_p10() {
    grp_fu_72473_p10 = esl_zext<93,44>(p_Val2_4765_reg_101936.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72543_p0() {
    grp_fu_72543_p0 =  (sc_lv<50>) (grp_fu_72543_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72543_p00() {
    grp_fu_72543_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72543_p1() {
    grp_fu_72543_p1 =  (sc_lv<50>) (grp_fu_72543_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72543_p10() {
    grp_fu_72543_p10 = esl_zext<100,50>(tmp_6744_reg_101962.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72711_p0() {
    grp_fu_72711_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72721_p0() {
    grp_fu_72721_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72731_p0() {
    grp_fu_72731_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72741_p0() {
    grp_fu_72741_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72751_p0() {
    grp_fu_72751_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72761_p0() {
    grp_fu_72761_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72771_p0() {
    grp_fu_72771_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72781_p0() {
    grp_fu_72781_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72791_p0() {
    grp_fu_72791_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72801_p0() {
    grp_fu_72801_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72811_p0() {
    grp_fu_72811_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72821_p0() {
    grp_fu_72821_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72831_p0() {
    grp_fu_72831_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72841_p0() {
    grp_fu_72841_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72851_p0() {
    grp_fu_72851_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72861_p0() {
    grp_fu_72861_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72871_p0() {
    grp_fu_72871_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72881_p0() {
    grp_fu_72881_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72891_p0() {
    grp_fu_72891_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72901_p0() {
    grp_fu_72901_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72911_p0() {
    grp_fu_72911_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72921_p0() {
    grp_fu_72921_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72931_p0() {
    grp_fu_72931_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72941_p0() {
    grp_fu_72941_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72951_p0() {
    grp_fu_72951_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72961_p0() {
    grp_fu_72961_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72971_p0() {
    grp_fu_72971_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_7297_p0() {
    grp_fu_7297_p0 =  (sc_lv<40>) (OP1_V_1346_cast_fu_7294_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7297_p1() {
    grp_fu_7297_p1 =  (sc_lv<40>) (OP1_V_1346_cast_fu_7294_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_72981_p0() {
    grp_fu_72981_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_72991_p0() {
    grp_fu_72991_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73001_p0() {
    grp_fu_73001_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73011_p0() {
    grp_fu_73011_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73021_p0() {
    grp_fu_73021_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73031_p0() {
    grp_fu_73031_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73041_p0() {
    grp_fu_73041_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73051_p0() {
    grp_fu_73051_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73061_p0() {
    grp_fu_73061_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73071_p0() {
    grp_fu_73071_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73081_p0() {
    grp_fu_73081_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73091_p0() {
    grp_fu_73091_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73101_p0() {
    grp_fu_73101_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73111_p0() {
    grp_fu_73111_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73121_p0() {
    grp_fu_73121_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73131_p0() {
    grp_fu_73131_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_73141_p0() {
    grp_fu_73141_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void particlemaster_ReadCalculations::thread_grp_fu_7544_p0() {
    grp_fu_7544_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_7655_p0() {
    grp_fu_7655_p0 =  (sc_lv<36>) (grp_fu_7655_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7655_p00() {
    grp_fu_7655_p00 = esl_zext<79,36>(r_V_371_reg_73860.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7655_p1() {
    grp_fu_7655_p1 =  (sc_lv<43>) (grp_fu_7655_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7655_p10() {
    grp_fu_7655_p10 = esl_zext<79,43>(tmp_2889_fu_7639_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7712_p0() {
    grp_fu_7712_p0 =  (sc_lv<44>) (grp_fu_7712_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7712_p00() {
    grp_fu_7712_p00 = esl_zext<93,44>(p_Val2_2079_reg_73891.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7712_p1() {
    grp_fu_7712_p1 =  (sc_lv<49>) (grp_fu_7712_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7712_p10() {
    grp_fu_7712_p10 = esl_zext<93,49>(tmp_2894_fu_7696_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7782_p0() {
    grp_fu_7782_p0 =  (sc_lv<50>) (grp_fu_7782_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7782_p00() {
    grp_fu_7782_p00 = esl_zext<100,50>(tmp_2897_reg_73917.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7782_p1() {
    grp_fu_7782_p1 =  (sc_lv<50>) (grp_fu_7782_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_7782_p10() {
    grp_fu_7782_p10 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8385_p0() {
    grp_fu_8385_p0 =  (sc_lv<54>) (grp_fu_8385_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8385_p00() {
    grp_fu_8385_p00 = esl_zext<60,54>(b_frac_V_78_reg_74213.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8385_p1() {
    grp_fu_8385_p1 =  (sc_lv<6>) (grp_fu_8385_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8385_p10() {
    grp_fu_8385_p10 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8481_p0() {
    grp_fu_8481_p0 =  (sc_lv<71>) (grp_fu_8481_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8481_p00() {
    grp_fu_8481_p00 = esl_zext<75,71>(p_Val2_2155_fu_8405_p3.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8481_p1() {
    grp_fu_8481_p1 =  (sc_lv<4>) (grp_fu_8481_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8481_p10() {
    grp_fu_8481_p10 = esl_zext<75,4>(p_Val2_7032_reg_74241.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8563_p0() {
    grp_fu_8563_p0 =  (sc_lv<73>) (grp_fu_8563_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8563_p00() {
    grp_fu_8563_p00 = esl_zext<79,73>(p_Val2_2161_reg_74267.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8563_p1() {
    grp_fu_8563_p1 =  (sc_lv<6>) (grp_fu_8563_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8563_p10() {
    grp_fu_8563_p10 = esl_zext<79,6>(p_Val2_7033_reg_74273.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8649_p0() {
    grp_fu_8649_p0 =  (sc_lv<83>) (grp_fu_8649_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8649_p00() {
    grp_fu_8649_p00 = esl_zext<89,83>(p_Val2_3572_fu_8607_p2.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8649_p1() {
    grp_fu_8649_p1 =  (sc_lv<6>) (grp_fu_8649_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8649_p10() {
    grp_fu_8649_p10 = esl_zext<89,6>(p_Val2_7034_reg_74314.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8739_p0() {
    grp_fu_8739_p0 =  (sc_lv<92>) (grp_fu_8739_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8739_p00() {
    grp_fu_8739_p00 = esl_zext<98,92>(p_Val2_2172_reg_74345.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8739_p1() {
    grp_fu_8739_p1 =  (sc_lv<6>) (grp_fu_8739_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8739_p10() {
    grp_fu_8739_p10 = esl_zext<98,6>(p_Val2_7035_reg_74351.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8829_p0() {
    grp_fu_8829_p0 =  (sc_lv<87>) (grp_fu_8829_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8829_p00() {
    grp_fu_8829_p00 = esl_zext<93,87>(p_Val2_2178_reg_74382.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8829_p1() {
    grp_fu_8829_p1 =  (sc_lv<6>) (grp_fu_8829_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8829_p10() {
    grp_fu_8829_p10 = esl_zext<93,6>(p_Val2_7036_reg_74388.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8919_p0() {
    grp_fu_8919_p0 =  (sc_lv<82>) (grp_fu_8919_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8919_p00() {
    grp_fu_8919_p00 = esl_zext<88,82>(p_Val2_2184_reg_74419.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8919_p1() {
    grp_fu_8919_p1 =  (sc_lv<6>) (grp_fu_8919_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_8919_p10() {
    grp_fu_8919_p10 = esl_zext<88,6>(p_Val2_7037_reg_74425.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9009_p0() {
    grp_fu_9009_p0 =  (sc_lv<77>) (grp_fu_9009_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9009_p00() {
    grp_fu_9009_p00 = esl_zext<83,77>(p_Val2_2190_reg_74456.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9009_p1() {
    grp_fu_9009_p1 =  (sc_lv<6>) (grp_fu_9009_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9009_p10() {
    grp_fu_9009_p10 = esl_zext<83,6>(p_Val2_7038_reg_74462.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9024_p0() {
    grp_fu_9024_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void particlemaster_ReadCalculations::thread_grp_fu_9162_p0() {
    grp_fu_9162_p0 =  (sc_lv<40>) (OP1_V_1356_cast_fu_9159_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9162_p1() {
    grp_fu_9162_p1 =  (sc_lv<40>) (OP1_V_1356_cast_fu_9159_p1.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9418_p0() {
    grp_fu_9418_p0 =  (sc_lv<72>) (ap_const_lv84_58B90BFBE8E7BCD5E4);
}

void particlemaster_ReadCalculations::thread_grp_fu_9529_p0() {
    grp_fu_9529_p0 =  (sc_lv<43>) (grp_fu_9529_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9529_p00() {
    grp_fu_9529_p00 = esl_zext<79,43>(tmp_3072_fu_9513_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9529_p1() {
    grp_fu_9529_p1 =  (sc_lv<36>) (grp_fu_9529_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9529_p10() {
    grp_fu_9529_p10 = esl_zext<79,36>(r_V_394_reg_74716.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9586_p0() {
    grp_fu_9586_p0 =  (sc_lv<49>) (grp_fu_9586_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9586_p00() {
    grp_fu_9586_p00 = esl_zext<93,49>(tmp_3077_fu_9570_p4.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9586_p1() {
    grp_fu_9586_p1 =  (sc_lv<44>) (grp_fu_9586_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9586_p10() {
    grp_fu_9586_p10 = esl_zext<93,44>(p_Val2_2212_reg_74747.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9656_p0() {
    grp_fu_9656_p0 =  (sc_lv<50>) (grp_fu_9656_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9656_p00() {
    grp_fu_9656_p00 = esl_zext<100,50>(reg_6312.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9656_p1() {
    grp_fu_9656_p1 =  (sc_lv<50>) (grp_fu_9656_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9656_p10() {
    grp_fu_9656_p10 = esl_zext<100,50>(tmp_3080_reg_74773.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9904_p0() {
    grp_fu_9904_p0 =  (sc_lv<6>) (grp_fu_9904_p00.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9904_p00() {
    grp_fu_9904_p00 = esl_zext<60,6>(reg_6288.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9904_p1() {
    grp_fu_9904_p1 =  (sc_lv<54>) (grp_fu_9904_p10.read());
}

void particlemaster_ReadCalculations::thread_grp_fu_9904_p10() {
    grp_fu_9904_p10 = esl_zext<60,54>(b_frac_V_85_reg_74884.read());
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6694_fu_71917_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6415_fu_69649_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6203_fu_67854_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6024_fu_66285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5808_fu_64588_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5616_fu_63037_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6778_fu_61550_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6501_fu_59282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6311_fu_57487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_6105_fu_55918_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5918_fu_54235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5703_fu_52669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5406_fu_50988_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5128_fu_48720_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4916_fu_46943_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4740_fu_45354_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4522_fu_43657_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4332_fu_42106_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5495_fu_40632_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5215_fu_38364_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_5027_fu_36574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4820_fu_34999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4633_fu_33302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4416_fu_31751_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4221_fu_29885_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4016_fu_28263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3738_fu_25995_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3527_fu_24209_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3347_fu_22635_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3127_fu_20938_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_2949_fu_19387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_4102_fu_17913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3824_fu_15645_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3635_fu_13859_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3429_fu_12278_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3239_fu_10581_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_3030_fu_9030_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) (tmp_2847_fu_7165_p1.read());
    } else {
        hls_pow_reduce_an_12_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read()))) {
        hls_pow_reduce_an_12_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_12_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6700_fu_71921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6421_fu_69653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6209_fu_67858_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6030_fu_66289_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5814_fu_64592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5623_fu_63041_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6784_fu_61554_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6507_fu_59286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6317_fu_57491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_6111_fu_55922_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5924_fu_54239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5709_fu_52673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5415_fu_50992_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5136_fu_48724_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4926_fu_46947_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4748_fu_45358_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4529_fu_43661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4338_fu_42110_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5501_fu_40636_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5221_fu_38368_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_5033_fu_36578_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4826_fu_35003_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4641_fu_33306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4422_fu_31755_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4227_fu_29889_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4022_fu_28267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3744_fu_25999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3533_fu_24213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3353_fu_22639_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3133_fu_20942_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_2955_fu_19391_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_4110_fu_17917_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3830_fu_15649_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3641_fu_13863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3435_fu_12282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3245_fu_10585_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_3036_fu_9034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) (tmp_2853_fu_7169_p1.read());
    } else {
        hls_pow_reduce_an_13_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read()))) {
        hls_pow_reduce_an_13_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_13_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6706_fu_71925_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6427_fu_69657_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6215_fu_67862_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6036_fu_66293_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5823_fu_64596_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5630_fu_63045_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6790_fu_61558_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6513_fu_59290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6323_fu_57495_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_6117_fu_55926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5932_fu_54243_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5717_fu_52677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5422_fu_50996_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5142_fu_48728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4932_fu_46951_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4754_fu_45362_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4536_fu_43665_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4344_fu_42114_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5507_fu_40640_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5227_fu_38372_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_5040_fu_36582_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4832_fu_35007_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4647_fu_33310_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4431_fu_31759_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4233_fu_29893_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4029_fu_28271_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3750_fu_26003_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3539_fu_24217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3359_fu_22643_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3139_fu_20946_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_2961_fu_19395_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_4116_fu_17921_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3837_fu_15653_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3647_fu_13867_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3443_fu_12286_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3251_fu_10589_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_3042_fu_9038_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) (tmp_2859_fu_7173_p1.read());
    } else {
        hls_pow_reduce_an_14_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read()))) {
        hls_pow_reduce_an_14_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_14_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6712_fu_71929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6433_fu_69661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6221_fu_67866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6043_fu_66342_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5829_fu_64600_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5636_fu_63049_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6797_fu_61562_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6519_fu_59294_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6332_fu_57499_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_6122_fu_55975_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5938_fu_54247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5723_fu_52681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5428_fu_51000_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5150_fu_48732_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4940_fu_46955_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4759_fu_45411_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4542_fu_43669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4350_fu_42118_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5513_fu_40644_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5233_fu_38376_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_5046_fu_36586_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4837_fu_35056_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4653_fu_33314_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4437_fu_31763_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4239_fu_29897_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4036_fu_28275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3756_fu_26007_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3545_fu_24221_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3364_fu_22692_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3145_fu_20950_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_2967_fu_19399_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_4124_fu_17925_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3843_fu_15657_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3653_fu_13871_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3448_fu_12335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3257_fu_10593_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_3048_fu_9042_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read())) {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) (tmp_2865_fu_7177_p1.read());
    } else {
        hls_pow_reduce_an_15_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state591.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state719.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state892.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1050.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1557.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1631.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1716.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1837.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1965.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2039.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2138.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2417.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2621.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2878.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3300.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3458.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3579.read()))) {
        hls_pow_reduce_an_15_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_15_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6675_fu_71933_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6397_fu_69665_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6186_fu_67870_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6006_fu_66366_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5791_fu_64604_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5595_fu_63053_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6760_fu_61566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6484_fu_59298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6292_fu_57503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_6087_fu_55999_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5900_fu_54251_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5683_fu_52685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5389_fu_51004_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5111_fu_48736_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4899_fu_46959_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4720_fu_45435_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4502_fu_43673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4311_fu_42122_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5477_fu_40648_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5197_fu_38380_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_5007_fu_36590_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4802_fu_35080_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4614_fu_33318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4398_fu_31767_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4202_fu_29901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3997_fu_28279_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3720_fu_26011_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3509_fu_24225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3328_fu_22716_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3110_fu_20954_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_2932_fu_19403_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_4085_fu_17929_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3804_fu_15661_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3616_fu_13875_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3409_fu_12359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3221_fu_10597_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_3013_fu_9046_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) (tmp_2830_fu_7181_p1.read());
    } else {
        hls_pow_reduce_an_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read()))) {
        hls_pow_reduce_an_16_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_16_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6681_fu_71937_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6403_fu_69669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6192_fu_67874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6013_fu_66370_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5797_fu_64608_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5601_fu_63057_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6766_fu_61570_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6490_fu_59302_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6298_fu_57507_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_6094_fu_56003_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5906_fu_54255_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5689_fu_52689_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5395_fu_51008_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5117_fu_48740_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4905_fu_46963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4726_fu_45439_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4508_fu_43677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4319_fu_42126_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5483_fu_40652_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5203_fu_38384_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_5013_fu_36594_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4808_fu_35084_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4622_fu_33322_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4404_fu_31771_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4210_fu_29905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4005_fu_28283_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3726_fu_26015_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3515_fu_24229_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3336_fu_22720_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3116_fu_20958_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_2938_fu_19407_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_4091_fu_17933_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3810_fu_15665_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3624_fu_13879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3415_fu_12363_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3228_fu_10601_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_3019_fu_9050_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) (tmp_2836_fu_7185_p1.read());
    } else {
        hls_pow_reduce_an_17_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read()))) {
        hls_pow_reduce_an_17_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_17_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3598.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6731_fu_72479_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3495.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6573_fu_70732_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3477.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6457_fu_70211_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3397.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6245_fu_68423_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3323.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6060_fu_66848_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3220.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5850_fu_65141_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3146.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5655_fu_63599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3018.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6817_fu_62112_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2915.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6618_fu_60365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2897.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6539_fu_59844_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2817.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6353_fu_58056_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2743.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_6138_fu_56481_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2640.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5959_fu_54788_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2566.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5744_fu_53231_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2436.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5449_fu_51550_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2333.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5286_fu_49803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2315.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5169_fu_49282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2235.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4959_fu_47512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2161.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4774_fu_45917_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2058.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4561_fu_44210_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1984.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4370_fu_42668_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1856.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5537_fu_41194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1753.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5334_fu_39447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1735.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5256_fu_38926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_5065_fu_37143_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1580.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4856_fu_35562_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1477.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4672_fu_33855_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1403.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4457_fu_32313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1328.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4260_fu_30438_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1190.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4056_fu_28825_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1087.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3894_fu_27078_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1069.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3775_fu_26557_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state989.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3564_fu_24778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state915.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3380_fu_23198_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state812.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3166_fu_21491_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_2986_fu_19949_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_4143_fu_18475_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3942_fu_16728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3862_fu_16207_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3673_fu_14428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3463_fu_12841_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3277_fu_11134_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_3067_fu_9592_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) (tmp_2884_fu_7718_p1.read());
    } else {
        hls_pow_reduce_an_18_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state335.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state409.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state507.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state610.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state738.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state812.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state915.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state989.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1069.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1087.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1190.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1328.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1655.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1753.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1856.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1984.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2058.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2161.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2235.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2436.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2566.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2640.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2743.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2817.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2897.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2915.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3018.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3146.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3220.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3323.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3397.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3477.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3495.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3598.read()))) {
        hls_pow_reduce_an_18_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_18_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6668_reg_101397.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6390_reg_100447.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6179_reg_99646.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5999_reg_98966.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5782_reg_98224.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5588_reg_93109.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6753_reg_96937.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6477_reg_95987.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6285_reg_95186.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_6080_reg_94506.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5893_reg_93791.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5676_reg_93082.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5382_reg_92413.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5102_reg_91458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4892_reg_90672.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4713_reg_89980.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4495_reg_89238.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4303_reg_84108.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5470_reg_87950.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_5190_reg_86995.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4999_reg_86202.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4795_reg_85512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4607_reg_84773.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4390_reg_84081.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4194_reg_83205.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3989_reg_82487.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3710_reg_81537.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3499_reg_80724.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3321_reg_80044.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3103_reg_79302.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_2925_reg_74198.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_4078_reg_78025.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3795_reg_77075.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3608_reg_76301.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3401_reg_75605.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3213_reg_74863.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_3006_reg_74171.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) (tmp_2823_reg_73329.read());
    } else {
        hls_pow_reduce_an_19_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read()))) {
        hls_pow_reduce_an_19_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_19_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3535.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6668_fu_71239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3414.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6390_fu_68965_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3329.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6179_fu_67129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3255.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5999_fu_65621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3157.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5782_fu_63863_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2955.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6753_fu_60872_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2834.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6477_fu_58598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2749.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6285_fu_56762_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2675.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_6080_fu_55254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2577.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5893_fu_53530_p1.read());
    } else if ((esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_reg_84018.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2503.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5577_fu_51871_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, brmerge43_fu_51946_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5581_fu_51966_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5585_fu_51979_p2.read()))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5588_fu_51985_p1.read());
    } else if ((esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_reg_84018.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2503.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5577_fu_51871_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, brmerge44_fu_51889_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5583_fu_51909_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5587_fu_51922_p2.read()))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5676_fu_51928_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2373.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5382_fu_50310_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2252.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5102_fu_48035_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2167.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4892_fu_46217_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2093.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4713_fu_44690_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1995.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4495_fu_42932_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1793.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5470_fu_39954_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_5190_fu_37679_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4999_fu_35859_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1512.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4795_fu_34335_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4607_fu_32577_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
                esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_fu_30930_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, brmerge33_fu_31026_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4296_fu_31047_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4300_fu_31060_p2.read()))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4303_fu_31066_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
                esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_fu_30930_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, brmerge34_fu_30968_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4298_fu_30989_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4302_fu_31002_p2.read()))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4390_fu_31008_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1265.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4194_fu_29180_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3989_fu_27585_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1006.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3710_fu_25311_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state921.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3499_fu_23479_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state847.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3321_fu_21971_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state749.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3103_fu_20213_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state547.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_4078_fu_17235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3795_fu_14961_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3608_fu_13149_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3401_fu_11614_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3213_fu_9856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) && 
                esl_seteq<1,1,1>(x_is_p1_16_fu_8209_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, brmerge22_fu_8305_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2918_fu_8326_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2922_fu_8339_p2.read()))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_2925_fu_8345_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) && 
                esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(x_is_p1_16_fu_8209_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(brmerge23_fu_8247_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(tmp_2920_fu_8268_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(tmp_2924_fu_8281_p2.read(), ap_const_lv1_1))) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_3006_fu_8287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) (tmp_2823_fu_6445_p1.read());
    } else {
        hls_pow_reduce_an_20_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state267.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state847.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2675.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3255.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state547.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1512.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2093.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state426.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1006.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2834.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3414.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1127.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2373.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2955.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3535.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1672.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2252.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) && 
          esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(x_is_p1_16_fu_8209_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(brmerge23_fu_8247_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_2920_fu_8268_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(tmp_2924_fu_8281_p2.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state95.read()) && 
          esl_seteq<1,1,1>(x_is_p1_16_fu_8209_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, brmerge22_fu_8305_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2918_fu_8326_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2922_fu_8339_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state169.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state341.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state749.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state921.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1265.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
          esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_fu_30930_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, brmerge34_fu_30968_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4298_fu_30989_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4302_fu_31002_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1340.read()) && 
          esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_fu_30930_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, brmerge33_fu_31026_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4296_fu_31047_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4300_fu_31060_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1414.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1587.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1995.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2167.read()) || 
         (esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_reg_84018.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2503.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5577_fu_51871_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, brmerge44_fu_51889_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5583_fu_51909_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5587_fu_51922_p2.read())) || 
         (esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_1) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, x_is_p1_1_reg_84018.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2503.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5577_fu_51871_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, brmerge43_fu_51946_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5581_fu_51966_p2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5585_fu_51979_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2577.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2749.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3157.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3329.read()))) {
        hls_pow_reduce_an_20_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_20_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3595.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6739_fu_72432_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3492.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6581_fu_70685_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3474.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6465_fu_70164_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3394.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6253_fu_68376_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3320.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6068_fu_66801_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3217.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5858_fu_65094_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3143.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5663_fu_63552_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3015.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6827_fu_62065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2912.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6626_fu_60318_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2894.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6550_fu_59797_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2814.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6361_fu_58009_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2740.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_6149_fu_56434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2637.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5967_fu_54741_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2563.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5754_fu_53184_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2433.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5457_fu_51503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2330.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5295_fu_49756_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2312.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5177_fu_49235_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2232.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4967_fu_47465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2158.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4782_fu_45870_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2055.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4571_fu_44163_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1981.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4378_fu_42621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1853.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5545_fu_41147_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1750.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5343_fu_39400_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1732.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5264_fu_38879_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1652.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_5073_fu_37096_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4864_fu_35515_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4681_fu_33808_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4465_fu_32266_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1325.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4268_fu_30391_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4064_fu_28778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1084.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3902_fu_27031_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3783_fu_26510_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3572_fu_24731_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state912.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3388_fu_23151_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3174_fu_21444_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_2994_fu_19902_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_4151_fu_18428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3950_fu_16681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3870_fu_16160_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state406.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3681_fu_14381_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3471_fu_12794_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3285_fu_11087_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_3075_fu_9545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) (tmp_2892_fu_7671_p1.read());
    } else {
        hls_pow_reduce_an_21_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state406.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state486.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state607.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state735.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state809.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state912.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state986.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1066.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1084.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1187.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1325.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1474.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1577.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1652.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1750.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1853.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1981.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2055.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2158.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2232.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2433.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2563.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2637.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2740.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2814.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2894.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2912.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3015.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3143.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3320.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3394.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3474.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3492.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3595.read()))) {
        hls_pow_reduce_an_21_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_21_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6688_fu_71941_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6408_fu_69673_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6197_fu_67878_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6018_fu_66374_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5802_fu_64612_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5609_fu_63061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6772_fu_61574_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6495_fu_59306_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6303_fu_57511_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_6099_fu_56007_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5912_fu_54259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5695_fu_52693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5400_fu_51012_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5122_fu_48744_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4910_fu_46967_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4733_fu_45443_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4516_fu_43681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4324_fu_42130_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5488_fu_40656_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5208_fu_38388_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_5018_fu_36598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4813_fu_35088_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4627_fu_33326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4409_fu_31775_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4215_fu_29909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4010_fu_28287_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3732_fu_26019_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3520_fu_24233_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3341_fu_22724_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3121_fu_20962_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_2943_fu_19411_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_4096_fu_17937_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3815_fu_15669_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3629_fu_13883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3420_fu_12367_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3233_fu_10605_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_3024_fu_9054_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) (tmp_2841_fu_7189_p1.read());
    } else {
        hls_pow_reduce_an_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state386.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state592.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state893.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1051.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1172.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1310.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1385.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1558.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1632.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1717.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1838.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1966.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2040.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2139.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2297.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2418.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2548.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2622.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2721.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2879.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3000.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3128.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3202.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3301.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3374.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3459.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3580.read()))) {
        hls_pow_reduce_an_9_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_9_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3592.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6732_fu_72377_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3489.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6574_fu_70630_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3471.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6458_fu_70109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3391.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6246_fu_68321_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3317.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6061_fu_66746_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3214.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5851_fu_65039_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3140.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5656_fu_63497_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3012.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6818_fu_62010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2909.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6619_fu_60263_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2891.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6542_fu_59742_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2811.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6354_fu_57954_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2737.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_6139_fu_56379_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2634.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5960_fu_54686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2560.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5746_fu_53129_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2430.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5450_fu_51448_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2327.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5287_fu_49701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2309.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5170_fu_49180_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2229.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4960_fu_47410_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2155.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4775_fu_45815_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2052.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4562_fu_44108_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1978.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4371_fu_42566_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1850.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5538_fu_41092_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1747.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5335_fu_39345_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1729.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5257_fu_38824_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1649.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_5066_fu_37041_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1574.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4857_fu_35460_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1471.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4673_fu_33753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4458_fu_32211_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1322.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4261_fu_30336_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1184.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4057_fu_28723_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1081.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3895_fu_26976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1063.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3776_fu_26455_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3565_fu_24676_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3381_fu_23096_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state806.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3167_fu_21389_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_2987_fu_19847_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state604.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_4144_fu_18373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3943_fu_16626_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3863_fu_16105_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3674_fu_14326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3464_fu_12739_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3278_fu_11032_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_3068_fu_9490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) (tmp_2885_fu_7616_p1.read());
    } else {
        hls_pow_reduce_an_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3592.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6735_fu_72382_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3489.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6577_fu_70635_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3471.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6461_fu_70114_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3391.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6249_fu_68326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3317.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6064_fu_66751_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3214.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5854_fu_65044_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3140.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5659_fu_63502_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3012.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6821_fu_62015_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2909.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6622_fu_60268_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2891.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6546_fu_59747_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2811.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6357_fu_57959_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2737.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_6142_fu_56384_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2634.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5963_fu_54691_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2560.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5750_fu_53134_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2430.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5453_fu_51453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2327.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5291_fu_49706_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2309.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5173_fu_49185_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2229.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4963_fu_47415_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2155.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4778_fu_45820_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2052.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4565_fu_44113_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1978.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4374_fu_42571_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1850.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5541_fu_41097_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1747.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5339_fu_39350_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1729.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5260_fu_38829_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1649.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_5069_fu_37046_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1574.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4860_fu_35465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1471.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4677_fu_33758_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4461_fu_32216_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1322.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4264_fu_30341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1184.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4060_fu_28728_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1081.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3898_fu_26981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1063.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3779_fu_26460_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3568_fu_24681_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3384_fu_23101_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state806.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3170_fu_21394_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_2990_fu_19852_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state604.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_4147_fu_18378_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3946_fu_16631_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3866_fu_16110_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3677_fu_14331_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3467_fu_12744_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3281_fu_11037_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_3071_fu_9495_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) (tmp_2888_fu_7621_p1.read());
    } else {
        hls_pow_reduce_an_address1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state604.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state806.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1063.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1081.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1184.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1574.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1649.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1729.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1747.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1850.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1978.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2052.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2327.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2560.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2811.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2891.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3012.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3592.read()))) {
        hls_pow_reduce_an_ce0 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_ce0 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_hls_pow_reduce_an_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state152.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state226.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state329.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state483.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state604.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state806.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state983.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1063.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1081.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1184.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1322.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1397.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1574.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1649.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1729.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1747.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1850.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1978.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2052.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2155.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2229.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2309.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2327.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2560.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2634.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2737.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2811.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2891.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2909.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3012.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3214.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3317.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3471.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3489.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3592.read()))) {
        hls_pow_reduce_an_ce1 = ap_const_logic_1;
    } else {
        hls_pow_reduce_an_ce1 = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_i_1_fu_29082_p2() {
    i_1_fu_29082_p2 = (!i_reg_5671.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_reg_5671.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void particlemaster_ReadCalculations::thread_i_cast_fu_29071_p1() {
    i_cast_fu_29071_p1 = esl_zext<32,6>(i_reg_5671.read());
}

void particlemaster_ReadCalculations::thread_icmp30_fu_20111_p2() {
    icmp30_fu_20111_p2 = (!tmp_3925_reg_79248.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_3925_reg_79248.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp31_fu_9754_p2() {
    icmp31_fu_9754_p2 = (!tmp_4118_reg_74809.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_4118_reg_74809.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp32_fu_21687_p2() {
    icmp32_fu_21687_p2 = (!tmp_4329_fu_21677_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_4329_fu_21677_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp33_fu_11330_p2() {
    icmp33_fu_11330_p2 = (!tmp_4530_fu_11320_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_4530_fu_11320_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp34_fu_23360_p2() {
    icmp34_fu_23360_p2 = (!tmp_4731_reg_80652.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_4731_reg_80652.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp35_fu_13003_p2() {
    icmp35_fu_13003_p2 = (!tmp_4920_reg_76213.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_4920_reg_76213.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp36_fu_25009_p2() {
    icmp36_fu_25009_p2 = (!tmp_5146_fu_24999_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5146_fu_24999_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp37_fu_14656_p2() {
    icmp37_fu_14656_p2 = (!tmp_5380_fu_14646_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5380_fu_14646_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp38_fu_26719_p2() {
    icmp38_fu_26719_p2 = (!tmp_5605_reg_82143.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5605_reg_82143.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp39_fu_16369_p2() {
    icmp39_fu_16369_p2 = (!tmp_5734_reg_77681.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5734_reg_77681.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp40_fu_27213_p2() {
    icmp40_fu_27213_p2 = (!tmp_5836_fu_27203_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5836_fu_27203_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp41_fu_16863_p2() {
    icmp41_fu_16863_p2 = (!tmp_5943_fu_16853_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_5943_fu_16853_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp42_fu_28987_p2() {
    icmp42_fu_28987_p2 = (!tmp_6227_reg_83088.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_6227_reg_83088.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp43_fu_18637_p2() {
    icmp43_fu_18637_p2 = (!tmp_6435_reg_78626.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_6435_reg_78626.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp44_fu_30621_p2() {
    icmp44_fu_30621_p2 = (!tmp_6646_fu_30611_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_6646_fu_30611_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp45_fu_42830_p2() {
    icmp45_fu_42830_p2 = (!tmp_6928_reg_89184.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_6928_reg_89184.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp46_fu_32475_p2() {
    icmp46_fu_32475_p2 = (!tmp_7024_reg_84719.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7024_reg_84719.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp47_fu_44406_p2() {
    icmp47_fu_44406_p2 = (!tmp_7044_fu_44396_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7044_fu_44396_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp48_fu_34051_p2() {
    icmp48_fu_34051_p2 = (!tmp_7062_fu_34041_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7062_fu_34041_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp49_fu_46079_p2() {
    icmp49_fu_46079_p2 = (!tmp_7077_reg_90588.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7077_reg_90588.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp50_fu_35724_p2() {
    icmp50_fu_35724_p2 = (!tmp_7090_reg_86120.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7090_reg_86120.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp51_fu_47749_p2() {
    icmp51_fu_47749_p2 = (!tmp_7110_fu_47739_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7110_fu_47739_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp52_fu_37392_p2() {
    icmp52_fu_37392_p2 = (!tmp_7128_fu_37382_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7128_fu_37382_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp53_fu_49444_p2() {
    icmp53_fu_49444_p2 = (!tmp_7145_reg_92069.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7145_reg_92069.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp54_fu_39088_p2() {
    icmp54_fu_39088_p2 = (!tmp_7160_reg_87606.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7160_reg_87606.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp55_fu_49938_p2() {
    icmp55_fu_49938_p2 = (!tmp_7170_fu_49928_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7170_fu_49928_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp56_fu_39582_p2() {
    icmp56_fu_39582_p2 = (!tmp_7180_fu_39572_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7180_fu_39572_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp57_fu_51712_p2() {
    icmp57_fu_51712_p2 = (!tmp_7199_reg_93014.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7199_reg_93014.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp58_fu_41356_p2() {
    icmp58_fu_41356_p2 = (!tmp_7214_reg_88551.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7214_reg_88551.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp59_fu_63761_p2() {
    icmp59_fu_63761_p2 = (!tmp_7235_reg_98170.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7235_reg_98170.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp60_fu_53393_p2() {
    icmp60_fu_53393_p2 = (!tmp_7250_reg_93715.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7250_reg_93715.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp61_fu_65337_p2() {
    icmp61_fu_65337_p2 = (!tmp_7270_fu_65327_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7270_fu_65327_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp62_fu_54971_p2() {
    icmp62_fu_54971_p2 = (!tmp_7288_fu_54961_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7288_fu_54961_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp63_fu_67010_p2() {
    icmp63_fu_67010_p2 = (!tmp_7303_reg_99574.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7303_reg_99574.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp64_fu_56643_p2() {
    icmp64_fu_56643_p2 = (!tmp_7316_reg_95114.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7316_reg_95114.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp65_fu_68660_p2() {
    icmp65_fu_68660_p2 = (!tmp_7336_fu_68650_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7336_fu_68650_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp66_fu_58293_p2() {
    icmp66_fu_58293_p2 = (!tmp_7354_fu_58283_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7354_fu_58283_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp67_fu_70373_p2() {
    icmp67_fu_70373_p2 = (!tmp_7371_reg_101053.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7371_reg_101053.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp68_fu_60006_p2() {
    icmp68_fu_60006_p2 = (!tmp_7386_reg_96593.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7386_reg_96593.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp69_fu_70867_p2() {
    icmp69_fu_70867_p2 = (!tmp_7396_fu_70857_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7396_fu_70857_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp70_fu_60500_p2() {
    icmp70_fu_60500_p2 = (!tmp_7406_fu_60490_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7406_fu_60490_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp71_fu_72641_p2() {
    icmp71_fu_72641_p2 = (!tmp_7425_reg_101998.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7425_reg_101998.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp72_fu_62274_p2() {
    icmp72_fu_62274_p2 = (!tmp_7440_reg_97538.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_7440_reg_97538.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_icmp_fu_7901_p2() {
    icmp_fu_7901_p2 = (!tmp_3715_fu_7891_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_3715_fu_7891_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void particlemaster_ReadCalculations::thread_index0_V_36_fu_27564_p4() {
    index0_V_36_fu_27564_p4 = p_Val2_5112_reg_82393.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_index0_V_37_fu_17214_p4() {
    index0_V_37_fu_17214_p4 = p_Val2_5288_reg_77931.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_index0_V_49_fu_50289_p4() {
    index0_V_49_fu_50289_p4 = p_Val2_6357_reg_92319.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_index0_V_50_fu_39933_p4() {
    index0_V_50_fu_39933_p4 = p_Val2_6389_reg_87856.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_index0_V_61_fu_71218_p4() {
    index0_V_61_fu_71218_p4 = p_Val2_6861_reg_101303.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_index0_V_62_fu_60851_p4() {
    index0_V_62_fu_60851_p4 = p_Val2_6893_reg_96843.read().range(51, 46);
}

void particlemaster_ReadCalculations::thread_loc_V_100_fu_44436_p3() {
    loc_V_100_fu_44436_p3 = (!tmp_7043_reg_89875.read()[0].is_01())? sc_lv<52>(): ((tmp_7043_reg_89875.read()[0].to_bool())? tmp_4582_fu_44418_p4.read(): tmp_4583_fu_44427_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_101_fu_46094_p4() {
    loc_V_101_fu_46094_p4 = p_Val2_3333_reg_90577.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_102_fu_46161_p4() {
    loc_V_102_fu_46161_p4 = p_Val2_6439_fu_46149_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_103_fu_46171_p1() {
    loc_V_103_fu_46171_p1 = p_Val2_6439_fu_46149_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_104_fu_47784_p3() {
    loc_V_104_fu_47784_p3 = (!tmp_7109_reg_91364.read()[0].is_01())? sc_lv<52>(): ((tmp_7109_reg_91364.read()[0].to_bool())? tmp_4978_fu_47766_p4.read(): tmp_4979_fu_47775_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_105_fu_49459_p4() {
    loc_V_105_fu_49459_p4 = p_Val2_3640_reg_92058.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_106_fu_49968_p3() {
    loc_V_106_fu_49968_p3 = (!tmp_7169_reg_92256.read()[0].is_01())? sc_lv<52>(): ((tmp_7169_reg_92256.read()[0].to_bool())? tmp_5306_fu_49950_p4.read(): tmp_5307_fu_49959_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_107_fu_50149_p4() {
    loc_V_107_fu_50149_p4 = p_Val2_6357_fu_50137_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_108_fu_50159_p1() {
    loc_V_108_fu_50159_p1 = p_Val2_6357_fu_50137_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_109_fu_51727_p4() {
    loc_V_109_fu_51727_p4 = p_Val2_3833_reg_93003.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_110_fu_32490_p4() {
    loc_V_110_fu_32490_p4 = p_Val2_3121_reg_84708.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_112_fu_32555_p1() {
    loc_V_112_fu_32555_p1 = p_Val2_5973_fu_32533_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_113_fu_34081_p3() {
    loc_V_113_fu_34081_p3 = (!tmp_7061_reg_85410.read()[0].is_01())? sc_lv<52>(): ((tmp_7061_reg_85410.read()[0].to_bool())? tmp_4692_fu_34063_p4.read(): tmp_4693_fu_34072_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_114_fu_35739_p4() {
    loc_V_114_fu_35739_p4 = p_Val2_3406_reg_86109.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_116_fu_35821_p1() {
    loc_V_116_fu_35821_p1 = p_Val2_6461_fu_35799_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_117_fu_37427_p3() {
    loc_V_117_fu_37427_p3 = (!tmp_7127_reg_86894.read()[0].is_01())? sc_lv<52>(): ((tmp_7127_reg_86894.read()[0].to_bool())? tmp_5085_fu_37409_p4.read(): tmp_5086_fu_37418_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_118_fu_39103_p4() {
    loc_V_118_fu_39103_p4 = p_Val2_3718_reg_87595.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_119_fu_39612_p3() {
    loc_V_119_fu_39612_p3 = (!tmp_7179_reg_87799.read()[0].is_01())? sc_lv<52>(): ((tmp_7179_reg_87799.read()[0].to_bool())? tmp_5354_fu_39594_p4.read(): tmp_5355_fu_39603_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_120_fu_39793_p4() {
    loc_V_120_fu_39793_p4 = p_Val2_6389_fu_39781_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_121_fu_39803_p1() {
    loc_V_121_fu_39803_p1 = p_Val2_6389_fu_39781_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_122_fu_41371_p4() {
    loc_V_122_fu_41371_p4 = p_Val2_3907_reg_88540.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_123_fu_63776_p4() {
    loc_V_123_fu_63776_p4 = p_Val2_3987_reg_98159.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_125_fu_63841_p1() {
    loc_V_125_fu_63841_p1 = p_Val2_6583_fu_63819_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_126_fu_65367_p3() {
    loc_V_126_fu_65367_p3 = (!tmp_7269_reg_98861.read()[0].is_01())? sc_lv<52>(): ((tmp_7269_reg_98861.read()[0].to_bool())? tmp_5869_fu_65349_p4.read(): tmp_5870_fu_65358_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_127_fu_67025_p4() {
    loc_V_127_fu_67025_p4 = p_Val2_4291_reg_99563.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_129_fu_67102_p1() {
    loc_V_129_fu_67102_p1 = p_Val2_6943_fu_67080_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_130_fu_68695_p3() {
    loc_V_130_fu_68695_p3 = (!tmp_7335_reg_100344.read()[0].is_01())? sc_lv<52>(): ((tmp_7335_reg_100344.read()[0].to_bool())? tmp_6264_fu_68677_p4.read(): tmp_6265_fu_68686_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_131_fu_70388_p4() {
    loc_V_131_fu_70388_p4 = p_Val2_4579_reg_101042.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_132_fu_70897_p3() {
    loc_V_132_fu_70897_p3 = (!tmp_7395_reg_101240.read()[0].is_01())? sc_lv<52>(): ((tmp_7395_reg_101240.read()[0].to_bool())? tmp_6592_fu_70879_p4.read(): tmp_6593_fu_70888_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_133_fu_71078_p4() {
    loc_V_133_fu_71078_p4 = p_Val2_6861_fu_71066_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_134_fu_71088_p1() {
    loc_V_134_fu_71088_p1 = p_Val2_6861_fu_71066_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_135_fu_72656_p4() {
    loc_V_135_fu_72656_p4 = p_Val2_4774_reg_101987.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_136_fu_53408_p4() {
    loc_V_136_fu_53408_p4 = p_Val2_4056_reg_93704.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_137_fu_53463_p4() {
    loc_V_137_fu_53463_p4 = p_Val2_6617_fu_53451_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_138_fu_53473_p1() {
    loc_V_138_fu_53473_p1 = p_Val2_6617_fu_53451_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_139_fu_55001_p3() {
    loc_V_139_fu_55001_p3 = (!tmp_7287_reg_94406.read()[0].is_01())? sc_lv<52>(): ((tmp_7287_reg_94406.read()[0].to_bool())? tmp_5978_fu_54983_p4.read(): tmp_5979_fu_54992_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_140_fu_56658_p4() {
    loc_V_140_fu_56658_p4 = p_Val2_4358_reg_95103.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_142_fu_56735_p1() {
    loc_V_142_fu_56735_p1 = p_Val2_6965_fu_56713_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_143_fu_58328_p3() {
    loc_V_143_fu_58328_p3 = (!tmp_7353_reg_95884.read()[0].is_01())? sc_lv<52>(): ((tmp_7353_reg_95884.read()[0].to_bool())? tmp_6372_fu_58310_p4.read(): tmp_6373_fu_58319_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_144_fu_60021_p4() {
    loc_V_144_fu_60021_p4 = p_Val2_4659_reg_96582.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_145_fu_60530_p3() {
    loc_V_145_fu_60530_p3 = (!tmp_7405_reg_96780.read()[0].is_01())? sc_lv<52>(): ((tmp_7405_reg_96780.read()[0].to_bool())? tmp_6640_fu_60512_p4.read(): tmp_6641_fu_60521_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_147_fu_60721_p1() {
    loc_V_147_fu_60721_p1 = p_Val2_6893_fu_60699_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_148_fu_62289_p4() {
    loc_V_148_fu_62289_p4 = p_Val2_4858_reg_97527.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_62_fu_6404_p1() {
    loc_V_62_fu_6404_p1 = p_Val2_s_fu_6382_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_63_fu_7931_p3() {
    loc_V_63_fu_7931_p3 = (!tmp_3714_reg_73961.read()[0].is_01())? sc_lv<52>(): ((tmp_3714_reg_73961.read()[0].to_bool())? tmp_2903_fu_7913_p4.read(): tmp_2904_fu_7922_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_64_fu_8133_p4() {
    loc_V_64_fu_8133_p4 = p_Val2_4717_fu_8121_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_65_fu_8143_p1() {
    loc_V_65_fu_8143_p1 = p_Val2_4717_fu_8121_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_66_fu_20126_p4() {
    loc_V_66_fu_20126_p4 = p_Val2_2152_reg_79237.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_68_fu_20191_p1() {
    loc_V_68_fu_20191_p1 = p_Val2_3671_fu_20169_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_69_fu_21717_p3() {
    loc_V_69_fu_21717_p3 = (!tmp_4327_reg_79939.read()[0].is_01())? sc_lv<52>(): ((tmp_4327_reg_79939.read()[0].to_bool())? tmp_3186_fu_21699_p4.read(): tmp_3187_fu_21708_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_70_fu_23375_p4() {
    loc_V_70_fu_23375_p4 = p_Val2_2417_reg_80641.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_72_fu_23452_p1() {
    loc_V_72_fu_23452_p1 = p_Val2_5565_fu_23430_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_73_fu_25044_p3() {
    loc_V_73_fu_25044_p3 = (!tmp_5144_reg_81419.read()[0].is_01())? sc_lv<52>(): ((tmp_5144_reg_81419.read()[0].to_bool())? tmp_3583_fu_25026_p4.read(): tmp_3584_fu_25035_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_74_fu_26734_p4() {
    loc_V_74_fu_26734_p4 = p_Val2_2683_reg_82132.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_75_fu_27243_p3() {
    loc_V_75_fu_27243_p3 = (!tmp_5834_reg_82330.read()[0].is_01())? sc_lv<52>(): ((tmp_5834_reg_82330.read()[0].to_bool())? tmp_3916_fu_27225_p4.read(): tmp_3917_fu_27234_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_77_fu_27434_p1() {
    loc_V_77_fu_27434_p1 = p_Val2_5112_fu_27412_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_78_fu_29002_p4() {
    loc_V_78_fu_29002_p4 = p_Val2_2853_reg_83077.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_79_fu_9769_p4() {
    loc_V_79_fu_9769_p4 = p_Val2_2219_reg_74798.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_81_fu_9834_p1() {
    loc_V_81_fu_9834_p1 = p_Val2_3871_fu_9812_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_82_fu_11360_p3() {
    loc_V_82_fu_11360_p3 = (!tmp_4528_reg_75500.read()[0].is_01())? sc_lv<52>(): ((tmp_4528_reg_75500.read()[0].to_bool())? tmp_3298_fu_11342_p4.read(): tmp_3299_fu_11351_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_83_fu_13018_p4() {
    loc_V_83_fu_13018_p4 = p_Val2_2484_reg_76202.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_85_fu_13095_p1() {
    loc_V_85_fu_13095_p1 = p_Val2_5649_fu_13073_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_86_fu_14691_p3() {
    loc_V_86_fu_14691_p3 = (!tmp_5379_reg_76986.read()[0].is_01())? sc_lv<52>(): ((tmp_5379_reg_76986.read()[0].to_bool())? tmp_3693_fu_14673_p4.read(): tmp_3694_fu_14682_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_87_fu_16384_p4() {
    loc_V_87_fu_16384_p4 = p_Val2_2750_reg_77670.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_88_fu_16893_p3() {
    loc_V_88_fu_16893_p3 = (!tmp_5941_reg_77868.read()[0].is_01())? sc_lv<52>(): ((tmp_5941_reg_77868.read()[0].to_bool())? tmp_3961_fu_16875_p4.read(): tmp_3962_fu_16884_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_89_fu_17074_p4() {
    loc_V_89_fu_17074_p4 = p_Val2_5288_fu_17062_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_90_fu_17084_p1() {
    loc_V_90_fu_17084_p1 = p_Val2_5288_fu_17062_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_91_fu_18652_p4() {
    loc_V_91_fu_18652_p4 = p_Val2_2920_reg_78615.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_92_fu_29113_p4() {
    loc_V_92_fu_29113_p4 = p_Val2_6511_fu_29101_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_93_fu_29123_p1() {
    loc_V_93_fu_29123_p1 = p_Val2_6511_fu_29101_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_94_fu_30651_p3() {
    loc_V_94_fu_30651_p3 = (!tmp_6644_reg_83820.read()[0].is_01())? sc_lv<52>(): ((tmp_6644_reg_83820.read()[0].to_bool())? tmp_4279_fu_30633_p4.read(): tmp_4280_fu_30642_p4.read());
}

void particlemaster_ReadCalculations::thread_loc_V_95_fu_30853_p4() {
    loc_V_95_fu_30853_p4 = p_Val2_6785_fu_30841_p1.read().range(62, 52);
}

void particlemaster_ReadCalculations::thread_loc_V_96_fu_30863_p1() {
    loc_V_96_fu_30863_p1 = p_Val2_6785_fu_30841_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_loc_V_97_fu_42845_p4() {
    loc_V_97_fu_42845_p4 = p_Val2_3054_reg_89173.read().range(56, 5);
}

void particlemaster_ReadCalculations::thread_loc_V_99_fu_42910_p1() {
    loc_V_99_fu_42910_p1 = p_Val2_5939_fu_42888_p1.read().range(52-1, 0);
}

void particlemaster_ReadCalculations::thread_newSel16_fu_25183_p3() {
    newSel16_fu_25183_p3 = (!sel_tmp308_reg_81486.read()[0].is_01())? sc_lv<64>(): ((sel_tmp308_reg_81486.read()[0].to_bool())? p_Result_1304_fu_25119_p3.read(): p_Result_2546_fu_25112_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel17_fu_25195_p3() {
    newSel17_fu_25195_p3 = (!or_cond_fu_25172_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond_fu_25172_p2.read()[0].to_bool())? newSel_fu_25165_p3.read(): p_Result_1302_fu_25126_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel18_fu_25209_p3() {
    newSel18_fu_25209_p3 = (!or_cond17_fu_25190_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond17_fu_25190_p2.read()[0].to_bool())? newSel16_fu_25183_p3.read(): p_Result_2548_reg_81466.read());
}

void particlemaster_ReadCalculations::thread_newSel19_fu_14829_p3() {
    newSel19_fu_14829_p3 = (!sel_tmp345_reg_77031.read()[0].is_01())? sc_lv<64>(): ((sel_tmp345_reg_77031.read()[0].to_bool())? p_Result_1351_fu_14811_p3.read(): p_Result_1349_fu_14818_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel20_fu_14836_p3() {
    newSel20_fu_14836_p3 = (!sel_tmp336_reg_77015.read()[0].is_01())? sc_lv<64>(): ((sel_tmp336_reg_77015.read()[0].to_bool())? p_Result_1351_fu_14811_p3.read(): p_Result_2566_fu_14804_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel21_fu_14848_p3() {
    newSel21_fu_14848_p3 = (!or_cond19_reg_77036.read()[0].is_01())? sc_lv<64>(): ((or_cond19_reg_77036.read()[0].to_bool())? newSel19_fu_14829_p3.read(): p_Result_1349_fu_14818_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel22_fu_14859_p3() {
    newSel22_fu_14859_p3 = (!or_cond21_fu_14843_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond21_fu_14843_p2.read()[0].to_bool())? newSel20_fu_14836_p3.read(): p_Result_2568_reg_77010.read());
}

void particlemaster_ReadCalculations::thread_newSel23_fu_47889_p3() {
    newSel23_fu_47889_p3 = (!sel_tmp357_reg_91393.read()[0].is_01())? sc_lv<64>(): ((sel_tmp357_reg_91393.read()[0].to_bool())? p_Result_1797_fu_47843_p3.read(): p_Result_1795_fu_47850_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel24_fu_47907_p3() {
    newSel24_fu_47907_p3 = (!sel_tmp323_reg_91424.read()[0].is_01())? sc_lv<64>(): ((sel_tmp323_reg_91424.read()[0].to_bool())? p_Result_1797_fu_47843_p3.read(): p_Result_2588_fu_47836_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel25_fu_47919_p3() {
    newSel25_fu_47919_p3 = (!or_cond23_fu_47896_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond23_fu_47896_p2.read()[0].to_bool())? newSel23_fu_47889_p3.read(): p_Result_1795_fu_47850_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel26_fu_47933_p3() {
    newSel26_fu_47933_p3 = (!or_cond25_fu_47914_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond25_fu_47914_p2.read()[0].to_bool())? newSel24_fu_47907_p3.read(): p_Result_2590_reg_91409.read());
}

void particlemaster_ReadCalculations::thread_newSel27_fu_37533_p3() {
    newSel27_fu_37533_p3 = (!sel_tmp395_reg_86923.read()[0].is_01())? sc_lv<64>(): ((sel_tmp395_reg_86923.read()[0].to_bool())? p_Result_1844_fu_37487_p3.read(): p_Result_1842_fu_37494_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel28_fu_37551_p3() {
    newSel28_fu_37551_p3 = (!sel_tmp381_reg_86961.read()[0].is_01())? sc_lv<64>(): ((sel_tmp381_reg_86961.read()[0].to_bool())? p_Result_1844_fu_37487_p3.read(): p_Result_2608_fu_37480_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel29_fu_37563_p3() {
    newSel29_fu_37563_p3 = (!or_cond27_fu_37540_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond27_fu_37540_p2.read()[0].to_bool())? newSel27_fu_37533_p3.read(): p_Result_1842_fu_37494_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel30_fu_37577_p3() {
    newSel30_fu_37577_p3 = (!or_cond29_fu_37558_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond29_fu_37558_p2.read()[0].to_bool())? newSel28_fu_37551_p3.read(): p_Result_2610_reg_86946.read());
}

void particlemaster_ReadCalculations::thread_newSel31_fu_68826_p3() {
    newSel31_fu_68826_p3 = (!sel_tmp471_reg_100408.read()[0].is_01())? sc_lv<64>(): ((sel_tmp471_reg_100408.read()[0].to_bool())? p_Result_2293_fu_68804_p3.read(): p_Result_2289_fu_68811_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel32_fu_68838_p3() {
    newSel32_fu_68838_p3 = (!sel_tmp464_reg_100391.read()[0].is_01())? sc_lv<64>(): ((sel_tmp464_reg_100391.read()[0].to_bool())? p_Result_2293_fu_68804_p3.read(): p_Result_2628_fu_68797_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel33_fu_68850_p3() {
    newSel33_fu_68850_p3 = (!or_cond31_fu_68833_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond31_fu_68833_p2.read()[0].to_bool())? newSel31_fu_68826_p3.read(): p_Result_2289_fu_68811_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel34_fu_68863_p3() {
    newSel34_fu_68863_p3 = (!or_cond33_fu_68845_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond33_fu_68845_p2.read()[0].to_bool())? newSel32_fu_68838_p3.read(): p_Result_2630_reg_100381.read());
}

void particlemaster_ReadCalculations::thread_newSel35_fu_58459_p3() {
    newSel35_fu_58459_p3 = (!sel_tmp489_reg_95948.read()[0].is_01())? sc_lv<64>(): ((sel_tmp489_reg_95948.read()[0].to_bool())? p_Result_2340_fu_58437_p3.read(): p_Result_2338_fu_58444_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel36_fu_58471_p3() {
    newSel36_fu_58471_p3 = (!sel_tmp482_reg_95931.read()[0].is_01())? sc_lv<64>(): ((sel_tmp482_reg_95931.read()[0].to_bool())? p_Result_2340_fu_58437_p3.read(): p_Result_2648_fu_58430_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel37_fu_58483_p3() {
    newSel37_fu_58483_p3 = (!or_cond35_fu_58466_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond35_fu_58466_p2.read()[0].to_bool())? newSel35_fu_58459_p3.read(): p_Result_2338_fu_58444_p3.read());
}

void particlemaster_ReadCalculations::thread_newSel38_fu_58496_p3() {
    newSel38_fu_58496_p3 = (!or_cond37_fu_58478_p2.read()[0].is_01())? sc_lv<64>(): ((or_cond37_fu_58478_p2.read()[0].to_bool())? newSel36_fu_58471_p3.read(): p_Result_2650_reg_95921.read());
}

void particlemaster_ReadCalculations::thread_newSel_fu_25165_p3() {
    newSel_fu_25165_p3 = (!sel_tmp324_reg_81503.read()[0].is_01())? sc_lv<64>(): ((sel_tmp324_reg_81503.read()[0].to_bool())? p_Result_1304_fu_25119_p3.read(): p_Result_1302_fu_25126_p3.read());
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_15_fu_21622_p2() {
    not_Result_i10_0_15_fu_21622_p2 = (p_Result_1156_reg_79269.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_16_fu_11265_p2() {
    not_Result_i10_0_16_fu_11265_p2 = (p_Result_1190_reg_74830.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_17_fu_24968_p2() {
    not_Result_i10_0_17_fu_24968_p2 = (p_Result_1503_reg_80686.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_18_fu_14512_p2() {
    not_Result_i10_0_18_fu_14512_p2 = (p_Result_1527_reg_76247.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_19_fu_27483_p2() {
    not_Result_i10_0_19_fu_27483_p2 = (p_Result_1430_reg_82399.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_20_fu_17133_p2() {
    not_Result_i10_0_20_fu_17133_p2 = (p_Result_1464_reg_77937.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_21_fu_30569_p2() {
    not_Result_i10_0_21_fu_30569_p2 = (p_Result_2077_reg_83150.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_22_fu_30925_p2() {
    not_Result_i10_0_22_fu_30925_p2 = (p_Result_2355_reg_83899.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_23_fu_44341_p2() {
    not_Result_i10_0_23_fu_44341_p2 = (p_Result_1649_reg_89205.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_24_fu_33986_p2() {
    not_Result_i10_0_24_fu_33986_p2 = (p_Result_1683_reg_84740.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_25_fu_47600_p2() {
    not_Result_i10_0_25_fu_47600_p2 = (p_Result_1996_reg_90622.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_26_fu_37231_p2() {
    not_Result_i10_0_26_fu_37231_p2 = (p_Result_2020_reg_86159.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_27_fu_50208_p2() {
    not_Result_i10_0_27_fu_50208_p2 = (p_Result_1923_reg_92325.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_28_fu_39852_p2() {
    not_Result_i10_0_28_fu_39852_p2 = (p_Result_1957_reg_87862.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_29_fu_65272_p2() {
    not_Result_i10_0_29_fu_65272_p2 = (p_Result_2141_reg_98191.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_30_fu_54919_p2() {
    not_Result_i10_0_30_fu_54919_p2 = (p_Result_2175_reg_93736.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_31_fu_68619_p2() {
    not_Result_i10_0_31_fu_68619_p2 = (p_Result_2492_reg_99608.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_32_fu_58252_p2() {
    not_Result_i10_0_32_fu_58252_p2 = (p_Result_2516_reg_95148.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_33_fu_71137_p2() {
    not_Result_i10_0_33_fu_71137_p2 = (p_Result_2419_reg_101309.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_34_fu_60770_p2() {
    not_Result_i10_0_34_fu_60770_p2 = (p_Result_2453_reg_96849.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_0_fu_8169_p2() {
    not_Result_i10_0_fu_8169_p2 = (p_Result_1366_fu_8125_p3.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_not_Result_i10_fu_7849_p2() {
    not_Result_i10_fu_7849_p2 = (p_Result_s_reg_73290.read() ^ ap_const_lv1_1);
}

void particlemaster_ReadCalculations::thread_notlhs2_fu_51847_p2() {
    notlhs2_fu_51847_p2 = (!tmp_5571_fu_51829_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5571_fu_51829_p4.read() != ap_const_lv8_FF);
}

void particlemaster_ReadCalculations::thread_notlhs_fu_51813_p2() {
    notlhs_fu_51813_p2 = (!tmp_5570_fu_51799_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5570_fu_51799_p4.read() != ap_const_lv8_FF);
}

void particlemaster_ReadCalculations::thread_notrhs2_fu_51853_p2() {
    notrhs2_fu_51853_p2 = (!tmp_7220_fu_51839_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7220_fu_51839_p1.read() == ap_const_lv23_0);
}

void particlemaster_ReadCalculations::thread_notrhs_fu_51819_p2() {
    notrhs_fu_51819_p2 = (!tmp_7219_fu_51809_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7219_fu_51809_p1.read() == ap_const_lv23_0);
}

void particlemaster_ReadCalculations::thread_or_cond1048_i30_fu_20116_p2() {
    or_cond1048_i30_fu_20116_p2 = (tmp_3005_reg_79101.read() | icmp30_fu_20111_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i31_fu_9759_p2() {
    or_cond1048_i31_fu_9759_p2 = (tmp_3086_reg_74662.read() | icmp31_fu_9754_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i32_fu_21799_p2() {
    or_cond1048_i32_fu_21799_p2 = (tmp_3183_reg_79783.read() | icmp32_reg_79965.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i33_fu_11442_p2() {
    or_cond1048_i33_fu_11442_p2 = (tmp_3296_reg_75344.read() | icmp33_reg_75526.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i34_fu_23365_p2() {
    or_cond1048_i34_fu_23365_p2 = (tmp_3400_reg_80505.read() | icmp34_fu_23360_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i35_fu_13008_p2() {
    or_cond1048_i35_fu_13008_p2 = (tmp_3482_reg_76066.read() | icmp35_fu_13003_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i36_fu_25015_p2() {
    or_cond1048_i36_fu_25015_p2 = (tmp_3581_reg_81240.read() | icmp36_fu_25009_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i37_fu_14662_p2() {
    or_cond1048_i37_fu_14662_p2 = (tmp_3691_reg_76798.read() | icmp37_fu_14656_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i38_fu_26724_p2() {
    or_cond1048_i38_fu_26724_p2 = (tmp_3794_reg_81996.read() | icmp38_fu_26719_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i39_fu_16374_p2() {
    or_cond1048_i39_fu_16374_p2 = (tmp_3883_reg_77534.read() | icmp39_fu_16369_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i40_fu_27317_p2() {
    or_cond1048_i40_fu_27317_p2 = (tmp_3914_reg_82187.read() | icmp40_reg_82341.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i41_fu_16967_p2() {
    or_cond1048_i41_fu_16967_p2 = (tmp_3959_reg_77725.read() | icmp41_reg_77879.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i42_fu_28992_p2() {
    or_cond1048_i42_fu_28992_p2 = (tmp_4076_reg_82941.read() | icmp42_fu_28987_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i43_fu_18642_p2() {
    or_cond1048_i43_fu_18642_p2 = (tmp_4164_reg_78479.read() | icmp43_fu_18637_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i44_fu_30726_p2() {
    or_cond1048_i44_fu_30726_p2 = (tmp_4277_reg_83664.read() | icmp44_reg_83841.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i45_fu_42835_p2() {
    or_cond1048_i45_fu_42835_p2 = (tmp_4389_reg_89037.read() | icmp45_fu_42830_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i46_fu_32480_p2() {
    or_cond1048_i46_fu_32480_p2 = (tmp_4476_reg_84572.read() | icmp46_fu_32475_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i47_fu_44518_p2() {
    or_cond1048_i47_fu_44518_p2 = (tmp_4580_reg_89719.read() | icmp47_reg_89901.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i48_fu_34163_p2() {
    or_cond1048_i48_fu_34163_p2 = (tmp_4690_reg_85254.read() | icmp48_reg_85436.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i49_fu_46084_p2() {
    or_cond1048_i49_fu_46084_p2 = (tmp_4794_reg_90441.read() | icmp49_fu_46079_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i50_fu_35729_p2() {
    or_cond1048_i50_fu_35729_p2 = (tmp_4875_reg_85973.read() | icmp50_fu_35724_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i51_fu_47755_p2() {
    or_cond1048_i51_fu_47755_p2 = (tmp_4976_reg_91179.read() | icmp51_fu_47749_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i52_fu_37398_p2() {
    or_cond1048_i52_fu_37398_p2 = (tmp_5083_reg_86705.read() | icmp52_fu_37392_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i53_fu_49449_p2() {
    or_cond1048_i53_fu_49449_p2 = (tmp_5189_reg_91922.read() | icmp53_fu_49444_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i54_fu_39093_p2() {
    or_cond1048_i54_fu_39093_p2 = (tmp_5275_reg_87459.read() | icmp54_fu_39088_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i55_fu_50042_p2() {
    or_cond1048_i55_fu_50042_p2 = (tmp_5304_reg_92113.read() | icmp55_reg_92267.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i56_fu_39718_p2() {
    or_cond1048_i56_fu_39718_p2 = (tmp_5352_reg_87650.read() | icmp56_reg_87810.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i57_fu_51717_p2() {
    or_cond1048_i57_fu_51717_p2 = (tmp_5469_reg_92867.read() | icmp57_fu_51712_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i58_fu_41361_p2() {
    or_cond1048_i58_fu_41361_p2 = (tmp_5556_reg_88404.read() | icmp58_fu_41356_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i59_fu_63766_p2() {
    or_cond1048_i59_fu_63766_p2 = (tmp_5675_reg_98023.read() | icmp59_fu_63761_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i60_fu_53398_p2() {
    or_cond1048_i60_fu_53398_p2 = (tmp_5765_reg_93568.read() | icmp60_fu_53393_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i61_fu_65449_p2() {
    or_cond1048_i61_fu_65449_p2 = (tmp_5867_reg_98705.read() | icmp61_reg_98887.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i62_fu_55082_p2() {
    or_cond1048_i62_fu_55082_p2 = (tmp_5976_reg_94250.read() | icmp62_reg_94427.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i63_fu_67015_p2() {
    or_cond1048_i63_fu_67015_p2 = (tmp_6079_reg_99427.read() | icmp63_fu_67010_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i64_fu_56648_p2() {
    or_cond1048_i64_fu_56648_p2 = (tmp_6162_reg_94967.read() | icmp64_fu_56643_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i65_fu_68666_p2() {
    or_cond1048_i65_fu_68666_p2 = (tmp_6262_reg_100160.read() | icmp65_fu_68660_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i66_fu_58299_p2() {
    or_cond1048_i66_fu_58299_p2 = (tmp_6370_reg_95700.read() | icmp66_fu_58293_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i67_fu_70378_p2() {
    or_cond1048_i67_fu_70378_p2 = (tmp_6476_reg_100906.read() | icmp67_fu_70373_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i68_fu_60011_p2() {
    or_cond1048_i68_fu_60011_p2 = (tmp_6562_reg_96446.read() | icmp68_fu_60006_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i69_fu_70971_p2() {
    or_cond1048_i69_fu_70971_p2 = (tmp_6590_reg_101097.read() | icmp69_reg_101251.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i70_fu_60604_p2() {
    or_cond1048_i70_fu_60604_p2 = (tmp_6638_reg_96637.read() | icmp70_reg_96791.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i71_fu_72646_p2() {
    or_cond1048_i71_fu_72646_p2 = (tmp_6751_reg_101851.read() | icmp71_fu_72641_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i72_fu_62279_p2() {
    or_cond1048_i72_fu_62279_p2 = (tmp_6838_reg_97391.read() | icmp72_fu_62274_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond1048_i_fu_8006_p2() {
    or_cond1048_i_fu_8006_p2 = (tmp_2901_reg_73805.read() | icmp_reg_73982.read());
}

void particlemaster_ReadCalculations::thread_or_cond16_fu_25177_p2() {
    or_cond16_fu_25177_p2 = (sel_tmp311_fu_25156_p2.read() | sel_tmp309_fu_25137_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond17_fu_25190_p2() {
    or_cond17_fu_25190_p2 = (sel_tmp308_reg_81486.read() | sel_tmp299_fu_25133_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond18_fu_25203_p2() {
    or_cond18_fu_25203_p2 = (or_cond_fu_25172_p2.read() | or_cond16_fu_25177_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond19_fu_14792_p2() {
    or_cond19_fu_14792_p2 = (sel_tmp345_fu_14787_p2.read() | sel_tmp343_fu_14776_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond20_fu_14798_p2() {
    or_cond20_fu_14798_p2 = (sel_tmp339_fu_14765_p2.read() | sel_tmp337_fu_14743_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond21_fu_14843_p2() {
    or_cond21_fu_14843_p2 = (sel_tmp336_reg_77015.read() | sel_tmp327_fu_14825_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond22_fu_14855_p2() {
    or_cond22_fu_14855_p2 = (or_cond19_reg_77036.read() | or_cond20_reg_77042.read());
}

void particlemaster_ReadCalculations::thread_or_cond23_fu_47896_p2() {
    or_cond23_fu_47896_p2 = (sel_tmp357_reg_91393.read() | sel_tmp350_fu_47885_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond24_fu_47901_p2() {
    or_cond24_fu_47901_p2 = (sel_tmp342_fu_47880_p2.read() | sel_tmp332_fu_47861_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond25_fu_47914_p2() {
    or_cond25_fu_47914_p2 = (sel_tmp323_reg_91424.read() | sel_tmp313_fu_47857_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond26_fu_47927_p2() {
    or_cond26_fu_47927_p2 = (or_cond23_fu_47896_p2.read() | or_cond24_fu_47901_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond27_fu_37540_p2() {
    or_cond27_fu_37540_p2 = (sel_tmp395_reg_86923.read() | sel_tmp393_fu_37529_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond28_fu_37545_p2() {
    or_cond28_fu_37545_p2 = (sel_tmp391_fu_37524_p2.read() | sel_tmp389_fu_37505_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond29_fu_37558_p2() {
    or_cond29_fu_37558_p2 = (sel_tmp381_reg_86961.read() | sel_tmp371_fu_37501_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond30_fu_37571_p2() {
    or_cond30_fu_37571_p2 = (or_cond27_fu_37540_p2.read() | or_cond28_fu_37545_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond31_fu_68833_p2() {
    or_cond31_fu_68833_p2 = (sel_tmp471_reg_100408.read() | sel_tmp469_fu_68822_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond32_fu_68791_p2() {
    or_cond32_fu_68791_p2 = (sel_tmp467_fu_68770_p2.read() | sel_tmp465_fu_68748_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond33_fu_68845_p2() {
    or_cond33_fu_68845_p2 = (sel_tmp464_reg_100391.read() | sel_tmp456_fu_68818_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond34_fu_68858_p2() {
    or_cond34_fu_68858_p2 = (or_cond31_fu_68833_p2.read() | or_cond32_reg_100414.read());
}

void particlemaster_ReadCalculations::thread_or_cond35_fu_58466_p2() {
    or_cond35_fu_58466_p2 = (sel_tmp489_reg_95948.read() | sel_tmp487_fu_58455_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond36_fu_58424_p2() {
    or_cond36_fu_58424_p2 = (sel_tmp485_fu_58403_p2.read() | sel_tmp483_fu_58381_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond37_fu_58478_p2() {
    or_cond37_fu_58478_p2 = (sel_tmp482_reg_95931.read() | sel_tmp474_fu_58451_p2.read());
}

void particlemaster_ReadCalculations::thread_or_cond38_fu_58491_p2() {
    or_cond38_fu_58491_p2 = (or_cond35_fu_58466_p2.read() | or_cond36_reg_95954.read());
}

void particlemaster_ReadCalculations::thread_or_cond_fu_25172_p2() {
    or_cond_fu_25172_p2 = (sel_tmp324_reg_81503.read() | sel_tmp314_fu_25161_p2.read());
}

void particlemaster_ReadCalculations::thread_out_exp_V_30_fu_20138_p2() {
    out_exp_V_30_fu_20138_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4160_fu_20135_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4160_fu_20135_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_31_fu_21728_p2() {
    out_exp_V_31_fu_21728_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4396_fu_21724_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4396_fu_21724_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_32_fu_23387_p2() {
    out_exp_V_32_fu_23387_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4935_fu_23384_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4935_fu_23384_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_33_fu_25055_p2() {
    out_exp_V_33_fu_25055_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_5213_fu_25051_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_5213_fu_25051_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_34_fu_26746_p2() {
    out_exp_V_34_fu_26746_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_5786_fu_26743_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_5786_fu_26743_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_35_fu_27254_p2() {
    out_exp_V_35_fu_27254_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_5876_fu_27250_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_5876_fu_27250_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_36_fu_29014_p2() {
    out_exp_V_36_fu_29014_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_6450_fu_29011_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_6450_fu_29011_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_37_fu_9781_p2() {
    out_exp_V_37_fu_9781_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4190_fu_9778_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4190_fu_9778_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_38_fu_11371_p2() {
    out_exp_V_38_fu_11371_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4570_fu_11367_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4570_fu_11367_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_39_fu_13030_p2() {
    out_exp_V_39_fu_13030_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_4937_fu_13027_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_4937_fu_13027_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_40_fu_14702_p2() {
    out_exp_V_40_fu_14702_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_5413_fu_14698_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_5413_fu_14698_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_41_fu_16396_p2() {
    out_exp_V_41_fu_16396_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_5787_fu_16393_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_5787_fu_16393_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_42_fu_16904_p2() {
    out_exp_V_42_fu_16904_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_6010_fu_16900_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_6010_fu_16900_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_43_fu_18664_p2() {
    out_exp_V_43_fu_18664_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_6452_fu_18661_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_6452_fu_18661_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_44_fu_30662_p2() {
    out_exp_V_44_fu_30662_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_6686_fu_30658_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_6686_fu_30658_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_45_fu_42857_p2() {
    out_exp_V_45_fu_42857_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7027_fu_42854_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7027_fu_42854_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_46_fu_44447_p2() {
    out_exp_V_46_fu_44447_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7046_fu_44443_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7046_fu_44443_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_47_fu_46106_p2() {
    out_exp_V_47_fu_46106_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7093_fu_46103_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7093_fu_46103_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_48_fu_47795_p2() {
    out_exp_V_48_fu_47795_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7112_fu_47791_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7112_fu_47791_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_49_fu_49471_p2() {
    out_exp_V_49_fu_49471_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7163_fu_49468_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7163_fu_49468_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_50_fu_49979_p2() {
    out_exp_V_50_fu_49979_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7172_fu_49975_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7172_fu_49975_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_51_fu_51739_p2() {
    out_exp_V_51_fu_51739_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7217_fu_51736_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7217_fu_51736_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_52_fu_32502_p2() {
    out_exp_V_52_fu_32502_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7028_fu_32499_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7028_fu_32499_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_53_fu_34092_p2() {
    out_exp_V_53_fu_34092_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7064_fu_34088_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7064_fu_34088_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_54_fu_35751_p2() {
    out_exp_V_54_fu_35751_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7094_fu_35748_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7094_fu_35748_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_55_fu_37438_p2() {
    out_exp_V_55_fu_37438_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7130_fu_37434_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7130_fu_37434_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_56_fu_39115_p2() {
    out_exp_V_56_fu_39115_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7164_fu_39112_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7164_fu_39112_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_57_fu_39623_p2() {
    out_exp_V_57_fu_39623_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7182_fu_39619_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7182_fu_39619_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_58_fu_41383_p2() {
    out_exp_V_58_fu_41383_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7218_fu_41380_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7218_fu_41380_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_59_fu_63788_p2() {
    out_exp_V_59_fu_63788_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7253_fu_63785_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7253_fu_63785_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_60_fu_65378_p2() {
    out_exp_V_60_fu_65378_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7272_fu_65374_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7272_fu_65374_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_61_fu_67037_p2() {
    out_exp_V_61_fu_67037_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7319_fu_67034_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7319_fu_67034_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_62_fu_68706_p2() {
    out_exp_V_62_fu_68706_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7338_fu_68702_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7338_fu_68702_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_63_fu_70400_p2() {
    out_exp_V_63_fu_70400_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7389_fu_70397_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7389_fu_70397_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_64_fu_70908_p2() {
    out_exp_V_64_fu_70908_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7398_fu_70904_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7398_fu_70904_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_65_fu_72668_p2() {
    out_exp_V_65_fu_72668_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7443_fu_72665_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7443_fu_72665_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_66_fu_53420_p2() {
    out_exp_V_66_fu_53420_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7254_fu_53417_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7254_fu_53417_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_67_fu_55012_p2() {
    out_exp_V_67_fu_55012_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7290_fu_55008_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7290_fu_55008_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_68_fu_56670_p2() {
    out_exp_V_68_fu_56670_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7320_fu_56667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7320_fu_56667_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_69_fu_58339_p2() {
    out_exp_V_69_fu_58339_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7356_fu_58335_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7356_fu_58335_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_70_fu_60033_p2() {
    out_exp_V_70_fu_60033_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7390_fu_60030_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7390_fu_60030_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_71_fu_60541_p2() {
    out_exp_V_71_fu_60541_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7408_fu_60537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7408_fu_60537_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_72_fu_62301_p2() {
    out_exp_V_72_fu_62301_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_7444_fu_62298_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_7444_fu_62298_p1.read()));
}

void particlemaster_ReadCalculations::thread_out_exp_V_fu_7942_p2() {
    out_exp_V_fu_7942_p2 = (!ap_const_lv11_3FF.is_01() || !tmp_3729_fu_7938_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(tmp_3729_fu_7938_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_015_i10039_in_fu_34266_p3() {
    p_015_i10039_in_fu_34266_p3 = (!sel_tmp304_fu_34261_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp304_fu_34261_p2.read()[0].to_bool())? p_46_cast_cast_fu_34174_p3.read(): sel_tmp298_fu_34253_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i11391_in_fu_39765_p3() {
    p_015_i11391_in_fu_39765_p3 = (!sel_tmp423_fu_39760_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp423_fu_39760_p2.read()[0].to_bool())? p_50_cast_cast_fu_39729_p3.read(): sel_tmp422_fu_39753_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i11729_in_phi_fu_5769_p14() {
    if (esl_seteq<1,1,1>(ap_condition_61579.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i58_fu_41361_p2.read())) {
            p_015_i11729_in_phi_fu_5769_p14 = p_52_cast_cast_fu_41407_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i58_fu_41361_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5558_fu_41366_p2.read()))) {
            p_015_i11729_in_phi_fu_5769_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i58_fu_41361_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5558_fu_41366_p2.read()))) {
            p_015_i11729_in_phi_fu_5769_p14 = p_Result_2615_fu_41389_p4.read();
        } else {
            p_015_i11729_in_phi_fu_5769_p14 = p_015_i11729_in_reg_5763.read();
        }
    } else {
        p_015_i11729_in_phi_fu_5769_p14 = p_015_i11729_in_reg_5763.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i13081_in_fu_65552_p3() {
    p_015_i13081_in_fu_65552_p3 = (!sel_tmp439_fu_65547_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp439_fu_65547_p2.read()[0].to_bool())? p_59_cast_cast_fu_65460_p3.read(): sel_tmp438_fu_65539_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i14433_in_fu_71050_p3() {
    p_015_i14433_in_fu_71050_p3 = (!sel_tmp504_fu_71045_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp504_fu_71045_p2.read()[0].to_bool())? p_63_cast_cast_fu_70982_p3.read(): sel_tmp503_fu_71038_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i14771_in_phi_fu_6099_p14() {
    if (esl_seteq<1,1,1>(ap_condition_67446.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i71_fu_72646_p2.read())) {
            p_015_i14771_in_phi_fu_6099_p14 = p_65_cast_cast_fu_72692_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i71_fu_72646_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6840_fu_72651_p2.read()))) {
            p_015_i14771_in_phi_fu_6099_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i71_fu_72646_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6840_fu_72651_p2.read()))) {
            p_015_i14771_in_phi_fu_6099_p14 = p_Result_2635_fu_72674_p4.read();
        } else {
            p_015_i14771_in_phi_fu_6099_p14 = p_015_i14771_in_reg_6093.read();
        }
    } else {
        p_015_i14771_in_phi_fu_6099_p14 = p_015_i14771_in_reg_6093.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i16123_in_fu_55185_p3() {
    p_015_i16123_in_fu_55185_p3 = (!sel_tmp455_fu_55180_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp455_fu_55180_p2.read()[0].to_bool())? p_60_cast_cast_fu_55093_p3.read(): sel_tmp454_fu_55172_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i17475_in_fu_60683_p3() {
    p_015_i17475_in_fu_60683_p3 = (!sel_tmp517_fu_60678_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp517_fu_60678_p2.read()[0].to_bool())? p_64_cast_cast_fu_60615_p3.read(): sel_tmp516_fu_60671_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i17813_in_phi_fu_5992_p14() {
    if (esl_seteq<1,1,1>(ap_condition_65500.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i72_fu_62279_p2.read())) {
            p_015_i17813_in_phi_fu_5992_p14 = p_66_cast_cast_fu_62325_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i72_fu_62279_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6842_fu_62284_p2.read()))) {
            p_015_i17813_in_phi_fu_5992_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i72_fu_62279_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6842_fu_62284_p2.read()))) {
            p_015_i17813_in_phi_fu_5992_p14 = p_Result_2655_fu_62307_p4.read();
        } else {
            p_015_i17813_in_phi_fu_5992_p14 = p_015_i17813_in_reg_5986.read();
        }
    } else {
        p_015_i17813_in_phi_fu_5992_p14 = p_015_i17813_in_reg_5986.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i18_fu_21914_p1() {
    p_015_i18_fu_21914_p1 = p_015_i913_in_reg_80007.read();
}

void particlemaster_ReadCalculations::thread_p_015_i19_fu_11557_p1() {
    p_015_i19_fu_11557_p1 = p_015_i3955_in_reg_75568.read();
}

void particlemaster_ReadCalculations::thread_p_015_i20_fu_23474_p1() {
    p_015_i20_fu_23474_p1 = p_015_i1251_in_reg_5548.read();
}

void particlemaster_ReadCalculations::thread_p_015_i21_fu_25251_p3() {
    p_015_i21_fu_25251_p3 = (!tmp_3590_fu_25246_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_3590_fu_25246_p2.read()[0].to_bool())? tmp_3587_fu_25238_p3.read(): tmp_3586_fu_25234_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i2265_in_fu_27396_p3() {
    p_015_i2265_in_fu_27396_p3 = (!sel_tmp366_fu_27391_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp366_fu_27391_p2.read()[0].to_bool())? p_35_cast_cast_fu_27328_p3.read(): sel_tmp365_fu_27384_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i22_fu_13117_p1() {
    p_015_i22_fu_13117_p1 = p_015_i4293_in_reg_5441.read();
}

void particlemaster_ReadCalculations::thread_p_015_i23_fu_14901_p3() {
    p_015_i23_fu_14901_p3 = (!tmp_3697_fu_14896_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_3697_fu_14896_p2.read()[0].to_bool())? tmp_3696_fu_14888_p3.read(): tmp_3695_fu_14884_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i24_fu_27408_p1() {
    p_015_i24_fu_27408_p1 = p_015_i2265_in_reg_82378.read();
}

void particlemaster_ReadCalculations::thread_p_015_i25_fu_17058_p1() {
    p_015_i25_fu_17058_p1 = p_015_i5307_in_reg_77916.read();
}

void particlemaster_ReadCalculations::thread_p_015_i2603_in_phi_fu_5608_p14() {
    if (esl_seteq<1,1,1>(ap_condition_59264.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i42_fu_28992_p2.read())) {
            p_015_i2603_in_phi_fu_5608_p14 = p_37_cast_cast_fu_29038_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i42_fu_28992_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4165_fu_28997_p2.read()))) {
            p_015_i2603_in_phi_fu_5608_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i42_fu_28992_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4165_fu_28997_p2.read()))) {
            p_015_i2603_in_phi_fu_5608_p14 = p_Result_2553_fu_29020_p4.read();
        } else {
            p_015_i2603_in_phi_fu_5608_p14 = p_015_i2603_in_reg_5602.read();
        }
    } else {
        p_015_i2603_in_phi_fu_5608_p14 = p_015_i2603_in_reg_5602.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i26_fu_30837_p1() {
    p_015_i26_fu_30837_p1 = p_015_i6321_in_reg_83878.read();
}

void particlemaster_ReadCalculations::thread_p_015_i27_fu_44633_p1() {
    p_015_i27_fu_44633_p1 = p_015_i6997_in_reg_89943.read();
}

void particlemaster_ReadCalculations::thread_p_015_i28_fu_34278_p1() {
    p_015_i28_fu_34278_p1 = p_015_i10039_in_reg_85478.read();
}

void particlemaster_ReadCalculations::thread_p_015_i29_fu_46199_p1() {
    p_015_i29_fu_46199_p1 = p_015_i7335_in_reg_5825.read();
}

void particlemaster_ReadCalculations::thread_p_015_i30_fu_47975_p3() {
    p_015_i30_fu_47975_p3 = (!tmp_4982_fu_47970_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_4982_fu_47970_p2.read()[0].to_bool())? tmp_4981_fu_47962_p3.read(): tmp_4980_fu_47958_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i31_fu_35794_p1() {
    p_015_i31_fu_35794_p1 = p_015_i10377_in_reg_5709.read();
}

void particlemaster_ReadCalculations::thread_p_015_i32_fu_37619_p3() {
    p_015_i32_fu_37619_p3 = (!tmp_5089_fu_37614_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_5089_fu_37614_p2.read()[0].to_bool())? tmp_5088_fu_37606_p3.read(): tmp_5087_fu_37602_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i33_fu_50133_p1() {
    p_015_i33_fu_50133_p1 = p_015_i8349_in_reg_92304.read();
}

void particlemaster_ReadCalculations::thread_p_015_i34_fu_39777_p1() {
    p_015_i34_fu_39777_p1 = p_015_i11391_in_reg_87841.read();
}

void particlemaster_ReadCalculations::thread_p_015_i35_fu_65564_p1() {
    p_015_i35_fu_65564_p1 = p_015_i13081_in_reg_98929.read();
}

void particlemaster_ReadCalculations::thread_p_015_i36_fu_55197_p1() {
    p_015_i36_fu_55197_p1 = p_015_i16123_in_reg_94469.read();
}

void particlemaster_ReadCalculations::thread_p_015_i37_fu_67124_p1() {
    p_015_i37_fu_67124_p1 = p_015_i13419_in_reg_6039.read();
}

void particlemaster_ReadCalculations::thread_p_015_i38_fu_68905_p3() {
    p_015_i38_fu_68905_p3 = (!tmp_6268_fu_68900_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_6268_fu_68900_p2.read()[0].to_bool())? tmp_6267_fu_68892_p3.read(): tmp_6266_fu_68888_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i3955_in_fu_11545_p3() {
    p_015_i3955_in_fu_11545_p3 = (!sel_tmp296_fu_11540_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp296_fu_11540_p2.read()[0].to_bool())? p_32_cast_cast_fu_11453_p3.read(): sel_tmp293_fu_11532_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i39_fu_56757_p1() {
    p_015_i39_fu_56757_p1 = p_015_i16461_in_reg_5932.read();
}

void particlemaster_ReadCalculations::thread_p_015_i40_fu_58538_p3() {
    p_015_i40_fu_58538_p3 = (!tmp_6376_fu_58533_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_6376_fu_58533_p2.read()[0].to_bool())? tmp_6375_fu_58525_p3.read(): tmp_6374_fu_58521_p1.read());
}

void particlemaster_ReadCalculations::thread_p_015_i41_fu_71062_p1() {
    p_015_i41_fu_71062_p1 = p_015_i14433_in_reg_101288.read();
}

void particlemaster_ReadCalculations::thread_p_015_i42_fu_60695_p1() {
    p_015_i42_fu_60695_p1 = p_015_i17475_in_reg_96828.read();
}

void particlemaster_ReadCalculations::thread_p_015_i5307_in_fu_17046_p3() {
    p_015_i5307_in_fu_17046_p3 = (!sel_tmp388_fu_17041_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp388_fu_17041_p2.read()[0].to_bool())? p_36_cast_cast_fu_16978_p3.read(): sel_tmp387_fu_17034_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i5645_in_phi_fu_5501_p14() {
    if (esl_seteq<1,1,1>(ap_condition_57321.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i43_fu_18642_p2.read())) {
            p_015_i5645_in_phi_fu_5501_p14 = p_38_cast_cast_fu_18688_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i43_fu_18642_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4166_fu_18647_p2.read()))) {
            p_015_i5645_in_phi_fu_5501_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i43_fu_18642_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4166_fu_18647_p2.read()))) {
            p_015_i5645_in_phi_fu_5501_p14 = p_Result_2573_fu_18670_p4.read();
        } else {
            p_015_i5645_in_phi_fu_5501_p14 = p_015_i5645_in_reg_5495.read();
        }
    } else {
        p_015_i5645_in_phi_fu_5501_p14 = p_015_i5645_in_reg_5495.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i6321_in_fu_30829_p3() {
    p_015_i6321_in_fu_30829_p3 = (!sel_tmp190_fu_30824_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp190_fu_30824_p2.read()[0].to_bool())? p_41_cast_cast_fu_30737_p3.read(): sel_tmp184_fu_30816_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i6997_in_fu_44621_p3() {
    p_015_i6997_in_fu_44621_p3 = (!sel_tmp266_fu_44616_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp266_fu_44616_p2.read()[0].to_bool())? p_45_cast_cast_fu_44529_p3.read(): sel_tmp260_fu_44608_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i8349_in_fu_50121_p3() {
    p_015_i8349_in_fu_50121_p3 = (!sel_tmp410_fu_50116_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp410_fu_50116_p2.read()[0].to_bool())? p_49_cast_cast_fu_50053_p3.read(): sel_tmp409_fu_50109_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i8687_in_phi_fu_5885_p14() {
    if (esl_seteq<1,1,1>(ap_condition_63522.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, or_cond1048_i57_fu_51717_p2.read())) {
            p_015_i8687_in_phi_fu_5885_p14 = p_51_cast_cast_fu_51763_p3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i57_fu_51717_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5557_fu_51722_p2.read()))) {
            p_015_i8687_in_phi_fu_5885_p14 = ap_const_lv64_0;
        } else if ((esl_seteq<1,1,1>(ap_const_lv1_0, or_cond1048_i57_fu_51717_p2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5557_fu_51722_p2.read()))) {
            p_015_i8687_in_phi_fu_5885_p14 = p_Result_2595_fu_51745_p4.read();
        } else {
            p_015_i8687_in_phi_fu_5885_p14 = p_015_i8687_in_reg_5879.read();
        }
    } else {
        p_015_i8687_in_phi_fu_5885_p14 = p_015_i8687_in_reg_5879.read();
    }
}

void particlemaster_ReadCalculations::thread_p_015_i913_in_fu_21902_p3() {
    p_015_i913_in_fu_21902_p3 = (!sel_tmp267_fu_21897_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp267_fu_21897_p2.read()[0].to_bool())? p_31_cast_cast_fu_21810_p3.read(): sel_tmp265_fu_21889_p3.read());
}

void particlemaster_ReadCalculations::thread_p_015_i_fu_8117_p1() {
    p_015_i_fu_8117_p1 = p_015_i_in_reg_74019.read();
}

void particlemaster_ReadCalculations::thread_p_015_i_in_fu_8109_p3() {
    p_015_i_in_fu_8109_p3 = (!sel_tmp239_fu_8104_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp239_fu_8104_p2.read()[0].to_bool())? p_cast_cast_fu_8017_p3.read(): sel_tmp234_fu_8096_p3.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i30_fu_20094_p3() {
    p_0415_0_i30_fu_20094_p3 = (!tmp_3923_fu_20055_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_3923_fu_20055_p3.read()[0].to_bool())? r_exp_V_258_reg_79106.read(): r_exp_V_126_fu_20081_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i31_fu_9737_p3() {
    p_0415_0_i31_fu_9737_p3 = (!tmp_4107_fu_9698_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_4107_fu_9698_p3.read()[0].to_bool())? r_exp_V_265_reg_74667.read(): r_exp_V_128_fu_9724_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i32_fu_21672_p3() {
    p_0415_0_i32_fu_21672_p3 = (!tmp_4327_reg_79939.read()[0].is_01())? sc_lv<13>(): ((tmp_4327_reg_79939.read()[0].to_bool())? r_exp_V_259_reg_79789.read(): r_exp_V_131_reg_79945.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i33_fu_11315_p3() {
    p_0415_0_i33_fu_11315_p3 = (!tmp_4528_reg_75500.read()[0].is_01())? sc_lv<13>(): ((tmp_4528_reg_75500.read()[0].to_bool())? r_exp_V_266_reg_75350.read(): r_exp_V_135_reg_75506.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i34_fu_23343_p3() {
    p_0415_0_i34_fu_23343_p3 = (!tmp_4730_fu_23304_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_4730_fu_23304_p3.read()[0].to_bool())? r_exp_V_260_reg_80510.read(): r_exp_V_139_fu_23330_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i35_fu_12986_p3() {
    p_0415_0_i35_fu_12986_p3 = (!tmp_4918_fu_12947_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_4918_fu_12947_p3.read()[0].to_bool())? r_exp_V_267_reg_76071.read(): r_exp_V_143_fu_12973_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i36_fu_24994_p3() {
    p_0415_0_i36_fu_24994_p3 = (!tmp_5144_reg_81419.read()[0].is_01())? sc_lv<13>(): ((tmp_5144_reg_81419.read()[0].to_bool())? r_exp_V_261_reg_81246.read(): r_exp_V_147_reg_81425.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i37_fu_14641_p3() {
    p_0415_0_i37_fu_14641_p3 = (!tmp_5379_reg_76986.read()[0].is_01())? sc_lv<13>(): ((tmp_5379_reg_76986.read()[0].to_bool())? r_exp_V_268_reg_76804.read(): r_exp_V_151_reg_76992.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i38_fu_26702_p3() {
    p_0415_0_i38_fu_26702_p3 = (!tmp_5575_fu_26663_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_5575_fu_26663_p3.read()[0].to_bool())? r_exp_V_262_reg_82001.read(): r_exp_V_155_fu_26689_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i39_fu_16352_p3() {
    p_0415_0_i39_fu_16352_p3 = (!tmp_5731_fu_16313_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_5731_fu_16313_p3.read()[0].to_bool())? r_exp_V_269_reg_77539.read(): r_exp_V_158_fu_16339_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i40_fu_27198_p3() {
    p_0415_0_i40_fu_27198_p3 = (!tmp_5834_reg_82330.read()[0].is_01())? sc_lv<13>(): ((tmp_5834_reg_82330.read()[0].to_bool())? r_exp_V_263_reg_82193.read(): r_exp_V_160_reg_82336.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i41_fu_16848_p3() {
    p_0415_0_i41_fu_16848_p3 = (!tmp_5941_reg_77868.read()[0].is_01())? sc_lv<13>(): ((tmp_5941_reg_77868.read()[0].to_bool())? r_exp_V_270_reg_77731.read(): r_exp_V_163_reg_77874.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i42_fu_28970_p3() {
    p_0415_0_i42_fu_28970_p3 = (!tmp_6226_fu_28931_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_6226_fu_28931_p3.read()[0].to_bool())? r_exp_V_264_reg_82946.read(): r_exp_V_167_fu_28957_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i43_fu_18620_p3() {
    p_0415_0_i43_fu_18620_p3 = (!tmp_6414_fu_18581_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_6414_fu_18581_p3.read()[0].to_bool())? r_exp_V_271_reg_78484.read(): r_exp_V_171_fu_18607_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i44_fu_30606_p3() {
    p_0415_0_i44_fu_30606_p3 = (!tmp_6644_reg_83820.read()[0].is_01())? sc_lv<13>(): ((tmp_6644_reg_83820.read()[0].to_bool())? r_exp_V_272_reg_83670.read(): r_exp_V_2_reg_83826.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i45_fu_42813_p3() {
    p_0415_0_i45_fu_42813_p3 = (!tmp_6917_fu_42774_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_6917_fu_42774_p3.read()[0].to_bool())? r_exp_V_273_reg_89042.read(): r_exp_V_183_fu_42800_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i46_fu_32458_p3() {
    p_0415_0_i46_fu_32458_p3 = (!tmp_7023_fu_32419_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7023_fu_32419_p3.read()[0].to_bool())? r_exp_V_280_reg_84577.read(): r_exp_V_187_fu_32445_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i47_fu_44391_p3() {
    p_0415_0_i47_fu_44391_p3 = (!tmp_7043_reg_89875.read()[0].is_01())? sc_lv<13>(): ((tmp_7043_reg_89875.read()[0].to_bool())? r_exp_V_274_reg_89725.read(): r_exp_V_190_reg_89881.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i48_fu_34036_p3() {
    p_0415_0_i48_fu_34036_p3 = (!tmp_7061_reg_85410.read()[0].is_01())? sc_lv<13>(): ((tmp_7061_reg_85410.read()[0].to_bool())? r_exp_V_281_reg_85260.read(): r_exp_V_192_reg_85416.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i49_fu_46062_p3() {
    p_0415_0_i49_fu_46062_p3 = (!tmp_7076_fu_46023_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7076_fu_46023_p3.read()[0].to_bool())? r_exp_V_275_reg_90446.read(): r_exp_V_194_fu_46049_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i50_fu_35707_p3() {
    p_0415_0_i50_fu_35707_p3 = (!tmp_7089_fu_35668_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7089_fu_35668_p3.read()[0].to_bool())? r_exp_V_282_reg_85978.read(): r_exp_V_196_fu_35694_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i51_fu_47734_p3() {
    p_0415_0_i51_fu_47734_p3 = (!tmp_7109_reg_91364.read()[0].is_01())? sc_lv<13>(): ((tmp_7109_reg_91364.read()[0].to_bool())? r_exp_V_276_reg_91185.read(): r_exp_V_198_reg_91370.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i52_fu_37377_p3() {
    p_0415_0_i52_fu_37377_p3 = (!tmp_7127_reg_86894.read()[0].is_01())? sc_lv<13>(): ((tmp_7127_reg_86894.read()[0].to_bool())? r_exp_V_283_reg_86711.read(): r_exp_V_200_reg_86900.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i53_fu_49427_p3() {
    p_0415_0_i53_fu_49427_p3 = (!tmp_7144_fu_49388_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7144_fu_49388_p3.read()[0].to_bool())? r_exp_V_277_reg_91927.read(): r_exp_V_202_fu_49414_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i54_fu_39071_p3() {
    p_0415_0_i54_fu_39071_p3 = (!tmp_7159_fu_39032_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7159_fu_39032_p3.read()[0].to_bool())? r_exp_V_284_reg_87464.read(): r_exp_V_204_fu_39058_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i55_fu_49923_p3() {
    p_0415_0_i55_fu_49923_p3 = (!tmp_7169_reg_92256.read()[0].is_01())? sc_lv<13>(): ((tmp_7169_reg_92256.read()[0].to_bool())? r_exp_V_278_reg_92119.read(): r_exp_V_206_reg_92262.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i56_fu_39567_p3() {
    p_0415_0_i56_fu_39567_p3 = (!tmp_7179_reg_87799.read()[0].is_01())? sc_lv<13>(): ((tmp_7179_reg_87799.read()[0].to_bool())? r_exp_V_285_reg_87656.read(): r_exp_V_208_reg_87805.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i57_fu_51695_p3() {
    p_0415_0_i57_fu_51695_p3 = (!tmp_7198_fu_51656_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7198_fu_51656_p3.read()[0].to_bool())? r_exp_V_279_reg_92872.read(): r_exp_V_210_fu_51682_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i58_fu_41339_p3() {
    p_0415_0_i58_fu_41339_p3 = (!tmp_7213_fu_41300_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7213_fu_41300_p3.read()[0].to_bool())? r_exp_V_286_reg_88409.read(): r_exp_V_212_fu_41326_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i59_fu_63744_p3() {
    p_0415_0_i59_fu_63744_p3 = (!tmp_7234_fu_63705_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7234_fu_63705_p3.read()[0].to_bool())? r_exp_V_287_reg_98028.read(): r_exp_V_218_fu_63731_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i60_fu_53376_p3() {
    p_0415_0_i60_fu_53376_p3 = (!tmp_7249_fu_53337_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7249_fu_53337_p3.read()[0].to_bool())? r_exp_V_294_reg_93573.read(): r_exp_V_220_fu_53363_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i61_fu_65322_p3() {
    p_0415_0_i61_fu_65322_p3 = (!tmp_7269_reg_98861.read()[0].is_01())? sc_lv<13>(): ((tmp_7269_reg_98861.read()[0].to_bool())? r_exp_V_288_reg_98711.read(): r_exp_V_222_reg_98867.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i62_fu_54956_p3() {
    p_0415_0_i62_fu_54956_p3 = (!tmp_7287_reg_94406.read()[0].is_01())? sc_lv<13>(): ((tmp_7287_reg_94406.read()[0].to_bool())? r_exp_V_295_reg_94256.read(): r_exp_V_229_reg_94412.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i63_fu_66993_p3() {
    p_0415_0_i63_fu_66993_p3 = (!tmp_7302_fu_66954_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7302_fu_66954_p3.read()[0].to_bool())? r_exp_V_289_reg_99432.read(): r_exp_V_236_fu_66980_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i64_fu_56626_p3() {
    p_0415_0_i64_fu_56626_p3 = (!tmp_7315_fu_56587_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7315_fu_56587_p3.read()[0].to_bool())? r_exp_V_296_reg_94972.read(): r_exp_V_238_fu_56613_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i65_fu_68645_p3() {
    p_0415_0_i65_fu_68645_p3 = (!tmp_7335_reg_100344.read()[0].is_01())? sc_lv<13>(): ((tmp_7335_reg_100344.read()[0].to_bool())? r_exp_V_290_reg_100166.read(): r_exp_V_240_reg_100350.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i66_fu_58278_p3() {
    p_0415_0_i66_fu_58278_p3 = (!tmp_7353_reg_95884.read()[0].is_01())? sc_lv<13>(): ((tmp_7353_reg_95884.read()[0].to_bool())? r_exp_V_297_reg_95706.read(): r_exp_V_242_reg_95890.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i67_fu_70356_p3() {
    p_0415_0_i67_fu_70356_p3 = (!tmp_7370_fu_70317_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7370_fu_70317_p3.read()[0].to_bool())? r_exp_V_291_reg_100911.read(): r_exp_V_244_fu_70343_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i68_fu_59989_p3() {
    p_0415_0_i68_fu_59989_p3 = (!tmp_7385_fu_59950_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7385_fu_59950_p3.read()[0].to_bool())? r_exp_V_298_reg_96451.read(): r_exp_V_246_fu_59976_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i69_fu_70852_p3() {
    p_0415_0_i69_fu_70852_p3 = (!tmp_7395_reg_101240.read()[0].is_01())? sc_lv<13>(): ((tmp_7395_reg_101240.read()[0].to_bool())? r_exp_V_292_reg_101103.read(): r_exp_V_248_reg_101246.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i70_fu_60485_p3() {
    p_0415_0_i70_fu_60485_p3 = (!tmp_7405_reg_96780.read()[0].is_01())? sc_lv<13>(): ((tmp_7405_reg_96780.read()[0].to_bool())? r_exp_V_299_reg_96643.read(): r_exp_V_250_reg_96786.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i71_fu_72624_p3() {
    p_0415_0_i71_fu_72624_p3 = (!tmp_7424_fu_72585_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7424_fu_72585_p3.read()[0].to_bool())? r_exp_V_293_reg_101856.read(): r_exp_V_252_fu_72611_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i72_fu_62257_p3() {
    p_0415_0_i72_fu_62257_p3 = (!tmp_7439_fu_62218_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_7439_fu_62218_p3.read()[0].to_bool())? r_exp_V_300_reg_97396.read(): r_exp_V_254_fu_62244_p2.read());
}

void particlemaster_ReadCalculations::thread_p_0415_0_i_fu_7886_p3() {
    p_0415_0_i_fu_7886_p3 = (!tmp_3714_reg_73961.read()[0].is_01())? sc_lv<13>(): ((tmp_3714_reg_73961.read()[0].to_bool())? r_exp_V_257_reg_73811.read(): r_exp_V_reg_73967.read());
}

void particlemaster_ReadCalculations::thread_p_0_i_to_int_fu_51796_p1() {
    p_0_i_to_int_fu_51796_p1 = p_0_i_reg_88577.read();
}

void particlemaster_ReadCalculations::thread_p_0_in_i2_phi_fu_5792_p4() {
    if ((esl_seteq<1,1,1>(particlemaster_negFo_read_fu_732_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1921.read()))) {
        p_0_in_i2_phi_fu_5792_p4 = tmp_5569_reg_88572.read();
    } else {
        p_0_in_i2_phi_fu_5792_p4 = p_0_in_i2_reg_5789.read();
    }
}

void particlemaster_ReadCalculations::thread_p_1047_i30_fu_19759_p3() {
    p_1047_i30_fu_19759_p3 = (!tmp_2983_reg_79096.read()[0].is_01())? sc_lv<13>(): ((tmp_2983_reg_79096.read()[0].to_bool())? tmp_2982_reg_79089.read(): ret_V_30_fu_19754_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i31_fu_9402_p3() {
    p_1047_i31_fu_9402_p3 = (!tmp_3064_reg_74657.read()[0].is_01())? sc_lv<13>(): ((tmp_3064_reg_74657.read()[0].to_bool())? tmp_3063_reg_74650.read(): ret_V_31_fu_9397_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i32_fu_21301_p3() {
    p_1047_i32_fu_21301_p3 = (!tmp_3163_reg_79778.read()[0].is_01())? sc_lv<13>(): ((tmp_3163_reg_79778.read()[0].to_bool())? tmp_3162_reg_79771.read(): ret_V_32_fu_21296_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i33_fu_10944_p3() {
    p_1047_i33_fu_10944_p3 = (!tmp_3274_reg_75339.read()[0].is_01())? sc_lv<13>(): ((tmp_3274_reg_75339.read()[0].to_bool())? tmp_3273_reg_75332.read(): ret_V_33_fu_10939_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i34_fu_23008_p3() {
    p_1047_i34_fu_23008_p3 = (!tmp_3376_reg_80500.read()[0].is_01())? sc_lv<13>(): ((tmp_3376_reg_80500.read()[0].to_bool())? tmp_3375_reg_80493.read(): ret_V_34_fu_23003_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i35_fu_12651_p3() {
    p_1047_i35_fu_12651_p3 = (!tmp_3459_reg_76061.read()[0].is_01())? sc_lv<13>(): ((tmp_3459_reg_76061.read()[0].to_bool())? tmp_3458_reg_76054.read(): ret_V_35_fu_12646_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i36_fu_24588_p3() {
    p_1047_i36_fu_24588_p3 = (!tmp_3560_reg_81235.read()[0].is_01())? sc_lv<13>(): ((tmp_3560_reg_81235.read()[0].to_bool())? tmp_3559_reg_81228.read(): ret_V_36_fu_24583_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i37_fu_14238_p3() {
    p_1047_i37_fu_14238_p3 = (!tmp_3669_reg_76793.read()[0].is_01())? sc_lv<13>(): ((tmp_3669_reg_76793.read()[0].to_bool())? tmp_3668_reg_76786.read(): ret_V_37_fu_14233_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i38_fu_26367_p3() {
    p_1047_i38_fu_26367_p3 = (!tmp_3772_reg_81991.read()[0].is_01())? sc_lv<13>(): ((tmp_3772_reg_81991.read()[0].to_bool())? tmp_3771_reg_81984.read(): ret_V_38_fu_26362_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i39_fu_16017_p3() {
    p_1047_i39_fu_16017_p3 = (!tmp_3859_reg_77529.read()[0].is_01())? sc_lv<13>(): ((tmp_3859_reg_77529.read()[0].to_bool())? tmp_3858_reg_77522.read(): ret_V_39_fu_16012_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i40_fu_26878_p3() {
    p_1047_i40_fu_26878_p3 = (!tmp_3891_reg_82182.read()[0].is_01())? sc_lv<13>(): ((tmp_3891_reg_82182.read()[0].to_bool())? tmp_3890_reg_82175.read(): ret_V_40_fu_26873_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i41_fu_16528_p3() {
    p_1047_i41_fu_16528_p3 = (!tmp_3939_reg_77720.read()[0].is_01())? sc_lv<13>(): ((tmp_3939_reg_77720.read()[0].to_bool())? tmp_3938_reg_77713.read(): ret_V_41_fu_16523_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i42_fu_28635_p3() {
    p_1047_i42_fu_28635_p3 = (!tmp_4053_reg_82936.read()[0].is_01())? sc_lv<13>(): ((tmp_4053_reg_82936.read()[0].to_bool())? tmp_4052_reg_82929.read(): ret_V_42_fu_28630_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i43_fu_18285_p3() {
    p_1047_i43_fu_18285_p3 = (!tmp_4140_reg_78474.read()[0].is_01())? sc_lv<13>(): ((tmp_4140_reg_78474.read()[0].to_bool())? tmp_4139_reg_78467.read(): ret_V_43_fu_18280_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i44_fu_30248_p3() {
    p_1047_i44_fu_30248_p3 = (!tmp_4257_reg_83659.read()[0].is_01())? sc_lv<13>(): ((tmp_4257_reg_83659.read()[0].to_bool())? tmp_4256_reg_83652.read(): ret_V_44_fu_30243_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i45_fu_42478_p3() {
    p_1047_i45_fu_42478_p3 = (!tmp_4366_reg_89032.read()[0].is_01())? sc_lv<13>(): ((tmp_4366_reg_89032.read()[0].to_bool())? tmp_4365_reg_89025.read(): ret_V_45_fu_42473_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i46_fu_32123_p3() {
    p_1047_i46_fu_32123_p3 = (!tmp_4454_reg_84567.read()[0].is_01())? sc_lv<13>(): ((tmp_4454_reg_84567.read()[0].to_bool())? tmp_4453_reg_84560.read(): ret_V_46_fu_32118_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i47_fu_44020_p3() {
    p_1047_i47_fu_44020_p3 = (!tmp_4558_reg_89714.read()[0].is_01())? sc_lv<13>(): ((tmp_4558_reg_89714.read()[0].to_bool())? tmp_4557_reg_89707.read(): ret_V_47_fu_44015_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i48_fu_33665_p3() {
    p_1047_i48_fu_33665_p3 = (!tmp_4669_reg_85249.read()[0].is_01())? sc_lv<13>(): ((tmp_4669_reg_85249.read()[0].to_bool())? tmp_4668_reg_85242.read(): ret_V_48_fu_33660_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i49_fu_45727_p3() {
    p_1047_i49_fu_45727_p3 = (!tmp_4770_reg_90436.read()[0].is_01())? sc_lv<13>(): ((tmp_4770_reg_90436.read()[0].to_bool())? tmp_4769_reg_90429.read(): ret_V_49_fu_45722_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i50_fu_35372_p3() {
    p_1047_i50_fu_35372_p3 = (!tmp_4851_reg_85968.read()[0].is_01())? sc_lv<13>(): ((tmp_4851_reg_85968.read()[0].to_bool())? tmp_4850_reg_85961.read(): ret_V_50_fu_35367_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i51_fu_47322_p3() {
    p_1047_i51_fu_47322_p3 = (!tmp_4955_reg_91174.read()[0].is_01())? sc_lv<13>(): ((tmp_4955_reg_91174.read()[0].to_bool())? tmp_4954_reg_91167.read(): ret_V_51_fu_47317_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i52_fu_36953_p3() {
    p_1047_i52_fu_36953_p3 = (!tmp_5061_reg_86700.read()[0].is_01())? sc_lv<13>(): ((tmp_5061_reg_86700.read()[0].to_bool())? tmp_5060_reg_86693.read(): ret_V_52_fu_36948_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i53_fu_49092_p3() {
    p_1047_i53_fu_49092_p3 = (!tmp_5166_reg_91917.read()[0].is_01())? sc_lv<13>(): ((tmp_5166_reg_91917.read()[0].to_bool())? tmp_5165_reg_91910.read(): ret_V_53_fu_49087_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i54_fu_38736_p3() {
    p_1047_i54_fu_38736_p3 = (!tmp_5253_reg_87454.read()[0].is_01())? sc_lv<13>(): ((tmp_5253_reg_87454.read()[0].to_bool())? tmp_5252_reg_87447.read(): ret_V_54_fu_38731_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i55_fu_49603_p3() {
    p_1047_i55_fu_49603_p3 = (!tmp_5283_reg_92108.read()[0].is_01())? sc_lv<13>(): ((tmp_5283_reg_92108.read()[0].to_bool())? tmp_5282_reg_92101.read(): ret_V_55_fu_49598_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i56_fu_39247_p3() {
    p_1047_i56_fu_39247_p3 = (!tmp_5331_reg_87645.read()[0].is_01())? sc_lv<13>(): ((tmp_5331_reg_87645.read()[0].to_bool())? tmp_5330_reg_87638.read(): ret_V_56_fu_39242_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i57_fu_51360_p3() {
    p_1047_i57_fu_51360_p3 = (!tmp_5445_reg_92862.read()[0].is_01())? sc_lv<13>(): ((tmp_5445_reg_92862.read()[0].to_bool())? tmp_5444_reg_92855.read(): ret_V_57_fu_51355_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i58_fu_41004_p3() {
    p_1047_i58_fu_41004_p3 = (!tmp_5532_reg_88399.read()[0].is_01())? sc_lv<13>(): ((tmp_5532_reg_88399.read()[0].to_bool())? tmp_5531_reg_88392.read(): ret_V_58_fu_40999_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i59_fu_63409_p3() {
    p_1047_i59_fu_63409_p3 = (!tmp_5652_reg_98018.read()[0].is_01())? sc_lv<13>(): ((tmp_5652_reg_98018.read()[0].to_bool())? tmp_5651_reg_98011.read(): ret_V_59_fu_63404_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i60_fu_53041_p3() {
    p_1047_i60_fu_53041_p3 = (!tmp_5741_reg_93563.read()[0].is_01())? sc_lv<13>(): ((tmp_5741_reg_93563.read()[0].to_bool())? tmp_5740_reg_93556.read(): ret_V_60_fu_53036_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i61_fu_64951_p3() {
    p_1047_i61_fu_64951_p3 = (!tmp_5847_reg_98700.read()[0].is_01())? sc_lv<13>(): ((tmp_5847_reg_98700.read()[0].to_bool())? tmp_5846_reg_98693.read(): ret_V_61_fu_64946_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i62_fu_54598_p3() {
    p_1047_i62_fu_54598_p3 = (!tmp_5956_reg_94245.read()[0].is_01())? sc_lv<13>(): ((tmp_5956_reg_94245.read()[0].to_bool())? tmp_5955_reg_94238.read(): ret_V_62_fu_54593_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i63_fu_66658_p3() {
    p_1047_i63_fu_66658_p3 = (!tmp_6056_reg_99422.read()[0].is_01())? sc_lv<13>(): ((tmp_6056_reg_99422.read()[0].to_bool())? tmp_6055_reg_99415.read(): ret_V_63_fu_66653_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i64_fu_56291_p3() {
    p_1047_i64_fu_56291_p3 = (!tmp_6134_reg_94962.read()[0].is_01())? sc_lv<13>(): ((tmp_6134_reg_94962.read()[0].to_bool())? tmp_6133_reg_94955.read(): ret_V_64_fu_56286_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i65_fu_68233_p3() {
    p_1047_i65_fu_68233_p3 = (!tmp_6239_reg_100155.read()[0].is_01())? sc_lv<13>(): ((tmp_6239_reg_100155.read()[0].to_bool())? tmp_6238_reg_100148.read(): ret_V_65_fu_68228_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i66_fu_57866_p3() {
    p_1047_i66_fu_57866_p3 = (!tmp_6349_reg_95695.read()[0].is_01())? sc_lv<13>(): ((tmp_6349_reg_95695.read()[0].to_bool())? tmp_6348_reg_95688.read(): ret_V_66_fu_57861_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i67_fu_70021_p3() {
    p_1047_i67_fu_70021_p3 = (!tmp_6454_reg_100901.read()[0].is_01())? sc_lv<13>(): ((tmp_6454_reg_100901.read()[0].to_bool())? tmp_6453_reg_100894.read(): ret_V_67_fu_70016_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i68_fu_59654_p3() {
    p_1047_i68_fu_59654_p3 = (!tmp_6536_reg_96441.read()[0].is_01())? sc_lv<13>(): ((tmp_6536_reg_96441.read()[0].to_bool())? tmp_6535_reg_96434.read(): ret_V_68_fu_59649_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i69_fu_70532_p3() {
    p_1047_i69_fu_70532_p3 = (!tmp_6570_reg_101092.read()[0].is_01())? sc_lv<13>(): ((tmp_6570_reg_101092.read()[0].to_bool())? tmp_6569_reg_101085.read(): ret_V_69_fu_70527_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i70_fu_60165_p3() {
    p_1047_i70_fu_60165_p3 = (!tmp_6615_reg_96632.read()[0].is_01())? sc_lv<13>(): ((tmp_6615_reg_96632.read()[0].to_bool())? tmp_6614_reg_96625.read(): ret_V_70_fu_60160_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i71_fu_72289_p3() {
    p_1047_i71_fu_72289_p3 = (!tmp_6728_reg_101846.read()[0].is_01())? sc_lv<13>(): ((tmp_6728_reg_101846.read()[0].to_bool())? tmp_6727_reg_101839.read(): ret_V_71_fu_72284_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i72_fu_61922_p3() {
    p_1047_i72_fu_61922_p3 = (!tmp_6814_reg_97386.read()[0].is_01())? sc_lv<13>(): ((tmp_6814_reg_97386.read()[0].to_bool())? tmp_6813_reg_97379.read(): ret_V_72_fu_61917_p2.read());
}

void particlemaster_ReadCalculations::thread_p_1047_i_fu_7528_p3() {
    p_1047_i_fu_7528_p3 = (!tmp_2881_reg_73800.read()[0].is_01())? sc_lv<13>(): ((tmp_2881_reg_73800.read()[0].to_bool())? tmp_2880_reg_73793.read(): ret_V_s_fu_7523_p2.read());
}

void particlemaster_ReadCalculations::thread_p_29_cast_cast_fu_20161_p3() {
    p_29_cast_cast_fu_20161_p3 = (!tmp_4120_fu_20154_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_4120_fu_20154_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_30_cast_cast_fu_9804_p3() {
    p_30_cast_cast_fu_9804_p3 = (!tmp_4159_fu_9797_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_4159_fu_9797_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_31_cast_cast_fu_21810_p3() {
    p_31_cast_cast_fu_21810_p3 = (!tmp_4368_fu_21803_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_4368_fu_21803_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_32_cast_cast_fu_11453_p3() {
    p_32_cast_cast_fu_11453_p3 = (!tmp_4569_fu_11446_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_4569_fu_11446_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_33_cast_cast_fu_26769_p3() {
    p_33_cast_cast_fu_26769_p3 = (!tmp_5745_fu_26762_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_5745_fu_26762_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_34_cast_cast_fu_16419_p3() {
    p_34_cast_cast_fu_16419_p3 = (!tmp_5747_fu_16412_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_5747_fu_16412_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_35_cast_cast_fu_27328_p3() {
    p_35_cast_cast_fu_27328_p3 = (!tmp_5875_fu_27321_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_5875_fu_27321_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_36_cast_cast_fu_16978_p3() {
    p_36_cast_cast_fu_16978_p3 = (!tmp_5982_fu_16971_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_5982_fu_16971_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_37_cast_cast_fu_29038_p3() {
    p_37_cast_cast_fu_29038_p3 = (!tmp_6436_fu_29031_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_6436_fu_29031_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_38_cast_cast_fu_18688_p3() {
    p_38_cast_cast_fu_18688_p3 = (!tmp_6439_fu_18681_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_6439_fu_18681_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_41_cast_cast_fu_30737_p3() {
    p_41_cast_cast_fu_30737_p3 = (!tmp_6685_fu_30730_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_6685_fu_30730_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_43_cast_cast_fu_42880_p3() {
    p_43_cast_cast_fu_42880_p3 = (!tmp_7025_fu_42873_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7025_fu_42873_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_44_cast_cast_fu_32525_p3() {
    p_44_cast_cast_fu_32525_p3 = (!tmp_7026_fu_32518_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7026_fu_32518_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_45_cast_cast_fu_44529_p3() {
    p_45_cast_cast_fu_44529_p3 = (!tmp_7045_fu_44522_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7045_fu_44522_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_46_cast_cast_fu_34174_p3() {
    p_46_cast_cast_fu_34174_p3 = (!tmp_7063_fu_34167_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7063_fu_34167_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_47_cast_cast_fu_49494_p3() {
    p_47_cast_cast_fu_49494_p3 = (!tmp_7161_fu_49487_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7161_fu_49487_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_48_cast_cast_fu_39138_p3() {
    p_48_cast_cast_fu_39138_p3 = (!tmp_7162_fu_39131_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7162_fu_39131_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_49_cast_cast_fu_50053_p3() {
    p_49_cast_cast_fu_50053_p3 = (!tmp_7171_fu_50046_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7171_fu_50046_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_50_cast_cast_fu_39729_p3() {
    p_50_cast_cast_fu_39729_p3 = (!tmp_7181_fu_39722_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7181_fu_39722_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_51_cast_cast_fu_51763_p3() {
    p_51_cast_cast_fu_51763_p3 = (!tmp_7215_fu_51756_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7215_fu_51756_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_52_cast_cast_fu_41407_p3() {
    p_52_cast_cast_fu_41407_p3 = (!tmp_7216_fu_41400_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7216_fu_41400_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_57_cast_cast_fu_63811_p3() {
    p_57_cast_cast_fu_63811_p3 = (!tmp_7251_fu_63804_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7251_fu_63804_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_58_cast_cast_fu_53443_p3() {
    p_58_cast_cast_fu_53443_p3 = (!tmp_7252_fu_53436_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7252_fu_53436_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_59_cast_cast_fu_65460_p3() {
    p_59_cast_cast_fu_65460_p3 = (!tmp_7271_fu_65453_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7271_fu_65453_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_60_cast_cast_fu_55093_p3() {
    p_60_cast_cast_fu_55093_p3 = (!tmp_7289_fu_55086_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7289_fu_55086_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_61_cast_cast_fu_70423_p3() {
    p_61_cast_cast_fu_70423_p3 = (!tmp_7387_fu_70416_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7387_fu_70416_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_62_cast_cast_fu_60056_p3() {
    p_62_cast_cast_fu_60056_p3 = (!tmp_7388_fu_60049_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7388_fu_60049_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_63_cast_cast_fu_70982_p3() {
    p_63_cast_cast_fu_70982_p3 = (!tmp_7397_fu_70975_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7397_fu_70975_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_64_cast_cast_fu_60615_p3() {
    p_64_cast_cast_fu_60615_p3 = (!tmp_7407_fu_60608_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7407_fu_60608_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_65_cast_cast_fu_72692_p3() {
    p_65_cast_cast_fu_72692_p3 = (!tmp_7441_fu_72685_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7441_fu_72685_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_66_cast_cast_fu_62325_p3() {
    p_66_cast_cast_fu_62325_p3 = (!tmp_7442_fu_62318_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_7442_fu_62318_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_1302_fu_25126_p3() {
    p_Result_1302_fu_25126_p3 = esl_concat<1,63>(r_sign_6_reg_81449.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_1304_fu_25119_p3() {
    p_Result_1304_fu_25119_p3 = esl_concat<1,63>(r_sign_6_reg_81449.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_1349_fu_14818_p3() {
    p_Result_1349_fu_14818_p3 = esl_concat<1,63>(r_sign_7_reg_76947.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_1351_fu_14811_p3() {
    p_Result_1351_fu_14811_p3 = esl_concat<1,63>(r_sign_7_reg_76947.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_1366_fu_8125_p3() {
    p_Result_1366_fu_8125_p3 = p_Val2_4717_fu_8121_p1.read().range(63, 63);
}

void particlemaster_ReadCalculations::thread_p_Result_1795_fu_47850_p3() {
    p_Result_1795_fu_47850_p3 = esl_concat<1,63>(r_sign_9_reg_91334.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_1797_fu_47843_p3() {
    p_Result_1797_fu_47843_p3 = esl_concat<1,63>(r_sign_9_reg_91334.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_1842_fu_37494_p3() {
    p_Result_1842_fu_37494_p3 = esl_concat<1,63>(r_sign_10_reg_86929.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_1844_fu_37487_p3() {
    p_Result_1844_fu_37487_p3 = esl_concat<1,63>(r_sign_10_reg_86929.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2289_fu_68811_p3() {
    p_Result_2289_fu_68811_p3 = esl_concat<1,63>(r_sign_11_reg_100374.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2293_fu_68804_p3() {
    p_Result_2293_fu_68804_p3 = esl_concat<1,63>(r_sign_11_reg_100374.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2338_fu_58444_p3() {
    p_Result_2338_fu_58444_p3 = esl_concat<1,63>(r_sign_12_reg_95914.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2340_fu_58437_p3() {
    p_Result_2340_fu_58437_p3 = esl_concat<1,63>(r_sign_12_reg_95914.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2532_fu_6459_p4() {
    p_Result_2532_fu_6459_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_62_reg_73304.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2533_fu_7948_p4() {
    p_Result_2533_fu_7948_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_fu_7942_p2.read()), loc_V_63_fu_7931_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2534_fu_18707_p4() {
    p_Result_2534_fu_18707_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_65_reg_74040.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2535_fu_20144_p4() {
    p_Result_2535_fu_20144_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_30_fu_20138_p2.read()), loc_V_66_fu_20126_p4.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2536_fu_20227_p4() {
    p_Result_2536_fu_20227_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_68_reg_79283.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2537_fu_21734_p4() {
    p_Result_2537_fu_21734_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_31_fu_21728_p2.read()), loc_V_69_fu_21717_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2538_fu_21976_p3() {
    p_Result_2538_fu_21976_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2539_fu_21944_p3() {
    p_Result_2539_fu_21944_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2540_fu_21964_p3() {
    p_Result_2540_fu_21964_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2541_fu_21983_p4() {
    p_Result_2541_fu_21983_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_65_reg_74040.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2542_fu_23416_p3() {
    p_Result_2542_fu_23416_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2543_fu_23423_p3() {
    p_Result_2543_fu_23423_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2544_fu_23402_p3() {
    p_Result_2544_fu_23402_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2545_fu_23393_p4() {
    p_Result_2545_fu_23393_p4 = esl_concat<12,52>(esl_concat<1,11>(r_sign_reg_74136.read(), out_exp_V_32_fu_23387_p2.read()), loc_V_70_fu_23375_p4.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2546_fu_25112_p3() {
    p_Result_2546_fu_25112_p3 = esl_concat<1,63>(r_sign_6_reg_81449.read(), ap_const_lv63_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2547_fu_23493_p4() {
    p_Result_2547_fu_23493_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_72_reg_80700.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2548_fu_25061_p4() {
    p_Result_2548_fu_25061_p4 = esl_concat<12,52>(esl_concat<1,11>(r_sign_6_fu_24988_p2.read(), out_exp_V_33_fu_25055_p2.read()), loc_V_73_fu_25044_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2549_fu_25316_p4() {
    p_Result_2549_fu_25316_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_65_reg_74040.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2550_fu_26752_p4() {
    p_Result_2550_fu_26752_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_34_fu_26746_p2.read()), loc_V_74_fu_26734_p4.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2551_fu_27260_p4() {
    p_Result_2551_fu_27260_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_35_fu_27254_p2.read()), loc_V_75_fu_27243_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2552_fu_27590_p4() {
    p_Result_2552_fu_27590_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_77_reg_82412.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2553_fu_29020_p4() {
    p_Result_2553_fu_29020_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_36_fu_29014_p2.read()), loc_V_78_fu_29002_p4.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2554_fu_8350_p4() {
    p_Result_2554_fu_8350_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_65_reg_74040.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2555_fu_9787_p4() {
    p_Result_2555_fu_9787_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_37_fu_9781_p2.read()), loc_V_79_fu_9769_p4.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2556_fu_9870_p4() {
    p_Result_2556_fu_9870_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, loc_V_81_reg_74844.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Result_2557_fu_11377_p4() {
    p_Result_2557_fu_11377_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_38_fu_11371_p2.read()), loc_V_82_fu_11360_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Result_2558_fu_11619_p3() {
    p_Result_2558_fu_11619_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2559_fu_11587_p3() {
    p_Result_2559_fu_11587_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_Result_2560_fu_11607_p3() {
    p_Result_2560_fu_11607_p3 = esl_concat<1,63>(r_sign_reg_74136.read(), ap_const_lv63_0);
}

}

