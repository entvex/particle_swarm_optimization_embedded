#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_tmp_5937_fu_54270_p3() {
    tmp_5937_fu_54270_p3 = esl_concat<83,26>(p_Val2_4186_reg_94106.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5938_fu_54247_p1() {
    tmp_5938_fu_54247_p1 = esl_zext<32,6>(p_Val2_7220_reg_94050.read());
}

void particlemaster_ReadCalculations::thread_tmp_5943_fu_16853_p4() {
    tmp_5943_fu_16853_p4 = p_0415_0_i41_fu_16848_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_5944_fu_54403_p3() {
    tmp_5944_fu_54403_p3 = esl_concat<72,45>(tmp_5939_reg_94141.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5946_fu_54433_p3() {
    tmp_5946_fu_54433_p3 = esl_concat<90,30>(p_Val2_4139_reg_94172.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5947_cast_fu_20891_p1() {
    tmp_5947_cast_fu_20891_p1 = esl_zext<12,11>(loc_V_67_reg_79276.read());
}

void particlemaster_ReadCalculations::thread_tmp_5947_fu_54444_p1() {
    tmp_5947_fu_54444_p1 = esl_zext<122,121>(p_Val2_7642_cast_fu_54400_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5948_fu_54461_p1() {
    tmp_5948_fu_54461_p1 = esl_zext<123,122>(p_Val2_4192_reg_94193.read());
}

void particlemaster_ReadCalculations::thread_tmp_5949_fu_54464_p1() {
    tmp_5949_fu_54464_p1 = esl_zext<123,121>(p_Val2_4191_fu_54458_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5950_fu_54468_p1() {
    tmp_5950_fu_54468_p1 = esl_sext<120,73>(tmp_5945_reg_94187.read());
}

void particlemaster_ReadCalculations::thread_tmp_5953_fu_54537_p3() {
    tmp_5953_fu_54537_p3 = esl_concat<77,52>(tmp_5952_reg_94213.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5954_fu_54547_p3() {
    tmp_5954_fu_54547_p3 = esl_concat<1,18>(tmp_7283_reg_94228.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5956_fu_54570_p2() {
    tmp_5956_fu_54570_p2 = (!tmp_7285_fu_54567_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7285_fu_54567_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5957_cast_fu_10534_p1() {
    tmp_5957_cast_fu_10534_p1 = esl_zext<12,11>(loc_V_80_reg_74837.read());
}

void particlemaster_ReadCalculations::thread_tmp_5957_fu_54630_p1() {
    tmp_5957_fu_54630_p1 = esl_sext<72,71>(p_Val2_6630_reg_94218.read());
}

void particlemaster_ReadCalculations::thread_tmp_5958_fu_54633_p1() {
    tmp_5958_fu_54633_p1 = esl_sext<72,71>(p_Val2_4200_reg_94268.read());
}

void particlemaster_ReadCalculations::thread_tmp_5959_fu_54788_p1() {
    tmp_5959_fu_54788_p1 = esl_zext<32,8>(m_diff_hi_V_62_reg_94273.read());
}

void particlemaster_ReadCalculations::thread_tmp_5960_fu_54686_p1() {
    tmp_5960_fu_54686_p1 = esl_zext<32,8>(Z4_ind_V_62_fu_54676_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5961_fu_54696_p1() {
    tmp_5961_fu_54696_p1 = esl_zext<36,35>(p_Val2_6632_reg_94290.read());
}

void particlemaster_ReadCalculations::thread_tmp_5962_fu_54699_p1() {
    tmp_5962_fu_54699_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5963_fu_54691_p1() {
    tmp_5963_fu_54691_p1 = esl_zext<32,8>(p_Val2_6634_fu_54662_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5964_fu_54709_p4() {
    tmp_5964_fu_54709_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6634_reg_94285.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5966_fu_54745_p1() {
    tmp_5966_fu_54745_p1 = esl_zext<44,43>(tmp_5964_reg_94311.read());
}

void particlemaster_ReadCalculations::thread_tmp_5967_fu_54741_p1() {
    tmp_5967_fu_54741_p1 = esl_zext<32,8>(p_Val2_6637_reg_94278.read());
}

void particlemaster_ReadCalculations::thread_tmp_5969_fu_54766_p4() {
    tmp_5969_fu_54766_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6637_reg_94278.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5971_fu_54802_p5() {
    tmp_5971_fu_54802_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6637_reg_94278.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5974_fu_54858_p1() {
    tmp_5974_fu_54858_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5975_fu_54890_p3() {
    tmp_5975_fu_54890_p3 = esl_concat<59,49>(p_Val2_4210_reg_94377.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5976_fu_54580_p2() {
    tmp_5976_fu_54580_p2 = (!tmp_11496_cast_fu_54576_p1.read().is_01() || !p_Val2_4194_fu_54530_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_11496_cast_fu_54576_p1.read() != p_Val2_4194_fu_54530_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5977_fu_54977_p2() {
    tmp_5977_fu_54977_p2 = (!p_0415_0_i62_fu_54956_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i62_fu_54956_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5978_fu_54983_p4() {
    tmp_5978_fu_54983_p4 = p_Val2_4212_reg_94400.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_5979_fu_54992_p4() {
    tmp_5979_fu_54992_p4 = p_Val2_4212_reg_94400.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5980_fu_55152_p2() {
    tmp_5980_fu_55152_p2 = (sel_tmp453_fu_55147_p2.read() | sel_tmp450_fu_55127_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5981_cast_fu_20336_p1() {
    tmp_5981_cast_fu_20336_p1 = esl_zext<77,75>(tmp_3106_fu_20328_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5981_fu_55166_p2() {
    tmp_5981_fu_55166_p2 = (tmp_5980_fu_55152_p2.read() | sel_tmp447_fu_55117_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5982_fu_16971_p3() {
    tmp_5982_fu_16971_p3 = p_Val2_2599_reg_76719.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_5987_fu_65568_p3() {
    tmp_5987_fu_65568_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5987_not_fu_8299_p2() {
    tmp_5987_not_fu_8299_p2 = (!tmp_2915_fu_8292_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2915_fu_8292_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5988_fu_65575_p2() {
    tmp_5988_fu_65575_p2 = (!tmp_5987_fu_65568_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5987_fu_65568_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5989_fu_55201_p3() {
    tmp_5989_fu_55201_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5989_not_fu_8241_p2() {
    tmp_5989_not_fu_8241_p2 = (!tmp_2916_fu_8234_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2916_fu_8234_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5990_cast_fu_20419_p1() {
    tmp_5990_cast_fu_20419_p1 = esl_zext<82,81>(tmp_3112_fu_20412_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5990_fu_55208_p2() {
    tmp_5990_fu_55208_p2 = (!tmp_5989_fu_55201_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5989_fu_55201_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5991_fu_65581_p3() {
    tmp_5991_fu_65581_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5992_fu_65588_p2() {
    tmp_5992_fu_65588_p2 = (!tmp_5991_fu_65581_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5991_fu_65581_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5993_fu_55214_p3() {
    tmp_5993_fu_55214_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5994_cast_fu_20455_p1() {
    tmp_5994_cast_fu_20455_p1 = esl_zext<83,80>(tmp_3115_fu_20448_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5994_fu_55221_p2() {
    tmp_5994_fu_55221_p2 = (!tmp_5993_fu_55214_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5993_fu_55214_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5995_fu_65601_p3() {
    tmp_5995_fu_65601_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5996_fu_65608_p2() {
    tmp_5996_fu_65608_p2 = (!tmp_5995_fu_65601_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5995_fu_65601_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5997_fu_55234_p3() {
    tmp_5997_fu_55234_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5998_fu_55241_p2() {
    tmp_5998_fu_55241_p2 = (!tmp_5997_fu_55234_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5997_fu_55234_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5999_cast_fu_20504_p1() {
    tmp_5999_cast_fu_20504_p1 = esl_zext<102,101>(tmp_3117_fu_20497_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5999_fu_65621_p1() {
    tmp_5999_fu_65621_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6000_fu_65714_p4() {
    tmp_6000_fu_65714_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7292_reg_99007.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6001_fu_65723_p1() {
    tmp_6001_fu_65723_p1 = esl_zext<76,75>(sf55_fu_65705_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6002_fu_65735_p3() {
    tmp_6002_fu_65735_p3 = esl_concat<50,25>(tmp_7293_fu_65695_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6003_cast_fu_20541_p1() {
    tmp_6003_cast_fu_20541_p1 = esl_zext<103,95>(tmp_3120_fu_20534_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6003_fu_65747_p1() {
    tmp_6003_fu_65747_p1 = esl_zext<77,76>(p_Val2_4218_fu_65727_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6004_fu_65770_p1() {
    tmp_6004_fu_65770_p1 = esl_zext<78,77>(p_Val2_4220_reg_99020.read());
}

void particlemaster_ReadCalculations::thread_tmp_6005_fu_65773_p1() {
    tmp_6005_fu_65773_p1 = esl_zext<78,75>(p_Val2_4221_reg_99035.read());
}

void particlemaster_ReadCalculations::thread_tmp_6006_fu_66366_p1() {
    tmp_6006_fu_66366_p1 = esl_zext<32,4>(p_Val2_7179_reg_99014.read());
}

void particlemaster_ReadCalculations::thread_tmp_6008_fu_65819_p3() {
    tmp_6008_fu_65819_p3 = esl_concat<67,14>(tmp_6007_reg_99052.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6009_cast_fu_20595_p1() {
    tmp_6009_cast_fu_20595_p1 = esl_zext<121,120>(tmp_3123_fu_20588_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6009_fu_65830_p1() {
    tmp_6009_fu_65830_p1 = esl_zext<82,81>(p_Val2_4228_fu_65812_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6010_fu_16900_p1() {
    tmp_6010_fu_16900_p1 = p_0415_0_i41_fu_16848_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6011_fu_65852_p1() {
    tmp_6011_fu_65852_p1 = esl_zext<83,82>(p_Val2_4229_reg_99057.read());
}

void particlemaster_ReadCalculations::thread_tmp_6012_fu_65855_p3() {
    tmp_6012_fu_65855_p3 = esl_concat<79,1>(p_Val2_4231_reg_99072.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6013_cast_fu_20631_p1() {
    tmp_6013_cast_fu_20631_p1 = esl_zext<122,109>(tmp_3126_fu_20624_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6013_fu_66370_p1() {
    tmp_6013_fu_66370_p1 = esl_zext<32,6>(p_Val2_7180_reg_99046.read());
}

void particlemaster_ReadCalculations::thread_tmp_6014_fu_65904_p3() {
    tmp_6014_fu_65904_p3 = esl_concat<76,25>(tmp_7297_reg_99093.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6015_fu_65915_p1() {
    tmp_6015_fu_65915_p1 = esl_zext<102,96>(p_Val2_4234_fu_65895_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6016_fu_65938_p1() {
    tmp_6016_fu_65938_p1 = esl_zext<103,102>(p_Val2_4235_reg_99098.read());
}

void particlemaster_ReadCalculations::thread_tmp_6017_fu_65941_p3() {
    tmp_6017_fu_65941_p3 = esl_concat<89,6>(p_Val2_4236_reg_99113.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6018_fu_66374_p1() {
    tmp_6018_fu_66374_p1 = esl_zext<32,6>(p_Val2_7181_reg_99087.read());
}

void particlemaster_ReadCalculations::thread_tmp_6019_cast_fu_20685_p1() {
    tmp_6019_cast_fu_20685_p1 = esl_zext<126,125>(tmp_3129_fu_20678_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6020_fu_65995_p3() {
    tmp_6020_fu_65995_p3 = esl_concat<86,34>(tmp_6019_reg_99130.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6021_fu_66006_p1() {
    tmp_6021_fu_66006_p1 = esl_zext<121,110>(p_Val2_4240_fu_65988_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6022_fu_66028_p1() {
    tmp_6022_fu_66028_p1 = esl_zext<122,121>(p_Val2_4241_reg_99135.read());
}

void particlemaster_ReadCalculations::thread_tmp_6023_cast_fu_20721_p1() {
    tmp_6023_cast_fu_20721_p1 = esl_zext<127,109>(tmp_3132_fu_20714_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6023_fu_66031_p3() {
    tmp_6023_fu_66031_p3 = esl_concat<98,11>(p_Val2_4242_reg_99150.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6024_fu_66285_p1() {
    tmp_6024_fu_66285_p1 = esl_zext<32,6>(p_Val2_7182_reg_99124.read());
}

void particlemaster_ReadCalculations::thread_tmp_6026_fu_66085_p3() {
    tmp_6026_fu_66085_p3 = esl_concat<81,44>(tmp_6025_reg_99167.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6027_fu_66096_p1() {
    tmp_6027_fu_66096_p1 = esl_zext<126,110>(p_Val2_4247_fu_66078_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6028_fu_66118_p1() {
    tmp_6028_fu_66118_p1 = esl_zext<127,126>(p_Val2_4249_reg_99172.read());
}

void particlemaster_ReadCalculations::thread_tmp_6029_cast_fu_20775_p1() {
    tmp_6029_cast_fu_20775_p1 = esl_zext<131,130>(tmp_3135_fu_20768_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6029_fu_66121_p3() {
    tmp_6029_fu_66121_p3 = esl_concat<93,16>(p_Val2_4251_reg_99187.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6030_fu_66289_p1() {
    tmp_6030_fu_66289_p1 = esl_zext<32,6>(p_Val2_7183_reg_99161.read());
}

void particlemaster_ReadCalculations::thread_tmp_6032_fu_66175_p3() {
    tmp_6032_fu_66175_p3 = esl_concat<76,54>(tmp_6031_reg_99204.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6033_cast_fu_20811_p1() {
    tmp_6033_cast_fu_20811_p1 = esl_zext<132,109>(tmp_3138_fu_20804_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6033_fu_66186_p1() {
    tmp_6033_fu_66186_p1 = esl_zext<131,110>(p_Val2_4258_fu_66168_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6034_fu_66208_p1() {
    tmp_6034_fu_66208_p1 = esl_zext<132,131>(p_Val2_4259_reg_99209.read());
}

void particlemaster_ReadCalculations::thread_tmp_6035_fu_66211_p3() {
    tmp_6035_fu_66211_p3 = esl_concat<88,21>(p_Val2_4260_reg_99224.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6036_fu_66293_p1() {
    tmp_6036_fu_66293_p1 = esl_zext<32,6>(p_Val2_7184_reg_99198.read());
}

void particlemaster_ReadCalculations::thread_tmp_6037_fu_27557_p3() {
    tmp_6037_fu_27557_p3 = p_Val2_5112_reg_82393.read().range(51, 51);
}

void particlemaster_ReadCalculations::thread_tmp_6039_cast_fu_20865_p1() {
    tmp_6039_cast_fu_20865_p1 = esl_zext<136,135>(tmp_3141_fu_20858_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6039_fu_66304_p3() {
    tmp_6039_fu_66304_p3 = esl_concat<71,64>(tmp_6038_reg_99241.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6040_fu_27630_p1() {
    tmp_6040_fu_27630_p1 = grp_fu_27624_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6041_fu_66315_p1() {
    tmp_6041_fu_66315_p1 = esl_zext<136,110>(p_Val2_4264_fu_66297_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6042_fu_66325_p3() {
    tmp_6042_fu_66325_p3 = esl_concat<83,26>(p_Val2_4266_reg_99266.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6043_cast_fu_20980_p1() {
    tmp_6043_cast_fu_20980_p1 = esl_zext<137,109>(tmp_3144_fu_20973_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6043_fu_66342_p1() {
    tmp_6043_fu_66342_p1 = esl_zext<32,6>(p_Val2_7185_reg_99235.read());
}

void particlemaster_ReadCalculations::thread_tmp_6047_fu_66475_p3() {
    tmp_6047_fu_66475_p3 = esl_concat<72,45>(tmp_6044_reg_99291.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6049_fu_66511_p3() {
    tmp_6049_fu_66511_p3 = esl_concat<90,30>(p_Val2_4213_reg_99352.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6051_cast_fu_21113_p1() {
    tmp_6051_cast_fu_21113_p1 = esl_zext<118,117>(tmp_3149_fu_21106_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6051_fu_27651_p1() {
    tmp_6051_fu_27651_p1 = p_Val2_2788_reg_82512.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6052_cast_fu_21117_p1() {
    tmp_6052_cast_fu_21117_p1 = esl_zext<118,79>(tmp_3148_reg_79715.read());
}

void particlemaster_ReadCalculations::thread_tmp_6053_fu_27654_p3() {
    tmp_6053_fu_27654_p3 = p_Val2_2788_reg_82512.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6054_fu_66609_p3() {
    tmp_6054_fu_66609_p3 = esl_concat<1,18>(tmp_7298_reg_99405.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6056_cast_fu_21143_p1() {
    tmp_6056_cast_fu_21143_p1 = esl_sext<122,120>(tmp_3151_fu_21136_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6056_fu_66632_p2() {
    tmp_6056_fu_66632_p2 = (!tmp_7300_fu_66629_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7300_fu_66629_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6057_fu_66638_p1() {
    tmp_6057_fu_66638_p1 = esl_sext<131,129>(phitmp32_reg_99390.read());
}

void particlemaster_ReadCalculations::thread_tmp_6058_fu_66690_p1() {
    tmp_6058_fu_66690_p1 = esl_sext<72,71>(p_Val2_6662_reg_99395.read());
}

void particlemaster_ReadCalculations::thread_tmp_6059_fu_66693_p1() {
    tmp_6059_fu_66693_p1 = esl_sext<72,71>(p_Val2_4278_reg_99444.read());
}

void particlemaster_ReadCalculations::thread_tmp_6060_fu_66848_p1() {
    tmp_6060_fu_66848_p1 = esl_zext<32,8>(m_diff_hi_V_63_reg_99449.read());
}

void particlemaster_ReadCalculations::thread_tmp_6061_fu_66746_p1() {
    tmp_6061_fu_66746_p1 = esl_zext<32,8>(Z4_ind_V_63_fu_66736_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6062_fu_66756_p1() {
    tmp_6062_fu_66756_p1 = esl_zext<36,35>(p_Val2_6664_reg_99466.read());
}

void particlemaster_ReadCalculations::thread_tmp_6063_fu_66759_p1() {
    tmp_6063_fu_66759_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6064_fu_66751_p1() {
    tmp_6064_fu_66751_p1 = esl_zext<32,8>(p_Val2_6666_fu_66722_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6065_fu_66769_p4() {
    tmp_6065_fu_66769_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6666_reg_99461.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6067_fu_66805_p1() {
    tmp_6067_fu_66805_p1 = esl_zext<44,43>(tmp_6065_reg_99487.read());
}

void particlemaster_ReadCalculations::thread_tmp_6068_fu_66801_p1() {
    tmp_6068_fu_66801_p1 = esl_zext<32,8>(p_Val2_6669_reg_99454.read());
}

void particlemaster_ReadCalculations::thread_tmp_6070_fu_66826_p4() {
    tmp_6070_fu_66826_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6669_reg_99454.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6072_fu_66862_p5() {
    tmp_6072_fu_66862_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6669_reg_99454.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6075_cast_fu_9979_p1() {
    tmp_6075_cast_fu_9979_p1 = esl_zext<77,75>(tmp_3216_fu_9971_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6075_fu_66918_p1() {
    tmp_6075_fu_66918_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6076_fu_66928_p3() {
    tmp_6076_fu_66928_p3 = esl_concat<59,49>(p_Val2_4287_reg_99553.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6077_fu_66962_p4() {
    tmp_6077_fu_66962_p4 = p_Val2_4289_fu_66938_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6078_fu_66972_p3() {
    tmp_6078_fu_66972_p3 = esl_concat<57,1>(tmp_6077_fu_66962_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6079_fu_66641_p2() {
    tmp_6079_fu_66641_p2 = (!tmp_6057_fu_66638_p1.read().is_01() || !p_Val2_4273_reg_99384.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6057_fu_66638_p1.read() != p_Val2_4273_reg_99384.read());
}

void particlemaster_ReadCalculations::thread_tmp_6080_fu_55254_p1() {
    tmp_6080_fu_55254_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6081_fu_55347_p4() {
    tmp_6081_fu_55347_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7305_reg_94547.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6082_fu_55356_p1() {
    tmp_6082_fu_55356_p1 = esl_zext<76,75>(sf56_fu_55338_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6083_fu_55368_p3() {
    tmp_6083_fu_55368_p3 = esl_concat<50,25>(tmp_7306_fu_55328_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6084_cast_fu_10062_p1() {
    tmp_6084_cast_fu_10062_p1 = esl_zext<82,81>(tmp_3224_fu_10055_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6084_fu_55380_p1() {
    tmp_6084_fu_55380_p1 = esl_zext<77,76>(p_Val2_4296_fu_55360_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6085_fu_55403_p1() {
    tmp_6085_fu_55403_p1 = esl_zext<78,77>(p_Val2_4297_reg_94560.read());
}

void particlemaster_ReadCalculations::thread_tmp_6086_fu_55406_p1() {
    tmp_6086_fu_55406_p1 = esl_zext<78,75>(p_Val2_4298_reg_94575.read());
}

void particlemaster_ReadCalculations::thread_tmp_6087_fu_55999_p1() {
    tmp_6087_fu_55999_p1 = esl_zext<32,4>(p_Val2_7221_reg_94554.read());
}

void particlemaster_ReadCalculations::thread_tmp_6088_cast_fu_10098_p1() {
    tmp_6088_cast_fu_10098_p1 = esl_zext<83,80>(tmp_3227_fu_10091_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6089_fu_55452_p3() {
    tmp_6089_fu_55452_p3 = esl_concat<67,14>(tmp_6088_reg_94592.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6090_fu_55463_p1() {
    tmp_6090_fu_55463_p1 = esl_zext<82,81>(p_Val2_4302_fu_55445_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6091_fu_55485_p1() {
    tmp_6091_fu_55485_p1 = esl_zext<83,82>(p_Val2_4303_reg_94597.read());
}

void particlemaster_ReadCalculations::thread_tmp_6092_fu_27828_p1() {
    tmp_6092_fu_27828_p1 = p_Val2_2800_fu_27822_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6093_cast_fu_10147_p1() {
    tmp_6093_cast_fu_10147_p1 = esl_zext<102,101>(tmp_3229_fu_10140_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6093_fu_55488_p3() {
    tmp_6093_fu_55488_p3 = esl_concat<79,1>(p_Val2_4304_reg_94612.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6094_fu_56003_p1() {
    tmp_6094_fu_56003_p1 = esl_zext<32,6>(p_Val2_7222_reg_94586.read());
}

void particlemaster_ReadCalculations::thread_tmp_6095_fu_55537_p3() {
    tmp_6095_fu_55537_p3 = esl_concat<76,25>(tmp_7310_reg_94633.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6096_fu_55548_p1() {
    tmp_6096_fu_55548_p1 = esl_zext<102,96>(p_Val2_4307_fu_55528_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6097_cast_fu_10184_p1() {
    tmp_6097_cast_fu_10184_p1 = esl_zext<103,95>(tmp_3232_fu_10177_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6097_fu_55571_p1() {
    tmp_6097_fu_55571_p1 = esl_zext<103,102>(p_Val2_4308_reg_94638.read());
}

void particlemaster_ReadCalculations::thread_tmp_6098_fu_55574_p3() {
    tmp_6098_fu_55574_p3 = esl_concat<89,6>(p_Val2_4309_reg_94653.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6099_fu_56007_p1() {
    tmp_6099_fu_56007_p1 = esl_zext<32,6>(p_Val2_7223_reg_94627.read());
}

void particlemaster_ReadCalculations::thread_tmp_6101_fu_55628_p3() {
    tmp_6101_fu_55628_p3 = esl_concat<86,34>(tmp_6100_reg_94670.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6102_fu_55639_p1() {
    tmp_6102_fu_55639_p1 = esl_zext<121,110>(p_Val2_4313_fu_55621_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6103_cast_fu_10238_p1() {
    tmp_6103_cast_fu_10238_p1 = esl_zext<121,120>(tmp_3235_fu_10231_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6103_fu_55661_p1() {
    tmp_6103_fu_55661_p1 = esl_zext<122,121>(p_Val2_4314_reg_94675.read());
}

void particlemaster_ReadCalculations::thread_tmp_6104_fu_55664_p3() {
    tmp_6104_fu_55664_p3 = esl_concat<98,11>(p_Val2_4315_reg_94690.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6105_fu_55918_p1() {
    tmp_6105_fu_55918_p1 = esl_zext<32,6>(p_Val2_7224_reg_94664.read());
}

void particlemaster_ReadCalculations::thread_tmp_6107_cast_fu_10274_p1() {
    tmp_6107_cast_fu_10274_p1 = esl_zext<122,109>(tmp_3238_fu_10267_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6107_fu_55718_p3() {
    tmp_6107_fu_55718_p3 = esl_concat<81,44>(tmp_6106_reg_94707.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6108_fu_55729_p1() {
    tmp_6108_fu_55729_p1 = esl_zext<126,110>(p_Val2_4319_fu_55711_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6109_fu_55751_p1() {
    tmp_6109_fu_55751_p1 = esl_zext<127,126>(p_Val2_4320_reg_94712.read());
}

void particlemaster_ReadCalculations::thread_tmp_6110_fu_55754_p3() {
    tmp_6110_fu_55754_p3 = esl_concat<93,16>(p_Val2_4321_reg_94727.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6111_fu_55922_p1() {
    tmp_6111_fu_55922_p1 = esl_zext<32,6>(p_Val2_7225_reg_94701.read());
}

void particlemaster_ReadCalculations::thread_tmp_6113_cast_fu_10328_p1() {
    tmp_6113_cast_fu_10328_p1 = esl_zext<126,125>(tmp_3241_fu_10321_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6113_fu_55808_p3() {
    tmp_6113_fu_55808_p3 = esl_concat<76,54>(tmp_6112_reg_94744.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6114_fu_55819_p1() {
    tmp_6114_fu_55819_p1 = esl_zext<131,110>(p_Val2_4325_fu_55801_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6115_fu_55841_p1() {
    tmp_6115_fu_55841_p1 = esl_zext<132,131>(p_Val2_4326_reg_94749.read());
}

void particlemaster_ReadCalculations::thread_tmp_6116_fu_55844_p3() {
    tmp_6116_fu_55844_p3 = esl_concat<88,21>(p_Val2_4327_reg_94764.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6117_cast_fu_10364_p1() {
    tmp_6117_cast_fu_10364_p1 = esl_zext<127,109>(tmp_3244_fu_10357_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6117_fu_55926_p1() {
    tmp_6117_fu_55926_p1 = esl_zext<32,6>(p_Val2_7226_reg_94738.read());
}

void particlemaster_ReadCalculations::thread_tmp_6119_fu_55937_p3() {
    tmp_6119_fu_55937_p3 = esl_concat<71,64>(tmp_6118_reg_94781.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6120_fu_55948_p1() {
    tmp_6120_fu_55948_p1 = esl_zext<136,110>(p_Val2_4331_fu_55930_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6121_fu_55958_p3() {
    tmp_6121_fu_55958_p3 = esl_concat<83,26>(p_Val2_4333_reg_94806.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6122_fu_55975_p1() {
    tmp_6122_fu_55975_p1 = esl_zext<32,6>(p_Val2_7227_reg_94775.read());
}

void particlemaster_ReadCalculations::thread_tmp_6123_cast_fu_10418_p1() {
    tmp_6123_cast_fu_10418_p1 = esl_zext<131,130>(tmp_3247_fu_10411_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6124_fu_27842_p1() {
    tmp_6124_fu_27842_p1 = p_Val2_2800_fu_27822_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6127_cast_fu_10454_p1() {
    tmp_6127_cast_fu_10454_p1 = esl_zext<132,109>(tmp_3250_fu_10447_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6127_fu_56108_p3() {
    tmp_6127_fu_56108_p3 = esl_concat<72,45>(tmp_6123_reg_94831.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6129_fu_56144_p3() {
    tmp_6129_fu_56144_p3 = esl_concat<90,30>(p_Val2_4292_reg_94892.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6132_fu_56242_p3() {
    tmp_6132_fu_56242_p3 = esl_concat<1,18>(tmp_7311_reg_94945.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6133_cast_fu_10508_p1() {
    tmp_6133_cast_fu_10508_p1 = esl_zext<136,135>(tmp_3253_fu_10501_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6134_fu_56265_p2() {
    tmp_6134_fu_56265_p2 = (!tmp_7313_fu_56262_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7313_fu_56262_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6135_fu_56271_p1() {
    tmp_6135_fu_56271_p1 = esl_sext<131,129>(phitmp34_reg_94930.read());
}

void particlemaster_ReadCalculations::thread_tmp_6136_fu_56323_p1() {
    tmp_6136_fu_56323_p1 = esl_sext<72,71>(p_Val2_6683_reg_94935.read());
}

void particlemaster_ReadCalculations::thread_tmp_6137_cast_fu_10623_p1() {
    tmp_6137_cast_fu_10623_p1 = esl_zext<137,109>(tmp_3256_fu_10616_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6137_fu_56326_p1() {
    tmp_6137_fu_56326_p1 = esl_sext<72,71>(p_Val2_4345_reg_94984.read());
}

void particlemaster_ReadCalculations::thread_tmp_6138_fu_56481_p1() {
    tmp_6138_fu_56481_p1 = esl_zext<32,8>(m_diff_hi_V_64_reg_94989.read());
}

void particlemaster_ReadCalculations::thread_tmp_6139_fu_56379_p1() {
    tmp_6139_fu_56379_p1 = esl_zext<32,8>(Z4_ind_V_64_fu_56369_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6140_fu_56389_p1() {
    tmp_6140_fu_56389_p1 = esl_zext<36,35>(p_Val2_6685_reg_95006.read());
}

void particlemaster_ReadCalculations::thread_tmp_6141_fu_56392_p1() {
    tmp_6141_fu_56392_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6142_fu_56384_p1() {
    tmp_6142_fu_56384_p1 = esl_zext<32,8>(p_Val2_6687_fu_56355_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6143_fu_56402_p4() {
    tmp_6143_fu_56402_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6687_reg_95001.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6144_fu_28482_p1() {
    tmp_6144_fu_28482_p1 = p_Val2_2833_fu_28476_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6145_cast_fu_10756_p1() {
    tmp_6145_cast_fu_10756_p1 = esl_zext<118,117>(tmp_3262_fu_10749_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6145_fu_28486_p1() {
    tmp_6145_fu_28486_p1 = p_Val2_2833_fu_28476_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6146_cast_fu_10760_p1() {
    tmp_6146_cast_fu_10760_p1 = esl_zext<118,79>(tmp_3260_reg_75276.read());
}

void particlemaster_ReadCalculations::thread_tmp_6147_fu_56438_p1() {
    tmp_6147_fu_56438_p1 = esl_zext<44,43>(tmp_6143_reg_95027.read());
}

void particlemaster_ReadCalculations::thread_tmp_6149_fu_56434_p1() {
    tmp_6149_fu_56434_p1 = esl_zext<32,8>(p_Val2_6690_reg_94994.read());
}

void particlemaster_ReadCalculations::thread_tmp_6150_cast_fu_10786_p1() {
    tmp_6150_cast_fu_10786_p1 = esl_sext<122,120>(tmp_3264_fu_10779_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6151_fu_56459_p4() {
    tmp_6151_fu_56459_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6690_reg_94994.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6153_fu_56495_p5() {
    tmp_6153_fu_56495_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6690_reg_94994.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6156_fu_56551_p1() {
    tmp_6156_fu_56551_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6157_fu_56561_p3() {
    tmp_6157_fu_56561_p3 = esl_concat<59,49>(p_Val2_4354_reg_95093.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6158_fu_56595_p4() {
    tmp_6158_fu_56595_p4 = p_Val2_4356_fu_56571_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6159_fu_28623_p3() {
    tmp_6159_fu_28623_p3 = r_V_390_reg_82924.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_6160_fu_56605_p3() {
    tmp_6160_fu_56605_p3 = esl_concat<57,1>(tmp_6158_fu_56595_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6161_fu_28604_p1() {
    tmp_6161_fu_28604_p1 = grp_fu_72851_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6162_fu_56274_p2() {
    tmp_6162_fu_56274_p2 = (!tmp_6135_fu_56271_p1.read().is_01() || !p_Val2_4340_reg_94924.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6135_fu_56271_p1.read() != p_Val2_4340_reg_94924.read());
}

void particlemaster_ReadCalculations::thread_tmp_6163_fu_67020_p2() {
    tmp_6163_fu_67020_p2 = (!p_0415_0_i63_reg_99568.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i63_reg_99568.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6164_fu_56653_p2() {
    tmp_6164_fu_56653_p2 = (!p_0415_0_i64_reg_95108.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i64_reg_95108.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6165_cast_fu_21279_p1() {
    tmp_6165_cast_fu_21279_p1 = esl_sext<130,129>(tmp_3160_fu_21240_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6166_fu_67816_p2() {
    tmp_6166_fu_67816_p2 = (!b_exp_144_fu_67810_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_144_fu_67810_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_6167_fu_67133_p2() {
    tmp_6167_fu_67133_p2 = (!loc_V_129_reg_99622.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_129_reg_99622.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6168_fu_67822_p2() {
    tmp_6168_fu_67822_p2 = (!loc_V_128_reg_99615.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_128_reg_99615.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_6169_fu_67138_p2() {
    tmp_6169_fu_67138_p2 = (!loc_V_129_reg_99622.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_129_reg_99622.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6170_fu_68512_p2() {
    tmp_6170_fu_68512_p2 = (tmp_6168_reg_99947.read() & tmp_6169_reg_99662.read());
}

void particlemaster_ReadCalculations::thread_tmp_6171_fu_67827_p2() {
    tmp_6171_fu_67827_p2 = (!loc_V_128_reg_99615.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_128_reg_99615.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6172_fu_68516_p2() {
    tmp_6172_fu_68516_p2 = (tmp_6168_reg_99947.read() & tmp_6167_reg_99656.read());
}

void particlemaster_ReadCalculations::thread_tmp_6173_fu_68520_p3() {
    tmp_6173_fu_68520_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6170_fu_68512_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6174_fu_68528_p2() {
    tmp_6174_fu_68528_p2 = (!tmp_6173_fu_68520_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6173_fu_68520_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6175_fu_68534_p3() {
    tmp_6175_fu_68534_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6172_fu_68516_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6176_fu_68542_p2() {
    tmp_6176_fu_68542_p2 = (!tmp_6175_fu_68534_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6175_fu_68534_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6177_fu_68548_p3() {
    tmp_6177_fu_68548_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6171_reg_99953.read());
}

void particlemaster_ReadCalculations::thread_tmp_6178_fu_68555_p2() {
    tmp_6178_fu_68555_p2 = (!tmp_6177_fu_68548_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6177_fu_68548_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6179_cast_fu_21451_p1() {
    tmp_6179_cast_fu_21451_p1 = esl_zext<36,20>(tmp_3172_reg_79859.read());
}

void particlemaster_ReadCalculations::thread_tmp_6179_fu_67129_p1() {
    tmp_6179_fu_67129_p1 = esl_zext<32,6>(index0_V_57_reg_99636.read());
}

void particlemaster_ReadCalculations::thread_tmp_6180_fu_67223_p4() {
    tmp_6180_fu_67223_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7324_reg_99688.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6181_fu_67232_p1() {
    tmp_6181_fu_67232_p1 = esl_zext<76,75>(sf57_fu_67214_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6182_fu_67244_p3() {
    tmp_6182_fu_67244_p3 = esl_concat<50,25>(tmp_7325_fu_67204_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6183_fu_67256_p1() {
    tmp_6183_fu_67256_p1 = esl_zext<77,76>(p_Val2_4364_fu_67236_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6184_fu_67279_p1() {
    tmp_6184_fu_67279_p1 = esl_zext<78,77>(p_Val2_4365_reg_99701.read());
}

void particlemaster_ReadCalculations::thread_tmp_6185_fu_67282_p1() {
    tmp_6185_fu_67282_p1 = esl_zext<78,75>(p_Val2_4366_reg_99716.read());
}

void particlemaster_ReadCalculations::thread_tmp_6186_cast_fu_21516_p1() {
    tmp_6186_cast_fu_21516_p1 = esl_zext<52,51>(tmp_3178_fu_21505_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6186_fu_67870_p1() {
    tmp_6186_fu_67870_p1 = esl_zext<32,4>(p_Val2_7186_reg_99695.read());
}

void particlemaster_ReadCalculations::thread_tmp_6188_cast_fu_21520_p1() {
    tmp_6188_cast_fu_21520_p1 = esl_zext<44,36>(tmp_3177_reg_79890.read());
}

void particlemaster_ReadCalculations::thread_tmp_6188_fu_67328_p3() {
    tmp_6188_fu_67328_p3 = esl_concat<67,14>(tmp_6187_reg_99733.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6189_fu_67339_p1() {
    tmp_6189_fu_67339_p1 = esl_zext<82,81>(p_Val2_4370_fu_67321_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6190_fu_67361_p1() {
    tmp_6190_fu_67361_p1 = esl_zext<83,82>(p_Val2_4371_reg_99738.read());
}

void particlemaster_ReadCalculations::thread_tmp_6191_fu_67364_p3() {
    tmp_6191_fu_67364_p3 = esl_concat<79,1>(p_Val2_4372_reg_99753.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6192_fu_67874_p1() {
    tmp_6192_fu_67874_p1 = esl_zext<32,6>(p_Val2_7187_reg_99727.read());
}

void particlemaster_ReadCalculations::thread_tmp_6193_fu_67413_p3() {
    tmp_6193_fu_67413_p3 = esl_concat<76,25>(tmp_7329_reg_99774.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6194_fu_67424_p1() {
    tmp_6194_fu_67424_p1 = esl_zext<102,96>(p_Val2_4375_fu_67404_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6195_fu_67447_p1() {
    tmp_6195_fu_67447_p1 = esl_zext<103,102>(p_Val2_4376_reg_99779.read());
}

void particlemaster_ReadCalculations::thread_tmp_6196_cast_fu_21600_p1() {
    tmp_6196_cast_fu_21600_p1 = esl_zext<108,100>(p_Val2_2284_reg_79915.read());
}

void particlemaster_ReadCalculations::thread_tmp_6196_fu_67450_p3() {
    tmp_6196_fu_67450_p3 = esl_concat<89,6>(p_Val2_4377_reg_99794.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6197_fu_67878_p1() {
    tmp_6197_fu_67878_p1 = esl_zext<32,6>(p_Val2_7188_reg_99768.read());
}

void particlemaster_ReadCalculations::thread_tmp_6199_fu_67504_p3() {
    tmp_6199_fu_67504_p3 = esl_concat<86,34>(tmp_6198_reg_99811.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6200_cast_fu_10922_p1() {
    tmp_6200_cast_fu_10922_p1 = esl_sext<130,129>(tmp_3271_fu_10883_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6200_fu_67515_p1() {
    tmp_6200_fu_67515_p1 = esl_zext<121,110>(p_Val2_4381_fu_67497_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6201_fu_67537_p1() {
    tmp_6201_fu_67537_p1 = esl_zext<122,121>(p_Val2_4382_reg_99816.read());
}

void particlemaster_ReadCalculations::thread_tmp_6202_fu_67540_p3() {
    tmp_6202_fu_67540_p3 = esl_concat<98,11>(p_Val2_4383_reg_99831.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6203_fu_67854_p1() {
    tmp_6203_fu_67854_p1 = esl_zext<32,6>(p_Val2_7189_reg_99805.read());
}

void particlemaster_ReadCalculations::thread_tmp_6205_fu_67594_p3() {
    tmp_6205_fu_67594_p3 = esl_concat<81,44>(tmp_6204_reg_99848.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6206_fu_67605_p1() {
    tmp_6206_fu_67605_p1 = esl_zext<126,110>(p_Val2_4387_fu_67587_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6207_fu_67627_p1() {
    tmp_6207_fu_67627_p1 = esl_zext<127,126>(p_Val2_4388_reg_99853.read());
}

void particlemaster_ReadCalculations::thread_tmp_6208_fu_67630_p3() {
    tmp_6208_fu_67630_p3 = esl_concat<93,16>(p_Val2_4389_reg_99868.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6209_fu_67858_p1() {
    tmp_6209_fu_67858_p1 = esl_zext<32,6>(p_Val2_7190_reg_99842.read());
}

void particlemaster_ReadCalculations::thread_tmp_6211_fu_67684_p3() {
    tmp_6211_fu_67684_p3 = esl_concat<76,54>(tmp_6210_reg_99885.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6212_fu_67695_p1() {
    tmp_6212_fu_67695_p1 = esl_zext<131,110>(p_Val2_4393_fu_67677_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6213_fu_67717_p1() {
    tmp_6213_fu_67717_p1 = esl_zext<132,131>(p_Val2_4394_reg_99890.read());
}

void particlemaster_ReadCalculations::thread_tmp_6214_cast_fu_11094_p1() {
    tmp_6214_cast_fu_11094_p1 = esl_zext<36,20>(tmp_3283_reg_75420.read());
}

void particlemaster_ReadCalculations::thread_tmp_6214_fu_67720_p3() {
    tmp_6214_fu_67720_p3 = esl_concat<88,21>(p_Val2_4397_reg_99905.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6215_fu_67862_p1() {
    tmp_6215_fu_67862_p1 = esl_zext<32,6>(p_Val2_7191_reg_99879.read());
}

void particlemaster_ReadCalculations::thread_tmp_6217_fu_67774_p3() {
    tmp_6217_fu_67774_p3 = esl_concat<71,64>(tmp_6216_reg_99922.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6218_fu_67785_p1() {
    tmp_6218_fu_67785_p1 = esl_zext<136,110>(p_Val2_4402_fu_67767_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6219_fu_67886_p1() {
    tmp_6219_fu_67886_p1 = esl_zext<137,136>(p_Val2_4403_reg_99927.read());
}

void particlemaster_ReadCalculations::thread_tmp_6220_fu_67889_p3() {
    tmp_6220_fu_67889_p3 = esl_concat<83,26>(p_Val2_4404_reg_99984.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6221_cast_fu_11159_p1() {
    tmp_6221_cast_fu_11159_p1 = esl_zext<52,51>(tmp_3290_fu_11148_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6221_fu_67866_p1() {
    tmp_6221_fu_67866_p1 = esl_zext<32,6>(p_Val2_7192_reg_99916.read());
}

void particlemaster_ReadCalculations::thread_tmp_6223_cast_fu_11163_p1() {
    tmp_6223_cast_fu_11163_p1 = esl_zext<44,36>(tmp_3288_reg_75451.read());
}

void particlemaster_ReadCalculations::thread_tmp_6225_fu_68022_p3() {
    tmp_6225_fu_68022_p3 = esl_concat<72,45>(tmp_6222_reg_100019.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6226_fu_28931_p3() {
    tmp_6226_fu_28931_p3 = p_Val2_2851_fu_28915_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_6229_fu_68052_p3() {
    tmp_6229_fu_68052_p3 = esl_concat<90,30>(p_Val2_4360_reg_100050.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6230_fu_17207_p3() {
    tmp_6230_fu_17207_p3 = p_Val2_5288_reg_77931.read().range(51, 51);
}

void particlemaster_ReadCalculations::thread_tmp_6231_cast_fu_11243_p1() {
    tmp_6231_cast_fu_11243_p1 = esl_zext<108,100>(p_Val2_2350_reg_75476.read());
}

void particlemaster_ReadCalculations::thread_tmp_6231_fu_68063_p1() {
    tmp_6231_fu_68063_p1 = esl_zext<122,121>(p_Val2_7969_cast_fu_68019_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6232_fu_68080_p1() {
    tmp_6232_fu_68080_p1 = esl_zext<123,122>(p_Val2_4409_reg_100071.read());
}

void particlemaster_ReadCalculations::thread_tmp_6233_fu_68083_p1() {
    tmp_6233_fu_68083_p1 = esl_zext<123,121>(p_Val2_4408_fu_68077_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6234_fu_68087_p1() {
    tmp_6234_fu_68087_p1 = esl_sext<120,73>(tmp_6228_reg_100065.read());
}

void particlemaster_ReadCalculations::thread_tmp_6237_fu_68184_p3() {
    tmp_6237_fu_68184_p3 = esl_concat<1,18>(tmp_7331_reg_100132.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6239_fu_68207_p2() {
    tmp_6239_fu_68207_p2 = (!tmp_7333_fu_68204_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7333_fu_68204_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6240_fu_68213_p1() {
    tmp_6240_fu_68213_p1 = esl_sext<131,128>(phitmp36_reg_100117.read());
}

void particlemaster_ReadCalculations::thread_tmp_6241_fu_17280_p1() {
    tmp_6241_fu_17280_p1 = grp_fu_17274_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6242_fu_68265_p1() {
    tmp_6242_fu_68265_p1 = esl_sext<72,71>(p_Val2_6725_reg_100122.read());
}

void particlemaster_ReadCalculations::thread_tmp_6243_fu_17301_p1() {
    tmp_6243_fu_17301_p1 = p_Val2_2855_reg_78050.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6244_fu_68268_p1() {
    tmp_6244_fu_68268_p1 = esl_sext<72,71>(p_Val2_4418_reg_100178.read());
}

void particlemaster_ReadCalculations::thread_tmp_6245_fu_68423_p1() {
    tmp_6245_fu_68423_p1 = esl_zext<32,8>(m_diff_hi_V_65_reg_100183.read());
}

void particlemaster_ReadCalculations::thread_tmp_6246_fu_68321_p1() {
    tmp_6246_fu_68321_p1 = esl_zext<32,8>(Z4_ind_V_65_fu_68311_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6247_fu_68331_p1() {
    tmp_6247_fu_68331_p1 = esl_zext<36,35>(p_Val2_6727_reg_100200.read());
}

void particlemaster_ReadCalculations::thread_tmp_6248_fu_68334_p1() {
    tmp_6248_fu_68334_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6249_fu_68326_p1() {
    tmp_6249_fu_68326_p1 = esl_zext<32,8>(p_Val2_6729_fu_68297_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6250_fu_68344_p4() {
    tmp_6250_fu_68344_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6729_reg_100195.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6252_fu_68380_p1() {
    tmp_6252_fu_68380_p1 = esl_zext<44,43>(tmp_6250_reg_100221.read());
}

void particlemaster_ReadCalculations::thread_tmp_6253_fu_68376_p1() {
    tmp_6253_fu_68376_p1 = esl_zext<32,8>(p_Val2_6732_reg_100188.read());
}

void particlemaster_ReadCalculations::thread_tmp_6255_fu_68401_p4() {
    tmp_6255_fu_68401_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6732_reg_100188.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6257_fu_68437_p5() {
    tmp_6257_fu_68437_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6732_reg_100188.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6260_fu_68493_p1() {
    tmp_6260_fu_68493_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6261_fu_68561_p3() {
    tmp_6261_fu_68561_p3 = esl_concat<59,49>(p_Val2_4428_reg_100287.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6262_fu_68216_p2() {
    tmp_6262_fu_68216_p2 = (!tmp_6240_fu_68213_p1.read().is_01() || !p_Val2_4411_reg_100112.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6240_fu_68213_p1.read() != p_Val2_4411_reg_100112.read());
}

void particlemaster_ReadCalculations::thread_tmp_6263_fu_68671_p2() {
    tmp_6263_fu_68671_p2 = (!p_0415_0_i65_fu_68645_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i65_fu_68645_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6264_fu_68677_p4() {
    tmp_6264_fu_68677_p4 = p_Val2_4431_reg_100338.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_6265_fu_68686_p4() {
    tmp_6265_fu_68686_p4 = p_Val2_4431_reg_100338.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6266_fu_68888_p1() {
    tmp_6266_fu_68888_p1 = t_V_254_fu_68870_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_6267_fu_68892_p3() {
    tmp_6267_fu_68892_p3 = (!sel_tmp473_fu_68883_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp473_fu_68883_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_6268_fu_68900_p2() {
    tmp_6268_fu_68900_p2 = (sel_tmp473_fu_68883_p2.read() | x_is_p1_32_reg_100368.read());
}

void particlemaster_ReadCalculations::thread_tmp_6272_fu_57449_p2() {
    tmp_6272_fu_57449_p2 = (!b_exp_147_fu_57443_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_147_fu_57443_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_6273_cast_fu_22093_p1() {
    tmp_6273_cast_fu_22093_p1 = esl_zext<77,75>(tmp_3324_fu_22085_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6273_fu_56766_p2() {
    tmp_6273_fu_56766_p2 = (!loc_V_142_reg_95162.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_142_reg_95162.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6274_fu_57455_p2() {
    tmp_6274_fu_57455_p2 = (!loc_V_141_reg_95155.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_141_reg_95155.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_6275_fu_56771_p2() {
    tmp_6275_fu_56771_p2 = (!loc_V_142_reg_95162.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_142_reg_95162.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6276_fu_58145_p2() {
    tmp_6276_fu_58145_p2 = (tmp_6274_reg_95487.read() & tmp_6275_reg_95202.read());
}

void particlemaster_ReadCalculations::thread_tmp_6277_fu_57460_p2() {
    tmp_6277_fu_57460_p2 = (!loc_V_141_reg_95155.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_141_reg_95155.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6278_fu_58149_p2() {
    tmp_6278_fu_58149_p2 = (tmp_6274_reg_95487.read() & tmp_6273_reg_95196.read());
}

void particlemaster_ReadCalculations::thread_tmp_6279_fu_58153_p3() {
    tmp_6279_fu_58153_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6276_fu_58145_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6280_fu_58161_p2() {
    tmp_6280_fu_58161_p2 = (!tmp_6279_fu_58153_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6279_fu_58153_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6281_fu_58167_p3() {
    tmp_6281_fu_58167_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6278_fu_58149_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6282_cast_fu_22176_p1() {
    tmp_6282_cast_fu_22176_p1 = esl_zext<82,81>(tmp_3331_fu_22169_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6282_fu_58175_p2() {
    tmp_6282_fu_58175_p2 = (!tmp_6281_fu_58167_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6281_fu_58167_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6283_fu_58181_p3() {
    tmp_6283_fu_58181_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6277_reg_95493.read());
}

void particlemaster_ReadCalculations::thread_tmp_6284_fu_58188_p2() {
    tmp_6284_fu_58188_p2 = (!tmp_6283_fu_58181_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6283_fu_58181_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6285_fu_56762_p1() {
    tmp_6285_fu_56762_p1 = esl_zext<32,6>(index0_V_58_reg_95176.read());
}

void particlemaster_ReadCalculations::thread_tmp_6286_cast_fu_22212_p1() {
    tmp_6286_cast_fu_22212_p1 = esl_zext<83,80>(tmp_3335_fu_22205_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6286_fu_56856_p4() {
    tmp_6286_fu_56856_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7342_reg_95228.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6287_fu_56865_p1() {
    tmp_6287_fu_56865_p1 = esl_zext<76,75>(sf58_fu_56847_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6288_fu_56877_p3() {
    tmp_6288_fu_56877_p3 = esl_concat<50,25>(tmp_7343_fu_56837_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6289_fu_56889_p1() {
    tmp_6289_fu_56889_p1 = esl_zext<77,76>(p_Val2_4438_fu_56869_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6290_fu_56912_p1() {
    tmp_6290_fu_56912_p1 = esl_zext<78,77>(p_Val2_4440_reg_95241.read());
}

void particlemaster_ReadCalculations::thread_tmp_6291_cast_fu_22261_p1() {
    tmp_6291_cast_fu_22261_p1 = esl_zext<102,101>(tmp_3337_fu_22254_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6291_fu_56915_p1() {
    tmp_6291_fu_56915_p1 = esl_zext<78,75>(p_Val2_4441_reg_95256.read());
}

void particlemaster_ReadCalculations::thread_tmp_6292_fu_57503_p1() {
    tmp_6292_fu_57503_p1 = esl_zext<32,4>(p_Val2_7228_reg_95235.read());
}

void particlemaster_ReadCalculations::thread_tmp_6294_fu_56961_p3() {
    tmp_6294_fu_56961_p3 = esl_concat<67,14>(tmp_6293_reg_95273.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6295_cast_fu_22298_p1() {
    tmp_6295_cast_fu_22298_p1 = esl_zext<103,95>(tmp_3340_fu_22291_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6295_fu_56972_p1() {
    tmp_6295_fu_56972_p1 = esl_zext<82,81>(p_Val2_4445_fu_56954_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6296_fu_56994_p1() {
    tmp_6296_fu_56994_p1 = esl_zext<83,82>(p_Val2_4447_reg_95278.read());
}

void particlemaster_ReadCalculations::thread_tmp_6297_fu_56997_p3() {
    tmp_6297_fu_56997_p3 = esl_concat<79,1>(p_Val2_4448_reg_95293.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6298_fu_57507_p1() {
    tmp_6298_fu_57507_p1 = esl_zext<32,6>(p_Val2_7229_reg_95267.read());
}

void particlemaster_ReadCalculations::thread_tmp_6299_fu_57046_p3() {
    tmp_6299_fu_57046_p3 = esl_concat<76,25>(tmp_7347_reg_95314.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6300_fu_57057_p1() {
    tmp_6300_fu_57057_p1 = esl_zext<102,96>(p_Val2_4451_fu_57037_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6301_cast_fu_22352_p1() {
    tmp_6301_cast_fu_22352_p1 = esl_zext<121,120>(tmp_3343_fu_22345_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6301_fu_57080_p1() {
    tmp_6301_fu_57080_p1 = esl_zext<103,102>(p_Val2_4452_reg_95319.read());
}

void particlemaster_ReadCalculations::thread_tmp_6302_fu_57083_p3() {
    tmp_6302_fu_57083_p3 = esl_concat<89,6>(p_Val2_4454_reg_95334.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6303_fu_57511_p1() {
    tmp_6303_fu_57511_p1 = esl_zext<32,6>(p_Val2_7230_reg_95308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6305_cast_fu_22388_p1() {
    tmp_6305_cast_fu_22388_p1 = esl_zext<122,109>(tmp_3346_fu_22381_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6305_fu_57137_p3() {
    tmp_6305_fu_57137_p3 = esl_concat<86,34>(tmp_6304_reg_95351.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6306_fu_17304_p3() {
    tmp_6306_fu_17304_p3 = p_Val2_2855_reg_78050.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6307_fu_57148_p1() {
    tmp_6307_fu_57148_p1 = esl_zext<121,110>(p_Val2_4458_fu_57130_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6308_fu_57170_p1() {
    tmp_6308_fu_57170_p1 = esl_zext<122,121>(p_Val2_4459_reg_95356.read());
}

void particlemaster_ReadCalculations::thread_tmp_6309_fu_17478_p1() {
    tmp_6309_fu_17478_p1 = p_Val2_2867_fu_17472_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6309_not_fu_21587_p2() {
    tmp_6309_not_fu_21587_p2 = (!tmp_3098_fu_21579_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3098_fu_21579_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6310_fu_57173_p3() {
    tmp_6310_fu_57173_p3 = esl_concat<98,11>(p_Val2_4461_reg_95371.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6311_cast_fu_22442_p1() {
    tmp_6311_cast_fu_22442_p1 = esl_zext<126,125>(tmp_3349_fu_22435_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6311_fu_57487_p1() {
    tmp_6311_fu_57487_p1 = esl_zext<32,6>(p_Val2_7231_reg_95345.read());
}

void particlemaster_ReadCalculations::thread_tmp_6311_not_fu_11230_p2() {
    tmp_6311_not_fu_11230_p2 = (!tmp_3207_fu_11222_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3207_fu_11222_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6313_fu_57227_p3() {
    tmp_6313_fu_57227_p3 = esl_concat<81,44>(tmp_6312_reg_95388.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6314_fu_57238_p1() {
    tmp_6314_fu_57238_p1 = esl_zext<126,110>(p_Val2_4465_fu_57220_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6315_cast_fu_22478_p1() {
    tmp_6315_cast_fu_22478_p1 = esl_zext<127,109>(tmp_3352_fu_22471_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6315_fu_57260_p1() {
    tmp_6315_fu_57260_p1 = esl_zext<127,126>(p_Val2_4466_reg_95393.read());
}

void particlemaster_ReadCalculations::thread_tmp_6316_fu_57263_p3() {
    tmp_6316_fu_57263_p3 = esl_concat<93,16>(p_Val2_4467_reg_95408.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6317_fu_57491_p1() {
    tmp_6317_fu_57491_p1 = esl_zext<32,6>(p_Val2_7232_reg_95382.read());
}

void particlemaster_ReadCalculations::thread_tmp_6319_fu_57317_p3() {
    tmp_6319_fu_57317_p3 = esl_concat<76,54>(tmp_6318_reg_95425.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6320_fu_57328_p1() {
    tmp_6320_fu_57328_p1 = esl_zext<131,110>(p_Val2_4471_fu_57310_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6321_cast_fu_22532_p1() {
    tmp_6321_cast_fu_22532_p1 = esl_zext<131,130>(tmp_3355_fu_22525_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6321_fu_57350_p1() {
    tmp_6321_fu_57350_p1 = esl_zext<132,131>(p_Val2_4473_reg_95430.read());
}

void particlemaster_ReadCalculations::thread_tmp_6322_fu_57353_p3() {
    tmp_6322_fu_57353_p3 = esl_concat<88,21>(p_Val2_4474_reg_95445.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6323_fu_57495_p1() {
    tmp_6323_fu_57495_p1 = esl_zext<32,6>(p_Val2_7233_reg_95419.read());
}

void particlemaster_ReadCalculations::thread_tmp_6325_cast_fu_22568_p1() {
    tmp_6325_cast_fu_22568_p1 = esl_zext<132,109>(tmp_3358_fu_22561_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6325_fu_57407_p3() {
    tmp_6325_fu_57407_p3 = esl_concat<71,64>(tmp_6324_reg_95462.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6326_fu_17492_p1() {
    tmp_6326_fu_17492_p1 = p_Val2_2867_fu_17472_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6327_fu_18132_p1() {
    tmp_6327_fu_18132_p1 = p_Val2_2900_fu_18126_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6328_fu_57418_p1() {
    tmp_6328_fu_57418_p1 = esl_zext<136,110>(p_Val2_4479_fu_57400_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6329_fu_57519_p1() {
    tmp_6329_fu_57519_p1 = esl_zext<137,136>(p_Val2_4483_reg_95467.read());
}

void particlemaster_ReadCalculations::thread_tmp_6330_fu_18136_p1() {
    tmp_6330_fu_18136_p1 = p_Val2_2900_fu_18126_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6331_cast_fu_22661_p1() {
    tmp_6331_cast_fu_22661_p1 = esl_zext<136,135>(tmp_3361_fu_22654_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6331_fu_57522_p3() {
    tmp_6331_fu_57522_p3 = esl_concat<83,26>(p_Val2_4484_reg_95524.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6332_fu_57499_p1() {
    tmp_6332_fu_57499_p1 = esl_zext<32,6>(p_Val2_7234_reg_95456.read());
}

void particlemaster_ReadCalculations::thread_tmp_6335_cast_fu_22682_p1() {
    tmp_6335_cast_fu_22682_p1 = esl_zext<136,109>(tmp_3363_fu_22675_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6336_fu_57655_p3() {
    tmp_6336_fu_57655_p3 = esl_concat<72,45>(tmp_6333_reg_95559.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6338_fu_57685_p3() {
    tmp_6338_fu_57685_p3 = esl_concat<90,30>(p_Val2_4434_reg_95590.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6339_fu_57696_p1() {
    tmp_6339_fu_57696_p1 = esl_zext<122,121>(p_Val2_8045_cast_fu_57652_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6340_fu_57713_p1() {
    tmp_6340_fu_57713_p1 = esl_zext<123,122>(p_Val2_4490_reg_95611.read());
}

void particlemaster_ReadCalculations::thread_tmp_6342_fu_57716_p1() {
    tmp_6342_fu_57716_p1 = esl_zext<123,121>(p_Val2_4489_fu_57710_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6343_cast_fu_22832_p1() {
    tmp_6343_cast_fu_22832_p1 = esl_zext<118,117>(tmp_3368_fu_22825_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6343_fu_18273_p3() {
    tmp_6343_fu_18273_p3 = r_V_410_reg_78462.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_6344_cast_fu_22836_p1() {
    tmp_6344_cast_fu_22836_p1 = esl_zext<118,79>(tmp_3367_reg_80425.read());
}

void particlemaster_ReadCalculations::thread_tmp_6344_fu_57720_p1() {
    tmp_6344_fu_57720_p1 = esl_sext<120,73>(tmp_6337_reg_95605.read());
}

void particlemaster_ReadCalculations::thread_tmp_6347_fu_57817_p3() {
    tmp_6347_fu_57817_p3 = esl_concat<1,18>(tmp_7349_reg_95672.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6348_cast_fu_22868_p1() {
    tmp_6348_cast_fu_22868_p1 = esl_sext<121,120>(tmp_3370_fu_22861_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6349_fu_57840_p2() {
    tmp_6349_fu_57840_p2 = (!tmp_7351_fu_57837_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7351_fu_57837_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6350_fu_57846_p1() {
    tmp_6350_fu_57846_p1 = esl_sext<131,128>(phitmp38_reg_95657.read());
}

void particlemaster_ReadCalculations::thread_tmp_6351_fu_57898_p1() {
    tmp_6351_fu_57898_p1 = esl_sext<72,71>(p_Val2_6766_reg_95662.read());
}

void particlemaster_ReadCalculations::thread_tmp_6352_fu_57901_p1() {
    tmp_6352_fu_57901_p1 = esl_sext<72,71>(p_Val2_4497_reg_95718.read());
}

void particlemaster_ReadCalculations::thread_tmp_6353_fu_58056_p1() {
    tmp_6353_fu_58056_p1 = esl_zext<32,8>(m_diff_hi_V_66_reg_95723.read());
}

void particlemaster_ReadCalculations::thread_tmp_6354_fu_57954_p1() {
    tmp_6354_fu_57954_p1 = esl_zext<32,8>(Z4_ind_V_66_fu_57944_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6355_fu_57964_p1() {
    tmp_6355_fu_57964_p1 = esl_zext<36,35>(p_Val2_6768_reg_95740.read());
}

void particlemaster_ReadCalculations::thread_tmp_6356_fu_57967_p1() {
    tmp_6356_fu_57967_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6357_fu_57959_p1() {
    tmp_6357_fu_57959_p1 = esl_zext<32,8>(p_Val2_6770_fu_57930_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6358_fu_57977_p4() {
    tmp_6358_fu_57977_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6770_reg_95735.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6360_fu_58013_p1() {
    tmp_6360_fu_58013_p1 = esl_zext<44,43>(tmp_6358_reg_95761.read());
}

void particlemaster_ReadCalculations::thread_tmp_6361_fu_58009_p1() {
    tmp_6361_fu_58009_p1 = esl_zext<32,8>(p_Val2_6773_reg_95728.read());
}

void particlemaster_ReadCalculations::thread_tmp_6363_fu_58034_p4() {
    tmp_6363_fu_58034_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6773_reg_95728.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6365_cast_fu_11736_p1() {
    tmp_6365_cast_fu_11736_p1 = esl_zext<77,75>(tmp_3405_fu_11728_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6365_fu_58070_p5() {
    tmp_6365_fu_58070_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6773_reg_95728.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6368_fu_58126_p1() {
    tmp_6368_fu_58126_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6369_fu_58194_p3() {
    tmp_6369_fu_58194_p3 = esl_concat<59,49>(p_Val2_4506_reg_95827.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6370_fu_57849_p2() {
    tmp_6370_fu_57849_p2 = (!tmp_6350_fu_57846_p1.read().is_01() || !p_Val2_4492_reg_95652.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6350_fu_57846_p1.read() != p_Val2_4492_reg_95652.read());
}

void particlemaster_ReadCalculations::thread_tmp_6371_fu_58304_p2() {
    tmp_6371_fu_58304_p2 = (!p_0415_0_i66_fu_58278_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i66_fu_58278_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6372_fu_58310_p4() {
    tmp_6372_fu_58310_p4 = p_Val2_4508_reg_95878.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_6373_fu_58319_p4() {
    tmp_6373_fu_58319_p4 = p_Val2_4508_reg_95878.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6374_cast_fu_11819_p1() {
    tmp_6374_cast_fu_11819_p1 = esl_zext<82,81>(tmp_3411_fu_11812_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6374_fu_58521_p1() {
    tmp_6374_fu_58521_p1 = t_V_260_fu_58503_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_6375_fu_58525_p3() {
    tmp_6375_fu_58525_p3 = (!sel_tmp491_fu_58516_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp491_fu_58516_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_6376_fu_58533_p2() {
    tmp_6376_fu_58533_p2 = (sel_tmp491_fu_58516_p2.read() | x_is_p1_33_reg_95908.read());
}

void particlemaster_ReadCalculations::thread_tmp_6378_cast_fu_11855_p1() {
    tmp_6378_cast_fu_11855_p1 = esl_zext<83,80>(tmp_3414_fu_11848_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6379_fu_68913_p3() {
    tmp_6379_fu_68913_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_6380_fu_58546_p3() {
    tmp_6380_fu_58546_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_6381_fu_68939_p3() {
    tmp_6381_fu_68939_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_6382_fu_18254_p1() {
    tmp_6382_fu_18254_p1 = grp_fu_72781_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6383_cast_fu_11904_p1() {
    tmp_6383_cast_fu_11904_p1 = esl_zext<102,101>(tmp_3416_fu_11897_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6383_fu_68946_p2() {
    tmp_6383_fu_68946_p2 = (!tmp_6381_fu_68939_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6381_fu_68939_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6384_fu_58572_p3() {
    tmp_6384_fu_58572_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_6385_fu_58579_p2() {
    tmp_6385_fu_58579_p2 = (!tmp_6384_fu_58572_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6384_fu_58572_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6386_fu_68952_p3() {
    tmp_6386_fu_68952_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_6387_cast_fu_11941_p1() {
    tmp_6387_cast_fu_11941_p1 = esl_zext<103,95>(tmp_3419_fu_11934_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6387_fu_68959_p2() {
    tmp_6387_fu_68959_p2 = (!tmp_6386_fu_68952_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6386_fu_68952_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6388_fu_58585_p3() {
    tmp_6388_fu_58585_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_6389_fu_58592_p2() {
    tmp_6389_fu_58592_p2 = (!tmp_6388_fu_58585_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6388_fu_58585_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6390_fu_68965_p1() {
    tmp_6390_fu_68965_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6391_fu_69050_p4() {
    tmp_6391_fu_69050_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7358_reg_100478.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6392_fu_69059_p1() {
    tmp_6392_fu_69059_p1 = esl_zext<76,75>(sf59_fu_69041_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6393_cast_fu_11995_p1() {
    tmp_6393_cast_fu_11995_p1 = esl_zext<121,120>(tmp_3422_fu_11988_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6393_fu_69071_p3() {
    tmp_6393_fu_69071_p3 = esl_concat<50,25>(tmp_7359_fu_69031_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6394_fu_69083_p1() {
    tmp_6394_fu_69083_p1 = esl_zext<77,76>(p_Val2_4513_fu_69063_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6395_fu_69106_p1() {
    tmp_6395_fu_69106_p1 = esl_zext<78,77>(p_Val2_4514_reg_100491.read());
}

void particlemaster_ReadCalculations::thread_tmp_6396_fu_69109_p1() {
    tmp_6396_fu_69109_p1 = esl_zext<78,75>(p_Val2_4515_reg_100506.read());
}

void particlemaster_ReadCalculations::thread_tmp_6397_cast_fu_12031_p1() {
    tmp_6397_cast_fu_12031_p1 = esl_zext<122,109>(tmp_3428_fu_12024_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6397_fu_69665_p1() {
    tmp_6397_fu_69665_p1 = esl_zext<32,4>(p_Val2_7193_reg_100485.read());
}

void particlemaster_ReadCalculations::thread_tmp_6399_fu_69155_p3() {
    tmp_6399_fu_69155_p3 = esl_concat<67,14>(tmp_6398_reg_100523.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6400_fu_69166_p1() {
    tmp_6400_fu_69166_p1 = esl_zext<82,81>(p_Val2_4519_fu_69148_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6401_fu_69188_p1() {
    tmp_6401_fu_69188_p1 = esl_zext<83,82>(p_Val2_4520_reg_100528.read());
}

void particlemaster_ReadCalculations::thread_tmp_6402_fu_69191_p3() {
    tmp_6402_fu_69191_p3 = esl_concat<79,1>(p_Val2_4521_reg_100543.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6403_cast_fu_12085_p1() {
    tmp_6403_cast_fu_12085_p1 = esl_zext<126,125>(tmp_3431_fu_12078_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6403_fu_69669_p1() {
    tmp_6403_fu_69669_p1 = esl_zext<32,6>(p_Val2_7194_reg_100517.read());
}

void particlemaster_ReadCalculations::thread_tmp_6404_fu_69240_p3() {
    tmp_6404_fu_69240_p3 = esl_concat<76,25>(tmp_7363_reg_100564.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6405_fu_69251_p1() {
    tmp_6405_fu_69251_p1 = esl_zext<102,96>(p_Val2_4524_fu_69231_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6406_fu_69274_p1() {
    tmp_6406_fu_69274_p1 = esl_zext<103,102>(p_Val2_4525_reg_100569.read());
}

void particlemaster_ReadCalculations::thread_tmp_6407_cast_fu_12121_p1() {
    tmp_6407_cast_fu_12121_p1 = esl_zext<127,109>(tmp_3434_fu_12114_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6407_fu_69277_p3() {
    tmp_6407_fu_69277_p3 = esl_concat<89,6>(p_Val2_4526_reg_100584.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6408_fu_69673_p1() {
    tmp_6408_fu_69673_p1 = esl_zext<32,6>(p_Val2_7195_reg_100558.read());
}

void particlemaster_ReadCalculations::thread_tmp_6410_fu_69331_p3() {
    tmp_6410_fu_69331_p3 = esl_concat<86,34>(tmp_6409_reg_100601.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6411_fu_69342_p1() {
    tmp_6411_fu_69342_p1 = esl_zext<121,110>(p_Val2_4530_fu_69324_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6412_fu_69364_p1() {
    tmp_6412_fu_69364_p1 = esl_zext<122,121>(p_Val2_4531_reg_100606.read());
}

void particlemaster_ReadCalculations::thread_tmp_6413_cast_fu_12175_p1() {
    tmp_6413_cast_fu_12175_p1 = esl_zext<131,130>(tmp_3437_fu_12168_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6413_fu_69367_p3() {
    tmp_6413_fu_69367_p3 = esl_concat<98,11>(p_Val2_4532_reg_100621.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6414_fu_18581_p3() {
    tmp_6414_fu_18581_p3 = p_Val2_2918_fu_18565_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_6415_fu_69649_p1() {
    tmp_6415_fu_69649_p1 = esl_zext<32,6>(p_Val2_7196_reg_100595.read());
}

void particlemaster_ReadCalculations::thread_tmp_6417_cast_fu_12211_p1() {
    tmp_6417_cast_fu_12211_p1 = esl_zext<132,109>(tmp_3442_fu_12204_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6417_fu_69421_p3() {
    tmp_6417_fu_69421_p3 = esl_concat<81,44>(tmp_6416_reg_100638.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6418_fu_69432_p1() {
    tmp_6418_fu_69432_p1 = esl_zext<126,110>(p_Val2_4536_fu_69414_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6419_fu_69454_p1() {
    tmp_6419_fu_69454_p1 = esl_zext<127,126>(p_Val2_4537_reg_100643.read());
}

void particlemaster_ReadCalculations::thread_tmp_6420_fu_69457_p3() {
    tmp_6420_fu_69457_p3 = esl_concat<93,16>(p_Val2_4538_reg_100658.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6421_fu_69653_p1() {
    tmp_6421_fu_69653_p1 = esl_zext<32,6>(p_Val2_7197_reg_100632.read());
}

void particlemaster_ReadCalculations::thread_tmp_6423_cast_fu_12304_p1() {
    tmp_6423_cast_fu_12304_p1 = esl_zext<136,135>(tmp_3445_fu_12297_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6423_fu_69511_p3() {
    tmp_6423_fu_69511_p3 = esl_concat<76,54>(tmp_6422_reg_100675.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6424_fu_69522_p1() {
    tmp_6424_fu_69522_p1 = esl_zext<131,110>(p_Val2_4542_fu_69504_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6425_fu_69544_p1() {
    tmp_6425_fu_69544_p1 = esl_zext<132,131>(p_Val2_4543_reg_100680.read());
}

void particlemaster_ReadCalculations::thread_tmp_6426_fu_69547_p3() {
    tmp_6426_fu_69547_p3 = esl_concat<88,21>(p_Val2_4544_reg_100695.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6427_cast_fu_12325_p1() {
    tmp_6427_cast_fu_12325_p1 = esl_zext<136,109>(tmp_3447_fu_12318_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6427_fu_69657_p1() {
    tmp_6427_fu_69657_p1 = esl_zext<32,6>(p_Val2_7198_reg_100669.read());
}

void particlemaster_ReadCalculations::thread_tmp_6429_fu_69601_p3() {
    tmp_6429_fu_69601_p3 = esl_concat<71,64>(tmp_6428_reg_100712.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6430_fu_69612_p1() {
    tmp_6430_fu_69612_p1 = esl_zext<136,110>(p_Val2_4548_fu_69594_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6431_fu_69681_p1() {
    tmp_6431_fu_69681_p1 = esl_zext<137,136>(p_Val2_4549_reg_100717.read());
}

void particlemaster_ReadCalculations::thread_tmp_6432_fu_69684_p3() {
    tmp_6432_fu_69684_p3 = esl_concat<83,26>(p_Val2_4550_reg_100757.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6433_fu_69661_p1() {
    tmp_6433_fu_69661_p1 = esl_zext<32,6>(p_Val2_7199_reg_100706.read());
}

void particlemaster_ReadCalculations::thread_tmp_6435_cast_fu_12475_p1() {
    tmp_6435_cast_fu_12475_p1 = esl_zext<118,117>(tmp_3452_fu_12468_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6436_cast_fu_12479_p1() {
    tmp_6436_cast_fu_12479_p1 = esl_zext<118,79>(tmp_3451_reg_75986.read());
}

void particlemaster_ReadCalculations::thread_tmp_6436_fu_29031_p3() {
    tmp_6436_fu_29031_p3 = p_Val2_2834_reg_82894.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_6439_fu_18681_p3() {
    tmp_6439_fu_18681_p3 = p_Val2_2901_reg_78432.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_6440_cast_fu_12511_p1() {
    tmp_6440_cast_fu_12511_p1 = esl_sext<121,120>(tmp_3454_fu_12504_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6440_fu_69817_p3() {
    tmp_6440_fu_69817_p3 = esl_concat<72,45>(tmp_6434_reg_100792.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6442_fu_69847_p3() {
    tmp_6442_fu_69847_p3 = esl_concat<90,30>(p_Val2_4509_reg_100823.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6443_fu_69858_p1() {
    tmp_6443_fu_69858_p1 = esl_zext<122,121>(p_Val2_8180_cast_fu_69814_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6444_fu_69879_p1() {
    tmp_6444_fu_69879_p1 = esl_zext<123,122>(p_Val2_4555_reg_100844.read());
}

void particlemaster_ReadCalculations::thread_tmp_6445_fu_69882_p1() {
    tmp_6445_fu_69882_p1 = esl_zext<123,121>(p_Val2_4554_fu_69876_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6446_fu_69886_p1() {
    tmp_6446_fu_69886_p1 = esl_sext<120,73>(tmp_6441_reg_100838.read());
}

void particlemaster_ReadCalculations::thread_tmp_6449_fu_69960_p3() {
    tmp_6449_fu_69960_p3 = esl_concat<77,52>(tmp_6448_reg_100869.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6450_fu_29011_p1() {
    tmp_6450_fu_29011_p1 = p_0415_0_i42_reg_83082.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6451_fu_69970_p3() {
    tmp_6451_fu_69970_p3 = esl_concat<1,18>(tmp_7366_reg_100884.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6452_fu_18661_p1() {
    tmp_6452_fu_18661_p1 = p_0415_0_i43_reg_78620.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6454_fu_69993_p2() {
    tmp_6454_fu_69993_p2 = (!tmp_7368_fu_69990_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7368_fu_69990_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6455_fu_70053_p1() {
    tmp_6455_fu_70053_p1 = esl_sext<72,71>(p_Val2_6798_reg_100874.read());
}

void particlemaster_ReadCalculations::thread_tmp_6456_fu_70056_p1() {
    tmp_6456_fu_70056_p1 = esl_sext<72,71>(p_Val2_4562_reg_100923.read());
}

void particlemaster_ReadCalculations::thread_tmp_6457_fu_70211_p1() {
    tmp_6457_fu_70211_p1 = esl_zext<32,8>(m_diff_hi_V_67_reg_100928.read());
}

void particlemaster_ReadCalculations::thread_tmp_6458_fu_70109_p1() {
    tmp_6458_fu_70109_p1 = esl_zext<32,8>(Z4_ind_V_67_fu_70099_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6459_fu_70119_p1() {
    tmp_6459_fu_70119_p1 = esl_zext<36,35>(p_Val2_6800_reg_100945.read());
}

void particlemaster_ReadCalculations::thread_tmp_6460_fu_70122_p1() {
    tmp_6460_fu_70122_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6461_fu_70114_p1() {
    tmp_6461_fu_70114_p1 = esl_zext<32,8>(p_Val2_6802_fu_70085_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6462_fu_70132_p4() {
    tmp_6462_fu_70132_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6802_reg_100940.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6464_fu_70168_p1() {
    tmp_6464_fu_70168_p1 = esl_zext<44,43>(tmp_6462_reg_100966.read());
}

void particlemaster_ReadCalculations::thread_tmp_6465_fu_70164_p1() {
    tmp_6465_fu_70164_p1 = esl_zext<32,8>(p_Val2_6805_reg_100933.read());
}

void particlemaster_ReadCalculations::thread_tmp_6467_cast_fu_23158_p1() {
    tmp_6467_cast_fu_23158_p1 = esl_zext<36,20>(tmp_3386_reg_80580.read());
}

void particlemaster_ReadCalculations::thread_tmp_6467_fu_70189_p4() {
    tmp_6467_fu_70189_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6805_reg_100933.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6469_fu_70225_p5() {
    tmp_6469_fu_70225_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6805_reg_100933.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6472_fu_70281_p1() {
    tmp_6472_fu_70281_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6473_fu_70291_p3() {
    tmp_6473_fu_70291_p3 = esl_concat<59,49>(p_Val2_4573_reg_101032.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6474_cast_fu_23223_p1() {
    tmp_6474_cast_fu_23223_p1 = esl_zext<52,51>(tmp_3392_fu_23212_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6474_fu_70325_p4() {
    tmp_6474_fu_70325_p4 = p_Val2_4577_fu_70301_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6475_fu_70335_p3() {
    tmp_6475_fu_70335_p3 = esl_concat<57,1>(tmp_6474_fu_70325_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6476_cast_fu_23227_p1() {
    tmp_6476_cast_fu_23227_p1 = esl_zext<44,36>(tmp_3391_reg_80611.read());
}

void particlemaster_ReadCalculations::thread_tmp_6476_fu_70003_p2() {
    tmp_6476_fu_70003_p2 = (!tmp_12333_cast_fu_69999_p1.read().is_01() || !p_Val2_4557_fu_69953_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12333_cast_fu_69999_p1.read() != p_Val2_4557_fu_69953_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6477_fu_58598_p1() {
    tmp_6477_fu_58598_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6478_fu_58683_p4() {
    tmp_6478_fu_58683_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7373_reg_96018.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6479_fu_58692_p1() {
    tmp_6479_fu_58692_p1 = esl_zext<76,75>(sf60_fu_58674_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6480_fu_58704_p3() {
    tmp_6480_fu_58704_p3 = esl_concat<50,25>(tmp_7374_fu_58664_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6481_fu_58716_p1() {
    tmp_6481_fu_58716_p1 = esl_zext<77,76>(p_Val2_4585_fu_58696_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6482_fu_58739_p1() {
    tmp_6482_fu_58739_p1 = esl_zext<78,77>(p_Val2_4586_reg_96031.read());
}

void particlemaster_ReadCalculations::thread_tmp_6483_fu_58742_p1() {
    tmp_6483_fu_58742_p1 = esl_zext<78,75>(p_Val2_4587_reg_96046.read());
}

void particlemaster_ReadCalculations::thread_tmp_6484_cast_fu_23285_p1() {
    tmp_6484_cast_fu_23285_p1 = esl_zext<108,100>(p_Val2_2414_reg_80636.read());
}

void particlemaster_ReadCalculations::thread_tmp_6484_fu_59298_p1() {
    tmp_6484_fu_59298_p1 = esl_zext<32,4>(p_Val2_7235_reg_96025.read());
}

void particlemaster_ReadCalculations::thread_tmp_6486_fu_58788_p3() {
    tmp_6486_fu_58788_p3 = esl_concat<67,14>(tmp_6485_reg_96063.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6487_fu_58799_p1() {
    tmp_6487_fu_58799_p1 = esl_zext<82,81>(p_Val2_4592_fu_58781_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6488_fu_58821_p1() {
    tmp_6488_fu_58821_p1 = esl_zext<83,82>(p_Val2_4593_reg_96068.read());
}

void particlemaster_ReadCalculations::thread_tmp_6489_fu_58824_p3() {
    tmp_6489_fu_58824_p3 = esl_concat<79,1>(p_Val2_4594_reg_96083.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6490_fu_59302_p1() {
    tmp_6490_fu_59302_p1 = esl_zext<32,6>(p_Val2_7236_reg_96057.read());
}

void particlemaster_ReadCalculations::thread_tmp_6491_fu_58873_p3() {
    tmp_6491_fu_58873_p3 = esl_concat<76,25>(tmp_7378_reg_96104.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6492_fu_58884_p1() {
    tmp_6492_fu_58884_p1 = esl_zext<102,96>(p_Val2_4598_fu_58864_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6493_fu_58907_p1() {
    tmp_6493_fu_58907_p1 = esl_zext<103,102>(p_Val2_4599_reg_96109.read());
}

void particlemaster_ReadCalculations::thread_tmp_6494_fu_58910_p3() {
    tmp_6494_fu_58910_p3 = esl_concat<89,6>(p_Val2_4600_reg_96124.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6495_fu_59306_p1() {
    tmp_6495_fu_59306_p1 = esl_zext<32,6>(p_Val2_7237_reg_96098.read());
}

void particlemaster_ReadCalculations::thread_tmp_6497_fu_58964_p3() {
    tmp_6497_fu_58964_p3 = esl_concat<86,34>(tmp_6496_reg_96141.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6498_fu_58975_p1() {
    tmp_6498_fu_58975_p1 = esl_zext<121,110>(p_Val2_4605_fu_58957_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6499_fu_58997_p1() {
    tmp_6499_fu_58997_p1 = esl_zext<122,121>(p_Val2_4606_reg_96146.read());
}

void particlemaster_ReadCalculations::thread_tmp_6500_fu_59000_p3() {
    tmp_6500_fu_59000_p3 = esl_concat<98,11>(p_Val2_4607_reg_96161.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6501_fu_59282_p1() {
    tmp_6501_fu_59282_p1 = esl_zext<32,6>(p_Val2_7238_reg_96135.read());
}

void particlemaster_ReadCalculations::thread_tmp_6502_cast_fu_12801_p1() {
    tmp_6502_cast_fu_12801_p1 = esl_zext<36,20>(tmp_3469_reg_76141.read());
}

void particlemaster_ReadCalculations::thread_tmp_6503_fu_59054_p3() {
    tmp_6503_fu_59054_p3 = esl_concat<81,44>(tmp_6502_reg_96178.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6504_fu_59065_p1() {
    tmp_6504_fu_59065_p1 = esl_zext<126,110>(p_Val2_4611_fu_59047_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6505_fu_59087_p1() {
    tmp_6505_fu_59087_p1 = esl_zext<127,126>(p_Val2_4612_reg_96183.read());
}

void particlemaster_ReadCalculations::thread_tmp_6506_fu_59090_p3() {
    tmp_6506_fu_59090_p3 = esl_concat<93,16>(p_Val2_4613_reg_96198.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6507_fu_59286_p1() {
    tmp_6507_fu_59286_p1 = esl_zext<32,6>(p_Val2_7239_reg_96172.read());
}

void particlemaster_ReadCalculations::thread_tmp_6509_cast_fu_12866_p1() {
    tmp_6509_cast_fu_12866_p1 = esl_zext<52,51>(tmp_3475_fu_12855_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6509_fu_59144_p3() {
    tmp_6509_fu_59144_p3 = esl_concat<76,54>(tmp_6508_reg_96215.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6510_fu_59155_p1() {
    tmp_6510_fu_59155_p1 = esl_zext<131,110>(p_Val2_4618_fu_59137_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6511_cast_fu_12870_p1() {
    tmp_6511_cast_fu_12870_p1 = esl_zext<44,36>(tmp_3474_reg_76172.read());
}

void particlemaster_ReadCalculations::thread_tmp_6511_fu_59177_p1() {
    tmp_6511_fu_59177_p1 = esl_zext<132,131>(p_Val2_4619_reg_96220.read());
}

void particlemaster_ReadCalculations::thread_tmp_6512_fu_59180_p3() {
    tmp_6512_fu_59180_p3 = esl_concat<88,21>(p_Val2_4621_reg_96235.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6513_fu_59290_p1() {
    tmp_6513_fu_59290_p1 = esl_zext<32,6>(p_Val2_7240_reg_96209.read());
}

void particlemaster_ReadCalculations::thread_tmp_6515_fu_59234_p3() {
    tmp_6515_fu_59234_p3 = esl_concat<71,64>(tmp_6514_reg_96252.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6516_fu_59245_p1() {
    tmp_6516_fu_59245_p1 = esl_zext<136,110>(p_Val2_4628_fu_59227_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6517_fu_59314_p1() {
    tmp_6517_fu_59314_p1 = esl_zext<137,136>(p_Val2_4629_reg_96257.read());
}

void particlemaster_ReadCalculations::thread_tmp_6518_fu_59317_p3() {
    tmp_6518_fu_59317_p3 = esl_concat<83,26>(p_Val2_4630_reg_96297.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6519_cast_fu_12928_p1() {
    tmp_6519_cast_fu_12928_p1 = esl_zext<108,100>(p_Val2_2481_reg_76197.read());
}

void particlemaster_ReadCalculations::thread_tmp_6519_fu_59294_p1() {
    tmp_6519_fu_59294_p1 = esl_zext<32,6>(p_Val2_7241_reg_96246.read());
}

void particlemaster_ReadCalculations::thread_tmp_6524_fu_59450_p3() {
    tmp_6524_fu_59450_p3 = esl_concat<72,45>(tmp_6520_reg_96332.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6526_fu_59480_p3() {
    tmp_6526_fu_59480_p3 = esl_concat<90,30>(p_Val2_4580_reg_96363.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6527_fu_59491_p1() {
    tmp_6527_fu_59491_p1 = esl_zext<122,121>(p_Val2_8254_cast_fu_59447_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6528_fu_59512_p1() {
    tmp_6528_fu_59512_p1 = esl_zext<123,122>(p_Val2_4636_reg_96384.read());
}

void particlemaster_ReadCalculations::thread_tmp_6529_fu_59515_p1() {
    tmp_6529_fu_59515_p1 = esl_zext<123,121>(p_Val2_4635_fu_59509_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6530_fu_59519_p1() {
    tmp_6530_fu_59519_p1 = esl_sext<120,73>(tmp_6525_reg_96378.read());
}

void particlemaster_ReadCalculations::thread_tmp_6533_fu_59593_p3() {
    tmp_6533_fu_59593_p3 = esl_concat<77,52>(tmp_6532_reg_96409.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6534_fu_59603_p3() {
    tmp_6534_fu_59603_p3 = esl_concat<1,18>(tmp_7381_reg_96424.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6536_cast_fu_24157_p1() {
    tmp_6536_cast_fu_24157_p1 = esl_zext<12,11>(loc_V_71_reg_80693.read());
}

void particlemaster_ReadCalculations::thread_tmp_6536_fu_59626_p2() {
    tmp_6536_fu_59626_p2 = (!tmp_7383_fu_59623_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7383_fu_59623_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6537_fu_59686_p1() {
    tmp_6537_fu_59686_p1 = esl_sext<72,71>(p_Val2_6818_reg_96414.read());
}

void particlemaster_ReadCalculations::thread_tmp_6538_fu_59689_p1() {
    tmp_6538_fu_59689_p1 = esl_sext<72,71>(p_Val2_4643_reg_96463.read());
}

void particlemaster_ReadCalculations::thread_tmp_6539_fu_59844_p1() {
    tmp_6539_fu_59844_p1 = esl_zext<32,8>(m_diff_hi_V_68_reg_96468.read());
}

void particlemaster_ReadCalculations::thread_tmp_6540_fu_29224_p1() {
    tmp_6540_fu_29224_p1 = grp_fu_29218_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6541_fu_29245_p1() {
    tmp_6541_fu_29245_p1 = p_Val2_2923_reg_83230.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6542_fu_59742_p1() {
    tmp_6542_fu_59742_p1 = esl_zext<32,8>(Z4_ind_V_68_fu_59732_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6543_fu_59752_p1() {
    tmp_6543_fu_59752_p1 = esl_zext<36,35>(p_Val2_6820_reg_96485.read());
}

void particlemaster_ReadCalculations::thread_tmp_6544_fu_29248_p3() {
    tmp_6544_fu_29248_p3 = p_Val2_2923_reg_83230.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6545_cast_fu_13817_p1() {
    tmp_6545_cast_fu_13817_p1 = esl_zext<12,11>(loc_V_84_reg_76254.read());
}

void particlemaster_ReadCalculations::thread_tmp_6545_fu_59755_p1() {
    tmp_6545_fu_59755_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6546_fu_59747_p1() {
    tmp_6546_fu_59747_p1 = esl_zext<32,8>(p_Val2_6822_fu_59718_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6547_fu_59765_p4() {
    tmp_6547_fu_59765_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6822_reg_96480.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6549_fu_59801_p1() {
    tmp_6549_fu_59801_p1 = esl_zext<44,43>(tmp_6547_reg_96506.read());
}

void particlemaster_ReadCalculations::thread_tmp_6550_fu_59797_p1() {
    tmp_6550_fu_59797_p1 = esl_zext<32,8>(p_Val2_6825_reg_96473.read());
}

void particlemaster_ReadCalculations::thread_tmp_6552_fu_59822_p4() {
    tmp_6552_fu_59822_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6825_reg_96473.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6554_fu_59858_p5() {
    tmp_6554_fu_59858_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6825_reg_96473.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6555_fu_29422_p1() {
    tmp_6555_fu_29422_p1 = p_Val2_2935_fu_29416_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6558_fu_59914_p1() {
    tmp_6558_fu_59914_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6559_fu_59924_p3() {
    tmp_6559_fu_59924_p3 = esl_concat<59,49>(p_Val2_4654_reg_96572.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6560_fu_59958_p4() {
    tmp_6560_fu_59958_p4 = p_Val2_4657_fu_59934_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6561_fu_59968_p3() {
    tmp_6561_fu_59968_p3 = esl_concat<57,1>(tmp_6560_fu_59958_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6562_fu_59636_p2() {
    tmp_6562_fu_59636_p2 = (!tmp_12368_cast_fu_59632_p1.read().is_01() || !p_Val2_4638_fu_59586_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12368_cast_fu_59632_p1.read() != p_Val2_4638_fu_59586_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6563_fu_70383_p2() {
    tmp_6563_fu_70383_p2 = (!p_0415_0_i67_reg_101047.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i67_reg_101047.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6564_fu_60016_p2() {
    tmp_6564_fu_60016_p2 = (!p_0415_0_i68_reg_96587.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i68_reg_96587.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6565_fu_71058_p1() {
    tmp_6565_fu_71058_p1 = tmp_27367_neg_reg_101283.read();
}

void particlemaster_ReadCalculations::thread_tmp_6566_fu_70443_p4() {
    tmp_6566_fu_70443_p4 = p_Val2_4410_reg_100081.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_6567_fu_70452_p3() {
    tmp_6567_fu_70452_p3 = esl_concat<77,52>(tmp_6566_fu_70443_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6568_fu_70480_p3() {
    tmp_6568_fu_70480_p3 = esl_concat<1,18>(tmp_7391_fu_70469_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6570_fu_70504_p2() {
    tmp_6570_fu_70504_p2 = (!tmp_7393_fu_70501_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7393_fu_70501_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6571_cast_fu_23602_p1() {
    tmp_6571_cast_fu_23602_p1 = esl_zext<77,75>(tmp_3502_fu_23594_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6571_fu_70573_p1() {
    tmp_6571_fu_70573_p1 = esl_sext<72,71>(p_Val2_6954_fu_70564_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6572_fu_70577_p1() {
    tmp_6572_fu_70577_p1 = esl_sext<72,71>(p_Val2_4666_reg_101115.read());
}

void particlemaster_ReadCalculations::thread_tmp_6573_fu_70732_p1() {
    tmp_6573_fu_70732_p1 = esl_zext<32,8>(m_diff_hi_V_69_reg_101120.read());
}

void particlemaster_ReadCalculations::thread_tmp_6574_fu_70630_p1() {
    tmp_6574_fu_70630_p1 = esl_zext<32,8>(Z4_ind_V_69_fu_70620_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6575_fu_70640_p1() {
    tmp_6575_fu_70640_p1 = esl_zext<36,35>(p_Val2_6848_reg_101137.read());
}

void particlemaster_ReadCalculations::thread_tmp_6576_fu_70643_p1() {
    tmp_6576_fu_70643_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6577_fu_70635_p1() {
    tmp_6577_fu_70635_p1 = esl_zext<32,8>(p_Val2_6956_fu_70606_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6578_fu_70653_p4() {
    tmp_6578_fu_70653_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6956_reg_101132.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6580_cast_fu_23685_p1() {
    tmp_6580_cast_fu_23685_p1 = esl_zext<82,81>(tmp_3511_fu_23678_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6580_fu_70689_p1() {
    tmp_6580_fu_70689_p1 = esl_zext<44,43>(tmp_6578_reg_101158.read());
}

void particlemaster_ReadCalculations::thread_tmp_6581_fu_70685_p1() {
    tmp_6581_fu_70685_p1 = esl_zext<32,8>(p_Val2_6958_reg_101125.read());
}

void particlemaster_ReadCalculations::thread_tmp_6583_fu_70710_p4() {
    tmp_6583_fu_70710_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6958_reg_101125.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6584_cast_fu_23721_p1() {
    tmp_6584_cast_fu_23721_p1 = esl_zext<83,80>(tmp_3514_fu_23714_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6585_fu_70746_p5() {
    tmp_6585_fu_70746_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6958_reg_101125.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6588_fu_70802_p1() {
    tmp_6588_fu_70802_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6589_cast_fu_23770_p1() {
    tmp_6589_cast_fu_23770_p1 = esl_zext<102,101>(tmp_3516_fu_23763_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6589_fu_70812_p3() {
    tmp_6589_fu_70812_p3 = esl_concat<59,49>(p_Val2_4675_reg_101224.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6590_fu_70514_p2() {
    tmp_6590_fu_70514_p2 = (!tmp_12617_cast_fu_70510_p1.read().is_01() || !p_Val2_4661_fu_70436_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12617_cast_fu_70510_p1.read() != p_Val2_4661_fu_70436_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6591_fu_70873_p2() {
    tmp_6591_fu_70873_p2 = (!p_0415_0_i69_fu_70852_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i69_fu_70852_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6592_fu_70879_p4() {
    tmp_6592_fu_70879_p4 = p_Val2_4677_reg_101234.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_6593_cast_fu_23807_p1() {
    tmp_6593_cast_fu_23807_p1 = esl_zext<103,95>(tmp_3519_fu_23800_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6593_fu_70888_p4() {
    tmp_6593_fu_70888_p4 = p_Val2_4677_reg_101234.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6594_fu_71018_p2() {
    tmp_6594_fu_71018_p2 = (sel_tmp502_fu_71013_p2.read() | sel_tmp499_fu_70994_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6595_fu_71032_p2() {
    tmp_6595_fu_71032_p2 = (tmp_6594_fu_71018_p2.read() | sel_tmp497_fu_70990_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6596_fu_29436_p1() {
    tmp_6596_fu_29436_p1 = p_Val2_2935_fu_29416_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6597_fu_30104_p1() {
    tmp_6597_fu_30104_p1 = p_Val2_2968_fu_30098_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6599_cast_fu_23861_p1() {
    tmp_6599_cast_fu_23861_p1 = esl_zext<121,120>(tmp_3523_fu_23854_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6603_cast_fu_23897_p1() {
    tmp_6603_cast_fu_23897_p1 = esl_zext<122,109>(tmp_3526_fu_23890_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6603_fu_71107_p2() {
    tmp_6603_fu_71107_p2 = (!b_exp_154_fu_71101_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_154_fu_71101_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_6604_fu_71113_p2() {
    tmp_6604_fu_71113_p2 = (!loc_V_134_reg_101321.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_134_reg_101321.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6605_fu_71092_p2() {
    tmp_6605_fu_71092_p2 = (!loc_V_133_fu_71078_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_133_fu_71078_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_6606_fu_71118_p2() {
    tmp_6606_fu_71118_p2 = (!loc_V_134_reg_101321.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_134_reg_101321.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6607_fu_71123_p2() {
    tmp_6607_fu_71123_p2 = (tmp_6605_reg_101329.read() & tmp_6606_fu_71118_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6608_fu_71128_p2() {
    tmp_6608_fu_71128_p2 = (!loc_V_133_reg_101315.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_133_reg_101315.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6609_cast_fu_23951_p1() {
    tmp_6609_cast_fu_23951_p1 = esl_zext<126,125>(tmp_3529_fu_23944_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6609_fu_71153_p2() {
    tmp_6609_fu_71153_p2 = (tmp_6605_reg_101329.read() & tmp_6604_reg_101350.read());
}

void particlemaster_ReadCalculations::thread_tmp_6610_fu_60691_p1() {
    tmp_6610_fu_60691_p1 = tmp_27372_neg_reg_96823.read();
}

void particlemaster_ReadCalculations::thread_tmp_6611_fu_60076_p4() {
    tmp_6611_fu_60076_p4 = p_Val2_4491_reg_95621.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_6612_fu_60085_p3() {
    tmp_6612_fu_60085_p3 = esl_concat<77,52>(tmp_6611_fu_60076_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6613_cast_fu_23987_p1() {
    tmp_6613_cast_fu_23987_p1 = esl_zext<127,109>(tmp_3532_fu_23980_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6613_fu_60113_p3() {
    tmp_6613_fu_60113_p3 = esl_concat<1,18>(tmp_7401_fu_60102_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6615_fu_60137_p2() {
    tmp_6615_fu_60137_p2 = (!tmp_7403_fu_60134_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7403_fu_60134_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6616_fu_60206_p1() {
    tmp_6616_fu_60206_p1 = esl_sext<72,71>(p_Val2_6976_fu_60197_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6617_fu_60210_p1() {
    tmp_6617_fu_60210_p1 = esl_sext<72,71>(p_Val2_4684_reg_96655.read());
}

void particlemaster_ReadCalculations::thread_tmp_6618_fu_60365_p1() {
    tmp_6618_fu_60365_p1 = esl_zext<32,8>(m_diff_hi_V_70_reg_96660.read());
}

void particlemaster_ReadCalculations::thread_tmp_6619_cast_fu_24041_p1() {
    tmp_6619_cast_fu_24041_p1 = esl_zext<131,130>(tmp_3535_fu_24034_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6619_fu_60263_p1() {
    tmp_6619_fu_60263_p1 = esl_zext<32,8>(Z4_ind_V_70_fu_60253_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6620_fu_60273_p1() {
    tmp_6620_fu_60273_p1 = esl_zext<36,35>(p_Val2_6880_reg_96677.read());
}

void particlemaster_ReadCalculations::thread_tmp_6621_fu_60276_p1() {
    tmp_6621_fu_60276_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6622_fu_60268_p1() {
    tmp_6622_fu_60268_p1 = esl_zext<32,8>(p_Val2_6978_fu_60239_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6623_cast_fu_24077_p1() {
    tmp_6623_cast_fu_24077_p1 = esl_zext<132,109>(tmp_3538_fu_24070_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6623_fu_60286_p4() {
    tmp_6623_fu_60286_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6978_reg_96672.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6625_fu_60322_p1() {
    tmp_6625_fu_60322_p1 = esl_zext<44,43>(tmp_6623_reg_96698.read());
}

void particlemaster_ReadCalculations::thread_tmp_6626_fu_60318_p1() {
    tmp_6626_fu_60318_p1 = esl_zext<32,8>(p_Val2_6980_reg_96665.read());
}

void particlemaster_ReadCalculations::thread_tmp_6629_cast_fu_24131_p1() {
    tmp_6629_cast_fu_24131_p1 = esl_zext<136,135>(tmp_3541_fu_24124_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6629_fu_30236_p3() {
    tmp_6629_fu_30236_p3 = r_V_413_reg_83647.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_6630_fu_30217_p1() {
    tmp_6630_fu_30217_p1 = grp_fu_72861_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6631_fu_60343_p4() {
    tmp_6631_fu_60343_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6980_reg_96665.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6633_cast_fu_24251_p1() {
    tmp_6633_cast_fu_24251_p1 = esl_zext<137,109>(tmp_3544_fu_24244_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6633_fu_60379_p5() {
    tmp_6633_fu_60379_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6980_reg_96665.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6636_fu_60435_p1() {
    tmp_6636_fu_60435_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6637_fu_60445_p3() {
    tmp_6637_fu_60445_p3 = esl_concat<59,49>(p_Val2_4693_reg_96764.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6638_fu_60147_p2() {
    tmp_6638_fu_60147_p2 = (!tmp_12652_cast_fu_60143_p1.read().is_01() || !p_Val2_4679_fu_60069_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12652_cast_fu_60143_p1.read() != p_Val2_4679_fu_60069_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6639_fu_60506_p2() {
    tmp_6639_fu_60506_p2 = (!p_0415_0_i70_fu_60485_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i70_fu_60485_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6640_fu_60512_p4() {
    tmp_6640_fu_60512_p4 = p_Val2_4695_reg_96774.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_6641_cast_fu_24384_p1() {
    tmp_6641_cast_fu_24384_p1 = esl_zext<118,117>(tmp_3549_fu_24377_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6641_fu_60521_p4() {
    tmp_6641_fu_60521_p4 = p_Val2_4695_reg_96774.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6642_cast_fu_24388_p1() {
    tmp_6642_cast_fu_24388_p1 = esl_zext<118,79>(tmp_3548_reg_81140.read());
}

void particlemaster_ReadCalculations::thread_tmp_6642_fu_60651_p2() {
    tmp_6642_fu_60651_p2 = (sel_tmp515_fu_60646_p2.read() | sel_tmp512_fu_60627_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6643_fu_60665_p2() {
    tmp_6643_fu_60665_p2 = (tmp_6642_fu_60651_p2.read() | sel_tmp510_fu_60623_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6646_cast_fu_24414_p1() {
    tmp_6646_cast_fu_24414_p1 = esl_sext<122,120>(tmp_3551_fu_24407_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6646_fu_30611_p4() {
    tmp_6646_fu_30611_p4 = p_0415_0_i44_fu_30606_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_6651_fu_60734_p2() {
    tmp_6651_fu_60734_p2 = (!b_exp_155_fu_60728_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_155_fu_60728_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_6652_fu_60740_p2() {
    tmp_6652_fu_60740_p2 = (!loc_V_147_reg_96862.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_147_reg_96862.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6653_fu_60745_p2() {
    tmp_6653_fu_60745_p2 = (!loc_V_146_reg_96855.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_146_reg_96855.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_6654_fu_60750_p2() {
    tmp_6654_fu_60750_p2 = (!loc_V_147_reg_96862.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_147_reg_96862.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6655_fu_60755_p2() {
    tmp_6655_fu_60755_p2 = (tmp_6653_fu_60745_p2.read() & tmp_6654_fu_60750_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6656_fu_60761_p2() {
    tmp_6656_fu_60761_p2 = (!loc_V_146_reg_96855.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_146_reg_96855.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6657_fu_60786_p2() {
    tmp_6657_fu_60786_p2 = (tmp_6653_reg_96891.read() & tmp_6652_reg_96885.read());
}

void particlemaster_ReadCalculations::thread_tmp_6658_fu_71157_p3() {
    tmp_6658_fu_71157_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6607_reg_101356.read());
}

void particlemaster_ReadCalculations::thread_tmp_6659_fu_60790_p3() {
    tmp_6659_fu_60790_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6655_reg_96896.read());
}

void particlemaster_ReadCalculations::thread_tmp_6660_fu_71184_p3() {
    tmp_6660_fu_71184_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6609_fu_71153_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6661_fu_71192_p2() {
    tmp_6661_fu_71192_p2 = (!tmp_6660_fu_71184_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6660_fu_71184_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6662_fu_60817_p3() {
    tmp_6662_fu_60817_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6657_fu_60786_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_6663_cast_fu_13262_p1() {
    tmp_6663_cast_fu_13262_p1 = esl_zext<77,75>(tmp_3612_fu_13254_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6663_fu_60825_p2() {
    tmp_6663_fu_60825_p2 = (!tmp_6662_fu_60817_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6662_fu_60817_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6664_fu_71198_p3() {
    tmp_6664_fu_71198_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6608_reg_101361.read());
}

void particlemaster_ReadCalculations::thread_tmp_6665_fu_71205_p2() {
    tmp_6665_fu_71205_p2 = (!tmp_6664_fu_71198_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6664_fu_71198_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6666_fu_60831_p3() {
    tmp_6666_fu_60831_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_6656_reg_96901.read());
}

void particlemaster_ReadCalculations::thread_tmp_6667_fu_60838_p2() {
    tmp_6667_fu_60838_p2 = (!tmp_6666_fu_60831_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6666_fu_60831_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_6668_fu_71239_p1() {
    tmp_6668_fu_71239_p1 = esl_zext<32,6>(index0_V_61_fu_71218_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6669_fu_71324_p4() {
    tmp_6669_fu_71324_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7412_reg_101428.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6670_fu_71333_p1() {
    tmp_6670_fu_71333_p1 = esl_zext<76,75>(sf61_fu_71315_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6671_fu_71345_p3() {
    tmp_6671_fu_71345_p3 = esl_concat<50,25>(tmp_7413_fu_71305_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6672_cast_fu_13345_p1() {
    tmp_6672_cast_fu_13345_p1 = esl_zext<82,81>(tmp_3618_fu_13338_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6672_fu_71357_p1() {
    tmp_6672_fu_71357_p1 = esl_zext<77,76>(p_Val2_4701_fu_71337_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6673_fu_71380_p1() {
    tmp_6673_fu_71380_p1 = esl_zext<78,77>(p_Val2_4702_reg_101441.read());
}

void particlemaster_ReadCalculations::thread_tmp_6674_fu_71383_p1() {
    tmp_6674_fu_71383_p1 = esl_zext<78,75>(p_Val2_4703_reg_101456.read());
}

void particlemaster_ReadCalculations::thread_tmp_6675_fu_71933_p1() {
    tmp_6675_fu_71933_p1 = esl_zext<32,4>(p_Val2_7200_reg_101435.read());
}

void particlemaster_ReadCalculations::thread_tmp_6676_cast_fu_13381_p1() {
    tmp_6676_cast_fu_13381_p1 = esl_zext<83,80>(tmp_3623_fu_13374_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6677_fu_71429_p3() {
    tmp_6677_fu_71429_p3 = esl_concat<67,14>(tmp_6676_reg_101473.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6678_fu_71440_p1() {
    tmp_6678_fu_71440_p1 = esl_zext<82,81>(p_Val2_4707_fu_71422_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6679_fu_71462_p1() {
    tmp_6679_fu_71462_p1 = esl_zext<83,82>(p_Val2_4708_reg_101478.read());
}

void particlemaster_ReadCalculations::thread_tmp_6680_fu_71465_p3() {
    tmp_6680_fu_71465_p3 = esl_concat<79,1>(p_Val2_4709_reg_101493.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6681_cast_fu_13430_p1() {
    tmp_6681_cast_fu_13430_p1 = esl_zext<102,101>(tmp_3625_fu_13423_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6681_fu_71937_p1() {
    tmp_6681_fu_71937_p1 = esl_zext<32,6>(p_Val2_7201_reg_101467.read());
}

void particlemaster_ReadCalculations::thread_tmp_6682_fu_71514_p3() {
    tmp_6682_fu_71514_p3 = esl_concat<76,25>(tmp_7417_reg_101514.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6683_fu_71525_p1() {
    tmp_6683_fu_71525_p1 = esl_zext<102,96>(p_Val2_4712_fu_71505_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6684_fu_71548_p1() {
    tmp_6684_fu_71548_p1 = esl_zext<103,102>(p_Val2_4713_reg_101519.read());
}

void particlemaster_ReadCalculations::thread_tmp_6685_cast_fu_13467_p1() {
    tmp_6685_cast_fu_13467_p1 = esl_zext<103,95>(tmp_3628_fu_13460_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6685_fu_30730_p3() {
    tmp_6685_fu_30730_p3 = p_Val2_2969_reg_83617.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_6686_fu_30658_p1() {
    tmp_6686_fu_30658_p1 = p_0415_0_i44_fu_30606_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6687_fu_71551_p3() {
    tmp_6687_fu_71551_p3 = esl_concat<89,6>(p_Val2_4714_reg_101534.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6688_fu_71941_p1() {
    tmp_6688_fu_71941_p1 = esl_zext<32,6>(p_Val2_7202_reg_101508.read());
}

void particlemaster_ReadCalculations::thread_tmp_6690_fu_71605_p3() {
    tmp_6690_fu_71605_p3 = esl_concat<86,34>(tmp_6689_reg_101551.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6691_cast_fu_13521_p1() {
    tmp_6691_cast_fu_13521_p1 = esl_zext<121,120>(tmp_3631_fu_13514_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6691_fu_71616_p1() {
    tmp_6691_fu_71616_p1 = esl_zext<121,110>(p_Val2_4719_fu_71598_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6692_fu_71638_p1() {
    tmp_6692_fu_71638_p1 = esl_zext<122,121>(p_Val2_4720_reg_101556.read());
}

void particlemaster_ReadCalculations::thread_tmp_6693_fu_71641_p3() {
    tmp_6693_fu_71641_p3 = esl_concat<98,11>(p_Val2_4721_reg_101571.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6694_fu_71917_p1() {
    tmp_6694_fu_71917_p1 = esl_zext<32,6>(p_Val2_7203_reg_101545.read());
}

void particlemaster_ReadCalculations::thread_tmp_6695_cast_fu_13557_p1() {
    tmp_6695_cast_fu_13557_p1 = esl_zext<122,109>(tmp_3634_fu_13550_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6696_fu_71695_p3() {
    tmp_6696_fu_71695_p3 = esl_concat<81,44>(tmp_6695_reg_101588.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6697_fu_71706_p1() {
    tmp_6697_fu_71706_p1 = esl_zext<126,110>(p_Val2_4725_fu_71688_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6698_fu_71728_p1() {
    tmp_6698_fu_71728_p1 = esl_zext<127,126>(p_Val2_4726_reg_101593.read());
}

void particlemaster_ReadCalculations::thread_tmp_6699_fu_71731_p3() {
    tmp_6699_fu_71731_p3 = esl_concat<93,16>(p_Val2_4727_reg_101608.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6700_fu_71921_p1() {
    tmp_6700_fu_71921_p1 = esl_zext<32,6>(p_Val2_7204_reg_101582.read());
}

void particlemaster_ReadCalculations::thread_tmp_6701_cast_fu_13611_p1() {
    tmp_6701_cast_fu_13611_p1 = esl_zext<126,125>(tmp_3637_fu_13604_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6702_fu_71785_p3() {
    tmp_6702_fu_71785_p3 = esl_concat<76,54>(tmp_6701_reg_101625.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6703_fu_71796_p1() {
    tmp_6703_fu_71796_p1 = esl_zext<131,110>(p_Val2_4731_fu_71778_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6704_fu_71818_p1() {
    tmp_6704_fu_71818_p1 = esl_zext<132,131>(p_Val2_4732_reg_101630.read());
}

void particlemaster_ReadCalculations::thread_tmp_6705_cast_fu_13647_p1() {
    tmp_6705_cast_fu_13647_p1 = esl_zext<127,109>(tmp_3640_fu_13640_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6705_fu_71821_p3() {
    tmp_6705_fu_71821_p3 = esl_concat<88,21>(p_Val2_4733_reg_101645.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6706_fu_71925_p1() {
    tmp_6706_fu_71925_p1 = esl_zext<32,6>(p_Val2_7205_reg_101619.read());
}

void particlemaster_ReadCalculations::thread_tmp_6708_fu_71875_p3() {
    tmp_6708_fu_71875_p3 = esl_concat<71,64>(tmp_6707_reg_101662.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6709_fu_71886_p1() {
    tmp_6709_fu_71886_p1 = esl_zext<136,110>(p_Val2_4737_fu_71868_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6710_fu_71949_p1() {
    tmp_6710_fu_71949_p1 = esl_zext<137,136>(p_Val2_4738_reg_101667.read());
}

void particlemaster_ReadCalculations::thread_tmp_6711_cast_fu_13701_p1() {
    tmp_6711_cast_fu_13701_p1 = esl_zext<131,130>(tmp_3643_fu_13694_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6711_fu_71952_p3() {
    tmp_6711_fu_71952_p3 = esl_concat<83,26>(p_Val2_4739_reg_101702.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6712_fu_71929_p1() {
    tmp_6712_fu_71929_p1 = esl_zext<32,6>(p_Val2_7206_reg_101656.read());
}

void particlemaster_ReadCalculations::thread_tmp_6715_cast_fu_13737_p1() {
    tmp_6715_cast_fu_13737_p1 = esl_zext<132,109>(tmp_3646_fu_13730_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6716_fu_72085_p3() {
    tmp_6716_fu_72085_p3 = esl_concat<72,45>(tmp_6713_reg_101737.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6718_fu_72115_p3() {
    tmp_6718_fu_72115_p3 = esl_concat<90,30>(p_Val2_4697_reg_101768.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6719_fu_72126_p1() {
    tmp_6719_fu_72126_p1 = esl_zext<122,121>(p_Val2_8584_cast_fu_72082_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6720_fu_72147_p1() {
    tmp_6720_fu_72147_p1 = esl_zext<123,122>(p_Val2_4747_reg_101789.read());
}

void particlemaster_ReadCalculations::thread_tmp_6721_cast_fu_13791_p1() {
    tmp_6721_cast_fu_13791_p1 = esl_zext<136,135>(tmp_3649_fu_13784_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6721_fu_72150_p1() {
    tmp_6721_fu_72150_p1 = esl_zext<123,121>(p_Val2_4746_fu_72144_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6722_fu_72154_p1() {
    tmp_6722_fu_72154_p1 = esl_sext<120,73>(tmp_6717_reg_101783.read());
}

void particlemaster_ReadCalculations::thread_tmp_6725_cast_fu_13901_p1() {
    tmp_6725_cast_fu_13901_p1 = esl_zext<137,109>(tmp_3652_fu_13894_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6725_fu_72228_p3() {
    tmp_6725_fu_72228_p3 = esl_concat<77,52>(tmp_6724_reg_101814.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6726_fu_72238_p3() {
    tmp_6726_fu_72238_p3 = esl_concat<1,18>(tmp_7420_reg_101829.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6728_fu_72261_p2() {
    tmp_6728_fu_72261_p2 = (!tmp_7422_fu_72258_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7422_fu_72258_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6729_fu_72321_p1() {
    tmp_6729_fu_72321_p1 = esl_sext<72,71>(p_Val2_6906_reg_101819.read());
}

void particlemaster_ReadCalculations::thread_tmp_6730_fu_72324_p1() {
    tmp_6730_fu_72324_p1 = esl_sext<72,71>(p_Val2_4757_reg_101868.read());
}

void particlemaster_ReadCalculations::thread_tmp_6731_fu_72479_p1() {
    tmp_6731_fu_72479_p1 = esl_zext<32,8>(m_diff_hi_V_71_reg_101873.read());
}

void particlemaster_ReadCalculations::thread_tmp_6732_fu_72377_p1() {
    tmp_6732_fu_72377_p1 = esl_zext<32,8>(Z4_ind_V_71_fu_72367_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6733_cast_fu_14034_p1() {
    tmp_6733_cast_fu_14034_p1 = esl_zext<118,117>(tmp_3657_fu_14027_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6733_fu_72387_p1() {
    tmp_6733_fu_72387_p1 = esl_zext<36,35>(p_Val2_6908_reg_101890.read());
}

void particlemaster_ReadCalculations::thread_tmp_6734_cast_fu_14038_p1() {
    tmp_6734_cast_fu_14038_p1 = esl_zext<118,79>(tmp_3656_reg_76698.read());
}

void particlemaster_ReadCalculations::thread_tmp_6734_fu_72390_p1() {
    tmp_6734_fu_72390_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6735_fu_72382_p1() {
    tmp_6735_fu_72382_p1 = esl_zext<32,8>(p_Val2_6910_fu_72353_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6736_fu_72400_p4() {
    tmp_6736_fu_72400_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6910_reg_101885.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6738_cast_fu_14064_p1() {
    tmp_6738_cast_fu_14064_p1 = esl_sext<122,120>(tmp_3659_fu_14057_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6738_fu_72436_p1() {
    tmp_6738_fu_72436_p1 = esl_zext<44,43>(tmp_6736_reg_101911.read());
}

void particlemaster_ReadCalculations::thread_tmp_6739_fu_72432_p1() {
    tmp_6739_fu_72432_p1 = esl_zext<32,8>(p_Val2_6913_reg_101878.read());
}

void particlemaster_ReadCalculations::thread_tmp_6741_fu_72457_p4() {
    tmp_6741_fu_72457_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6913_reg_101878.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6743_fu_72493_p5() {
    tmp_6743_fu_72493_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6913_reg_101878.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6746_fu_72549_p1() {
    tmp_6746_fu_72549_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6747_fu_72559_p3() {
    tmp_6747_fu_72559_p3 = esl_concat<59,49>(p_Val2_4768_reg_101977.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6749_fu_72593_p4() {
    tmp_6749_fu_72593_p4 = p_Val2_4770_fu_72569_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6750_fu_72603_p3() {
    tmp_6750_fu_72603_p3 = esl_concat<57,1>(tmp_6749_fu_72593_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6751_fu_72271_p2() {
    tmp_6751_fu_72271_p2 = (!tmp_12925_cast_fu_72267_p1.read().is_01() || !p_Val2_4750_fu_72221_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12925_cast_fu_72267_p1.read() != p_Val2_4750_fu_72221_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6753_fu_60872_p1() {
    tmp_6753_fu_60872_p1 = esl_zext<32,6>(index0_V_62_fu_60851_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6754_fu_60957_p4() {
    tmp_6754_fu_60957_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7427_reg_96968.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_6755_fu_60966_p1() {
    tmp_6755_fu_60966_p1 = esl_zext<76,75>(sf62_fu_60948_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6756_fu_60978_p3() {
    tmp_6756_fu_60978_p3 = esl_concat<50,25>(tmp_7428_fu_60938_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6757_fu_60990_p1() {
    tmp_6757_fu_60990_p1 = esl_zext<77,76>(p_Val2_4780_fu_60970_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6758_fu_61013_p1() {
    tmp_6758_fu_61013_p1 = esl_zext<78,77>(p_Val2_4782_reg_96981.read());
}

void particlemaster_ReadCalculations::thread_tmp_6759_fu_61016_p1() {
    tmp_6759_fu_61016_p1 = esl_zext<78,75>(p_Val2_4783_reg_96996.read());
}

void particlemaster_ReadCalculations::thread_tmp_6760_fu_61566_p1() {
    tmp_6760_fu_61566_p1 = esl_zext<32,4>(p_Val2_7242_reg_96975.read());
}

void particlemaster_ReadCalculations::thread_tmp_6762_fu_61062_p3() {
    tmp_6762_fu_61062_p3 = esl_concat<67,14>(tmp_6761_reg_97013.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_6763_fu_61073_p1() {
    tmp_6763_fu_61073_p1 = esl_zext<82,81>(p_Val2_4787_fu_61055_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6764_fu_61095_p1() {
    tmp_6764_fu_61095_p1 = esl_zext<83,82>(p_Val2_4788_reg_97018.read());
}

void particlemaster_ReadCalculations::thread_tmp_6765_cast_fu_24738_p1() {
    tmp_6765_cast_fu_24738_p1 = esl_zext<36,20>(tmp_3570_reg_81316.read());
}

void particlemaster_ReadCalculations::thread_tmp_6765_fu_61098_p3() {
    tmp_6765_fu_61098_p3 = esl_concat<79,1>(p_Val2_4789_reg_97033.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6766_fu_61570_p1() {
    tmp_6766_fu_61570_p1 = esl_zext<32,6>(p_Val2_7243_reg_97007.read());
}

void particlemaster_ReadCalculations::thread_tmp_6767_fu_61147_p3() {
    tmp_6767_fu_61147_p3 = esl_concat<76,25>(tmp_7432_reg_97054.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_6769_fu_61158_p1() {
    tmp_6769_fu_61158_p1 = esl_zext<102,96>(p_Val2_4793_fu_61138_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6770_fu_61181_p1() {
    tmp_6770_fu_61181_p1 = esl_zext<103,102>(p_Val2_4794_reg_97059.read());
}

void particlemaster_ReadCalculations::thread_tmp_6771_fu_61184_p3() {
    tmp_6771_fu_61184_p3 = esl_concat<89,6>(p_Val2_4795_reg_97074.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_6772_cast_fu_24803_p1() {
    tmp_6772_cast_fu_24803_p1 = esl_zext<52,51>(tmp_3576_fu_24792_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6772_fu_61574_p1() {
    tmp_6772_fu_61574_p1 = esl_zext<32,6>(p_Val2_7244_reg_97048.read());
}

void particlemaster_ReadCalculations::thread_tmp_6774_cast_fu_24807_p1() {
    tmp_6774_cast_fu_24807_p1 = esl_zext<44,36>(tmp_3575_reg_81347.read());
}

void particlemaster_ReadCalculations::thread_tmp_6774_fu_61238_p3() {
    tmp_6774_fu_61238_p3 = esl_concat<86,34>(tmp_6773_reg_97091.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_6775_fu_61249_p1() {
    tmp_6775_fu_61249_p1 = esl_zext<121,110>(p_Val2_4802_fu_61231_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6776_fu_61271_p1() {
    tmp_6776_fu_61271_p1 = esl_zext<122,121>(p_Val2_4803_reg_97096.read());
}

void particlemaster_ReadCalculations::thread_tmp_6777_fu_61274_p3() {
    tmp_6777_fu_61274_p3 = esl_concat<98,11>(p_Val2_4804_reg_97111.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_6778_fu_61550_p1() {
    tmp_6778_fu_61550_p1 = esl_zext<32,6>(p_Val2_7245_reg_97085.read());
}

void particlemaster_ReadCalculations::thread_tmp_6780_fu_61328_p3() {
    tmp_6780_fu_61328_p3 = esl_concat<81,44>(tmp_6779_reg_97128.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_6781_fu_61339_p1() {
    tmp_6781_fu_61339_p1 = esl_zext<126,110>(p_Val2_4808_fu_61321_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6782_cast_fu_24918_p1() {
    tmp_6782_cast_fu_24918_p1 = esl_zext<108,100>(p_Val2_2549_reg_81372.read());
}

void particlemaster_ReadCalculations::thread_tmp_6782_fu_61361_p1() {
    tmp_6782_fu_61361_p1 = esl_zext<127,126>(p_Val2_4809_reg_97133.read());
}

void particlemaster_ReadCalculations::thread_tmp_6783_fu_61364_p3() {
    tmp_6783_fu_61364_p3 = esl_concat<93,16>(p_Val2_4810_reg_97148.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_6784_fu_61554_p1() {
    tmp_6784_fu_61554_p1 = esl_zext<32,6>(p_Val2_7246_reg_97122.read());
}

void particlemaster_ReadCalculations::thread_tmp_6786_fu_61418_p3() {
    tmp_6786_fu_61418_p3 = esl_concat<76,54>(tmp_6785_reg_97165.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_6787_fu_61429_p1() {
    tmp_6787_fu_61429_p1 = esl_zext<131,110>(p_Val2_4815_fu_61411_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6788_fu_61451_p1() {
    tmp_6788_fu_61451_p1 = esl_zext<132,131>(p_Val2_4817_reg_97170.read());
}

void particlemaster_ReadCalculations::thread_tmp_6789_fu_61454_p3() {
    tmp_6789_fu_61454_p3 = esl_concat<88,21>(p_Val2_4818_reg_97185.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_6790_fu_61558_p1() {
    tmp_6790_fu_61558_p1 = esl_zext<32,6>(p_Val2_7247_reg_97159.read());
}

void particlemaster_ReadCalculations::thread_tmp_6792_fu_61508_p3() {
    tmp_6792_fu_61508_p3 = esl_concat<71,64>(tmp_6791_reg_97202.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_6793_fu_61519_p1() {
    tmp_6793_fu_61519_p1 = esl_zext<136,110>(p_Val2_4823_fu_61501_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6794_fu_41467_p1() {
    tmp_6794_fu_41467_p1 = grp_fu_41461_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6795_fu_61582_p1() {
    tmp_6795_fu_61582_p1 = esl_zext<137,136>(p_Val2_4824_reg_97207.read());
}

void particlemaster_ReadCalculations::thread_tmp_6796_fu_61585_p3() {
    tmp_6796_fu_61585_p3 = esl_concat<83,26>(p_Val2_4825_reg_97242.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_6797_fu_61562_p1() {
    tmp_6797_fu_61562_p1 = esl_zext<32,6>(p_Val2_7248_reg_97196.read());
}

void particlemaster_ReadCalculations::thread_tmp_6798_fu_41488_p1() {
    tmp_6798_fu_41488_p1 = p_Val2_2989_reg_88603.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6800_cast_fu_14388_p1() {
    tmp_6800_cast_fu_14388_p1 = esl_zext<36,20>(tmp_3679_reg_76874.read());
}

void particlemaster_ReadCalculations::thread_tmp_6802_fu_61718_p3() {
    tmp_6802_fu_61718_p3 = esl_concat<72,45>(tmp_6799_reg_97277.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_6804_fu_61748_p3() {
    tmp_6804_fu_61748_p3 = esl_concat<90,30>(p_Val2_4776_reg_97308.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_6805_fu_61759_p1() {
    tmp_6805_fu_61759_p1 = esl_zext<122,121>(p_Val2_8664_cast_fu_61715_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6806_fu_61780_p1() {
    tmp_6806_fu_61780_p1 = esl_zext<123,122>(p_Val2_4835_reg_97329.read());
}

void particlemaster_ReadCalculations::thread_tmp_6807_cast_fu_14453_p1() {
    tmp_6807_cast_fu_14453_p1 = esl_zext<52,51>(tmp_3685_fu_14442_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_6807_fu_61783_p1() {
    tmp_6807_fu_61783_p1 = esl_zext<123,121>(p_Val2_4830_fu_61777_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_6808_fu_61787_p1() {
    tmp_6808_fu_61787_p1 = esl_sext<120,73>(tmp_6803_reg_97323.read());
}

void particlemaster_ReadCalculations::thread_tmp_6809_cast_fu_14457_p1() {
    tmp_6809_cast_fu_14457_p1 = esl_zext<44,36>(tmp_3684_reg_76905.read());
}

void particlemaster_ReadCalculations::thread_tmp_6811_fu_61861_p3() {
    tmp_6811_fu_61861_p3 = esl_concat<77,52>(tmp_6810_reg_97354.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_6812_fu_61871_p3() {
    tmp_6812_fu_61871_p3 = esl_concat<1,18>(tmp_7435_reg_97369.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_6814_fu_61894_p2() {
    tmp_6814_fu_61894_p2 = (!tmp_7437_fu_61891_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7437_fu_61891_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_6815_fu_61954_p1() {
    tmp_6815_fu_61954_p1 = esl_sext<72,71>(p_Val2_6926_reg_97359.read());
}

void particlemaster_ReadCalculations::thread_tmp_6816_fu_61957_p1() {
    tmp_6816_fu_61957_p1 = esl_sext<72,71>(p_Val2_4842_reg_97408.read());
}

void particlemaster_ReadCalculations::thread_tmp_6817_cast_fu_14590_p1() {
    tmp_6817_cast_fu_14590_p1 = esl_zext<108,100>(p_Val2_2615_reg_76930.read());
}

void particlemaster_ReadCalculations::thread_tmp_6817_fu_62112_p1() {
    tmp_6817_fu_62112_p1 = esl_zext<32,8>(m_diff_hi_V_72_reg_97413.read());
}

void particlemaster_ReadCalculations::thread_tmp_6818_fu_62010_p1() {
    tmp_6818_fu_62010_p1 = esl_zext<32,8>(Z4_ind_V_72_fu_62000_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6819_fu_62020_p1() {
    tmp_6819_fu_62020_p1 = esl_zext<36,35>(p_Val2_6928_reg_97430.read());
}

void particlemaster_ReadCalculations::thread_tmp_6820_fu_62023_p1() {
    tmp_6820_fu_62023_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6821_fu_62015_p1() {
    tmp_6821_fu_62015_p1 = esl_zext<32,8>(p_Val2_6930_fu_61986_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_6822_fu_62033_p4() {
    tmp_6822_fu_62033_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6930_reg_97425.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_6824_fu_41491_p3() {
    tmp_6824_fu_41491_p3 = p_Val2_2989_reg_88603.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_6825_fu_41665_p1() {
    tmp_6825_fu_41665_p1 = p_Val2_3001_fu_41659_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6826_fu_62069_p1() {
    tmp_6826_fu_62069_p1 = esl_zext<44,43>(tmp_6822_reg_97451.read());
}

void particlemaster_ReadCalculations::thread_tmp_6827_fu_62065_p1() {
    tmp_6827_fu_62065_p1 = esl_zext<32,8>(p_Val2_6933_reg_97418.read());
}

void particlemaster_ReadCalculations::thread_tmp_6829_fu_62090_p4() {
    tmp_6829_fu_62090_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6933_reg_97418.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_6831_fu_62126_p5() {
    tmp_6831_fu_62126_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6933_reg_97418.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_6834_fu_62182_p1() {
    tmp_6834_fu_62182_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_6835_fu_62192_p3() {
    tmp_6835_fu_62192_p3 = esl_concat<59,49>(p_Val2_4854_reg_97517.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_6836_fu_62226_p4() {
    tmp_6836_fu_62226_p4 = p_Val2_4856_fu_62202_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_6837_fu_62236_p3() {
    tmp_6837_fu_62236_p3 = esl_concat<57,1>(tmp_6836_fu_62226_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_6838_fu_61904_p2() {
    tmp_6838_fu_61904_p2 = (!tmp_12960_cast_fu_61900_p1.read().is_01() || !p_Val2_4837_fu_61854_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_12960_cast_fu_61900_p1.read() != p_Val2_4837_fu_61854_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6839_fu_41679_p1() {
    tmp_6839_fu_41679_p1 = p_Val2_3001_fu_41659_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6840_fu_72651_p2() {
    tmp_6840_fu_72651_p2 = (!p_0415_0_i71_reg_101992.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i71_reg_101992.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6841_fu_42325_p1() {
    tmp_6841_fu_42325_p1 = p_Val2_3034_fu_42319_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6842_fu_62284_p2() {
    tmp_6842_fu_62284_p2 = (!p_0415_0_i72_reg_97532.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i72_reg_97532.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_6843_fu_72707_p1() {
    tmp_6843_fu_72707_p1 = tmp_28671_neg_reg_102009.read();
}

void particlemaster_ReadCalculations::thread_tmp_6848_fu_62353_p1() {
    tmp_6848_fu_62353_p1 = tmp_29323_neg_fu_62347_p2.read();
}

void particlemaster_ReadCalculations::thread_tmp_6849_fu_62340_p1() {
    tmp_6849_fu_62340_p1 = tmp_28676_neg_reg_97549.read();
}

void particlemaster_ReadCalculations::thread_tmp_6853_cast_fu_25425_p1() {
    tmp_6853_cast_fu_25425_p1 = esl_zext<77,75>(tmp_3713_fu_25417_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6862_cast_fu_25508_p1() {
    tmp_6862_cast_fu_25508_p1 = esl_zext<82,81>(tmp_3722_fu_25501_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6866_cast_fu_25544_p1() {
    tmp_6866_cast_fu_25544_p1 = esl_zext<83,80>(tmp_3725_fu_25537_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6871_cast_fu_25593_p1() {
    tmp_6871_cast_fu_25593_p1 = esl_zext<102,101>(tmp_3727_fu_25586_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6875_cast_fu_25630_p1() {
    tmp_6875_cast_fu_25630_p1 = esl_zext<103,95>(tmp_3731_fu_25623_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6880_fu_42329_p1() {
    tmp_6880_fu_42329_p1 = p_Val2_3034_fu_42319_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6881_cast_fu_25684_p1() {
    tmp_6881_cast_fu_25684_p1 = esl_zext<121,120>(tmp_3734_fu_25677_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6885_cast_fu_25720_p1() {
    tmp_6885_cast_fu_25720_p1 = esl_zext<122,109>(tmp_3737_fu_25713_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6891_cast_fu_25774_p1() {
    tmp_6891_cast_fu_25774_p1 = esl_zext<126,125>(tmp_3740_fu_25767_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6895_cast_fu_25810_p1() {
    tmp_6895_cast_fu_25810_p1 = esl_zext<127,109>(tmp_3743_fu_25803_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6901_cast_fu_25864_p1() {
    tmp_6901_cast_fu_25864_p1 = esl_zext<131,130>(tmp_3746_fu_25857_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6905_cast_fu_25900_p1() {
    tmp_6905_cast_fu_25900_p1 = esl_zext<132,109>(tmp_3749_fu_25893_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6911_cast_fu_25954_p1() {
    tmp_6911_cast_fu_25954_p1 = esl_zext<136,135>(tmp_3752_fu_25947_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6911_fu_42466_p3() {
    tmp_6911_fu_42466_p3 = r_V_416_reg_89020.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_6913_fu_42447_p1() {
    tmp_6913_fu_42447_p1 = grp_fu_72941_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6915_cast_fu_26037_p1() {
    tmp_6915_cast_fu_26037_p1 = esl_zext<137,109>(tmp_3755_fu_26030_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6917_fu_42774_p3() {
    tmp_6917_fu_42774_p3 = p_Val2_3052_fu_42758_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_6923_cast_fu_26170_p1() {
    tmp_6923_cast_fu_26170_p1 = esl_zext<118,117>(tmp_3760_fu_26163_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6924_cast_fu_26174_p1() {
    tmp_6924_cast_fu_26174_p1 = esl_zext<118,79>(tmp_3759_reg_81923.read());
}

void particlemaster_ReadCalculations::thread_tmp_6928_cast_fu_26200_p1() {
    tmp_6928_cast_fu_26200_p1 = esl_sext<122,120>(tmp_3762_fu_26193_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6947_cast_fu_15075_p1() {
    tmp_6947_cast_fu_15075_p1 = esl_zext<77,75>(tmp_3799_fu_15067_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6956_cast_fu_15158_p1() {
    tmp_6956_cast_fu_15158_p1 = esl_zext<82,81>(tmp_3806_fu_15151_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6960_cast_fu_15194_p1() {
    tmp_6960_cast_fu_15194_p1 = esl_zext<83,80>(tmp_3809_fu_15187_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6965_cast_fu_15243_p1() {
    tmp_6965_cast_fu_15243_p1 = esl_zext<102,101>(tmp_3811_fu_15236_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6969_cast_fu_15280_p1() {
    tmp_6969_cast_fu_15280_p1 = esl_zext<103,95>(tmp_3814_fu_15273_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6969_fu_31112_p1() {
    tmp_6969_fu_31112_p1 = grp_fu_31106_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6970_fu_31133_p1() {
    tmp_6970_fu_31133_p1 = p_Val2_3056_reg_84138.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_6975_cast_fu_15334_p1() {
    tmp_6975_cast_fu_15334_p1 = esl_zext<121,120>(tmp_3817_fu_15327_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6979_cast_fu_15370_p1() {
    tmp_6979_cast_fu_15370_p1 = esl_zext<122,109>(tmp_3822_fu_15363_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6985_cast_fu_15424_p1() {
    tmp_6985_cast_fu_15424_p1 = esl_zext<126,125>(tmp_3826_fu_15417_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6989_cast_fu_15460_p1() {
    tmp_6989_cast_fu_15460_p1 = esl_zext<127,109>(tmp_3829_fu_15453_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6995_cast_fu_15514_p1() {
    tmp_6995_cast_fu_15514_p1 = esl_zext<131,130>(tmp_3832_fu_15507_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_6999_cast_fu_15550_p1() {
    tmp_6999_cast_fu_15550_p1 = esl_zext<132,109>(tmp_3835_fu_15543_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7000_fu_31136_p3() {
    tmp_7000_fu_31136_p3 = p_Val2_3056_reg_84138.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7003_fu_31310_p1() {
    tmp_7003_fu_31310_p1 = p_Val2_3068_fu_31304_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7005_cast_fu_15604_p1() {
    tmp_7005_cast_fu_15604_p1 = esl_zext<136,135>(tmp_3839_fu_15597_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7009_cast_fu_15687_p1() {
    tmp_7009_cast_fu_15687_p1 = esl_zext<137,109>(tmp_3842_fu_15680_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7016_fu_31324_p1() {
    tmp_7016_fu_31324_p1 = p_Val2_3068_fu_31304_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7017_cast_fu_15820_p1() {
    tmp_7017_cast_fu_15820_p1 = esl_zext<118,117>(tmp_3847_fu_15813_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7017_fu_31970_p1() {
    tmp_7017_fu_31970_p1 = p_Val2_3101_fu_31964_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7018_cast_fu_15824_p1() {
    tmp_7018_cast_fu_15824_p1 = esl_zext<118,79>(tmp_3846_reg_77461.read());
}

void particlemaster_ReadCalculations::thread_tmp_7018_fu_31974_p1() {
    tmp_7018_fu_31974_p1 = p_Val2_3101_fu_31964_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7020_fu_32111_p3() {
    tmp_7020_fu_32111_p3 = r_V_436_reg_84555.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7021_fu_32092_p1() {
    tmp_7021_fu_32092_p1 = grp_fu_72871_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7022_cast_fu_15850_p1() {
    tmp_7022_cast_fu_15850_p1 = esl_sext<122,120>(tmp_3849_fu_15843_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7023_fu_32419_p3() {
    tmp_7023_fu_32419_p3 = p_Val2_3119_fu_32403_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_7025_fu_42873_p3() {
    tmp_7025_fu_42873_p3 = p_Val2_3035_reg_88990.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7026_fu_32518_p3() {
    tmp_7026_fu_32518_p3 = p_Val2_3102_reg_84525.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7027_fu_42854_p1() {
    tmp_7027_fu_42854_p1 = p_0415_0_i45_reg_89178.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7028_fu_32499_p1() {
    tmp_7028_fu_32499_p1 = p_0415_0_i46_reg_84713.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7032_fu_42986_p1() {
    tmp_7032_fu_42986_p1 = grp_fu_42980_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7033_fu_43007_p1() {
    tmp_7033_fu_43007_p1 = p_Val2_3124_reg_89274.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7034_fu_43010_p3() {
    tmp_7034_fu_43010_p3 = p_Val2_3124_reg_89274.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7035_fu_43184_p1() {
    tmp_7035_fu_43184_p1 = p_Val2_3136_fu_43178_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7037_cast_fu_26345_p1() {
    tmp_7037_cast_fu_26345_p1 = esl_sext<130,129>(tmp_3769_fu_26306_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7037_fu_43198_p1() {
    tmp_7037_fu_43198_p1 = p_Val2_3136_fu_43178_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7038_fu_43876_p1() {
    tmp_7038_fu_43876_p1 = p_Val2_3169_fu_43870_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7040_fu_44008_p3() {
    tmp_7040_fu_44008_p3 = r_V_419_reg_89702.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7041_fu_43989_p1() {
    tmp_7041_fu_43989_p1 = grp_fu_72951_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7044_fu_44396_p4() {
    tmp_7044_fu_44396_p4 = p_0415_0_i47_fu_44391_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_7045_fu_44522_p3() {
    tmp_7045_fu_44522_p3 = p_Val2_3170_reg_89672.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7046_fu_44443_p1() {
    tmp_7046_fu_44443_p1 = p_0415_0_i47_fu_44391_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7050_fu_32631_p1() {
    tmp_7050_fu_32631_p1 = grp_fu_32625_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7051_cast_fu_26517_p1() {
    tmp_7051_cast_fu_26517_p1 = esl_zext<36,20>(tmp_3781_reg_82071.read());
}

void particlemaster_ReadCalculations::thread_tmp_7051_fu_32652_p1() {
    tmp_7051_fu_32652_p1 = p_Val2_3190_reg_84809.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7052_fu_32655_p3() {
    tmp_7052_fu_32655_p3 = p_Val2_3190_reg_84809.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7053_fu_32829_p1() {
    tmp_7053_fu_32829_p1 = p_Val2_3202_fu_32823_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7055_fu_32843_p1() {
    tmp_7055_fu_32843_p1 = p_Val2_3202_fu_32823_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7056_fu_33521_p1() {
    tmp_7056_fu_33521_p1 = p_Val2_3239_fu_33515_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7058_cast_fu_26582_p1() {
    tmp_7058_cast_fu_26582_p1 = esl_zext<52,51>(tmp_3787_fu_26571_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_7058_fu_33653_p3() {
    tmp_7058_fu_33653_p3 = r_V_439_reg_85237.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7059_fu_33634_p1() {
    tmp_7059_fu_33634_p1 = grp_fu_72881_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7060_cast_fu_26586_p1() {
    tmp_7060_cast_fu_26586_p1 = esl_zext<44,36>(tmp_3786_reg_82102.read());
}

void particlemaster_ReadCalculations::thread_tmp_7062_fu_34041_p4() {
    tmp_7062_fu_34041_p4 = p_0415_0_i48_fu_34036_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_7063_fu_34167_p3() {
    tmp_7063_fu_34167_p3 = p_Val2_3241_reg_85207.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7064_fu_34088_p1() {
    tmp_7064_fu_34088_p1 = p_0415_0_i48_fu_34036_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7066_fu_44743_p1() {
    tmp_7066_fu_44743_p1 = grp_fu_44737_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7067_fu_44764_p1() {
    tmp_7067_fu_44764_p1 = p_Val2_3264_reg_90015.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7068_cast_fu_26644_p1() {
    tmp_7068_cast_fu_26644_p1 = esl_zext<108,100>(p_Val2_2680_reg_82127.read());
}

void particlemaster_ReadCalculations::thread_tmp_7068_fu_44767_p3() {
    tmp_7068_fu_44767_p3 = p_Val2_3264_reg_90015.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7069_fu_44941_p1() {
    tmp_7069_fu_44941_p1 = p_Val2_3276_fu_44935_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7071_fu_44955_p1() {
    tmp_7071_fu_44955_p1 = p_Val2_3276_fu_44935_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7072_cast_fu_15995_p1() {
    tmp_7072_cast_fu_15995_p1 = esl_sext<130,129>(tmp_3856_fu_15956_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_7073_fu_45715_p3() {
    tmp_7073_fu_45715_p3 = r_V_422_reg_90424.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7074_fu_45698_p1() {
    tmp_7074_fu_45698_p1 = grp_fu_72961_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7076_fu_46023_p3() {
    tmp_7076_fu_46023_p3 = p_Val2_3331_fu_46007_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_7079_fu_34388_p1() {
    tmp_7079_fu_34388_p1 = grp_fu_34382_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7080_fu_34409_p1() {
    tmp_7080_fu_34409_p1 = p_Val2_3335_reg_85547.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7081_fu_34412_p3() {
    tmp_7081_fu_34412_p3 = p_Val2_3335_reg_85547.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7082_fu_34586_p1() {
    tmp_7082_fu_34586_p1 = p_Val2_3348_fu_34580_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7084_fu_34600_p1() {
    tmp_7084_fu_34600_p1 = p_Val2_3348_fu_34580_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7086_cast_fu_16167_p1() {
    tmp_7086_cast_fu_16167_p1 = esl_zext<36,20>(tmp_3868_reg_77609.read());
}

void particlemaster_ReadCalculations::thread_tmp_7086_fu_35360_p3() {
    tmp_7086_fu_35360_p3 = r_V_442_reg_85956.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7087_fu_35343_p1() {
    tmp_7087_fu_35343_p1 = grp_fu_72891_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7089_fu_35668_p3() {
    tmp_7089_fu_35668_p3 = p_Val2_3404_fu_35652_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_7091_fu_46128_p3() {
    tmp_7091_fu_46128_p3 = p_Val2_3314_reg_90398.read().range(130, 130);
}

void particlemaster_ReadCalculations::thread_tmp_7092_fu_35773_p3() {
    tmp_7092_fu_35773_p3 = p_Val2_3388_reg_85930.read().range(130, 130);
}

void particlemaster_ReadCalculations::thread_tmp_7093_cast_fu_16232_p1() {
    tmp_7093_cast_fu_16232_p1 = esl_zext<52,51>(tmp_3874_fu_16221_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_7093_fu_46103_p1() {
    tmp_7093_fu_46103_p1 = p_0415_0_i49_reg_90582.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7094_fu_35748_p1() {
    tmp_7094_fu_35748_p1 = p_0415_0_i50_reg_86114.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7095_cast_fu_16236_p1() {
    tmp_7095_cast_fu_16236_p1 = esl_zext<44,36>(tmp_3873_reg_77640.read());
}

void particlemaster_ReadCalculations::thread_tmp_7098_fu_46282_p1() {
    tmp_7098_fu_46282_p1 = grp_fu_46276_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7099_fu_46303_p1() {
    tmp_7099_fu_46303_p1 = p_Val2_3409_reg_90713.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7100_fu_46306_p3() {
    tmp_7100_fu_46306_p3 = p_Val2_3409_reg_90713.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7101_fu_46480_p1() {
    tmp_7101_fu_46480_p1 = p_Val2_3421_fu_46474_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7103_cast_fu_16294_p1() {
    tmp_7103_cast_fu_16294_p1 = esl_zext<108,100>(p_Val2_2747_reg_77665.read());
}

void particlemaster_ReadCalculations::thread_tmp_7103_fu_46494_p1() {
    tmp_7103_fu_46494_p1 = p_Val2_3421_fu_46474_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7104_fu_47162_p1() {
    tmp_7104_fu_47162_p1 = p_Val2_3456_fu_47156_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7106_fu_47310_p3() {
    tmp_7106_fu_47310_p3 = r_V_425_reg_91162.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7107_fu_47293_p1() {
    tmp_7107_fu_47293_p1 = grp_fu_72971_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7110_fu_47739_p4() {
    tmp_7110_fu_47739_p4 = p_0415_0_i51_fu_47734_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_7112_fu_47791_p1() {
    tmp_7112_fu_47791_p1 = p_0415_0_i51_fu_47734_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7116_fu_35908_p1() {
    tmp_7116_fu_35908_p1 = grp_fu_35902_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7117_fu_35929_p1() {
    tmp_7117_fu_35929_p1 = p_Val2_3482_reg_86233.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7118_fu_35932_p3() {
    tmp_7118_fu_35932_p3 = p_Val2_3482_reg_86233.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7119_fu_36106_p1() {
    tmp_7119_fu_36106_p1 = p_Val2_3496_fu_36100_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7121_fu_36120_p1() {
    tmp_7121_fu_36120_p1 = p_Val2_3496_fu_36100_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7122_fu_36793_p1() {
    tmp_7122_fu_36793_p1 = p_Val2_3536_fu_36787_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7124_fu_36941_p3() {
    tmp_7124_fu_36941_p3 = r_V_445_reg_86688.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7125_fu_36924_p1() {
    tmp_7125_fu_36924_p1 = grp_fu_72901_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7128_fu_37382_p4() {
    tmp_7128_fu_37382_p4 = p_0415_0_i52_fu_37377_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_7130_fu_37434_p1() {
    tmp_7130_fu_37434_p1 = p_0415_0_i52_fu_37377_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7132_fu_48081_p1() {
    tmp_7132_fu_48081_p1 = grp_fu_48075_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7133_fu_48102_p1() {
    tmp_7133_fu_48102_p1 = p_Val2_3562_reg_91488.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7134_fu_48105_p3() {
    tmp_7134_fu_48105_p3 = p_Val2_3562_reg_91488.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7135_fu_48279_p1() {
    tmp_7135_fu_48279_p1 = p_Val2_3577_fu_48273_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7137_fu_48293_p1() {
    tmp_7137_fu_48293_p1 = p_Val2_3577_fu_48273_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7138_fu_48939_p1() {
    tmp_7138_fu_48939_p1 = p_Val2_3618_fu_48933_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7139_fu_48943_p1() {
    tmp_7139_fu_48943_p1 = p_Val2_3618_fu_48933_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7141_fu_49080_p3() {
    tmp_7141_fu_49080_p3 = r_V_428_reg_91905.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7142_fu_49061_p1() {
    tmp_7142_fu_49061_p1 = grp_fu_72981_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7144_fu_49388_p3() {
    tmp_7144_fu_49388_p3 = p_Val2_3638_fu_49372_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_7147_fu_37725_p1() {
    tmp_7147_fu_37725_p1 = grp_fu_37719_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7148_fu_37746_p1() {
    tmp_7148_fu_37746_p1 = p_Val2_3642_reg_87025.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7149_fu_37749_p3() {
    tmp_7149_fu_37749_p3 = p_Val2_3642_reg_87025.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_7150_fu_37923_p1() {
    tmp_7150_fu_37923_p1 = p_Val2_3657_fu_37917_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7152_fu_37937_p1() {
    tmp_7152_fu_37937_p1 = p_Val2_3657_fu_37917_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7153_fu_38583_p1() {
    tmp_7153_fu_38583_p1 = p_Val2_3692_fu_38577_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7154_fu_38587_p1() {
    tmp_7154_fu_38587_p1 = p_Val2_3692_fu_38577_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7156_fu_38724_p3() {
    tmp_7156_fu_38724_p3 = r_V_448_reg_87442.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7157_fu_38705_p1() {
    tmp_7157_fu_38705_p1 = grp_fu_72911_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7159_fu_39032_p3() {
    tmp_7159_fu_39032_p3 = p_Val2_3716_fu_39016_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_7161_fu_49487_p3() {
    tmp_7161_fu_49487_p3 = p_Val2_3619_reg_91875.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7162_fu_39131_p3() {
    tmp_7162_fu_39131_p3 = p_Val2_3693_reg_87412.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7163_fu_49468_p1() {
    tmp_7163_fu_49468_p1 = p_0415_0_i53_reg_92063.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7164_fu_39112_p1() {
    tmp_7164_fu_39112_p1 = p_0415_0_i54_reg_87600.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7165_fu_49540_p3() {
    tmp_7165_fu_49540_p3 = p_Val2_3458_reg_91100.read().range(119, 119);
}

void particlemaster_ReadCalculations::thread_tmp_7166_fu_49591_p3() {
    tmp_7166_fu_49591_p3 = r_V_430_reg_92096.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_7167_fu_49572_p1() {
    tmp_7167_fu_49572_p1 = grp_fu_72991_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_7170_fu_49928_p4() {
    tmp_7170_fu_49928_p4 = p_0415_0_i55_fu_49923_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_7171_fu_50046_p3() {
    tmp_7171_fu_50046_p3 = p_Val2_3458_reg_91100.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_7172_fu_49975_p1() {
    tmp_7172_fu_49975_p1 = p_0415_0_i55_fu_49923_p3.read().range(11-1, 0);
}

}

