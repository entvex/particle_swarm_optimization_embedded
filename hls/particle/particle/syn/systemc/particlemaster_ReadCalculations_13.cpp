#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_tmp_4756_fu_45373_p3() {
    tmp_4756_fu_45373_p3 = esl_concat<71,64>(tmp_4755_reg_90255.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4757_fu_45384_p1() {
    tmp_4757_fu_45384_p1 = esl_zext<136,110>(p_Val2_3305_fu_45366_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4758_fu_45394_p3() {
    tmp_4758_fu_45394_p3 = esl_concat<83,26>(p_Val2_3307_reg_90280.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4759_fu_45411_p1() {
    tmp_4759_fu_45411_p1 = esl_zext<32,6>(p_Val2_7101_reg_90249.read());
}

void particlemaster_ReadCalculations::thread_tmp_4763_fu_45544_p3() {
    tmp_4763_fu_45544_p3 = esl_concat<72,45>(tmp_4760_reg_90305.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4765_fu_45580_p3() {
    tmp_4765_fu_45580_p3 = esl_concat<90,30>(p_Val2_3262_reg_90366.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4768_fu_45678_p3() {
    tmp_4768_fu_45678_p3 = esl_concat<1,18>(tmp_7072_reg_90419.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4770_fu_45701_p2() {
    tmp_4770_fu_45701_p2 = (!tmp_7074_fu_45698_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7074_fu_45698_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4771_fu_45707_p1() {
    tmp_4771_fu_45707_p1 = esl_sext<131,129>(phitmp24_reg_90404.read());
}

void particlemaster_ReadCalculations::thread_tmp_4772_fu_45759_p1() {
    tmp_4772_fu_45759_p1 = esl_sext<72,71>(p_Val2_6158_reg_90409.read());
}

void particlemaster_ReadCalculations::thread_tmp_4773_fu_45762_p1() {
    tmp_4773_fu_45762_p1 = esl_sext<72,71>(p_Val2_3320_reg_90458.read());
}

void particlemaster_ReadCalculations::thread_tmp_4774_fu_45917_p1() {
    tmp_4774_fu_45917_p1 = esl_zext<32,8>(m_diff_hi_V_49_reg_90463.read());
}

void particlemaster_ReadCalculations::thread_tmp_4775_fu_45815_p1() {
    tmp_4775_fu_45815_p1 = esl_zext<32,8>(Z4_ind_V_49_fu_45805_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4776_fu_45825_p1() {
    tmp_4776_fu_45825_p1 = esl_zext<36,35>(p_Val2_6160_reg_90480.read());
}

void particlemaster_ReadCalculations::thread_tmp_4777_fu_45828_p1() {
    tmp_4777_fu_45828_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4778_fu_45820_p1() {
    tmp_4778_fu_45820_p1 = esl_zext<32,8>(p_Val2_6162_fu_45791_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4779_fu_45838_p4() {
    tmp_4779_fu_45838_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6162_reg_90475.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4781_fu_45874_p1() {
    tmp_4781_fu_45874_p1 = esl_zext<44,43>(tmp_4779_reg_90501.read());
}

void particlemaster_ReadCalculations::thread_tmp_4782_fu_45870_p1() {
    tmp_4782_fu_45870_p1 = esl_zext<32,8>(p_Val2_6165_reg_90468.read());
}

void particlemaster_ReadCalculations::thread_tmp_4784_fu_45895_p4() {
    tmp_4784_fu_45895_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6165_reg_90468.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4786_fu_11691_p3() {
    tmp_4786_fu_11691_p3 = p_Val2_2419_reg_75640.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4787_fu_45931_p5() {
    tmp_4787_fu_45931_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6165_reg_90468.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4790_fu_45987_p1() {
    tmp_4790_fu_45987_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4791_fu_45997_p3() {
    tmp_4791_fu_45997_p3 = esl_concat<59,49>(p_Val2_3329_reg_90567.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4792_fu_46031_p4() {
    tmp_4792_fu_46031_p4 = p_Val2_3331_fu_46007_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4793_fu_46041_p3() {
    tmp_4793_fu_46041_p3 = esl_concat<57,1>(tmp_4792_fu_46031_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4794_fu_45710_p2() {
    tmp_4794_fu_45710_p2 = (!tmp_4771_fu_45707_p1.read().is_01() || !p_Val2_3314_reg_90398.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_4771_fu_45707_p1.read() != p_Val2_3314_reg_90398.read());
}

void particlemaster_ReadCalculations::thread_tmp_4795_fu_34335_p1() {
    tmp_4795_fu_34335_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4796_fu_34428_p4() {
    tmp_4796_fu_34428_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7079_reg_85553.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4797_fu_34437_p1() {
    tmp_4797_fu_34437_p1 = esl_zext<76,75>(sf44_fu_34419_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4798_fu_34449_p3() {
    tmp_4798_fu_34449_p3 = esl_concat<50,25>(tmp_7080_fu_34409_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4799_fu_34461_p1() {
    tmp_4799_fu_34461_p1 = esl_zext<77,76>(p_Val2_3338_fu_34441_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4800_fu_34484_p1() {
    tmp_4800_fu_34484_p1 = esl_zext<78,77>(p_Val2_3339_reg_85566.read());
}

void particlemaster_ReadCalculations::thread_tmp_4801_fu_34487_p1() {
    tmp_4801_fu_34487_p1 = esl_zext<78,75>(p_Val2_3340_reg_85581.read());
}

void particlemaster_ReadCalculations::thread_tmp_4802_fu_35080_p1() {
    tmp_4802_fu_35080_p1 = esl_zext<32,4>(p_Val2_7137_reg_85560.read());
}

void particlemaster_ReadCalculations::thread_tmp_4804_fu_34533_p3() {
    tmp_4804_fu_34533_p3 = esl_concat<67,14>(tmp_4803_reg_85598.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4805_fu_34544_p1() {
    tmp_4805_fu_34544_p1 = esl_zext<82,81>(p_Val2_3344_fu_34526_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4806_fu_34566_p1() {
    tmp_4806_fu_34566_p1 = esl_zext<83,82>(p_Val2_3345_reg_85603.read());
}

void particlemaster_ReadCalculations::thread_tmp_4807_fu_34569_p3() {
    tmp_4807_fu_34569_p3 = esl_concat<79,1>(p_Val2_3346_reg_85618.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4808_fu_35084_p1() {
    tmp_4808_fu_35084_p1 = esl_zext<32,6>(p_Val2_7138_reg_85592.read());
}

void particlemaster_ReadCalculations::thread_tmp_4809_fu_34618_p3() {
    tmp_4809_fu_34618_p3 = esl_concat<76,25>(tmp_7084_reg_85639.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4810_fu_34629_p1() {
    tmp_4810_fu_34629_p1 = esl_zext<102,96>(p_Val2_3350_fu_34609_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4811_fu_34652_p1() {
    tmp_4811_fu_34652_p1 = esl_zext<103,102>(p_Val2_3351_reg_85644.read());
}

void particlemaster_ReadCalculations::thread_tmp_4812_fu_34655_p3() {
    tmp_4812_fu_34655_p3 = esl_concat<89,6>(p_Val2_3352_reg_85659.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4813_fu_35088_p1() {
    tmp_4813_fu_35088_p1 = esl_zext<32,6>(p_Val2_7139_reg_85633.read());
}

void particlemaster_ReadCalculations::thread_tmp_4814_fu_11865_p1() {
    tmp_4814_fu_11865_p1 = p_Val2_2431_fu_11859_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4816_fu_34709_p3() {
    tmp_4816_fu_34709_p3 = esl_concat<86,34>(tmp_4815_reg_85676.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4817_fu_34720_p1() {
    tmp_4817_fu_34720_p1 = esl_zext<121,110>(p_Val2_3356_fu_34702_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4818_fu_34742_p1() {
    tmp_4818_fu_34742_p1 = esl_zext<122,121>(p_Val2_3357_reg_85681.read());
}

void particlemaster_ReadCalculations::thread_tmp_4819_fu_34745_p3() {
    tmp_4819_fu_34745_p3 = esl_concat<98,11>(p_Val2_3358_reg_85696.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4820_fu_34999_p1() {
    tmp_4820_fu_34999_p1 = esl_zext<32,6>(p_Val2_7140_reg_85670.read());
}

void particlemaster_ReadCalculations::thread_tmp_4822_fu_34799_p3() {
    tmp_4822_fu_34799_p3 = esl_concat<81,44>(tmp_4821_reg_85713.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4823_fu_34810_p1() {
    tmp_4823_fu_34810_p1 = esl_zext<126,110>(p_Val2_3362_fu_34792_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4824_fu_34832_p1() {
    tmp_4824_fu_34832_p1 = esl_zext<127,126>(p_Val2_3363_reg_85718.read());
}

void particlemaster_ReadCalculations::thread_tmp_4825_fu_34835_p3() {
    tmp_4825_fu_34835_p3 = esl_concat<93,16>(p_Val2_3364_reg_85733.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4826_fu_35003_p1() {
    tmp_4826_fu_35003_p1 = esl_zext<32,6>(p_Val2_7141_reg_85707.read());
}

void particlemaster_ReadCalculations::thread_tmp_4828_fu_34889_p3() {
    tmp_4828_fu_34889_p3 = esl_concat<76,54>(tmp_4827_reg_85750.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4829_fu_34900_p1() {
    tmp_4829_fu_34900_p1 = esl_zext<131,110>(p_Val2_3368_fu_34882_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4830_fu_34922_p1() {
    tmp_4830_fu_34922_p1 = esl_zext<132,131>(p_Val2_3370_reg_85755.read());
}

void particlemaster_ReadCalculations::thread_tmp_4831_fu_34925_p3() {
    tmp_4831_fu_34925_p3 = esl_concat<88,21>(p_Val2_3371_reg_85770.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4832_fu_35007_p1() {
    tmp_4832_fu_35007_p1 = esl_zext<32,6>(p_Val2_7142_reg_85744.read());
}

void particlemaster_ReadCalculations::thread_tmp_4834_fu_35018_p3() {
    tmp_4834_fu_35018_p3 = esl_concat<71,64>(tmp_4833_reg_85787.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4835_fu_35029_p1() {
    tmp_4835_fu_35029_p1 = esl_zext<136,110>(p_Val2_3376_fu_35011_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4836_fu_35039_p3() {
    tmp_4836_fu_35039_p3 = esl_concat<83,26>(p_Val2_3379_reg_85812.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4837_fu_35056_p1() {
    tmp_4837_fu_35056_p1 = esl_zext<32,6>(p_Val2_7143_reg_85781.read());
}

void particlemaster_ReadCalculations::thread_tmp_4838_fu_11879_p1() {
    tmp_4838_fu_11879_p1 = p_Val2_2431_fu_11859_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4842_fu_12639_p3() {
    tmp_4842_fu_12639_p3 = r_V_399_reg_76049.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_4844_fu_35189_p3() {
    tmp_4844_fu_35189_p3 = esl_concat<72,45>(tmp_4840_reg_85837.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4846_fu_35225_p3() {
    tmp_4846_fu_35225_p3 = esl_concat<90,30>(p_Val2_3334_reg_85898.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4849_fu_35323_p3() {
    tmp_4849_fu_35323_p3 = esl_concat<1,18>(tmp_7085_reg_85951.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4851_fu_35346_p2() {
    tmp_4851_fu_35346_p2 = (!tmp_7087_fu_35343_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7087_fu_35343_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4852_fu_35352_p1() {
    tmp_4852_fu_35352_p1 = esl_sext<131,129>(phitmp26_reg_85936.read());
}

void particlemaster_ReadCalculations::thread_tmp_4853_fu_12622_p1() {
    tmp_4853_fu_12622_p1 = grp_fu_72741_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4854_fu_35404_p1() {
    tmp_4854_fu_35404_p1 = esl_sext<72,71>(p_Val2_6179_reg_85941.read());
}

void particlemaster_ReadCalculations::thread_tmp_4855_fu_35407_p1() {
    tmp_4855_fu_35407_p1 = esl_sext<72,71>(p_Val2_3393_reg_85990.read());
}

void particlemaster_ReadCalculations::thread_tmp_4856_fu_35562_p1() {
    tmp_4856_fu_35562_p1 = esl_zext<32,8>(m_diff_hi_V_50_reg_85995.read());
}

void particlemaster_ReadCalculations::thread_tmp_4857_fu_35460_p1() {
    tmp_4857_fu_35460_p1 = esl_zext<32,8>(Z4_ind_V_50_fu_35450_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4858_fu_35470_p1() {
    tmp_4858_fu_35470_p1 = esl_zext<36,35>(p_Val2_6181_reg_86012.read());
}

void particlemaster_ReadCalculations::thread_tmp_4859_fu_35473_p1() {
    tmp_4859_fu_35473_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4860_fu_35465_p1() {
    tmp_4860_fu_35465_p1 = esl_zext<32,8>(p_Val2_6183_fu_35436_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4861_fu_35483_p4() {
    tmp_4861_fu_35483_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6183_reg_86007.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4863_fu_35519_p1() {
    tmp_4863_fu_35519_p1 = esl_zext<44,43>(tmp_4861_reg_86033.read());
}

void particlemaster_ReadCalculations::thread_tmp_4864_fu_35515_p1() {
    tmp_4864_fu_35515_p1 = esl_zext<32,8>(p_Val2_6186_reg_86000.read());
}

void particlemaster_ReadCalculations::thread_tmp_4866_fu_35540_p4() {
    tmp_4866_fu_35540_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6186_reg_86000.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4868_fu_35576_p5() {
    tmp_4868_fu_35576_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6186_reg_86000.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4871_fu_35632_p1() {
    tmp_4871_fu_35632_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4872_fu_35642_p3() {
    tmp_4872_fu_35642_p3 = esl_concat<59,49>(p_Val2_3402_reg_86099.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4873_fu_35676_p4() {
    tmp_4873_fu_35676_p4 = p_Val2_3404_fu_35652_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4874_fu_35686_p3() {
    tmp_4874_fu_35686_p3 = esl_concat<57,1>(tmp_4873_fu_35676_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4875_fu_35355_p2() {
    tmp_4875_fu_35355_p2 = (!tmp_4852_fu_35352_p1.read().is_01() || !p_Val2_3388_reg_85930.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_4852_fu_35352_p1.read() != p_Val2_3388_reg_85930.read());
}

void particlemaster_ReadCalculations::thread_tmp_4876_fu_46089_p2() {
    tmp_4876_fu_46089_p2 = (!p_0415_0_i49_reg_90582.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i49_reg_90582.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4877_fu_35734_p2() {
    tmp_4877_fu_35734_p2 = (!p_0415_0_i50_reg_86114.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i50_reg_86114.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4879_fu_46915_p2() {
    tmp_4879_fu_46915_p2 = (!b_exp_114_fu_46909_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_114_fu_46909_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4880_fu_46221_p2() {
    tmp_4880_fu_46221_p2 = (!loc_V_103_reg_90635.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_103_reg_90635.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4881_fu_46226_p2() {
    tmp_4881_fu_46226_p2 = (!loc_V_102_reg_90629.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_102_reg_90629.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4882_fu_46231_p2() {
    tmp_4882_fu_46231_p2 = (!loc_V_103_reg_90635.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_103_reg_90635.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4883_fu_46236_p2() {
    tmp_4883_fu_46236_p2 = (tmp_4881_fu_46226_p2.read() & tmp_4882_fu_46231_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4884_fu_46175_p2() {
    tmp_4884_fu_46175_p2 = (!loc_V_102_fu_46161_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_102_fu_46161_p4.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4885_fu_47582_p2() {
    tmp_4885_fu_47582_p2 = (tmp_4881_reg_90688.read() & tmp_4880_reg_90682.read());
}

void particlemaster_ReadCalculations::thread_tmp_4886_fu_47632_p3() {
    tmp_4886_fu_47632_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4883_reg_90693.read());
}

void particlemaster_ReadCalculations::thread_tmp_4887_fu_47639_p2() {
    tmp_4887_fu_47639_p2 = (!tmp_4886_fu_47632_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4886_fu_47632_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4888_fu_47645_p3() {
    tmp_4888_fu_47645_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4885_reg_91306.read());
}

void particlemaster_ReadCalculations::thread_tmp_4889_fu_47652_p2() {
    tmp_4889_fu_47652_p2 = (!tmp_4888_fu_47645_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4888_fu_47645_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4890_fu_46204_p3() {
    tmp_4890_fu_46204_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4884_reg_90643.read());
}

void particlemaster_ReadCalculations::thread_tmp_4891_fu_46211_p2() {
    tmp_4891_fu_46211_p2 = (!tmp_4890_fu_46204_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4890_fu_46204_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4892_fu_46217_p1() {
    tmp_4892_fu_46217_p1 = esl_zext<32,6>(index0_V_45_reg_90655.read());
}

void particlemaster_ReadCalculations::thread_tmp_4893_fu_46322_p4() {
    tmp_4893_fu_46322_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7098_reg_90719.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4894_fu_46331_p1() {
    tmp_4894_fu_46331_p1 = esl_zext<76,75>(sf45_fu_46313_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4895_fu_46343_p3() {
    tmp_4895_fu_46343_p3 = esl_concat<50,25>(tmp_7099_fu_46303_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4896_fu_46355_p1() {
    tmp_4896_fu_46355_p1 = esl_zext<77,76>(p_Val2_3412_fu_46335_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4897_fu_46378_p1() {
    tmp_4897_fu_46378_p1 = esl_zext<78,77>(p_Val2_3413_reg_90732.read());
}

void particlemaster_ReadCalculations::thread_tmp_4898_fu_46381_p1() {
    tmp_4898_fu_46381_p1 = esl_zext<78,75>(p_Val2_3414_reg_90747.read());
}

void particlemaster_ReadCalculations::thread_tmp_4899_fu_46959_p1() {
    tmp_4899_fu_46959_p1 = esl_zext<32,4>(p_Val2_7102_reg_90726.read());
}

void particlemaster_ReadCalculations::thread_tmp_4901_fu_46427_p3() {
    tmp_4901_fu_46427_p3 = esl_concat<67,14>(tmp_4900_reg_90764.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4902_fu_46438_p1() {
    tmp_4902_fu_46438_p1 = esl_zext<82,81>(p_Val2_3418_fu_46420_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4903_fu_46460_p1() {
    tmp_4903_fu_46460_p1 = esl_zext<83,82>(p_Val2_3419_reg_90769.read());
}

void particlemaster_ReadCalculations::thread_tmp_4904_fu_46463_p3() {
    tmp_4904_fu_46463_p3 = esl_concat<79,1>(p_Val2_3420_reg_90784.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4905_fu_46963_p1() {
    tmp_4905_fu_46963_p1 = esl_zext<32,6>(p_Val2_7103_reg_90758.read());
}

void particlemaster_ReadCalculations::thread_tmp_4906_fu_46512_p3() {
    tmp_4906_fu_46512_p3 = esl_concat<76,25>(tmp_7103_reg_90805.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4907_fu_46523_p1() {
    tmp_4907_fu_46523_p1 = esl_zext<102,96>(p_Val2_3423_fu_46503_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4908_fu_46546_p1() {
    tmp_4908_fu_46546_p1 = esl_zext<103,102>(p_Val2_3424_reg_90810.read());
}

void particlemaster_ReadCalculations::thread_tmp_4909_fu_46549_p3() {
    tmp_4909_fu_46549_p3 = esl_concat<89,6>(p_Val2_3425_reg_90825.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4910_fu_46967_p1() {
    tmp_4910_fu_46967_p1 = esl_zext<32,6>(p_Val2_7104_reg_90799.read());
}

void particlemaster_ReadCalculations::thread_tmp_4912_fu_46603_p3() {
    tmp_4912_fu_46603_p3 = esl_concat<86,34>(tmp_4911_reg_90842.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4913_fu_46614_p1() {
    tmp_4913_fu_46614_p1 = esl_zext<121,110>(p_Val2_3429_fu_46596_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4914_fu_46636_p1() {
    tmp_4914_fu_46636_p1 = esl_zext<122,121>(p_Val2_3430_reg_90847.read());
}

void particlemaster_ReadCalculations::thread_tmp_4915_fu_46639_p3() {
    tmp_4915_fu_46639_p3 = esl_concat<98,11>(p_Val2_3431_reg_90862.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4916_fu_46943_p1() {
    tmp_4916_fu_46943_p1 = esl_zext<32,6>(p_Val2_7105_reg_90836.read());
}

void particlemaster_ReadCalculations::thread_tmp_4918_fu_12947_p3() {
    tmp_4918_fu_12947_p3 = p_Val2_2482_fu_12931_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_4919_fu_46693_p3() {
    tmp_4919_fu_46693_p3 = esl_concat<81,44>(tmp_4917_reg_90879.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4921_fu_23409_p3() {
    tmp_4921_fu_23409_p3 = p_Val2_2399_reg_80462.read().range(130, 130);
}

void particlemaster_ReadCalculations::thread_tmp_4922_fu_46704_p1() {
    tmp_4922_fu_46704_p1 = esl_zext<126,110>(p_Val2_3435_fu_46686_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4923_fu_46726_p1() {
    tmp_4923_fu_46726_p1 = esl_zext<127,126>(p_Val2_3436_reg_90884.read());
}

void particlemaster_ReadCalculations::thread_tmp_4924_fu_13052_p3() {
    tmp_4924_fu_13052_p3 = p_Val2_2466_reg_76023.read().range(130, 130);
}

void particlemaster_ReadCalculations::thread_tmp_4925_fu_46729_p3() {
    tmp_4925_fu_46729_p3 = esl_concat<93,16>(p_Val2_3437_reg_90899.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4926_fu_46947_p1() {
    tmp_4926_fu_46947_p1 = esl_zext<32,6>(p_Val2_7106_reg_90873.read());
}

void particlemaster_ReadCalculations::thread_tmp_4928_fu_46783_p3() {
    tmp_4928_fu_46783_p3 = esl_concat<76,54>(tmp_4927_reg_90916.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4929_fu_46794_p1() {
    tmp_4929_fu_46794_p1 = esl_zext<131,110>(p_Val2_3442_fu_46776_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4930_fu_46816_p1() {
    tmp_4930_fu_46816_p1 = esl_zext<132,131>(p_Val2_3443_reg_90921.read());
}

void particlemaster_ReadCalculations::thread_tmp_4931_fu_46819_p3() {
    tmp_4931_fu_46819_p3 = esl_concat<88,21>(p_Val2_3444_reg_90936.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4932_fu_46951_p1() {
    tmp_4932_fu_46951_p1 = esl_zext<32,6>(p_Val2_7107_reg_90910.read());
}

void particlemaster_ReadCalculations::thread_tmp_4934_fu_46873_p3() {
    tmp_4934_fu_46873_p3 = esl_concat<71,64>(tmp_4933_reg_90953.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4935_fu_23384_p1() {
    tmp_4935_fu_23384_p1 = p_0415_0_i34_reg_80646.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4936_fu_46884_p1() {
    tmp_4936_fu_46884_p1 = esl_zext<136,110>(p_Val2_3448_fu_46866_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4937_fu_13027_p1() {
    tmp_4937_fu_13027_p1 = p_0415_0_i35_reg_76207.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4938_fu_46975_p1() {
    tmp_4938_fu_46975_p1 = esl_zext<137,136>(p_Val2_3449_reg_90958.read());
}

void particlemaster_ReadCalculations::thread_tmp_4939_fu_46978_p3() {
    tmp_4939_fu_46978_p3 = esl_concat<83,26>(p_Val2_3450_reg_91003.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4940_fu_46955_p1() {
    tmp_4940_fu_46955_p1 = esl_zext<32,6>(p_Val2_7108_reg_90947.read());
}

void particlemaster_ReadCalculations::thread_tmp_4944_fu_47111_p3() {
    tmp_4944_fu_47111_p3 = esl_concat<72,45>(tmp_4941_reg_91038.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4946_fu_47141_p3() {
    tmp_4946_fu_47141_p3 = esl_concat<90,30>(p_Val2_3408_reg_91069.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4947_fu_47152_p1() {
    tmp_4947_fu_47152_p1 = esl_zext<122,121>(p_Val2_6171_cast_fu_47108_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4948_fu_47169_p1() {
    tmp_4948_fu_47169_p1 = esl_zext<123,122>(p_Val2_3456_reg_91090.read());
}

void particlemaster_ReadCalculations::thread_tmp_4949_fu_47172_p1() {
    tmp_4949_fu_47172_p1 = esl_zext<123,121>(p_Val2_3455_fu_47166_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4950_fu_47176_p1() {
    tmp_4950_fu_47176_p1 = esl_sext<120,73>(tmp_4945_reg_91084.read());
}

void particlemaster_ReadCalculations::thread_tmp_4953_fu_47273_p3() {
    tmp_4953_fu_47273_p3 = esl_concat<1,18>(tmp_7105_reg_91151.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4955_fu_47296_p2() {
    tmp_4955_fu_47296_p2 = (!tmp_7107_fu_47293_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7107_fu_47293_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4956_fu_47302_p1() {
    tmp_4956_fu_47302_p1 = esl_sext<131,128>(phitmp28_reg_91136.read());
}

void particlemaster_ReadCalculations::thread_tmp_4957_fu_47354_p1() {
    tmp_4957_fu_47354_p1 = esl_sext<72,71>(p_Val2_6221_reg_91141.read());
}

void particlemaster_ReadCalculations::thread_tmp_4958_fu_47357_p1() {
    tmp_4958_fu_47357_p1 = esl_sext<72,71>(p_Val2_3464_reg_91197.read());
}

void particlemaster_ReadCalculations::thread_tmp_4959_fu_47512_p1() {
    tmp_4959_fu_47512_p1 = esl_zext<32,8>(m_diff_hi_V_51_reg_91202.read());
}

void particlemaster_ReadCalculations::thread_tmp_4960_fu_47410_p1() {
    tmp_4960_fu_47410_p1 = esl_zext<32,8>(Z4_ind_V_51_fu_47400_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4961_fu_47420_p1() {
    tmp_4961_fu_47420_p1 = esl_zext<36,35>(p_Val2_6223_reg_91219.read());
}

void particlemaster_ReadCalculations::thread_tmp_4962_fu_47423_p1() {
    tmp_4962_fu_47423_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4963_fu_47415_p1() {
    tmp_4963_fu_47415_p1 = esl_zext<32,8>(p_Val2_6225_fu_47386_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4964_fu_47433_p4() {
    tmp_4964_fu_47433_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6225_reg_91214.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4966_fu_47469_p1() {
    tmp_4966_fu_47469_p1 = esl_zext<44,43>(tmp_4964_reg_91240.read());
}

void particlemaster_ReadCalculations::thread_tmp_4967_fu_47465_p1() {
    tmp_4967_fu_47465_p1 = esl_zext<32,8>(p_Val2_6228_reg_91207.read());
}

void particlemaster_ReadCalculations::thread_tmp_4969_fu_47490_p4() {
    tmp_4969_fu_47490_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6228_reg_91207.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4971_fu_47526_p5() {
    tmp_4971_fu_47526_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6228_reg_91207.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4974_fu_47586_p1() {
    tmp_4974_fu_47586_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4975_fu_47658_p3() {
    tmp_4975_fu_47658_p3 = esl_concat<59,49>(p_Val2_3476_reg_91312.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4976_fu_47305_p2() {
    tmp_4976_fu_47305_p2 = (!tmp_4956_fu_47302_p1.read().is_01() || !p_Val2_3459_reg_91131.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_4956_fu_47302_p1.read() != p_Val2_3459_reg_91131.read());
}

void particlemaster_ReadCalculations::thread_tmp_4977_fu_47760_p2() {
    tmp_4977_fu_47760_p2 = (!p_0415_0_i51_fu_47734_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i51_fu_47734_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4978_fu_47766_p4() {
    tmp_4978_fu_47766_p4 = p_Val2_3478_reg_91358.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_4979_fu_47775_p4() {
    tmp_4979_fu_47775_p4 = p_Val2_3478_reg_91358.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4980_fu_47958_p1() {
    tmp_4980_fu_47958_p1 = t_V_198_fu_47940_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_4981_fu_47962_p3() {
    tmp_4981_fu_47962_p3 = (!sel_tmp362_fu_47953_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp362_fu_47953_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_4982_fu_47970_p2() {
    tmp_4982_fu_47970_p2 = (sel_tmp362_fu_47953_p2.read() | x_is_p1_26_reg_91322.read());
}

void particlemaster_ReadCalculations::thread_tmp_4986_fu_36541_p2() {
    tmp_4986_fu_36541_p2 = (!b_exp_117_fu_36535_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_117_fu_36535_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4987_fu_35863_p2() {
    tmp_4987_fu_35863_p2 = (!loc_V_116_reg_86173.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_116_reg_86173.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4988_fu_35843_p2() {
    tmp_4988_fu_35843_p2 = (!loc_V_115_reg_86166.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_115_reg_86166.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4989_fu_35848_p2() {
    tmp_4989_fu_35848_p2 = (!loc_V_116_reg_86173.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_116_reg_86173.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4990_fu_35853_p2() {
    tmp_4990_fu_35853_p2 = (tmp_4988_fu_35843_p2.read() & tmp_4989_fu_35848_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4991_fu_36547_p2() {
    tmp_4991_fu_36547_p2 = (!loc_V_115_reg_86166.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_115_reg_86166.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4992_fu_37213_p2() {
    tmp_4992_fu_37213_p2 = (tmp_4988_reg_86192.read() & tmp_4987_reg_86212.read());
}

void particlemaster_ReadCalculations::thread_tmp_4993_fu_37247_p3() {
    tmp_4993_fu_37247_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4990_reg_86197.read());
}

void particlemaster_ReadCalculations::thread_tmp_4994_fu_37254_p2() {
    tmp_4994_fu_37254_p2 = (!tmp_4993_fu_37247_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4993_fu_37247_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4995_fu_37260_p3() {
    tmp_4995_fu_37260_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4992_reg_86832.read());
}

void particlemaster_ReadCalculations::thread_tmp_4996_fu_37267_p2() {
    tmp_4996_fu_37267_p2 = (!tmp_4995_fu_37260_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4995_fu_37260_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4997_fu_37273_p3() {
    tmp_4997_fu_37273_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4991_reg_86498.read());
}

void particlemaster_ReadCalculations::thread_tmp_4998_fu_37280_p2() {
    tmp_4998_fu_37280_p2 = (!tmp_4997_fu_37273_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4997_fu_37273_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4999_fu_35859_p1() {
    tmp_4999_fu_35859_p1 = esl_zext<32,6>(index0_V_46_reg_86187.read());
}

void particlemaster_ReadCalculations::thread_tmp_5000_fu_35948_p4() {
    tmp_5000_fu_35948_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7116_reg_86239.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5001_fu_35957_p1() {
    tmp_5001_fu_35957_p1 = esl_zext<76,75>(sf46_fu_35939_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5002_fu_35969_p3() {
    tmp_5002_fu_35969_p3 = esl_concat<50,25>(tmp_7117_fu_35929_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5003_fu_35981_p1() {
    tmp_5003_fu_35981_p1 = esl_zext<77,76>(p_Val2_3485_fu_35961_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5005_fu_36004_p1() {
    tmp_5005_fu_36004_p1 = esl_zext<78,77>(p_Val2_3487_reg_86252.read());
}

void particlemaster_ReadCalculations::thread_tmp_5006_fu_36007_p1() {
    tmp_5006_fu_36007_p1 = esl_zext<78,75>(p_Val2_3488_reg_86267.read());
}

void particlemaster_ReadCalculations::thread_tmp_5007_fu_36590_p1() {
    tmp_5007_fu_36590_p1 = esl_zext<32,4>(p_Val2_7144_reg_86246.read());
}

void particlemaster_ReadCalculations::thread_tmp_5009_fu_36053_p3() {
    tmp_5009_fu_36053_p3 = esl_concat<67,14>(tmp_5008_reg_86284.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5010_fu_36064_p1() {
    tmp_5010_fu_36064_p1 = esl_zext<82,81>(p_Val2_3492_fu_36046_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5011_fu_36086_p1() {
    tmp_5011_fu_36086_p1 = esl_zext<83,82>(p_Val2_3494_reg_86289.read());
}

void particlemaster_ReadCalculations::thread_tmp_5012_fu_36089_p3() {
    tmp_5012_fu_36089_p3 = esl_concat<79,1>(p_Val2_3495_reg_86304.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5013_fu_36594_p1() {
    tmp_5013_fu_36594_p1 = esl_zext<32,6>(p_Val2_7145_reg_86278.read());
}

void particlemaster_ReadCalculations::thread_tmp_5014_fu_36138_p3() {
    tmp_5014_fu_36138_p3 = esl_concat<76,25>(tmp_7121_reg_86325.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5015_fu_36149_p1() {
    tmp_5015_fu_36149_p1 = esl_zext<102,96>(p_Val2_3498_fu_36129_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5016_fu_36172_p1() {
    tmp_5016_fu_36172_p1 = esl_zext<103,102>(p_Val2_3499_reg_86330.read());
}

void particlemaster_ReadCalculations::thread_tmp_5017_fu_36175_p3() {
    tmp_5017_fu_36175_p3 = esl_concat<89,6>(p_Val2_3501_reg_86345.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5018_fu_36598_p1() {
    tmp_5018_fu_36598_p1 = esl_zext<32,6>(p_Val2_7146_reg_86319.read());
}

void particlemaster_ReadCalculations::thread_tmp_5020_fu_23533_p1() {
    tmp_5020_fu_23533_p1 = grp_fu_23527_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5021_fu_23554_p1() {
    tmp_5021_fu_23554_p1 = p_Val2_2487_reg_80760.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5022_fu_36229_p3() {
    tmp_5022_fu_36229_p3 = esl_concat<86,34>(tmp_5019_reg_86362.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5023_fu_36240_p1() {
    tmp_5023_fu_36240_p1 = esl_zext<121,110>(p_Val2_3505_fu_36222_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5024_fu_23557_p3() {
    tmp_5024_fu_23557_p3 = p_Val2_2487_reg_80760.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5025_fu_36262_p1() {
    tmp_5025_fu_36262_p1 = esl_zext<122,121>(p_Val2_3506_reg_86367.read());
}

void particlemaster_ReadCalculations::thread_tmp_5026_fu_36265_p3() {
    tmp_5026_fu_36265_p3 = esl_concat<98,11>(p_Val2_3507_reg_86382.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5027_fu_36574_p1() {
    tmp_5027_fu_36574_p1 = esl_zext<32,6>(p_Val2_7147_reg_86356.read());
}

void particlemaster_ReadCalculations::thread_tmp_5029_fu_36319_p3() {
    tmp_5029_fu_36319_p3 = esl_concat<81,44>(tmp_5028_reg_86399.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5030_fu_36330_p1() {
    tmp_5030_fu_36330_p1 = esl_zext<126,110>(p_Val2_3511_fu_36312_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5031_fu_36352_p1() {
    tmp_5031_fu_36352_p1 = esl_zext<127,126>(p_Val2_3513_reg_86404.read());
}

void particlemaster_ReadCalculations::thread_tmp_5032_fu_36355_p3() {
    tmp_5032_fu_36355_p3 = esl_concat<93,16>(p_Val2_3514_reg_86419.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5033_fu_36578_p1() {
    tmp_5033_fu_36578_p1 = esl_zext<32,6>(p_Val2_7148_reg_86393.read());
}

void particlemaster_ReadCalculations::thread_tmp_5035_fu_23731_p1() {
    tmp_5035_fu_23731_p1 = p_Val2_2499_fu_23725_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5036_fu_36409_p3() {
    tmp_5036_fu_36409_p3 = esl_concat<76,54>(tmp_5034_reg_86436.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5037_fu_36420_p1() {
    tmp_5037_fu_36420_p1 = esl_zext<131,110>(p_Val2_3519_fu_36402_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5038_fu_36442_p1() {
    tmp_5038_fu_36442_p1 = esl_zext<132,131>(p_Val2_3523_reg_86441.read());
}

void particlemaster_ReadCalculations::thread_tmp_5039_fu_36445_p3() {
    tmp_5039_fu_36445_p3 = esl_concat<88,21>(p_Val2_3524_reg_86456.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5040_fu_36582_p1() {
    tmp_5040_fu_36582_p1 = esl_zext<32,6>(p_Val2_7149_reg_86430.read());
}

void particlemaster_ReadCalculations::thread_tmp_5042_fu_36499_p3() {
    tmp_5042_fu_36499_p3 = esl_concat<71,64>(tmp_5041_reg_86473.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5043_fu_36510_p1() {
    tmp_5043_fu_36510_p1 = esl_zext<136,110>(p_Val2_3529_fu_36492_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5044_fu_36606_p1() {
    tmp_5044_fu_36606_p1 = esl_zext<137,136>(p_Val2_3530_reg_86478.read());
}

void particlemaster_ReadCalculations::thread_tmp_5045_fu_36609_p3() {
    tmp_5045_fu_36609_p3 = esl_concat<83,26>(p_Val2_3531_reg_86529.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5046_fu_36586_p1() {
    tmp_5046_fu_36586_p1 = esl_zext<32,6>(p_Val2_7150_reg_86467.read());
}

void particlemaster_ReadCalculations::thread_tmp_5050_fu_36742_p3() {
    tmp_5050_fu_36742_p3 = esl_concat<72,45>(tmp_5047_reg_86564.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5052_fu_36772_p3() {
    tmp_5052_fu_36772_p3 = esl_concat<90,30>(p_Val2_3481_reg_86595.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5053_fu_36783_p1() {
    tmp_5053_fu_36783_p1 = esl_zext<122,121>(p_Val2_6248_cast_fu_36739_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5054_fu_36800_p1() {
    tmp_5054_fu_36800_p1 = esl_zext<123,122>(p_Val2_3536_reg_86616.read());
}

void particlemaster_ReadCalculations::thread_tmp_5055_fu_36803_p1() {
    tmp_5055_fu_36803_p1 = esl_zext<123,121>(p_Val2_3535_fu_36797_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5056_fu_36807_p1() {
    tmp_5056_fu_36807_p1 = esl_sext<120,73>(tmp_5051_reg_86610.read());
}

void particlemaster_ReadCalculations::thread_tmp_5059_fu_36904_p3() {
    tmp_5059_fu_36904_p3 = esl_concat<1,18>(tmp_7123_reg_86677.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5061_fu_36927_p2() {
    tmp_5061_fu_36927_p2 = (!tmp_7125_fu_36924_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7125_fu_36924_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5062_fu_36933_p1() {
    tmp_5062_fu_36933_p1 = esl_sext<131,128>(phitmp30_reg_86662.read());
}

void particlemaster_ReadCalculations::thread_tmp_5063_fu_36985_p1() {
    tmp_5063_fu_36985_p1 = esl_sext<72,71>(p_Val2_6262_reg_86667.read());
}

void particlemaster_ReadCalculations::thread_tmp_5064_fu_36988_p1() {
    tmp_5064_fu_36988_p1 = esl_sext<72,71>(p_Val2_3544_reg_86723.read());
}

void particlemaster_ReadCalculations::thread_tmp_5065_fu_37143_p1() {
    tmp_5065_fu_37143_p1 = esl_zext<32,8>(m_diff_hi_V_52_reg_86728.read());
}

void particlemaster_ReadCalculations::thread_tmp_5066_fu_37041_p1() {
    tmp_5066_fu_37041_p1 = esl_zext<32,8>(Z4_ind_V_52_fu_37031_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5067_fu_37051_p1() {
    tmp_5067_fu_37051_p1 = esl_zext<36,35>(p_Val2_6264_reg_86745.read());
}

void particlemaster_ReadCalculations::thread_tmp_5068_fu_37054_p1() {
    tmp_5068_fu_37054_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5069_fu_37046_p1() {
    tmp_5069_fu_37046_p1 = esl_zext<32,8>(p_Val2_6266_fu_37017_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5070_fu_37064_p4() {
    tmp_5070_fu_37064_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6266_reg_86740.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5072_fu_37100_p1() {
    tmp_5072_fu_37100_p1 = esl_zext<44,43>(tmp_5070_reg_86766.read());
}

void particlemaster_ReadCalculations::thread_tmp_5073_fu_37096_p1() {
    tmp_5073_fu_37096_p1 = esl_zext<32,8>(p_Val2_6269_reg_86733.read());
}

void particlemaster_ReadCalculations::thread_tmp_5075_fu_37121_p4() {
    tmp_5075_fu_37121_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6269_reg_86733.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5076_fu_23745_p1() {
    tmp_5076_fu_23745_p1 = p_Val2_2499_fu_23725_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5078_fu_37157_p5() {
    tmp_5078_fu_37157_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6269_reg_86733.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5081_fu_37217_p1() {
    tmp_5081_fu_37217_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5082_fu_37286_p3() {
    tmp_5082_fu_37286_p3 = esl_concat<59,49>(p_Val2_3556_reg_86838.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5083_fu_36936_p2() {
    tmp_5083_fu_36936_p2 = (!tmp_5062_fu_36933_p1.read().is_01() || !p_Val2_3538_reg_86657.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_5062_fu_36933_p1.read() != p_Val2_3538_reg_86657.read());
}

void particlemaster_ReadCalculations::thread_tmp_5084_fu_37403_p2() {
    tmp_5084_fu_37403_p2 = (!p_0415_0_i52_fu_37377_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i52_fu_37377_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5085_fu_37409_p4() {
    tmp_5085_fu_37409_p4 = p_Val2_3558_reg_86888.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_5086_fu_37418_p4() {
    tmp_5086_fu_37418_p4 = p_Val2_3558_reg_86888.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5087_fu_37602_p1() {
    tmp_5087_fu_37602_p1 = t_V_204_fu_37584_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_5088_fu_37606_p3() {
    tmp_5088_fu_37606_p3 = (!sel_tmp397_fu_37597_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp397_fu_37597_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_5089_fu_37614_p2() {
    tmp_5089_fu_37614_p2 = (sel_tmp397_fu_37597_p2.read() | x_is_p1_27_reg_86853.read());
}

void particlemaster_ReadCalculations::thread_tmp_5092_fu_47983_p3() {
    tmp_5092_fu_47983_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5093_fu_37627_p3() {
    tmp_5093_fu_37627_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5094_fu_48009_p3() {
    tmp_5094_fu_48009_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5095_fu_48016_p2() {
    tmp_5095_fu_48016_p2 = (!tmp_5094_fu_48009_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5094_fu_48009_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5096_fu_37653_p3() {
    tmp_5096_fu_37653_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5097_fu_37660_p2() {
    tmp_5097_fu_37660_p2 = (!tmp_5096_fu_37653_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5096_fu_37653_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5098_fu_48022_p3() {
    tmp_5098_fu_48022_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5099_fu_48029_p2() {
    tmp_5099_fu_48029_p2 = (!tmp_5098_fu_48022_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5098_fu_48022_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5100_fu_37666_p3() {
    tmp_5100_fu_37666_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5101_fu_37673_p2() {
    tmp_5101_fu_37673_p2 = (!tmp_5100_fu_37666_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5100_fu_37666_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5102_fu_48035_p1() {
    tmp_5102_fu_48035_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5103_fu_48121_p4() {
    tmp_5103_fu_48121_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7132_reg_91494.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5104_fu_24428_p1() {
    tmp_5104_fu_24428_p1 = p_Val2_2532_fu_24422_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5105_fu_48130_p1() {
    tmp_5105_fu_48130_p1 = esl_zext<76,75>(sf47_fu_48112_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5106_fu_48142_p3() {
    tmp_5106_fu_48142_p3 = esl_concat<50,25>(tmp_7133_fu_48102_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5107_fu_48154_p1() {
    tmp_5107_fu_48154_p1 = esl_zext<77,76>(p_Val2_3565_fu_48134_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5109_fu_48177_p1() {
    tmp_5109_fu_48177_p1 = esl_zext<78,77>(p_Val2_3567_reg_91507.read());
}

void particlemaster_ReadCalculations::thread_tmp_5110_fu_48180_p1() {
    tmp_5110_fu_48180_p1 = esl_zext<78,75>(p_Val2_3568_reg_91522.read());
}

void particlemaster_ReadCalculations::thread_tmp_5111_fu_48736_p1() {
    tmp_5111_fu_48736_p1 = esl_zext<32,4>(p_Val2_7109_reg_91501.read());
}

void particlemaster_ReadCalculations::thread_tmp_5113_fu_48226_p3() {
    tmp_5113_fu_48226_p3 = esl_concat<67,14>(tmp_5112_reg_91539.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5114_fu_48237_p1() {
    tmp_5114_fu_48237_p1 = esl_zext<82,81>(p_Val2_3573_fu_48219_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5115_fu_48259_p1() {
    tmp_5115_fu_48259_p1 = esl_zext<83,82>(p_Val2_3575_reg_91544.read());
}

void particlemaster_ReadCalculations::thread_tmp_5116_fu_48262_p3() {
    tmp_5116_fu_48262_p3 = esl_concat<79,1>(p_Val2_3576_reg_91559.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5117_fu_48740_p1() {
    tmp_5117_fu_48740_p1 = esl_zext<32,6>(p_Val2_7110_reg_91533.read());
}

void particlemaster_ReadCalculations::thread_tmp_5118_fu_48311_p3() {
    tmp_5118_fu_48311_p3 = esl_concat<76,25>(tmp_7137_reg_91580.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5119_fu_48322_p1() {
    tmp_5119_fu_48322_p1 = esl_zext<102,96>(p_Val2_3579_fu_48302_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5120_fu_48345_p1() {
    tmp_5120_fu_48345_p1 = esl_zext<103,102>(p_Val2_3580_reg_91585.read());
}

void particlemaster_ReadCalculations::thread_tmp_5121_fu_48348_p3() {
    tmp_5121_fu_48348_p3 = esl_concat<89,6>(p_Val2_3582_reg_91600.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5122_fu_48744_p1() {
    tmp_5122_fu_48744_p1 = esl_zext<32,6>(p_Val2_7111_reg_91574.read());
}

void particlemaster_ReadCalculations::thread_tmp_5124_fu_48402_p3() {
    tmp_5124_fu_48402_p3 = esl_concat<86,34>(tmp_5123_reg_91617.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5125_fu_48413_p1() {
    tmp_5125_fu_48413_p1 = esl_zext<121,110>(p_Val2_3588_fu_48395_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5126_fu_48435_p1() {
    tmp_5126_fu_48435_p1 = esl_zext<122,121>(p_Val2_3589_reg_91622.read());
}

void particlemaster_ReadCalculations::thread_tmp_5127_fu_48438_p3() {
    tmp_5127_fu_48438_p3 = esl_concat<98,11>(p_Val2_3590_reg_91637.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5128_fu_48720_p1() {
    tmp_5128_fu_48720_p1 = esl_zext<32,6>(p_Val2_7112_reg_91611.read());
}

void particlemaster_ReadCalculations::thread_tmp_5129_fu_24576_p3() {
    tmp_5129_fu_24576_p3 = r_V_382_reg_81223.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5130_fu_24559_p1() {
    tmp_5130_fu_24559_p1 = grp_fu_72821_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5132_fu_48492_p3() {
    tmp_5132_fu_48492_p3 = esl_concat<81,44>(tmp_5131_reg_91654.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5133_fu_48503_p1() {
    tmp_5133_fu_48503_p1 = esl_zext<126,110>(p_Val2_3595_fu_48485_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5134_fu_48525_p1() {
    tmp_5134_fu_48525_p1 = esl_zext<127,126>(p_Val2_3596_reg_91659.read());
}

void particlemaster_ReadCalculations::thread_tmp_5135_fu_48528_p3() {
    tmp_5135_fu_48528_p3 = esl_concat<93,16>(p_Val2_3597_reg_91674.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5136_fu_48724_p1() {
    tmp_5136_fu_48724_p1 = esl_zext<32,6>(p_Val2_7113_reg_91648.read());
}

void particlemaster_ReadCalculations::thread_tmp_5138_fu_48582_p3() {
    tmp_5138_fu_48582_p3 = esl_concat<76,54>(tmp_5137_reg_91691.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5139_fu_48593_p1() {
    tmp_5139_fu_48593_p1 = esl_zext<131,110>(p_Val2_3601_fu_48575_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5140_fu_48615_p1() {
    tmp_5140_fu_48615_p1 = esl_zext<132,131>(p_Val2_3603_reg_91696.read());
}

void particlemaster_ReadCalculations::thread_tmp_5141_fu_48618_p3() {
    tmp_5141_fu_48618_p3 = esl_concat<88,21>(p_Val2_3604_reg_91711.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5142_fu_48728_p1() {
    tmp_5142_fu_48728_p1 = esl_zext<32,6>(p_Val2_7114_reg_91685.read());
}

void particlemaster_ReadCalculations::thread_tmp_5145_fu_48672_p3() {
    tmp_5145_fu_48672_p3 = esl_concat<71,64>(tmp_5143_reg_91728.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5146_fu_24999_p4() {
    tmp_5146_fu_24999_p4 = p_0415_0_i36_fu_24994_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_5147_fu_48683_p1() {
    tmp_5147_fu_48683_p1 = esl_zext<136,110>(p_Val2_3611_fu_48665_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5148_fu_48752_p1() {
    tmp_5148_fu_48752_p1 = esl_zext<137,136>(p_Val2_3612_reg_91733.read());
}

void particlemaster_ReadCalculations::thread_tmp_5149_fu_48755_p3() {
    tmp_5149_fu_48755_p3 = esl_concat<83,26>(p_Val2_3613_reg_91773.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5150_fu_48732_p1() {
    tmp_5150_fu_48732_p1 = esl_zext<32,6>(p_Val2_7115_reg_91722.read());
}

void particlemaster_ReadCalculations::thread_tmp_5154_fu_48888_p3() {
    tmp_5154_fu_48888_p3 = esl_concat<72,45>(tmp_5151_reg_91808.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5156_fu_48918_p3() {
    tmp_5156_fu_48918_p3 = esl_concat<90,30>(p_Val2_3560_reg_91839.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5157_fu_48929_p1() {
    tmp_5157_fu_48929_p1 = esl_zext<122,121>(p_Val2_6369_cast_fu_48885_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5158_fu_48950_p1() {
    tmp_5158_fu_48950_p1 = esl_zext<123,122>(p_Val2_3618_reg_91860.read());
}

void particlemaster_ReadCalculations::thread_tmp_5159_fu_48953_p1() {
    tmp_5159_fu_48953_p1 = esl_zext<123,121>(p_Val2_3617_fu_48947_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5160_fu_48957_p1() {
    tmp_5160_fu_48957_p1 = esl_sext<120,73>(tmp_5155_reg_91854.read());
}

void particlemaster_ReadCalculations::thread_tmp_5163_fu_49031_p3() {
    tmp_5163_fu_49031_p3 = esl_concat<77,52>(tmp_5162_reg_91885.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5164_fu_49041_p3() {
    tmp_5164_fu_49041_p3 = esl_concat<1,18>(tmp_7140_reg_91900.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5166_fu_49064_p2() {
    tmp_5166_fu_49064_p2 = (!tmp_7142_fu_49061_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7142_fu_49061_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5167_fu_49124_p1() {
    tmp_5167_fu_49124_p1 = esl_sext<72,71>(p_Val2_6294_reg_91890.read());
}

void particlemaster_ReadCalculations::thread_tmp_5168_fu_49127_p1() {
    tmp_5168_fu_49127_p1 = esl_sext<72,71>(p_Val2_3626_reg_91939.read());
}

void particlemaster_ReadCalculations::thread_tmp_5169_fu_49282_p1() {
    tmp_5169_fu_49282_p1 = esl_zext<32,8>(m_diff_hi_V_53_reg_91944.read());
}

void particlemaster_ReadCalculations::thread_tmp_5170_fu_49180_p1() {
    tmp_5170_fu_49180_p1 = esl_zext<32,8>(Z4_ind_V_53_fu_49170_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5171_fu_49190_p1() {
    tmp_5171_fu_49190_p1 = esl_zext<36,35>(p_Val2_6296_reg_91961.read());
}

void particlemaster_ReadCalculations::thread_tmp_5172_fu_49193_p1() {
    tmp_5172_fu_49193_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5173_fu_49185_p1() {
    tmp_5173_fu_49185_p1 = esl_zext<32,8>(p_Val2_6298_fu_49156_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5174_fu_49203_p4() {
    tmp_5174_fu_49203_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6298_reg_91956.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5176_fu_49239_p1() {
    tmp_5176_fu_49239_p1 = esl_zext<44,43>(tmp_5174_reg_91982.read());
}

void particlemaster_ReadCalculations::thread_tmp_5177_fu_49235_p1() {
    tmp_5177_fu_49235_p1 = esl_zext<32,8>(p_Val2_6301_reg_91949.read());
}

void particlemaster_ReadCalculations::thread_tmp_5179_fu_49260_p4() {
    tmp_5179_fu_49260_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6301_reg_91949.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5181_fu_49296_p5() {
    tmp_5181_fu_49296_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6301_reg_91949.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5184_fu_49352_p1() {
    tmp_5184_fu_49352_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5186_fu_49362_p3() {
    tmp_5186_fu_49362_p3 = esl_concat<59,49>(p_Val2_3635_reg_92048.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5187_fu_49396_p4() {
    tmp_5187_fu_49396_p4 = p_Val2_3638_fu_49372_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5188_fu_49406_p3() {
    tmp_5188_fu_49406_p3 = esl_concat<57,1>(tmp_5187_fu_49396_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5189_fu_49074_p2() {
    tmp_5189_fu_49074_p2 = (!tmp_9691_cast_fu_49070_p1.read().is_01() || !p_Val2_3620_fu_49024_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_9691_cast_fu_49070_p1.read() != p_Val2_3620_fu_49024_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5190_fu_37679_p1() {
    tmp_5190_fu_37679_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5191_fu_37765_p4() {
    tmp_5191_fu_37765_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7147_reg_87031.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5192_fu_37774_p1() {
    tmp_5192_fu_37774_p1 = esl_zext<76,75>(sf48_fu_37756_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5193_fu_37786_p3() {
    tmp_5193_fu_37786_p3 = esl_concat<50,25>(tmp_7148_fu_37746_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5194_fu_37798_p1() {
    tmp_5194_fu_37798_p1 = esl_zext<77,76>(p_Val2_3647_fu_37778_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5195_fu_37821_p1() {
    tmp_5195_fu_37821_p1 = esl_zext<78,77>(p_Val2_3648_reg_87044.read());
}

void particlemaster_ReadCalculations::thread_tmp_5196_fu_37824_p1() {
    tmp_5196_fu_37824_p1 = esl_zext<78,75>(p_Val2_3649_reg_87059.read());
}

void particlemaster_ReadCalculations::thread_tmp_5197_fu_38380_p1() {
    tmp_5197_fu_38380_p1 = esl_zext<32,4>(p_Val2_7151_reg_87038.read());
}

void particlemaster_ReadCalculations::thread_tmp_5199_fu_37870_p3() {
    tmp_5199_fu_37870_p3 = esl_concat<67,14>(tmp_5198_reg_87076.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5200_fu_37881_p1() {
    tmp_5200_fu_37881_p1 = esl_zext<82,81>(p_Val2_3654_fu_37863_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5201_fu_37903_p1() {
    tmp_5201_fu_37903_p1 = esl_zext<83,82>(p_Val2_3655_reg_87081.read());
}

void particlemaster_ReadCalculations::thread_tmp_5202_fu_37906_p3() {
    tmp_5202_fu_37906_p3 = esl_concat<79,1>(p_Val2_3656_reg_87096.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5203_fu_38384_p1() {
    tmp_5203_fu_38384_p1 = esl_zext<32,6>(p_Val2_7152_reg_87070.read());
}

void particlemaster_ReadCalculations::thread_tmp_5204_fu_37955_p3() {
    tmp_5204_fu_37955_p3 = esl_concat<76,25>(tmp_7152_reg_87117.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5205_fu_37966_p1() {
    tmp_5205_fu_37966_p1 = esl_zext<102,96>(p_Val2_3659_fu_37946_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5206_fu_37989_p1() {
    tmp_5206_fu_37989_p1 = esl_zext<103,102>(p_Val2_3660_reg_87122.read());
}

void particlemaster_ReadCalculations::thread_tmp_5207_fu_37992_p3() {
    tmp_5207_fu_37992_p3 = esl_concat<89,6>(p_Val2_3661_reg_87137.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5208_fu_38388_p1() {
    tmp_5208_fu_38388_p1 = esl_zext<32,6>(p_Val2_7153_reg_87111.read());
}

void particlemaster_ReadCalculations::thread_tmp_5210_fu_38046_p3() {
    tmp_5210_fu_38046_p3 = esl_concat<86,34>(tmp_5209_reg_87154.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5211_fu_38057_p1() {
    tmp_5211_fu_38057_p1 = esl_zext<121,110>(p_Val2_3665_fu_38039_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5212_fu_38079_p1() {
    tmp_5212_fu_38079_p1 = esl_zext<122,121>(p_Val2_3666_reg_87159.read());
}

void particlemaster_ReadCalculations::thread_tmp_5213_fu_25051_p1() {
    tmp_5213_fu_25051_p1 = p_0415_0_i36_fu_24994_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5214_fu_38082_p3() {
    tmp_5214_fu_38082_p3 = esl_concat<98,11>(p_Val2_3667_reg_87174.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5215_fu_38364_p1() {
    tmp_5215_fu_38364_p1 = esl_zext<32,6>(p_Val2_7154_reg_87148.read());
}

void particlemaster_ReadCalculations::thread_tmp_5217_fu_38136_p3() {
    tmp_5217_fu_38136_p3 = esl_concat<81,44>(tmp_5216_reg_87191.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5218_fu_38147_p1() {
    tmp_5218_fu_38147_p1 = esl_zext<126,110>(p_Val2_3672_fu_38129_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5219_fu_38169_p1() {
    tmp_5219_fu_38169_p1 = esl_zext<127,126>(p_Val2_3673_reg_87196.read());
}

void particlemaster_ReadCalculations::thread_tmp_5220_fu_38172_p3() {
    tmp_5220_fu_38172_p3 = esl_concat<93,16>(p_Val2_3674_reg_87211.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5221_fu_38368_p1() {
    tmp_5221_fu_38368_p1 = esl_zext<32,6>(p_Val2_7155_reg_87185.read());
}

void particlemaster_ReadCalculations::thread_tmp_5223_fu_38226_p3() {
    tmp_5223_fu_38226_p3 = esl_concat<76,54>(tmp_5222_reg_87228.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5224_fu_38237_p1() {
    tmp_5224_fu_38237_p1 = esl_zext<131,110>(p_Val2_3678_fu_38219_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5225_fu_38259_p1() {
    tmp_5225_fu_38259_p1 = esl_zext<132,131>(p_Val2_3679_reg_87233.read());
}

void particlemaster_ReadCalculations::thread_tmp_5226_fu_38262_p3() {
    tmp_5226_fu_38262_p3 = esl_concat<88,21>(p_Val2_3680_reg_87248.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5227_fu_38372_p1() {
    tmp_5227_fu_38372_p1 = esl_zext<32,6>(p_Val2_7156_reg_87222.read());
}

void particlemaster_ReadCalculations::thread_tmp_5229_fu_38316_p3() {
    tmp_5229_fu_38316_p3 = esl_concat<71,64>(tmp_5228_reg_87265.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5230_fu_38327_p1() {
    tmp_5230_fu_38327_p1 = esl_zext<136,110>(p_Val2_3685_fu_38309_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5231_fu_38396_p1() {
    tmp_5231_fu_38396_p1 = esl_zext<137,136>(p_Val2_3686_reg_87270.read());
}

void particlemaster_ReadCalculations::thread_tmp_5232_fu_38399_p3() {
    tmp_5232_fu_38399_p3 = esl_concat<83,26>(p_Val2_3687_reg_87310.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5233_fu_38376_p1() {
    tmp_5233_fu_38376_p1 = esl_zext<32,6>(p_Val2_7157_reg_87259.read());
}

void particlemaster_ReadCalculations::thread_tmp_5238_fu_13193_p1() {
    tmp_5238_fu_13193_p1 = grp_fu_13187_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5239_fu_38532_p3() {
    tmp_5239_fu_38532_p3 = esl_concat<72,45>(tmp_5234_reg_87345.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5241_fu_38562_p3() {
    tmp_5241_fu_38562_p3 = esl_concat<90,30>(p_Val2_3641_reg_87376.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5242_fu_38573_p1() {
    tmp_5242_fu_38573_p1 = esl_zext<122,121>(p_Val2_6437_cast_fu_38529_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5243_fu_38594_p1() {
    tmp_5243_fu_38594_p1 = esl_zext<123,122>(p_Val2_3692_reg_87397.read());
}

void particlemaster_ReadCalculations::thread_tmp_5244_fu_38597_p1() {
    tmp_5244_fu_38597_p1 = esl_zext<123,121>(p_Val2_3691_fu_38591_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5245_fu_38601_p1() {
    tmp_5245_fu_38601_p1 = esl_sext<120,73>(tmp_5240_reg_87391.read());
}

void particlemaster_ReadCalculations::thread_tmp_5248_fu_38675_p3() {
    tmp_5248_fu_38675_p3 = esl_concat<77,52>(tmp_5247_reg_87422.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5249_fu_13214_p1() {
    tmp_5249_fu_13214_p1 = p_Val2_2553_reg_76326.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5250_fu_38685_p3() {
    tmp_5250_fu_38685_p3 = esl_concat<1,18>(tmp_7155_reg_87437.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5251_fu_13217_p3() {
    tmp_5251_fu_13217_p3 = p_Val2_2553_reg_76326.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5253_fu_38708_p2() {
    tmp_5253_fu_38708_p2 = (!tmp_7157_fu_38705_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7157_fu_38705_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5254_fu_38768_p1() {
    tmp_5254_fu_38768_p1 = esl_sext<72,71>(p_Val2_6314_reg_87427.read());
}

void particlemaster_ReadCalculations::thread_tmp_5255_fu_38771_p1() {
    tmp_5255_fu_38771_p1 = esl_sext<72,71>(p_Val2_3700_reg_87476.read());
}

void particlemaster_ReadCalculations::thread_tmp_5256_fu_38926_p1() {
    tmp_5256_fu_38926_p1 = esl_zext<32,8>(m_diff_hi_V_54_reg_87481.read());
}

void particlemaster_ReadCalculations::thread_tmp_5257_fu_38824_p1() {
    tmp_5257_fu_38824_p1 = esl_zext<32,8>(Z4_ind_V_54_fu_38814_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5258_fu_38834_p1() {
    tmp_5258_fu_38834_p1 = esl_zext<36,35>(p_Val2_6316_reg_87498.read());
}

void particlemaster_ReadCalculations::thread_tmp_5259_fu_38837_p1() {
    tmp_5259_fu_38837_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5260_fu_38829_p1() {
    tmp_5260_fu_38829_p1 = esl_zext<32,8>(p_Val2_6318_fu_38800_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5261_fu_38847_p4() {
    tmp_5261_fu_38847_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6318_reg_87493.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5263_fu_38883_p1() {
    tmp_5263_fu_38883_p1 = esl_zext<44,43>(tmp_5261_reg_87519.read());
}

void particlemaster_ReadCalculations::thread_tmp_5264_fu_38879_p1() {
    tmp_5264_fu_38879_p1 = esl_zext<32,8>(p_Val2_6321_reg_87486.read());
}

void particlemaster_ReadCalculations::thread_tmp_5266_fu_38904_p4() {
    tmp_5266_fu_38904_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6321_reg_87486.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5268_fu_38940_p5() {
    tmp_5268_fu_38940_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6321_reg_87486.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5271_fu_38996_p1() {
    tmp_5271_fu_38996_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5272_fu_39006_p3() {
    tmp_5272_fu_39006_p3 = esl_concat<59,49>(p_Val2_3714_reg_87585.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5273_fu_39040_p4() {
    tmp_5273_fu_39040_p4 = p_Val2_3716_fu_39016_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5274_fu_39050_p3() {
    tmp_5274_fu_39050_p3 = esl_concat<57,1>(tmp_5273_fu_39040_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5275_fu_38718_p2() {
    tmp_5275_fu_38718_p2 = (!tmp_9726_cast_fu_38714_p1.read().is_01() || !p_Val2_3694_fu_38668_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_9726_cast_fu_38714_p1.read() != p_Val2_3694_fu_38668_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5276_fu_49454_p2() {
    tmp_5276_fu_49454_p2 = (!p_0415_0_i53_reg_92063.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i53_reg_92063.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5277_fu_39098_p2() {
    tmp_5277_fu_39098_p2 = (!p_0415_0_i54_reg_87600.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i54_reg_87600.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5278_fu_50129_p1() {
    tmp_5278_fu_50129_p1 = tmp_21507_neg_reg_92299.read();
}

void particlemaster_ReadCalculations::thread_tmp_5279_fu_49514_p4() {
    tmp_5279_fu_49514_p4 = p_Val2_3458_reg_91100.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_5280_fu_49523_p3() {
    tmp_5280_fu_49523_p3 = esl_concat<77,52>(tmp_5279_fu_49514_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5281_fu_49551_p3() {
    tmp_5281_fu_49551_p3 = esl_concat<1,18>(tmp_7165_fu_49540_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5283_fu_49575_p2() {
    tmp_5283_fu_49575_p2 = (!tmp_7167_fu_49572_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7167_fu_49572_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5284_fu_49644_p1() {
    tmp_5284_fu_49644_p1 = esl_sext<72,71>(p_Val2_6450_fu_49635_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5285_fu_49648_p1() {
    tmp_5285_fu_49648_p1 = esl_sext<72,71>(p_Val2_3724_reg_92131.read());
}

void particlemaster_ReadCalculations::thread_tmp_5286_fu_49803_p1() {
    tmp_5286_fu_49803_p1 = esl_zext<32,8>(m_diff_hi_V_55_reg_92136.read());
}

void particlemaster_ReadCalculations::thread_tmp_5287_fu_49701_p1() {
    tmp_5287_fu_49701_p1 = esl_zext<32,8>(Z4_ind_V_55_fu_49691_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5288_fu_49711_p1() {
    tmp_5288_fu_49711_p1 = esl_zext<36,35>(p_Val2_6344_reg_92153.read());
}

void particlemaster_ReadCalculations::thread_tmp_5289_fu_49714_p1() {
    tmp_5289_fu_49714_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5290_fu_13391_p1() {
    tmp_5290_fu_13391_p1 = p_Val2_2565_fu_13385_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5291_fu_49706_p1() {
    tmp_5291_fu_49706_p1 = esl_zext<32,8>(p_Val2_6452_fu_49677_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5292_fu_49724_p4() {
    tmp_5292_fu_49724_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6452_reg_92148.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5294_fu_49760_p1() {
    tmp_5294_fu_49760_p1 = esl_zext<44,43>(tmp_5292_reg_92174.read());
}

void particlemaster_ReadCalculations::thread_tmp_5295_fu_49756_p1() {
    tmp_5295_fu_49756_p1 = esl_zext<32,8>(p_Val2_6454_reg_92141.read());
}

void particlemaster_ReadCalculations::thread_tmp_5297_fu_49781_p4() {
    tmp_5297_fu_49781_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6454_reg_92141.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5299_fu_49817_p5() {
    tmp_5299_fu_49817_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6454_reg_92141.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5302_fu_49873_p1() {
    tmp_5302_fu_49873_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5303_fu_49883_p3() {
    tmp_5303_fu_49883_p3 = esl_concat<59,49>(p_Val2_3735_reg_92240.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5304_fu_49585_p2() {
    tmp_5304_fu_49585_p2 = (!tmp_9975_cast_fu_49581_p1.read().is_01() || !p_Val2_3719_fu_49507_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_9975_cast_fu_49581_p1.read() != p_Val2_3719_fu_49507_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5305_fu_49944_p2() {
    tmp_5305_fu_49944_p2 = (!p_0415_0_i55_fu_49923_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i55_fu_49923_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5306_fu_49950_p4() {
    tmp_5306_fu_49950_p4 = p_Val2_3738_reg_92250.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_5307_fu_49959_p4() {
    tmp_5307_fu_49959_p4 = p_Val2_3738_reg_92250.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5308_fu_50089_p2() {
    tmp_5308_fu_50089_p2 = (sel_tmp408_fu_50084_p2.read() | sel_tmp405_fu_50065_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5309_fu_50103_p2() {
    tmp_5309_fu_50103_p2 = (tmp_5308_fu_50089_p2.read() | sel_tmp403_fu_50061_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5315_fu_50178_p2() {
    tmp_5315_fu_50178_p2 = (!b_exp_124_fu_50172_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_124_fu_50172_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_5316_fu_50184_p2() {
    tmp_5316_fu_50184_p2 = (!loc_V_108_reg_92337.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_108_reg_92337.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5317_fu_50163_p2() {
    tmp_5317_fu_50163_p2 = (!loc_V_107_fu_50149_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_107_fu_50149_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_5318_fu_50189_p2() {
    tmp_5318_fu_50189_p2 = (!loc_V_108_reg_92337.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_108_reg_92337.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5319_fu_50194_p2() {
    tmp_5319_fu_50194_p2 = (tmp_5317_reg_92345.read() & tmp_5318_fu_50189_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5320_fu_50199_p2() {
    tmp_5320_fu_50199_p2 = (!loc_V_107_reg_92331.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_107_reg_92331.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5321_fu_13405_p1() {
    tmp_5321_fu_13405_p1 = p_Val2_2565_fu_13385_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5322_fu_50224_p2() {
    tmp_5322_fu_50224_p2 = (tmp_5317_reg_92345.read() & tmp_5316_reg_92366.read());
}

void particlemaster_ReadCalculations::thread_tmp_5323_fu_14078_p1() {
    tmp_5323_fu_14078_p1 = p_Val2_2598_fu_14072_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5325_fu_39773_p1() {
    tmp_5325_fu_39773_p1 = tmp_21512_neg_reg_87836.read();
}

void particlemaster_ReadCalculations::thread_tmp_5326_cast_fu_7123_p1() {
    tmp_5326_cast_fu_7123_p1 = esl_zext<12,11>(loc_V_reg_73297.read());
}

void particlemaster_ReadCalculations::thread_tmp_5326_fu_39158_p4() {
    tmp_5326_fu_39158_p4 = p_Val2_3537_reg_86626.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_5327_fu_14226_p3() {
    tmp_5327_fu_14226_p3 = r_V_402_reg_76781.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5328_fu_39167_p3() {
    tmp_5328_fu_39167_p3 = esl_concat<77,52>(tmp_5326_fu_39158_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5329_fu_39195_p3() {
    tmp_5329_fu_39195_p3 = esl_concat<1,18>(tmp_7175_fu_39184_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5331_fu_39219_p2() {
    tmp_5331_fu_39219_p2 = (!tmp_7177_fu_39216_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7177_fu_39216_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5332_fu_39288_p1() {
    tmp_5332_fu_39288_p1 = esl_sext<72,71>(p_Val2_6472_fu_39279_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5333_fu_39292_p1() {
    tmp_5333_fu_39292_p1 = esl_sext<72,71>(p_Val2_3747_reg_87668.read());
}

void particlemaster_ReadCalculations::thread_tmp_5334_fu_39447_p1() {
    tmp_5334_fu_39447_p1 = esl_zext<32,8>(m_diff_hi_V_56_reg_87673.read());
}

void particlemaster_ReadCalculations::thread_tmp_5335_fu_39345_p1() {
    tmp_5335_fu_39345_p1 = esl_zext<32,8>(Z4_ind_V_56_fu_39335_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5336_fu_39355_p1() {
    tmp_5336_fu_39355_p1 = esl_zext<36,35>(p_Val2_6376_reg_87690.read());
}

void particlemaster_ReadCalculations::thread_tmp_5337_fu_39358_p1() {
    tmp_5337_fu_39358_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5338_fu_14209_p1() {
    tmp_5338_fu_14209_p1 = grp_fu_72751_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5339_fu_39350_p1() {
    tmp_5339_fu_39350_p1 = esl_zext<32,8>(p_Val2_6474_fu_39321_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5340_fu_39368_p4() {
    tmp_5340_fu_39368_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6474_reg_87685.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5342_fu_39404_p1() {
    tmp_5342_fu_39404_p1 = esl_zext<44,43>(tmp_5340_reg_87711.read());
}

void particlemaster_ReadCalculations::thread_tmp_5343_fu_39400_p1() {
    tmp_5343_fu_39400_p1 = esl_zext<32,8>(p_Val2_6476_reg_87678.read());
}

void particlemaster_ReadCalculations::thread_tmp_5345_fu_39425_p4() {
    tmp_5345_fu_39425_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6476_reg_87678.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5347_fu_39461_p5() {
    tmp_5347_fu_39461_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6476_reg_87678.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5350_fu_39517_p1() {
    tmp_5350_fu_39517_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5351_fu_39531_p3() {
    tmp_5351_fu_39531_p3 = esl_concat<59,49>(p_Val2_3757_reg_87777.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5352_fu_39229_p2() {
    tmp_5352_fu_39229_p2 = (!tmp_10010_cast_fu_39225_p1.read().is_01() || !p_Val2_3740_fu_39151_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_10010_cast_fu_39225_p1.read() != p_Val2_3740_fu_39151_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5353_fu_39588_p2() {
    tmp_5353_fu_39588_p2 = (!p_0415_0_i56_fu_39567_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i56_fu_39567_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5354_fu_39594_p4() {
    tmp_5354_fu_39594_p4 = p_Val2_3760_reg_87793.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_5355_fu_39603_p4() {
    tmp_5355_fu_39603_p4 = p_Val2_3760_reg_87793.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5356_fu_39706_p2() {
    tmp_5356_fu_39706_p2 = (sel_tmp421_fu_39700_p2.read() | sel_tmp418_fu_39673_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5357_fu_39748_p2() {
    tmp_5357_fu_39748_p2 = (tmp_5356_reg_87830.read() | sel_tmp416_fu_39737_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5363_fu_39822_p2() {
    tmp_5363_fu_39822_p2 = (!b_exp_125_fu_39816_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_125_fu_39816_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_5364_fu_39828_p2() {
    tmp_5364_fu_39828_p2 = (!loc_V_121_reg_87874.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_121_reg_87874.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5365_fu_39807_p2() {
    tmp_5365_fu_39807_p2 = (!loc_V_120_fu_39793_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_120_fu_39793_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_5366_fu_39833_p2() {
    tmp_5366_fu_39833_p2 = (!loc_V_121_reg_87874.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_121_reg_87874.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5367_fu_39838_p2() {
    tmp_5367_fu_39838_p2 = (tmp_5365_reg_87882.read() & tmp_5366_fu_39833_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5368_fu_39843_p2() {
    tmp_5368_fu_39843_p2 = (!loc_V_120_reg_87868.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_120_reg_87868.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5369_fu_39868_p2() {
    tmp_5369_fu_39868_p2 = (tmp_5365_reg_87882.read() & tmp_5364_reg_87903.read());
}

void particlemaster_ReadCalculations::thread_tmp_5370_fu_50228_p3() {
    tmp_5370_fu_50228_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5319_reg_92372.read());
}

void particlemaster_ReadCalculations::thread_tmp_5371_fu_39872_p3() {
    tmp_5371_fu_39872_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5367_reg_87909.read());
}

void particlemaster_ReadCalculations::thread_tmp_5372_fu_50255_p3() {
    tmp_5372_fu_50255_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5322_fu_50224_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5373_fu_50263_p2() {
    tmp_5373_fu_50263_p2 = (!tmp_5372_fu_50255_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5372_fu_50255_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5374_fu_39899_p3() {
    tmp_5374_fu_39899_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5369_fu_39868_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5375_fu_39907_p2() {
    tmp_5375_fu_39907_p2 = (!tmp_5374_fu_39899_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5374_fu_39899_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5376_fu_50269_p3() {
    tmp_5376_fu_50269_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5320_reg_92377.read());
}

void particlemaster_ReadCalculations::thread_tmp_5377_fu_50276_p2() {
    tmp_5377_fu_50276_p2 = (!tmp_5376_fu_50269_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5376_fu_50269_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5378_fu_39913_p3() {
    tmp_5378_fu_39913_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5368_reg_87914.read());
}

void particlemaster_ReadCalculations::thread_tmp_5379_cast_fu_6568_p1() {
    tmp_5379_cast_fu_6568_p1 = esl_zext<77,75>(tmp_2826_fu_6560_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5380_fu_14646_p4() {
    tmp_5380_fu_14646_p4 = p_0415_0_i37_fu_14641_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_5381_fu_39920_p2() {
    tmp_5381_fu_39920_p2 = (!tmp_5378_fu_39913_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5378_fu_39913_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5382_fu_50310_p1() {
    tmp_5382_fu_50310_p1 = esl_zext<32,6>(index0_V_49_fu_50289_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5383_fu_50395_p4() {
    tmp_5383_fu_50395_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7186_reg_92444.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5384_fu_50404_p1() {
    tmp_5384_fu_50404_p1 = esl_zext<76,75>(sf49_fu_50386_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5385_fu_50416_p3() {
    tmp_5385_fu_50416_p3 = esl_concat<50,25>(tmp_7187_fu_50376_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5386_fu_50428_p1() {
    tmp_5386_fu_50428_p1 = esl_zext<77,76>(p_Val2_3767_fu_50408_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5387_fu_50451_p1() {
    tmp_5387_fu_50451_p1 = esl_zext<78,77>(p_Val2_3768_reg_92457.read());
}

void particlemaster_ReadCalculations::thread_tmp_5388_cast_fu_6651_p1() {
    tmp_5388_cast_fu_6651_p1 = esl_zext<82,81>(tmp_2832_fu_6644_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5388_fu_50454_p1() {
    tmp_5388_fu_50454_p1 = esl_zext<78,75>(p_Val2_3769_reg_92472.read());
}

void particlemaster_ReadCalculations::thread_tmp_5389_fu_51004_p1() {
    tmp_5389_fu_51004_p1 = esl_zext<32,4>(p_Val2_7116_reg_92451.read());
}

void particlemaster_ReadCalculations::thread_tmp_5391_fu_50500_p3() {
    tmp_5391_fu_50500_p3 = esl_concat<67,14>(tmp_5390_reg_92489.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5392_cast_fu_6687_p1() {
    tmp_5392_cast_fu_6687_p1 = esl_zext<83,80>(tmp_2835_fu_6680_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5392_fu_50511_p1() {
    tmp_5392_fu_50511_p1 = esl_zext<82,81>(p_Val2_3774_fu_50493_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5393_fu_50533_p1() {
    tmp_5393_fu_50533_p1 = esl_zext<83,82>(p_Val2_3775_reg_92494.read());
}

void particlemaster_ReadCalculations::thread_tmp_5394_fu_50536_p3() {
    tmp_5394_fu_50536_p3 = esl_concat<79,1>(p_Val2_3776_reg_92509.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5395_fu_51008_p1() {
    tmp_5395_fu_51008_p1 = esl_zext<32,6>(p_Val2_7117_reg_92483.read());
}

void particlemaster_ReadCalculations::thread_tmp_5396_fu_50585_p3() {
    tmp_5396_fu_50585_p3 = esl_concat<76,25>(tmp_7191_reg_92530.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5397_cast_fu_6736_p1() {
    tmp_5397_cast_fu_6736_p1 = esl_zext<102,101>(tmp_2837_fu_6729_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5397_fu_50596_p1() {
    tmp_5397_fu_50596_p1 = esl_zext<102,96>(p_Val2_3779_fu_50576_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5398_fu_50619_p1() {
    tmp_5398_fu_50619_p1 = esl_zext<103,102>(p_Val2_3780_reg_92535.read());
}

void particlemaster_ReadCalculations::thread_tmp_5399_fu_50622_p3() {
    tmp_5399_fu_50622_p3 = esl_concat<89,6>(p_Val2_3781_reg_92550.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5400_fu_51012_p1() {
    tmp_5400_fu_51012_p1 = esl_zext<32,6>(p_Val2_7118_reg_92524.read());
}

void particlemaster_ReadCalculations::thread_tmp_5401_cast_fu_6773_p1() {
    tmp_5401_cast_fu_6773_p1 = esl_zext<103,95>(tmp_2840_fu_6766_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5402_fu_50676_p3() {
    tmp_5402_fu_50676_p3 = esl_concat<86,34>(tmp_5401_reg_92567.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5403_fu_50687_p1() {
    tmp_5403_fu_50687_p1 = esl_zext<121,110>(p_Val2_3786_fu_50669_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5404_fu_50709_p1() {
    tmp_5404_fu_50709_p1 = esl_zext<122,121>(p_Val2_3787_reg_92572.read());
}

void particlemaster_ReadCalculations::thread_tmp_5405_fu_50712_p3() {
    tmp_5405_fu_50712_p3 = esl_concat<98,11>(p_Val2_3789_reg_92587.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5406_fu_50988_p1() {
    tmp_5406_fu_50988_p1 = esl_zext<32,6>(p_Val2_7119_reg_92561.read());
}

void particlemaster_ReadCalculations::thread_tmp_5407_cast_fu_6827_p1() {
    tmp_5407_cast_fu_6827_p1 = esl_zext<121,120>(tmp_2843_fu_6820_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5408_fu_50766_p3() {
    tmp_5408_fu_50766_p3 = esl_concat<81,44>(tmp_5407_reg_92604.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5409_fu_50777_p1() {
    tmp_5409_fu_50777_p1 = esl_zext<126,110>(p_Val2_3794_fu_50759_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5411_cast_fu_6863_p1() {
    tmp_5411_cast_fu_6863_p1 = esl_zext<122,109>(tmp_2846_fu_6856_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5411_fu_50799_p1() {
    tmp_5411_fu_50799_p1 = esl_zext<127,126>(p_Val2_3795_reg_92609.read());
}

void particlemaster_ReadCalculations::thread_tmp_5412_fu_50802_p3() {
    tmp_5412_fu_50802_p3 = esl_concat<93,16>(p_Val2_3796_reg_92624.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5413_fu_14698_p1() {
    tmp_5413_fu_14698_p1 = p_0415_0_i37_fu_14641_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5415_fu_50992_p1() {
    tmp_5415_fu_50992_p1 = esl_zext<32,6>(p_Val2_7120_reg_92598.read());
}

void particlemaster_ReadCalculations::thread_tmp_5416_fu_25356_p1() {
    tmp_5416_fu_25356_p1 = grp_fu_25350_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5417_cast_fu_6917_p1() {
    tmp_5417_cast_fu_6917_p1 = esl_zext<126,125>(tmp_2849_fu_6910_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5418_fu_50856_p3() {
    tmp_5418_fu_50856_p3 = esl_concat<76,54>(tmp_5417_reg_92641.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5419_fu_50867_p1() {
    tmp_5419_fu_50867_p1 = esl_zext<131,110>(p_Val2_3800_fu_50849_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5420_fu_50889_p1() {
    tmp_5420_fu_50889_p1 = esl_zext<132,131>(p_Val2_3801_reg_92646.read());
}

void particlemaster_ReadCalculations::thread_tmp_5421_cast_fu_6953_p1() {
    tmp_5421_cast_fu_6953_p1 = esl_zext<127,109>(tmp_2852_fu_6946_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5421_fu_50892_p3() {
    tmp_5421_fu_50892_p3 = esl_concat<88,21>(p_Val2_3802_reg_92661.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5422_fu_50996_p1() {
    tmp_5422_fu_50996_p1 = esl_zext<32,6>(p_Val2_7121_reg_92635.read());
}

void particlemaster_ReadCalculations::thread_tmp_5424_fu_50946_p3() {
    tmp_5424_fu_50946_p3 = esl_concat<71,64>(tmp_5423_reg_92678.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5425_fu_50957_p1() {
    tmp_5425_fu_50957_p1 = esl_zext<136,110>(p_Val2_3806_fu_50939_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5426_fu_51020_p1() {
    tmp_5426_fu_51020_p1 = esl_zext<137,136>(p_Val2_3807_reg_92683.read());
}

void particlemaster_ReadCalculations::thread_tmp_5427_cast_fu_7007_p1() {
    tmp_5427_cast_fu_7007_p1 = esl_zext<131,130>(tmp_2855_fu_7000_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5427_fu_51023_p3() {
    tmp_5427_fu_51023_p3 = esl_concat<83,26>(p_Val2_3808_reg_92718.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5428_fu_51000_p1() {
    tmp_5428_fu_51000_p1 = esl_zext<32,6>(p_Val2_7122_reg_92672.read());
}

void particlemaster_ReadCalculations::thread_tmp_5431_cast_fu_7043_p1() {
    tmp_5431_cast_fu_7043_p1 = esl_zext<132,109>(tmp_2858_fu_7036_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5432_fu_51156_p3() {
    tmp_5432_fu_51156_p3 = esl_concat<72,45>(tmp_5429_reg_92753.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5434_fu_51186_p3() {
    tmp_5434_fu_51186_p3 = esl_concat<90,30>(p_Val2_3762_reg_92784.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5435_fu_51197_p1() {
    tmp_5435_fu_51197_p1 = esl_zext<122,121>(p_Val2_6777_cast_fu_51153_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5436_fu_51218_p1() {
    tmp_5436_fu_51218_p1 = esl_zext<123,122>(p_Val2_3813_reg_92805.read());
}

void particlemaster_ReadCalculations::thread_tmp_5437_cast_fu_7097_p1() {
    tmp_5437_cast_fu_7097_p1 = esl_zext<136,135>(tmp_2861_fu_7090_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5437_fu_51221_p1() {
    tmp_5437_fu_51221_p1 = esl_zext<123,121>(p_Val2_3812_fu_51215_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5438_fu_51225_p1() {
    tmp_5438_fu_51225_p1 = esl_sext<120,73>(tmp_5433_reg_92799.read());
}

void particlemaster_ReadCalculations::thread_tmp_5441_cast_fu_7207_p1() {
    tmp_5441_cast_fu_7207_p1 = esl_zext<137,109>(tmp_2864_fu_7200_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5441_fu_51299_p3() {
    tmp_5441_fu_51299_p3 = esl_concat<77,52>(tmp_5440_reg_92830.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5442_fu_25377_p1() {
    tmp_5442_fu_25377_p1 = p_Val2_2618_reg_81562.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5443_fu_51309_p3() {
    tmp_5443_fu_51309_p3 = esl_concat<1,18>(tmp_7194_reg_92845.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5445_fu_51332_p2() {
    tmp_5445_fu_51332_p2 = (!tmp_7196_fu_51329_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7196_fu_51329_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5446_fu_25380_p3() {
    tmp_5446_fu_25380_p3 = p_Val2_2618_reg_81562.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5447_fu_51392_p1() {
    tmp_5447_fu_51392_p1 = esl_sext<72,71>(p_Val2_6402_reg_92835.read());
}

void particlemaster_ReadCalculations::thread_tmp_5448_fu_51395_p1() {
    tmp_5448_fu_51395_p1 = esl_sext<72,71>(p_Val2_3820_reg_92884.read());
}

void particlemaster_ReadCalculations::thread_tmp_5449_cast_fu_7340_p1() {
    tmp_5449_cast_fu_7340_p1 = esl_zext<118,117>(tmp_2869_fu_7333_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5449_fu_51550_p1() {
    tmp_5449_fu_51550_p1 = esl_zext<32,8>(m_diff_hi_V_57_reg_92889.read());
}

void particlemaster_ReadCalculations::thread_tmp_5450_cast_fu_7344_p1() {
    tmp_5450_cast_fu_7344_p1 = esl_zext<118,79>(tmp_2868_reg_73737.read());
}

void particlemaster_ReadCalculations::thread_tmp_5450_fu_51448_p1() {
    tmp_5450_fu_51448_p1 = esl_zext<32,8>(Z4_ind_V_57_fu_51438_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5451_fu_51458_p1() {
    tmp_5451_fu_51458_p1 = esl_zext<36,35>(p_Val2_6404_reg_92906.read());
}

void particlemaster_ReadCalculations::thread_tmp_5452_fu_51461_p1() {
    tmp_5452_fu_51461_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5453_fu_51453_p1() {
    tmp_5453_fu_51453_p1 = esl_zext<32,8>(p_Val2_6406_fu_51424_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5454_cast_fu_7370_p1() {
    tmp_5454_cast_fu_7370_p1 = esl_sext<122,120>(tmp_2871_fu_7363_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5454_fu_51471_p4() {
    tmp_5454_fu_51471_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6406_reg_92901.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5456_fu_51507_p1() {
    tmp_5456_fu_51507_p1 = esl_zext<44,43>(tmp_5454_reg_92927.read());
}

void particlemaster_ReadCalculations::thread_tmp_5457_fu_51503_p1() {
    tmp_5457_fu_51503_p1 = esl_zext<32,8>(p_Val2_6409_reg_92894.read());
}

void particlemaster_ReadCalculations::thread_tmp_5459_fu_51528_p4() {
    tmp_5459_fu_51528_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6409_reg_92894.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5461_fu_51564_p5() {
    tmp_5461_fu_51564_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6409_reg_92894.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5462_fu_25554_p1() {
    tmp_5462_fu_25554_p1 = p_Val2_2630_fu_25548_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5465_fu_51620_p1() {
    tmp_5465_fu_51620_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5466_fu_51630_p3() {
    tmp_5466_fu_51630_p3 = esl_concat<59,49>(p_Val2_3829_reg_92993.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5467_fu_51664_p4() {
    tmp_5467_fu_51664_p4 = p_Val2_3831_fu_51640_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5468_fu_51674_p3() {
    tmp_5468_fu_51674_p3 = esl_concat<57,1>(tmp_5467_fu_51664_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5469_fu_51342_p2() {
    tmp_5469_fu_51342_p2 = (!tmp_10283_cast_fu_51338_p1.read().is_01() || !p_Val2_3815_fu_51292_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_10283_cast_fu_51338_p1.read() != p_Val2_3815_fu_51292_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5470_fu_39954_p1() {
    tmp_5470_fu_39954_p1 = esl_zext<32,6>(index0_V_50_fu_39933_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5471_fu_40039_p4() {
    tmp_5471_fu_40039_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7201_reg_87981.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5472_fu_40048_p1() {
    tmp_5472_fu_40048_p1 = esl_zext<76,75>(sf50_fu_40030_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5473_fu_40060_p3() {
    tmp_5473_fu_40060_p3 = esl_concat<50,25>(tmp_7202_fu_40020_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5474_fu_40072_p1() {
    tmp_5474_fu_40072_p1 = esl_zext<77,76>(p_Val2_3838_fu_40052_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5475_fu_40095_p1() {
    tmp_5475_fu_40095_p1 = esl_zext<78,77>(p_Val2_3839_reg_87994.read());
}

void particlemaster_ReadCalculations::thread_tmp_5476_fu_40098_p1() {
    tmp_5476_fu_40098_p1 = esl_zext<78,75>(p_Val2_3840_reg_88009.read());
}

void particlemaster_ReadCalculations::thread_tmp_5477_fu_40648_p1() {
    tmp_5477_fu_40648_p1 = esl_zext<32,4>(p_Val2_7158_reg_87988.read());
}

void particlemaster_ReadCalculations::thread_tmp_5479_fu_40144_p3() {
    tmp_5479_fu_40144_p3 = esl_concat<67,14>(tmp_5478_reg_88026.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5480_fu_40155_p1() {
    tmp_5480_fu_40155_p1 = esl_zext<82,81>(p_Val2_3844_fu_40137_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5481_fu_40177_p1() {
    tmp_5481_fu_40177_p1 = esl_zext<83,82>(p_Val2_3845_reg_88031.read());
}

void particlemaster_ReadCalculations::thread_tmp_5482_fu_40180_p3() {
    tmp_5482_fu_40180_p3 = esl_concat<79,1>(p_Val2_3846_reg_88046.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5483_fu_40652_p1() {
    tmp_5483_fu_40652_p1 = esl_zext<32,6>(p_Val2_7159_reg_88020.read());
}

void particlemaster_ReadCalculations::thread_tmp_5484_fu_40229_p3() {
    tmp_5484_fu_40229_p3 = esl_concat<76,25>(tmp_7206_reg_88067.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5485_fu_40240_p1() {
    tmp_5485_fu_40240_p1 = esl_zext<102,96>(p_Val2_3849_fu_40220_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5486_fu_40263_p1() {
    tmp_5486_fu_40263_p1 = esl_zext<103,102>(p_Val2_3850_reg_88072.read());
}

void particlemaster_ReadCalculations::thread_tmp_5487_fu_40266_p3() {
    tmp_5487_fu_40266_p3 = esl_concat<89,6>(p_Val2_3851_reg_88087.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5488_fu_40656_p1() {
    tmp_5488_fu_40656_p1 = esl_zext<32,6>(p_Val2_7160_reg_88061.read());
}

void particlemaster_ReadCalculations::thread_tmp_5490_fu_40320_p3() {
    tmp_5490_fu_40320_p3 = esl_concat<86,34>(tmp_5489_reg_88104.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5491_fu_40331_p1() {
    tmp_5491_fu_40331_p1 = esl_zext<121,110>(p_Val2_3855_fu_40313_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5492_fu_25568_p1() {
    tmp_5492_fu_25568_p1 = p_Val2_2630_fu_25548_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5493_fu_40353_p1() {
    tmp_5493_fu_40353_p1 = esl_zext<122,121>(p_Val2_3856_reg_88109.read());
}

void particlemaster_ReadCalculations::thread_tmp_5494_fu_40356_p3() {
    tmp_5494_fu_40356_p3 = esl_concat<98,11>(p_Val2_3857_reg_88124.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5495_fu_40632_p1() {
    tmp_5495_fu_40632_p1 = esl_zext<32,6>(p_Val2_7161_reg_88098.read());
}

void particlemaster_ReadCalculations::thread_tmp_5497_fu_40410_p3() {
    tmp_5497_fu_40410_p3 = esl_concat<81,44>(tmp_5496_reg_88141.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5498_fu_40421_p1() {
    tmp_5498_fu_40421_p1 = esl_zext<126,110>(p_Val2_3861_fu_40403_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5499_fu_40443_p1() {
    tmp_5499_fu_40443_p1 = esl_zext<127,126>(p_Val2_3862_reg_88146.read());
}

void particlemaster_ReadCalculations::thread_tmp_5500_fu_40446_p3() {
    tmp_5500_fu_40446_p3 = esl_concat<93,16>(p_Val2_3863_reg_88161.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5501_fu_40636_p1() {
    tmp_5501_fu_40636_p1 = esl_zext<32,6>(p_Val2_7162_reg_88135.read());
}

void particlemaster_ReadCalculations::thread_tmp_5503_fu_40500_p3() {
    tmp_5503_fu_40500_p3 = esl_concat<76,54>(tmp_5502_reg_88178.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5504_fu_40511_p1() {
    tmp_5504_fu_40511_p1 = esl_zext<131,110>(p_Val2_3867_fu_40493_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5505_fu_40533_p1() {
    tmp_5505_fu_40533_p1 = esl_zext<132,131>(p_Val2_3868_reg_88183.read());
}

void particlemaster_ReadCalculations::thread_tmp_5506_fu_40536_p3() {
    tmp_5506_fu_40536_p3 = esl_concat<88,21>(p_Val2_3869_reg_88198.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5507_fu_40640_p1() {
    tmp_5507_fu_40640_p1 = esl_zext<32,6>(p_Val2_7163_reg_88172.read());
}

void particlemaster_ReadCalculations::thread_tmp_5509_fu_40590_p3() {
    tmp_5509_fu_40590_p3 = esl_concat<71,64>(tmp_5508_reg_88215.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5510_fu_40601_p1() {
    tmp_5510_fu_40601_p1 = esl_zext<136,110>(p_Val2_3874_fu_40583_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5511_fu_40664_p1() {
    tmp_5511_fu_40664_p1 = esl_zext<137,136>(p_Val2_3875_reg_88220.read());
}

void particlemaster_ReadCalculations::thread_tmp_5512_fu_40667_p3() {
    tmp_5512_fu_40667_p3 = esl_concat<83,26>(p_Val2_3876_reg_88255.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5513_fu_40644_p1() {
    tmp_5513_fu_40644_p1 = esl_zext<32,6>(p_Val2_7164_reg_88209.read());
}

void particlemaster_ReadCalculations::thread_tmp_5517_fu_40800_p3() {
    tmp_5517_fu_40800_p3 = esl_concat<72,45>(tmp_5514_reg_88290.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5518_fu_26214_p1() {
    tmp_5518_fu_26214_p1 = p_Val2_2663_fu_26208_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5519_fu_26218_p1() {
    tmp_5519_fu_26218_p1 = p_Val2_2663_fu_26208_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5521_fu_40830_p3() {
    tmp_5521_fu_40830_p3 = esl_concat<90,30>(p_Val2_3834_reg_88321.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5523_fu_40841_p1() {
    tmp_5523_fu_40841_p1 = esl_zext<122,121>(p_Val2_6844_cast_fu_40797_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5524_fu_40862_p1() {
    tmp_5524_fu_40862_p1 = esl_zext<123,122>(p_Val2_3883_reg_88342.read());
}

void particlemaster_ReadCalculations::thread_tmp_5525_fu_40865_p1() {
    tmp_5525_fu_40865_p1 = esl_zext<123,121>(p_Val2_3882_fu_40859_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5526_fu_40869_p1() {
    tmp_5526_fu_40869_p1 = esl_sext<120,73>(tmp_5520_reg_88336.read());
}

void particlemaster_ReadCalculations::thread_tmp_5529_fu_40943_p3() {
    tmp_5529_fu_40943_p3 = esl_concat<77,52>(tmp_5528_reg_88367.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5530_fu_40953_p3() {
    tmp_5530_fu_40953_p3 = esl_concat<1,18>(tmp_7209_reg_88382.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5532_fu_40976_p2() {
    tmp_5532_fu_40976_p2 = (!tmp_7211_fu_40973_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7211_fu_40973_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5533_fu_26355_p3() {
    tmp_5533_fu_26355_p3 = r_V_385_reg_81979.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5534_fu_41036_p1() {
    tmp_5534_fu_41036_p1 = esl_sext<72,71>(p_Val2_6422_reg_88372.read());
}

void particlemaster_ReadCalculations::thread_tmp_5535_fu_26336_p1() {
    tmp_5535_fu_26336_p1 = grp_fu_72831_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5536_fu_41039_p1() {
    tmp_5536_fu_41039_p1 = esl_sext<72,71>(p_Val2_3891_reg_88421.read());
}

void particlemaster_ReadCalculations::thread_tmp_5537_fu_41194_p1() {
    tmp_5537_fu_41194_p1 = esl_zext<32,8>(m_diff_hi_V_58_reg_88426.read());
}

void particlemaster_ReadCalculations::thread_tmp_5538_fu_41092_p1() {
    tmp_5538_fu_41092_p1 = esl_zext<32,8>(Z4_ind_V_58_fu_41082_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5539_fu_41102_p1() {
    tmp_5539_fu_41102_p1 = esl_zext<36,35>(p_Val2_6424_reg_88443.read());
}

void particlemaster_ReadCalculations::thread_tmp_5540_fu_41105_p1() {
    tmp_5540_fu_41105_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5541_fu_41097_p1() {
    tmp_5541_fu_41097_p1 = esl_zext<32,8>(p_Val2_6426_fu_41068_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5542_fu_41115_p4() {
    tmp_5542_fu_41115_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6426_reg_88438.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5544_fu_41151_p1() {
    tmp_5544_fu_41151_p1 = esl_zext<44,43>(tmp_5542_reg_88464.read());
}

void particlemaster_ReadCalculations::thread_tmp_5545_fu_41147_p1() {
    tmp_5545_fu_41147_p1 = esl_zext<32,8>(p_Val2_6429_reg_88431.read());
}

void particlemaster_ReadCalculations::thread_tmp_5547_fu_41172_p4() {
    tmp_5547_fu_41172_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6429_reg_88431.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5549_fu_41208_p5() {
    tmp_5549_fu_41208_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6429_reg_88431.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5552_fu_41264_p1() {
    tmp_5552_fu_41264_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5553_fu_41274_p3() {
    tmp_5553_fu_41274_p3 = esl_concat<59,49>(p_Val2_3901_reg_88530.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5554_fu_41308_p4() {
    tmp_5554_fu_41308_p4 = p_Val2_3904_fu_41284_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5555_fu_41318_p3() {
    tmp_5555_fu_41318_p3 = esl_concat<57,1>(tmp_5554_fu_41308_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5556_fu_40986_p2() {
    tmp_5556_fu_40986_p2 = (!tmp_10318_cast_fu_40982_p1.read().is_01() || !p_Val2_3885_fu_40936_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_10318_cast_fu_40982_p1.read() != p_Val2_3885_fu_40936_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5557_fu_51722_p2() {
    tmp_5557_fu_51722_p2 = (!p_0415_0_i57_reg_93008.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i57_reg_93008.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5558_fu_41366_p2() {
    tmp_5558_fu_41366_p2 = (!p_0415_0_i58_reg_88545.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i58_reg_88545.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5559_fu_51778_p1() {
    tmp_5559_fu_51778_p1 = tmp_22811_neg_reg_93025.read();
}

void particlemaster_ReadCalculations::thread_tmp_5563_cast_fu_7506_p1() {
    tmp_5563_cast_fu_7506_p1 = esl_sext<130,129>(tmp_2878_fu_7467_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5564_fu_51792_p1() {
    tmp_5564_fu_51792_p1 = tmp_23463_neg_fu_51786_p2.read();
}

void particlemaster_ReadCalculations::thread_tmp_5565_fu_41422_p1() {
    tmp_5565_fu_41422_p1 = tmp_22816_neg_reg_88562.read();
}

void particlemaster_ReadCalculations::thread_tmp_5570_fu_51799_p4() {
    tmp_5570_fu_51799_p4 = p_0_i_to_int_fu_51796_p1.read().range(30, 23);
}

void particlemaster_ReadCalculations::thread_tmp_5571_fu_51829_p4() {
    tmp_5571_fu_51829_p4 = bestValue1_to_int_fu_51825_p1.read().range(30, 23);
}

void particlemaster_ReadCalculations::thread_tmp_5572_fu_51843_p2() {
    tmp_5572_fu_51843_p2 = (notrhs_reg_93045.read() | notlhs_reg_93040.read());
}

void particlemaster_ReadCalculations::thread_tmp_5573_fu_51859_p2() {
    tmp_5573_fu_51859_p2 = (notrhs2_fu_51853_p2.read() | notlhs2_fu_51847_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5574_fu_51865_p2() {
    tmp_5574_fu_51865_p2 = (tmp_5572_fu_51843_p2.read() & tmp_5573_fu_51859_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5575_fu_26663_p3() {
    tmp_5575_fu_26663_p3 = p_Val2_2681_fu_26647_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_5577_cast_fu_7678_p1() {
    tmp_5577_cast_fu_7678_p1 = esl_zext<36,20>(tmp_2890_reg_73881.read());
}

void particlemaster_ReadCalculations::thread_tmp_5577_fu_51871_p2() {
    tmp_5577_fu_51871_p2 = (tmp_5574_fu_51865_p2.read() & tmp_5576_reg_93050.read());
}

void particlemaster_ReadCalculations::thread_tmp_5578_fu_51933_p3() {
    tmp_5578_fu_51933_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5579_fu_51876_p3() {
    tmp_5579_fu_51876_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_5580_fu_51959_p3() {
    tmp_5580_fu_51959_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5581_fu_51966_p2() {
    tmp_5581_fu_51966_p2 = (!tmp_5580_fu_51959_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5580_fu_51959_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5582_fu_51902_p3() {
    tmp_5582_fu_51902_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_5583_fu_51909_p2() {
    tmp_5583_fu_51909_p2 = (!tmp_5582_fu_51902_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5582_fu_51902_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5584_cast_fu_7743_p1() {
    tmp_5584_cast_fu_7743_p1 = esl_zext<52,51>(tmp_2896_fu_7732_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_5584_fu_51972_p3() {
    tmp_5584_fu_51972_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5585_fu_51979_p2() {
    tmp_5585_fu_51979_p2 = (!tmp_5584_fu_51972_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5584_fu_51972_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5586_cast_fu_7747_p1() {
    tmp_5586_cast_fu_7747_p1 = esl_zext<44,36>(tmp_2895_reg_73912.read());
}

void particlemaster_ReadCalculations::thread_tmp_5586_fu_51915_p3() {
    tmp_5586_fu_51915_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5587_fu_51922_p2() {
    tmp_5587_fu_51922_p2 = (!tmp_5586_fu_51915_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5586_fu_51915_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5588_fu_51985_p1() {
    tmp_5588_fu_51985_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5589_fu_62438_p4() {
    tmp_5589_fu_62438_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7222_reg_97595.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5590_fu_62447_p1() {
    tmp_5590_fu_62447_p1 = esl_zext<76,75>(sf51_fu_62429_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5591_fu_62459_p3() {
    tmp_5591_fu_62459_p3 = esl_concat<50,25>(tmp_7223_fu_62419_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5592_fu_62471_p1() {
    tmp_5592_fu_62471_p1 = esl_zext<77,76>(p_Val2_3913_fu_62451_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5593_fu_62494_p1() {
    tmp_5593_fu_62494_p1 = esl_zext<78,77>(p_Val2_3914_reg_97608.read());
}

void particlemaster_ReadCalculations::thread_tmp_5594_cast_fu_7827_p1() {
    tmp_5594_cast_fu_7827_p1 = esl_zext<108,100>(p_Val2_2083_reg_73937.read());
}

void particlemaster_ReadCalculations::thread_tmp_5594_fu_62497_p1() {
    tmp_5594_fu_62497_p1 = esl_zext<78,75>(p_Val2_3916_reg_97623.read());
}

void particlemaster_ReadCalculations::thread_tmp_5595_fu_63053_p1() {
    tmp_5595_fu_63053_p1 = esl_zext<32,4>(p_Val2_7165_reg_97602.read());
}

void particlemaster_ReadCalculations::thread_tmp_5597_fu_62543_p3() {
    tmp_5597_fu_62543_p3 = esl_concat<67,14>(tmp_5596_reg_97640.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5598_fu_62554_p1() {
    tmp_5598_fu_62554_p1 = esl_zext<82,81>(p_Val2_3921_fu_62536_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5599_fu_62576_p1() {
    tmp_5599_fu_62576_p1 = esl_zext<83,82>(p_Val2_3922_reg_97645.read());
}

void particlemaster_ReadCalculations::thread_tmp_5600_fu_62579_p3() {
    tmp_5600_fu_62579_p3 = esl_concat<79,1>(p_Val2_3923_reg_97660.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5601_fu_63057_p1() {
    tmp_5601_fu_63057_p1 = esl_zext<32,6>(p_Val2_7166_reg_97634.read());
}

void particlemaster_ReadCalculations::thread_tmp_5602_fu_62628_p3() {
    tmp_5602_fu_62628_p3 = esl_concat<76,25>(tmp_7227_reg_97681.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5603_fu_62639_p1() {
    tmp_5603_fu_62639_p1 = esl_zext<102,96>(p_Val2_3927_fu_62619_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5604_fu_62662_p1() {
    tmp_5604_fu_62662_p1 = esl_zext<103,102>(p_Val2_3928_reg_97686.read());
}

void particlemaster_ReadCalculations::thread_tmp_5606_fu_62665_p3() {
    tmp_5606_fu_62665_p3 = esl_concat<89,6>(p_Val2_3929_reg_97701.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5608_fu_15006_p1() {
    tmp_5608_fu_15006_p1 = grp_fu_15000_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5609_fu_63061_p1() {
    tmp_5609_fu_63061_p1 = esl_zext<32,6>(p_Val2_7167_reg_97675.read());
}

void particlemaster_ReadCalculations::thread_tmp_5611_fu_15027_p1() {
    tmp_5611_fu_15027_p1 = p_Val2_2685_reg_77100.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5612_fu_62719_p3() {
    tmp_5612_fu_62719_p3 = esl_concat<86,34>(tmp_5610_reg_97718.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5613_fu_62730_p1() {
    tmp_5613_fu_62730_p1 = esl_zext<121,110>(p_Val2_3934_fu_62712_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5614_fu_62752_p1() {
    tmp_5614_fu_62752_p1 = esl_zext<122,121>(p_Val2_3935_reg_97723.read());
}

void particlemaster_ReadCalculations::thread_tmp_5615_fu_62755_p3() {
    tmp_5615_fu_62755_p3 = esl_concat<98,11>(p_Val2_3936_reg_97738.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5616_fu_63037_p1() {
    tmp_5616_fu_63037_p1 = esl_zext<32,6>(p_Val2_7168_reg_97712.read());
}

void particlemaster_ReadCalculations::thread_tmp_5618_fu_62809_p3() {
    tmp_5618_fu_62809_p3 = esl_concat<81,44>(tmp_5617_reg_97755.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5619_fu_62820_p1() {
    tmp_5619_fu_62820_p1 = esl_zext<126,110>(p_Val2_3941_fu_62802_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5620_fu_62842_p1() {
    tmp_5620_fu_62842_p1 = esl_zext<127,126>(p_Val2_3942_reg_97760.read());
}

void particlemaster_ReadCalculations::thread_tmp_5621_fu_62845_p3() {
    tmp_5621_fu_62845_p3 = esl_concat<93,16>(p_Val2_3943_reg_97775.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5622_fu_15030_p3() {
    tmp_5622_fu_15030_p3 = p_Val2_2685_reg_77100.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5623_fu_63041_p1() {
    tmp_5623_fu_63041_p1 = esl_zext<32,6>(p_Val2_7169_reg_97749.read());
}

void particlemaster_ReadCalculations::thread_tmp_5624_fu_15204_p1() {
    tmp_5624_fu_15204_p1 = p_Val2_2697_fu_15198_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5626_fu_62899_p3() {
    tmp_5626_fu_62899_p3 = esl_concat<76,54>(tmp_5625_reg_97792.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5627_fu_62910_p1() {
    tmp_5627_fu_62910_p1 = esl_zext<131,110>(p_Val2_3948_fu_62892_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5628_fu_62932_p1() {
    tmp_5628_fu_62932_p1 = esl_zext<132,131>(p_Val2_3949_reg_97797.read());
}

void particlemaster_ReadCalculations::thread_tmp_5629_fu_62935_p3() {
    tmp_5629_fu_62935_p3 = esl_concat<88,21>(p_Val2_3950_reg_97812.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5630_fu_63045_p1() {
    tmp_5630_fu_63045_p1 = esl_zext<32,6>(p_Val2_7170_reg_97786.read());
}

void particlemaster_ReadCalculations::thread_tmp_5632_fu_62989_p3() {
    tmp_5632_fu_62989_p3 = esl_concat<71,64>(tmp_5631_reg_97829.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5633_fu_63000_p1() {
    tmp_5633_fu_63000_p1 = esl_zext<136,110>(p_Val2_3954_fu_62982_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5634_fu_63069_p1() {
    tmp_5634_fu_63069_p1 = esl_zext<137,136>(p_Val2_3955_reg_97834.read());
}

void particlemaster_ReadCalculations::thread_tmp_5635_fu_63072_p3() {
    tmp_5635_fu_63072_p3 = esl_concat<83,26>(p_Val2_3956_reg_97874.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5636_fu_63049_p1() {
    tmp_5636_fu_63049_p1 = esl_zext<32,6>(p_Val2_7171_reg_97823.read());
}

void particlemaster_ReadCalculations::thread_tmp_5640_fu_63205_p3() {
    tmp_5640_fu_63205_p3 = esl_concat<72,45>(tmp_5637_reg_97909.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5642_fu_63235_p3() {
    tmp_5642_fu_63235_p3 = esl_concat<90,30>(p_Val2_3908_reg_97940.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5643_fu_63246_p1() {
    tmp_5643_fu_63246_p1 = esl_zext<122,121>(p_Val2_7369_cast_fu_63202_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5644_fu_63267_p1() {
    tmp_5644_fu_63267_p1 = esl_zext<123,122>(p_Val2_3963_reg_97961.read());
}

void particlemaster_ReadCalculations::thread_tmp_5645_fu_63270_p1() {
    tmp_5645_fu_63270_p1 = esl_zext<123,121>(p_Val2_3962_fu_63264_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5646_cast_fu_8147_p1() {
    tmp_5646_cast_fu_8147_p1 = esl_zext<12,11>(loc_V_64_fu_8133_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5646_fu_63274_p1() {
    tmp_5646_fu_63274_p1 = esl_sext<120,73>(tmp_5641_reg_97955.read());
}

void particlemaster_ReadCalculations::thread_tmp_5649_fu_63348_p3() {
    tmp_5649_fu_63348_p3 = esl_concat<77,52>(tmp_5648_reg_97986.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5650_fu_63358_p3() {
    tmp_5650_fu_63358_p3 = esl_concat<1,18>(tmp_7230_reg_98001.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5652_fu_63381_p2() {
    tmp_5652_fu_63381_p2 = (!tmp_7232_fu_63378_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7232_fu_63378_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5653_fu_63441_p1() {
    tmp_5653_fu_63441_p1 = esl_sext<72,71>(p_Val2_6546_reg_97991.read());
}

void particlemaster_ReadCalculations::thread_tmp_5654_fu_63444_p1() {
    tmp_5654_fu_63444_p1 = esl_sext<72,71>(p_Val2_3974_reg_98040.read());
}

void particlemaster_ReadCalculations::thread_tmp_5655_fu_63599_p1() {
    tmp_5655_fu_63599_p1 = esl_zext<32,8>(m_diff_hi_V_59_reg_98045.read());
}

void particlemaster_ReadCalculations::thread_tmp_5656_fu_63497_p1() {
    tmp_5656_fu_63497_p1 = esl_zext<32,8>(Z4_ind_V_59_fu_63487_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5657_fu_63507_p1() {
    tmp_5657_fu_63507_p1 = esl_zext<36,35>(p_Val2_6548_reg_98062.read());
}

void particlemaster_ReadCalculations::thread_tmp_5658_fu_63510_p1() {
    tmp_5658_fu_63510_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5659_fu_63502_p1() {
    tmp_5659_fu_63502_p1 = esl_zext<32,8>(p_Val2_6550_fu_63473_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5660_fu_63520_p4() {
    tmp_5660_fu_63520_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6550_reg_98057.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5662_fu_63556_p1() {
    tmp_5662_fu_63556_p1 = esl_zext<44,43>(tmp_5660_reg_98083.read());
}

void particlemaster_ReadCalculations::thread_tmp_5663_fu_63552_p1() {
    tmp_5663_fu_63552_p1 = esl_zext<32,8>(p_Val2_6553_reg_98050.read());
}

void particlemaster_ReadCalculations::thread_tmp_5664_fu_15218_p1() {
    tmp_5664_fu_15218_p1 = p_Val2_2697_fu_15198_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5666_fu_63577_p4() {
    tmp_5666_fu_63577_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6553_reg_98050.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5667_not_fu_7814_p2() {
    tmp_5667_not_fu_7814_p2 = (!tmp_2818_fu_7806_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2818_fu_7806_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5668_fu_63613_p5() {
    tmp_5668_fu_63613_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6553_reg_98050.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5671_fu_63669_p1() {
    tmp_5671_fu_63669_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5672_fu_63679_p3() {
    tmp_5672_fu_63679_p3 = esl_concat<59,49>(p_Val2_3983_reg_98149.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5673_fu_63713_p4() {
    tmp_5673_fu_63713_p4 = p_Val2_3985_fu_63689_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5674_fu_63723_p3() {
    tmp_5674_fu_63723_p3 = esl_concat<57,1>(tmp_5673_fu_63713_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5675_fu_63391_p2() {
    tmp_5675_fu_63391_p2 = (!tmp_11159_cast_fu_63387_p1.read().is_01() || !p_Val2_3968_fu_63341_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_11159_cast_fu_63387_p1.read() != p_Val2_3968_fu_63341_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5676_fu_51928_p1() {
    tmp_5676_fu_51928_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5677_fu_52070_p4() {
    tmp_5677_fu_52070_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7237_reg_93140.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5678_fu_52079_p1() {
    tmp_5678_fu_52079_p1 = esl_zext<76,75>(sf52_fu_52061_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5679_cast_fu_18817_p1() {
    tmp_5679_cast_fu_18817_p1 = esl_zext<77,75>(tmp_2928_fu_18809_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5679_fu_52091_p3() {
    tmp_5679_fu_52091_p3 = esl_concat<50,25>(tmp_7238_fu_52051_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5680_fu_52103_p1() {
    tmp_5680_fu_52103_p1 = esl_zext<77,76>(p_Val2_3992_fu_52083_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5681_fu_52126_p1() {
    tmp_5681_fu_52126_p1 = esl_zext<78,77>(p_Val2_3993_reg_93153.read());
}

void particlemaster_ReadCalculations::thread_tmp_5682_fu_52129_p1() {
    tmp_5682_fu_52129_p1 = esl_zext<78,75>(p_Val2_3994_reg_93168.read());
}

void particlemaster_ReadCalculations::thread_tmp_5683_fu_52685_p1() {
    tmp_5683_fu_52685_p1 = esl_zext<32,4>(p_Val2_7207_reg_93147.read());
}

void particlemaster_ReadCalculations::thread_tmp_5685_fu_52175_p3() {
    tmp_5685_fu_52175_p3 = esl_concat<67,14>(tmp_5684_reg_93185.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5686_fu_52186_p1() {
    tmp_5686_fu_52186_p1 = esl_zext<82,81>(p_Val2_3998_fu_52168_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5687_fu_52208_p1() {
    tmp_5687_fu_52208_p1 = esl_zext<83,82>(p_Val2_3999_reg_93190.read());
}

void particlemaster_ReadCalculations::thread_tmp_5688_cast_fu_18900_p1() {
    tmp_5688_cast_fu_18900_p1 = esl_zext<82,81>(tmp_2934_fu_18893_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5688_fu_52211_p3() {
    tmp_5688_fu_52211_p3 = esl_concat<79,1>(p_Val2_4000_reg_93205.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5689_fu_52689_p1() {
    tmp_5689_fu_52689_p1 = esl_zext<32,6>(p_Val2_7208_reg_93179.read());
}

void particlemaster_ReadCalculations::thread_tmp_5690_fu_52260_p3() {
    tmp_5690_fu_52260_p3 = esl_concat<76,25>(tmp_7242_reg_93226.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5691_fu_52271_p1() {
    tmp_5691_fu_52271_p1 = esl_zext<102,96>(p_Val2_4003_fu_52251_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5692_cast_fu_18936_p1() {
    tmp_5692_cast_fu_18936_p1 = esl_zext<83,80>(tmp_2937_fu_18929_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5692_fu_52294_p1() {
    tmp_5692_fu_52294_p1 = esl_zext<103,102>(p_Val2_4004_reg_93231.read());
}

void particlemaster_ReadCalculations::thread_tmp_5693_fu_52297_p3() {
    tmp_5693_fu_52297_p3 = esl_concat<89,6>(p_Val2_4005_reg_93246.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5694_fu_15864_p1() {
    tmp_5694_fu_15864_p1 = p_Val2_2730_fu_15858_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5695_fu_52693_p1() {
    tmp_5695_fu_52693_p1 = esl_zext<32,6>(p_Val2_7209_reg_93220.read());
}

void particlemaster_ReadCalculations::thread_tmp_5697_cast_fu_18985_p1() {
    tmp_5697_cast_fu_18985_p1 = esl_zext<102,101>(tmp_2939_fu_18978_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5697_fu_15868_p1() {
    tmp_5697_fu_15868_p1 = p_Val2_2730_fu_15858_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5699_fu_52351_p3() {
    tmp_5699_fu_52351_p3 = esl_concat<86,34>(tmp_5696_reg_93263.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5700_fu_52362_p1() {
    tmp_5700_fu_52362_p1 = esl_zext<121,110>(p_Val2_4009_fu_52344_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5701_cast_fu_19022_p1() {
    tmp_5701_cast_fu_19022_p1 = esl_zext<103,95>(tmp_2942_fu_19015_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5701_fu_52384_p1() {
    tmp_5701_fu_52384_p1 = esl_zext<122,121>(p_Val2_4010_reg_93268.read());
}

void particlemaster_ReadCalculations::thread_tmp_5702_fu_52387_p3() {
    tmp_5702_fu_52387_p3 = esl_concat<98,11>(p_Val2_4011_reg_93283.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5703_fu_52669_p1() {
    tmp_5703_fu_52669_p1 = esl_zext<32,6>(p_Val2_7210_reg_93257.read());
}

void particlemaster_ReadCalculations::thread_tmp_5705_fu_52441_p3() {
    tmp_5705_fu_52441_p3 = esl_concat<81,44>(tmp_5704_reg_93300.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5706_fu_52452_p1() {
    tmp_5706_fu_52452_p1 = esl_zext<126,110>(p_Val2_4015_fu_52434_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5707_cast_fu_19076_p1() {
    tmp_5707_cast_fu_19076_p1 = esl_zext<121,120>(tmp_2945_fu_19069_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5707_fu_52474_p1() {
    tmp_5707_fu_52474_p1 = esl_zext<127,126>(p_Val2_4016_reg_93305.read());
}

void particlemaster_ReadCalculations::thread_tmp_5708_fu_52477_p3() {
    tmp_5708_fu_52477_p3 = esl_concat<93,16>(p_Val2_4017_reg_93320.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5709_fu_52673_p1() {
    tmp_5709_fu_52673_p1 = esl_zext<32,6>(p_Val2_7211_reg_93294.read());
}

void particlemaster_ReadCalculations::thread_tmp_5711_cast_fu_19112_p1() {
    tmp_5711_cast_fu_19112_p1 = esl_zext<122,109>(tmp_2948_fu_19105_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5711_fu_16005_p3() {
    tmp_5711_fu_16005_p3 = r_V_405_reg_77517.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5712_fu_52531_p3() {
    tmp_5712_fu_52531_p3 = esl_concat<76,54>(tmp_5710_reg_93337.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5713_fu_15986_p1() {
    tmp_5713_fu_15986_p1 = grp_fu_72761_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5714_fu_52542_p1() {
    tmp_5714_fu_52542_p1 = esl_zext<131,110>(p_Val2_4021_fu_52524_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5715_fu_52564_p1() {
    tmp_5715_fu_52564_p1 = esl_zext<132,131>(p_Val2_4022_reg_93342.read());
}

void particlemaster_ReadCalculations::thread_tmp_5716_fu_52567_p3() {
    tmp_5716_fu_52567_p3 = esl_concat<88,21>(p_Val2_4023_reg_93357.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5717_cast_fu_19166_p1() {
    tmp_5717_cast_fu_19166_p1 = esl_zext<126,125>(tmp_2951_fu_19159_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5717_fu_52677_p1() {
    tmp_5717_fu_52677_p1 = esl_zext<32,6>(p_Val2_7212_reg_93331.read());
}

void particlemaster_ReadCalculations::thread_tmp_5719_fu_52621_p3() {
    tmp_5719_fu_52621_p3 = esl_concat<71,64>(tmp_5718_reg_93374.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5720_fu_52632_p1() {
    tmp_5720_fu_52632_p1 = esl_zext<136,110>(p_Val2_4027_fu_52614_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5721_cast_fu_19202_p1() {
    tmp_5721_cast_fu_19202_p1 = esl_zext<127,109>(tmp_2954_fu_19195_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5721_fu_52701_p1() {
    tmp_5721_fu_52701_p1 = esl_zext<137,136>(p_Val2_4028_reg_93379.read());
}

void particlemaster_ReadCalculations::thread_tmp_5722_fu_52704_p3() {
    tmp_5722_fu_52704_p3 = esl_concat<83,26>(p_Val2_4029_reg_93419.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5723_fu_52681_p1() {
    tmp_5723_fu_52681_p1 = esl_zext<32,6>(p_Val2_7213_reg_93368.read());
}

void particlemaster_ReadCalculations::thread_tmp_5727_cast_fu_19256_p1() {
    tmp_5727_cast_fu_19256_p1 = esl_zext<131,130>(tmp_2957_fu_19249_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5727_fu_52837_p3() {
    tmp_5727_fu_52837_p3 = esl_concat<72,45>(tmp_5724_reg_93454.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5729_fu_52867_p3() {
    tmp_5729_fu_52867_p3 = esl_concat<90,30>(p_Val2_3988_reg_93485.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5730_fu_52878_p1() {
    tmp_5730_fu_52878_p1 = esl_zext<122,121>(p_Val2_7437_cast_fu_52834_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5731_cast_fu_19292_p1() {
    tmp_5731_cast_fu_19292_p1 = esl_zext<132,109>(tmp_2960_fu_19285_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5731_fu_16313_p3() {
    tmp_5731_fu_16313_p3 = p_Val2_2748_fu_16297_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_5732_fu_52899_p1() {
    tmp_5732_fu_52899_p1 = esl_zext<123,122>(p_Val2_4034_reg_93506.read());
}

void particlemaster_ReadCalculations::thread_tmp_5733_fu_52902_p1() {
    tmp_5733_fu_52902_p1 = esl_zext<123,121>(p_Val2_4033_fu_52896_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5735_fu_52906_p1() {
    tmp_5735_fu_52906_p1 = esl_sext<120,73>(tmp_5728_reg_93500.read());
}

void particlemaster_ReadCalculations::thread_tmp_5737_cast_fu_19346_p1() {
    tmp_5737_cast_fu_19346_p1 = esl_zext<136,135>(tmp_2963_fu_19339_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5738_fu_52980_p3() {
    tmp_5738_fu_52980_p3 = esl_concat<77,52>(tmp_5737_reg_93531.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5739_fu_52990_p3() {
    tmp_5739_fu_52990_p3 = esl_concat<1,18>(tmp_7245_reg_93546.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5741_cast_fu_19429_p1() {
    tmp_5741_cast_fu_19429_p1 = esl_zext<137,109>(tmp_2966_fu_19422_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5741_fu_53013_p2() {
    tmp_5741_fu_53013_p2 = (!tmp_7247_fu_53010_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7247_fu_53010_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5742_fu_53073_p1() {
    tmp_5742_fu_53073_p1 = esl_sext<72,71>(p_Val2_6566_reg_93536.read());
}

void particlemaster_ReadCalculations::thread_tmp_5743_fu_53076_p1() {
    tmp_5743_fu_53076_p1 = esl_sext<72,71>(p_Val2_4041_reg_93585.read());
}

void particlemaster_ReadCalculations::thread_tmp_5744_fu_53231_p1() {
    tmp_5744_fu_53231_p1 = esl_zext<32,8>(m_diff_hi_V_60_reg_93590.read());
}

void particlemaster_ReadCalculations::thread_tmp_5745_fu_26762_p3() {
    tmp_5745_fu_26762_p3 = p_Val2_2664_reg_81949.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_5746_fu_53129_p1() {
    tmp_5746_fu_53129_p1 = esl_zext<32,8>(Z4_ind_V_60_fu_53119_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5747_fu_16412_p3() {
    tmp_5747_fu_16412_p3 = p_Val2_2731_reg_77487.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_5748_fu_53139_p1() {
    tmp_5748_fu_53139_p1 = esl_zext<36,35>(p_Val2_6568_reg_93607.read());
}

void particlemaster_ReadCalculations::thread_tmp_5749_cast_fu_19562_p1() {
    tmp_5749_cast_fu_19562_p1 = esl_zext<118,117>(tmp_2971_fu_19555_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5749_fu_53142_p1() {
    tmp_5749_fu_53142_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5750_cast_fu_19566_p1() {
    tmp_5750_cast_fu_19566_p1 = esl_zext<118,79>(tmp_2970_reg_79028.read());
}

void particlemaster_ReadCalculations::thread_tmp_5750_fu_53134_p1() {
    tmp_5750_fu_53134_p1 = esl_zext<32,8>(p_Val2_6570_fu_53105_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5751_fu_53152_p4() {
    tmp_5751_fu_53152_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6570_reg_93602.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5753_fu_53188_p1() {
    tmp_5753_fu_53188_p1 = esl_zext<44,43>(tmp_5751_reg_93628.read());
}

void particlemaster_ReadCalculations::thread_tmp_5754_cast_fu_19592_p1() {
    tmp_5754_cast_fu_19592_p1 = esl_sext<122,120>(tmp_2973_fu_19585_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5754_fu_53184_p1() {
    tmp_5754_fu_53184_p1 = esl_zext<32,8>(p_Val2_6573_reg_93595.read());
}

void particlemaster_ReadCalculations::thread_tmp_5756_fu_53209_p4() {
    tmp_5756_fu_53209_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6573_reg_93595.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5758_fu_53245_p5() {
    tmp_5758_fu_53245_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6573_reg_93595.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5761_fu_53301_p1() {
    tmp_5761_fu_53301_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5762_fu_53311_p3() {
    tmp_5762_fu_53311_p3 = esl_concat<59,49>(p_Val2_4050_reg_93694.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5763_fu_53345_p4() {
    tmp_5763_fu_53345_p4 = p_Val2_4054_fu_53321_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_5764_fu_53355_p3() {
    tmp_5764_fu_53355_p3 = esl_concat<57,1>(tmp_5763_fu_53345_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5765_fu_53023_p2() {
    tmp_5765_fu_53023_p2 = (!tmp_11194_cast_fu_53019_p1.read().is_01() || !p_Val2_4036_fu_52973_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_11194_cast_fu_53019_p1.read() != p_Val2_4036_fu_52973_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5766_fu_63771_p2() {
    tmp_5766_fu_63771_p2 = (!p_0415_0_i59_reg_98164.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i59_reg_98164.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5767_fu_53403_p2() {
    tmp_5767_fu_53403_p2 = (!p_0415_0_i60_reg_93709.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i60_reg_93709.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5768_fu_65560_p1() {
    tmp_5768_fu_65560_p1 = tmp_24765_neg_reg_98924.read();
}

void particlemaster_ReadCalculations::thread_tmp_5770_fu_64550_p2() {
    tmp_5770_fu_64550_p2 = (!b_exp_134_fu_64544_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_134_fu_64544_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_5771_fu_63867_p2() {
    tmp_5771_fu_63867_p2 = (!loc_V_125_reg_98205.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_125_reg_98205.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5772_fu_64556_p2() {
    tmp_5772_fu_64556_p2 = (!loc_V_124_reg_98198.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_124_reg_98198.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_5773_cast_fu_8460_p1() {
    tmp_5773_cast_fu_8460_p1 = esl_zext<77,75>(tmp_3009_fu_8452_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5773_fu_63872_p2() {
    tmp_5773_fu_63872_p2 = (!loc_V_125_reg_98205.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_125_reg_98205.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5774_fu_65225_p2() {
    tmp_5774_fu_65225_p2 = (tmp_5772_reg_98525.read() & tmp_5773_reg_98240.read());
}

void particlemaster_ReadCalculations::thread_tmp_5775_fu_64561_p2() {
    tmp_5775_fu_64561_p2 = (!loc_V_124_reg_98198.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_124_reg_98198.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5776_fu_65286_p2() {
    tmp_5776_fu_65286_p2 = (tmp_5772_reg_98525.read() & tmp_5771_reg_98234.read());
}

void particlemaster_ReadCalculations::thread_tmp_5777_fu_65229_p3() {
    tmp_5777_fu_65229_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5774_fu_65225_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5778_fu_65295_p3() {
    tmp_5778_fu_65295_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5776_fu_65286_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5779_fu_65303_p2() {
    tmp_5779_fu_65303_p2 = (!tmp_5778_fu_65295_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5778_fu_65295_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5780_fu_65309_p3() {
    tmp_5780_fu_65309_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5775_reg_98531.read());
}

void particlemaster_ReadCalculations::thread_tmp_5781_fu_65316_p2() {
    tmp_5781_fu_65316_p2 = (!tmp_5780_fu_65309_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5780_fu_65309_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5782_cast_fu_8543_p1() {
    tmp_5782_cast_fu_8543_p1 = esl_zext<82,81>(tmp_3015_fu_8536_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5782_fu_63863_p1() {
    tmp_5782_fu_63863_p1 = esl_zext<32,6>(index0_V_53_reg_98219.read());
}

void particlemaster_ReadCalculations::thread_tmp_5783_fu_63957_p4() {
    tmp_5783_fu_63957_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7258_reg_98266.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5784_fu_63966_p1() {
    tmp_5784_fu_63966_p1 = esl_zext<76,75>(sf53_fu_63948_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5785_fu_63978_p3() {
    tmp_5785_fu_63978_p3 = esl_concat<50,25>(tmp_7259_fu_63938_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5786_cast_fu_8579_p1() {
    tmp_5786_cast_fu_8579_p1 = esl_zext<83,80>(tmp_3018_fu_8572_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5786_fu_26743_p1() {
    tmp_5786_fu_26743_p1 = p_0415_0_i38_reg_82137.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5787_fu_16393_p1() {
    tmp_5787_fu_16393_p1 = p_0415_0_i39_reg_77675.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5788_fu_63990_p1() {
    tmp_5788_fu_63990_p1 = esl_zext<77,76>(p_Val2_4063_fu_63970_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5789_fu_64013_p1() {
    tmp_5789_fu_64013_p1 = esl_zext<78,77>(p_Val2_4064_reg_98279.read());
}

void particlemaster_ReadCalculations::thread_tmp_5790_fu_64016_p1() {
    tmp_5790_fu_64016_p1 = esl_zext<78,75>(p_Val2_4065_reg_98294.read());
}

void particlemaster_ReadCalculations::thread_tmp_5791_cast_fu_8628_p1() {
    tmp_5791_cast_fu_8628_p1 = esl_zext<102,101>(tmp_3020_fu_8621_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5791_fu_64604_p1() {
    tmp_5791_fu_64604_p1 = esl_zext<32,4>(p_Val2_7172_reg_98273.read());
}

void particlemaster_ReadCalculations::thread_tmp_5793_fu_64062_p3() {
    tmp_5793_fu_64062_p3 = esl_concat<67,14>(tmp_5792_reg_98311.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5794_fu_64073_p1() {
    tmp_5794_fu_64073_p1 = esl_zext<82,81>(p_Val2_4069_fu_64055_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5795_cast_fu_8665_p1() {
    tmp_5795_cast_fu_8665_p1 = esl_zext<103,95>(tmp_3023_fu_8658_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5795_fu_64095_p1() {
    tmp_5795_fu_64095_p1 = esl_zext<83,82>(p_Val2_4070_reg_98316.read());
}

void particlemaster_ReadCalculations::thread_tmp_5796_fu_64098_p3() {
    tmp_5796_fu_64098_p3 = esl_concat<79,1>(p_Val2_4072_reg_98331.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5797_fu_64608_p1() {
    tmp_5797_fu_64608_p1 = esl_zext<32,6>(p_Val2_7173_reg_98305.read());
}

void particlemaster_ReadCalculations::thread_tmp_5798_fu_64147_p3() {
    tmp_5798_fu_64147_p3 = esl_concat<76,25>(tmp_7263_reg_98352.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5799_fu_64158_p1() {
    tmp_5799_fu_64158_p1 = esl_zext<102,96>(p_Val2_4076_fu_64138_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5800_fu_64181_p1() {
    tmp_5800_fu_64181_p1 = esl_zext<103,102>(p_Val2_4077_reg_98357.read());
}

void particlemaster_ReadCalculations::thread_tmp_5801_cast_fu_8719_p1() {
    tmp_5801_cast_fu_8719_p1 = esl_zext<121,120>(tmp_3026_fu_8712_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5801_fu_64184_p3() {
    tmp_5801_fu_64184_p3 = esl_concat<89,6>(p_Val2_4078_reg_98372.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5802_fu_64612_p1() {
    tmp_5802_fu_64612_p1 = esl_zext<32,6>(p_Val2_7174_reg_98346.read());
}

void particlemaster_ReadCalculations::thread_tmp_5804_fu_64238_p3() {
    tmp_5804_fu_64238_p3 = esl_concat<86,34>(tmp_5803_reg_98389.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5805_cast_fu_8755_p1() {
    tmp_5805_cast_fu_8755_p1 = esl_zext<122,109>(tmp_3029_fu_8748_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5805_fu_64249_p1() {
    tmp_5805_fu_64249_p1 = esl_zext<121,110>(p_Val2_4083_fu_64231_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5806_fu_64271_p1() {
    tmp_5806_fu_64271_p1 = esl_zext<122,121>(p_Val2_4084_reg_98394.read());
}

void particlemaster_ReadCalculations::thread_tmp_5807_fu_64274_p3() {
    tmp_5807_fu_64274_p3 = esl_concat<98,11>(p_Val2_4085_reg_98409.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5808_fu_64588_p1() {
    tmp_5808_fu_64588_p1 = esl_zext<32,6>(p_Val2_7175_reg_98383.read());
}

void particlemaster_ReadCalculations::thread_tmp_5810_fu_64328_p3() {
    tmp_5810_fu_64328_p3 = esl_concat<81,44>(tmp_5809_reg_98426.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5811_cast_fu_8809_p1() {
    tmp_5811_cast_fu_8809_p1 = esl_zext<126,125>(tmp_3032_fu_8802_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5811_fu_64339_p1() {
    tmp_5811_fu_64339_p1 = esl_zext<126,110>(p_Val2_4091_fu_64321_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5812_fu_64361_p1() {
    tmp_5812_fu_64361_p1 = esl_zext<127,126>(p_Val2_4092_reg_98431.read());
}

void particlemaster_ReadCalculations::thread_tmp_5813_fu_64364_p3() {
    tmp_5813_fu_64364_p3 = esl_concat<93,16>(p_Val2_4093_reg_98446.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5814_fu_64592_p1() {
    tmp_5814_fu_64592_p1 = esl_zext<32,6>(p_Val2_7176_reg_98420.read());
}

void particlemaster_ReadCalculations::thread_tmp_5815_cast_fu_8845_p1() {
    tmp_5815_cast_fu_8845_p1 = esl_zext<127,109>(tmp_3035_fu_8838_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5816_fu_64418_p3() {
    tmp_5816_fu_64418_p3 = esl_concat<76,54>(tmp_5815_reg_98463.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5817_fu_26815_p3() {
    tmp_5817_fu_26815_p3 = p_Val2_2533_reg_81161.read().range(119, 119);
}

void particlemaster_ReadCalculations::thread_tmp_5818_fu_64429_p1() {
    tmp_5818_fu_64429_p1 = esl_zext<131,110>(p_Val2_4098_fu_64411_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5819_fu_26866_p3() {
    tmp_5819_fu_26866_p3 = r_V_387_reg_82170.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5820_fu_26847_p1() {
    tmp_5820_fu_26847_p1 = grp_fu_72841_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5821_cast_fu_8899_p1() {
    tmp_5821_cast_fu_8899_p1 = esl_zext<131,130>(tmp_3038_fu_8892_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5821_fu_64451_p1() {
    tmp_5821_fu_64451_p1 = esl_zext<132,131>(p_Val2_4099_reg_98468.read());
}

void particlemaster_ReadCalculations::thread_tmp_5822_fu_64454_p3() {
    tmp_5822_fu_64454_p3 = esl_concat<88,21>(p_Val2_4100_reg_98483.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5823_fu_64596_p1() {
    tmp_5823_fu_64596_p1 = esl_zext<32,6>(p_Val2_7177_reg_98457.read());
}

void particlemaster_ReadCalculations::thread_tmp_5825_cast_fu_8935_p1() {
    tmp_5825_cast_fu_8935_p1 = esl_zext<132,109>(tmp_3041_fu_8928_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5825_fu_64508_p3() {
    tmp_5825_fu_64508_p3 = esl_concat<71,64>(tmp_5824_reg_98500.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5826_fu_64519_p1() {
    tmp_5826_fu_64519_p1 = esl_zext<136,110>(p_Val2_4105_fu_64501_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5827_fu_64620_p1() {
    tmp_5827_fu_64620_p1 = esl_zext<137,136>(p_Val2_4106_reg_98505.read());
}

void particlemaster_ReadCalculations::thread_tmp_5828_fu_64623_p3() {
    tmp_5828_fu_64623_p3 = esl_concat<83,26>(p_Val2_4107_reg_98561.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_5829_fu_64600_p1() {
    tmp_5829_fu_64600_p1 = esl_zext<32,6>(p_Val2_7178_reg_98494.read());
}

void particlemaster_ReadCalculations::thread_tmp_5831_cast_fu_8989_p1() {
    tmp_5831_cast_fu_8989_p1 = esl_zext<136,135>(tmp_3044_fu_8982_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5833_fu_64756_p3() {
    tmp_5833_fu_64756_p3 = esl_concat<72,45>(tmp_5830_reg_98596.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_5835_cast_fu_9072_p1() {
    tmp_5835_cast_fu_9072_p1 = esl_zext<137,109>(tmp_3047_fu_9065_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5836_fu_27203_p4() {
    tmp_5836_fu_27203_p4 = p_0415_0_i40_fu_27198_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_5837_fu_64786_p3() {
    tmp_5837_fu_64786_p3 = esl_concat<90,30>(p_Val2_4059_reg_98627.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_5838_fu_64797_p1() {
    tmp_5838_fu_64797_p1 = esl_zext<122,121>(p_Val2_7565_cast_fu_64753_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5839_fu_64814_p1() {
    tmp_5839_fu_64814_p1 = esl_zext<123,122>(p_Val2_4113_reg_98648.read());
}

void particlemaster_ReadCalculations::thread_tmp_5840_fu_64817_p1() {
    tmp_5840_fu_64817_p1 = esl_zext<123,121>(p_Val2_4112_fu_64811_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_5841_fu_64821_p1() {
    tmp_5841_fu_64821_p1 = esl_sext<120,73>(tmp_5835_reg_98642.read());
}

void particlemaster_ReadCalculations::thread_tmp_5843_cast_fu_9205_p1() {
    tmp_5843_cast_fu_9205_p1 = esl_zext<118,117>(tmp_3052_fu_9198_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5844_cast_fu_9209_p1() {
    tmp_5844_cast_fu_9209_p1 = esl_zext<118,79>(tmp_3051_reg_74589.read());
}

void particlemaster_ReadCalculations::thread_tmp_5844_fu_64890_p3() {
    tmp_5844_fu_64890_p3 = esl_concat<77,52>(tmp_5843_reg_98668.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5845_fu_64900_p3() {
    tmp_5845_fu_64900_p3 = esl_concat<1,18>(tmp_7265_reg_98683.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_5847_fu_64923_p2() {
    tmp_5847_fu_64923_p2 = (!tmp_7267_fu_64920_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7267_fu_64920_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_5848_cast_fu_9235_p1() {
    tmp_5848_cast_fu_9235_p1 = esl_sext<122,120>(tmp_3054_fu_9228_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5848_fu_64983_p1() {
    tmp_5848_fu_64983_p1 = esl_sext<72,71>(p_Val2_6596_reg_98673.read());
}

void particlemaster_ReadCalculations::thread_tmp_5849_fu_64986_p1() {
    tmp_5849_fu_64986_p1 = esl_sext<72,71>(p_Val2_4121_reg_98723.read());
}

void particlemaster_ReadCalculations::thread_tmp_5850_fu_65141_p1() {
    tmp_5850_fu_65141_p1 = esl_zext<32,8>(m_diff_hi_V_61_reg_98728.read());
}

void particlemaster_ReadCalculations::thread_tmp_5851_fu_65039_p1() {
    tmp_5851_fu_65039_p1 = esl_zext<32,8>(Z4_ind_V_61_fu_65029_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5852_fu_65049_p1() {
    tmp_5852_fu_65049_p1 = esl_zext<36,35>(p_Val2_6598_reg_98745.read());
}

void particlemaster_ReadCalculations::thread_tmp_5853_fu_65052_p1() {
    tmp_5853_fu_65052_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5854_fu_65044_p1() {
    tmp_5854_fu_65044_p1 = esl_zext<32,8>(p_Val2_6600_fu_65015_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5855_fu_65062_p4() {
    tmp_5855_fu_65062_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6600_reg_98740.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_5857_fu_65098_p1() {
    tmp_5857_fu_65098_p1 = esl_zext<44,43>(tmp_5855_reg_98766.read());
}

void particlemaster_ReadCalculations::thread_tmp_5858_fu_65094_p1() {
    tmp_5858_fu_65094_p1 = esl_zext<32,8>(p_Val2_6603_reg_98733.read());
}

void particlemaster_ReadCalculations::thread_tmp_5860_fu_65119_p4() {
    tmp_5860_fu_65119_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6603_reg_98733.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_5862_fu_65155_p5() {
    tmp_5862_fu_65155_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6603_reg_98733.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_5863_cast_fu_19737_p1() {
    tmp_5863_cast_fu_19737_p1 = esl_sext<130,129>(tmp_2980_fu_19698_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5865_fu_65211_p1() {
    tmp_5865_fu_65211_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_5866_fu_65243_p3() {
    tmp_5866_fu_65243_p3 = esl_concat<59,49>(p_Val2_4131_reg_98832.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_5867_fu_64933_p2() {
    tmp_5867_fu_64933_p2 = (!tmp_11461_cast_fu_64929_p1.read().is_01() || !p_Val2_4115_fu_64883_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_11461_cast_fu_64929_p1.read() != p_Val2_4115_fu_64883_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5868_fu_65343_p2() {
    tmp_5868_fu_65343_p2 = (!p_0415_0_i61_fu_65322_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i61_fu_65322_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_5869_fu_65349_p4() {
    tmp_5869_fu_65349_p4 = p_Val2_4134_reg_98855.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_5870_fu_65358_p4() {
    tmp_5870_fu_65358_p4 = p_Val2_4134_reg_98855.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_5871_fu_65519_p2() {
    tmp_5871_fu_65519_p2 = (sel_tmp437_fu_65514_p2.read() | sel_tmp434_fu_65494_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5872_fu_65533_p2() {
    tmp_5872_fu_65533_p2 = (tmp_5871_fu_65519_p2.read() | sel_tmp431_fu_65484_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5875_fu_27321_p3() {
    tmp_5875_fu_27321_p3 = p_Val2_2533_reg_81161.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_5876_fu_27250_p1() {
    tmp_5876_fu_27250_p1 = p_0415_0_i40_fu_27198_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5877_cast_fu_19909_p1() {
    tmp_5877_cast_fu_19909_p1 = esl_zext<36,20>(tmp_2992_reg_79176.read());
}

void particlemaster_ReadCalculations::thread_tmp_5879_fu_55193_p1() {
    tmp_5879_fu_55193_p1 = tmp_24771_neg_reg_94464.read();
}

void particlemaster_ReadCalculations::thread_tmp_5881_fu_54207_p2() {
    tmp_5881_fu_54207_p2 = (!b_exp_137_fu_54201_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_137_fu_54201_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_5882_fu_53501_p2() {
    tmp_5882_fu_53501_p2 = (!loc_V_138_reg_93749.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_138_reg_93749.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5883_fu_53477_p2() {
    tmp_5883_fu_53477_p2 = (!loc_V_137_fu_53463_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_137_fu_53463_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_5884_cast_fu_19974_p1() {
    tmp_5884_cast_fu_19974_p1 = esl_zext<52,51>(tmp_2998_fu_19963_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_5884_fu_53506_p2() {
    tmp_5884_fu_53506_p2 = (!loc_V_138_reg_93749.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_138_reg_93749.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_5885_fu_54872_p2() {
    tmp_5885_fu_54872_p2 = (tmp_5883_reg_93757.read() & tmp_5884_reg_93780.read());
}

void particlemaster_ReadCalculations::thread_tmp_5886_cast_fu_19978_p1() {
    tmp_5886_cast_fu_19978_p1 = esl_zext<44,36>(tmp_2997_reg_79207.read());
}

void particlemaster_ReadCalculations::thread_tmp_5886_fu_53511_p2() {
    tmp_5886_fu_53511_p2 = (!loc_V_137_reg_93743.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_137_reg_93743.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5887_fu_54933_p2() {
    tmp_5887_fu_54933_p2 = (tmp_5883_reg_93757.read() & tmp_5882_reg_93774.read());
}

void particlemaster_ReadCalculations::thread_tmp_5888_fu_54876_p3() {
    tmp_5888_fu_54876_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5885_fu_54872_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5889_fu_54942_p3() {
    tmp_5889_fu_54942_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5887_fu_54933_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5890_fu_54950_p2() {
    tmp_5890_fu_54950_p2 = (!tmp_5889_fu_54942_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5889_fu_54942_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5891_fu_53516_p3() {
    tmp_5891_fu_53516_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_5886_fu_53511_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_5892_fu_53524_p2() {
    tmp_5892_fu_53524_p2 = (!tmp_5891_fu_53516_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5891_fu_53516_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_5893_fu_53530_p1() {
    tmp_5893_fu_53530_p1 = esl_zext<32,6>(index0_V_54_reg_93769.read());
}

void particlemaster_ReadCalculations::thread_tmp_5894_cast_fu_20036_p1() {
    tmp_5894_cast_fu_20036_p1 = esl_zext<108,100>(p_Val2_2149_reg_79232.read());
}

void particlemaster_ReadCalculations::thread_tmp_5894_fu_53614_p4() {
    tmp_5894_fu_53614_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7276_reg_93822.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_5895_fu_53623_p1() {
    tmp_5895_fu_53623_p1 = esl_zext<76,75>(sf54_fu_53605_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5896_fu_53635_p3() {
    tmp_5896_fu_53635_p3 = esl_concat<50,25>(tmp_7277_fu_53595_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5897_fu_53647_p1() {
    tmp_5897_fu_53647_p1 = esl_zext<77,76>(p_Val2_4144_fu_53627_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5898_cast_fu_9380_p1() {
    tmp_5898_cast_fu_9380_p1 = esl_sext<130,129>(tmp_3061_fu_9341_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5898_fu_53670_p1() {
    tmp_5898_fu_53670_p1 = esl_zext<78,77>(p_Val2_4145_reg_93835.read());
}

void particlemaster_ReadCalculations::thread_tmp_5899_fu_53673_p1() {
    tmp_5899_fu_53673_p1 = esl_zext<78,75>(p_Val2_4146_reg_93850.read());
}

void particlemaster_ReadCalculations::thread_tmp_5900_fu_54251_p1() {
    tmp_5900_fu_54251_p1 = esl_zext<32,4>(p_Val2_7214_reg_93829.read());
}

void particlemaster_ReadCalculations::thread_tmp_5902_fu_53719_p3() {
    tmp_5902_fu_53719_p3 = esl_concat<67,14>(tmp_5901_reg_93867.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_5903_fu_53730_p1() {
    tmp_5903_fu_53730_p1 = esl_zext<82,81>(p_Val2_4150_fu_53712_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5904_fu_53752_p1() {
    tmp_5904_fu_53752_p1 = esl_zext<83,82>(p_Val2_4151_reg_93872.read());
}

void particlemaster_ReadCalculations::thread_tmp_5905_fu_53755_p3() {
    tmp_5905_fu_53755_p3 = esl_concat<79,1>(p_Val2_4152_reg_93887.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_5906_fu_54255_p1() {
    tmp_5906_fu_54255_p1 = esl_zext<32,6>(p_Val2_7215_reg_93861.read());
}

void particlemaster_ReadCalculations::thread_tmp_5907_fu_53804_p3() {
    tmp_5907_fu_53804_p3 = esl_concat<76,25>(tmp_7281_reg_93908.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_5908_fu_53815_p1() {
    tmp_5908_fu_53815_p1 = esl_zext<102,96>(p_Val2_4155_fu_53795_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_5909_fu_53838_p1() {
    tmp_5909_fu_53838_p1 = esl_zext<103,102>(p_Val2_4156_reg_93913.read());
}

void particlemaster_ReadCalculations::thread_tmp_5910_fu_16465_p3() {
    tmp_5910_fu_16465_p3 = p_Val2_2599_reg_76719.read().range(119, 119);
}

void particlemaster_ReadCalculations::thread_tmp_5911_fu_53841_p3() {
    tmp_5911_fu_53841_p3 = esl_concat<89,6>(p_Val2_4157_reg_93928.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_5912_cast_fu_9552_p1() {
    tmp_5912_cast_fu_9552_p1 = esl_zext<36,20>(tmp_3073_reg_74737.read());
}

void particlemaster_ReadCalculations::thread_tmp_5912_fu_54259_p1() {
    tmp_5912_fu_54259_p1 = esl_zext<32,6>(p_Val2_7216_reg_93902.read());
}

void particlemaster_ReadCalculations::thread_tmp_5914_fu_53895_p3() {
    tmp_5914_fu_53895_p3 = esl_concat<86,34>(tmp_5913_reg_93945.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_5915_fu_53906_p1() {
    tmp_5915_fu_53906_p1 = esl_zext<121,110>(p_Val2_4162_fu_53888_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5916_fu_53928_p1() {
    tmp_5916_fu_53928_p1 = esl_zext<122,121>(p_Val2_4163_reg_93950.read());
}

void particlemaster_ReadCalculations::thread_tmp_5917_fu_53931_p3() {
    tmp_5917_fu_53931_p3 = esl_concat<98,11>(p_Val2_4164_reg_93965.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_5918_fu_54235_p1() {
    tmp_5918_fu_54235_p1 = esl_zext<32,6>(p_Val2_7217_reg_93939.read());
}

void particlemaster_ReadCalculations::thread_tmp_5919_cast_fu_9617_p1() {
    tmp_5919_cast_fu_9617_p1 = esl_zext<52,51>(tmp_3079_fu_9606_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_5920_fu_53985_p3() {
    tmp_5920_fu_53985_p3 = esl_concat<81,44>(tmp_5919_reg_93982.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_5921_cast_fu_9621_p1() {
    tmp_5921_cast_fu_9621_p1 = esl_zext<44,36>(tmp_3078_reg_74768.read());
}

void particlemaster_ReadCalculations::thread_tmp_5921_fu_53996_p1() {
    tmp_5921_fu_53996_p1 = esl_zext<126,110>(p_Val2_4168_fu_53978_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5922_fu_54018_p1() {
    tmp_5922_fu_54018_p1 = esl_zext<127,126>(p_Val2_4170_reg_93987.read());
}

void particlemaster_ReadCalculations::thread_tmp_5923_fu_54021_p3() {
    tmp_5923_fu_54021_p3 = esl_concat<93,16>(p_Val2_4171_reg_94002.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_5924_fu_54239_p1() {
    tmp_5924_fu_54239_p1 = esl_zext<32,6>(p_Val2_7218_reg_93976.read());
}

void particlemaster_ReadCalculations::thread_tmp_5926_fu_16516_p3() {
    tmp_5926_fu_16516_p3 = r_V_407_reg_77708.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_5927_fu_16497_p1() {
    tmp_5927_fu_16497_p1 = grp_fu_72771_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_5928_fu_54075_p3() {
    tmp_5928_fu_54075_p3 = esl_concat<76,54>(tmp_5925_reg_94019.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_5929_cast_fu_9679_p1() {
    tmp_5929_cast_fu_9679_p1 = esl_zext<108,100>(p_Val2_2216_reg_74793.read());
}

void particlemaster_ReadCalculations::thread_tmp_5929_fu_54086_p1() {
    tmp_5929_fu_54086_p1 = esl_zext<131,110>(p_Val2_4178_fu_54068_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5930_fu_54108_p1() {
    tmp_5930_fu_54108_p1 = esl_zext<132,131>(p_Val2_4179_reg_94024.read());
}

void particlemaster_ReadCalculations::thread_tmp_5931_fu_54111_p3() {
    tmp_5931_fu_54111_p3 = esl_concat<88,21>(p_Val2_4180_reg_94039.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_5932_fu_54243_p1() {
    tmp_5932_fu_54243_p1 = esl_zext<32,6>(p_Val2_7219_reg_94013.read());
}

void particlemaster_ReadCalculations::thread_tmp_5934_fu_54165_p3() {
    tmp_5934_fu_54165_p3 = esl_concat<71,64>(tmp_5933_reg_94056.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_5935_fu_54176_p1() {
    tmp_5935_fu_54176_p1 = esl_zext<136,110>(p_Val2_4184_fu_54158_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_5936_fu_54267_p1() {
    tmp_5936_fu_54267_p1 = esl_zext<137,136>(p_Val2_4185_reg_94061.read());
}

}

