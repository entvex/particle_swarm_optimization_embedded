#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_tmp_3495_fu_24884_p3() {
    tmp_3495_fu_24884_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3492_fu_24866_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3496_fu_24892_p2() {
    tmp_3496_fu_24892_p2 = (!tmp_3495_fu_24884_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3495_fu_24884_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3497_fu_24898_p3() {
    tmp_3497_fu_24898_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3491_reg_81033.read());
}

void particlemaster_ReadCalculations::thread_tmp_3498_fu_24905_p2() {
    tmp_3498_fu_24905_p2 = (!tmp_3497_fu_24898_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3497_fu_24898_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3499_fu_23479_p1() {
    tmp_3499_fu_23479_p1 = esl_zext<32,6>(index0_V_32_reg_80714.read());
}

void particlemaster_ReadCalculations::thread_tmp_3500_fu_23573_p4() {
    tmp_3500_fu_23573_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_5020_reg_80766.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3501_fu_23582_p1() {
    tmp_3501_fu_23582_p1 = esl_zext<76,75>(sf32_fu_23564_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3502_fu_23594_p3() {
    tmp_3502_fu_23594_p3 = esl_concat<50,25>(tmp_5021_fu_23554_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3504_fu_23606_p1() {
    tmp_3504_fu_23606_p1 = esl_zext<77,76>(p_Val2_2490_fu_23586_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3507_fu_23629_p1() {
    tmp_3507_fu_23629_p1 = esl_zext<78,77>(p_Val2_2491_reg_80779.read());
}

void particlemaster_ReadCalculations::thread_tmp_3508_fu_23632_p1() {
    tmp_3508_fu_23632_p1 = esl_zext<78,75>(p_Val2_2492_reg_80794.read());
}

void particlemaster_ReadCalculations::thread_tmp_3509_fu_24225_p1() {
    tmp_3509_fu_24225_p1 = esl_zext<32,4>(p_Val2_7011_reg_80773.read());
}

void particlemaster_ReadCalculations::thread_tmp_3511_fu_23678_p3() {
    tmp_3511_fu_23678_p3 = esl_concat<67,14>(tmp_3510_reg_80811.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3512_fu_23689_p1() {
    tmp_3512_fu_23689_p1 = esl_zext<82,81>(p_Val2_2496_fu_23671_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3513_fu_23711_p1() {
    tmp_3513_fu_23711_p1 = esl_zext<83,82>(p_Val2_2497_reg_80816.read());
}

void particlemaster_ReadCalculations::thread_tmp_3514_fu_23714_p3() {
    tmp_3514_fu_23714_p3 = esl_concat<79,1>(p_Val2_2498_reg_80831.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3515_fu_24229_p1() {
    tmp_3515_fu_24229_p1 = esl_zext<32,6>(p_Val2_7012_reg_80805.read());
}

void particlemaster_ReadCalculations::thread_tmp_3516_fu_23763_p3() {
    tmp_3516_fu_23763_p3 = esl_concat<76,25>(tmp_5076_reg_80852.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3517_fu_23774_p1() {
    tmp_3517_fu_23774_p1 = esl_zext<102,96>(p_Val2_2501_fu_23754_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3518_fu_23797_p1() {
    tmp_3518_fu_23797_p1 = esl_zext<103,102>(p_Val2_2502_reg_80857.read());
}

void particlemaster_ReadCalculations::thread_tmp_3519_fu_23800_p3() {
    tmp_3519_fu_23800_p3 = esl_concat<89,6>(p_Val2_2503_reg_80872.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3520_fu_24233_p1() {
    tmp_3520_fu_24233_p1 = esl_zext<32,6>(p_Val2_7013_reg_80846.read());
}

void particlemaster_ReadCalculations::thread_tmp_3523_fu_23854_p3() {
    tmp_3523_fu_23854_p3 = esl_concat<86,34>(tmp_3521_reg_80889.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3524_fu_23865_p1() {
    tmp_3524_fu_23865_p1 = esl_zext<121,110>(p_Val2_2507_fu_23847_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3525_fu_23887_p1() {
    tmp_3525_fu_23887_p1 = esl_zext<122,121>(p_Val2_2508_reg_80894.read());
}

void particlemaster_ReadCalculations::thread_tmp_3526_fu_23890_p3() {
    tmp_3526_fu_23890_p3 = esl_concat<98,11>(p_Val2_2509_reg_80909.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3527_fu_24209_p1() {
    tmp_3527_fu_24209_p1 = esl_zext<32,6>(p_Val2_7014_reg_80883.read());
}

void particlemaster_ReadCalculations::thread_tmp_3529_fu_23944_p3() {
    tmp_3529_fu_23944_p3 = esl_concat<81,44>(tmp_3528_reg_80926.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3530_fu_23955_p1() {
    tmp_3530_fu_23955_p1 = esl_zext<126,110>(p_Val2_2513_fu_23937_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3531_fu_23977_p1() {
    tmp_3531_fu_23977_p1 = esl_zext<127,126>(p_Val2_2514_reg_80931.read());
}

void particlemaster_ReadCalculations::thread_tmp_3532_fu_23980_p3() {
    tmp_3532_fu_23980_p3 = esl_concat<93,16>(p_Val2_2515_reg_80946.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3533_fu_24213_p1() {
    tmp_3533_fu_24213_p1 = esl_zext<32,6>(p_Val2_7015_reg_80920.read());
}

void particlemaster_ReadCalculations::thread_tmp_3535_fu_24034_p3() {
    tmp_3535_fu_24034_p3 = esl_concat<76,54>(tmp_3534_reg_80963.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3536_fu_24045_p1() {
    tmp_3536_fu_24045_p1 = esl_zext<131,110>(p_Val2_2519_fu_24027_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3537_fu_24067_p1() {
    tmp_3537_fu_24067_p1 = esl_zext<132,131>(p_Val2_2520_reg_80968.read());
}

void particlemaster_ReadCalculations::thread_tmp_3538_fu_24070_p3() {
    tmp_3538_fu_24070_p3 = esl_concat<88,21>(p_Val2_2521_reg_80983.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3539_fu_24217_p1() {
    tmp_3539_fu_24217_p1 = esl_zext<32,6>(p_Val2_7016_reg_80957.read());
}

void particlemaster_ReadCalculations::thread_tmp_3541_fu_24124_p3() {
    tmp_3541_fu_24124_p3 = esl_concat<71,64>(tmp_3540_reg_81000.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3542_fu_24135_p1() {
    tmp_3542_fu_24135_p1 = esl_zext<136,110>(p_Val2_2525_fu_24117_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3543_fu_24241_p1() {
    tmp_3543_fu_24241_p1 = esl_zext<137,136>(p_Val2_2526_reg_81005.read());
}

void particlemaster_ReadCalculations::thread_tmp_3544_fu_24244_p3() {
    tmp_3544_fu_24244_p3 = esl_concat<83,26>(p_Val2_2527_reg_81064.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3545_fu_24221_p1() {
    tmp_3545_fu_24221_p1 = esl_zext<32,6>(p_Val2_7017_reg_80994.read());
}

void particlemaster_ReadCalculations::thread_tmp_3549_fu_24377_p3() {
    tmp_3549_fu_24377_p3 = esl_concat<72,45>(tmp_3546_reg_81099.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3551_fu_24407_p3() {
    tmp_3551_fu_24407_p3 = esl_concat<90,30>(p_Val2_2486_reg_81130.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3552_fu_24418_p1() {
    tmp_3552_fu_24418_p1 = esl_zext<122,121>(p_Val2_4407_cast_fu_24374_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3553_fu_24435_p1() {
    tmp_3553_fu_24435_p1 = esl_zext<123,122>(p_Val2_2532_reg_81151.read());
}

void particlemaster_ReadCalculations::thread_tmp_3554_fu_24438_p1() {
    tmp_3554_fu_24438_p1 = esl_zext<123,121>(p_Val2_2531_fu_24432_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3555_fu_24442_p1() {
    tmp_3555_fu_24442_p1 = esl_sext<120,73>(tmp_3550_reg_81145.read());
}

void particlemaster_ReadCalculations::thread_tmp_3558_fu_24539_p3() {
    tmp_3558_fu_24539_p3 = esl_concat<1,18>(tmp_5108_reg_81212.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3560_fu_24562_p2() {
    tmp_3560_fu_24562_p2 = (!tmp_5130_fu_24559_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5130_fu_24559_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3561_fu_24568_p1() {
    tmp_3561_fu_24568_p1 = esl_sext<131,128>(phitmp20_reg_81197.read());
}

void particlemaster_ReadCalculations::thread_tmp_3562_fu_24620_p1() {
    tmp_3562_fu_24620_p1 = esl_sext<72,71>(p_Val2_4446_reg_81202.read());
}

void particlemaster_ReadCalculations::thread_tmp_3563_fu_24623_p1() {
    tmp_3563_fu_24623_p1 = esl_sext<72,71>(p_Val2_2539_reg_81258.read());
}

void particlemaster_ReadCalculations::thread_tmp_3564_fu_24778_p1() {
    tmp_3564_fu_24778_p1 = esl_zext<32,8>(m_diff_hi_V_36_reg_81263.read());
}

void particlemaster_ReadCalculations::thread_tmp_3565_fu_24676_p1() {
    tmp_3565_fu_24676_p1 = esl_zext<32,8>(Z4_ind_V_36_fu_24666_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3566_fu_24686_p1() {
    tmp_3566_fu_24686_p1 = esl_zext<36,35>(p_Val2_4460_reg_81280.read());
}

void particlemaster_ReadCalculations::thread_tmp_3567_fu_24689_p1() {
    tmp_3567_fu_24689_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3568_fu_24681_p1() {
    tmp_3568_fu_24681_p1 = esl_zext<32,8>(p_Val2_4476_fu_24652_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3569_fu_24699_p4() {
    tmp_3569_fu_24699_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4476_reg_81275.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3571_fu_24735_p1() {
    tmp_3571_fu_24735_p1 = esl_zext<44,43>(tmp_3569_reg_81301.read());
}

void particlemaster_ReadCalculations::thread_tmp_3572_fu_24731_p1() {
    tmp_3572_fu_24731_p1 = esl_zext<32,8>(p_Val2_4482_reg_81268.read());
}

void particlemaster_ReadCalculations::thread_tmp_3574_fu_24756_p4() {
    tmp_3574_fu_24756_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4482_reg_81268.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3576_fu_24792_p5() {
    tmp_3576_fu_24792_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4482_reg_81268.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3579_fu_24848_p1() {
    tmp_3579_fu_24848_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3580_fu_24911_p3() {
    tmp_3580_fu_24911_p3 = esl_concat<59,49>(p_Val2_2548_reg_81367.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3581_fu_24571_p2() {
    tmp_3581_fu_24571_p2 = (!tmp_3561_fu_24568_p1.read().is_01() || !p_Val2_2534_reg_81192.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_3561_fu_24568_p1.read() != p_Val2_2534_reg_81192.read());
}

void particlemaster_ReadCalculations::thread_tmp_3582_fu_25020_p2() {
    tmp_3582_fu_25020_p2 = (!p_0415_0_i36_fu_24994_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i36_fu_24994_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3583_fu_25026_p4() {
    tmp_3583_fu_25026_p4 = p_Val2_2550_reg_81413.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3584_fu_25035_p4() {
    tmp_3584_fu_25035_p4 = p_Val2_2550_reg_81413.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3585_fu_6499_p1() {
    tmp_3585_fu_6499_p1 = grp_fu_6493_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3586_fu_25234_p1() {
    tmp_3586_fu_25234_p1 = t_V_142_fu_25216_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_3587_fu_25238_p3() {
    tmp_3587_fu_25238_p3 = (!sel_tmp326_fu_25229_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp326_fu_25229_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_3588_fu_6520_p1() {
    tmp_3588_fu_6520_p1 = p_Val2_2021_reg_73365.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3589_fu_6523_p3() {
    tmp_3589_fu_6523_p3 = p_Val2_2021_reg_73365.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3590_fu_25246_p2() {
    tmp_3590_fu_25246_p2 = (sel_tmp326_fu_25229_p2.read() | x_is_p1_19_reg_81443.read());
}

void particlemaster_ReadCalculations::thread_tmp_3594_fu_13826_p2() {
    tmp_3594_fu_13826_p2 = (!b_exp_86_fu_13820_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_86_fu_13820_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3595_fu_13122_p2() {
    tmp_3595_fu_13122_p2 = (!loc_V_85_reg_76261.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_85_reg_76261.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3596_fu_13127_p2() {
    tmp_3596_fu_13127_p2 = (!loc_V_84_reg_76254.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_84_reg_76254.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3597_fu_13132_p2() {
    tmp_3597_fu_13132_p2 = (!loc_V_85_reg_76261.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_85_reg_76261.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3598_fu_13137_p2() {
    tmp_3598_fu_13137_p2 = (tmp_3596_fu_13127_p2.read() & tmp_3597_fu_13132_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3599_fu_13832_p2() {
    tmp_3599_fu_13832_p2 = (!loc_V_84_reg_76254.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_84_reg_76254.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3600_fu_13143_p2() {
    tmp_3600_fu_13143_p2 = (tmp_3596_fu_13127_p2.read() & tmp_3595_fu_13122_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3601_fu_14544_p3() {
    tmp_3601_fu_14544_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3598_reg_76290.read());
}

void particlemaster_ReadCalculations::thread_tmp_3602_fu_14551_p2() {
    tmp_3602_fu_14551_p2 = (!tmp_3601_fu_14544_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3601_fu_14544_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3603_fu_14557_p3() {
    tmp_3603_fu_14557_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3600_reg_76295.read());
}

void particlemaster_ReadCalculations::thread_tmp_3604_fu_14564_p2() {
    tmp_3604_fu_14564_p2 = (!tmp_3603_fu_14557_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3603_fu_14557_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3605_fu_6697_p1() {
    tmp_3605_fu_6697_p1 = p_Val2_2033_fu_6691_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3606_fu_14570_p3() {
    tmp_3606_fu_14570_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3599_reg_76591.read());
}

void particlemaster_ReadCalculations::thread_tmp_3607_fu_14577_p2() {
    tmp_3607_fu_14577_p2 = (!tmp_3606_fu_14570_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3606_fu_14570_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3608_fu_13149_p1() {
    tmp_3608_fu_13149_p1 = esl_zext<32,6>(index0_V_33_reg_76275.read());
}

void particlemaster_ReadCalculations::thread_tmp_3609_fu_6711_p1() {
    tmp_3609_fu_6711_p1 = p_Val2_2033_fu_6691_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3610_fu_13233_p4() {
    tmp_3610_fu_13233_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_5238_reg_76332.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3611_fu_13242_p1() {
    tmp_3611_fu_13242_p1 = esl_zext<76,75>(sf33_fu_13224_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3612_fu_13254_p3() {
    tmp_3612_fu_13254_p3 = esl_concat<50,25>(tmp_5249_fu_13214_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3613_fu_13266_p1() {
    tmp_3613_fu_13266_p1 = esl_zext<77,76>(p_Val2_2556_fu_13246_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3614_fu_13289_p1() {
    tmp_3614_fu_13289_p1 = esl_zext<78,77>(p_Val2_2557_reg_76345.read());
}

void particlemaster_ReadCalculations::thread_tmp_3615_fu_13292_p1() {
    tmp_3615_fu_13292_p1 = esl_zext<78,75>(p_Val2_2558_reg_76360.read());
}

void particlemaster_ReadCalculations::thread_tmp_3616_fu_13875_p1() {
    tmp_3616_fu_13875_p1 = esl_zext<32,4>(p_Val2_7053_reg_76339.read());
}

void particlemaster_ReadCalculations::thread_tmp_3618_fu_13338_p3() {
    tmp_3618_fu_13338_p3 = esl_concat<67,14>(tmp_3617_reg_76377.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3619_fu_13349_p1() {
    tmp_3619_fu_13349_p1 = esl_zext<82,81>(p_Val2_2562_fu_13331_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3620_fu_7384_p1() {
    tmp_3620_fu_7384_p1 = p_Val2_2066_fu_7378_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3621_fu_13371_p1() {
    tmp_3621_fu_13371_p1 = esl_zext<83,82>(p_Val2_2563_reg_76382.read());
}

void particlemaster_ReadCalculations::thread_tmp_3623_fu_13374_p3() {
    tmp_3623_fu_13374_p3 = esl_concat<79,1>(p_Val2_2564_reg_76397.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3624_fu_13879_p1() {
    tmp_3624_fu_13879_p1 = esl_zext<32,6>(p_Val2_7054_reg_76371.read());
}

void particlemaster_ReadCalculations::thread_tmp_3625_fu_13423_p3() {
    tmp_3625_fu_13423_p3 = esl_concat<76,25>(tmp_5321_reg_76418.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3626_fu_13434_p1() {
    tmp_3626_fu_13434_p1 = esl_zext<102,96>(p_Val2_2567_fu_13414_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3627_fu_13457_p1() {
    tmp_3627_fu_13457_p1 = esl_zext<103,102>(p_Val2_2568_reg_76423.read());
}

void particlemaster_ReadCalculations::thread_tmp_3628_fu_13460_p3() {
    tmp_3628_fu_13460_p3 = esl_concat<89,6>(p_Val2_2569_reg_76438.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3629_fu_13883_p1() {
    tmp_3629_fu_13883_p1 = esl_zext<32,6>(p_Val2_7055_reg_76412.read());
}

void particlemaster_ReadCalculations::thread_tmp_3631_fu_13514_p3() {
    tmp_3631_fu_13514_p3 = esl_concat<86,34>(tmp_3630_reg_76455.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3632_fu_13525_p1() {
    tmp_3632_fu_13525_p1 = esl_zext<121,110>(p_Val2_2573_fu_13507_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3633_fu_13547_p1() {
    tmp_3633_fu_13547_p1 = esl_zext<122,121>(p_Val2_2574_reg_76460.read());
}

void particlemaster_ReadCalculations::thread_tmp_3634_fu_13550_p3() {
    tmp_3634_fu_13550_p3 = esl_concat<98,11>(p_Val2_2575_reg_76475.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3635_fu_13859_p1() {
    tmp_3635_fu_13859_p1 = esl_zext<32,6>(p_Val2_7056_reg_76449.read());
}

void particlemaster_ReadCalculations::thread_tmp_3637_fu_13604_p3() {
    tmp_3637_fu_13604_p3 = esl_concat<81,44>(tmp_3636_reg_76492.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3638_fu_13615_p1() {
    tmp_3638_fu_13615_p1 = esl_zext<126,110>(p_Val2_2579_fu_13597_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3639_fu_13637_p1() {
    tmp_3639_fu_13637_p1 = esl_zext<127,126>(p_Val2_2580_reg_76497.read());
}

void particlemaster_ReadCalculations::thread_tmp_3640_fu_13640_p3() {
    tmp_3640_fu_13640_p3 = esl_concat<93,16>(p_Val2_2581_reg_76512.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3641_fu_13863_p1() {
    tmp_3641_fu_13863_p1 = esl_zext<32,6>(p_Val2_7057_reg_76486.read());
}

void particlemaster_ReadCalculations::thread_tmp_3643_fu_13694_p3() {
    tmp_3643_fu_13694_p3 = esl_concat<76,54>(tmp_3642_reg_76529.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3644_fu_13705_p1() {
    tmp_3644_fu_13705_p1 = esl_zext<131,110>(p_Val2_2585_fu_13687_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3645_fu_13727_p1() {
    tmp_3645_fu_13727_p1 = esl_zext<132,131>(p_Val2_2586_reg_76534.read());
}

void particlemaster_ReadCalculations::thread_tmp_3646_fu_13730_p3() {
    tmp_3646_fu_13730_p3 = esl_concat<88,21>(p_Val2_2587_reg_76549.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3647_fu_13867_p1() {
    tmp_3647_fu_13867_p1 = esl_zext<32,6>(p_Val2_7058_reg_76523.read());
}

void particlemaster_ReadCalculations::thread_tmp_3649_fu_13784_p3() {
    tmp_3649_fu_13784_p3 = esl_concat<71,64>(tmp_3648_reg_76566.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3650_fu_13795_p1() {
    tmp_3650_fu_13795_p1 = esl_zext<136,110>(p_Val2_2591_fu_13777_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3651_fu_13891_p1() {
    tmp_3651_fu_13891_p1 = esl_zext<137,136>(p_Val2_2592_reg_76571.read());
}

void particlemaster_ReadCalculations::thread_tmp_3652_fu_13894_p3() {
    tmp_3652_fu_13894_p3 = esl_concat<83,26>(p_Val2_2593_reg_76622.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3653_fu_13871_p1() {
    tmp_3653_fu_13871_p1 = esl_zext<32,6>(p_Val2_7059_reg_76560.read());
}

void particlemaster_ReadCalculations::thread_tmp_3657_fu_14027_p3() {
    tmp_3657_fu_14027_p3 = esl_concat<72,45>(tmp_3654_reg_76657.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3659_fu_14057_p3() {
    tmp_3659_fu_14057_p3 = esl_concat<90,30>(p_Val2_2552_reg_76688.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3660_fu_14068_p1() {
    tmp_3660_fu_14068_p1 = esl_zext<122,121>(p_Val2_4474_cast_fu_14024_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3661_fu_7516_p3() {
    tmp_3661_fu_7516_p3 = r_V_370_reg_73788.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_3662_fu_14085_p1() {
    tmp_3662_fu_14085_p1 = esl_zext<123,122>(p_Val2_2598_reg_76709.read());
}

void particlemaster_ReadCalculations::thread_tmp_3663_fu_14088_p1() {
    tmp_3663_fu_14088_p1 = esl_zext<123,121>(p_Val2_2597_fu_14082_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3664_fu_14092_p1() {
    tmp_3664_fu_14092_p1 = esl_sext<120,73>(tmp_3658_reg_76703.read());
}

void particlemaster_ReadCalculations::thread_tmp_3667_fu_14189_p3() {
    tmp_3667_fu_14189_p3 = esl_concat<1,18>(tmp_5324_reg_76770.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3669_fu_14212_p2() {
    tmp_3669_fu_14212_p2 = (!tmp_5338_fu_14209_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5338_fu_14209_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3670_fu_14218_p1() {
    tmp_3670_fu_14218_p1 = esl_sext<131,128>(phitmp22_reg_76755.read());
}

void particlemaster_ReadCalculations::thread_tmp_3671_fu_14270_p1() {
    tmp_3671_fu_14270_p1 = esl_sext<72,71>(p_Val2_4620_reg_76760.read());
}

void particlemaster_ReadCalculations::thread_tmp_3672_fu_14273_p1() {
    tmp_3672_fu_14273_p1 = esl_sext<72,71>(p_Val2_2605_reg_76816.read());
}

void particlemaster_ReadCalculations::thread_tmp_3673_fu_14428_p1() {
    tmp_3673_fu_14428_p1 = esl_zext<32,8>(m_diff_hi_V_37_reg_76821.read());
}

void particlemaster_ReadCalculations::thread_tmp_3674_fu_14326_p1() {
    tmp_3674_fu_14326_p1 = esl_zext<32,8>(Z4_ind_V_37_fu_14316_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3675_fu_14336_p1() {
    tmp_3675_fu_14336_p1 = esl_zext<36,35>(p_Val2_4625_reg_76838.read());
}

void particlemaster_ReadCalculations::thread_tmp_3676_fu_14339_p1() {
    tmp_3676_fu_14339_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3677_fu_14331_p1() {
    tmp_3677_fu_14331_p1 = esl_zext<32,8>(p_Val2_4631_fu_14302_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3678_fu_14349_p4() {
    tmp_3678_fu_14349_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4631_reg_76833.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3680_fu_14385_p1() {
    tmp_3680_fu_14385_p1 = esl_zext<44,43>(tmp_3678_reg_76859.read());
}

void particlemaster_ReadCalculations::thread_tmp_3681_fu_14381_p1() {
    tmp_3681_fu_14381_p1 = esl_zext<32,8>(p_Val2_4655_reg_76826.read());
}

void particlemaster_ReadCalculations::thread_tmp_3683_fu_14406_p4() {
    tmp_3683_fu_14406_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4655_reg_76826.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3685_fu_14442_p5() {
    tmp_3685_fu_14442_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4655_reg_76826.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3688_fu_14498_p1() {
    tmp_3688_fu_14498_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3689_fu_7497_p1() {
    tmp_3689_fu_7497_p1 = grp_fu_72711_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3690_fu_14583_p3() {
    tmp_3690_fu_14583_p3 = esl_concat<59,49>(p_Val2_2614_reg_76925.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3691_fu_14221_p2() {
    tmp_3691_fu_14221_p2 = (!tmp_3670_fu_14218_p1.read().is_01() || !p_Val2_2600_reg_76750.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_3670_fu_14218_p1.read() != p_Val2_2600_reg_76750.read());
}

void particlemaster_ReadCalculations::thread_tmp_3692_fu_14667_p2() {
    tmp_3692_fu_14667_p2 = (!p_0415_0_i37_fu_14641_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i37_fu_14641_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3693_fu_14673_p4() {
    tmp_3693_fu_14673_p4 = p_Val2_2616_reg_76980.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3694_fu_14682_p4() {
    tmp_3694_fu_14682_p4 = p_Val2_2616_reg_76980.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3695_fu_14884_p1() {
    tmp_3695_fu_14884_p1 = t_V_148_fu_14866_p3.read();
}

void particlemaster_ReadCalculations::thread_tmp_3696_fu_14888_p3() {
    tmp_3696_fu_14888_p3 = (!sel_tmp347_fu_14879_p2.read()[0].is_01())? sc_lv<64>(): ((sel_tmp347_fu_14879_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_3697_fu_14896_p2() {
    tmp_3697_fu_14896_p2 = (sel_tmp347_fu_14879_p2.read() | x_is_p1_20_reg_76935.read());
}

void particlemaster_ReadCalculations::thread_tmp_3700_fu_25259_p3() {
    tmp_3700_fu_25259_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_3701_fu_14909_p3() {
    tmp_3701_fu_14909_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_3702_fu_25285_p3() {
    tmp_3702_fu_25285_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_3703_fu_25292_p2() {
    tmp_3703_fu_25292_p2 = (!tmp_3702_fu_25285_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3702_fu_25285_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3704_fu_14935_p3() {
    tmp_3704_fu_14935_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_3705_fu_14942_p2() {
    tmp_3705_fu_14942_p2 = (!tmp_3704_fu_14935_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3704_fu_14935_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3706_fu_25298_p3() {
    tmp_3706_fu_25298_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_3707_fu_25305_p2() {
    tmp_3707_fu_25305_p2 = (!tmp_3706_fu_25298_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3706_fu_25298_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3708_fu_14948_p3() {
    tmp_3708_fu_14948_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_3709_fu_14955_p2() {
    tmp_3709_fu_14955_p2 = (!tmp_3708_fu_14948_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3708_fu_14948_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3710_fu_25311_p1() {
    tmp_3710_fu_25311_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3711_fu_25396_p4() {
    tmp_3711_fu_25396_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_5416_reg_81568.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3712_fu_25405_p1() {
    tmp_3712_fu_25405_p1 = esl_zext<76,75>(sf34_fu_25387_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3713_fu_25417_p3() {
    tmp_3713_fu_25417_p3 = esl_concat<50,25>(tmp_5442_fu_25377_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3715_fu_7891_p4() {
    tmp_3715_fu_7891_p4 = p_0415_0_i_fu_7886_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_3716_fu_25429_p1() {
    tmp_3716_fu_25429_p1 = esl_zext<77,76>(p_Val2_2621_fu_25409_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3717_fu_25452_p1() {
    tmp_3717_fu_25452_p1 = esl_zext<78,77>(p_Val2_2622_reg_81581.read());
}

void particlemaster_ReadCalculations::thread_tmp_3718_fu_8010_p3() {
    tmp_3718_fu_8010_p3 = p_Val2_2067_reg_73758.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_3719_fu_25455_p1() {
    tmp_3719_fu_25455_p1 = esl_zext<78,75>(p_Val2_2623_reg_81596.read());
}

void particlemaster_ReadCalculations::thread_tmp_3720_fu_26011_p1() {
    tmp_3720_fu_26011_p1 = esl_zext<32,4>(p_Val2_7018_reg_81575.read());
}

void particlemaster_ReadCalculations::thread_tmp_3722_fu_25501_p3() {
    tmp_3722_fu_25501_p3 = esl_concat<67,14>(tmp_3721_reg_81613.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3723_fu_25512_p1() {
    tmp_3723_fu_25512_p1 = esl_zext<82,81>(p_Val2_2627_fu_25494_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3724_fu_25534_p1() {
    tmp_3724_fu_25534_p1 = esl_zext<83,82>(p_Val2_2628_reg_81618.read());
}

void particlemaster_ReadCalculations::thread_tmp_3725_fu_25537_p3() {
    tmp_3725_fu_25537_p3 = esl_concat<79,1>(p_Val2_2629_reg_81633.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3726_fu_26015_p1() {
    tmp_3726_fu_26015_p1 = esl_zext<32,6>(p_Val2_7019_reg_81607.read());
}

void particlemaster_ReadCalculations::thread_tmp_3727_fu_25586_p3() {
    tmp_3727_fu_25586_p3 = esl_concat<76,25>(tmp_5492_reg_81654.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3728_fu_25597_p1() {
    tmp_3728_fu_25597_p1 = esl_zext<102,96>(p_Val2_2632_fu_25577_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3729_fu_7938_p1() {
    tmp_3729_fu_7938_p1 = p_0415_0_i_fu_7886_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3730_fu_25620_p1() {
    tmp_3730_fu_25620_p1 = esl_zext<103,102>(p_Val2_2633_reg_81659.read());
}

void particlemaster_ReadCalculations::thread_tmp_3731_fu_25623_p3() {
    tmp_3731_fu_25623_p3 = esl_concat<89,6>(p_Val2_2634_reg_81674.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3732_fu_26019_p1() {
    tmp_3732_fu_26019_p1 = esl_zext<32,6>(p_Val2_7020_reg_81648.read());
}

void particlemaster_ReadCalculations::thread_tmp_3734_fu_25677_p3() {
    tmp_3734_fu_25677_p3 = esl_concat<86,34>(tmp_3733_reg_81691.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3735_fu_25688_p1() {
    tmp_3735_fu_25688_p1 = esl_zext<121,110>(p_Val2_2638_fu_25670_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3736_fu_25710_p1() {
    tmp_3736_fu_25710_p1 = esl_zext<122,121>(p_Val2_2639_reg_81696.read());
}

void particlemaster_ReadCalculations::thread_tmp_3737_fu_25713_p3() {
    tmp_3737_fu_25713_p3 = esl_concat<98,11>(p_Val2_2640_reg_81711.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3738_fu_25995_p1() {
    tmp_3738_fu_25995_p1 = esl_zext<32,6>(p_Val2_7021_reg_81685.read());
}

void particlemaster_ReadCalculations::thread_tmp_3740_fu_25767_p3() {
    tmp_3740_fu_25767_p3 = esl_concat<81,44>(tmp_3739_reg_81728.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3741_fu_25778_p1() {
    tmp_3741_fu_25778_p1 = esl_zext<126,110>(p_Val2_2644_fu_25760_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3742_fu_25800_p1() {
    tmp_3742_fu_25800_p1 = esl_zext<127,126>(p_Val2_2645_reg_81733.read());
}

void particlemaster_ReadCalculations::thread_tmp_3743_fu_25803_p3() {
    tmp_3743_fu_25803_p3 = esl_concat<93,16>(p_Val2_2646_reg_81748.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3744_fu_25999_p1() {
    tmp_3744_fu_25999_p1 = esl_zext<32,6>(p_Val2_7022_reg_81722.read());
}

void particlemaster_ReadCalculations::thread_tmp_3746_fu_25857_p3() {
    tmp_3746_fu_25857_p3 = esl_concat<76,54>(tmp_3745_reg_81765.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3747_fu_25868_p1() {
    tmp_3747_fu_25868_p1 = esl_zext<131,110>(p_Val2_2650_fu_25850_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3748_fu_25890_p1() {
    tmp_3748_fu_25890_p1 = esl_zext<132,131>(p_Val2_2651_reg_81770.read());
}

void particlemaster_ReadCalculations::thread_tmp_3749_fu_25893_p3() {
    tmp_3749_fu_25893_p3 = esl_concat<88,21>(p_Val2_2652_reg_81785.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3750_fu_26003_p1() {
    tmp_3750_fu_26003_p1 = esl_zext<32,6>(p_Val2_7023_reg_81759.read());
}

void particlemaster_ReadCalculations::thread_tmp_3752_fu_25947_p3() {
    tmp_3752_fu_25947_p3 = esl_concat<71,64>(tmp_3751_reg_81802.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3753_fu_25958_p1() {
    tmp_3753_fu_25958_p1 = esl_zext<136,110>(p_Val2_2656_fu_25940_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3754_fu_26027_p1() {
    tmp_3754_fu_26027_p1 = esl_zext<137,136>(p_Val2_2657_reg_81807.read());
}

void particlemaster_ReadCalculations::thread_tmp_3755_fu_26030_p3() {
    tmp_3755_fu_26030_p3 = esl_concat<83,26>(p_Val2_2658_reg_81847.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3756_fu_26007_p1() {
    tmp_3756_fu_26007_p1 = esl_zext<32,6>(p_Val2_7024_reg_81796.read());
}

void particlemaster_ReadCalculations::thread_tmp_3760_fu_26163_p3() {
    tmp_3760_fu_26163_p3 = esl_concat<72,45>(tmp_3757_reg_81882.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3762_fu_26193_p3() {
    tmp_3762_fu_26193_p3 = esl_concat<90,30>(p_Val2_2617_reg_81913.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3763_fu_26204_p1() {
    tmp_3763_fu_26204_p1 = esl_zext<122,121>(p_Val2_4591_cast_fu_26160_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3764_fu_26225_p1() {
    tmp_3764_fu_26225_p1 = esl_zext<123,122>(p_Val2_2663_reg_81934.read());
}

void particlemaster_ReadCalculations::thread_tmp_3765_fu_26228_p1() {
    tmp_3765_fu_26228_p1 = esl_zext<123,121>(p_Val2_2662_fu_26222_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3766_fu_26232_p1() {
    tmp_3766_fu_26232_p1 = esl_sext<120,73>(tmp_3761_reg_81928.read());
}

void particlemaster_ReadCalculations::thread_tmp_3769_fu_26306_p3() {
    tmp_3769_fu_26306_p3 = esl_concat<77,52>(tmp_3768_reg_81959.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3770_fu_26316_p3() {
    tmp_3770_fu_26316_p3 = esl_concat<1,18>(tmp_5522_reg_81974.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3772_fu_26339_p2() {
    tmp_3772_fu_26339_p2 = (!tmp_5535_fu_26336_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5535_fu_26336_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3773_fu_26399_p1() {
    tmp_3773_fu_26399_p1 = esl_sext<72,71>(p_Val2_4775_reg_81964.read());
}

void particlemaster_ReadCalculations::thread_tmp_3774_fu_26402_p1() {
    tmp_3774_fu_26402_p1 = esl_sext<72,71>(p_Val2_2670_reg_82013.read());
}

void particlemaster_ReadCalculations::thread_tmp_3775_fu_26557_p1() {
    tmp_3775_fu_26557_p1 = esl_zext<32,8>(m_diff_hi_V_38_reg_82018.read());
}

void particlemaster_ReadCalculations::thread_tmp_3776_fu_26455_p1() {
    tmp_3776_fu_26455_p1 = esl_zext<32,8>(Z4_ind_V_38_fu_26445_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3777_fu_26465_p1() {
    tmp_3777_fu_26465_p1 = esl_zext<36,35>(p_Val2_4792_reg_82035.read());
}

void particlemaster_ReadCalculations::thread_tmp_3778_fu_26468_p1() {
    tmp_3778_fu_26468_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3779_fu_26460_p1() {
    tmp_3779_fu_26460_p1 = esl_zext<32,8>(p_Val2_4799_fu_26431_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3780_fu_26478_p4() {
    tmp_3780_fu_26478_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4799_reg_82030.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3782_fu_26514_p1() {
    tmp_3782_fu_26514_p1 = esl_zext<44,43>(tmp_3780_reg_82056.read());
}

void particlemaster_ReadCalculations::thread_tmp_3783_fu_26510_p1() {
    tmp_3783_fu_26510_p1 = esl_zext<32,8>(p_Val2_4816_reg_82023.read());
}

void particlemaster_ReadCalculations::thread_tmp_3785_fu_26535_p4() {
    tmp_3785_fu_26535_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4816_reg_82023.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3787_fu_26571_p5() {
    tmp_3787_fu_26571_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4816_reg_82023.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3790_fu_26627_p1() {
    tmp_3790_fu_26627_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3791_fu_26637_p3() {
    tmp_3791_fu_26637_p3 = esl_concat<59,49>(p_Val2_2679_reg_82122.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3792_fu_26671_p4() {
    tmp_3792_fu_26671_p4 = p_Val2_2681_fu_26647_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3793_fu_26681_p3() {
    tmp_3793_fu_26681_p3 = esl_concat<57,1>(tmp_3792_fu_26671_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3794_fu_26349_p2() {
    tmp_3794_fu_26349_p2 = (!tmp_7037_cast_fu_26345_p1.read().is_01() || !p_Val2_2665_fu_26299_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7037_cast_fu_26345_p1.read() != p_Val2_2665_fu_26299_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3795_fu_14961_p1() {
    tmp_3795_fu_14961_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3796_fu_15046_p4() {
    tmp_3796_fu_15046_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_5608_reg_77106.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3797_fu_15055_p1() {
    tmp_3797_fu_15055_p1 = esl_zext<76,75>(sf35_fu_15037_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3799_fu_15067_p3() {
    tmp_3799_fu_15067_p3 = esl_concat<50,25>(tmp_5611_fu_15027_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3800_fu_15079_p1() {
    tmp_3800_fu_15079_p1 = esl_zext<77,76>(p_Val2_2688_fu_15059_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3801_fu_15102_p1() {
    tmp_3801_fu_15102_p1 = esl_zext<78,77>(p_Val2_2689_reg_77119.read());
}

void particlemaster_ReadCalculations::thread_tmp_3802_fu_18748_p1() {
    tmp_3802_fu_18748_p1 = grp_fu_18742_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3803_fu_15105_p1() {
    tmp_3803_fu_15105_p1 = esl_zext<78,75>(p_Val2_2690_reg_77134.read());
}

void particlemaster_ReadCalculations::thread_tmp_3804_fu_15661_p1() {
    tmp_3804_fu_15661_p1 = esl_zext<32,4>(p_Val2_7060_reg_77113.read());
}

void particlemaster_ReadCalculations::thread_tmp_3806_fu_15151_p3() {
    tmp_3806_fu_15151_p3 = esl_concat<67,14>(tmp_3805_reg_77151.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3807_fu_15162_p1() {
    tmp_3807_fu_15162_p1 = esl_zext<82,81>(p_Val2_2694_fu_15144_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3808_fu_15184_p1() {
    tmp_3808_fu_15184_p1 = esl_zext<83,82>(p_Val2_2695_reg_77156.read());
}

void particlemaster_ReadCalculations::thread_tmp_3809_fu_15187_p3() {
    tmp_3809_fu_15187_p3 = esl_concat<79,1>(p_Val2_2696_reg_77171.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3810_fu_15665_p1() {
    tmp_3810_fu_15665_p1 = esl_zext<32,6>(p_Val2_7061_reg_77145.read());
}

void particlemaster_ReadCalculations::thread_tmp_3811_fu_15236_p3() {
    tmp_3811_fu_15236_p3 = esl_concat<76,25>(tmp_5664_reg_77192.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3812_fu_15247_p1() {
    tmp_3812_fu_15247_p1 = esl_zext<102,96>(p_Val2_2699_fu_15227_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3813_fu_15270_p1() {
    tmp_3813_fu_15270_p1 = esl_zext<103,102>(p_Val2_2700_reg_77197.read());
}

void particlemaster_ReadCalculations::thread_tmp_3814_fu_15273_p3() {
    tmp_3814_fu_15273_p3 = esl_concat<89,6>(p_Val2_2701_reg_77212.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3815_fu_15669_p1() {
    tmp_3815_fu_15669_p1 = esl_zext<32,6>(p_Val2_7062_reg_77186.read());
}

void particlemaster_ReadCalculations::thread_tmp_3817_fu_15327_p3() {
    tmp_3817_fu_15327_p3 = esl_concat<86,34>(tmp_3816_reg_77229.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3818_fu_15338_p1() {
    tmp_3818_fu_15338_p1 = esl_zext<121,110>(p_Val2_2705_fu_15320_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3819_fu_18769_p1() {
    tmp_3819_fu_18769_p1 = p_Val2_2087_reg_78667.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3820_fu_18772_p3() {
    tmp_3820_fu_18772_p3 = p_Val2_2087_reg_78667.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3821_fu_15360_p1() {
    tmp_3821_fu_15360_p1 = esl_zext<122,121>(p_Val2_2706_reg_77234.read());
}

void particlemaster_ReadCalculations::thread_tmp_3822_fu_15363_p3() {
    tmp_3822_fu_15363_p3 = esl_concat<98,11>(p_Val2_2707_reg_77249.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3823_fu_18946_p1() {
    tmp_3823_fu_18946_p1 = p_Val2_2099_fu_18940_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3824_fu_15645_p1() {
    tmp_3824_fu_15645_p1 = esl_zext<32,6>(p_Val2_7063_reg_77223.read());
}

void particlemaster_ReadCalculations::thread_tmp_3826_fu_15417_p3() {
    tmp_3826_fu_15417_p3 = esl_concat<81,44>(tmp_3825_reg_77266.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3827_fu_15428_p1() {
    tmp_3827_fu_15428_p1 = esl_zext<126,110>(p_Val2_2711_fu_15410_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3828_fu_15450_p1() {
    tmp_3828_fu_15450_p1 = esl_zext<127,126>(p_Val2_2712_reg_77271.read());
}

void particlemaster_ReadCalculations::thread_tmp_3829_fu_15453_p3() {
    tmp_3829_fu_15453_p3 = esl_concat<93,16>(p_Val2_2713_reg_77286.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3830_fu_15649_p1() {
    tmp_3830_fu_15649_p1 = esl_zext<32,6>(p_Val2_7064_reg_77260.read());
}

void particlemaster_ReadCalculations::thread_tmp_3832_fu_15507_p3() {
    tmp_3832_fu_15507_p3 = esl_concat<76,54>(tmp_3831_reg_77303.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3833_fu_15518_p1() {
    tmp_3833_fu_15518_p1 = esl_zext<131,110>(p_Val2_2717_fu_15500_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3834_fu_15540_p1() {
    tmp_3834_fu_15540_p1 = esl_zext<132,131>(p_Val2_2718_reg_77308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3835_fu_15543_p3() {
    tmp_3835_fu_15543_p3 = esl_concat<88,21>(p_Val2_2719_reg_77323.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3836_fu_18960_p1() {
    tmp_3836_fu_18960_p1 = p_Val2_2099_fu_18940_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3837_fu_15653_p1() {
    tmp_3837_fu_15653_p1 = esl_zext<32,6>(p_Val2_7065_reg_77297.read());
}

void particlemaster_ReadCalculations::thread_tmp_3839_fu_15597_p3() {
    tmp_3839_fu_15597_p3 = esl_concat<71,64>(tmp_3838_reg_77340.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3840_fu_15608_p1() {
    tmp_3840_fu_15608_p1 = esl_zext<136,110>(p_Val2_2723_fu_15590_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3841_fu_15677_p1() {
    tmp_3841_fu_15677_p1 = esl_zext<137,136>(p_Val2_2724_reg_77345.read());
}

void particlemaster_ReadCalculations::thread_tmp_3842_fu_15680_p3() {
    tmp_3842_fu_15680_p3 = esl_concat<83,26>(p_Val2_2725_reg_77385.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3843_fu_15657_p1() {
    tmp_3843_fu_15657_p1 = esl_zext<32,6>(p_Val2_7066_reg_77334.read());
}

void particlemaster_ReadCalculations::thread_tmp_3847_fu_15813_p3() {
    tmp_3847_fu_15813_p3 = esl_concat<72,45>(tmp_3844_reg_77420.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3849_fu_15843_p3() {
    tmp_3849_fu_15843_p3 = esl_concat<90,30>(p_Val2_2684_reg_77451.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3850_fu_15854_p1() {
    tmp_3850_fu_15854_p1 = esl_zext<122,121>(p_Val2_4658_cast_fu_15810_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3851_fu_15875_p1() {
    tmp_3851_fu_15875_p1 = esl_zext<123,122>(p_Val2_2730_reg_77472.read());
}

void particlemaster_ReadCalculations::thread_tmp_3852_fu_15878_p1() {
    tmp_3852_fu_15878_p1 = esl_zext<123,121>(p_Val2_2729_fu_15872_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3853_fu_15882_p1() {
    tmp_3853_fu_15882_p1 = esl_sext<120,73>(tmp_3848_reg_77466.read());
}

void particlemaster_ReadCalculations::thread_tmp_3856_fu_15956_p3() {
    tmp_3856_fu_15956_p3 = esl_concat<77,52>(tmp_3855_reg_77497.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3857_fu_15966_p3() {
    tmp_3857_fu_15966_p3 = esl_concat<1,18>(tmp_5698_reg_77512.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3859_fu_15989_p2() {
    tmp_3859_fu_15989_p2 = (!tmp_5713_fu_15986_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5713_fu_15986_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3860_fu_16049_p1() {
    tmp_3860_fu_16049_p1 = esl_sext<72,71>(p_Val2_4877_reg_77502.read());
}

void particlemaster_ReadCalculations::thread_tmp_3861_fu_16052_p1() {
    tmp_3861_fu_16052_p1 = esl_sext<72,71>(p_Val2_2737_reg_77551.read());
}

void particlemaster_ReadCalculations::thread_tmp_3862_fu_16207_p1() {
    tmp_3862_fu_16207_p1 = esl_zext<32,8>(m_diff_hi_V_39_reg_77556.read());
}

void particlemaster_ReadCalculations::thread_tmp_3863_fu_16105_p1() {
    tmp_3863_fu_16105_p1 = esl_zext<32,8>(Z4_ind_V_39_fu_16095_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3864_fu_16115_p1() {
    tmp_3864_fu_16115_p1 = esl_zext<36,35>(p_Val2_4896_reg_77573.read());
}

void particlemaster_ReadCalculations::thread_tmp_3865_fu_16118_p1() {
    tmp_3865_fu_16118_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3866_fu_16110_p1() {
    tmp_3866_fu_16110_p1 = esl_zext<32,8>(p_Val2_4904_fu_16081_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3867_fu_16128_p4() {
    tmp_3867_fu_16128_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4904_reg_77568.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3869_fu_16164_p1() {
    tmp_3869_fu_16164_p1 = esl_zext<44,43>(tmp_3867_reg_77594.read());
}

void particlemaster_ReadCalculations::thread_tmp_3870_fu_16160_p1() {
    tmp_3870_fu_16160_p1 = esl_zext<32,8>(p_Val2_4911_reg_77561.read());
}

void particlemaster_ReadCalculations::thread_tmp_3872_fu_16185_p4() {
    tmp_3872_fu_16185_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4911_reg_77561.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3874_fu_16221_p5() {
    tmp_3874_fu_16221_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4911_reg_77561.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3875_fu_19606_p1() {
    tmp_3875_fu_19606_p1 = p_Val2_2132_fu_19600_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3876_fu_19610_p1() {
    tmp_3876_fu_19610_p1 = p_Val2_2132_fu_19600_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3879_fu_16277_p1() {
    tmp_3879_fu_16277_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3880_fu_16287_p3() {
    tmp_3880_fu_16287_p3 = esl_concat<59,49>(p_Val2_2746_reg_77660.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3881_fu_16321_p4() {
    tmp_3881_fu_16321_p4 = p_Val2_2748_fu_16297_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3882_fu_16331_p3() {
    tmp_3882_fu_16331_p3 = esl_concat<57,1>(tmp_3881_fu_16321_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3883_fu_15999_p2() {
    tmp_3883_fu_15999_p2 = (!tmp_7072_cast_fu_15995_p1.read().is_01() || !p_Val2_2732_fu_15949_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7072_cast_fu_15995_p1.read() != p_Val2_2732_fu_15949_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3884_fu_26729_p2() {
    tmp_3884_fu_26729_p2 = (!p_0415_0_i38_reg_82137.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i38_reg_82137.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3885_fu_16379_p2() {
    tmp_3885_fu_16379_p2 = (!p_0415_0_i39_reg_77675.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i39_reg_77675.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3886_fu_27404_p1() {
    tmp_3886_fu_27404_p1 = tmp_15646_neg_reg_82373.read();
}

void particlemaster_ReadCalculations::thread_tmp_3887_fu_26789_p4() {
    tmp_3887_fu_26789_p4 = p_Val2_2533_reg_81161.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_3888_fu_26798_p3() {
    tmp_3888_fu_26798_p3 = esl_concat<77,52>(tmp_3887_fu_26789_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3889_fu_26826_p3() {
    tmp_3889_fu_26826_p3 = esl_concat<1,18>(tmp_5817_fu_26815_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3891_fu_26850_p2() {
    tmp_3891_fu_26850_p2 = (!tmp_5820_fu_26847_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5820_fu_26847_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3892_fu_26919_p1() {
    tmp_3892_fu_26919_p1 = esl_sext<72,71>(p_Val2_5620_fu_26910_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3893_fu_26923_p1() {
    tmp_3893_fu_26923_p1 = esl_sext<72,71>(p_Val2_2756_reg_82205.read());
}

void particlemaster_ReadCalculations::thread_tmp_3894_fu_27078_p1() {
    tmp_3894_fu_27078_p1 = esl_zext<32,8>(m_diff_hi_V_40_reg_82210.read());
}

void particlemaster_ReadCalculations::thread_tmp_3895_fu_26976_p1() {
    tmp_3895_fu_26976_p1 = esl_zext<32,8>(Z4_ind_V_40_fu_26966_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3896_fu_26986_p1() {
    tmp_3896_fu_26986_p1 = esl_zext<36,35>(p_Val2_5043_reg_82227.read());
}

void particlemaster_ReadCalculations::thread_tmp_3897_fu_26989_p1() {
    tmp_3897_fu_26989_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3898_fu_26981_p1() {
    tmp_3898_fu_26981_p1 = esl_zext<32,8>(p_Val2_5622_fu_26952_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3899_fu_26999_p4() {
    tmp_3899_fu_26999_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5622_reg_82222.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3901_fu_27035_p1() {
    tmp_3901_fu_27035_p1 = esl_zext<44,43>(tmp_3899_reg_82248.read());
}

void particlemaster_ReadCalculations::thread_tmp_3902_fu_27031_p1() {
    tmp_3902_fu_27031_p1 = esl_zext<32,8>(p_Val2_5631_reg_82215.read());
}

void particlemaster_ReadCalculations::thread_tmp_3904_fu_27056_p4() {
    tmp_3904_fu_27056_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5631_reg_82215.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3907_fu_27092_p5() {
    tmp_3907_fu_27092_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5631_reg_82215.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3908_fu_19747_p3() {
    tmp_3908_fu_19747_p3 = r_V_373_reg_79084.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_3909_fu_19728_p1() {
    tmp_3909_fu_19728_p1 = grp_fu_72791_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3912_fu_27148_p1() {
    tmp_3912_fu_27148_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3913_fu_27158_p3() {
    tmp_3913_fu_27158_p3 = esl_concat<59,49>(p_Val2_2765_reg_82314.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3914_fu_26860_p2() {
    tmp_3914_fu_26860_p2 = (!tmp_7321_cast_fu_26856_p1.read().is_01() || !p_Val2_2751_fu_26782_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7321_cast_fu_26856_p1.read() != p_Val2_2751_fu_26782_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3915_fu_27219_p2() {
    tmp_3915_fu_27219_p2 = (!p_0415_0_i40_fu_27198_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i40_fu_27198_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3916_fu_27225_p4() {
    tmp_3916_fu_27225_p4 = p_Val2_2767_reg_82324.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3917_fu_27234_p4() {
    tmp_3917_fu_27234_p4 = p_Val2_2767_reg_82324.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3918_fu_27364_p2() {
    tmp_3918_fu_27364_p2 = (sel_tmp364_fu_27359_p2.read() | sel_tmp359_fu_27340_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3919_fu_27378_p2() {
    tmp_3919_fu_27378_p2 = (tmp_3918_fu_27364_p2.read() | sel_tmp355_fu_27336_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3923_fu_20055_p3() {
    tmp_3923_fu_20055_p3 = p_Val2_2150_fu_20039_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_3927_fu_27447_p2() {
    tmp_3927_fu_27447_p2 = (!b_exp_93_fu_27441_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_93_fu_27441_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3928_fu_27453_p2() {
    tmp_3928_fu_27453_p2 = (!loc_V_77_reg_82412.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_77_reg_82412.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3929_fu_27458_p2() {
    tmp_3929_fu_27458_p2 = (!loc_V_76_reg_82405.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_76_reg_82405.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3930_fu_27463_p2() {
    tmp_3930_fu_27463_p2 = (!loc_V_77_reg_82412.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_77_reg_82412.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3931_fu_27468_p2() {
    tmp_3931_fu_27468_p2 = (tmp_3929_fu_27458_p2.read() & tmp_3930_fu_27463_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3932_fu_27474_p2() {
    tmp_3932_fu_27474_p2 = (!loc_V_76_reg_82405.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_76_reg_82405.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3933_fu_27499_p2() {
    tmp_3933_fu_27499_p2 = (tmp_3929_reg_82441.read() & tmp_3928_reg_82435.read());
}

void particlemaster_ReadCalculations::thread_tmp_3934_fu_17054_p1() {
    tmp_3934_fu_17054_p1 = tmp_15651_neg_reg_77911.read();
}

void particlemaster_ReadCalculations::thread_tmp_3935_fu_16439_p4() {
    tmp_3935_fu_16439_p4 = p_Val2_2599_reg_76719.read().range(119, 43);
}

void particlemaster_ReadCalculations::thread_tmp_3936_fu_16448_p3() {
    tmp_3936_fu_16448_p3 = esl_concat<77,52>(tmp_3935_fu_16439_p4.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3937_fu_16476_p3() {
    tmp_3937_fu_16476_p3 = esl_concat<1,18>(tmp_5910_fu_16465_p3.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3939_fu_16500_p2() {
    tmp_3939_fu_16500_p2 = (!tmp_5927_fu_16497_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5927_fu_16497_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3940_fu_16569_p1() {
    tmp_3940_fu_16569_p1 = esl_sext<72,71>(p_Val2_5686_fu_16560_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3941_fu_16573_p1() {
    tmp_3941_fu_16573_p1 = esl_sext<72,71>(p_Val2_2774_reg_77743.read());
}

void particlemaster_ReadCalculations::thread_tmp_3942_fu_16728_p1() {
    tmp_3942_fu_16728_p1 = esl_zext<32,8>(m_diff_hi_V_41_reg_77748.read());
}

void particlemaster_ReadCalculations::thread_tmp_3943_fu_16626_p1() {
    tmp_3943_fu_16626_p1 = esl_zext<32,8>(Z4_ind_V_41_fu_16616_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3944_fu_16636_p1() {
    tmp_3944_fu_16636_p1 = esl_zext<36,35>(p_Val2_5221_reg_77765.read());
}

void particlemaster_ReadCalculations::thread_tmp_3945_fu_16639_p1() {
    tmp_3945_fu_16639_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3946_fu_16631_p1() {
    tmp_3946_fu_16631_p1 = esl_zext<32,8>(p_Val2_5695_fu_16602_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3947_fu_16649_p4() {
    tmp_3947_fu_16649_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5695_reg_77760.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3949_fu_16685_p1() {
    tmp_3949_fu_16685_p1 = esl_zext<44,43>(tmp_3947_reg_77786.read());
}

void particlemaster_ReadCalculations::thread_tmp_3950_fu_16681_p1() {
    tmp_3950_fu_16681_p1 = esl_zext<32,8>(p_Val2_5709_reg_77753.read());
}

void particlemaster_ReadCalculations::thread_tmp_3952_fu_16706_p4() {
    tmp_3952_fu_16706_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5709_reg_77753.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3954_fu_16742_p5() {
    tmp_3954_fu_16742_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5709_reg_77753.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3957_fu_16798_p1() {
    tmp_3957_fu_16798_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3958_fu_16808_p3() {
    tmp_3958_fu_16808_p3 = esl_concat<59,49>(p_Val2_2783_reg_77852.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3959_fu_16510_p2() {
    tmp_3959_fu_16510_p2 = (!tmp_7356_cast_fu_16506_p1.read().is_01() || !p_Val2_2769_fu_16432_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7356_cast_fu_16506_p1.read() != p_Val2_2769_fu_16432_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3960_fu_16869_p2() {
    tmp_3960_fu_16869_p2 = (!p_0415_0_i41_fu_16848_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i41_fu_16848_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3961_fu_16875_p4() {
    tmp_3961_fu_16875_p4 = p_Val2_2785_reg_77862.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3962_fu_16884_p4() {
    tmp_3962_fu_16884_p4 = p_Val2_2785_reg_77862.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3963_fu_17014_p2() {
    tmp_3963_fu_17014_p2 = (sel_tmp386_fu_17009_p2.read() | sel_tmp383_fu_16990_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3965_fu_8391_p1() {
    tmp_3965_fu_8391_p1 = grp_fu_8385_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3966_fu_17028_p2() {
    tmp_3966_fu_17028_p2 = (tmp_3963_fu_17014_p2.read() | sel_tmp374_fu_16986_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3972_fu_17103_p2() {
    tmp_3972_fu_17103_p2 = (!b_exp_94_fu_17097_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_94_fu_17097_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3973_fu_17109_p2() {
    tmp_3973_fu_17109_p2 = (!loc_V_90_reg_77949.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_90_reg_77949.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3974_fu_17088_p2() {
    tmp_3974_fu_17088_p2 = (!loc_V_89_fu_17074_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_89_fu_17074_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3975_fu_17114_p2() {
    tmp_3975_fu_17114_p2 = (!loc_V_90_reg_77949.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_90_reg_77949.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3976_fu_17119_p2() {
    tmp_3976_fu_17119_p2 = (tmp_3974_reg_77957.read() & tmp_3975_fu_17114_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3977_fu_17124_p2() {
    tmp_3977_fu_17124_p2 = (!loc_V_89_reg_77943.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_89_reg_77943.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3978_fu_17149_p2() {
    tmp_3978_fu_17149_p2 = (tmp_3974_reg_77957.read() & tmp_3973_reg_77978.read());
}

void particlemaster_ReadCalculations::thread_tmp_3979_fu_27503_p3() {
    tmp_3979_fu_27503_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3931_reg_82446.read());
}

void particlemaster_ReadCalculations::thread_tmp_3980_fu_17153_p3() {
    tmp_3980_fu_17153_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3976_reg_77984.read());
}

void particlemaster_ReadCalculations::thread_tmp_3981_fu_27530_p3() {
    tmp_3981_fu_27530_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3933_fu_27499_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3982_fu_27538_p2() {
    tmp_3982_fu_27538_p2 = (!tmp_3981_fu_27530_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3981_fu_27530_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3983_fu_17180_p3() {
    tmp_3983_fu_17180_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3978_fu_17149_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3984_fu_17188_p2() {
    tmp_3984_fu_17188_p2 = (!tmp_3983_fu_17180_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3983_fu_17180_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3985_fu_27544_p3() {
    tmp_3985_fu_27544_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3932_reg_82451.read());
}

void particlemaster_ReadCalculations::thread_tmp_3986_fu_27551_p2() {
    tmp_3986_fu_27551_p2 = (!tmp_3985_fu_27544_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3985_fu_27544_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3987_fu_17194_p3() {
    tmp_3987_fu_17194_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3977_reg_77989.read());
}

void particlemaster_ReadCalculations::thread_tmp_3988_fu_17201_p2() {
    tmp_3988_fu_17201_p2 = (!tmp_3987_fu_17194_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3987_fu_17194_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3989_fu_27585_p1() {
    tmp_3989_fu_27585_p1 = esl_zext<32,6>(index0_V_36_fu_27564_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3990_fu_27670_p4() {
    tmp_3990_fu_27670_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_6040_reg_82518.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3991_fu_27679_p1() {
    tmp_3991_fu_27679_p1 = esl_zext<76,75>(sf36_fu_27661_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3992_fu_27691_p3() {
    tmp_3992_fu_27691_p3 = esl_concat<50,25>(tmp_6051_fu_27651_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3993_fu_27703_p1() {
    tmp_3993_fu_27703_p1 = esl_zext<77,76>(p_Val2_2791_fu_27683_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3994_fu_27726_p1() {
    tmp_3994_fu_27726_p1 = esl_zext<78,77>(p_Val2_2792_reg_82531.read());
}

void particlemaster_ReadCalculations::thread_tmp_3995_fu_8412_p1() {
    tmp_3995_fu_8412_p1 = p_Val2_2154_reg_74228.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_3996_fu_27729_p1() {
    tmp_3996_fu_27729_p1 = esl_zext<78,75>(p_Val2_2793_reg_82546.read());
}

void particlemaster_ReadCalculations::thread_tmp_3997_fu_28279_p1() {
    tmp_3997_fu_28279_p1 = esl_zext<32,4>(p_Val2_7025_reg_82525.read());
}

void particlemaster_ReadCalculations::thread_tmp_3998_fu_8415_p3() {
    tmp_3998_fu_8415_p3 = p_Val2_2154_reg_74228.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3999_fu_8589_p1() {
    tmp_3999_fu_8589_p1 = p_Val2_2166_fu_8583_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4001_fu_27775_p3() {
    tmp_4001_fu_27775_p3 = esl_concat<67,14>(tmp_4000_reg_82563.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4002_fu_27786_p1() {
    tmp_4002_fu_27786_p1 = esl_zext<82,81>(p_Val2_2797_fu_27768_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4003_fu_27808_p1() {
    tmp_4003_fu_27808_p1 = esl_zext<83,82>(p_Val2_2798_reg_82568.read());
}

void particlemaster_ReadCalculations::thread_tmp_4004_fu_27811_p3() {
    tmp_4004_fu_27811_p3 = esl_concat<79,1>(p_Val2_2799_reg_82583.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4005_fu_28283_p1() {
    tmp_4005_fu_28283_p1 = esl_zext<32,6>(p_Val2_7026_reg_82557.read());
}

void particlemaster_ReadCalculations::thread_tmp_4006_fu_27860_p3() {
    tmp_4006_fu_27860_p3 = esl_concat<76,25>(tmp_6124_reg_82604.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4007_fu_27871_p1() {
    tmp_4007_fu_27871_p1 = esl_zext<102,96>(p_Val2_2802_fu_27851_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4008_fu_27894_p1() {
    tmp_4008_fu_27894_p1 = esl_zext<103,102>(p_Val2_2803_reg_82609.read());
}

void particlemaster_ReadCalculations::thread_tmp_4009_fu_27897_p3() {
    tmp_4009_fu_27897_p3 = esl_concat<89,6>(p_Val2_2804_reg_82624.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4010_fu_28287_p1() {
    tmp_4010_fu_28287_p1 = esl_zext<32,6>(p_Val2_7027_reg_82598.read());
}

void particlemaster_ReadCalculations::thread_tmp_4012_fu_27951_p3() {
    tmp_4012_fu_27951_p3 = esl_concat<86,34>(tmp_4011_reg_82641.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4013_fu_27962_p1() {
    tmp_4013_fu_27962_p1 = esl_zext<121,110>(p_Val2_2808_fu_27944_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4014_fu_27984_p1() {
    tmp_4014_fu_27984_p1 = esl_zext<122,121>(p_Val2_2809_reg_82646.read());
}

void particlemaster_ReadCalculations::thread_tmp_4015_fu_27987_p3() {
    tmp_4015_fu_27987_p3 = esl_concat<98,11>(p_Val2_2810_reg_82661.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4016_fu_28263_p1() {
    tmp_4016_fu_28263_p1 = esl_zext<32,6>(p_Val2_7028_reg_82635.read());
}

void particlemaster_ReadCalculations::thread_tmp_4018_fu_28041_p3() {
    tmp_4018_fu_28041_p3 = esl_concat<81,44>(tmp_4017_reg_82678.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4019_fu_28052_p1() {
    tmp_4019_fu_28052_p1 = esl_zext<126,110>(p_Val2_2814_fu_28034_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4020_fu_28074_p1() {
    tmp_4020_fu_28074_p1 = esl_zext<127,126>(p_Val2_2815_reg_82683.read());
}

void particlemaster_ReadCalculations::thread_tmp_4021_fu_28077_p3() {
    tmp_4021_fu_28077_p3 = esl_concat<93,16>(p_Val2_2816_reg_82698.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4022_fu_28267_p1() {
    tmp_4022_fu_28267_p1 = esl_zext<32,6>(p_Val2_7029_reg_82672.read());
}

void particlemaster_ReadCalculations::thread_tmp_4024_fu_28131_p3() {
    tmp_4024_fu_28131_p3 = esl_concat<76,54>(tmp_4023_reg_82715.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4025_fu_28142_p1() {
    tmp_4025_fu_28142_p1 = esl_zext<131,110>(p_Val2_2820_fu_28124_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4026_fu_28164_p1() {
    tmp_4026_fu_28164_p1 = esl_zext<132,131>(p_Val2_2821_reg_82720.read());
}

void particlemaster_ReadCalculations::thread_tmp_4027_fu_8603_p1() {
    tmp_4027_fu_8603_p1 = p_Val2_2166_fu_8583_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4028_fu_28167_p3() {
    tmp_4028_fu_28167_p3 = esl_concat<88,21>(p_Val2_2822_reg_82735.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4029_fu_28271_p1() {
    tmp_4029_fu_28271_p1 = esl_zext<32,6>(p_Val2_7030_reg_82709.read());
}

void particlemaster_ReadCalculations::thread_tmp_4031_fu_9249_p1() {
    tmp_4031_fu_9249_p1 = p_Val2_2199_fu_9243_p2.read().range(121-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4032_fu_28221_p3() {
    tmp_4032_fu_28221_p3 = esl_concat<71,64>(tmp_4030_reg_82752.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4033_fu_28232_p1() {
    tmp_4033_fu_28232_p1 = esl_zext<136,110>(p_Val2_2826_fu_28214_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4034_fu_28295_p1() {
    tmp_4034_fu_28295_p1 = esl_zext<137,136>(p_Val2_2827_reg_82757.read());
}

void particlemaster_ReadCalculations::thread_tmp_4035_fu_28298_p3() {
    tmp_4035_fu_28298_p3 = esl_concat<83,26>(p_Val2_2828_reg_82792.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4036_fu_28275_p1() {
    tmp_4036_fu_28275_p1 = esl_zext<32,6>(p_Val2_7031_reg_82746.read());
}

void particlemaster_ReadCalculations::thread_tmp_4040_fu_28431_p3() {
    tmp_4040_fu_28431_p3 = esl_concat<72,45>(tmp_4037_reg_82827.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4042_fu_28461_p3() {
    tmp_4042_fu_28461_p3 = esl_concat<90,30>(p_Val2_2787_reg_82858.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4043_fu_28472_p1() {
    tmp_4043_fu_28472_p1 = esl_zext<122,121>(p_Val2_4959_cast_fu_28428_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4044_fu_28493_p1() {
    tmp_4044_fu_28493_p1 = esl_zext<123,122>(p_Val2_2833_reg_82879.read());
}

void particlemaster_ReadCalculations::thread_tmp_4045_fu_28496_p1() {
    tmp_4045_fu_28496_p1 = esl_zext<123,121>(p_Val2_2832_fu_28490_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4046_fu_28500_p1() {
    tmp_4046_fu_28500_p1 = esl_sext<120,73>(tmp_4041_reg_82873.read());
}

void particlemaster_ReadCalculations::thread_tmp_4047_fu_9253_p1() {
    tmp_4047_fu_9253_p1 = p_Val2_2199_fu_9243_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4050_fu_28574_p3() {
    tmp_4050_fu_28574_p3 = esl_concat<77,52>(tmp_4049_reg_82904.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4051_fu_28584_p3() {
    tmp_4051_fu_28584_p3 = esl_concat<1,18>(tmp_6148_reg_82919.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4053_fu_28607_p2() {
    tmp_4053_fu_28607_p2 = (!tmp_6161_fu_28604_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6161_fu_28604_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4054_fu_28667_p1() {
    tmp_4054_fu_28667_p1 = esl_sext<72,71>(p_Val2_5362_reg_82909.read());
}

void particlemaster_ReadCalculations::thread_tmp_4055_fu_28670_p1() {
    tmp_4055_fu_28670_p1 = esl_sext<72,71>(p_Val2_2840_reg_82958.read());
}

void particlemaster_ReadCalculations::thread_tmp_4056_fu_28825_p1() {
    tmp_4056_fu_28825_p1 = esl_zext<32,8>(m_diff_hi_V_42_reg_82963.read());
}

void particlemaster_ReadCalculations::thread_tmp_4057_fu_28723_p1() {
    tmp_4057_fu_28723_p1 = esl_zext<32,8>(Z4_ind_V_42_fu_28713_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4058_fu_28733_p1() {
    tmp_4058_fu_28733_p1 = esl_zext<36,35>(p_Val2_5367_reg_82980.read());
}

void particlemaster_ReadCalculations::thread_tmp_4059_fu_28736_p1() {
    tmp_4059_fu_28736_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4060_fu_28728_p1() {
    tmp_4060_fu_28728_p1 = esl_zext<32,8>(p_Val2_5373_fu_28699_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4061_fu_28746_p4() {
    tmp_4061_fu_28746_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5373_reg_82975.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4063_fu_28782_p1() {
    tmp_4063_fu_28782_p1 = esl_zext<44,43>(tmp_4061_reg_83001.read());
}

void particlemaster_ReadCalculations::thread_tmp_4064_fu_28778_p1() {
    tmp_4064_fu_28778_p1 = esl_zext<32,8>(p_Val2_5394_reg_82968.read());
}

void particlemaster_ReadCalculations::thread_tmp_4066_fu_28803_p4() {
    tmp_4066_fu_28803_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5394_reg_82968.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4068_fu_28839_p5() {
    tmp_4068_fu_28839_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5394_reg_82968.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4071_fu_28895_p1() {
    tmp_4071_fu_28895_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4072_fu_28905_p3() {
    tmp_4072_fu_28905_p3 = esl_concat<59,49>(p_Val2_2849_reg_83067.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4074_fu_28939_p4() {
    tmp_4074_fu_28939_p4 = p_Val2_2851_fu_28915_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4075_fu_28949_p3() {
    tmp_4075_fu_28949_p3 = esl_concat<57,1>(tmp_4074_fu_28939_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4076_fu_28617_p2() {
    tmp_4076_fu_28617_p2 = (!tmp_7629_cast_fu_28613_p1.read().is_01() || !p_Val2_2835_fu_28567_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7629_cast_fu_28613_p1.read() != p_Val2_2835_fu_28567_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4077_fu_9390_p3() {
    tmp_4077_fu_9390_p3 = r_V_393_reg_74645.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_4078_fu_17235_p1() {
    tmp_4078_fu_17235_p1 = esl_zext<32,6>(index0_V_37_fu_17214_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4079_fu_17320_p4() {
    tmp_4079_fu_17320_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_6241_reg_78056.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4080_fu_17329_p1() {
    tmp_4080_fu_17329_p1 = esl_zext<76,75>(sf37_fu_17311_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4081_fu_17341_p3() {
    tmp_4081_fu_17341_p3 = esl_concat<50,25>(tmp_6243_fu_17301_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4082_fu_17353_p1() {
    tmp_4082_fu_17353_p1 = esl_zext<77,76>(p_Val2_2858_fu_17333_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4083_fu_17376_p1() {
    tmp_4083_fu_17376_p1 = esl_zext<78,77>(p_Val2_2859_reg_78069.read());
}

void particlemaster_ReadCalculations::thread_tmp_4084_fu_17379_p1() {
    tmp_4084_fu_17379_p1 = esl_zext<78,75>(p_Val2_2860_reg_78084.read());
}

void particlemaster_ReadCalculations::thread_tmp_4085_fu_17929_p1() {
    tmp_4085_fu_17929_p1 = esl_zext<32,4>(p_Val2_7067_reg_78063.read());
}

void particlemaster_ReadCalculations::thread_tmp_4087_fu_17425_p3() {
    tmp_4087_fu_17425_p3 = esl_concat<67,14>(tmp_4086_reg_78101.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4088_fu_17436_p1() {
    tmp_4088_fu_17436_p1 = esl_zext<82,81>(p_Val2_2864_fu_17418_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4089_fu_17458_p1() {
    tmp_4089_fu_17458_p1 = esl_zext<83,82>(p_Val2_2865_reg_78106.read());
}

void particlemaster_ReadCalculations::thread_tmp_4090_fu_17461_p3() {
    tmp_4090_fu_17461_p3 = esl_concat<79,1>(p_Val2_2866_reg_78121.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4091_fu_17933_p1() {
    tmp_4091_fu_17933_p1 = esl_zext<32,6>(p_Val2_7068_reg_78095.read());
}

void particlemaster_ReadCalculations::thread_tmp_4092_fu_17510_p3() {
    tmp_4092_fu_17510_p3 = esl_concat<76,25>(tmp_6326_reg_78142.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4093_fu_17521_p1() {
    tmp_4093_fu_17521_p1 = esl_zext<102,96>(p_Val2_2869_fu_17501_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4094_fu_17544_p1() {
    tmp_4094_fu_17544_p1 = esl_zext<103,102>(p_Val2_2870_reg_78147.read());
}

void particlemaster_ReadCalculations::thread_tmp_4095_fu_17547_p3() {
    tmp_4095_fu_17547_p3 = esl_concat<89,6>(p_Val2_2871_reg_78162.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4096_fu_17937_p1() {
    tmp_4096_fu_17937_p1 = esl_zext<32,6>(p_Val2_7069_reg_78136.read());
}

void particlemaster_ReadCalculations::thread_tmp_4098_fu_17601_p3() {
    tmp_4098_fu_17601_p3 = esl_concat<86,34>(tmp_4097_reg_78179.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4099_fu_17612_p1() {
    tmp_4099_fu_17612_p1 = esl_zext<121,110>(p_Val2_2875_fu_17594_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4100_fu_17634_p1() {
    tmp_4100_fu_17634_p1 = esl_zext<122,121>(p_Val2_2876_reg_78184.read());
}

void particlemaster_ReadCalculations::thread_tmp_4101_fu_17637_p3() {
    tmp_4101_fu_17637_p3 = esl_concat<98,11>(p_Val2_2877_reg_78199.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4102_fu_17913_p1() {
    tmp_4102_fu_17913_p1 = esl_zext<32,6>(p_Val2_7070_reg_78173.read());
}

void particlemaster_ReadCalculations::thread_tmp_4103_fu_9371_p1() {
    tmp_4103_fu_9371_p1 = grp_fu_72721_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4105_fu_17691_p3() {
    tmp_4105_fu_17691_p3 = esl_concat<81,44>(tmp_4104_reg_78216.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4106_fu_17702_p1() {
    tmp_4106_fu_17702_p1 = esl_zext<126,110>(p_Val2_2881_fu_17684_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4107_fu_9698_p3() {
    tmp_4107_fu_9698_p3 = p_Val2_2217_fu_9682_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_4108_fu_17724_p1() {
    tmp_4108_fu_17724_p1 = esl_zext<127,126>(p_Val2_2882_reg_78221.read());
}

void particlemaster_ReadCalculations::thread_tmp_4109_fu_17727_p3() {
    tmp_4109_fu_17727_p3 = esl_concat<93,16>(p_Val2_2883_reg_78236.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4110_fu_17917_p1() {
    tmp_4110_fu_17917_p1 = esl_zext<32,6>(p_Val2_7071_reg_78210.read());
}

void particlemaster_ReadCalculations::thread_tmp_4112_fu_17781_p3() {
    tmp_4112_fu_17781_p3 = esl_concat<76,54>(tmp_4111_reg_78253.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4113_fu_17792_p1() {
    tmp_4113_fu_17792_p1 = esl_zext<131,110>(p_Val2_2887_fu_17774_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4114_fu_17814_p1() {
    tmp_4114_fu_17814_p1 = esl_zext<132,131>(p_Val2_2888_reg_78258.read());
}

void particlemaster_ReadCalculations::thread_tmp_4115_fu_17817_p3() {
    tmp_4115_fu_17817_p3 = esl_concat<88,21>(p_Val2_2889_reg_78273.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4116_fu_17921_p1() {
    tmp_4116_fu_17921_p1 = esl_zext<32,6>(p_Val2_7072_reg_78247.read());
}

void particlemaster_ReadCalculations::thread_tmp_4119_fu_17871_p3() {
    tmp_4119_fu_17871_p3 = esl_concat<71,64>(tmp_4117_reg_78290.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4120_fu_20154_p3() {
    tmp_4120_fu_20154_p3 = p_Val2_2133_reg_79054.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_4121_fu_17882_p1() {
    tmp_4121_fu_17882_p1 = esl_zext<136,110>(p_Val2_2893_fu_17864_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4122_fu_17945_p1() {
    tmp_4122_fu_17945_p1 = esl_zext<137,136>(p_Val2_2894_reg_78295.read());
}

void particlemaster_ReadCalculations::thread_tmp_4123_fu_17948_p3() {
    tmp_4123_fu_17948_p3 = esl_concat<83,26>(p_Val2_2895_reg_78330.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4124_fu_17925_p1() {
    tmp_4124_fu_17925_p1 = esl_zext<32,6>(p_Val2_7073_reg_78284.read());
}

void particlemaster_ReadCalculations::thread_tmp_4128_fu_18081_p3() {
    tmp_4128_fu_18081_p3 = esl_concat<72,45>(tmp_4125_reg_78365.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4130_fu_18111_p3() {
    tmp_4130_fu_18111_p3 = esl_concat<90,30>(p_Val2_2854_reg_78396.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4131_fu_18122_p1() {
    tmp_4131_fu_18122_p1 = esl_zext<122,121>(p_Val2_5026_cast_fu_18078_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4132_fu_18143_p1() {
    tmp_4132_fu_18143_p1 = esl_zext<123,122>(p_Val2_2900_reg_78417.read());
}

void particlemaster_ReadCalculations::thread_tmp_4133_fu_18146_p1() {
    tmp_4133_fu_18146_p1 = esl_zext<123,121>(p_Val2_2899_fu_18140_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4134_fu_18150_p1() {
    tmp_4134_fu_18150_p1 = esl_sext<120,73>(tmp_4129_reg_78411.read());
}

void particlemaster_ReadCalculations::thread_tmp_4137_fu_18224_p3() {
    tmp_4137_fu_18224_p3 = esl_concat<77,52>(tmp_4136_reg_78442.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4138_fu_18234_p3() {
    tmp_4138_fu_18234_p3 = esl_concat<1,18>(tmp_6341_reg_78457.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4140_fu_18257_p2() {
    tmp_4140_fu_18257_p2 = (!tmp_6382_fu_18254_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6382_fu_18254_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4141_fu_18317_p1() {
    tmp_4141_fu_18317_p1 = esl_sext<72,71>(p_Val2_5465_reg_78447.read());
}

void particlemaster_ReadCalculations::thread_tmp_4142_fu_18320_p1() {
    tmp_4142_fu_18320_p1 = esl_sext<72,71>(p_Val2_2907_reg_78496.read());
}

void particlemaster_ReadCalculations::thread_tmp_4143_fu_18475_p1() {
    tmp_4143_fu_18475_p1 = esl_zext<32,8>(m_diff_hi_V_43_reg_78501.read());
}

void particlemaster_ReadCalculations::thread_tmp_4144_fu_18373_p1() {
    tmp_4144_fu_18373_p1 = esl_zext<32,8>(Z4_ind_V_43_fu_18363_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4145_fu_18383_p1() {
    tmp_4145_fu_18383_p1 = esl_zext<36,35>(p_Val2_5479_reg_78518.read());
}

void particlemaster_ReadCalculations::thread_tmp_4146_fu_18386_p1() {
    tmp_4146_fu_18386_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4147_fu_18378_p1() {
    tmp_4147_fu_18378_p1 = esl_zext<32,8>(p_Val2_5498_fu_18349_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4148_fu_18396_p4() {
    tmp_4148_fu_18396_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5498_reg_78513.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4150_fu_18432_p1() {
    tmp_4150_fu_18432_p1 = esl_zext<44,43>(tmp_4148_reg_78539.read());
}

void particlemaster_ReadCalculations::thread_tmp_4151_fu_18428_p1() {
    tmp_4151_fu_18428_p1 = esl_zext<32,8>(p_Val2_5507_reg_78506.read());
}

void particlemaster_ReadCalculations::thread_tmp_4153_fu_18453_p4() {
    tmp_4153_fu_18453_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5507_reg_78506.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4155_fu_18489_p5() {
    tmp_4155_fu_18489_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5507_reg_78506.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4158_fu_18545_p1() {
    tmp_4158_fu_18545_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4159_fu_9797_p3() {
    tmp_4159_fu_9797_p3 = p_Val2_2200_reg_74615.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_4160_fu_20135_p1() {
    tmp_4160_fu_20135_p1 = p_0415_0_i30_reg_79242.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4161_fu_18555_p3() {
    tmp_4161_fu_18555_p3 = esl_concat<59,49>(p_Val2_2916_reg_78605.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4162_fu_18589_p4() {
    tmp_4162_fu_18589_p4 = p_Val2_2918_fu_18565_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4163_fu_18599_p3() {
    tmp_4163_fu_18599_p3 = esl_concat<57,1>(tmp_4162_fu_18589_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4164_fu_18267_p2() {
    tmp_4164_fu_18267_p2 = (!tmp_7664_cast_fu_18263_p1.read().is_01() || !p_Val2_2902_fu_18217_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_7664_cast_fu_18263_p1.read() != p_Val2_2902_fu_18217_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4165_fu_28997_p2() {
    tmp_4165_fu_28997_p2 = (!p_0415_0_i42_reg_83082.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i42_reg_83082.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4166_fu_18647_p2() {
    tmp_4166_fu_18647_p2 = (!p_0415_0_i43_reg_78620.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i43_reg_78620.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4167_fu_29053_p1() {
    tmp_4167_fu_29053_p1 = tmp_16950_neg_reg_83099.read();
}

void particlemaster_ReadCalculations::thread_tmp_4172_fu_29067_p1() {
    tmp_4172_fu_29067_p1 = tmp_17602_neg_fu_29061_p2.read();
}

void particlemaster_ReadCalculations::thread_tmp_4173_fu_18703_p1() {
    tmp_4173_fu_18703_p1 = tmp_16955_neg_reg_78637.read();
}

void particlemaster_ReadCalculations::thread_tmp_4178_fu_29088_p2() {
    tmp_4178_fu_29088_p2 = (!particlemaster_iterations_i.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(particlemaster_iterations_i.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void particlemaster_ReadCalculations::thread_tmp_4179_fu_29095_p2() {
    tmp_4179_fu_29095_p2 = (!tmp_4178_fu_29088_p2.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<1>(): (sc_bigint<32>(tmp_4178_fu_29088_p2.read()) < sc_bigint<32>(ap_const_lv32_1));
}

void particlemaster_ReadCalculations::thread_tmp_4181_fu_29857_p2() {
    tmp_4181_fu_29857_p2 = (!b_exp_99_fu_29851_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_99_fu_29851_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4182_fu_29151_p2() {
    tmp_4182_fu_29151_p2 = (!loc_V_93_reg_83163.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_93_reg_83163.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4183_fu_29127_p2() {
    tmp_4183_fu_29127_p2 = (!loc_V_92_fu_29113_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_92_fu_29113_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4184_fu_29156_p2() {
    tmp_4184_fu_29156_p2 = (!loc_V_93_reg_83163.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_93_reg_83163.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4185_fu_30522_p2() {
    tmp_4185_fu_30522_p2 = (tmp_4183_reg_83171.read() & tmp_4184_reg_83194.read());
}

void particlemaster_ReadCalculations::thread_tmp_4186_fu_29161_p2() {
    tmp_4186_fu_29161_p2 = (!loc_V_92_reg_83157.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_92_reg_83157.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4187_fu_30583_p2() {
    tmp_4187_fu_30583_p2 = (tmp_4183_reg_83171.read() & tmp_4182_reg_83188.read());
}

void particlemaster_ReadCalculations::thread_tmp_4188_fu_30526_p3() {
    tmp_4188_fu_30526_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4185_fu_30522_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4189_fu_30592_p3() {
    tmp_4189_fu_30592_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4187_fu_30583_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4190_fu_9778_p1() {
    tmp_4190_fu_9778_p1 = p_0415_0_i31_reg_74803.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4191_fu_30600_p2() {
    tmp_4191_fu_30600_p2 = (!tmp_4189_fu_30592_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4189_fu_30592_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4192_fu_29166_p3() {
    tmp_4192_fu_29166_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4186_fu_29161_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4193_fu_29174_p2() {
    tmp_4193_fu_29174_p2 = (!tmp_4192_fu_29166_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4192_fu_29166_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4194_fu_29180_p1() {
    tmp_4194_fu_29180_p1 = esl_zext<32,6>(index0_V_38_reg_83183.read());
}

void particlemaster_ReadCalculations::thread_tmp_4195_fu_29264_p4() {
    tmp_4195_fu_29264_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_6540_reg_83236.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4197_fu_29273_p1() {
    tmp_4197_fu_29273_p1 = esl_zext<76,75>(sf38_fu_29255_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4198_fu_29285_p3() {
    tmp_4198_fu_29285_p3 = esl_concat<50,25>(tmp_6541_fu_29245_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4199_fu_29297_p1() {
    tmp_4199_fu_29297_p1 = esl_zext<77,76>(p_Val2_2926_fu_29277_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4200_fu_29320_p1() {
    tmp_4200_fu_29320_p1 = esl_zext<78,77>(p_Val2_2927_reg_83249.read());
}

void particlemaster_ReadCalculations::thread_tmp_4201_fu_29323_p1() {
    tmp_4201_fu_29323_p1 = esl_zext<78,75>(p_Val2_2928_reg_83264.read());
}

void particlemaster_ReadCalculations::thread_tmp_4202_fu_29901_p1() {
    tmp_4202_fu_29901_p1 = esl_zext<32,4>(p_Val2_7074_reg_83243.read());
}

void particlemaster_ReadCalculations::thread_tmp_4204_fu_29369_p3() {
    tmp_4204_fu_29369_p3 = esl_concat<67,14>(tmp_4203_reg_83281.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4205_fu_29380_p1() {
    tmp_4205_fu_29380_p1 = esl_zext<82,81>(p_Val2_2932_fu_29362_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4206_fu_29402_p1() {
    tmp_4206_fu_29402_p1 = esl_zext<83,82>(p_Val2_2933_reg_83286.read());
}

void particlemaster_ReadCalculations::thread_tmp_4207_fu_20267_p1() {
    tmp_4207_fu_20267_p1 = grp_fu_20261_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4208_fu_29405_p3() {
    tmp_4208_fu_29405_p3 = esl_concat<79,1>(p_Val2_2934_reg_83301.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4209_fu_20288_p1() {
    tmp_4209_fu_20288_p1 = p_Val2_2222_reg_79338.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4210_fu_29905_p1() {
    tmp_4210_fu_29905_p1 = esl_zext<32,6>(p_Val2_7075_reg_83275.read());
}

void particlemaster_ReadCalculations::thread_tmp_4211_fu_29454_p3() {
    tmp_4211_fu_29454_p3 = esl_concat<76,25>(tmp_6596_reg_83322.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4212_fu_29465_p1() {
    tmp_4212_fu_29465_p1 = esl_zext<102,96>(p_Val2_2937_fu_29445_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4213_fu_29488_p1() {
    tmp_4213_fu_29488_p1 = esl_zext<103,102>(p_Val2_2938_reg_83327.read());
}

void particlemaster_ReadCalculations::thread_tmp_4214_fu_29491_p3() {
    tmp_4214_fu_29491_p3 = esl_concat<89,6>(p_Val2_2939_reg_83342.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4215_fu_29909_p1() {
    tmp_4215_fu_29909_p1 = esl_zext<32,6>(p_Val2_7076_reg_83316.read());
}

void particlemaster_ReadCalculations::thread_tmp_4217_fu_29545_p3() {
    tmp_4217_fu_29545_p3 = esl_concat<86,34>(tmp_4216_reg_83359.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4218_fu_29556_p1() {
    tmp_4218_fu_29556_p1 = esl_zext<121,110>(p_Val2_2943_fu_29538_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4219_fu_29578_p1() {
    tmp_4219_fu_29578_p1 = esl_zext<122,121>(p_Val2_2944_reg_83364.read());
}

void particlemaster_ReadCalculations::thread_tmp_4220_fu_29581_p3() {
    tmp_4220_fu_29581_p3 = esl_concat<98,11>(p_Val2_2945_reg_83379.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4221_fu_29885_p1() {
    tmp_4221_fu_29885_p1 = esl_zext<32,6>(p_Val2_7077_reg_83353.read());
}

void particlemaster_ReadCalculations::thread_tmp_4223_fu_29635_p3() {
    tmp_4223_fu_29635_p3 = esl_concat<81,44>(tmp_4222_reg_83396.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4224_fu_29646_p1() {
    tmp_4224_fu_29646_p1 = esl_zext<126,110>(p_Val2_2949_fu_29628_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4225_fu_29668_p1() {
    tmp_4225_fu_29668_p1 = esl_zext<127,126>(p_Val2_2950_reg_83401.read());
}

void particlemaster_ReadCalculations::thread_tmp_4226_fu_29671_p3() {
    tmp_4226_fu_29671_p3 = esl_concat<93,16>(p_Val2_2951_reg_83416.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4227_fu_29889_p1() {
    tmp_4227_fu_29889_p1 = esl_zext<32,6>(p_Val2_7078_reg_83390.read());
}

void particlemaster_ReadCalculations::thread_tmp_4229_fu_29725_p3() {
    tmp_4229_fu_29725_p3 = esl_concat<76,54>(tmp_4228_reg_83433.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4230_fu_29736_p1() {
    tmp_4230_fu_29736_p1 = esl_zext<131,110>(p_Val2_2955_fu_29718_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4231_fu_29758_p1() {
    tmp_4231_fu_29758_p1 = esl_zext<132,131>(p_Val2_2956_reg_83438.read());
}

void particlemaster_ReadCalculations::thread_tmp_4232_fu_29761_p3() {
    tmp_4232_fu_29761_p3 = esl_concat<88,21>(p_Val2_2957_reg_83453.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4233_fu_29893_p1() {
    tmp_4233_fu_29893_p1 = esl_zext<32,6>(p_Val2_7079_reg_83427.read());
}

void particlemaster_ReadCalculations::thread_tmp_4235_fu_29815_p3() {
    tmp_4235_fu_29815_p3 = esl_concat<71,64>(tmp_4234_reg_83470.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4236_fu_29826_p1() {
    tmp_4236_fu_29826_p1 = esl_zext<136,110>(p_Val2_2961_fu_29808_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4237_fu_29917_p1() {
    tmp_4237_fu_29917_p1 = esl_zext<137,136>(p_Val2_2962_reg_83475.read());
}

void particlemaster_ReadCalculations::thread_tmp_4238_fu_29920_p3() {
    tmp_4238_fu_29920_p3 = esl_concat<83,26>(p_Val2_2963_reg_83520.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4239_fu_29897_p1() {
    tmp_4239_fu_29897_p1 = esl_zext<32,6>(p_Val2_7080_reg_83464.read());
}

void particlemaster_ReadCalculations::thread_tmp_4243_fu_30053_p3() {
    tmp_4243_fu_30053_p3 = esl_concat<72,45>(tmp_4240_reg_83555.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4245_fu_30083_p3() {
    tmp_4245_fu_30083_p3 = esl_concat<90,30>(p_Val2_2922_reg_83586.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4246_fu_30094_p1() {
    tmp_4246_fu_30094_p1 = esl_zext<122,121>(p_Val2_5365_cast_fu_30050_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4247_fu_30111_p1() {
    tmp_4247_fu_30111_p1 = esl_zext<123,122>(p_Val2_2968_reg_83607.read());
}

void particlemaster_ReadCalculations::thread_tmp_4248_fu_20291_p3() {
    tmp_4248_fu_20291_p3 = p_Val2_2222_reg_79338.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4249_fu_20465_p1() {
    tmp_4249_fu_20465_p1 = p_Val2_2234_fu_20459_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4250_fu_30114_p1() {
    tmp_4250_fu_30114_p1 = esl_zext<123,121>(p_Val2_2967_fu_30108_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4251_fu_30118_p1() {
    tmp_4251_fu_30118_p1 = esl_sext<120,73>(tmp_4244_reg_83601.read());
}

void particlemaster_ReadCalculations::thread_tmp_4254_fu_30187_p3() {
    tmp_4254_fu_30187_p3 = esl_concat<77,52>(tmp_4253_reg_83627.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4255_fu_30197_p3() {
    tmp_4255_fu_30197_p3 = esl_concat<1,18>(tmp_6627_reg_83642.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4257_fu_30220_p2() {
    tmp_4257_fu_30220_p2 = (!tmp_6630_fu_30217_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6630_fu_30217_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4258_fu_30280_p1() {
    tmp_4258_fu_30280_p1 = esl_sext<72,71>(p_Val2_6522_reg_83632.read());
}

void particlemaster_ReadCalculations::thread_tmp_4259_fu_30283_p1() {
    tmp_4259_fu_30283_p1 = esl_sext<72,71>(p_Val2_2975_reg_83682.read());
}

void particlemaster_ReadCalculations::thread_tmp_4260_fu_30438_p1() {
    tmp_4260_fu_30438_p1 = esl_zext<32,8>(m_diff_hi_V_44_reg_83687.read());
}

void particlemaster_ReadCalculations::thread_tmp_4261_fu_30336_p1() {
    tmp_4261_fu_30336_p1 = esl_zext<32,8>(Z4_ind_V_44_fu_30326_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4262_fu_30346_p1() {
    tmp_4262_fu_30346_p1 = esl_zext<36,35>(p_Val2_5829_reg_83704.read());
}

void particlemaster_ReadCalculations::thread_tmp_4263_fu_30349_p1() {
    tmp_4263_fu_30349_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4264_fu_30341_p1() {
    tmp_4264_fu_30341_p1 = esl_zext<32,8>(p_Val2_6524_fu_30312_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4265_fu_30359_p4() {
    tmp_4265_fu_30359_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_6524_reg_83699.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4267_fu_30395_p1() {
    tmp_4267_fu_30395_p1 = esl_zext<44,43>(tmp_4265_reg_83725.read());
}

void particlemaster_ReadCalculations::thread_tmp_4268_fu_30391_p1() {
    tmp_4268_fu_30391_p1 = esl_zext<32,8>(p_Val2_6526_reg_83692.read());
}

void particlemaster_ReadCalculations::thread_tmp_4270_fu_30416_p4() {
    tmp_4270_fu_30416_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_6526_reg_83692.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4272_fu_30452_p5() {
    tmp_4272_fu_30452_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_6526_reg_83692.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4275_fu_30508_p1() {
    tmp_4275_fu_30508_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4276_fu_30540_p3() {
    tmp_4276_fu_30540_p3 = esl_concat<59,49>(p_Val2_2984_reg_83791.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4277_fu_30230_p2() {
    tmp_4277_fu_30230_p2 = (!tmp_8217_cast_fu_30226_p1.read().is_01() || !p_Val2_2970_fu_30180_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_8217_cast_fu_30226_p1.read() != p_Val2_2970_fu_30180_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4278_fu_30627_p2() {
    tmp_4278_fu_30627_p2 = (!p_0415_0_i44_fu_30606_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i44_fu_30606_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4279_fu_30633_p4() {
    tmp_4279_fu_30633_p4 = p_Val2_2986_reg_83814.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_4280_fu_30642_p4() {
    tmp_4280_fu_30642_p4 = p_Val2_2986_reg_83814.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4281_fu_30796_p2() {
    tmp_4281_fu_30796_p2 = (sel_tmp183_fu_30791_p2.read() | sel_tmp174_fu_30771_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4282_fu_20479_p1() {
    tmp_4282_fu_20479_p1 = p_Val2_2234_fu_20459_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4283_fu_21157_p1() {
    tmp_4283_fu_21157_p1 = p_Val2_2267_fu_21151_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4284_fu_30810_p2() {
    tmp_4284_fu_30810_p2 = (tmp_4281_fu_30796_p2.read() | sel_tmp167_fu_30761_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4286_fu_30877_p2() {
    tmp_4286_fu_30877_p2 = (!b_exp_41_fu_30871_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_41_fu_30871_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4287_fu_30883_p2() {
    tmp_4287_fu_30883_p2 = (!loc_V_96_fu_30863_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_96_fu_30863_p1.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4288_fu_30895_p2() {
    tmp_4288_fu_30895_p2 = (!loc_V_95_fu_30853_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_95_fu_30853_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4289_fu_30901_p2() {
    tmp_4289_fu_30901_p2 = (!loc_V_96_fu_30863_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_96_fu_30863_p1.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4290_fu_30907_p2() {
    tmp_4290_fu_30907_p2 = (tmp_4288_fu_30895_p2.read() & tmp_4289_fu_30901_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4291_fu_30913_p2() {
    tmp_4291_fu_30913_p2 = (!loc_V_95_fu_30853_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_95_fu_30853_p4.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4292_fu_30919_p2() {
    tmp_4292_fu_30919_p2 = (tmp_4288_fu_30895_p2.read() & tmp_4287_fu_30883_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4293_fu_31013_p3() {
    tmp_4293_fu_31013_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_4294_fu_30955_p3() {
    tmp_4294_fu_30955_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_4295_fu_31040_p3() {
    tmp_4295_fu_31040_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_4296_fu_31047_p2() {
    tmp_4296_fu_31047_p2 = (!tmp_4295_fu_31040_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4295_fu_31040_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4297_fu_30982_p3() {
    tmp_4297_fu_30982_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_4298_fu_30989_p2() {
    tmp_4298_fu_30989_p2 = (!tmp_4297_fu_30982_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4297_fu_30982_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4299_fu_31053_p3() {
    tmp_4299_fu_31053_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_4300_fu_31060_p2() {
    tmp_4300_fu_31060_p2 = (!tmp_4299_fu_31053_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4299_fu_31053_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4301_fu_30995_p3() {
    tmp_4301_fu_30995_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_4302_fu_31002_p2() {
    tmp_4302_fu_31002_p2 = (!tmp_4301_fu_30995_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4301_fu_30995_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4303_fu_31066_p1() {
    tmp_4303_fu_31066_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4304_fu_41507_p4() {
    tmp_4304_fu_41507_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_6794_reg_88609.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4305_fu_41516_p1() {
    tmp_4305_fu_41516_p1 = esl_zext<76,75>(sf39_fu_41498_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4306_fu_41528_p3() {
    tmp_4306_fu_41528_p3 = esl_concat<50,25>(tmp_6798_fu_41488_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4307_fu_41540_p1() {
    tmp_4307_fu_41540_p1 = esl_zext<77,76>(p_Val2_2992_fu_41520_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4308_fu_41563_p1() {
    tmp_4308_fu_41563_p1 = esl_zext<78,77>(p_Val2_2993_reg_88622.read());
}

void particlemaster_ReadCalculations::thread_tmp_4309_fu_41566_p1() {
    tmp_4309_fu_41566_p1 = esl_zext<78,75>(p_Val2_2994_reg_88637.read());
}

void particlemaster_ReadCalculations::thread_tmp_4311_fu_42122_p1() {
    tmp_4311_fu_42122_p1 = esl_zext<32,4>(p_Val2_7081_reg_88616.read());
}

void particlemaster_ReadCalculations::thread_tmp_4312_fu_21289_p3() {
    tmp_4312_fu_21289_p3 = r_V_376_reg_79766.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_4313_fu_21270_p1() {
    tmp_4313_fu_21270_p1 = grp_fu_72801_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4315_fu_41612_p3() {
    tmp_4315_fu_41612_p3 = esl_concat<67,14>(tmp_4314_reg_88654.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4316_fu_41623_p1() {
    tmp_4316_fu_41623_p1 = esl_zext<82,81>(p_Val2_2998_fu_41605_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4317_fu_41645_p1() {
    tmp_4317_fu_41645_p1 = esl_zext<83,82>(p_Val2_2999_reg_88659.read());
}

void particlemaster_ReadCalculations::thread_tmp_4318_fu_41648_p3() {
    tmp_4318_fu_41648_p3 = esl_concat<79,1>(p_Val2_3000_reg_88674.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4319_fu_42126_p1() {
    tmp_4319_fu_42126_p1 = esl_zext<32,6>(p_Val2_7082_reg_88648.read());
}

void particlemaster_ReadCalculations::thread_tmp_4320_fu_41697_p3() {
    tmp_4320_fu_41697_p3 = esl_concat<76,25>(tmp_6839_reg_88695.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4321_fu_41708_p1() {
    tmp_4321_fu_41708_p1 = esl_zext<102,96>(p_Val2_3003_fu_41688_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4322_fu_41731_p1() {
    tmp_4322_fu_41731_p1 = esl_zext<103,102>(p_Val2_3004_reg_88700.read());
}

void particlemaster_ReadCalculations::thread_tmp_4323_fu_41734_p3() {
    tmp_4323_fu_41734_p3 = esl_concat<89,6>(p_Val2_3005_reg_88715.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4324_fu_42130_p1() {
    tmp_4324_fu_42130_p1 = esl_zext<32,6>(p_Val2_7083_reg_88689.read());
}

void particlemaster_ReadCalculations::thread_tmp_4326_fu_41788_p3() {
    tmp_4326_fu_41788_p3 = esl_concat<86,34>(tmp_4325_reg_88732.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4328_fu_41799_p1() {
    tmp_4328_fu_41799_p1 = esl_zext<121,110>(p_Val2_3009_fu_41781_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4329_fu_21677_p4() {
    tmp_4329_fu_21677_p4 = p_0415_0_i32_fu_21672_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_4330_fu_41821_p1() {
    tmp_4330_fu_41821_p1 = esl_zext<122,121>(p_Val2_3010_reg_88737.read());
}

void particlemaster_ReadCalculations::thread_tmp_4331_fu_41824_p3() {
    tmp_4331_fu_41824_p3 = esl_concat<98,11>(p_Val2_3011_reg_88752.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4332_fu_42106_p1() {
    tmp_4332_fu_42106_p1 = esl_zext<32,6>(p_Val2_7084_reg_88726.read());
}

void particlemaster_ReadCalculations::thread_tmp_4334_fu_41878_p3() {
    tmp_4334_fu_41878_p3 = esl_concat<81,44>(tmp_4333_reg_88769.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4335_fu_41889_p1() {
    tmp_4335_fu_41889_p1 = esl_zext<126,110>(p_Val2_3015_fu_41871_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4336_fu_41911_p1() {
    tmp_4336_fu_41911_p1 = esl_zext<127,126>(p_Val2_3016_reg_88774.read());
}

void particlemaster_ReadCalculations::thread_tmp_4337_fu_41914_p3() {
    tmp_4337_fu_41914_p3 = esl_concat<93,16>(p_Val2_3017_reg_88789.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4338_fu_42110_p1() {
    tmp_4338_fu_42110_p1 = esl_zext<32,6>(p_Val2_7085_reg_88763.read());
}

void particlemaster_ReadCalculations::thread_tmp_4340_fu_41968_p3() {
    tmp_4340_fu_41968_p3 = esl_concat<76,54>(tmp_4339_reg_88806.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4341_fu_41979_p1() {
    tmp_4341_fu_41979_p1 = esl_zext<131,110>(p_Val2_3021_fu_41961_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4342_fu_42001_p1() {
    tmp_4342_fu_42001_p1 = esl_zext<132,131>(p_Val2_3022_reg_88811.read());
}

void particlemaster_ReadCalculations::thread_tmp_4343_fu_42004_p3() {
    tmp_4343_fu_42004_p3 = esl_concat<88,21>(p_Val2_3023_reg_88826.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4344_fu_42114_p1() {
    tmp_4344_fu_42114_p1 = esl_zext<32,6>(p_Val2_7086_reg_88800.read());
}

void particlemaster_ReadCalculations::thread_tmp_4346_fu_42058_p3() {
    tmp_4346_fu_42058_p3 = esl_concat<71,64>(tmp_4345_reg_88843.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4347_fu_42069_p1() {
    tmp_4347_fu_42069_p1 = esl_zext<136,110>(p_Val2_3027_fu_42051_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4348_fu_42138_p1() {
    tmp_4348_fu_42138_p1 = esl_zext<137,136>(p_Val2_3028_reg_88848.read());
}

void particlemaster_ReadCalculations::thread_tmp_4349_fu_42141_p3() {
    tmp_4349_fu_42141_p3 = esl_concat<83,26>(p_Val2_3029_reg_88888.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4350_fu_42118_p1() {
    tmp_4350_fu_42118_p1 = esl_zext<32,6>(p_Val2_7087_reg_88837.read());
}

void particlemaster_ReadCalculations::thread_tmp_4354_fu_42274_p3() {
    tmp_4354_fu_42274_p3 = esl_concat<72,45>(tmp_4351_reg_88923.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4356_fu_42304_p3() {
    tmp_4356_fu_42304_p3 = esl_concat<90,30>(p_Val2_2988_reg_88954.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4357_fu_42315_p1() {
    tmp_4357_fu_42315_p1 = esl_zext<122,121>(p_Val2_5555_cast_fu_42271_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4358_fu_42336_p1() {
    tmp_4358_fu_42336_p1 = esl_zext<123,122>(p_Val2_3034_reg_88975.read());
}

void particlemaster_ReadCalculations::thread_tmp_4359_fu_42339_p1() {
    tmp_4359_fu_42339_p1 = esl_zext<123,121>(p_Val2_3033_fu_42333_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4360_fu_42343_p1() {
    tmp_4360_fu_42343_p1 = esl_sext<120,73>(tmp_4355_reg_88969.read());
}

void particlemaster_ReadCalculations::thread_tmp_4363_fu_42417_p3() {
    tmp_4363_fu_42417_p3 = esl_concat<77,52>(tmp_4362_reg_89000.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4364_fu_42427_p3() {
    tmp_4364_fu_42427_p3 = esl_concat<1,18>(tmp_6881_reg_89015.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4366_fu_42450_p2() {
    tmp_4366_fu_42450_p2 = (!tmp_6913_fu_42447_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6913_fu_42447_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4367_fu_42510_p1() {
    tmp_4367_fu_42510_p1 = esl_sext<72,71>(p_Val2_5902_reg_89005.read());
}

void particlemaster_ReadCalculations::thread_tmp_4368_fu_21803_p3() {
    tmp_4368_fu_21803_p3 = p_Val2_2268_reg_79736.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_4369_fu_42513_p1() {
    tmp_4369_fu_42513_p1 = esl_sext<72,71>(p_Val2_3041_reg_89054.read());
}

void particlemaster_ReadCalculations::thread_tmp_4370_fu_42668_p1() {
    tmp_4370_fu_42668_p1 = esl_zext<32,8>(m_diff_hi_V_45_reg_89059.read());
}

void particlemaster_ReadCalculations::thread_tmp_4371_fu_42566_p1() {
    tmp_4371_fu_42566_p1 = esl_zext<32,8>(Z4_ind_V_45_fu_42556_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4372_fu_42576_p1() {
    tmp_4372_fu_42576_p1 = esl_zext<36,35>(p_Val2_5904_reg_89076.read());
}

void particlemaster_ReadCalculations::thread_tmp_4373_fu_42579_p1() {
    tmp_4373_fu_42579_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4374_fu_42571_p1() {
    tmp_4374_fu_42571_p1 = esl_zext<32,8>(p_Val2_5906_fu_42542_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4375_fu_42589_p4() {
    tmp_4375_fu_42589_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5906_reg_89071.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4377_fu_42625_p1() {
    tmp_4377_fu_42625_p1 = esl_zext<44,43>(tmp_4375_reg_89097.read());
}

void particlemaster_ReadCalculations::thread_tmp_4378_fu_42621_p1() {
    tmp_4378_fu_42621_p1 = esl_zext<32,8>(p_Val2_5909_reg_89064.read());
}

void particlemaster_ReadCalculations::thread_tmp_4380_fu_42646_p4() {
    tmp_4380_fu_42646_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5909_reg_89064.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4382_fu_42682_p5() {
    tmp_4382_fu_42682_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5909_reg_89064.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4385_fu_42738_p1() {
    tmp_4385_fu_42738_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4386_fu_42748_p3() {
    tmp_4386_fu_42748_p3 = esl_concat<59,49>(p_Val2_3050_reg_89163.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4387_fu_42782_p4() {
    tmp_4387_fu_42782_p4 = p_Val2_3052_fu_42758_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4388_fu_42792_p3() {
    tmp_4388_fu_42792_p3 = esl_concat<57,1>(tmp_4387_fu_42782_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4389_fu_42460_p2() {
    tmp_4389_fu_42460_p2 = (!tmp_8517_cast_fu_42456_p1.read().is_01() || !p_Val2_3036_fu_42410_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_8517_cast_fu_42456_p1.read() != p_Val2_3036_fu_42410_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4390_fu_31008_p1() {
    tmp_4390_fu_31008_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4391_fu_31152_p4() {
    tmp_4391_fu_31152_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_6969_reg_84144.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4392_fu_31161_p1() {
    tmp_4392_fu_31161_p1 = esl_zext<76,75>(sf40_fu_31143_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4393_fu_31173_p3() {
    tmp_4393_fu_31173_p3 = esl_concat<50,25>(tmp_6970_fu_31133_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4394_fu_31185_p1() {
    tmp_4394_fu_31185_p1 = esl_zext<77,76>(p_Val2_3059_fu_31165_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4395_fu_31208_p1() {
    tmp_4395_fu_31208_p1 = esl_zext<78,77>(p_Val2_3060_reg_84157.read());
}

void particlemaster_ReadCalculations::thread_tmp_4396_fu_21724_p1() {
    tmp_4396_fu_21724_p1 = p_0415_0_i32_fu_21672_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4397_fu_31211_p1() {
    tmp_4397_fu_31211_p1 = esl_zext<78,75>(p_Val2_3061_reg_84172.read());
}

void particlemaster_ReadCalculations::thread_tmp_4398_fu_31767_p1() {
    tmp_4398_fu_31767_p1 = esl_zext<32,4>(p_Val2_7123_reg_84151.read());
}

void particlemaster_ReadCalculations::thread_tmp_4400_fu_31257_p3() {
    tmp_4400_fu_31257_p3 = esl_concat<67,14>(tmp_4399_reg_84189.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4401_fu_31268_p1() {
    tmp_4401_fu_31268_p1 = esl_zext<82,81>(p_Val2_3065_fu_31250_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4402_fu_31290_p1() {
    tmp_4402_fu_31290_p1 = esl_zext<83,82>(p_Val2_3066_reg_84194.read());
}

void particlemaster_ReadCalculations::thread_tmp_4403_fu_31293_p3() {
    tmp_4403_fu_31293_p3 = esl_concat<79,1>(p_Val2_3067_reg_84209.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4404_fu_31771_p1() {
    tmp_4404_fu_31771_p1 = esl_zext<32,6>(p_Val2_7124_reg_84183.read());
}

void particlemaster_ReadCalculations::thread_tmp_4405_fu_31342_p3() {
    tmp_4405_fu_31342_p3 = esl_concat<76,25>(tmp_7016_reg_84230.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4406_fu_31353_p1() {
    tmp_4406_fu_31353_p1 = esl_zext<102,96>(p_Val2_3070_fu_31333_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4407_fu_31376_p1() {
    tmp_4407_fu_31376_p1 = esl_zext<103,102>(p_Val2_3071_reg_84235.read());
}

void particlemaster_ReadCalculations::thread_tmp_4408_fu_31379_p3() {
    tmp_4408_fu_31379_p3 = esl_concat<89,6>(p_Val2_3072_reg_84250.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4409_fu_31775_p1() {
    tmp_4409_fu_31775_p1 = esl_zext<32,6>(p_Val2_7125_reg_84224.read());
}

void particlemaster_ReadCalculations::thread_tmp_4411_fu_31433_p3() {
    tmp_4411_fu_31433_p3 = esl_concat<86,34>(tmp_4410_reg_84267.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4412_fu_31444_p1() {
    tmp_4412_fu_31444_p1 = esl_zext<121,110>(p_Val2_3076_fu_31426_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4413_fu_31466_p1() {
    tmp_4413_fu_31466_p1 = esl_zext<122,121>(p_Val2_3077_reg_84272.read());
}

void particlemaster_ReadCalculations::thread_tmp_4415_fu_31469_p3() {
    tmp_4415_fu_31469_p3 = esl_concat<98,11>(p_Val2_3078_reg_84287.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4416_fu_31751_p1() {
    tmp_4416_fu_31751_p1 = esl_zext<32,6>(p_Val2_7126_reg_84261.read());
}

void particlemaster_ReadCalculations::thread_tmp_4418_fu_31523_p3() {
    tmp_4418_fu_31523_p3 = esl_concat<81,44>(tmp_4417_reg_84304.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4419_fu_31534_p1() {
    tmp_4419_fu_31534_p1 = esl_zext<126,110>(p_Val2_3082_fu_31516_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4420_fu_31556_p1() {
    tmp_4420_fu_31556_p1 = esl_zext<127,126>(p_Val2_3083_reg_84309.read());
}

void particlemaster_ReadCalculations::thread_tmp_4421_fu_31559_p3() {
    tmp_4421_fu_31559_p3 = esl_concat<93,16>(p_Val2_3084_reg_84324.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4422_fu_31755_p1() {
    tmp_4422_fu_31755_p1 = esl_zext<32,6>(p_Val2_7127_reg_84298.read());
}

void particlemaster_ReadCalculations::thread_tmp_4424_fu_9910_p1() {
    tmp_4424_fu_9910_p1 = grp_fu_9904_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4425_fu_9931_p1() {
    tmp_4425_fu_9931_p1 = p_Val2_2288_reg_74899.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4426_fu_31613_p3() {
    tmp_4426_fu_31613_p3 = esl_concat<76,54>(tmp_4423_reg_84341.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4427_fu_31624_p1() {
    tmp_4427_fu_31624_p1 = esl_zext<131,110>(p_Val2_3088_fu_31606_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4428_fu_9934_p3() {
    tmp_4428_fu_9934_p3 = p_Val2_2288_reg_74899.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4429_fu_31646_p1() {
    tmp_4429_fu_31646_p1 = esl_zext<132,131>(p_Val2_3089_reg_84346.read());
}

void particlemaster_ReadCalculations::thread_tmp_4430_fu_31649_p3() {
    tmp_4430_fu_31649_p3 = esl_concat<88,21>(p_Val2_3090_reg_84361.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4431_fu_31759_p1() {
    tmp_4431_fu_31759_p1 = esl_zext<32,6>(p_Val2_7128_reg_84335.read());
}

void particlemaster_ReadCalculations::thread_tmp_4433_fu_31703_p3() {
    tmp_4433_fu_31703_p3 = esl_concat<71,64>(tmp_4432_reg_84378.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4434_fu_31714_p1() {
    tmp_4434_fu_31714_p1 = esl_zext<136,110>(p_Val2_3094_fu_31696_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4435_fu_31783_p1() {
    tmp_4435_fu_31783_p1 = esl_zext<137,136>(p_Val2_3095_reg_84383.read());
}

void particlemaster_ReadCalculations::thread_tmp_4436_fu_31786_p3() {
    tmp_4436_fu_31786_p3 = esl_concat<83,26>(p_Val2_3096_reg_84423.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4437_fu_31763_p1() {
    tmp_4437_fu_31763_p1 = esl_zext<32,6>(p_Val2_7129_reg_84372.read());
}

void particlemaster_ReadCalculations::thread_tmp_4439_fu_10108_p1() {
    tmp_4439_fu_10108_p1 = p_Val2_2300_fu_10102_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4442_fu_31919_p3() {
    tmp_4442_fu_31919_p3 = esl_concat<72,45>(tmp_4438_reg_84458.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4444_fu_31949_p3() {
    tmp_4444_fu_31949_p3 = esl_concat<90,30>(p_Val2_3055_reg_84489.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4445_fu_31960_p1() {
    tmp_4445_fu_31960_p1 = esl_zext<122,121>(p_Val2_5632_cast_fu_31916_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4446_fu_31981_p1() {
    tmp_4446_fu_31981_p1 = esl_zext<123,122>(p_Val2_3101_reg_84510.read());
}

void particlemaster_ReadCalculations::thread_tmp_4447_fu_31984_p1() {
    tmp_4447_fu_31984_p1 = esl_zext<123,121>(p_Val2_3100_fu_31978_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4448_fu_31988_p1() {
    tmp_4448_fu_31988_p1 = esl_sext<120,73>(tmp_4443_reg_84504.read());
}

void particlemaster_ReadCalculations::thread_tmp_4451_fu_32062_p3() {
    tmp_4451_fu_32062_p3 = esl_concat<77,52>(tmp_4450_reg_84535.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4452_fu_32072_p3() {
    tmp_4452_fu_32072_p3 = esl_concat<1,18>(tmp_7019_reg_84550.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4454_fu_32095_p2() {
    tmp_4454_fu_32095_p2 = (!tmp_7021_fu_32092_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7021_fu_32092_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4455_fu_32155_p1() {
    tmp_4455_fu_32155_p1 = esl_sext<72,71>(p_Val2_5922_reg_84540.read());
}

void particlemaster_ReadCalculations::thread_tmp_4456_fu_32158_p1() {
    tmp_4456_fu_32158_p1 = esl_sext<72,71>(p_Val2_3108_reg_84589.read());
}

void particlemaster_ReadCalculations::thread_tmp_4457_fu_32313_p1() {
    tmp_4457_fu_32313_p1 = esl_zext<32,8>(m_diff_hi_V_46_reg_84594.read());
}

void particlemaster_ReadCalculations::thread_tmp_4458_fu_32211_p1() {
    tmp_4458_fu_32211_p1 = esl_zext<32,8>(Z4_ind_V_46_fu_32201_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4459_fu_32221_p1() {
    tmp_4459_fu_32221_p1 = esl_zext<36,35>(p_Val2_5924_reg_84611.read());
}

void particlemaster_ReadCalculations::thread_tmp_4460_fu_32224_p1() {
    tmp_4460_fu_32224_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4461_fu_32216_p1() {
    tmp_4461_fu_32216_p1 = esl_zext<32,8>(p_Val2_5926_fu_32187_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4462_fu_32234_p4() {
    tmp_4462_fu_32234_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5926_reg_84606.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4464_fu_32270_p1() {
    tmp_4464_fu_32270_p1 = esl_zext<44,43>(tmp_4462_reg_84632.read());
}

void particlemaster_ReadCalculations::thread_tmp_4465_fu_32266_p1() {
    tmp_4465_fu_32266_p1 = esl_zext<32,8>(p_Val2_5929_reg_84599.read());
}

void particlemaster_ReadCalculations::thread_tmp_4467_fu_32291_p4() {
    tmp_4467_fu_32291_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5929_reg_84599.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4469_fu_32327_p5() {
    tmp_4469_fu_32327_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5929_reg_84599.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4472_fu_32383_p1() {
    tmp_4472_fu_32383_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4473_fu_32393_p3() {
    tmp_4473_fu_32393_p3 = esl_concat<59,49>(p_Val2_3117_reg_84698.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4474_fu_32427_p4() {
    tmp_4474_fu_32427_p4 = p_Val2_3119_fu_32403_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_4475_fu_32437_p3() {
    tmp_4475_fu_32437_p3 = esl_concat<57,1>(tmp_4474_fu_32427_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4476_fu_32105_p2() {
    tmp_4476_fu_32105_p2 = (!tmp_8552_cast_fu_32101_p1.read().is_01() || !p_Val2_3103_fu_32055_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_8552_cast_fu_32101_p1.read() != p_Val2_3103_fu_32055_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4477_fu_42840_p2() {
    tmp_4477_fu_42840_p2 = (!p_0415_0_i45_reg_89178.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i45_reg_89178.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4478_fu_32485_p2() {
    tmp_4478_fu_32485_p2 = (!p_0415_0_i46_reg_84713.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i46_reg_84713.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4479_fu_44629_p1() {
    tmp_4479_fu_44629_p1 = tmp_18905_neg_reg_89938.read();
}

void particlemaster_ReadCalculations::thread_tmp_4480_fu_10122_p1() {
    tmp_4480_fu_10122_p1 = p_Val2_2300_fu_10102_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4481_fu_10800_p1() {
    tmp_4481_fu_10800_p1 = p_Val2_2333_fu_10794_p2.read().range(120-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4483_fu_43619_p2() {
    tmp_4483_fu_43619_p2 = (!b_exp_104_fu_43613_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_104_fu_43613_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4484_fu_42936_p2() {
    tmp_4484_fu_42936_p2 = (!loc_V_99_reg_89219.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_99_reg_89219.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4485_fu_43625_p2() {
    tmp_4485_fu_43625_p2 = (!loc_V_98_reg_89212.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_98_reg_89212.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4486_fu_42941_p2() {
    tmp_4486_fu_42941_p2 = (!loc_V_99_reg_89219.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_99_reg_89219.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4487_fu_44294_p2() {
    tmp_4487_fu_44294_p2 = (tmp_4485_reg_89539.read() & tmp_4486_reg_89254.read());
}

void particlemaster_ReadCalculations::thread_tmp_4488_fu_43630_p2() {
    tmp_4488_fu_43630_p2 = (!loc_V_98_reg_89212.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_98_reg_89212.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4489_fu_44355_p2() {
    tmp_4489_fu_44355_p2 = (tmp_4485_reg_89539.read() & tmp_4484_reg_89248.read());
}

void particlemaster_ReadCalculations::thread_tmp_4490_fu_44298_p3() {
    tmp_4490_fu_44298_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4487_fu_44294_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4491_fu_44364_p3() {
    tmp_4491_fu_44364_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4489_fu_44355_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4492_fu_44372_p2() {
    tmp_4492_fu_44372_p2 = (!tmp_4491_fu_44364_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4491_fu_44364_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4493_fu_44378_p3() {
    tmp_4493_fu_44378_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4488_reg_89545.read());
}

void particlemaster_ReadCalculations::thread_tmp_4494_fu_44385_p2() {
    tmp_4494_fu_44385_p2 = (!tmp_4493_fu_44378_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4493_fu_44378_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4495_fu_42932_p1() {
    tmp_4495_fu_42932_p1 = esl_zext<32,6>(index0_V_41_reg_89233.read());
}

void particlemaster_ReadCalculations::thread_tmp_4496_fu_43026_p4() {
    tmp_4496_fu_43026_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7032_reg_89280.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4497_fu_43035_p1() {
    tmp_4497_fu_43035_p1 = esl_zext<76,75>(sf41_fu_43017_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4498_fu_43047_p3() {
    tmp_4498_fu_43047_p3 = esl_concat<50,25>(tmp_7033_fu_43007_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4499_fu_43059_p1() {
    tmp_4499_fu_43059_p1 = esl_zext<77,76>(p_Val2_3127_fu_43039_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4500_fu_43082_p1() {
    tmp_4500_fu_43082_p1 = esl_zext<78,77>(p_Val2_3128_reg_89293.read());
}

void particlemaster_ReadCalculations::thread_tmp_4501_fu_43085_p1() {
    tmp_4501_fu_43085_p1 = esl_zext<78,75>(p_Val2_3129_reg_89308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4502_fu_43673_p1() {
    tmp_4502_fu_43673_p1 = esl_zext<32,4>(p_Val2_7088_reg_89287.read());
}

void particlemaster_ReadCalculations::thread_tmp_4504_fu_43131_p3() {
    tmp_4504_fu_43131_p3 = esl_concat<67,14>(tmp_4503_reg_89325.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4505_fu_43142_p1() {
    tmp_4505_fu_43142_p1 = esl_zext<82,81>(p_Val2_3133_fu_43124_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4506_fu_43164_p1() {
    tmp_4506_fu_43164_p1 = esl_zext<83,82>(p_Val2_3134_reg_89330.read());
}

void particlemaster_ReadCalculations::thread_tmp_4507_fu_43167_p3() {
    tmp_4507_fu_43167_p3 = esl_concat<79,1>(p_Val2_3135_reg_89345.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4508_fu_43677_p1() {
    tmp_4508_fu_43677_p1 = esl_zext<32,6>(p_Val2_7089_reg_89319.read());
}

void particlemaster_ReadCalculations::thread_tmp_4509_fu_43216_p3() {
    tmp_4509_fu_43216_p3 = esl_concat<76,25>(tmp_7037_reg_89366.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4510_fu_43227_p1() {
    tmp_4510_fu_43227_p1 = esl_zext<102,96>(p_Val2_3138_fu_43207_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4512_fu_43250_p1() {
    tmp_4512_fu_43250_p1 = esl_zext<103,102>(p_Val2_3139_reg_89371.read());
}

void particlemaster_ReadCalculations::thread_tmp_4513_fu_10932_p3() {
    tmp_4513_fu_10932_p3 = r_V_396_reg_75327.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_4514_fu_10913_p1() {
    tmp_4514_fu_10913_p1 = grp_fu_72731_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4515_fu_43253_p3() {
    tmp_4515_fu_43253_p3 = esl_concat<89,6>(p_Val2_3140_reg_89386.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4516_fu_43681_p1() {
    tmp_4516_fu_43681_p1 = esl_zext<32,6>(p_Val2_7090_reg_89360.read());
}

void particlemaster_ReadCalculations::thread_tmp_4518_fu_43307_p3() {
    tmp_4518_fu_43307_p3 = esl_concat<86,34>(tmp_4517_reg_89403.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4519_fu_43318_p1() {
    tmp_4519_fu_43318_p1 = esl_zext<121,110>(p_Val2_3144_fu_43300_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4520_fu_43340_p1() {
    tmp_4520_fu_43340_p1 = esl_zext<122,121>(p_Val2_3145_reg_89408.read());
}

void particlemaster_ReadCalculations::thread_tmp_4521_fu_43343_p3() {
    tmp_4521_fu_43343_p3 = esl_concat<98,11>(p_Val2_3146_reg_89423.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4522_fu_43657_p1() {
    tmp_4522_fu_43657_p1 = esl_zext<32,6>(p_Val2_7091_reg_89397.read());
}

void particlemaster_ReadCalculations::thread_tmp_4524_fu_43397_p3() {
    tmp_4524_fu_43397_p3 = esl_concat<81,44>(tmp_4523_reg_89440.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4525_fu_43408_p1() {
    tmp_4525_fu_43408_p1 = esl_zext<126,110>(p_Val2_3150_fu_43390_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4526_fu_43430_p1() {
    tmp_4526_fu_43430_p1 = esl_zext<127,126>(p_Val2_3151_reg_89445.read());
}

void particlemaster_ReadCalculations::thread_tmp_4527_fu_43433_p3() {
    tmp_4527_fu_43433_p3 = esl_concat<93,16>(p_Val2_3152_reg_89460.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4529_fu_43661_p1() {
    tmp_4529_fu_43661_p1 = esl_zext<32,6>(p_Val2_7092_reg_89434.read());
}

void particlemaster_ReadCalculations::thread_tmp_4530_fu_11320_p4() {
    tmp_4530_fu_11320_p4 = p_0415_0_i33_fu_11315_p3.read().range(12, 10);
}

void particlemaster_ReadCalculations::thread_tmp_4532_fu_43487_p3() {
    tmp_4532_fu_43487_p3 = esl_concat<76,54>(tmp_4531_reg_89477.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4533_fu_43498_p1() {
    tmp_4533_fu_43498_p1 = esl_zext<131,110>(p_Val2_3156_fu_43480_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4534_fu_43520_p1() {
    tmp_4534_fu_43520_p1 = esl_zext<132,131>(p_Val2_3157_reg_89482.read());
}

void particlemaster_ReadCalculations::thread_tmp_4535_fu_43523_p3() {
    tmp_4535_fu_43523_p3 = esl_concat<88,21>(p_Val2_3158_reg_89497.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4536_fu_43665_p1() {
    tmp_4536_fu_43665_p1 = esl_zext<32,6>(p_Val2_7093_reg_89471.read());
}

void particlemaster_ReadCalculations::thread_tmp_4538_fu_43577_p3() {
    tmp_4538_fu_43577_p3 = esl_concat<71,64>(tmp_4537_reg_89514.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4539_fu_43588_p1() {
    tmp_4539_fu_43588_p1 = esl_zext<136,110>(p_Val2_3162_fu_43570_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4540_fu_43689_p1() {
    tmp_4540_fu_43689_p1 = esl_zext<137,136>(p_Val2_3163_reg_89519.read());
}

void particlemaster_ReadCalculations::thread_tmp_4541_fu_43692_p3() {
    tmp_4541_fu_43692_p3 = esl_concat<83,26>(p_Val2_3164_reg_89575.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4542_fu_43669_p1() {
    tmp_4542_fu_43669_p1 = esl_zext<32,6>(p_Val2_7094_reg_89508.read());
}

void particlemaster_ReadCalculations::thread_tmp_4546_fu_43825_p3() {
    tmp_4546_fu_43825_p3 = esl_concat<72,45>(tmp_4543_reg_89610.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4548_fu_43855_p3() {
    tmp_4548_fu_43855_p3 = esl_concat<90,30>(p_Val2_3123_reg_89641.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4549_fu_43866_p1() {
    tmp_4549_fu_43866_p1 = esl_zext<122,121>(p_Val2_5767_cast_fu_43822_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4550_fu_43883_p1() {
    tmp_4550_fu_43883_p1 = esl_zext<123,122>(p_Val2_3169_reg_89662.read());
}

void particlemaster_ReadCalculations::thread_tmp_4551_fu_43886_p1() {
    tmp_4551_fu_43886_p1 = esl_zext<123,121>(p_Val2_3168_fu_43880_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4552_fu_43890_p1() {
    tmp_4552_fu_43890_p1 = esl_sext<120,73>(tmp_4547_reg_89656.read());
}

void particlemaster_ReadCalculations::thread_tmp_4555_fu_43959_p3() {
    tmp_4555_fu_43959_p3 = esl_concat<77,52>(tmp_4554_reg_89682.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4556_fu_43969_p3() {
    tmp_4556_fu_43969_p3 = esl_concat<1,18>(tmp_7039_reg_89697.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4558_fu_43992_p2() {
    tmp_4558_fu_43992_p2 = (!tmp_7041_fu_43989_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7041_fu_43989_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4559_fu_44052_p1() {
    tmp_4559_fu_44052_p1 = esl_sext<72,71>(p_Val2_5952_reg_89687.read());
}

void particlemaster_ReadCalculations::thread_tmp_4560_fu_44055_p1() {
    tmp_4560_fu_44055_p1 = esl_sext<72,71>(p_Val2_3176_reg_89737.read());
}

void particlemaster_ReadCalculations::thread_tmp_4561_fu_44210_p1() {
    tmp_4561_fu_44210_p1 = esl_zext<32,8>(m_diff_hi_V_47_reg_89742.read());
}

void particlemaster_ReadCalculations::thread_tmp_4562_fu_44108_p1() {
    tmp_4562_fu_44108_p1 = esl_zext<32,8>(Z4_ind_V_47_fu_44098_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4563_fu_44118_p1() {
    tmp_4563_fu_44118_p1 = esl_zext<36,35>(p_Val2_5954_reg_89759.read());
}

void particlemaster_ReadCalculations::thread_tmp_4564_fu_44121_p1() {
    tmp_4564_fu_44121_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4565_fu_44113_p1() {
    tmp_4565_fu_44113_p1 = esl_zext<32,8>(p_Val2_5956_fu_44084_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4566_fu_44131_p4() {
    tmp_4566_fu_44131_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5956_reg_89754.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4568_fu_44167_p1() {
    tmp_4568_fu_44167_p1 = esl_zext<44,43>(tmp_4566_reg_89780.read());
}

void particlemaster_ReadCalculations::thread_tmp_4569_fu_11446_p3() {
    tmp_4569_fu_11446_p3 = p_Val2_2334_reg_75297.read().range(120, 120);
}

void particlemaster_ReadCalculations::thread_tmp_4570_fu_11367_p1() {
    tmp_4570_fu_11367_p1 = p_0415_0_i33_fu_11315_p3.read().range(11-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4571_fu_44163_p1() {
    tmp_4571_fu_44163_p1 = esl_zext<32,8>(p_Val2_5959_reg_89747.read());
}

void particlemaster_ReadCalculations::thread_tmp_4573_fu_44188_p4() {
    tmp_4573_fu_44188_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5959_reg_89747.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4575_fu_44224_p5() {
    tmp_4575_fu_44224_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5959_reg_89747.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4578_fu_44280_p1() {
    tmp_4578_fu_44280_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4579_fu_44312_p3() {
    tmp_4579_fu_44312_p3 = esl_concat<59,49>(p_Val2_3185_reg_89846.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4580_fu_44002_p2() {
    tmp_4580_fu_44002_p2 = (!tmp_8819_cast_fu_43998_p1.read().is_01() || !p_Val2_3171_fu_43952_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_8819_cast_fu_43998_p1.read() != p_Val2_3171_fu_43952_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4581_fu_44412_p2() {
    tmp_4581_fu_44412_p2 = (!p_0415_0_i47_fu_44391_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i47_fu_44391_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4582_fu_44418_p4() {
    tmp_4582_fu_44418_p4 = p_Val2_3187_reg_89869.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_4583_fu_44427_p4() {
    tmp_4583_fu_44427_p4 = p_Val2_3187_reg_89869.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4584_fu_44588_p2() {
    tmp_4584_fu_44588_p2 = (sel_tmp259_fu_44583_p2.read() | sel_tmp250_fu_44563_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4585_fu_44602_p2() {
    tmp_4585_fu_44602_p2 = (tmp_4584_fu_44588_p2.read() | sel_tmp243_fu_44553_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4590_fu_34274_p1() {
    tmp_4590_fu_34274_p1 = tmp_18911_neg_reg_85473.read();
}

void particlemaster_ReadCalculations::thread_tmp_4592_fu_33264_p2() {
    tmp_4592_fu_33264_p2 = (!b_exp_107_fu_33258_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_107_fu_33258_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_4593_fu_32581_p2() {
    tmp_4593_fu_32581_p2 = (!loc_V_112_reg_84754.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_112_reg_84754.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4594_fu_33270_p2() {
    tmp_4594_fu_33270_p2 = (!loc_V_111_reg_84747.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_111_reg_84747.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_4595_fu_32586_p2() {
    tmp_4595_fu_32586_p2 = (!loc_V_112_reg_84754.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_112_reg_84754.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4596_fu_33939_p2() {
    tmp_4596_fu_33939_p2 = (tmp_4594_reg_85074.read() & tmp_4595_reg_84789.read());
}

void particlemaster_ReadCalculations::thread_tmp_4597_fu_33275_p2() {
    tmp_4597_fu_33275_p2 = (!loc_V_111_reg_84747.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_111_reg_84747.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4598_fu_34000_p2() {
    tmp_4598_fu_34000_p2 = (tmp_4594_reg_85074.read() & tmp_4593_reg_84783.read());
}

void particlemaster_ReadCalculations::thread_tmp_4599_fu_33943_p3() {
    tmp_4599_fu_33943_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4596_fu_33939_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4601_fu_34009_p3() {
    tmp_4601_fu_34009_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4598_fu_34000_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4602_fu_34017_p2() {
    tmp_4602_fu_34017_p2 = (!tmp_4601_fu_34009_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4601_fu_34009_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4603_fu_22024_p1() {
    tmp_4603_fu_22024_p1 = grp_fu_22018_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4604_fu_22045_p1() {
    tmp_4604_fu_22045_p1 = p_Val2_2353_reg_80079.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4605_fu_34023_p3() {
    tmp_4605_fu_34023_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4597_reg_85080.read());
}

void particlemaster_ReadCalculations::thread_tmp_4606_fu_34030_p2() {
    tmp_4606_fu_34030_p2 = (!tmp_4605_fu_34023_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4605_fu_34023_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4607_fu_32577_p1() {
    tmp_4607_fu_32577_p1 = esl_zext<32,6>(index0_V_42_reg_84768.read());
}

void particlemaster_ReadCalculations::thread_tmp_4608_fu_32671_p4() {
    tmp_4608_fu_32671_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7050_reg_84815.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4609_fu_32680_p1() {
    tmp_4609_fu_32680_p1 = esl_zext<76,75>(sf42_fu_32662_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4610_fu_32692_p3() {
    tmp_4610_fu_32692_p3 = esl_concat<50,25>(tmp_7051_fu_32652_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4611_fu_32704_p1() {
    tmp_4611_fu_32704_p1 = esl_zext<77,76>(p_Val2_3193_fu_32684_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4612_fu_32727_p1() {
    tmp_4612_fu_32727_p1 = esl_zext<78,77>(p_Val2_3194_reg_84828.read());
}

void particlemaster_ReadCalculations::thread_tmp_4613_fu_32730_p1() {
    tmp_4613_fu_32730_p1 = esl_zext<78,75>(p_Val2_3195_reg_84843.read());
}

void particlemaster_ReadCalculations::thread_tmp_4614_fu_33318_p1() {
    tmp_4614_fu_33318_p1 = esl_zext<32,4>(p_Val2_7130_reg_84822.read());
}

void particlemaster_ReadCalculations::thread_tmp_4616_fu_32776_p3() {
    tmp_4616_fu_32776_p3 = esl_concat<67,14>(tmp_4615_reg_84860.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4617_fu_32787_p1() {
    tmp_4617_fu_32787_p1 = esl_zext<82,81>(p_Val2_3199_fu_32769_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4618_fu_32809_p1() {
    tmp_4618_fu_32809_p1 = esl_zext<83,82>(p_Val2_3200_reg_84865.read());
}

void particlemaster_ReadCalculations::thread_tmp_4619_fu_32812_p3() {
    tmp_4619_fu_32812_p3 = esl_concat<79,1>(p_Val2_3201_reg_84880.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4620_fu_22048_p3() {
    tmp_4620_fu_22048_p3 = p_Val2_2353_reg_80079.read().range(53, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4621_fu_22222_p1() {
    tmp_4621_fu_22222_p1 = p_Val2_2365_fu_22216_p2.read().range(82-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4622_fu_33322_p1() {
    tmp_4622_fu_33322_p1 = esl_zext<32,6>(p_Val2_7131_reg_84854.read());
}

void particlemaster_ReadCalculations::thread_tmp_4623_fu_32861_p3() {
    tmp_4623_fu_32861_p3 = esl_concat<76,25>(tmp_7055_reg_84901.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4624_fu_32872_p1() {
    tmp_4624_fu_32872_p1 = esl_zext<102,96>(p_Val2_3204_fu_32852_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4625_fu_32895_p1() {
    tmp_4625_fu_32895_p1 = esl_zext<103,102>(p_Val2_3205_reg_84906.read());
}

void particlemaster_ReadCalculations::thread_tmp_4626_fu_32898_p3() {
    tmp_4626_fu_32898_p3 = esl_concat<89,6>(p_Val2_3206_reg_84921.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4627_fu_33326_p1() {
    tmp_4627_fu_33326_p1 = esl_zext<32,6>(p_Val2_7132_reg_84895.read());
}

void particlemaster_ReadCalculations::thread_tmp_4629_fu_32952_p3() {
    tmp_4629_fu_32952_p3 = esl_concat<86,34>(tmp_4628_reg_84938.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4630_fu_32963_p1() {
    tmp_4630_fu_32963_p1 = esl_zext<121,110>(p_Val2_3210_fu_32945_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4631_fu_32985_p1() {
    tmp_4631_fu_32985_p1 = esl_zext<122,121>(p_Val2_3212_reg_84943.read());
}

void particlemaster_ReadCalculations::thread_tmp_4632_fu_32988_p3() {
    tmp_4632_fu_32988_p3 = esl_concat<98,11>(p_Val2_3213_reg_84958.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4633_fu_33302_p1() {
    tmp_4633_fu_33302_p1 = esl_zext<32,6>(p_Val2_7133_reg_84932.read());
}

void particlemaster_ReadCalculations::thread_tmp_4635_fu_22236_p1() {
    tmp_4635_fu_22236_p1 = p_Val2_2365_fu_22216_p2.read().range(76-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4636_fu_33042_p3() {
    tmp_4636_fu_33042_p3 = esl_concat<81,44>(tmp_4634_reg_84975.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4638_fu_33053_p1() {
    tmp_4638_fu_33053_p1 = esl_zext<126,110>(p_Val2_3217_fu_33035_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4639_fu_33075_p1() {
    tmp_4639_fu_33075_p1 = esl_zext<127,126>(p_Val2_3218_reg_84980.read());
}

void particlemaster_ReadCalculations::thread_tmp_4640_fu_33078_p3() {
    tmp_4640_fu_33078_p3 = esl_concat<93,16>(p_Val2_3219_reg_84995.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4641_fu_33306_p1() {
    tmp_4641_fu_33306_p1 = esl_zext<32,6>(p_Val2_7134_reg_84969.read());
}

void particlemaster_ReadCalculations::thread_tmp_4643_fu_33132_p3() {
    tmp_4643_fu_33132_p3 = esl_concat<76,54>(tmp_4642_reg_85012.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4644_fu_33143_p1() {
    tmp_4644_fu_33143_p1 = esl_zext<131,110>(p_Val2_3223_fu_33125_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4645_fu_33165_p1() {
    tmp_4645_fu_33165_p1 = esl_zext<132,131>(p_Val2_3225_reg_85017.read());
}

void particlemaster_ReadCalculations::thread_tmp_4646_fu_33168_p3() {
    tmp_4646_fu_33168_p3 = esl_concat<88,21>(p_Val2_3226_reg_85032.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4647_fu_33310_p1() {
    tmp_4647_fu_33310_p1 = esl_zext<32,6>(p_Val2_7135_reg_85006.read());
}

void particlemaster_ReadCalculations::thread_tmp_4649_fu_33222_p3() {
    tmp_4649_fu_33222_p3 = esl_concat<71,64>(tmp_4648_reg_85049.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_4650_fu_33233_p1() {
    tmp_4650_fu_33233_p1 = esl_zext<136,110>(p_Val2_3231_fu_33215_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4651_fu_33334_p1() {
    tmp_4651_fu_33334_p1 = esl_zext<137,136>(p_Val2_3232_reg_85054.read());
}

void particlemaster_ReadCalculations::thread_tmp_4652_fu_33337_p3() {
    tmp_4652_fu_33337_p3 = esl_concat<83,26>(p_Val2_3233_reg_85110.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_4653_fu_33314_p1() {
    tmp_4653_fu_33314_p1 = esl_zext<32,6>(p_Val2_7136_reg_85043.read());
}

void particlemaster_ReadCalculations::thread_tmp_4657_fu_33470_p3() {
    tmp_4657_fu_33470_p3 = esl_concat<72,45>(tmp_4654_reg_85145.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_4659_fu_33500_p3() {
    tmp_4659_fu_33500_p3 = esl_concat<90,30>(p_Val2_3189_reg_85176.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_4660_fu_33511_p1() {
    tmp_4660_fu_33511_p1 = esl_zext<122,121>(p_Val2_5842_cast_fu_33467_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4661_fu_33528_p1() {
    tmp_4661_fu_33528_p1 = esl_zext<123,122>(p_Val2_3239_reg_85197.read());
}

void particlemaster_ReadCalculations::thread_tmp_4662_fu_33531_p1() {
    tmp_4662_fu_33531_p1 = esl_zext<123,121>(p_Val2_3238_fu_33525_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_4663_fu_33535_p1() {
    tmp_4663_fu_33535_p1 = esl_sext<120,73>(tmp_4658_reg_85191.read());
}

void particlemaster_ReadCalculations::thread_tmp_4666_fu_33604_p3() {
    tmp_4666_fu_33604_p3 = esl_concat<77,52>(tmp_4665_reg_85217.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_4667_fu_33614_p3() {
    tmp_4667_fu_33614_p3 = esl_concat<1,18>(tmp_7057_reg_85232.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_4669_fu_33637_p2() {
    tmp_4669_fu_33637_p2 = (!tmp_7059_fu_33634_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7059_fu_33634_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_4670_fu_33697_p1() {
    tmp_4670_fu_33697_p1 = esl_sext<72,71>(p_Val2_5986_reg_85222.read());
}

void particlemaster_ReadCalculations::thread_tmp_4671_fu_33700_p1() {
    tmp_4671_fu_33700_p1 = esl_sext<72,71>(p_Val2_3248_reg_85272.read());
}

void particlemaster_ReadCalculations::thread_tmp_4672_fu_33855_p1() {
    tmp_4672_fu_33855_p1 = esl_zext<32,8>(m_diff_hi_V_48_reg_85277.read());
}

void particlemaster_ReadCalculations::thread_tmp_4673_fu_33753_p1() {
    tmp_4673_fu_33753_p1 = esl_zext<32,8>(Z4_ind_V_48_fu_33743_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4674_fu_33763_p1() {
    tmp_4674_fu_33763_p1 = esl_zext<36,35>(p_Val2_5988_reg_85294.read());
}

void particlemaster_ReadCalculations::thread_tmp_4675_fu_33766_p1() {
    tmp_4675_fu_33766_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4676_fu_22996_p3() {
    tmp_4676_fu_22996_p3 = r_V_379_reg_80488.read().range(30, 30);
}

void particlemaster_ReadCalculations::thread_tmp_4677_fu_33758_p1() {
    tmp_4677_fu_33758_p1 = esl_zext<32,8>(p_Val2_5990_fu_33729_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4678_fu_33776_p4() {
    tmp_4678_fu_33776_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_5990_reg_85289.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_4680_fu_33812_p1() {
    tmp_4680_fu_33812_p1 = esl_zext<44,43>(tmp_4678_reg_85315.read());
}

void particlemaster_ReadCalculations::thread_tmp_4681_fu_33808_p1() {
    tmp_4681_fu_33808_p1 = esl_zext<32,8>(p_Val2_5993_reg_85282.read());
}

void particlemaster_ReadCalculations::thread_tmp_4683_fu_33833_p4() {
    tmp_4683_fu_33833_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_5993_reg_85282.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_4685_fu_33869_p5() {
    tmp_4685_fu_33869_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_5993_reg_85282.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_4688_fu_33925_p1() {
    tmp_4688_fu_33925_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_4689_fu_33957_p3() {
    tmp_4689_fu_33957_p3 = esl_concat<59,49>(p_Val2_3259_reg_85381.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_4690_fu_33647_p2() {
    tmp_4690_fu_33647_p2 = (!tmp_8854_cast_fu_33643_p1.read().is_01() || !p_Val2_3243_fu_33597_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_8854_cast_fu_33643_p1.read() != p_Val2_3243_fu_33597_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4691_fu_34057_p2() {
    tmp_4691_fu_34057_p2 = (!p_0415_0_i48_fu_34036_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i48_fu_34036_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_4692_fu_34063_p4() {
    tmp_4692_fu_34063_p4 = p_Val2_3261_reg_85404.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_4693_fu_34072_p4() {
    tmp_4693_fu_34072_p4 = p_Val2_3261_reg_85404.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_4694_fu_34233_p2() {
    tmp_4694_fu_34233_p2 = (sel_tmp297_fu_34228_p2.read() | sel_tmp288_fu_34208_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4695_fu_34247_p2() {
    tmp_4695_fu_34247_p2 = (tmp_4694_fu_34233_p2.read() | sel_tmp281_fu_34198_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_4700_fu_44637_p3() {
    tmp_4700_fu_44637_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_4701_fu_44644_p2() {
    tmp_4701_fu_44644_p2 = (!tmp_4700_fu_44637_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4700_fu_44637_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4702_fu_34282_p3() {
    tmp_4702_fu_34282_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4290_reg_83960.read());
}

void particlemaster_ReadCalculations::thread_tmp_4703_fu_34289_p2() {
    tmp_4703_fu_34289_p2 = (!tmp_4702_fu_34282_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4702_fu_34282_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4704_fu_22979_p1() {
    tmp_4704_fu_22979_p1 = grp_fu_72811_p3.read().range(18-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4705_fu_44650_p3() {
    tmp_4705_fu_44650_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_4706_fu_44657_p2() {
    tmp_4706_fu_44657_p2 = (!tmp_4705_fu_44650_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4705_fu_44650_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4707_fu_34295_p3() {
    tmp_4707_fu_34295_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4292_reg_83993.read());
}

void particlemaster_ReadCalculations::thread_tmp_4708_fu_34302_p2() {
    tmp_4708_fu_34302_p2 = (!tmp_4707_fu_34295_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4707_fu_34295_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4709_fu_44670_p3() {
    tmp_4709_fu_44670_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_4710_fu_44677_p2() {
    tmp_4710_fu_44677_p2 = (!tmp_4709_fu_44670_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4709_fu_44670_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4711_fu_34315_p3() {
    tmp_4711_fu_34315_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_tmp_4712_fu_34322_p2() {
    tmp_4712_fu_34322_p2 = (!tmp_4711_fu_34315_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4711_fu_34315_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_4713_fu_44690_p1() {
    tmp_4713_fu_44690_p1 = esl_zext<32,6>(grp_fu_6262_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4714_fu_44783_p4() {
    tmp_4714_fu_44783_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_7066_reg_90021.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_4715_fu_44792_p1() {
    tmp_4715_fu_44792_p1 = esl_zext<76,75>(sf43_fu_44774_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4716_fu_44804_p3() {
    tmp_4716_fu_44804_p3 = esl_concat<50,25>(tmp_7067_fu_44764_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4717_fu_44816_p1() {
    tmp_4717_fu_44816_p1 = esl_zext<77,76>(p_Val2_3267_fu_44796_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4718_fu_44839_p1() {
    tmp_4718_fu_44839_p1 = esl_zext<78,77>(p_Val2_3268_reg_90034.read());
}

void particlemaster_ReadCalculations::thread_tmp_4719_fu_44842_p1() {
    tmp_4719_fu_44842_p1 = esl_zext<78,75>(p_Val2_3269_reg_90049.read());
}

void particlemaster_ReadCalculations::thread_tmp_4720_fu_45435_p1() {
    tmp_4720_fu_45435_p1 = esl_zext<32,4>(p_Val2_7095_reg_90028.read());
}

void particlemaster_ReadCalculations::thread_tmp_4722_fu_44888_p3() {
    tmp_4722_fu_44888_p3 = esl_concat<67,14>(tmp_4721_reg_90066.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_4723_fu_44899_p1() {
    tmp_4723_fu_44899_p1 = esl_zext<82,81>(p_Val2_3273_fu_44881_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4724_fu_44921_p1() {
    tmp_4724_fu_44921_p1 = esl_zext<83,82>(p_Val2_3274_reg_90071.read());
}

void particlemaster_ReadCalculations::thread_tmp_4725_fu_44924_p3() {
    tmp_4725_fu_44924_p3 = esl_concat<79,1>(p_Val2_3275_reg_90086.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_4726_fu_45439_p1() {
    tmp_4726_fu_45439_p1 = esl_zext<32,6>(p_Val2_7096_reg_90060.read());
}

void particlemaster_ReadCalculations::thread_tmp_4727_fu_44973_p3() {
    tmp_4727_fu_44973_p3 = esl_concat<76,25>(tmp_7071_reg_90107.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_4728_fu_44984_p1() {
    tmp_4728_fu_44984_p1 = esl_zext<102,96>(p_Val2_3278_fu_44964_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_4729_fu_45007_p1() {
    tmp_4729_fu_45007_p1 = esl_zext<103,102>(p_Val2_3279_reg_90112.read());
}

void particlemaster_ReadCalculations::thread_tmp_4730_fu_23304_p3() {
    tmp_4730_fu_23304_p3 = p_Val2_2415_fu_23288_p2.read().range(106, 106);
}

void particlemaster_ReadCalculations::thread_tmp_4732_fu_45010_p3() {
    tmp_4732_fu_45010_p3 = esl_concat<89,6>(p_Val2_3280_reg_90127.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_4733_fu_45443_p1() {
    tmp_4733_fu_45443_p1 = esl_zext<32,6>(p_Val2_7097_reg_90101.read());
}

void particlemaster_ReadCalculations::thread_tmp_4736_fu_45064_p3() {
    tmp_4736_fu_45064_p3 = esl_concat<86,34>(tmp_4735_reg_90144.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_4737_fu_45075_p1() {
    tmp_4737_fu_45075_p1 = esl_zext<121,110>(p_Val2_3284_fu_45057_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4738_fu_45097_p1() {
    tmp_4738_fu_45097_p1 = esl_zext<122,121>(p_Val2_3285_reg_90149.read());
}

void particlemaster_ReadCalculations::thread_tmp_4739_fu_45100_p3() {
    tmp_4739_fu_45100_p3 = esl_concat<98,11>(p_Val2_3287_reg_90164.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_4740_fu_45354_p1() {
    tmp_4740_fu_45354_p1 = esl_zext<32,6>(p_Val2_7098_reg_90138.read());
}

void particlemaster_ReadCalculations::thread_tmp_4742_fu_45154_p3() {
    tmp_4742_fu_45154_p3 = esl_concat<81,44>(tmp_4741_reg_90181.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_4743_fu_45165_p1() {
    tmp_4743_fu_45165_p1 = esl_zext<126,110>(p_Val2_3292_fu_45147_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4744_fu_45187_p1() {
    tmp_4744_fu_45187_p1 = esl_zext<127,126>(p_Val2_3293_reg_90186.read());
}

void particlemaster_ReadCalculations::thread_tmp_4745_fu_11667_p1() {
    tmp_4745_fu_11667_p1 = grp_fu_11661_p2.read().range(54-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4746_fu_45190_p3() {
    tmp_4746_fu_45190_p3 = esl_concat<93,16>(p_Val2_3294_reg_90201.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_4747_fu_11688_p1() {
    tmp_4747_fu_11688_p1 = p_Val2_2419_reg_75640.read().range(50-1, 0);
}

void particlemaster_ReadCalculations::thread_tmp_4748_fu_45358_p1() {
    tmp_4748_fu_45358_p1 = esl_zext<32,6>(p_Val2_7099_reg_90175.read());
}

void particlemaster_ReadCalculations::thread_tmp_4750_fu_45244_p3() {
    tmp_4750_fu_45244_p3 = esl_concat<76,54>(tmp_4749_reg_90218.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_4751_fu_45255_p1() {
    tmp_4751_fu_45255_p1 = esl_zext<131,110>(p_Val2_3299_fu_45237_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_4752_fu_45277_p1() {
    tmp_4752_fu_45277_p1 = esl_zext<132,131>(p_Val2_3300_reg_90223.read());
}

void particlemaster_ReadCalculations::thread_tmp_4753_fu_45280_p3() {
    tmp_4753_fu_45280_p3 = esl_concat<88,21>(p_Val2_3301_reg_90238.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_4754_fu_45362_p1() {
    tmp_4754_fu_45362_p1 = esl_zext<32,6>(p_Val2_7100_reg_90212.read());
}

}

