#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_p_Val2_3505_fu_36222_p3() {
    p_Val2_3505_fu_36222_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3503_reg_86350.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3506_fu_36244_p2() {
    p_Val2_3506_fu_36244_p2 = (!tmp_5023_fu_36240_p1.read().is_01() || !tmp_9345_cast_fu_36236_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_5023_fu_36240_p1.read()) + sc_biguint<121>(tmp_9345_cast_fu_36236_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3508_fu_36276_p2() {
    p_Val2_3508_fu_36276_p2 = (!tmp_5025_fu_36262_p1.read().is_01() || !tmp_9349_cast_fu_36272_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5025_fu_36262_p1.read()) - sc_biguint<122>(tmp_9349_cast_fu_36272_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3511_fu_36312_p3() {
    p_Val2_3511_fu_36312_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3509_reg_86387.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3513_fu_36334_p2() {
    p_Val2_3513_fu_36334_p2 = (!tmp_5030_fu_36330_p1.read().is_01() || !tmp_9355_cast_fu_36326_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_5030_fu_36330_p1.read()) + sc_biguint<126>(tmp_9355_cast_fu_36326_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3515_fu_36366_p2() {
    p_Val2_3515_fu_36366_p2 = (!tmp_5031_fu_36352_p1.read().is_01() || !tmp_9359_cast_fu_36362_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5031_fu_36352_p1.read()) - sc_biguint<127>(tmp_9359_cast_fu_36362_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3519_fu_36402_p3() {
    p_Val2_3519_fu_36402_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3517_reg_86424.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3520_fu_19833_p1() {
    p_Val2_3520_fu_19833_p1 = p_Val2_2140_fu_19797_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3522_fu_19823_p4() {
    p_Val2_3522_fu_19823_p4 = p_Val2_2140_fu_19797_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_3523_fu_36424_p2() {
    p_Val2_3523_fu_36424_p2 = (!tmp_5037_fu_36420_p1.read().is_01() || !tmp_9365_cast_fu_36416_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_5037_fu_36420_p1.read()) + sc_biguint<131>(tmp_9365_cast_fu_36416_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3525_fu_36456_p2() {
    p_Val2_3525_fu_36456_p2 = (!tmp_5038_fu_36442_p1.read().is_01() || !tmp_9369_cast_fu_36452_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5038_fu_36442_p1.read()) - sc_biguint<132>(tmp_9369_cast_fu_36452_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3529_fu_36492_p3() {
    p_Val2_3529_fu_36492_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3526_reg_86461.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3530_fu_36514_p2() {
    p_Val2_3530_fu_36514_p2 = (!tmp_5043_fu_36510_p1.read().is_01() || !tmp_9375_cast_fu_36506_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_5043_fu_36510_p1.read()) + sc_biguint<136>(tmp_9375_cast_fu_36506_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3532_fu_36620_p2() {
    p_Val2_3532_fu_36620_p2 = (!tmp_5044_fu_36606_p1.read().is_01() || !tmp_9379_cast_fu_36616_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5044_fu_36606_p1.read()) - sc_biguint<137>(tmp_9379_cast_fu_36616_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3533_fu_36723_p2() {
    p_Val2_3533_fu_36723_p2 = (!tmp1936_fu_36715_p2.read().is_01() || !tmp1939_cast_fu_36720_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1936_fu_36715_p2.read()) + sc_biguint<109>(tmp1939_cast_fu_36720_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3534_fu_36756_p2() {
    p_Val2_3534_fu_36756_p2 = (!tmp_9387_cast_fu_36749_p1.read().is_01() || !tmp_9388_cast_fu_36753_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_9387_cast_fu_36749_p1.read()) - sc_biguint<118>(tmp_9388_cast_fu_36753_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3535_fu_36797_p1() {
    p_Val2_3535_fu_36797_p1 = esl_sext<121,73>(tmp_5051_reg_86610.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3536_fu_36787_p2() {
    p_Val2_3536_fu_36787_p2 = (!tmp_5053_fu_36783_p1.read().is_01() || !tmp_9392_cast_fu_36779_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5053_fu_36783_p1.read()) + sc_bigint<122>(tmp_9392_cast_fu_36779_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3537_fu_36810_p2() {
    p_Val2_3537_fu_36810_p2 = (!tmp_5055_fu_36803_p1.read().is_01() || !tmp_5054_fu_36800_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5055_fu_36803_p1.read()) + sc_biguint<123>(tmp_5054_fu_36800_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3545_fu_36991_p2() {
    p_Val2_3545_fu_36991_p2 = (!tmp_5063_fu_36985_p1.read().is_01() || !tmp_5064_fu_36988_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5063_fu_36985_p1.read()) - sc_bigint<72>(tmp_5064_fu_36988_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3552_fu_37115_p2() {
    p_Val2_3552_fu_37115_p2 = (!tmp_5072_fu_37100_p1.read().is_01() || !tmp1942_cast_fu_37111_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_5072_fu_37100_p1.read()) + sc_biguint<44>(tmp1942_cast_fu_37111_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3554_fu_37184_p2() {
    p_Val2_3554_fu_37184_p2 = (!tmp_9461_cast_fu_37168_p1.read().is_01() || !tmp1943_cast_fu_37180_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_9461_cast_fu_37168_p1.read()) + sc_biguint<52>(tmp1943_cast_fu_37180_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3556_fu_37221_p2() {
    p_Val2_3556_fu_37221_p2 = (!ap_const_lv59_10.is_01() || !tmp_5081_fu_37217_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5081_fu_37217_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3558_fu_37296_p2() {
    p_Val2_3558_fu_37296_p2 = (!tmp_9471_cast_fu_37293_p1.read().is_01() || !tmp_5082_fu_37286_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_9471_cast_fu_37293_p1.read()) + sc_biguint<108>(tmp_5082_fu_37286_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3563_fu_48095_p3() {
    p_Val2_3563_fu_48095_p3 = esl_concat<54,17>(tmp_7132_reg_91494.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3565_fu_48134_p3() {
    p_Val2_3565_fu_48134_p3 = (!tmp_7134_fu_48105_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7134_fu_48105_p3.read()[0].to_bool())? tmp_5103_fu_48121_p4.read(): tmp_5105_fu_48130_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3567_fu_48158_p2() {
    p_Val2_3567_fu_48158_p2 = (!tmp_9507_cast_fu_48150_p1.read().is_01() || !tmp_5107_fu_48154_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_9507_cast_fu_48150_p1.read()) + sc_biguint<77>(tmp_5107_fu_48154_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3569_fu_48183_p2() {
    p_Val2_3569_fu_48183_p2 = (!tmp_5109_fu_48177_p1.read().is_01() || !tmp_5110_fu_48180_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5109_fu_48177_p1.read()) - sc_biguint<78>(tmp_5110_fu_48180_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3572_fu_8607_p2() {
    p_Val2_3572_fu_8607_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2166_reg_74304.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_3573_fu_48219_p3() {
    p_Val2_3573_fu_48219_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3570_reg_91527.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3575_fu_48241_p2() {
    p_Val2_3575_fu_48241_p2 = (!tmp_9516_cast_fu_48233_p1.read().is_01() || !tmp_5114_fu_48237_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_9516_cast_fu_48233_p1.read()) + sc_biguint<82>(tmp_5114_fu_48237_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3577_fu_48273_p2() {
    p_Val2_3577_fu_48273_p2 = (!tmp_5115_fu_48259_p1.read().is_01() || !tmp_9520_cast_fu_48269_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5115_fu_48259_p1.read()) - sc_biguint<83>(tmp_9520_cast_fu_48269_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3579_fu_48302_p4() {
    p_Val2_3579_fu_48302_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7135_reg_91569.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3580_fu_48326_p2() {
    p_Val2_3580_fu_48326_p2 = (!tmp_9525_cast_fu_48318_p1.read().is_01() || !tmp_5119_fu_48322_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_9525_cast_fu_48318_p1.read()) + sc_biguint<102>(tmp_5119_fu_48322_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3584_fu_48359_p2() {
    p_Val2_3584_fu_48359_p2 = (!tmp_5120_fu_48345_p1.read().is_01() || !tmp_9529_cast_fu_48355_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5120_fu_48345_p1.read()) - sc_biguint<103>(tmp_9529_cast_fu_48355_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3588_fu_48395_p3() {
    p_Val2_3588_fu_48395_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3586_reg_91605.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3589_fu_48417_p2() {
    p_Val2_3589_fu_48417_p2 = (!tmp_9535_cast_fu_48409_p1.read().is_01() || !tmp_5125_fu_48413_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_9535_cast_fu_48409_p1.read()) + sc_biguint<121>(tmp_5125_fu_48413_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3592_fu_48449_p2() {
    p_Val2_3592_fu_48449_p2 = (!tmp_5126_fu_48435_p1.read().is_01() || !tmp_9539_cast_fu_48445_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5126_fu_48435_p1.read()) - sc_biguint<122>(tmp_9539_cast_fu_48445_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3595_fu_48485_p3() {
    p_Val2_3595_fu_48485_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3593_reg_91642.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3596_fu_48507_p2() {
    p_Val2_3596_fu_48507_p2 = (!tmp_9545_cast_fu_48499_p1.read().is_01() || !tmp_5133_fu_48503_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_9545_cast_fu_48499_p1.read()) + sc_biguint<126>(tmp_5133_fu_48503_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3598_fu_48539_p2() {
    p_Val2_3598_fu_48539_p2 = (!tmp_5134_fu_48525_p1.read().is_01() || !tmp_9549_cast_fu_48535_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5134_fu_48525_p1.read()) - sc_biguint<127>(tmp_9549_cast_fu_48535_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3601_fu_48575_p3() {
    p_Val2_3601_fu_48575_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3599_reg_91679.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3603_fu_48597_p2() {
    p_Val2_3603_fu_48597_p2 = (!tmp_9555_cast_fu_48589_p1.read().is_01() || !tmp_5139_fu_48593_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_9555_cast_fu_48589_p1.read()) + sc_biguint<131>(tmp_5139_fu_48593_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3605_fu_48629_p2() {
    p_Val2_3605_fu_48629_p2 = (!tmp_5140_fu_48615_p1.read().is_01() || !tmp_9559_cast_fu_48625_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5140_fu_48615_p1.read()) - sc_biguint<132>(tmp_9559_cast_fu_48625_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3609_fu_9476_p1() {
    p_Val2_3609_fu_9476_p1 = p_Val2_2207_fu_9440_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3611_fu_48665_p3() {
    p_Val2_3611_fu_48665_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3606_reg_91716.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3612_fu_48687_p2() {
    p_Val2_3612_fu_48687_p2 = (!tmp_9565_cast_fu_48679_p1.read().is_01() || !tmp_5147_fu_48683_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_9565_cast_fu_48679_p1.read()) + sc_biguint<136>(tmp_5147_fu_48683_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3614_fu_48766_p2() {
    p_Val2_3614_fu_48766_p2 = (!tmp_5148_fu_48752_p1.read().is_01() || !tmp_9569_cast_fu_48762_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5148_fu_48752_p1.read()) - sc_biguint<137>(tmp_9569_cast_fu_48762_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3615_fu_48869_p2() {
    p_Val2_3615_fu_48869_p2 = (!tmp1884_cast_fu_48866_p1.read().is_01() || !tmp1881_fu_48861_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1884_cast_fu_48866_p1.read()) + sc_biguint<109>(tmp1881_fu_48861_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3616_fu_48902_p2() {
    p_Val2_3616_fu_48902_p2 = (!tmp_9577_cast_fu_48895_p1.read().is_01() || !tmp_9578_cast_fu_48899_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_9577_cast_fu_48895_p1.read()) - sc_biguint<118>(tmp_9578_cast_fu_48899_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3617_fu_48947_p1() {
    p_Val2_3617_fu_48947_p1 = esl_sext<121,73>(tmp_5155_reg_91854.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3618_fu_48933_p2() {
    p_Val2_3618_fu_48933_p2 = (!tmp_9582_cast_fu_48925_p1.read().is_01() || !tmp_5157_fu_48929_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_9582_cast_fu_48925_p1.read()) + sc_biguint<122>(tmp_5157_fu_48929_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3619_fu_48960_p2() {
    p_Val2_3619_fu_48960_p2 = (!tmp_5158_fu_48950_p1.read().is_01() || !tmp_5159_fu_48953_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5158_fu_48950_p1.read()) + sc_biguint<123>(tmp_5159_fu_48953_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3620_fu_49024_p3() {
    p_Val2_3620_fu_49024_p3 = esl_concat<78,52>(tmp_5161_reg_91880.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3622_fu_9466_p4() {
    p_Val2_3622_fu_9466_p4 = p_Val2_2207_fu_9440_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_3627_fu_49130_p2() {
    p_Val2_3627_fu_49130_p2 = (!tmp_5167_fu_49124_p1.read().is_01() || !tmp_5168_fu_49127_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5167_fu_49124_p1.read()) - sc_bigint<72>(tmp_5168_fu_49127_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3632_fu_49254_p2() {
    p_Val2_3632_fu_49254_p2 = (!tmp1887_cast_fu_49250_p1.read().is_01() || !tmp_5176_fu_49239_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1887_cast_fu_49250_p1.read()) + sc_biguint<44>(tmp_5176_fu_49239_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3634_fu_49323_p2() {
    p_Val2_3634_fu_49323_p2 = (!tmp1888_cast_fu_49319_p1.read().is_01() || !tmp_9712_cast_fu_49307_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1888_cast_fu_49319_p1.read()) + sc_biguint<52>(tmp_9712_cast_fu_49307_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3635_fu_49356_p2() {
    p_Val2_3635_fu_49356_p2 = (!ap_const_lv59_10.is_01() || !tmp_5184_fu_49352_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5184_fu_49352_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3638_fu_49372_p2() {
    p_Val2_3638_fu_49372_p2 = (!tmp_5186_fu_49362_p3.read().is_01() || !tmp_9722_cast_fu_49369_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5186_fu_49362_p3.read()) + sc_biguint<108>(tmp_9722_cast_fu_49369_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3639_fu_49378_p4() {
    p_Val2_3639_fu_49378_p4 = p_Val2_3638_fu_49372_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_3640_fu_49419_p3() {
    p_Val2_3640_fu_49419_p3 = (!tmp_7144_fu_49388_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7144_fu_49388_p3.read()[0].to_bool())? p_Val2_3639_fu_49378_p4.read(): tmp_5188_fu_49406_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3643_fu_37739_p3() {
    p_Val2_3643_fu_37739_p3 = esl_concat<54,17>(tmp_7147_reg_87031.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3647_fu_37778_p3() {
    p_Val2_3647_fu_37778_p3 = (!tmp_7149_fu_37749_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7149_fu_37749_p3.read()[0].to_bool())? tmp_5191_fu_37765_p4.read(): tmp_5192_fu_37774_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3648_fu_37802_p2() {
    p_Val2_3648_fu_37802_p2 = (!tmp_9601_cast_fu_37794_p1.read().is_01() || !tmp_5194_fu_37798_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_9601_cast_fu_37794_p1.read()) + sc_biguint<77>(tmp_5194_fu_37798_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3650_fu_37827_p2() {
    p_Val2_3650_fu_37827_p2 = (!tmp_5195_fu_37821_p1.read().is_01() || !tmp_5196_fu_37824_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5195_fu_37821_p1.read()) - sc_biguint<78>(tmp_5196_fu_37824_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3654_fu_37863_p3() {
    p_Val2_3654_fu_37863_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3652_reg_87064.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3655_fu_37885_p2() {
    p_Val2_3655_fu_37885_p2 = (!tmp_9610_cast_fu_37877_p1.read().is_01() || !tmp_5200_fu_37881_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_9610_cast_fu_37877_p1.read()) + sc_biguint<82>(tmp_5200_fu_37881_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3657_fu_37917_p2() {
    p_Val2_3657_fu_37917_p2 = (!tmp_5201_fu_37903_p1.read().is_01() || !tmp_9614_cast_fu_37913_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5201_fu_37903_p1.read()) - sc_biguint<83>(tmp_9614_cast_fu_37913_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3659_fu_37946_p4() {
    p_Val2_3659_fu_37946_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7150_reg_87106.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3660_fu_37970_p2() {
    p_Val2_3660_fu_37970_p2 = (!tmp_9619_cast_fu_37962_p1.read().is_01() || !tmp_5205_fu_37966_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_9619_cast_fu_37962_p1.read()) + sc_biguint<102>(tmp_5205_fu_37966_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3662_fu_38003_p2() {
    p_Val2_3662_fu_38003_p2 = (!tmp_5206_fu_37989_p1.read().is_01() || !tmp_9623_cast_fu_37999_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5206_fu_37989_p1.read()) - sc_biguint<103>(tmp_9623_cast_fu_37999_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3665_fu_38039_p3() {
    p_Val2_3665_fu_38039_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3663_reg_87142.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3666_fu_38061_p2() {
    p_Val2_3666_fu_38061_p2 = (!tmp_9629_cast_fu_38053_p1.read().is_01() || !tmp_5211_fu_38057_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_9629_cast_fu_38053_p1.read()) + sc_biguint<121>(tmp_5211_fu_38057_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3668_fu_38093_p2() {
    p_Val2_3668_fu_38093_p2 = (!tmp_5212_fu_38079_p1.read().is_01() || !tmp_9633_cast_fu_38089_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5212_fu_38079_p1.read()) - sc_biguint<122>(tmp_9633_cast_fu_38089_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3671_cast_fu_7330_p1() {
    p_Val2_3671_cast_fu_7330_p1 = esl_sext<121,109>(p_Val2_2063_reg_73732.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3671_fu_20169_p1() {
    p_Val2_3671_fu_20169_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_3672_fu_38129_p3() {
    p_Val2_3672_fu_38129_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3669_reg_87179.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3673_fu_38151_p2() {
    p_Val2_3673_fu_38151_p2 = (!tmp_9639_cast_fu_38143_p1.read().is_01() || !tmp_5218_fu_38147_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_9639_cast_fu_38143_p1.read()) + sc_biguint<126>(tmp_5218_fu_38147_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3675_fu_38183_p2() {
    p_Val2_3675_fu_38183_p2 = (!tmp_5219_fu_38169_p1.read().is_01() || !tmp_9643_cast_fu_38179_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5219_fu_38169_p1.read()) - sc_biguint<127>(tmp_9643_cast_fu_38179_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3678_fu_38219_p3() {
    p_Val2_3678_fu_38219_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3676_reg_87216.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3679_fu_38241_p2() {
    p_Val2_3679_fu_38241_p2 = (!tmp_9649_cast_fu_38233_p1.read().is_01() || !tmp_5224_fu_38237_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_9649_cast_fu_38233_p1.read()) + sc_biguint<131>(tmp_5224_fu_38237_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3682_fu_38273_p2() {
    p_Val2_3682_fu_38273_p2 = (!tmp_5225_fu_38259_p1.read().is_01() || !tmp_9653_cast_fu_38269_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5225_fu_38259_p1.read()) - sc_biguint<132>(tmp_9653_cast_fu_38269_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3685_fu_38309_p3() {
    p_Val2_3685_fu_38309_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3683_reg_87253.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3686_fu_38331_p2() {
    p_Val2_3686_fu_38331_p2 = (!tmp_9659_cast_fu_38323_p1.read().is_01() || !tmp_5230_fu_38327_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_9659_cast_fu_38323_p1.read()) + sc_biguint<136>(tmp_5230_fu_38327_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3688_fu_38410_p2() {
    p_Val2_3688_fu_38410_p2 = (!tmp_5231_fu_38396_p1.read().is_01() || !tmp_9663_cast_fu_38406_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5231_fu_38396_p1.read()) - sc_biguint<137>(tmp_9663_cast_fu_38406_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3689_fu_38513_p2() {
    p_Val2_3689_fu_38513_p2 = (!tmp1949_cast_fu_38510_p1.read().is_01() || !tmp1946_fu_38505_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1949_cast_fu_38510_p1.read()) + sc_biguint<109>(tmp1946_fu_38505_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3690_fu_38546_p2() {
    p_Val2_3690_fu_38546_p2 = (!tmp_9671_cast_fu_38539_p1.read().is_01() || !tmp_9672_cast_fu_38543_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_9671_cast_fu_38539_p1.read()) - sc_biguint<118>(tmp_9672_cast_fu_38543_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3691_fu_38591_p1() {
    p_Val2_3691_fu_38591_p1 = esl_sext<121,73>(tmp_5240_reg_87391.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3692_fu_38577_p2() {
    p_Val2_3692_fu_38577_p2 = (!tmp_9676_cast_fu_38569_p1.read().is_01() || !tmp_5242_fu_38573_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_9676_cast_fu_38569_p1.read()) + sc_biguint<122>(tmp_5242_fu_38573_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3693_fu_38604_p2() {
    p_Val2_3693_fu_38604_p2 = (!tmp_5243_fu_38594_p1.read().is_01() || !tmp_5244_fu_38597_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5243_fu_38594_p1.read()) + sc_biguint<123>(tmp_5244_fu_38597_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3694_fu_38668_p3() {
    p_Val2_3694_fu_38668_p3 = esl_concat<78,52>(tmp_5246_reg_87417.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3701_fu_38774_p2() {
    p_Val2_3701_fu_38774_p2 = (!tmp_5254_fu_38768_p1.read().is_01() || !tmp_5255_fu_38771_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5254_fu_38768_p1.read()) - sc_bigint<72>(tmp_5255_fu_38771_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3707_fu_20483_p2() {
    p_Val2_3707_fu_20483_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2234_reg_79414.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_3710_fu_38898_p2() {
    p_Val2_3710_fu_38898_p2 = (!tmp1952_cast_fu_38894_p1.read().is_01() || !tmp_5263_fu_38883_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1952_cast_fu_38894_p1.read()) + sc_biguint<44>(tmp_5263_fu_38883_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3712_fu_38967_p2() {
    p_Val2_3712_fu_38967_p2 = (!tmp1953_cast_fu_38963_p1.read().is_01() || !tmp_9747_cast_fu_38951_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1953_cast_fu_38963_p1.read()) + sc_biguint<52>(tmp_9747_cast_fu_38951_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3714_fu_39000_p2() {
    p_Val2_3714_fu_39000_p2 = (!ap_const_lv59_10.is_01() || !tmp_5271_fu_38996_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5271_fu_38996_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3716_fu_39016_p2() {
    p_Val2_3716_fu_39016_p2 = (!tmp_5272_fu_39006_p3.read().is_01() || !tmp_9757_cast_fu_39013_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5272_fu_39006_p3.read()) + sc_biguint<108>(tmp_9757_cast_fu_39013_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3717_fu_39022_p4() {
    p_Val2_3717_fu_39022_p4 = p_Val2_3716_fu_39016_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_3718_fu_39063_p3() {
    p_Val2_3718_fu_39063_p3 = (!tmp_7159_fu_39032_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7159_fu_39032_p3.read()[0].to_bool())? p_Val2_3717_fu_39022_p4.read(): tmp_5274_fu_39050_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3719_fu_49507_p3() {
    p_Val2_3719_fu_49507_p3 = esl_concat<78,52>(tmp_4951_reg_91113.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3721_fu_49531_p4() {
    p_Val2_3721_fu_49531_p4 = p_Val2_10305_cast_reg_91108.read().range(119, 104);
}

void particlemaster_ReadCalculations::thread_p_Val2_3725_fu_49651_p2() {
    p_Val2_3725_fu_49651_p2 = (!tmp_5284_fu_49644_p1.read().is_01() || !tmp_5285_fu_49648_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5284_fu_49644_p1.read()) - sc_bigint<72>(tmp_5285_fu_49648_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3732_fu_49775_p2() {
    p_Val2_3732_fu_49775_p2 = (!tmp_5294_fu_49760_p1.read().is_01() || !tmp1889_cast_fu_49771_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_5294_fu_49760_p1.read()) + sc_biguint<44>(tmp1889_cast_fu_49771_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3734_fu_49844_p2() {
    p_Val2_3734_fu_49844_p2 = (!tmp_9996_cast_fu_49828_p1.read().is_01() || !tmp1890_cast_fu_49840_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_9996_cast_fu_49828_p1.read()) + sc_biguint<52>(tmp1890_cast_fu_49840_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3735_fu_49877_p2() {
    p_Val2_3735_fu_49877_p2 = (!ap_const_lv59_10.is_01() || !tmp_5302_fu_49873_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5302_fu_49873_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3738_fu_49893_p2() {
    p_Val2_3738_fu_49893_p2 = (!tmp_10006_cast_fu_49890_p1.read().is_01() || !tmp_5303_fu_49883_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_10006_cast_fu_49890_p1.read()) + sc_biguint<108>(tmp_5303_fu_49883_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3740_fu_39151_p3() {
    p_Val2_3740_fu_39151_p3 = esl_concat<78,52>(tmp_5057_reg_86639.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3743_fu_39175_p4() {
    p_Val2_3743_fu_39175_p4 = p_Val2_6254_cast_reg_86634.read().range(119, 104);
}

void particlemaster_ReadCalculations::thread_p_Val2_3748_fu_39295_p2() {
    p_Val2_3748_fu_39295_p2 = (!tmp_5332_fu_39288_p1.read().is_01() || !tmp_5333_fu_39292_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5332_fu_39288_p1.read()) - sc_bigint<72>(tmp_5333_fu_39292_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3751_fu_21375_p1() {
    p_Val2_3751_fu_21375_p1 = p_Val2_2275_fu_21339_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3754_fu_39419_p2() {
    p_Val2_3754_fu_39419_p2 = (!tmp_5342_fu_39404_p1.read().is_01() || !tmp1954_cast_fu_39415_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_5342_fu_39404_p1.read()) + sc_biguint<44>(tmp1954_cast_fu_39415_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3756_fu_39488_p2() {
    p_Val2_3756_fu_39488_p2 = (!tmp_10031_cast_fu_39472_p1.read().is_01() || !tmp1955_cast_fu_39484_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_10031_cast_fu_39472_p1.read()) + sc_biguint<52>(tmp1955_cast_fu_39484_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3757_fu_39521_p2() {
    p_Val2_3757_fu_39521_p2 = (!ap_const_lv59_10.is_01() || !tmp_5350_fu_39517_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5350_fu_39517_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3760_fu_39541_p2() {
    p_Val2_3760_fu_39541_p2 = (!tmp_10041_cast_fu_39538_p1.read().is_01() || !tmp_5351_fu_39531_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_10041_cast_fu_39538_p1.read()) + sc_biguint<108>(tmp_5351_fu_39531_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3764_fu_50369_p3() {
    p_Val2_3764_fu_50369_p3 = esl_concat<54,17>(tmp_7186_reg_92444.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3765_fu_21365_p4() {
    p_Val2_3765_fu_21365_p4 = p_Val2_2275_fu_21339_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_3767_fu_50408_p3() {
    p_Val2_3767_fu_50408_p3 = (!tmp_7188_fu_50379_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7188_fu_50379_p3.read()[0].to_bool())? tmp_5383_fu_50395_p4.read(): tmp_5384_fu_50404_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3768_fu_50432_p2() {
    p_Val2_3768_fu_50432_p2 = (!tmp_10099_cast_fu_50424_p1.read().is_01() || !tmp_5386_fu_50428_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_10099_cast_fu_50424_p1.read()) + sc_biguint<77>(tmp_5386_fu_50428_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3770_fu_50457_p2() {
    p_Val2_3770_fu_50457_p2 = (!tmp_5387_fu_50451_p1.read().is_01() || !tmp_5388_fu_50454_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5387_fu_50451_p1.read()) - sc_biguint<78>(tmp_5388_fu_50454_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3774_fu_50493_p3() {
    p_Val2_3774_fu_50493_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3771_reg_92477.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3775_fu_50515_p2() {
    p_Val2_3775_fu_50515_p2 = (!tmp_10108_cast_fu_50507_p1.read().is_01() || !tmp_5392_fu_50511_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_10108_cast_fu_50507_p1.read()) + sc_biguint<82>(tmp_5392_fu_50511_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3777_fu_50547_p2() {
    p_Val2_3777_fu_50547_p2 = (!tmp_5393_fu_50533_p1.read().is_01() || !tmp_10112_cast_fu_50543_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5393_fu_50533_p1.read()) - sc_biguint<83>(tmp_10112_cast_fu_50543_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3779_fu_50576_p4() {
    p_Val2_3779_fu_50576_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7189_reg_92519.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3780_fu_50600_p2() {
    p_Val2_3780_fu_50600_p2 = (!tmp_10117_cast_fu_50592_p1.read().is_01() || !tmp_5397_fu_50596_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_10117_cast_fu_50592_p1.read()) + sc_biguint<102>(tmp_5397_fu_50596_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3782_fu_50633_p2() {
    p_Val2_3782_fu_50633_p2 = (!tmp_5398_fu_50619_p1.read().is_01() || !tmp_10121_cast_fu_50629_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5398_fu_50619_p1.read()) - sc_biguint<103>(tmp_10121_cast_fu_50629_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3786_fu_50669_p3() {
    p_Val2_3786_fu_50669_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3783_reg_92555.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3787_fu_50691_p2() {
    p_Val2_3787_fu_50691_p2 = (!tmp_10127_cast_fu_50683_p1.read().is_01() || !tmp_5403_fu_50687_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_10127_cast_fu_50683_p1.read()) + sc_biguint<121>(tmp_5403_fu_50687_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3790_fu_50723_p2() {
    p_Val2_3790_fu_50723_p2 = (!tmp_5404_fu_50709_p1.read().is_01() || !tmp_10131_cast_fu_50719_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5404_fu_50709_p1.read()) - sc_biguint<122>(tmp_10131_cast_fu_50719_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3794_fu_50759_p3() {
    p_Val2_3794_fu_50759_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3791_reg_92592.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3795_fu_50781_p2() {
    p_Val2_3795_fu_50781_p2 = (!tmp_10137_cast_fu_50773_p1.read().is_01() || !tmp_5409_fu_50777_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_10137_cast_fu_50773_p1.read()) + sc_biguint<126>(tmp_5409_fu_50777_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3797_fu_50813_p2() {
    p_Val2_3797_fu_50813_p2 = (!tmp_5411_fu_50799_p1.read().is_01() || !tmp_10141_cast_fu_50809_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5411_fu_50799_p1.read()) - sc_biguint<127>(tmp_10141_cast_fu_50809_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3800_fu_50849_p3() {
    p_Val2_3800_fu_50849_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3798_reg_92629.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3801_fu_50871_p2() {
    p_Val2_3801_fu_50871_p2 = (!tmp_10147_cast_fu_50863_p1.read().is_01() || !tmp_5419_fu_50867_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_10147_cast_fu_50863_p1.read()) + sc_biguint<131>(tmp_5419_fu_50867_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3803_fu_50903_p2() {
    p_Val2_3803_fu_50903_p2 = (!tmp_5420_fu_50889_p1.read().is_01() || !tmp_10151_cast_fu_50899_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5420_fu_50889_p1.read()) - sc_biguint<132>(tmp_10151_cast_fu_50899_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3806_fu_50939_p3() {
    p_Val2_3806_fu_50939_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3804_reg_92666.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3807_fu_50961_p2() {
    p_Val2_3807_fu_50961_p2 = (!tmp_10157_cast_fu_50953_p1.read().is_01() || !tmp_5425_fu_50957_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_10157_cast_fu_50953_p1.read()) + sc_biguint<136>(tmp_5425_fu_50957_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3809_fu_51034_p2() {
    p_Val2_3809_fu_51034_p2 = (!tmp_5426_fu_51020_p1.read().is_01() || !tmp_10161_cast_fu_51030_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5426_fu_51020_p1.read()) - sc_biguint<137>(tmp_10161_cast_fu_51030_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3810_fu_51137_p2() {
    p_Val2_3810_fu_51137_p2 = (!tmp1895_cast_fu_51134_p1.read().is_01() || !tmp1892_fu_51129_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1895_cast_fu_51134_p1.read()) + sc_biguint<109>(tmp1892_fu_51129_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3811_fu_51170_p2() {
    p_Val2_3811_fu_51170_p2 = (!tmp_10169_cast_fu_51163_p1.read().is_01() || !tmp_10170_cast_fu_51167_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_10169_cast_fu_51163_p1.read()) - sc_biguint<118>(tmp_10170_cast_fu_51167_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3812_fu_51215_p1() {
    p_Val2_3812_fu_51215_p1 = esl_sext<121,73>(tmp_5433_reg_92799.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3813_fu_51201_p2() {
    p_Val2_3813_fu_51201_p2 = (!tmp_10174_cast_fu_51193_p1.read().is_01() || !tmp_5435_fu_51197_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_10174_cast_fu_51193_p1.read()) + sc_biguint<122>(tmp_5435_fu_51197_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3814_fu_51228_p2() {
    p_Val2_3814_fu_51228_p2 = (!tmp_5436_fu_51218_p1.read().is_01() || !tmp_5437_fu_51221_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5436_fu_51218_p1.read()) + sc_biguint<123>(tmp_5437_fu_51221_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3815_fu_51292_p3() {
    p_Val2_3815_fu_51292_p3 = esl_concat<78,52>(tmp_5439_reg_92825.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3821_fu_51398_p2() {
    p_Val2_3821_fu_51398_p2 = (!tmp_5447_fu_51392_p1.read().is_01() || !tmp_5448_fu_51395_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5447_fu_51392_p1.read()) - sc_bigint<72>(tmp_5448_fu_51395_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3826_fu_51522_p2() {
    p_Val2_3826_fu_51522_p2 = (!tmp1898_cast_fu_51518_p1.read().is_01() || !tmp_5456_fu_51507_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1898_cast_fu_51518_p1.read()) + sc_biguint<44>(tmp_5456_fu_51507_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3828_fu_51591_p2() {
    p_Val2_3828_fu_51591_p2 = (!tmp1899_cast_fu_51587_p1.read().is_01() || !tmp_10304_cast_fu_51575_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1899_cast_fu_51587_p1.read()) + sc_biguint<52>(tmp_10304_cast_fu_51575_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3829_fu_51624_p2() {
    p_Val2_3829_fu_51624_p2 = (!ap_const_lv59_10.is_01() || !tmp_5465_fu_51620_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5465_fu_51620_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3831_fu_51640_p2() {
    p_Val2_3831_fu_51640_p2 = (!tmp_5466_fu_51630_p3.read().is_01() || !tmp_10314_cast_fu_51637_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5466_fu_51630_p3.read()) + sc_biguint<108>(tmp_10314_cast_fu_51637_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3832_fu_51646_p4() {
    p_Val2_3832_fu_51646_p4 = p_Val2_3831_fu_51640_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_3833_fu_51687_p3() {
    p_Val2_3833_fu_51687_p3 = (!tmp_7198_fu_51656_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7198_fu_51656_p3.read()[0].to_bool())? p_Val2_3832_fu_51646_p4.read(): tmp_5468_fu_51674_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3836_fu_40013_p3() {
    p_Val2_3836_fu_40013_p3 = esl_concat<54,17>(tmp_7201_reg_87981.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3838_fu_40052_p3() {
    p_Val2_3838_fu_40052_p3 = (!tmp_7203_fu_40023_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7203_fu_40023_p3.read()[0].to_bool())? tmp_5471_fu_40039_p4.read(): tmp_5472_fu_40048_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3839_fu_40076_p2() {
    p_Val2_3839_fu_40076_p2 = (!tmp_10193_cast_fu_40068_p1.read().is_01() || !tmp_5474_fu_40072_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_10193_cast_fu_40068_p1.read()) + sc_biguint<77>(tmp_5474_fu_40072_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3841_fu_40101_p2() {
    p_Val2_3841_fu_40101_p2 = (!tmp_5475_fu_40095_p1.read().is_01() || !tmp_5476_fu_40098_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5475_fu_40095_p1.read()) - sc_biguint<78>(tmp_5476_fu_40098_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3844_fu_40137_p3() {
    p_Val2_3844_fu_40137_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3842_reg_88014.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3845_fu_40159_p2() {
    p_Val2_3845_fu_40159_p2 = (!tmp_10202_cast_fu_40151_p1.read().is_01() || !tmp_5480_fu_40155_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_10202_cast_fu_40151_p1.read()) + sc_biguint<82>(tmp_5480_fu_40155_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3847_fu_40191_p2() {
    p_Val2_3847_fu_40191_p2 = (!tmp_5481_fu_40177_p1.read().is_01() || !tmp_10206_cast_fu_40187_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5481_fu_40177_p1.read()) - sc_biguint<83>(tmp_10206_cast_fu_40187_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3849_fu_40220_p4() {
    p_Val2_3849_fu_40220_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7204_reg_88056.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3850_fu_40244_p2() {
    p_Val2_3850_fu_40244_p2 = (!tmp_10211_cast_fu_40236_p1.read().is_01() || !tmp_5485_fu_40240_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_10211_cast_fu_40236_p1.read()) + sc_biguint<102>(tmp_5485_fu_40240_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3852_fu_40277_p2() {
    p_Val2_3852_fu_40277_p2 = (!tmp_5486_fu_40263_p1.read().is_01() || !tmp_10215_cast_fu_40273_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5486_fu_40263_p1.read()) - sc_biguint<103>(tmp_10215_cast_fu_40273_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3855_cast_fu_19552_p1() {
    p_Val2_3855_cast_fu_19552_p1 = esl_sext<121,109>(p_Val2_2129_reg_79023.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3855_fu_40313_p3() {
    p_Val2_3855_fu_40313_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3853_reg_88092.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3856_fu_40335_p2() {
    p_Val2_3856_fu_40335_p2 = (!tmp_10221_cast_fu_40327_p1.read().is_01() || !tmp_5491_fu_40331_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_10221_cast_fu_40327_p1.read()) + sc_biguint<121>(tmp_5491_fu_40331_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3858_fu_40367_p2() {
    p_Val2_3858_fu_40367_p2 = (!tmp_5493_fu_40353_p1.read().is_01() || !tmp_10225_cast_fu_40363_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5493_fu_40353_p1.read()) - sc_biguint<122>(tmp_10225_cast_fu_40363_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3861_fu_40403_p3() {
    p_Val2_3861_fu_40403_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3859_reg_88129.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3862_fu_40425_p2() {
    p_Val2_3862_fu_40425_p2 = (!tmp_10231_cast_fu_40417_p1.read().is_01() || !tmp_5498_fu_40421_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_10231_cast_fu_40417_p1.read()) + sc_biguint<126>(tmp_5498_fu_40421_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3864_fu_40457_p2() {
    p_Val2_3864_fu_40457_p2 = (!tmp_5499_fu_40443_p1.read().is_01() || !tmp_10235_cast_fu_40453_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5499_fu_40443_p1.read()) - sc_biguint<127>(tmp_10235_cast_fu_40453_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3867_fu_40493_p3() {
    p_Val2_3867_fu_40493_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3865_reg_88166.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3868_fu_40515_p2() {
    p_Val2_3868_fu_40515_p2 = (!tmp_10241_cast_fu_40507_p1.read().is_01() || !tmp_5504_fu_40511_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_10241_cast_fu_40507_p1.read()) + sc_biguint<131>(tmp_5504_fu_40511_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3870_fu_40547_p2() {
    p_Val2_3870_fu_40547_p2 = (!tmp_5505_fu_40533_p1.read().is_01() || !tmp_10245_cast_fu_40543_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5505_fu_40533_p1.read()) - sc_biguint<132>(tmp_10245_cast_fu_40543_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3871_fu_9812_p1() {
    p_Val2_3871_fu_9812_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_3874_fu_40583_p3() {
    p_Val2_3874_fu_40583_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3872_reg_88203.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3875_fu_40605_p2() {
    p_Val2_3875_fu_40605_p2 = (!tmp_10251_cast_fu_40597_p1.read().is_01() || !tmp_5510_fu_40601_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_10251_cast_fu_40597_p1.read()) + sc_biguint<136>(tmp_5510_fu_40601_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3877_fu_40678_p2() {
    p_Val2_3877_fu_40678_p2 = (!tmp_5511_fu_40664_p1.read().is_01() || !tmp_10255_cast_fu_40674_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5511_fu_40664_p1.read()) - sc_biguint<137>(tmp_10255_cast_fu_40674_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3878_fu_40781_p2() {
    p_Val2_3878_fu_40781_p2 = (!tmp1960_cast_fu_40778_p1.read().is_01() || !tmp1957_fu_40773_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1960_cast_fu_40778_p1.read()) + sc_biguint<109>(tmp1957_fu_40773_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3879_fu_40814_p2() {
    p_Val2_3879_fu_40814_p2 = (!tmp_10263_cast_fu_40807_p1.read().is_01() || !tmp_10264_cast_fu_40811_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_10263_cast_fu_40807_p1.read()) - sc_biguint<118>(tmp_10264_cast_fu_40811_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3882_fu_40859_p1() {
    p_Val2_3882_fu_40859_p1 = esl_sext<121,73>(tmp_5520_reg_88336.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3883_fu_40845_p2() {
    p_Val2_3883_fu_40845_p2 = (!tmp_10268_cast_fu_40837_p1.read().is_01() || !tmp_5523_fu_40841_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_10268_cast_fu_40837_p1.read()) + sc_biguint<122>(tmp_5523_fu_40841_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3884_fu_40872_p2() {
    p_Val2_3884_fu_40872_p2 = (!tmp_5524_fu_40862_p1.read().is_01() || !tmp_5525_fu_40865_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5524_fu_40862_p1.read()) + sc_biguint<123>(tmp_5525_fu_40865_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3885_fu_40936_p3() {
    p_Val2_3885_fu_40936_p3 = esl_concat<78,52>(tmp_5527_reg_88362.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3892_fu_41042_p2() {
    p_Val2_3892_fu_41042_p2 = (!tmp_5534_fu_41036_p1.read().is_01() || !tmp_5536_fu_41039_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5534_fu_41036_p1.read()) - sc_bigint<72>(tmp_5536_fu_41039_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3897_fu_41166_p2() {
    p_Val2_3897_fu_41166_p2 = (!tmp1963_cast_fu_41162_p1.read().is_01() || !tmp_5544_fu_41151_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1963_cast_fu_41162_p1.read()) + sc_biguint<44>(tmp_5544_fu_41151_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3900_fu_41235_p2() {
    p_Val2_3900_fu_41235_p2 = (!tmp1964_cast_fu_41231_p1.read().is_01() || !tmp_10339_cast_fu_41219_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1964_cast_fu_41231_p1.read()) + sc_biguint<52>(tmp_10339_cast_fu_41219_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3901_fu_41268_p2() {
    p_Val2_3901_fu_41268_p2 = (!ap_const_lv59_10.is_01() || !tmp_5552_fu_41264_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5552_fu_41264_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3902_fu_10126_p2() {
    p_Val2_3902_fu_10126_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2300_reg_74975.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_3904_fu_41284_p2() {
    p_Val2_3904_fu_41284_p2 = (!tmp_5553_fu_41274_p3.read().is_01() || !tmp_10349_cast_fu_41281_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5553_fu_41274_p3.read()) + sc_biguint<108>(tmp_10349_cast_fu_41281_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3906_fu_41290_p4() {
    p_Val2_3906_fu_41290_p4 = p_Val2_3904_fu_41284_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_3907_fu_41331_p3() {
    p_Val2_3907_fu_41331_p3 = (!tmp_7213_fu_41300_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7213_fu_41300_p3.read()[0].to_bool())? p_Val2_3906_fu_41290_p4.read(): tmp_5555_fu_41318_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3910_fu_62412_p3() {
    p_Val2_3910_fu_62412_p3 = esl_concat<54,17>(tmp_7222_reg_97595.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3913_fu_62451_p3() {
    p_Val2_3913_fu_62451_p3 = (!tmp_7224_fu_62422_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7224_fu_62422_p3.read()[0].to_bool())? tmp_5589_fu_62438_p4.read(): tmp_5590_fu_62447_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3914_fu_62475_p2() {
    p_Val2_3914_fu_62475_p2 = (!tmp_10975_cast_fu_62467_p1.read().is_01() || !tmp_5592_fu_62471_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_10975_cast_fu_62467_p1.read()) + sc_biguint<77>(tmp_5592_fu_62471_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3918_fu_62500_p2() {
    p_Val2_3918_fu_62500_p2 = (!tmp_5593_fu_62494_p1.read().is_01() || !tmp_5594_fu_62497_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5593_fu_62494_p1.read()) - sc_biguint<78>(tmp_5594_fu_62497_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3921_fu_62536_p3() {
    p_Val2_3921_fu_62536_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3919_reg_97628.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3922_cast_fu_9195_p1() {
    p_Val2_3922_cast_fu_9195_p1 = esl_sext<121,109>(p_Val2_2196_reg_74584.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3922_fu_62558_p2() {
    p_Val2_3922_fu_62558_p2 = (!tmp_10984_cast_fu_62550_p1.read().is_01() || !tmp_5598_fu_62554_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_10984_cast_fu_62550_p1.read()) + sc_biguint<82>(tmp_5598_fu_62554_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3925_fu_62590_p2() {
    p_Val2_3925_fu_62590_p2 = (!tmp_5599_fu_62576_p1.read().is_01() || !tmp_10988_cast_fu_62586_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5599_fu_62576_p1.read()) - sc_biguint<83>(tmp_10988_cast_fu_62586_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3927_cast1_fu_9276_p2() {
    p_Val2_3927_cast1_fu_9276_p2 = (!tmp_3058_fu_9267_p1.read().is_01() || !tmp_4047_reg_74610.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_3058_fu_9267_p1.read()) + sc_biguint<120>(tmp_4047_reg_74610.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3927_cast_fu_9281_p2() {
    p_Val2_3927_cast_fu_9281_p2 = (!p_Val2_2198_fu_9257_p1.read().is_01() || !tmp_4031_reg_74605.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2198_fu_9257_p1.read()) + sc_biguint<121>(tmp_4031_reg_74605.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3927_fu_62619_p4() {
    p_Val2_3927_fu_62619_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7225_reg_97670.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3928_fu_62643_p2() {
    p_Val2_3928_fu_62643_p2 = (!tmp_10993_cast_fu_62635_p1.read().is_01() || !tmp_5603_fu_62639_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_10993_cast_fu_62635_p1.read()) + sc_biguint<102>(tmp_5603_fu_62639_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3930_fu_62676_p2() {
    p_Val2_3930_fu_62676_p2 = (!tmp_5604_fu_62662_p1.read().is_01() || !tmp_10997_cast_fu_62672_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5604_fu_62662_p1.read()) - sc_biguint<103>(tmp_10997_cast_fu_62672_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3934_fu_62712_p3() {
    p_Val2_3934_fu_62712_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_3932_reg_97706.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3935_fu_62734_p2() {
    p_Val2_3935_fu_62734_p2 = (!tmp_11003_cast_fu_62726_p1.read().is_01() || !tmp_5613_fu_62730_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_11003_cast_fu_62726_p1.read()) + sc_biguint<121>(tmp_5613_fu_62730_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3937_fu_62766_p2() {
    p_Val2_3937_fu_62766_p2 = (!tmp_5614_fu_62752_p1.read().is_01() || !tmp_11007_cast_fu_62762_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5614_fu_62752_p1.read()) - sc_biguint<122>(tmp_11007_cast_fu_62762_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3941_fu_62802_p3() {
    p_Val2_3941_fu_62802_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_3939_reg_97743.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3942_fu_62824_p2() {
    p_Val2_3942_fu_62824_p2 = (!tmp_11013_cast_fu_62816_p1.read().is_01() || !tmp_5619_fu_62820_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_11013_cast_fu_62816_p1.read()) + sc_biguint<126>(tmp_5619_fu_62820_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3944_fu_62856_p2() {
    p_Val2_3944_fu_62856_p2 = (!tmp_5620_fu_62842_p1.read().is_01() || !tmp_11017_cast_fu_62852_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5620_fu_62842_p1.read()) - sc_biguint<127>(tmp_11017_cast_fu_62852_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3945_fu_11018_p1() {
    p_Val2_3945_fu_11018_p1 = p_Val2_2341_fu_10982_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3948_fu_62892_p3() {
    p_Val2_3948_fu_62892_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_3946_reg_97780.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3949_fu_62914_p2() {
    p_Val2_3949_fu_62914_p2 = (!tmp_11023_cast_fu_62906_p1.read().is_01() || !tmp_5627_fu_62910_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_11023_cast_fu_62906_p1.read()) + sc_biguint<131>(tmp_5627_fu_62910_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3951_fu_62946_p2() {
    p_Val2_3951_fu_62946_p2 = (!tmp_5628_fu_62932_p1.read().is_01() || !tmp_11027_cast_fu_62942_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5628_fu_62932_p1.read()) - sc_biguint<132>(tmp_11027_cast_fu_62942_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3954_fu_62982_p3() {
    p_Val2_3954_fu_62982_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_3952_reg_97817.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3955_fu_63004_p2() {
    p_Val2_3955_fu_63004_p2 = (!tmp_11033_cast_fu_62996_p1.read().is_01() || !tmp_5633_fu_63000_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_11033_cast_fu_62996_p1.read()) + sc_biguint<136>(tmp_5633_fu_63000_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3958_fu_63083_p2() {
    p_Val2_3958_fu_63083_p2 = (!tmp_5634_fu_63069_p1.read().is_01() || !tmp_11037_cast_fu_63079_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5634_fu_63069_p1.read()) - sc_biguint<137>(tmp_11037_cast_fu_63079_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3959_fu_63186_p2() {
    p_Val2_3959_fu_63186_p2 = (!tmp1978_cast_fu_63183_p1.read().is_01() || !tmp1975_fu_63178_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1978_cast_fu_63183_p1.read()) + sc_biguint<109>(tmp1975_fu_63178_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3960_fu_63219_p2() {
    p_Val2_3960_fu_63219_p2 = (!tmp_11045_cast_fu_63212_p1.read().is_01() || !tmp_11046_cast_fu_63216_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11045_cast_fu_63212_p1.read()) - sc_biguint<118>(tmp_11046_cast_fu_63216_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3961_fu_11008_p4() {
    p_Val2_3961_fu_11008_p4 = p_Val2_2341_fu_10982_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_3962_fu_63264_p1() {
    p_Val2_3962_fu_63264_p1 = esl_sext<121,73>(tmp_5641_reg_97955.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3963_fu_63250_p2() {
    p_Val2_3963_fu_63250_p2 = (!tmp_11050_cast_fu_63242_p1.read().is_01() || !tmp_5643_fu_63246_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_11050_cast_fu_63242_p1.read()) + sc_biguint<122>(tmp_5643_fu_63246_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3964_fu_63277_p2() {
    p_Val2_3964_fu_63277_p2 = (!tmp_5644_fu_63267_p1.read().is_01() || !tmp_5645_fu_63270_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5644_fu_63267_p1.read()) + sc_biguint<123>(tmp_5645_fu_63270_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3968_fu_63341_p3() {
    p_Val2_3968_fu_63341_p3 = esl_concat<78,52>(tmp_5647_reg_97981.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3975_fu_63447_p2() {
    p_Val2_3975_fu_63447_p2 = (!tmp_5653_fu_63441_p1.read().is_01() || !tmp_5654_fu_63444_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5653_fu_63441_p1.read()) - sc_bigint<72>(tmp_5654_fu_63444_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3980_fu_63571_p2() {
    p_Val2_3980_fu_63571_p2 = (!tmp1981_cast_fu_63567_p1.read().is_01() || !tmp_5662_fu_63556_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1981_cast_fu_63567_p1.read()) + sc_biguint<44>(tmp_5662_fu_63556_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3982_fu_63640_p2() {
    p_Val2_3982_fu_63640_p2 = (!tmp1982_cast_fu_63636_p1.read().is_01() || !tmp_11180_cast_fu_63624_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1982_cast_fu_63636_p1.read()) + sc_biguint<52>(tmp_11180_cast_fu_63624_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3983_fu_63673_p2() {
    p_Val2_3983_fu_63673_p2 = (!ap_const_lv59_10.is_01() || !tmp_5671_fu_63669_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5671_fu_63669_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3985_fu_63689_p2() {
    p_Val2_3985_fu_63689_p2 = (!tmp_5672_fu_63679_p3.read().is_01() || !tmp_11190_cast_fu_63686_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5672_fu_63679_p3.read()) + sc_biguint<108>(tmp_11190_cast_fu_63686_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3986_fu_63695_p4() {
    p_Val2_3986_fu_63695_p4 = p_Val2_3985_fu_63689_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_3987_fu_63736_p3() {
    p_Val2_3987_fu_63736_p3 = (!tmp_7234_fu_63705_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7234_fu_63705_p3.read()[0].to_bool())? p_Val2_3986_fu_63695_p4.read(): tmp_5674_fu_63723_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3990_fu_52044_p3() {
    p_Val2_3990_fu_52044_p3 = esl_concat<54,17>(tmp_7237_reg_93140.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_3992_fu_52083_p3() {
    p_Val2_3992_fu_52083_p3 = (!tmp_7239_fu_52054_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7239_fu_52054_p3.read()[0].to_bool())? tmp_5677_fu_52070_p4.read(): tmp_5678_fu_52079_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3993_fu_52107_p2() {
    p_Val2_3993_fu_52107_p2 = (!tmp_11069_cast_fu_52099_p1.read().is_01() || !tmp_5680_fu_52103_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_11069_cast_fu_52099_p1.read()) + sc_biguint<77>(tmp_5680_fu_52103_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3995_fu_52132_p2() {
    p_Val2_3995_fu_52132_p2 = (!tmp_5681_fu_52126_p1.read().is_01() || !tmp_5682_fu_52129_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5681_fu_52126_p1.read()) - sc_biguint<78>(tmp_5682_fu_52129_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_3998_fu_52168_p3() {
    p_Val2_3998_fu_52168_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_3996_reg_93173.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_3999_fu_52190_p2() {
    p_Val2_3999_fu_52190_p2 = (!tmp_11078_cast_fu_52182_p1.read().is_01() || !tmp_5686_fu_52186_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_11078_cast_fu_52182_p1.read()) + sc_biguint<82>(tmp_5686_fu_52186_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4001_fu_52222_p2() {
    p_Val2_4001_fu_52222_p2 = (!tmp_5687_fu_52208_p1.read().is_01() || !tmp_11082_cast_fu_52218_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5687_fu_52208_p1.read()) - sc_biguint<83>(tmp_11082_cast_fu_52218_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4003_fu_52251_p4() {
    p_Val2_4003_fu_52251_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7240_reg_93215.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4004_fu_52275_p2() {
    p_Val2_4004_fu_52275_p2 = (!tmp_11087_cast_fu_52267_p1.read().is_01() || !tmp_5691_fu_52271_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_11087_cast_fu_52267_p1.read()) + sc_biguint<102>(tmp_5691_fu_52271_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4006_fu_52308_p2() {
    p_Val2_4006_fu_52308_p2 = (!tmp_5692_fu_52294_p1.read().is_01() || !tmp_11091_cast_fu_52304_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5692_fu_52294_p1.read()) - sc_biguint<103>(tmp_11091_cast_fu_52304_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4009_fu_52344_p3() {
    p_Val2_4009_fu_52344_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4007_reg_93251.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4010_fu_52366_p2() {
    p_Val2_4010_fu_52366_p2 = (!tmp_11097_cast_fu_52358_p1.read().is_01() || !tmp_5700_fu_52362_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_11097_cast_fu_52358_p1.read()) + sc_biguint<121>(tmp_5700_fu_52362_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4012_fu_52398_p2() {
    p_Val2_4012_fu_52398_p2 = (!tmp_5701_fu_52384_p1.read().is_01() || !tmp_11101_cast_fu_52394_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5701_fu_52384_p1.read()) - sc_biguint<122>(tmp_11101_cast_fu_52394_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4015_fu_52434_p3() {
    p_Val2_4015_fu_52434_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4013_reg_93288.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4016_fu_52456_p2() {
    p_Val2_4016_fu_52456_p2 = (!tmp_11107_cast_fu_52448_p1.read().is_01() || !tmp_5706_fu_52452_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_11107_cast_fu_52448_p1.read()) + sc_biguint<126>(tmp_5706_fu_52452_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4018_fu_52488_p2() {
    p_Val2_4018_fu_52488_p2 = (!tmp_5707_fu_52474_p1.read().is_01() || !tmp_11111_cast_fu_52484_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5707_fu_52474_p1.read()) - sc_biguint<127>(tmp_11111_cast_fu_52484_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4021_fu_52524_p3() {
    p_Val2_4021_fu_52524_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4019_reg_93325.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4022_fu_52546_p2() {
    p_Val2_4022_fu_52546_p2 = (!tmp_11117_cast_fu_52538_p1.read().is_01() || !tmp_5714_fu_52542_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_11117_cast_fu_52538_p1.read()) + sc_biguint<131>(tmp_5714_fu_52542_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4024_fu_52578_p2() {
    p_Val2_4024_fu_52578_p2 = (!tmp_5715_fu_52564_p1.read().is_01() || !tmp_11121_cast_fu_52574_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5715_fu_52564_p1.read()) - sc_biguint<132>(tmp_11121_cast_fu_52574_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4027_fu_52614_p3() {
    p_Val2_4027_fu_52614_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4025_reg_93362.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4028_fu_52636_p2() {
    p_Val2_4028_fu_52636_p2 = (!tmp_11127_cast_fu_52628_p1.read().is_01() || !tmp_5720_fu_52632_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_11127_cast_fu_52628_p1.read()) + sc_biguint<136>(tmp_5720_fu_52632_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4030_fu_52715_p2() {
    p_Val2_4030_fu_52715_p2 = (!tmp_5721_fu_52701_p1.read().is_01() || !tmp_11131_cast_fu_52711_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5721_fu_52701_p1.read()) - sc_biguint<137>(tmp_11131_cast_fu_52711_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4031_fu_52818_p2() {
    p_Val2_4031_fu_52818_p2 = (!tmp2043_cast_fu_52815_p1.read().is_01() || !tmp2040_fu_52810_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2043_cast_fu_52815_p1.read()) + sc_biguint<109>(tmp2040_fu_52810_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4032_fu_52851_p2() {
    p_Val2_4032_fu_52851_p2 = (!tmp_11139_cast_fu_52844_p1.read().is_01() || !tmp_11140_cast_fu_52848_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11139_cast_fu_52844_p1.read()) - sc_biguint<118>(tmp_11140_cast_fu_52848_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4033_fu_52896_p1() {
    p_Val2_4033_fu_52896_p1 = esl_sext<121,73>(tmp_5728_reg_93500.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4034_fu_52882_p2() {
    p_Val2_4034_fu_52882_p2 = (!tmp_11144_cast_fu_52874_p1.read().is_01() || !tmp_5730_fu_52878_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_11144_cast_fu_52874_p1.read()) + sc_biguint<122>(tmp_5730_fu_52878_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4035_fu_52909_p2() {
    p_Val2_4035_fu_52909_p2 = (!tmp_5732_fu_52899_p1.read().is_01() || !tmp_5733_fu_52902_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5732_fu_52899_p1.read()) + sc_biguint<123>(tmp_5733_fu_52902_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4036_fu_52973_p3() {
    p_Val2_4036_fu_52973_p3 = esl_concat<78,52>(tmp_5736_reg_93526.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4039_cast_fu_21103_p1() {
    p_Val2_4039_cast_fu_21103_p1 = esl_sext<121,109>(p_Val2_2264_reg_79710.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4042_fu_53079_p2() {
    p_Val2_4042_fu_53079_p2 = (!tmp_5742_fu_53073_p1.read().is_01() || !tmp_5743_fu_53076_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5742_fu_53073_p1.read()) - sc_bigint<72>(tmp_5743_fu_53076_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4047_fu_53203_p2() {
    p_Val2_4047_fu_53203_p2 = (!tmp2046_cast_fu_53199_p1.read().is_01() || !tmp_5753_fu_53188_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2046_cast_fu_53199_p1.read()) + sc_biguint<44>(tmp_5753_fu_53188_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4049_fu_53272_p2() {
    p_Val2_4049_fu_53272_p2 = (!tmp2047_cast_fu_53268_p1.read().is_01() || !tmp_11215_cast_fu_53256_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2047_cast_fu_53268_p1.read()) + sc_biguint<52>(tmp_11215_cast_fu_53256_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4050_fu_53305_p2() {
    p_Val2_4050_fu_53305_p2 = (!ap_const_lv59_10.is_01() || !tmp_5761_fu_53301_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5761_fu_53301_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4054_fu_53321_p2() {
    p_Val2_4054_fu_53321_p2 = (!tmp_5762_fu_53311_p3.read().is_01() || !tmp_11225_cast_fu_53318_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_5762_fu_53311_p3.read()) + sc_biguint<108>(tmp_11225_cast_fu_53318_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4055_fu_53327_p4() {
    p_Val2_4055_fu_53327_p4 = p_Val2_4054_fu_53321_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4056_fu_53368_p3() {
    p_Val2_4056_fu_53368_p3 = (!tmp_7249_fu_53337_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7249_fu_53337_p3.read()[0].to_bool())? p_Val2_4055_fu_53327_p4.read(): tmp_5764_fu_53355_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4061_fu_63931_p3() {
    p_Val2_4061_fu_63931_p3 = esl_concat<54,17>(tmp_7258_reg_98266.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4063_fu_63970_p3() {
    p_Val2_4063_fu_63970_p3 = (!tmp_7260_fu_63941_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7260_fu_63941_p3.read()[0].to_bool())? tmp_5783_fu_63957_p4.read(): tmp_5784_fu_63966_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4064_fu_63994_p2() {
    p_Val2_4064_fu_63994_p2 = (!tmp_5788_fu_63990_p1.read().is_01() || !tmp_11277_cast_fu_63986_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_5788_fu_63990_p1.read()) + sc_biguint<77>(tmp_11277_cast_fu_63986_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4066_fu_64019_p2() {
    p_Val2_4066_fu_64019_p2 = (!tmp_5789_fu_64013_p1.read().is_01() || !tmp_5790_fu_64016_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5789_fu_64013_p1.read()) - sc_biguint<78>(tmp_5790_fu_64016_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4069_fu_64055_p3() {
    p_Val2_4069_fu_64055_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4067_reg_98299.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4070_fu_64077_p2() {
    p_Val2_4070_fu_64077_p2 = (!tmp_5794_fu_64073_p1.read().is_01() || !tmp_11286_cast_fu_64069_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_5794_fu_64073_p1.read()) + sc_biguint<82>(tmp_11286_cast_fu_64069_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4073_fu_22240_p2() {
    p_Val2_4073_fu_22240_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2365_reg_80155.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4074_fu_64109_p2() {
    p_Val2_4074_fu_64109_p2 = (!tmp_5795_fu_64095_p1.read().is_01() || !tmp_11290_cast_fu_64105_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5795_fu_64095_p1.read()) - sc_biguint<83>(tmp_11290_cast_fu_64105_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4076_fu_64138_p4() {
    p_Val2_4076_fu_64138_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7261_reg_98341.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4077_fu_64162_p2() {
    p_Val2_4077_fu_64162_p2 = (!tmp_5799_fu_64158_p1.read().is_01() || !tmp_11295_cast_fu_64154_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_5799_fu_64158_p1.read()) + sc_biguint<102>(tmp_11295_cast_fu_64154_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4079_fu_64195_p2() {
    p_Val2_4079_fu_64195_p2 = (!tmp_5800_fu_64181_p1.read().is_01() || !tmp_11299_cast_fu_64191_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5800_fu_64181_p1.read()) - sc_biguint<103>(tmp_11299_cast_fu_64191_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4083_fu_64231_p3() {
    p_Val2_4083_fu_64231_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4080_reg_98377.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4084_fu_64253_p2() {
    p_Val2_4084_fu_64253_p2 = (!tmp_5805_fu_64249_p1.read().is_01() || !tmp_11305_cast_fu_64245_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_5805_fu_64249_p1.read()) + sc_biguint<121>(tmp_11305_cast_fu_64245_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4087_fu_64285_p2() {
    p_Val2_4087_fu_64285_p2 = (!tmp_5806_fu_64271_p1.read().is_01() || !tmp_11309_cast_fu_64281_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5806_fu_64271_p1.read()) - sc_biguint<122>(tmp_11309_cast_fu_64281_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4091_fu_64321_p3() {
    p_Val2_4091_fu_64321_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4089_reg_98414.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4092_fu_64343_p2() {
    p_Val2_4092_fu_64343_p2 = (!tmp_5811_fu_64339_p1.read().is_01() || !tmp_11315_cast_fu_64335_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_5811_fu_64339_p1.read()) + sc_biguint<126>(tmp_11315_cast_fu_64335_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4094_fu_64375_p2() {
    p_Val2_4094_fu_64375_p2 = (!tmp_5812_fu_64361_p1.read().is_01() || !tmp_11319_cast_fu_64371_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5812_fu_64361_p1.read()) - sc_biguint<127>(tmp_11319_cast_fu_64371_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4098_fu_64411_p3() {
    p_Val2_4098_fu_64411_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4096_reg_98451.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4099_fu_64433_p2() {
    p_Val2_4099_fu_64433_p2 = (!tmp_5818_fu_64429_p1.read().is_01() || !tmp_11325_cast_fu_64425_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_5818_fu_64429_p1.read()) + sc_biguint<131>(tmp_11325_cast_fu_64425_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4101_fu_64465_p2() {
    p_Val2_4101_fu_64465_p2 = (!tmp_5821_fu_64451_p1.read().is_01() || !tmp_11329_cast_fu_64461_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5821_fu_64451_p1.read()) - sc_biguint<132>(tmp_11329_cast_fu_64461_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4105_fu_64501_p3() {
    p_Val2_4105_fu_64501_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4103_reg_98488.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4106_cast_fu_10746_p1() {
    p_Val2_4106_cast_fu_10746_p1 = esl_sext<121,109>(p_Val2_2330_reg_75271.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4106_fu_64523_p2() {
    p_Val2_4106_fu_64523_p2 = (!tmp_5826_fu_64519_p1.read().is_01() || !tmp_11335_cast_fu_64515_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_5826_fu_64519_p1.read()) + sc_biguint<136>(tmp_11335_cast_fu_64515_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4108_fu_64634_p2() {
    p_Val2_4108_fu_64634_p2 = (!tmp_5827_fu_64620_p1.read().is_01() || !tmp_11339_cast_fu_64630_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5827_fu_64620_p1.read()) - sc_biguint<137>(tmp_11339_cast_fu_64630_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4110_fu_64737_p2() {
    p_Val2_4110_fu_64737_p2 = (!tmp1983_fu_64729_p2.read().is_01() || !tmp1986_cast_fu_64734_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1983_fu_64729_p2.read()) + sc_biguint<109>(tmp1986_cast_fu_64734_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4111_cast_fu_10823_p2() {
    p_Val2_4111_cast_fu_10823_p2 = (!tmp_4481_reg_75292.read().is_01() || !tmp_3268_fu_10814_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_4481_reg_75292.read()) + sc_bigint<120>(tmp_3268_fu_10814_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4111_fu_64770_p2() {
    p_Val2_4111_fu_64770_p2 = (!tmp_11347_cast_fu_64763_p1.read().is_01() || !tmp_11348_cast_fu_64767_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11347_cast_fu_64763_p1.read()) - sc_biguint<118>(tmp_11348_cast_fu_64767_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4112_fu_64811_p1() {
    p_Val2_4112_fu_64811_p1 = esl_sext<121,73>(tmp_5835_reg_98642.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4113_fu_64801_p2() {
    p_Val2_4113_fu_64801_p2 = (!tmp_5838_fu_64797_p1.read().is_01() || !tmp_11352_cast_fu_64793_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5838_fu_64797_p1.read()) + sc_bigint<122>(tmp_11352_cast_fu_64793_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4114_fu_64824_p2() {
    p_Val2_4114_fu_64824_p2 = (!tmp_5840_fu_64817_p1.read().is_01() || !tmp_5839_fu_64814_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5840_fu_64817_p1.read()) + sc_biguint<123>(tmp_5839_fu_64814_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4115_fu_64883_p3() {
    p_Val2_4115_fu_64883_p3 = esl_concat<78,52>(tmp_5842_reg_98663.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4122_fu_64989_p2() {
    p_Val2_4122_fu_64989_p2 = (!tmp_5848_fu_64983_p1.read().is_01() || !tmp_5849_fu_64986_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5848_fu_64983_p1.read()) - sc_bigint<72>(tmp_5849_fu_64986_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4127_fu_65113_p2() {
    p_Val2_4127_fu_65113_p2 = (!tmp_5857_fu_65098_p1.read().is_01() || !tmp1989_cast_fu_65109_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_5857_fu_65098_p1.read()) + sc_biguint<44>(tmp1989_cast_fu_65109_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4128_fu_23082_p1() {
    p_Val2_4128_fu_23082_p1 = p_Val2_2405_fu_23046_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4130_fu_65182_p2() {
    p_Val2_4130_fu_65182_p2 = (!tmp_11482_cast_fu_65166_p1.read().is_01() || !tmp1990_cast_fu_65178_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_11482_cast_fu_65166_p1.read()) + sc_biguint<52>(tmp1990_cast_fu_65178_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4131_fu_65215_p2() {
    p_Val2_4131_fu_65215_p2 = (!ap_const_lv59_10.is_01() || !tmp_5865_fu_65211_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5865_fu_65211_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4134_fu_65253_p2() {
    p_Val2_4134_fu_65253_p2 = (!tmp_11492_cast_fu_65250_p1.read().is_01() || !tmp_5866_fu_65243_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_11492_cast_fu_65250_p1.read()) + sc_biguint<108>(tmp_5866_fu_65243_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4136_fu_23072_p4() {
    p_Val2_4136_fu_23072_p4 = p_Val2_2405_fu_23046_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4141_fu_53588_p3() {
    p_Val2_4141_fu_53588_p3 = esl_concat<54,17>(tmp_7276_reg_93822.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4144_fu_53627_p3() {
    p_Val2_4144_fu_53627_p3 = (!tmp_7278_fu_53598_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7278_fu_53598_p3.read()[0].to_bool())? tmp_5894_fu_53614_p4.read(): tmp_5895_fu_53623_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4145_fu_53651_p2() {
    p_Val2_4145_fu_53651_p2 = (!tmp_5897_fu_53647_p1.read().is_01() || !tmp_11371_cast_fu_53643_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_5897_fu_53647_p1.read()) + sc_biguint<77>(tmp_11371_cast_fu_53643_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4147_fu_53676_p2() {
    p_Val2_4147_fu_53676_p2 = (!tmp_5898_fu_53670_p1.read().is_01() || !tmp_5899_fu_53673_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_5898_fu_53670_p1.read()) - sc_biguint<78>(tmp_5899_fu_53673_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4150_fu_53712_p3() {
    p_Val2_4150_fu_53712_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4148_reg_93855.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4151_fu_53734_p2() {
    p_Val2_4151_fu_53734_p2 = (!tmp_5903_fu_53730_p1.read().is_01() || !tmp_11380_cast_fu_53726_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_5903_fu_53730_p1.read()) + sc_biguint<82>(tmp_11380_cast_fu_53726_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4153_fu_53766_p2() {
    p_Val2_4153_fu_53766_p2 = (!tmp_5904_fu_53752_p1.read().is_01() || !tmp_11384_cast_fu_53762_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_5904_fu_53752_p1.read()) - sc_biguint<83>(tmp_11384_cast_fu_53762_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4155_fu_53795_p4() {
    p_Val2_4155_fu_53795_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7279_reg_93897.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4156_fu_53819_p2() {
    p_Val2_4156_fu_53819_p2 = (!tmp_5908_fu_53815_p1.read().is_01() || !tmp_11389_cast_fu_53811_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_5908_fu_53815_p1.read()) + sc_biguint<102>(tmp_11389_cast_fu_53811_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4159_fu_53852_p2() {
    p_Val2_4159_fu_53852_p2 = (!tmp_5909_fu_53838_p1.read().is_01() || !tmp_11393_cast_fu_53848_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_5909_fu_53838_p1.read()) - sc_biguint<103>(tmp_11393_cast_fu_53848_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4162_fu_53888_p3() {
    p_Val2_4162_fu_53888_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4160_reg_93933.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4163_fu_53910_p2() {
    p_Val2_4163_fu_53910_p2 = (!tmp_5915_fu_53906_p1.read().is_01() || !tmp_11399_cast_fu_53902_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_5915_fu_53906_p1.read()) + sc_biguint<121>(tmp_11399_cast_fu_53902_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4165_fu_53942_p2() {
    p_Val2_4165_fu_53942_p2 = (!tmp_5916_fu_53928_p1.read().is_01() || !tmp_11403_cast_fu_53938_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5916_fu_53928_p1.read()) - sc_biguint<122>(tmp_11403_cast_fu_53938_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4168_fu_53978_p3() {
    p_Val2_4168_fu_53978_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4166_reg_93970.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4170_fu_54000_p2() {
    p_Val2_4170_fu_54000_p2 = (!tmp_5921_fu_53996_p1.read().is_01() || !tmp_11409_cast_fu_53992_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_5921_fu_53996_p1.read()) + sc_biguint<126>(tmp_11409_cast_fu_53992_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4173_fu_54032_p2() {
    p_Val2_4173_fu_54032_p2 = (!tmp_5922_fu_54018_p1.read().is_01() || !tmp_11413_cast_fu_54028_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_5922_fu_54018_p1.read()) - sc_biguint<127>(tmp_11413_cast_fu_54028_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4178_fu_54068_p3() {
    p_Val2_4178_fu_54068_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4174_reg_94007.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4179_fu_54090_p2() {
    p_Val2_4179_fu_54090_p2 = (!tmp_5929_fu_54086_p1.read().is_01() || !tmp_11419_cast_fu_54082_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_5929_fu_54086_p1.read()) + sc_biguint<131>(tmp_11419_cast_fu_54082_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4181_fu_54122_p2() {
    p_Val2_4181_fu_54122_p2 = (!tmp_5930_fu_54108_p1.read().is_01() || !tmp_11423_cast_fu_54118_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_5930_fu_54108_p1.read()) - sc_biguint<132>(tmp_11423_cast_fu_54118_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4184_fu_54158_p3() {
    p_Val2_4184_fu_54158_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4182_reg_94044.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4185_fu_54180_p2() {
    p_Val2_4185_fu_54180_p2 = (!tmp_5935_fu_54176_p1.read().is_01() || !tmp_11429_cast_fu_54172_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_5935_fu_54176_p1.read()) + sc_biguint<136>(tmp_11429_cast_fu_54172_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4187_fu_54281_p2() {
    p_Val2_4187_fu_54281_p2 = (!tmp_5936_fu_54267_p1.read().is_01() || !tmp_11433_cast_fu_54277_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_5936_fu_54267_p1.read()) - sc_biguint<137>(tmp_11433_cast_fu_54277_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4188_fu_54384_p2() {
    p_Val2_4188_fu_54384_p2 = (!tmp2048_fu_54376_p2.read().is_01() || !tmp2051_cast_fu_54381_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2048_fu_54376_p2.read()) + sc_biguint<109>(tmp2051_cast_fu_54381_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4189_fu_11883_p2() {
    p_Val2_4189_fu_11883_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2431_reg_75716.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4190_fu_54417_p2() {
    p_Val2_4190_fu_54417_p2 = (!tmp_11441_cast_fu_54410_p1.read().is_01() || !tmp_11442_cast_fu_54414_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11441_cast_fu_54410_p1.read()) - sc_biguint<118>(tmp_11442_cast_fu_54414_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4191_fu_54458_p1() {
    p_Val2_4191_fu_54458_p1 = esl_sext<121,73>(tmp_5945_reg_94187.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4192_fu_54448_p2() {
    p_Val2_4192_fu_54448_p2 = (!tmp_5947_fu_54444_p1.read().is_01() || !tmp_11446_cast_fu_54440_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_5947_fu_54444_p1.read()) + sc_bigint<122>(tmp_11446_cast_fu_54440_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4193_fu_54471_p2() {
    p_Val2_4193_fu_54471_p2 = (!tmp_5949_fu_54464_p1.read().is_01() || !tmp_5948_fu_54461_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_5949_fu_54464_p1.read()) + sc_biguint<123>(tmp_5948_fu_54461_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4194_fu_54530_p3() {
    p_Val2_4194_fu_54530_p3 = esl_concat<78,52>(tmp_5951_reg_94208.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4201_fu_54636_p2() {
    p_Val2_4201_fu_54636_p2 = (!tmp_5957_fu_54630_p1.read().is_01() || !tmp_5958_fu_54633_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_5957_fu_54630_p1.read()) - sc_bigint<72>(tmp_5958_fu_54633_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4207_fu_54760_p2() {
    p_Val2_4207_fu_54760_p2 = (!tmp_5966_fu_54745_p1.read().is_01() || !tmp2054_cast_fu_54756_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_5966_fu_54745_p1.read()) + sc_biguint<44>(tmp2054_cast_fu_54756_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4209_fu_54829_p2() {
    p_Val2_4209_fu_54829_p2 = (!tmp_11517_cast_fu_54813_p1.read().is_01() || !tmp2055_cast_fu_54825_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_11517_cast_fu_54813_p1.read()) + sc_biguint<52>(tmp2055_cast_fu_54825_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4210_fu_54862_p2() {
    p_Val2_4210_fu_54862_p2 = (!ap_const_lv59_10.is_01() || !tmp_5974_fu_54858_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_5974_fu_54858_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4212_fu_54900_p2() {
    p_Val2_4212_fu_54900_p2 = (!tmp_11527_cast_fu_54897_p1.read().is_01() || !tmp_5975_fu_54890_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_11527_cast_fu_54897_p1.read()) + sc_biguint<108>(tmp_5975_fu_54890_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4216_fu_65688_p3() {
    p_Val2_4216_fu_65688_p3 = esl_concat<54,17>(tmp_7292_reg_99007.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4218_fu_65727_p3() {
    p_Val2_4218_fu_65727_p3 = (!tmp_7294_fu_65698_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7294_fu_65698_p3.read()[0].to_bool())? tmp_6000_fu_65714_p4.read(): tmp_6001_fu_65723_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4220_fu_65751_p2() {
    p_Val2_4220_fu_65751_p2 = (!tmp_11569_cast_fu_65743_p1.read().is_01() || !tmp_6003_fu_65747_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_11569_cast_fu_65743_p1.read()) + sc_biguint<77>(tmp_6003_fu_65747_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4222_fu_65776_p2() {
    p_Val2_4222_fu_65776_p2 = (!tmp_6004_fu_65770_p1.read().is_01() || !tmp_6005_fu_65773_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6004_fu_65770_p1.read()) - sc_biguint<78>(tmp_6005_fu_65773_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4223_cast_fu_22855_p1() {
    p_Val2_4223_cast_fu_22855_p1 = esl_sext<121,109>(p_Val2_2395_reg_80435.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4228_fu_65812_p3() {
    p_Val2_4228_fu_65812_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4226_reg_99040.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4229_fu_65834_p2() {
    p_Val2_4229_fu_65834_p2 = (!tmp_11578_cast_fu_65826_p1.read().is_01() || !tmp_6009_fu_65830_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_11578_cast_fu_65826_p1.read()) + sc_biguint<82>(tmp_6009_fu_65830_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4230_fu_12725_p1() {
    p_Val2_4230_fu_12725_p1 = p_Val2_2472_fu_12689_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4232_fu_65866_p2() {
    p_Val2_4232_fu_65866_p2 = (!tmp_6011_fu_65852_p1.read().is_01() || !tmp_11582_cast_fu_65862_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6011_fu_65852_p1.read()) - sc_biguint<83>(tmp_11582_cast_fu_65862_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4234_fu_65895_p4() {
    p_Val2_4234_fu_65895_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7295_reg_99082.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4235_fu_65919_p2() {
    p_Val2_4235_fu_65919_p2 = (!tmp_11587_cast_fu_65911_p1.read().is_01() || !tmp_6015_fu_65915_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_11587_cast_fu_65911_p1.read()) + sc_biguint<102>(tmp_6015_fu_65915_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4237_fu_65952_p2() {
    p_Val2_4237_fu_65952_p2 = (!tmp_6016_fu_65938_p1.read().is_01() || !tmp_11591_cast_fu_65948_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6016_fu_65938_p1.read()) - sc_biguint<103>(tmp_11591_cast_fu_65948_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4240_fu_65988_p3() {
    p_Val2_4240_fu_65988_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4238_reg_99118.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4241_fu_66010_p2() {
    p_Val2_4241_fu_66010_p2 = (!tmp_11597_cast_fu_66002_p1.read().is_01() || !tmp_6021_fu_66006_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_11597_cast_fu_66002_p1.read()) + sc_biguint<121>(tmp_6021_fu_66006_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4244_fu_66042_p2() {
    p_Val2_4244_fu_66042_p2 = (!tmp_6022_fu_66028_p1.read().is_01() || !tmp_11601_cast_fu_66038_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6022_fu_66028_p1.read()) - sc_biguint<122>(tmp_11601_cast_fu_66038_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4247_fu_66078_p3() {
    p_Val2_4247_fu_66078_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4245_reg_99155.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4248_fu_12715_p4() {
    p_Val2_4248_fu_12715_p4 = p_Val2_2472_fu_12689_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4249_fu_66100_p2() {
    p_Val2_4249_fu_66100_p2 = (!tmp_11607_cast_fu_66092_p1.read().is_01() || !tmp_6027_fu_66096_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_11607_cast_fu_66092_p1.read()) + sc_biguint<126>(tmp_6027_fu_66096_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4252_fu_66132_p2() {
    p_Val2_4252_fu_66132_p2 = (!tmp_6028_fu_66118_p1.read().is_01() || !tmp_11611_cast_fu_66128_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6028_fu_66118_p1.read()) - sc_biguint<127>(tmp_11611_cast_fu_66128_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4258_fu_66168_p3() {
    p_Val2_4258_fu_66168_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4253_reg_99192.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4259_fu_66190_p2() {
    p_Val2_4259_fu_66190_p2 = (!tmp_11617_cast_fu_66182_p1.read().is_01() || !tmp_6033_fu_66186_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_11617_cast_fu_66182_p1.read()) + sc_biguint<131>(tmp_6033_fu_66186_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4261_fu_66222_p2() {
    p_Val2_4261_fu_66222_p2 = (!tmp_6034_fu_66208_p1.read().is_01() || !tmp_11621_cast_fu_66218_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6034_fu_66208_p1.read()) - sc_biguint<132>(tmp_11621_cast_fu_66218_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4264_fu_66297_p3() {
    p_Val2_4264_fu_66297_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4262_reg_99229.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4265_fu_66319_p2() {
    p_Val2_4265_fu_66319_p2 = (!tmp_11627_cast_fu_66311_p1.read().is_01() || !tmp_6041_fu_66315_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_11627_cast_fu_66311_p1.read()) + sc_biguint<136>(tmp_6041_fu_66315_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4267_fu_66336_p2() {
    p_Val2_4267_fu_66336_p2 = (!p_Val2_4265_fu_66319_p2.read().is_01() || !tmp_11631_cast_fu_66332_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(p_Val2_4265_fu_66319_p2.read()) - sc_biguint<136>(tmp_11631_cast_fu_66332_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4268_fu_66469_p2() {
    p_Val2_4268_fu_66469_p2 = (!tmp1995_cast_fu_66466_p1.read().is_01() || !tmp1992_fu_66461_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp1995_cast_fu_66466_p1.read()) + sc_biguint<109>(tmp1992_fu_66461_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4269_fu_66489_p2() {
    p_Val2_4269_fu_66489_p2 = (!tmp_11639_cast_fu_66482_p1.read().is_01() || !tmp_11640_cast_fu_66486_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11639_cast_fu_66482_p1.read()) - sc_biguint<118>(tmp_11640_cast_fu_66486_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4270_fu_66508_p1() {
    p_Val2_4270_fu_66508_p1 = esl_sext<121,73>(tmp_6048_reg_99362.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4271_fu_66522_p2() {
    p_Val2_4271_fu_66522_p2 = (!tmp_11644_cast_fu_66518_p1.read().is_01() || !p_Val2_7778_cast_fu_66505_p1.read().is_01())? sc_lv<121>(): (sc_bigint<121>(tmp_11644_cast_fu_66518_p1.read()) + sc_bigint<121>(p_Val2_7778_cast_fu_66505_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4272_fu_66528_p2() {
    p_Val2_4272_fu_66528_p2 = (!p_Val2_4271_fu_66522_p2.read().is_01() || !p_Val2_4270_fu_66508_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(p_Val2_4271_fu_66522_p2.read()) + sc_bigint<121>(p_Val2_4270_fu_66508_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4279_fu_66696_p2() {
    p_Val2_4279_fu_66696_p2 = (!tmp_6058_fu_66690_p1.read().is_01() || !tmp_6059_fu_66693_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6058_fu_66690_p1.read()) - sc_bigint<72>(tmp_6059_fu_66693_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4284_fu_66820_p2() {
    p_Val2_4284_fu_66820_p2 = (!tmp1998_cast_fu_66816_p1.read().is_01() || !tmp_6067_fu_66805_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp1998_cast_fu_66816_p1.read()) + sc_biguint<44>(tmp_6067_fu_66805_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4286_fu_66889_p2() {
    p_Val2_4286_fu_66889_p2 = (!tmp1999_cast_fu_66885_p1.read().is_01() || !tmp_11770_cast_fu_66873_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp1999_cast_fu_66885_p1.read()) + sc_biguint<52>(tmp_11770_cast_fu_66873_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4287_fu_66922_p2() {
    p_Val2_4287_fu_66922_p2 = (!ap_const_lv59_10.is_01() || !tmp_6075_fu_66918_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6075_fu_66918_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4289_fu_66938_p2() {
    p_Val2_4289_fu_66938_p2 = (!tmp_6076_fu_66928_p3.read().is_01() || !tmp_11780_cast_fu_66935_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6076_fu_66928_p3.read()) + sc_biguint<108>(tmp_11780_cast_fu_66935_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4290_cast_fu_12498_p1() {
    p_Val2_4290_cast_fu_12498_p1 = esl_sext<121,109>(p_Val2_2461_reg_75996.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4290_fu_66944_p4() {
    p_Val2_4290_fu_66944_p4 = p_Val2_4289_fu_66938_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4291_fu_66985_p3() {
    p_Val2_4291_fu_66985_p3 = (!tmp_7302_fu_66954_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7302_fu_66954_p3.read()[0].to_bool())? p_Val2_4290_fu_66944_p4.read(): tmp_6078_fu_66972_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4294_fu_55321_p3() {
    p_Val2_4294_fu_55321_p3 = esl_concat<54,17>(tmp_7305_reg_94547.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4296_fu_55360_p3() {
    p_Val2_4296_fu_55360_p3 = (!tmp_7307_fu_55331_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7307_fu_55331_p3.read()[0].to_bool())? tmp_6081_fu_55347_p4.read(): tmp_6082_fu_55356_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4297_fu_55384_p2() {
    p_Val2_4297_fu_55384_p2 = (!tmp_11661_cast_fu_55376_p1.read().is_01() || !tmp_6084_fu_55380_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_11661_cast_fu_55376_p1.read()) + sc_biguint<77>(tmp_6084_fu_55380_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4299_fu_55409_p2() {
    p_Val2_4299_fu_55409_p2 = (!tmp_6085_fu_55403_p1.read().is_01() || !tmp_6086_fu_55406_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6085_fu_55403_p1.read()) - sc_biguint<78>(tmp_6086_fu_55406_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4302_fu_55445_p3() {
    p_Val2_4302_fu_55445_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4300_reg_94580.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4303_fu_55467_p2() {
    p_Val2_4303_fu_55467_p2 = (!tmp_11670_cast_fu_55459_p1.read().is_01() || !tmp_6090_fu_55463_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_11670_cast_fu_55459_p1.read()) + sc_biguint<82>(tmp_6090_fu_55463_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4305_fu_55499_p2() {
    p_Val2_4305_fu_55499_p2 = (!tmp_6091_fu_55485_p1.read().is_01() || !tmp_11674_cast_fu_55495_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6091_fu_55485_p1.read()) - sc_biguint<83>(tmp_11674_cast_fu_55495_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4307_fu_55528_p4() {
    p_Val2_4307_fu_55528_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7308_reg_94622.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4308_fu_55552_p2() {
    p_Val2_4308_fu_55552_p2 = (!tmp_11679_cast_fu_55544_p1.read().is_01() || !tmp_6096_fu_55548_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_11679_cast_fu_55544_p1.read()) + sc_biguint<102>(tmp_6096_fu_55548_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4310_fu_55585_p2() {
    p_Val2_4310_fu_55585_p2 = (!tmp_6097_fu_55571_p1.read().is_01() || !tmp_11683_cast_fu_55581_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6097_fu_55571_p1.read()) - sc_biguint<103>(tmp_11683_cast_fu_55581_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4313_fu_55621_p3() {
    p_Val2_4313_fu_55621_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4311_reg_94658.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4314_fu_55643_p2() {
    p_Val2_4314_fu_55643_p2 = (!tmp_11689_cast_fu_55635_p1.read().is_01() || !tmp_6102_fu_55639_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_11689_cast_fu_55635_p1.read()) + sc_biguint<121>(tmp_6102_fu_55639_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4316_fu_55675_p2() {
    p_Val2_4316_fu_55675_p2 = (!tmp_6103_fu_55661_p1.read().is_01() || !tmp_11693_cast_fu_55671_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6103_fu_55661_p1.read()) - sc_biguint<122>(tmp_11693_cast_fu_55671_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4319_fu_55711_p3() {
    p_Val2_4319_fu_55711_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4317_reg_94695.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4320_fu_55733_p2() {
    p_Val2_4320_fu_55733_p2 = (!tmp_11699_cast_fu_55725_p1.read().is_01() || !tmp_6108_fu_55729_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_11699_cast_fu_55725_p1.read()) + sc_biguint<126>(tmp_6108_fu_55729_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4322_fu_55765_p2() {
    p_Val2_4322_fu_55765_p2 = (!tmp_6109_fu_55751_p1.read().is_01() || !tmp_11703_cast_fu_55761_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6109_fu_55751_p1.read()) - sc_biguint<127>(tmp_11703_cast_fu_55761_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4325_fu_55801_p3() {
    p_Val2_4325_fu_55801_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4323_reg_94732.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4326_fu_55823_p2() {
    p_Val2_4326_fu_55823_p2 = (!tmp_11709_cast_fu_55815_p1.read().is_01() || !tmp_6114_fu_55819_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_11709_cast_fu_55815_p1.read()) + sc_biguint<131>(tmp_6114_fu_55819_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4328_fu_55855_p2() {
    p_Val2_4328_fu_55855_p2 = (!tmp_6115_fu_55841_p1.read().is_01() || !tmp_11713_cast_fu_55851_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6115_fu_55841_p1.read()) - sc_biguint<132>(tmp_11713_cast_fu_55851_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4331_fu_55930_p3() {
    p_Val2_4331_fu_55930_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4329_reg_94769.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4332_fu_55952_p2() {
    p_Val2_4332_fu_55952_p2 = (!tmp_11719_cast_fu_55944_p1.read().is_01() || !tmp_6120_fu_55948_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_11719_cast_fu_55944_p1.read()) + sc_biguint<136>(tmp_6120_fu_55948_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4334_fu_55969_p2() {
    p_Val2_4334_fu_55969_p2 = (!p_Val2_4332_fu_55952_p2.read().is_01() || !tmp_11723_cast_fu_55965_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(p_Val2_4332_fu_55952_p2.read()) - sc_biguint<136>(tmp_11723_cast_fu_55965_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4335_fu_56102_p2() {
    p_Val2_4335_fu_56102_p2 = (!tmp2060_cast_fu_56099_p1.read().is_01() || !tmp2057_fu_56094_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2060_cast_fu_56099_p1.read()) + sc_biguint<109>(tmp2057_fu_56094_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4336_fu_56122_p2() {
    p_Val2_4336_fu_56122_p2 = (!tmp_11731_cast_fu_56115_p1.read().is_01() || !tmp_11732_cast_fu_56119_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11731_cast_fu_56115_p1.read()) - sc_biguint<118>(tmp_11732_cast_fu_56119_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4337_fu_56141_p1() {
    p_Val2_4337_fu_56141_p1 = esl_sext<121,73>(tmp_6128_reg_94902.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4338_fu_56155_p2() {
    p_Val2_4338_fu_56155_p2 = (!tmp_11736_cast_fu_56151_p1.read().is_01() || !p_Val2_7846_cast_fu_56138_p1.read().is_01())? sc_lv<121>(): (sc_bigint<121>(tmp_11736_cast_fu_56151_p1.read()) + sc_bigint<121>(p_Val2_7846_cast_fu_56138_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4339_fu_56161_p2() {
    p_Val2_4339_fu_56161_p2 = (!p_Val2_4338_fu_56155_p2.read().is_01() || !p_Val2_4337_fu_56141_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(p_Val2_4338_fu_56155_p2.read()) + sc_bigint<121>(p_Val2_4337_fu_56141_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4346_fu_56329_p2() {
    p_Val2_4346_fu_56329_p2 = (!tmp_6136_fu_56323_p1.read().is_01() || !tmp_6137_fu_56326_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6136_fu_56323_p1.read()) - sc_bigint<72>(tmp_6137_fu_56326_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4351_fu_56453_p2() {
    p_Val2_4351_fu_56453_p2 = (!tmp2063_cast_fu_56449_p1.read().is_01() || !tmp_6147_fu_56438_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2063_cast_fu_56449_p1.read()) + sc_biguint<44>(tmp_6147_fu_56438_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4353_fu_56522_p2() {
    p_Val2_4353_fu_56522_p2 = (!tmp2064_cast_fu_56518_p1.read().is_01() || !tmp_11805_cast_fu_56506_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2064_cast_fu_56518_p1.read()) + sc_biguint<52>(tmp_11805_cast_fu_56506_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4354_fu_56555_p2() {
    p_Val2_4354_fu_56555_p2 = (!ap_const_lv59_10.is_01() || !tmp_6156_fu_56551_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6156_fu_56551_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4356_fu_56571_p2() {
    p_Val2_4356_fu_56571_p2 = (!tmp_6157_fu_56561_p3.read().is_01() || !tmp_11815_cast_fu_56568_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6157_fu_56561_p3.read()) + sc_biguint<108>(tmp_11815_cast_fu_56568_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4357_fu_56577_p4() {
    p_Val2_4357_fu_56577_p4 = p_Val2_4356_fu_56571_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4358_fu_56618_p3() {
    p_Val2_4358_fu_56618_p3 = (!tmp_7315_fu_56587_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7315_fu_56587_p3.read()[0].to_bool())? p_Val2_4357_fu_56577_p4.read(): tmp_6160_fu_56605_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4362_fu_67197_p3() {
    p_Val2_4362_fu_67197_p3 = esl_concat<54,17>(tmp_7324_reg_99688.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4364_fu_67236_p3() {
    p_Val2_4364_fu_67236_p3 = (!tmp_7326_fu_67207_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7326_fu_67207_p3.read()[0].to_bool())? tmp_6180_fu_67223_p4.read(): tmp_6181_fu_67232_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4365_fu_67260_p2() {
    p_Val2_4365_fu_67260_p2 = (!tmp_6183_fu_67256_p1.read().is_01() || !tmp_11867_cast_fu_67252_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_6183_fu_67256_p1.read()) + sc_biguint<77>(tmp_11867_cast_fu_67252_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4367_fu_67285_p2() {
    p_Val2_4367_fu_67285_p2 = (!tmp_6184_fu_67279_p1.read().is_01() || !tmp_6185_fu_67282_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6184_fu_67279_p1.read()) - sc_biguint<78>(tmp_6185_fu_67282_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4370_fu_67321_p3() {
    p_Val2_4370_fu_67321_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4368_reg_99721.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4371_fu_67343_p2() {
    p_Val2_4371_fu_67343_p2 = (!tmp_6189_fu_67339_p1.read().is_01() || !tmp_11876_cast_fu_67335_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_6189_fu_67339_p1.read()) + sc_biguint<82>(tmp_11876_cast_fu_67335_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4373_fu_67375_p2() {
    p_Val2_4373_fu_67375_p2 = (!tmp_6190_fu_67361_p1.read().is_01() || !tmp_11880_cast_fu_67371_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6190_fu_67361_p1.read()) - sc_biguint<83>(tmp_11880_cast_fu_67371_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4375_fu_67404_p4() {
    p_Val2_4375_fu_67404_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7327_reg_99763.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4376_fu_67428_p2() {
    p_Val2_4376_fu_67428_p2 = (!tmp_6194_fu_67424_p1.read().is_01() || !tmp_11885_cast_fu_67420_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_6194_fu_67424_p1.read()) + sc_biguint<102>(tmp_11885_cast_fu_67420_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4378_fu_67461_p2() {
    p_Val2_4378_fu_67461_p2 = (!tmp_6195_fu_67447_p1.read().is_01() || !tmp_11889_cast_fu_67457_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6195_fu_67447_p1.read()) - sc_biguint<103>(tmp_11889_cast_fu_67457_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4381_fu_67497_p3() {
    p_Val2_4381_fu_67497_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4379_reg_99799.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4382_fu_67519_p2() {
    p_Val2_4382_fu_67519_p2 = (!tmp_6200_fu_67515_p1.read().is_01() || !tmp_11895_cast_fu_67511_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_6200_fu_67515_p1.read()) + sc_biguint<121>(tmp_11895_cast_fu_67511_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4384_fu_67551_p2() {
    p_Val2_4384_fu_67551_p2 = (!tmp_6201_fu_67537_p1.read().is_01() || !tmp_11899_cast_fu_67547_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6201_fu_67537_p1.read()) - sc_biguint<122>(tmp_11899_cast_fu_67547_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4387_fu_67587_p3() {
    p_Val2_4387_fu_67587_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4385_reg_99836.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4388_fu_67609_p2() {
    p_Val2_4388_fu_67609_p2 = (!tmp_6206_fu_67605_p1.read().is_01() || !tmp_11905_cast_fu_67601_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_6206_fu_67605_p1.read()) + sc_biguint<126>(tmp_11905_cast_fu_67601_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4390_fu_67641_p2() {
    p_Val2_4390_fu_67641_p2 = (!tmp_6207_fu_67627_p1.read().is_01() || !tmp_11909_cast_fu_67637_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6207_fu_67627_p1.read()) - sc_biguint<127>(tmp_11909_cast_fu_67637_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4393_fu_67677_p3() {
    p_Val2_4393_fu_67677_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4391_reg_99873.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4394_fu_67699_p2() {
    p_Val2_4394_fu_67699_p2 = (!tmp_6212_fu_67695_p1.read().is_01() || !tmp_11915_cast_fu_67691_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_6212_fu_67695_p1.read()) + sc_biguint<131>(tmp_11915_cast_fu_67691_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4398_fu_67731_p2() {
    p_Val2_4398_fu_67731_p2 = (!tmp_6213_fu_67717_p1.read().is_01() || !tmp_11919_cast_fu_67727_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6213_fu_67717_p1.read()) - sc_biguint<132>(tmp_11919_cast_fu_67727_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4402_fu_67767_p3() {
    p_Val2_4402_fu_67767_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4399_reg_99910.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4403_fu_67789_p2() {
    p_Val2_4403_fu_67789_p2 = (!tmp_6218_fu_67785_p1.read().is_01() || !tmp_11925_cast_fu_67781_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_6218_fu_67785_p1.read()) + sc_biguint<136>(tmp_11925_cast_fu_67781_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4405_fu_67900_p2() {
    p_Val2_4405_fu_67900_p2 = (!tmp_6219_fu_67886_p1.read().is_01() || !tmp_11929_cast_fu_67896_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6219_fu_67886_p1.read()) - sc_biguint<137>(tmp_11929_cast_fu_67896_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4406_fu_68003_p2() {
    p_Val2_4406_fu_68003_p2 = (!tmp2001_fu_67995_p2.read().is_01() || !tmp2004_cast_fu_68000_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2001_fu_67995_p2.read()) + sc_biguint<109>(tmp2004_cast_fu_68000_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4407_cast_fu_24374_p1() {
    p_Val2_4407_cast_fu_24374_p1 = esl_sext<121,109>(p_Val2_2529_reg_81135.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4407_fu_68036_p2() {
    p_Val2_4407_fu_68036_p2 = (!tmp_11937_cast_fu_68029_p1.read().is_01() || !tmp_11938_cast_fu_68033_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_11937_cast_fu_68029_p1.read()) - sc_biguint<118>(tmp_11938_cast_fu_68033_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4408_fu_68077_p1() {
    p_Val2_4408_fu_68077_p1 = esl_sext<121,73>(tmp_6228_reg_100065.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4409_fu_68067_p2() {
    p_Val2_4409_fu_68067_p2 = (!tmp_6231_fu_68063_p1.read().is_01() || !tmp_11942_cast_fu_68059_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6231_fu_68063_p1.read()) + sc_bigint<122>(tmp_11942_cast_fu_68059_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4410_fu_68090_p2() {
    p_Val2_4410_fu_68090_p2 = (!tmp_6233_fu_68083_p1.read().is_01() || !tmp_6232_fu_68080_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6233_fu_68083_p1.read()) + sc_biguint<123>(tmp_6232_fu_68080_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4414_fu_23749_p2() {
    p_Val2_4414_fu_23749_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2499_reg_80836.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4419_fu_68271_p2() {
    p_Val2_4419_fu_68271_p2 = (!tmp_6242_fu_68265_p1.read().is_01() || !tmp_6244_fu_68268_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6242_fu_68265_p1.read()) - sc_bigint<72>(tmp_6244_fu_68268_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4424_fu_68395_p2() {
    p_Val2_4424_fu_68395_p2 = (!tmp_6252_fu_68380_p1.read().is_01() || !tmp2007_cast_fu_68391_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_6252_fu_68380_p1.read()) + sc_biguint<44>(tmp2007_cast_fu_68391_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4427_fu_68464_p2() {
    p_Val2_4427_fu_68464_p2 = (!tmp_12068_cast_fu_68448_p1.read().is_01() || !tmp2008_cast_fu_68460_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_12068_cast_fu_68448_p1.read()) + sc_biguint<52>(tmp2008_cast_fu_68460_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4428_fu_68497_p2() {
    p_Val2_4428_fu_68497_p2 = (!ap_const_lv59_10.is_01() || !tmp_6260_fu_68493_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6260_fu_68493_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4431_fu_68571_p2() {
    p_Val2_4431_fu_68571_p2 = (!tmp_12078_cast_fu_68568_p1.read().is_01() || !tmp_6261_fu_68561_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_12078_cast_fu_68568_p1.read()) + sc_biguint<108>(tmp_6261_fu_68561_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4436_fu_56830_p3() {
    p_Val2_4436_fu_56830_p3 = esl_concat<54,17>(tmp_7342_reg_95228.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4438_fu_56869_p3() {
    p_Val2_4438_fu_56869_p3 = (!tmp_7344_fu_56840_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7344_fu_56840_p3.read()[0].to_bool())? tmp_6286_fu_56856_p4.read(): tmp_6287_fu_56865_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4440_fu_56893_p2() {
    p_Val2_4440_fu_56893_p2 = (!tmp_6289_fu_56889_p1.read().is_01() || !tmp_11959_cast_fu_56885_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_6289_fu_56889_p1.read()) + sc_biguint<77>(tmp_11959_cast_fu_56885_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4442_fu_56918_p2() {
    p_Val2_4442_fu_56918_p2 = (!tmp_6290_fu_56912_p1.read().is_01() || !tmp_6291_fu_56915_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6290_fu_56912_p1.read()) - sc_biguint<78>(tmp_6291_fu_56915_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4445_fu_56954_p3() {
    p_Val2_4445_fu_56954_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4443_reg_95261.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4447_fu_56976_p2() {
    p_Val2_4447_fu_56976_p2 = (!tmp_6295_fu_56972_p1.read().is_01() || !tmp_11968_cast_fu_56968_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_6295_fu_56972_p1.read()) + sc_biguint<82>(tmp_11968_cast_fu_56968_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4449_fu_57008_p2() {
    p_Val2_4449_fu_57008_p2 = (!tmp_6296_fu_56994_p1.read().is_01() || !tmp_11972_cast_fu_57004_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6296_fu_56994_p1.read()) - sc_biguint<83>(tmp_11972_cast_fu_57004_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4451_fu_57037_p4() {
    p_Val2_4451_fu_57037_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7345_reg_95303.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4452_fu_57061_p2() {
    p_Val2_4452_fu_57061_p2 = (!tmp_6300_fu_57057_p1.read().is_01() || !tmp_11977_cast_fu_57053_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_6300_fu_57057_p1.read()) + sc_biguint<102>(tmp_11977_cast_fu_57053_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4455_fu_57094_p2() {
    p_Val2_4455_fu_57094_p2 = (!tmp_6301_fu_57080_p1.read().is_01() || !tmp_11981_cast_fu_57090_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6301_fu_57080_p1.read()) - sc_biguint<103>(tmp_11981_cast_fu_57090_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4458_fu_57130_p3() {
    p_Val2_4458_fu_57130_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4456_reg_95339.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4459_fu_57152_p2() {
    p_Val2_4459_fu_57152_p2 = (!tmp_6307_fu_57148_p1.read().is_01() || !tmp_11987_cast_fu_57144_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_6307_fu_57148_p1.read()) + sc_biguint<121>(tmp_11987_cast_fu_57144_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4460_fu_24662_p1() {
    p_Val2_4460_fu_24662_p1 = p_Val2_2540_fu_24626_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4462_fu_57184_p2() {
    p_Val2_4462_fu_57184_p2 = (!tmp_6308_fu_57170_p1.read().is_01() || !tmp_11991_cast_fu_57180_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6308_fu_57170_p1.read()) - sc_biguint<122>(tmp_11991_cast_fu_57180_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4465_fu_57220_p3() {
    p_Val2_4465_fu_57220_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4463_reg_95376.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4466_fu_57242_p2() {
    p_Val2_4466_fu_57242_p2 = (!tmp_6314_fu_57238_p1.read().is_01() || !tmp_11997_cast_fu_57234_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_6314_fu_57238_p1.read()) + sc_biguint<126>(tmp_11997_cast_fu_57234_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4468_fu_57274_p2() {
    p_Val2_4468_fu_57274_p2 = (!tmp_6315_fu_57260_p1.read().is_01() || !tmp_12001_cast_fu_57270_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6315_fu_57260_p1.read()) - sc_biguint<127>(tmp_12001_cast_fu_57270_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4471_fu_57310_p3() {
    p_Val2_4471_fu_57310_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4469_reg_95413.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4473_fu_57332_p2() {
    p_Val2_4473_fu_57332_p2 = (!tmp_6320_fu_57328_p1.read().is_01() || !tmp_12007_cast_fu_57324_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_6320_fu_57328_p1.read()) + sc_biguint<131>(tmp_12007_cast_fu_57324_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4474_cast_fu_14024_p1() {
    p_Val2_4474_cast_fu_14024_p1 = esl_sext<121,109>(p_Val2_2595_reg_76693.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4475_fu_57364_p2() {
    p_Val2_4475_fu_57364_p2 = (!tmp_6321_fu_57350_p1.read().is_01() || !tmp_12011_cast_fu_57360_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6321_fu_57350_p1.read()) - sc_biguint<132>(tmp_12011_cast_fu_57360_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4476_fu_24652_p4() {
    p_Val2_4476_fu_24652_p4 = p_Val2_2540_fu_24626_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4479_cast_fu_14101_p2() {
    p_Val2_4479_cast_fu_14101_p2 = (!tmp_5323_reg_76714.read().is_01() || !tmp_3664_fu_14092_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_5323_reg_76714.read()) + sc_bigint<120>(tmp_3664_fu_14092_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4479_fu_57400_p3() {
    p_Val2_4479_fu_57400_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4477_reg_95450.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4483_fu_57422_p2() {
    p_Val2_4483_fu_57422_p2 = (!tmp_6328_fu_57418_p1.read().is_01() || !tmp_12017_cast_fu_57414_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_6328_fu_57418_p1.read()) + sc_biguint<136>(tmp_12017_cast_fu_57414_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4485_fu_57533_p2() {
    p_Val2_4485_fu_57533_p2 = (!tmp_6329_fu_57519_p1.read().is_01() || !tmp_12021_cast_fu_57529_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6329_fu_57519_p1.read()) - sc_biguint<137>(tmp_12021_cast_fu_57529_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4486_fu_57636_p2() {
    p_Val2_4486_fu_57636_p2 = (!tmp2066_fu_57628_p2.read().is_01() || !tmp2069_cast_fu_57633_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2066_fu_57628_p2.read()) + sc_biguint<109>(tmp2069_cast_fu_57633_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4488_fu_57669_p2() {
    p_Val2_4488_fu_57669_p2 = (!tmp_12029_cast_fu_57662_p1.read().is_01() || !tmp_12030_cast_fu_57666_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_12029_cast_fu_57662_p1.read()) - sc_biguint<118>(tmp_12030_cast_fu_57666_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4489_fu_57710_p1() {
    p_Val2_4489_fu_57710_p1 = esl_sext<121,73>(tmp_6337_reg_95605.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4490_fu_57700_p2() {
    p_Val2_4490_fu_57700_p2 = (!tmp_6339_fu_57696_p1.read().is_01() || !tmp_12034_cast_fu_57692_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6339_fu_57696_p1.read()) + sc_bigint<122>(tmp_12034_cast_fu_57692_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4491_fu_57723_p2() {
    p_Val2_4491_fu_57723_p2 = (!tmp_6342_fu_57716_p1.read().is_01() || !tmp_6340_fu_57713_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6342_fu_57716_p1.read()) + sc_biguint<123>(tmp_6340_fu_57713_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4498_fu_57904_p2() {
    p_Val2_4498_fu_57904_p2 = (!tmp_6351_fu_57898_p1.read().is_01() || !tmp_6352_fu_57901_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6351_fu_57898_p1.read()) - sc_bigint<72>(tmp_6352_fu_57901_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4503_fu_58028_p2() {
    p_Val2_4503_fu_58028_p2 = (!tmp_6360_fu_58013_p1.read().is_01() || !tmp2072_cast_fu_58024_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_6360_fu_58013_p1.read()) + sc_biguint<44>(tmp2072_cast_fu_58024_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4505_fu_58097_p2() {
    p_Val2_4505_fu_58097_p2 = (!tmp_12103_cast_fu_58081_p1.read().is_01() || !tmp2073_cast_fu_58093_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_12103_cast_fu_58081_p1.read()) + sc_biguint<52>(tmp2073_cast_fu_58093_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4506_fu_58130_p2() {
    p_Val2_4506_fu_58130_p2 = (!ap_const_lv59_10.is_01() || !tmp_6368_fu_58126_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6368_fu_58126_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4508_fu_58204_p2() {
    p_Val2_4508_fu_58204_p2 = (!tmp_12113_cast_fu_58201_p1.read().is_01() || !tmp_6369_fu_58194_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_12113_cast_fu_58201_p1.read()) + sc_biguint<108>(tmp_6369_fu_58194_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4511_fu_69024_p3() {
    p_Val2_4511_fu_69024_p3 = esl_concat<54,17>(tmp_7358_reg_100478.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4513_fu_69063_p3() {
    p_Val2_4513_fu_69063_p3 = (!tmp_7360_fu_69034_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7360_fu_69034_p3.read()[0].to_bool())? tmp_6391_fu_69050_p4.read(): tmp_6392_fu_69059_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4514_fu_69087_p2() {
    p_Val2_4514_fu_69087_p2 = (!tmp_12149_cast_fu_69079_p1.read().is_01() || !tmp_6394_fu_69083_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_12149_cast_fu_69079_p1.read()) + sc_biguint<77>(tmp_6394_fu_69083_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4516_fu_69112_p2() {
    p_Val2_4516_fu_69112_p2 = (!tmp_6395_fu_69106_p1.read().is_01() || !tmp_6396_fu_69109_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6395_fu_69106_p1.read()) - sc_biguint<78>(tmp_6396_fu_69109_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4519_fu_69148_p3() {
    p_Val2_4519_fu_69148_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4517_reg_100511.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4520_fu_69170_p2() {
    p_Val2_4520_fu_69170_p2 = (!tmp_12158_cast_fu_69162_p1.read().is_01() || !tmp_6400_fu_69166_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_12158_cast_fu_69162_p1.read()) + sc_biguint<82>(tmp_6400_fu_69166_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4522_fu_69202_p2() {
    p_Val2_4522_fu_69202_p2 = (!tmp_6401_fu_69188_p1.read().is_01() || !tmp_12162_cast_fu_69198_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6401_fu_69188_p1.read()) - sc_biguint<83>(tmp_12162_cast_fu_69198_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4524_fu_69231_p4() {
    p_Val2_4524_fu_69231_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7361_reg_100553.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4525_fu_69255_p2() {
    p_Val2_4525_fu_69255_p2 = (!tmp_12167_cast_fu_69247_p1.read().is_01() || !tmp_6405_fu_69251_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_12167_cast_fu_69247_p1.read()) + sc_biguint<102>(tmp_6405_fu_69251_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4527_fu_69288_p2() {
    p_Val2_4527_fu_69288_p2 = (!tmp_6406_fu_69274_p1.read().is_01() || !tmp_12171_cast_fu_69284_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6406_fu_69274_p1.read()) - sc_biguint<103>(tmp_12171_cast_fu_69284_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4530_fu_69324_p3() {
    p_Val2_4530_fu_69324_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4528_reg_100589.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4531_fu_69346_p2() {
    p_Val2_4531_fu_69346_p2 = (!tmp_12177_cast_fu_69338_p1.read().is_01() || !tmp_6411_fu_69342_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_12177_cast_fu_69338_p1.read()) + sc_biguint<121>(tmp_6411_fu_69342_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4533_fu_69378_p2() {
    p_Val2_4533_fu_69378_p2 = (!tmp_6412_fu_69364_p1.read().is_01() || !tmp_12181_cast_fu_69374_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6412_fu_69364_p1.read()) - sc_biguint<122>(tmp_12181_cast_fu_69374_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4536_fu_69414_p3() {
    p_Val2_4536_fu_69414_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4534_reg_100626.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4537_fu_69436_p2() {
    p_Val2_4537_fu_69436_p2 = (!tmp_12187_cast_fu_69428_p1.read().is_01() || !tmp_6418_fu_69432_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_12187_cast_fu_69428_p1.read()) + sc_biguint<126>(tmp_6418_fu_69432_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4539_fu_69468_p2() {
    p_Val2_4539_fu_69468_p2 = (!tmp_6419_fu_69454_p1.read().is_01() || !tmp_12191_cast_fu_69464_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6419_fu_69454_p1.read()) - sc_biguint<127>(tmp_12191_cast_fu_69464_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4542_fu_69504_p3() {
    p_Val2_4542_fu_69504_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4540_reg_100663.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4543_fu_69526_p2() {
    p_Val2_4543_fu_69526_p2 = (!tmp_12197_cast_fu_69518_p1.read().is_01() || !tmp_6424_fu_69522_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_12197_cast_fu_69518_p1.read()) + sc_biguint<131>(tmp_6424_fu_69522_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4545_fu_69558_p2() {
    p_Val2_4545_fu_69558_p2 = (!tmp_6425_fu_69544_p1.read().is_01() || !tmp_12201_cast_fu_69554_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6425_fu_69544_p1.read()) - sc_biguint<132>(tmp_12201_cast_fu_69554_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4548_fu_69594_p3() {
    p_Val2_4548_fu_69594_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4546_reg_100700.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4549_fu_69616_p2() {
    p_Val2_4549_fu_69616_p2 = (!tmp_12207_cast_fu_69608_p1.read().is_01() || !tmp_6430_fu_69612_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_12207_cast_fu_69608_p1.read()) + sc_biguint<136>(tmp_6430_fu_69612_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4551_fu_69695_p2() {
    p_Val2_4551_fu_69695_p2 = (!tmp_6431_fu_69681_p1.read().is_01() || !tmp_12211_cast_fu_69691_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6431_fu_69681_p1.read()) - sc_biguint<137>(tmp_12211_cast_fu_69691_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4552_fu_69798_p2() {
    p_Val2_4552_fu_69798_p2 = (!tmp2014_cast_fu_69795_p1.read().is_01() || !tmp2011_fu_69790_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2014_cast_fu_69795_p1.read()) + sc_biguint<109>(tmp2011_fu_69790_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4553_fu_69831_p2() {
    p_Val2_4553_fu_69831_p2 = (!tmp_12219_cast_fu_69824_p1.read().is_01() || !tmp_12220_cast_fu_69828_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_12219_cast_fu_69824_p1.read()) - sc_biguint<118>(tmp_12220_cast_fu_69828_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4554_fu_69876_p1() {
    p_Val2_4554_fu_69876_p1 = esl_sext<121,73>(tmp_6441_reg_100838.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4555_fu_69862_p2() {
    p_Val2_4555_fu_69862_p2 = (!tmp_12224_cast_fu_69854_p1.read().is_01() || !tmp_6443_fu_69858_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_12224_cast_fu_69854_p1.read()) + sc_biguint<122>(tmp_6443_fu_69858_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4556_fu_69889_p2() {
    p_Val2_4556_fu_69889_p2 = (!tmp_6444_fu_69879_p1.read().is_01() || !tmp_6445_fu_69882_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6444_fu_69879_p1.read()) + sc_biguint<123>(tmp_6445_fu_69882_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4557_fu_69953_p3() {
    p_Val2_4557_fu_69953_p3 = esl_concat<78,52>(tmp_6447_reg_100864.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4563_fu_70059_p2() {
    p_Val2_4563_fu_70059_p2 = (!tmp_6455_fu_70053_p1.read().is_01() || !tmp_6456_fu_70056_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6455_fu_70053_p1.read()) - sc_bigint<72>(tmp_6456_fu_70056_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4570_fu_70183_p2() {
    p_Val2_4570_fu_70183_p2 = (!tmp2017_cast_fu_70179_p1.read().is_01() || !tmp_6464_fu_70168_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2017_cast_fu_70179_p1.read()) + sc_biguint<44>(tmp_6464_fu_70168_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4572_fu_70252_p2() {
    p_Val2_4572_fu_70252_p2 = (!tmp2018_cast_fu_70248_p1.read().is_01() || !tmp_12354_cast_fu_70236_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2018_cast_fu_70248_p1.read()) + sc_biguint<52>(tmp_12354_cast_fu_70236_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4573_fu_70285_p2() {
    p_Val2_4573_fu_70285_p2 = (!ap_const_lv59_10.is_01() || !tmp_6472_fu_70281_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6472_fu_70281_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4576_fu_13409_p2() {
    p_Val2_4576_fu_13409_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2565_reg_76402.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4577_fu_70301_p2() {
    p_Val2_4577_fu_70301_p2 = (!tmp_6473_fu_70291_p3.read().is_01() || !tmp_12364_cast_fu_70298_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6473_fu_70291_p3.read()) + sc_biguint<108>(tmp_12364_cast_fu_70298_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4578_fu_70307_p4() {
    p_Val2_4578_fu_70307_p4 = p_Val2_4577_fu_70301_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4579_fu_70348_p3() {
    p_Val2_4579_fu_70348_p3 = (!tmp_7370_fu_70317_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7370_fu_70317_p3.read()[0].to_bool())? p_Val2_4578_fu_70307_p4.read(): tmp_6475_fu_70335_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4582_fu_58657_p3() {
    p_Val2_4582_fu_58657_p3 = esl_concat<54,17>(tmp_7373_reg_96018.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4585_fu_58696_p3() {
    p_Val2_4585_fu_58696_p3 = (!tmp_7375_fu_58667_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7375_fu_58667_p3.read()[0].to_bool())? tmp_6478_fu_58683_p4.read(): tmp_6479_fu_58692_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4586_fu_58720_p2() {
    p_Val2_4586_fu_58720_p2 = (!tmp_12243_cast_fu_58712_p1.read().is_01() || !tmp_6481_fu_58716_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_12243_cast_fu_58712_p1.read()) + sc_biguint<77>(tmp_6481_fu_58716_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4588_fu_58745_p2() {
    p_Val2_4588_fu_58745_p2 = (!tmp_6482_fu_58739_p1.read().is_01() || !tmp_6483_fu_58742_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6482_fu_58739_p1.read()) - sc_biguint<78>(tmp_6483_fu_58742_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4591_cast_fu_26160_p1() {
    p_Val2_4591_cast_fu_26160_p1 = esl_sext<121,109>(p_Val2_2660_reg_81918.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4592_fu_58781_p3() {
    p_Val2_4592_fu_58781_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4589_reg_96051.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4593_fu_58803_p2() {
    p_Val2_4593_fu_58803_p2 = (!tmp_12252_cast_fu_58795_p1.read().is_01() || !tmp_6487_fu_58799_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_12252_cast_fu_58795_p1.read()) + sc_biguint<82>(tmp_6487_fu_58799_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4595_fu_58835_p2() {
    p_Val2_4595_fu_58835_p2 = (!tmp_6488_fu_58821_p1.read().is_01() || !tmp_12256_cast_fu_58831_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6488_fu_58821_p1.read()) - sc_biguint<83>(tmp_12256_cast_fu_58831_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4598_fu_58864_p4() {
    p_Val2_4598_fu_58864_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7376_reg_96093.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4599_fu_58888_p2() {
    p_Val2_4599_fu_58888_p2 = (!tmp_12261_cast_fu_58880_p1.read().is_01() || !tmp_6492_fu_58884_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_12261_cast_fu_58880_p1.read()) + sc_biguint<102>(tmp_6492_fu_58884_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4601_fu_58921_p2() {
    p_Val2_4601_fu_58921_p2 = (!tmp_6493_fu_58907_p1.read().is_01() || !tmp_12265_cast_fu_58917_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6493_fu_58907_p1.read()) - sc_biguint<103>(tmp_12265_cast_fu_58917_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4605_fu_58957_p3() {
    p_Val2_4605_fu_58957_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4602_reg_96129.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4606_fu_58979_p2() {
    p_Val2_4606_fu_58979_p2 = (!tmp_12271_cast_fu_58971_p1.read().is_01() || !tmp_6498_fu_58975_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_12271_cast_fu_58971_p1.read()) + sc_biguint<121>(tmp_6498_fu_58975_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4608_fu_59011_p2() {
    p_Val2_4608_fu_59011_p2 = (!tmp_6499_fu_58997_p1.read().is_01() || !tmp_12275_cast_fu_59007_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6499_fu_58997_p1.read()) - sc_biguint<122>(tmp_12275_cast_fu_59007_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4611_fu_59047_p3() {
    p_Val2_4611_fu_59047_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4609_reg_96166.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4612_fu_59069_p2() {
    p_Val2_4612_fu_59069_p2 = (!tmp_12281_cast_fu_59061_p1.read().is_01() || !tmp_6504_fu_59065_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_12281_cast_fu_59061_p1.read()) + sc_biguint<126>(tmp_6504_fu_59065_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4614_fu_59101_p2() {
    p_Val2_4614_fu_59101_p2 = (!tmp_6505_fu_59087_p1.read().is_01() || !tmp_12285_cast_fu_59097_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6505_fu_59087_p1.read()) - sc_biguint<127>(tmp_12285_cast_fu_59097_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4618_fu_59137_p3() {
    p_Val2_4618_fu_59137_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4615_reg_96203.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4619_fu_59159_p2() {
    p_Val2_4619_fu_59159_p2 = (!tmp_12291_cast_fu_59151_p1.read().is_01() || !tmp_6510_fu_59155_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_12291_cast_fu_59151_p1.read()) + sc_biguint<131>(tmp_6510_fu_59155_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4622_fu_59191_p2() {
    p_Val2_4622_fu_59191_p2 = (!tmp_6511_fu_59177_p1.read().is_01() || !tmp_12295_cast_fu_59187_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6511_fu_59177_p1.read()) - sc_biguint<132>(tmp_12295_cast_fu_59187_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4625_fu_14312_p1() {
    p_Val2_4625_fu_14312_p1 = p_Val2_2606_fu_14276_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4628_fu_59227_p3() {
    p_Val2_4628_fu_59227_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4623_reg_96240.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4629_fu_59249_p2() {
    p_Val2_4629_fu_59249_p2 = (!tmp_12301_cast_fu_59241_p1.read().is_01() || !tmp_6516_fu_59245_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_12301_cast_fu_59241_p1.read()) + sc_biguint<136>(tmp_6516_fu_59245_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4631_fu_14302_p4() {
    p_Val2_4631_fu_14302_p4 = p_Val2_2606_fu_14276_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4632_fu_59328_p2() {
    p_Val2_4632_fu_59328_p2 = (!tmp_6517_fu_59314_p1.read().is_01() || !tmp_12305_cast_fu_59324_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6517_fu_59314_p1.read()) - sc_biguint<137>(tmp_12305_cast_fu_59324_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4633_fu_59431_p2() {
    p_Val2_4633_fu_59431_p2 = (!tmp2079_cast_fu_59428_p1.read().is_01() || !tmp2076_fu_59423_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2079_cast_fu_59428_p1.read()) + sc_biguint<109>(tmp2076_fu_59423_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4634_fu_59464_p2() {
    p_Val2_4634_fu_59464_p2 = (!tmp_12313_cast_fu_59457_p1.read().is_01() || !tmp_12314_cast_fu_59461_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_12313_cast_fu_59457_p1.read()) - sc_biguint<118>(tmp_12314_cast_fu_59461_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4635_fu_59509_p1() {
    p_Val2_4635_fu_59509_p1 = esl_sext<121,73>(tmp_6525_reg_96378.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4636_fu_59495_p2() {
    p_Val2_4636_fu_59495_p2 = (!tmp_12318_cast_fu_59487_p1.read().is_01() || !tmp_6527_fu_59491_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_12318_cast_fu_59487_p1.read()) + sc_biguint<122>(tmp_6527_fu_59491_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4637_fu_59522_p2() {
    p_Val2_4637_fu_59522_p2 = (!tmp_6528_fu_59512_p1.read().is_01() || !tmp_6529_fu_59515_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6528_fu_59512_p1.read()) + sc_biguint<123>(tmp_6529_fu_59515_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4638_fu_59586_p3() {
    p_Val2_4638_fu_59586_p3 = esl_concat<78,52>(tmp_6531_reg_96404.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4645_fu_59692_p2() {
    p_Val2_4645_fu_59692_p2 = (!tmp_6537_fu_59686_p1.read().is_01() || !tmp_6538_fu_59689_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6537_fu_59686_p1.read()) - sc_bigint<72>(tmp_6538_fu_59689_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4651_fu_59816_p2() {
    p_Val2_4651_fu_59816_p2 = (!tmp2082_cast_fu_59812_p1.read().is_01() || !tmp_6549_fu_59801_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2082_cast_fu_59812_p1.read()) + sc_biguint<44>(tmp_6549_fu_59801_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4653_fu_59885_p2() {
    p_Val2_4653_fu_59885_p2 = (!tmp2083_cast_fu_59881_p1.read().is_01() || !tmp_12389_cast_fu_59869_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2083_cast_fu_59881_p1.read()) + sc_biguint<52>(tmp_12389_cast_fu_59869_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4654_fu_59918_p2() {
    p_Val2_4654_fu_59918_p2 = (!ap_const_lv59_10.is_01() || !tmp_6558_fu_59914_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6558_fu_59914_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4657_fu_59934_p2() {
    p_Val2_4657_fu_59934_p2 = (!tmp_6559_fu_59924_p3.read().is_01() || !tmp_12399_cast_fu_59931_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6559_fu_59924_p3.read()) + sc_biguint<108>(tmp_12399_cast_fu_59931_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4658_cast_fu_15810_p1() {
    p_Val2_4658_cast_fu_15810_p1 = esl_sext<121,109>(p_Val2_2727_reg_77456.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4658_fu_59940_p4() {
    p_Val2_4658_fu_59940_p4 = p_Val2_4657_fu_59934_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4659_fu_59981_p3() {
    p_Val2_4659_fu_59981_p3 = (!tmp_7385_fu_59950_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7385_fu_59950_p3.read()[0].to_bool())? p_Val2_4658_fu_59940_p4.read(): tmp_6561_fu_59968_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4661_fu_70436_p3() {
    p_Val2_4661_fu_70436_p3 = esl_concat<78,52>(tmp_6235_reg_100094.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4663_cast1_fu_15891_p2() {
    p_Val2_4663_cast1_fu_15891_p2 = (!tmp_3853_fu_15882_p1.read().is_01() || !tmp_5697_reg_77482.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_3853_fu_15882_p1.read()) + sc_biguint<120>(tmp_5697_reg_77482.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4663_cast_fu_15896_p2() {
    p_Val2_4663_cast_fu_15896_p2 = (!p_Val2_2729_fu_15872_p1.read().is_01() || !tmp_5694_reg_77477.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2729_fu_15872_p1.read()) + sc_biguint<121>(tmp_5694_reg_77477.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4663_fu_70460_p4() {
    p_Val2_4663_fu_70460_p4 = p_Val2_11037_cast_reg_100089.read().range(119, 104);
}

void particlemaster_ReadCalculations::thread_p_Val2_4667_fu_70580_p2() {
    p_Val2_4667_fu_70580_p2 = (!tmp_6571_fu_70573_p1.read().is_01() || !tmp_6572_fu_70577_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6571_fu_70573_p1.read()) - sc_bigint<72>(tmp_6572_fu_70577_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4672_fu_70704_p2() {
    p_Val2_4672_fu_70704_p2 = (!tmp_6580_fu_70689_p1.read().is_01() || !tmp2019_cast_fu_70700_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_6580_fu_70689_p1.read()) + sc_biguint<44>(tmp2019_cast_fu_70700_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4674_fu_70773_p2() {
    p_Val2_4674_fu_70773_p2 = (!tmp_12638_cast_fu_70757_p1.read().is_01() || !tmp2020_cast_fu_70769_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_12638_cast_fu_70757_p1.read()) + sc_biguint<52>(tmp2020_cast_fu_70769_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4675_fu_70806_p2() {
    p_Val2_4675_fu_70806_p2 = (!ap_const_lv59_10.is_01() || !tmp_6588_fu_70802_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6588_fu_70802_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4677_fu_70822_p2() {
    p_Val2_4677_fu_70822_p2 = (!tmp_12648_cast_fu_70819_p1.read().is_01() || !tmp_6589_fu_70812_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_12648_cast_fu_70819_p1.read()) + sc_biguint<108>(tmp_6589_fu_70812_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4679_fu_60069_p3() {
    p_Val2_4679_fu_60069_p3 = esl_concat<78,52>(tmp_6345_reg_95634.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4681_fu_60093_p4() {
    p_Val2_4681_fu_60093_p4 = p_Val2_8051_cast_reg_95629.read().range(119, 104);
}

void particlemaster_ReadCalculations::thread_p_Val2_4685_fu_60213_p2() {
    p_Val2_4685_fu_60213_p2 = (!tmp_6616_fu_60206_p1.read().is_01() || !tmp_6617_fu_60210_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6616_fu_60206_p1.read()) - sc_bigint<72>(tmp_6617_fu_60210_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4690_fu_60337_p2() {
    p_Val2_4690_fu_60337_p2 = (!tmp_6625_fu_60322_p1.read().is_01() || !tmp2084_cast_fu_60333_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_6625_fu_60322_p1.read()) + sc_biguint<44>(tmp2084_cast_fu_60333_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4692_fu_60406_p2() {
    p_Val2_4692_fu_60406_p2 = (!tmp_12673_cast_fu_60390_p1.read().is_01() || !tmp2085_cast_fu_60402_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp_12673_cast_fu_60390_p1.read()) + sc_biguint<52>(tmp2085_cast_fu_60402_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4693_fu_60439_p2() {
    p_Val2_4693_fu_60439_p2 = (!ap_const_lv59_10.is_01() || !tmp_6636_fu_60435_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6636_fu_60435_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4695_fu_60455_p2() {
    p_Val2_4695_fu_60455_p2 = (!tmp_12683_cast_fu_60452_p1.read().is_01() || !tmp_6637_fu_60445_p3.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_12683_cast_fu_60452_p1.read()) + sc_biguint<108>(tmp_6637_fu_60445_p3.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4699_fu_71298_p3() {
    p_Val2_4699_fu_71298_p3 = esl_concat<54,17>(tmp_7412_reg_101428.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4701_fu_71337_p3() {
    p_Val2_4701_fu_71337_p3 = (!tmp_7414_fu_71308_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7414_fu_71308_p3.read()[0].to_bool())? tmp_6669_fu_71324_p4.read(): tmp_6670_fu_71333_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4702_fu_71361_p2() {
    p_Val2_4702_fu_71361_p2 = (!tmp_12741_cast_fu_71353_p1.read().is_01() || !tmp_6672_fu_71357_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_12741_cast_fu_71353_p1.read()) + sc_biguint<77>(tmp_6672_fu_71357_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4704_fu_71386_p2() {
    p_Val2_4704_fu_71386_p2 = (!tmp_6673_fu_71380_p1.read().is_01() || !tmp_6674_fu_71383_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6673_fu_71380_p1.read()) - sc_biguint<78>(tmp_6674_fu_71383_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4707_fu_71422_p3() {
    p_Val2_4707_fu_71422_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4705_reg_101461.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4708_fu_71444_p2() {
    p_Val2_4708_fu_71444_p2 = (!tmp_12750_cast_fu_71436_p1.read().is_01() || !tmp_6678_fu_71440_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_12750_cast_fu_71436_p1.read()) + sc_biguint<82>(tmp_6678_fu_71440_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4710_fu_71476_p2() {
    p_Val2_4710_fu_71476_p2 = (!tmp_6679_fu_71462_p1.read().is_01() || !tmp_12754_cast_fu_71472_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6679_fu_71462_p1.read()) - sc_biguint<83>(tmp_12754_cast_fu_71472_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4712_fu_71505_p4() {
    p_Val2_4712_fu_71505_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7415_reg_101503.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4713_fu_71529_p2() {
    p_Val2_4713_fu_71529_p2 = (!tmp_12759_cast_fu_71521_p1.read().is_01() || !tmp_6683_fu_71525_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_12759_cast_fu_71521_p1.read()) + sc_biguint<102>(tmp_6683_fu_71525_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4715_fu_71562_p2() {
    p_Val2_4715_fu_71562_p2 = (!tmp_6684_fu_71548_p1.read().is_01() || !tmp_12763_cast_fu_71558_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6684_fu_71548_p1.read()) - sc_biguint<103>(tmp_12763_cast_fu_71558_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4717_fu_8121_p1() {
    p_Val2_4717_fu_8121_p1 = reg_6316.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_4719_fu_71598_p3() {
    p_Val2_4719_fu_71598_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4716_reg_101539.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4720_fu_71620_p2() {
    p_Val2_4720_fu_71620_p2 = (!tmp_12769_cast_fu_71612_p1.read().is_01() || !tmp_6691_fu_71616_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_12769_cast_fu_71612_p1.read()) + sc_biguint<121>(tmp_6691_fu_71616_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4722_fu_71652_p2() {
    p_Val2_4722_fu_71652_p2 = (!tmp_6692_fu_71638_p1.read().is_01() || !tmp_12773_cast_fu_71648_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6692_fu_71638_p1.read()) - sc_biguint<122>(tmp_12773_cast_fu_71648_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4725_fu_71688_p3() {
    p_Val2_4725_fu_71688_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4723_reg_101576.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4726_fu_71710_p2() {
    p_Val2_4726_fu_71710_p2 = (!tmp_12779_cast_fu_71702_p1.read().is_01() || !tmp_6697_fu_71706_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_12779_cast_fu_71702_p1.read()) + sc_biguint<126>(tmp_6697_fu_71706_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4728_fu_71742_p2() {
    p_Val2_4728_fu_71742_p2 = (!tmp_6698_fu_71728_p1.read().is_01() || !tmp_12783_cast_fu_71738_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6698_fu_71728_p1.read()) - sc_biguint<127>(tmp_12783_cast_fu_71738_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4731_fu_71778_p3() {
    p_Val2_4731_fu_71778_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4729_reg_101613.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4732_fu_71800_p2() {
    p_Val2_4732_fu_71800_p2 = (!tmp_12789_cast_fu_71792_p1.read().is_01() || !tmp_6703_fu_71796_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_12789_cast_fu_71792_p1.read()) + sc_biguint<131>(tmp_6703_fu_71796_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4734_fu_71832_p2() {
    p_Val2_4734_fu_71832_p2 = (!tmp_6704_fu_71818_p1.read().is_01() || !tmp_12793_cast_fu_71828_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6704_fu_71818_p1.read()) - sc_biguint<132>(tmp_12793_cast_fu_71828_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4737_fu_71868_p3() {
    p_Val2_4737_fu_71868_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4735_reg_101650.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4738_fu_71890_p2() {
    p_Val2_4738_fu_71890_p2 = (!tmp_12799_cast_fu_71882_p1.read().is_01() || !tmp_6709_fu_71886_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_12799_cast_fu_71882_p1.read()) + sc_biguint<136>(tmp_6709_fu_71886_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4741_fu_71963_p2() {
    p_Val2_4741_fu_71963_p2 = (!tmp_6710_fu_71949_p1.read().is_01() || !tmp_12803_cast_fu_71959_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6710_fu_71949_p1.read()) - sc_biguint<137>(tmp_12803_cast_fu_71959_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4742_fu_72066_p2() {
    p_Val2_4742_fu_72066_p2 = (!tmp2025_cast_fu_72063_p1.read().is_01() || !tmp2022_fu_72058_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2025_cast_fu_72063_p1.read()) + sc_biguint<109>(tmp2022_fu_72058_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4743_fu_72099_p2() {
    p_Val2_4743_fu_72099_p2 = (!tmp_12811_cast_fu_72092_p1.read().is_01() || !tmp_12812_cast_fu_72096_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_12811_cast_fu_72092_p1.read()) - sc_biguint<118>(tmp_12812_cast_fu_72096_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4746_fu_72144_p1() {
    p_Val2_4746_fu_72144_p1 = esl_sext<121,73>(tmp_6717_reg_101783.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4747_fu_72130_p2() {
    p_Val2_4747_fu_72130_p2 = (!tmp_12816_cast_fu_72122_p1.read().is_01() || !tmp_6719_fu_72126_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_12816_cast_fu_72122_p1.read()) + sc_biguint<122>(tmp_6719_fu_72126_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4748_fu_72157_p2() {
    p_Val2_4748_fu_72157_p2 = (!tmp_6720_fu_72147_p1.read().is_01() || !tmp_6721_fu_72150_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6720_fu_72147_p1.read()) + sc_biguint<123>(tmp_6721_fu_72150_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4750_fu_72221_p3() {
    p_Val2_4750_fu_72221_p3 = esl_concat<78,52>(tmp_6723_reg_101809.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4751_fu_25572_p2() {
    p_Val2_4751_fu_25572_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2630_reg_81638.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4758_fu_72327_p2() {
    p_Val2_4758_fu_72327_p2 = (!tmp_6729_fu_72321_p1.read().is_01() || !tmp_6730_fu_72324_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6729_fu_72321_p1.read()) - sc_bigint<72>(tmp_6730_fu_72324_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4765_fu_72451_p2() {
    p_Val2_4765_fu_72451_p2 = (!tmp2028_cast_fu_72447_p1.read().is_01() || !tmp_6738_fu_72436_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2028_cast_fu_72447_p1.read()) + sc_biguint<44>(tmp_6738_fu_72436_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4767_fu_72520_p2() {
    p_Val2_4767_fu_72520_p2 = (!tmp2029_cast_fu_72516_p1.read().is_01() || !tmp_12946_cast_fu_72504_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2029_cast_fu_72516_p1.read()) + sc_biguint<52>(tmp_12946_cast_fu_72504_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4768_fu_72553_p2() {
    p_Val2_4768_fu_72553_p2 = (!ap_const_lv59_10.is_01() || !tmp_6746_fu_72549_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6746_fu_72549_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4770_fu_72569_p2() {
    p_Val2_4770_fu_72569_p2 = (!tmp_6747_fu_72559_p3.read().is_01() || !tmp_12956_cast_fu_72566_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6747_fu_72559_p3.read()) + sc_biguint<108>(tmp_12956_cast_fu_72566_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4772_fu_72575_p4() {
    p_Val2_4772_fu_72575_p4 = p_Val2_4770_fu_72569_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4774_fu_72616_p3() {
    p_Val2_4774_fu_72616_p3 = (!tmp_7424_fu_72585_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7424_fu_72585_p3.read()[0].to_bool())? p_Val2_4772_fu_72575_p4.read(): tmp_6750_fu_72603_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4778_fu_60931_p3() {
    p_Val2_4778_fu_60931_p3 = esl_concat<54,17>(tmp_7427_reg_96968.read(), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4780_fu_60970_p3() {
    p_Val2_4780_fu_60970_p3 = (!tmp_7429_fu_60941_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_7429_fu_60941_p3.read()[0].to_bool())? tmp_6754_fu_60957_p4.read(): tmp_6755_fu_60966_p1.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4782_fu_60994_p2() {
    p_Val2_4782_fu_60994_p2 = (!tmp_12835_cast_fu_60986_p1.read().is_01() || !tmp_6757_fu_60990_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(tmp_12835_cast_fu_60986_p1.read()) + sc_biguint<77>(tmp_6757_fu_60990_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4784_fu_61019_p2() {
    p_Val2_4784_fu_61019_p2 = (!tmp_6758_fu_61013_p1.read().is_01() || !tmp_6759_fu_61016_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(tmp_6758_fu_61013_p1.read()) - sc_biguint<78>(tmp_6759_fu_61016_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4787_fu_61055_p3() {
    p_Val2_4787_fu_61055_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_4785_reg_97001.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4788_fu_61077_p2() {
    p_Val2_4788_fu_61077_p2 = (!tmp_12844_cast_fu_61069_p1.read().is_01() || !tmp_6763_fu_61073_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(tmp_12844_cast_fu_61069_p1.read()) + sc_biguint<82>(tmp_6763_fu_61073_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4790_fu_61109_p2() {
    p_Val2_4790_fu_61109_p2 = (!tmp_6764_fu_61095_p1.read().is_01() || !tmp_12848_cast_fu_61105_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(tmp_6764_fu_61095_p1.read()) - sc_biguint<83>(tmp_12848_cast_fu_61105_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4792_fu_26441_p1() {
    p_Val2_4792_fu_26441_p1 = p_Val2_2671_fu_26405_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4793_fu_61138_p4() {
    p_Val2_4793_fu_61138_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, tmp_7430_reg_97043.read()), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4794_fu_61162_p2() {
    p_Val2_4794_fu_61162_p2 = (!tmp_12853_cast_fu_61154_p1.read().is_01() || !tmp_6769_fu_61158_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(tmp_12853_cast_fu_61154_p1.read()) + sc_biguint<102>(tmp_6769_fu_61158_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4796_fu_61195_p2() {
    p_Val2_4796_fu_61195_p2 = (!tmp_6770_fu_61181_p1.read().is_01() || !tmp_12857_cast_fu_61191_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(tmp_6770_fu_61181_p1.read()) - sc_biguint<103>(tmp_12857_cast_fu_61191_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4799_fu_26431_p4() {
    p_Val2_4799_fu_26431_p4 = p_Val2_2671_fu_26405_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4802_fu_61231_p3() {
    p_Val2_4802_fu_61231_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_4797_reg_97079.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4803_fu_61253_p2() {
    p_Val2_4803_fu_61253_p2 = (!tmp_12863_cast_fu_61245_p1.read().is_01() || !tmp_6775_fu_61249_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(tmp_12863_cast_fu_61245_p1.read()) + sc_biguint<121>(tmp_6775_fu_61249_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4805_fu_61285_p2() {
    p_Val2_4805_fu_61285_p2 = (!tmp_6776_fu_61271_p1.read().is_01() || !tmp_12867_cast_fu_61281_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(tmp_6776_fu_61271_p1.read()) - sc_biguint<122>(tmp_12867_cast_fu_61281_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4808_fu_61321_p3() {
    p_Val2_4808_fu_61321_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_4806_reg_97116.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4809_fu_61343_p2() {
    p_Val2_4809_fu_61343_p2 = (!tmp_12873_cast_fu_61335_p1.read().is_01() || !tmp_6781_fu_61339_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(tmp_12873_cast_fu_61335_p1.read()) + sc_biguint<126>(tmp_6781_fu_61339_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4811_fu_61375_p2() {
    p_Val2_4811_fu_61375_p2 = (!tmp_6782_fu_61361_p1.read().is_01() || !tmp_12877_cast_fu_61371_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(tmp_6782_fu_61361_p1.read()) - sc_biguint<127>(tmp_12877_cast_fu_61371_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4815_fu_61411_p3() {
    p_Val2_4815_fu_61411_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_4813_reg_97153.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4817_fu_61433_p2() {
    p_Val2_4817_fu_61433_p2 = (!tmp_12883_cast_fu_61425_p1.read().is_01() || !tmp_6787_fu_61429_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(tmp_12883_cast_fu_61425_p1.read()) + sc_biguint<131>(tmp_6787_fu_61429_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4819_fu_61465_p2() {
    p_Val2_4819_fu_61465_p2 = (!tmp_6788_fu_61451_p1.read().is_01() || !tmp_12887_cast_fu_61461_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(tmp_6788_fu_61451_p1.read()) - sc_biguint<132>(tmp_12887_cast_fu_61461_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4823_fu_61501_p3() {
    p_Val2_4823_fu_61501_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_4820_reg_97190.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4824_fu_61523_p2() {
    p_Val2_4824_fu_61523_p2 = (!tmp_12893_cast_fu_61515_p1.read().is_01() || !tmp_6793_fu_61519_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(tmp_12893_cast_fu_61515_p1.read()) + sc_biguint<136>(tmp_6793_fu_61519_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4827_fu_61596_p2() {
    p_Val2_4827_fu_61596_p2 = (!tmp_6795_fu_61582_p1.read().is_01() || !tmp_12897_cast_fu_61592_p1.read().is_01())? sc_lv<137>(): (sc_biguint<137>(tmp_6795_fu_61582_p1.read()) - sc_biguint<137>(tmp_12897_cast_fu_61592_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4828_fu_61699_p2() {
    p_Val2_4828_fu_61699_p2 = (!tmp2090_cast_fu_61696_p1.read().is_01() || !tmp2087_fu_61691_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2090_cast_fu_61696_p1.read()) + sc_biguint<109>(tmp2087_fu_61691_p2.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4829_fu_61732_p2() {
    p_Val2_4829_fu_61732_p2 = (!tmp_12905_cast_fu_61725_p1.read().is_01() || !tmp_12906_cast_fu_61729_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(tmp_12905_cast_fu_61725_p1.read()) - sc_biguint<118>(tmp_12906_cast_fu_61729_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4830_fu_61777_p1() {
    p_Val2_4830_fu_61777_p1 = esl_sext<121,73>(tmp_6803_reg_97323.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4834_fu_15222_p2() {
    p_Val2_4834_fu_15222_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2697_reg_77176.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_4835_fu_61763_p2() {
    p_Val2_4835_fu_61763_p2 = (!tmp_12910_cast_fu_61755_p1.read().is_01() || !tmp_6805_fu_61759_p1.read().is_01())? sc_lv<122>(): (sc_bigint<122>(tmp_12910_cast_fu_61755_p1.read()) + sc_biguint<122>(tmp_6805_fu_61759_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4836_fu_61790_p2() {
    p_Val2_4836_fu_61790_p2 = (!tmp_6806_fu_61780_p1.read().is_01() || !tmp_6807_fu_61783_p1.read().is_01())? sc_lv<123>(): (sc_biguint<123>(tmp_6806_fu_61780_p1.read()) + sc_biguint<123>(tmp_6807_fu_61783_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4837_fu_61854_p3() {
    p_Val2_4837_fu_61854_p3 = esl_concat<78,52>(tmp_6809_reg_97349.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4843_fu_61960_p2() {
    p_Val2_4843_fu_61960_p2 = (!tmp_6815_fu_61954_p1.read().is_01() || !tmp_6816_fu_61957_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(tmp_6815_fu_61954_p1.read()) - sc_bigint<72>(tmp_6816_fu_61957_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4850_fu_62084_p2() {
    p_Val2_4850_fu_62084_p2 = (!tmp2093_cast_fu_62080_p1.read().is_01() || !tmp_6826_fu_62069_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp2093_cast_fu_62080_p1.read()) + sc_biguint<44>(tmp_6826_fu_62069_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4852_fu_62153_p2() {
    p_Val2_4852_fu_62153_p2 = (!tmp2094_cast_fu_62149_p1.read().is_01() || !tmp_12981_cast_fu_62137_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(tmp2094_cast_fu_62149_p1.read()) + sc_biguint<52>(tmp_12981_cast_fu_62137_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4854_fu_62186_p2() {
    p_Val2_4854_fu_62186_p2 = (!ap_const_lv59_10.is_01() || !tmp_6834_fu_62182_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(tmp_6834_fu_62182_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4856_fu_62202_p2() {
    p_Val2_4856_fu_62202_p2 = (!tmp_6835_fu_62192_p3.read().is_01() || !tmp_12991_cast_fu_62199_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(tmp_6835_fu_62192_p3.read()) + sc_biguint<108>(tmp_12991_cast_fu_62199_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_4857_fu_62208_p4() {
    p_Val2_4857_fu_62208_p4 = p_Val2_4856_fu_62202_p2.read().range(106, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_4858_fu_62249_p3() {
    p_Val2_4858_fu_62249_p3 = (!tmp_7439_fu_62218_p3.read()[0].is_01())? sc_lv<58>(): ((tmp_7439_fu_62218_p3.read()[0].to_bool())? p_Val2_4857_fu_62208_p4.read(): tmp_6837_fu_62236_p3.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_4896_fu_16091_p1() {
    p_Val2_4896_fu_16091_p1 = p_Val2_2738_fu_16055_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_4904_fu_16081_p4() {
    p_Val2_4904_fu_16081_p4 = p_Val2_2738_fu_16055_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_4959_cast_fu_28428_p1() {
    p_Val2_4959_cast_fu_28428_p1 = esl_sext<121,109>(p_Val2_2830_reg_82863.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5026_cast_fu_18078_p1() {
    p_Val2_5026_cast_fu_18078_p1 = esl_sext<121,109>(p_Val2_2897_reg_78401.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5031_cast1_fu_18159_p2() {
    p_Val2_5031_cast1_fu_18159_p2 = (!tmp_4134_fu_18150_p1.read().is_01() || !tmp_6330_reg_78427.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_4134_fu_18150_p1.read()) + sc_biguint<120>(tmp_6330_reg_78427.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5031_cast_fu_18164_p2() {
    p_Val2_5031_cast_fu_18164_p2 = (!p_Val2_2899_fu_18140_p1.read().is_01() || !tmp_6327_reg_78422.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2899_fu_18140_p1.read()) + sc_biguint<121>(tmp_6327_reg_78422.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5043_fu_26962_p1() {
    p_Val2_5043_fu_26962_p1 = p_Val2_2757_fu_26926_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5112_fu_27412_p1() {
    p_Val2_5112_fu_27412_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5124_cast_fu_7247_p1() {
    p_Val2_5124_cast_fu_7247_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5128_cast_fu_7251_p1() {
    p_Val2_5128_cast_fu_7251_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5129_cast_fu_7255_p1() {
    p_Val2_5129_cast_fu_7255_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5134_cast_fu_7259_p1() {
    p_Val2_5134_cast_fu_7259_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5135_cast_fu_7263_p1() {
    p_Val2_5135_cast_fu_7263_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5144_cast_fu_7193_p1() {
    p_Val2_5144_cast_fu_7193_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5163_cast_fu_7217_p1() {
    p_Val2_5163_cast_fu_7217_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5194_cast_fu_7407_p2() {
    p_Val2_5194_cast_fu_7407_p2 = (!tmp_3620_reg_73753.read().is_01() || !tmp_2875_fu_7398_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_3620_reg_73753.read()) + sc_bigint<120>(tmp_2875_fu_7398_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5221_fu_16612_p1() {
    p_Val2_5221_fu_16612_p1 = p_Val2_2775_fu_16576_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5288_fu_17062_p1() {
    p_Val2_5288_fu_17062_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5335_fu_27846_p2() {
    p_Val2_5335_fu_27846_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2800_reg_82588.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5365_cast_fu_30050_p1() {
    p_Val2_5365_cast_fu_30050_p1 = esl_sext<121,109>(p_Val2_2965_reg_83591.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5367_fu_28709_p1() {
    p_Val2_5367_fu_28709_p1 = p_Val2_2841_fu_28673_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5373_fu_28699_p4() {
    p_Val2_5373_fu_28699_p4 = p_Val2_2841_fu_28673_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5428_fu_17496_p2() {
    p_Val2_5428_fu_17496_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2867_reg_78126.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5479_fu_18359_p1() {
    p_Val2_5479_fu_18359_p1 = p_Val2_2908_fu_18323_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5498_fu_18349_p4() {
    p_Val2_5498_fu_18349_p4 = p_Val2_2908_fu_18323_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5552_cast_fu_19469_p1() {
    p_Val2_5552_cast_fu_19469_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5555_cast_fu_42271_p1() {
    p_Val2_5555_cast_fu_42271_p1 = esl_sext<121,109>(p_Val2_3031_reg_88959.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5561_cast_fu_19473_p1() {
    p_Val2_5561_cast_fu_19473_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5565_fu_23430_p1() {
    p_Val2_5565_fu_23430_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5576_cast_fu_19477_p1() {
    p_Val2_5576_cast_fu_19477_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5580_cast_fu_19481_p1() {
    p_Val2_5580_cast_fu_19481_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5581_cast_fu_19485_p1() {
    p_Val2_5581_cast_fu_19485_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5586_cast_fu_19415_p1() {
    p_Val2_5586_cast_fu_19415_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5587_cast_fu_19439_p1() {
    p_Val2_5587_cast_fu_19439_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5616_cast1_fu_19633_p2() {
    p_Val2_5616_cast1_fu_19633_p2 = (!tmp_2977_fu_19624_p1.read().is_01() || !tmp_3876_reg_79049.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_2977_fu_19624_p1.read()) + sc_biguint<120>(tmp_3876_reg_79049.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5616_cast_fu_19638_p2() {
    p_Val2_5616_cast_fu_19638_p2 = (!p_Val2_2131_fu_19614_p1.read().is_01() || !tmp_3875_reg_79044.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2131_fu_19614_p1.read()) + sc_biguint<121>(tmp_3875_reg_79044.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5620_fu_26910_p4() {
    p_Val2_5620_fu_26910_p4 = p_Val2_2533_reg_81161.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_5622_fu_26952_p4() {
    p_Val2_5622_fu_26952_p4 = p_Val2_2757_fu_26926_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5632_cast_fu_31916_p1() {
    p_Val2_5632_cast_fu_31916_p1 = esl_sext<121,109>(p_Val2_3098_reg_84494.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5637_cast1_fu_31997_p2() {
    p_Val2_5637_cast1_fu_31997_p2 = (!tmp_4448_fu_31988_p1.read().is_01() || !tmp_7018_reg_84520.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_4448_fu_31988_p1.read()) + sc_biguint<120>(tmp_7018_reg_84520.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5637_cast_fu_32002_p2() {
    p_Val2_5637_cast_fu_32002_p2 = (!p_Val2_3100_fu_31978_p1.read().is_01() || !tmp_7017_reg_84515.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_3100_fu_31978_p1.read()) + sc_biguint<121>(tmp_7017_reg_84515.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5649_fu_13073_p1() {
    p_Val2_5649_fu_13073_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5657_cast_fu_9112_p1() {
    p_Val2_5657_cast_fu_9112_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5660_cast_fu_9116_p1() {
    p_Val2_5660_cast_fu_9116_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5662_cast_fu_9120_p1() {
    p_Val2_5662_cast_fu_9120_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5670_cast_fu_9124_p1() {
    p_Val2_5670_cast_fu_9124_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5679_cast_fu_9128_p1() {
    p_Val2_5679_cast_fu_9128_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5686_fu_16560_p4() {
    p_Val2_5686_fu_16560_p4 = p_Val2_2599_reg_76719.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_5688_cast_fu_9058_p1() {
    p_Val2_5688_cast_fu_9058_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5695_fu_16602_p4() {
    p_Val2_5695_fu_16602_p4 = p_Val2_2775_fu_16576_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5697_cast_fu_9082_p1() {
    p_Val2_5697_cast_fu_9082_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5767_cast_fu_43822_p1() {
    p_Val2_5767_cast_fu_43822_p1 = esl_sext<121,109>(p_Val2_3166_reg_89646.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5788_fu_29440_p2() {
    p_Val2_5788_fu_29440_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_2935_reg_83306.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5829_fu_30322_p1() {
    p_Val2_5829_fu_30322_p1 = p_Val2_2976_fu_30286_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5842_cast_fu_33467_p1() {
    p_Val2_5842_cast_fu_33467_p1 = esl_sext<121,109>(p_Val2_3236_reg_85181.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5847_cast_fu_33544_p2() {
    p_Val2_5847_cast_fu_33544_p2 = (!tmp_7056_reg_85202.read().is_01() || !tmp_4663_fu_33535_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_7056_reg_85202.read()) + sc_bigint<120>(tmp_4663_fu_33535_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_5896_fu_41683_p2() {
    p_Val2_5896_fu_41683_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3001_reg_88679.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5904_fu_42552_p1() {
    p_Val2_5904_fu_42552_p1 = p_Val2_3042_fu_42516_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5906_fu_42542_p4() {
    p_Val2_5906_fu_42542_p4 = p_Val2_3042_fu_42516_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5916_fu_31328_p2() {
    p_Val2_5916_fu_31328_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3068_reg_84214.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5924_fu_32197_p1() {
    p_Val2_5924_fu_32197_p1 = p_Val2_3109_fu_32161_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5926_fu_32187_p4() {
    p_Val2_5926_fu_32187_p4 = p_Val2_3109_fu_32161_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5939_fu_42888_p1() {
    p_Val2_5939_fu_42888_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5946_fu_43202_p2() {
    p_Val2_5946_fu_43202_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3136_reg_89350.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5954_fu_44094_p1() {
    p_Val2_5954_fu_44094_p1 = p_Val2_3177_fu_44058_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5956_fu_44084_p4() {
    p_Val2_5956_fu_44084_p4 = p_Val2_3177_fu_44058_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5962_cast_fu_45574_p1() {
    p_Val2_5962_cast_fu_45574_p1 = esl_sext<121,109>(p_Val2_3309_reg_90371.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5973_fu_32533_p1() {
    p_Val2_5973_fu_32533_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_5980_fu_32847_p2() {
    p_Val2_5980_fu_32847_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3202_reg_84885.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_5986_cast_fu_21020_p1() {
    p_Val2_5986_cast_fu_21020_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_5988_fu_33739_p1() {
    p_Val2_5988_fu_33739_p1 = p_Val2_3250_fu_33703_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_5990_fu_33729_p4() {
    p_Val2_5990_fu_33729_p4 = p_Val2_3250_fu_33703_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_5995_cast_fu_21024_p1() {
    p_Val2_5995_cast_fu_21024_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6004_cast_fu_21028_p1() {
    p_Val2_6004_cast_fu_21028_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6013_cast_fu_21032_p1() {
    p_Val2_6013_cast_fu_21032_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6028_cast_fu_21036_p1() {
    p_Val2_6028_cast_fu_21036_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6032_cast_fu_20966_p1() {
    p_Val2_6032_cast_fu_20966_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6033_cast_fu_20990_p1() {
    p_Val2_6033_cast_fu_20990_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6040_cast_fu_35219_p1() {
    p_Val2_6040_cast_fu_35219_p1 = esl_sext<121,109>(p_Val2_3381_reg_85903.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6040_fu_44959_p2() {
    p_Val2_6040_fu_44959_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3276_reg_90091.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6048_cast_fu_21180_p2() {
    p_Val2_6048_cast_fu_21180_p2 = (!tmp_4283_reg_79731.read().is_01() || !tmp_3157_fu_21171_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_4283_reg_79731.read()) + sc_bigint<120>(tmp_3157_fu_21171_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6106_cast_fu_10663_p1() {
    p_Val2_6106_cast_fu_10663_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6109_cast_fu_10667_p1() {
    p_Val2_6109_cast_fu_10667_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6112_cast_fu_10671_p1() {
    p_Val2_6112_cast_fu_10671_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6114_cast_fu_10675_p1() {
    p_Val2_6114_cast_fu_10675_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6121_cast_fu_10679_p1() {
    p_Val2_6121_cast_fu_10679_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6130_cast_fu_10609_p1() {
    p_Val2_6130_cast_fu_10609_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6139_cast_fu_10633_p1() {
    p_Val2_6139_cast_fu_10633_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6160_fu_45801_p1() {
    p_Val2_6160_fu_45801_p1 = p_Val2_3321_fu_45765_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6162_fu_45791_p4() {
    p_Val2_6162_fu_45791_p4 = p_Val2_3321_fu_45765_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6171_cast_fu_47108_p1() {
    p_Val2_6171_cast_fu_47108_p1 = esl_sext<121,109>(p_Val2_3452_reg_91074.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6173_fu_34604_p2() {
    p_Val2_6173_fu_34604_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3348_reg_85623.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6181_fu_35446_p1() {
    p_Val2_6181_fu_35446_p1 = p_Val2_3394_fu_35410_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6183_fu_35436_p4() {
    p_Val2_6183_fu_35436_p4 = p_Val2_3394_fu_35410_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6215_fu_46498_p2() {
    p_Val2_6215_fu_46498_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3421_reg_90789.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6223_fu_47396_p1() {
    p_Val2_6223_fu_47396_p1 = p_Val2_3466_fu_47360_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6225_fu_47386_p4() {
    p_Val2_6225_fu_47386_p4 = p_Val2_3466_fu_47360_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6248_cast_fu_36739_p1() {
    p_Val2_6248_cast_fu_36739_p1 = esl_sext<121,109>(p_Val2_3533_reg_86600.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6254_cast_fu_36816_p2() {
    p_Val2_6254_cast_fu_36816_p2 = (!tmp_7122_reg_86621.read().is_01() || !tmp_5056_fu_36807_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_7122_reg_86621.read()) + sc_bigint<120>(tmp_5056_fu_36807_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6256_fu_36124_p2() {
    p_Val2_6256_fu_36124_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3496_reg_86309.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6264_fu_37027_p1() {
    p_Val2_6264_fu_37027_p1 = p_Val2_3545_fu_36991_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6266_fu_37017_p4() {
    p_Val2_6266_fu_37017_p4 = p_Val2_3545_fu_36991_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6288_fu_48297_p2() {
    p_Val2_6288_fu_48297_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3577_reg_91564.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6296_fu_49166_p1() {
    p_Val2_6296_fu_49166_p1 = p_Val2_3627_fu_49130_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6298_fu_49156_p4() {
    p_Val2_6298_fu_49156_p4 = p_Val2_3627_fu_49130_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6308_fu_37941_p2() {
    p_Val2_6308_fu_37941_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3657_reg_87101.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6316_fu_38810_p1() {
    p_Val2_6316_fu_38810_p1 = p_Val2_3701_fu_38774_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6318_fu_38800_p4() {
    p_Val2_6318_fu_38800_p4 = p_Val2_3701_fu_38774_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6344_fu_49687_p1() {
    p_Val2_6344_fu_49687_p1 = p_Val2_3725_fu_49651_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6357_fu_50137_p1() {
    p_Val2_6357_fu_50137_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6369_cast_fu_48885_p1() {
    p_Val2_6369_cast_fu_48885_p1 = esl_sext<121,109>(p_Val2_3615_reg_91844.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6376_fu_39331_p1() {
    p_Val2_6376_fu_39331_p1 = p_Val2_3748_fu_39295_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6389_fu_39781_p1() {
    p_Val2_6389_fu_39781_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6396_fu_50571_p2() {
    p_Val2_6396_fu_50571_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3777_reg_92514.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6404_fu_51434_p1() {
    p_Val2_6404_fu_51434_p1 = p_Val2_3821_fu_51398_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6406_fu_51424_p4() {
    p_Val2_6406_fu_51424_p4 = p_Val2_3821_fu_51398_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6416_fu_40215_p2() {
    p_Val2_6416_fu_40215_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3847_reg_88051.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6424_fu_41078_p1() {
    p_Val2_6424_fu_41078_p1 = p_Val2_3892_fu_41042_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6426_fu_41068_p4() {
    p_Val2_6426_fu_41068_p4 = p_Val2_3892_fu_41042_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6437_cast_fu_38529_p1() {
    p_Val2_6437_cast_fu_38529_p1 = esl_sext<121,109>(p_Val2_3689_reg_87381.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6439_fu_46149_p1() {
    p_Val2_6439_fu_46149_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6442_cast1_fu_38610_p2() {
    p_Val2_6442_cast1_fu_38610_p2 = (!tmp_5245_fu_38601_p1.read().is_01() || !tmp_7154_reg_87407.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_5245_fu_38601_p1.read()) + sc_biguint<120>(tmp_7154_reg_87407.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6442_cast_fu_38615_p2() {
    p_Val2_6442_cast_fu_38615_p2 = (!p_Val2_3691_fu_38591_p1.read().is_01() || !tmp_7153_reg_87402.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_3691_fu_38591_p1.read()) + sc_biguint<121>(tmp_7153_reg_87402.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6450_fu_49635_p4() {
    p_Val2_6450_fu_49635_p4 = p_Val2_3458_reg_91100.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_6452_fu_49677_p4() {
    p_Val2_6452_fu_49677_p4 = p_Val2_3725_fu_49651_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6461_fu_35799_p1() {
    p_Val2_6461_fu_35799_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6472_fu_39279_p4() {
    p_Val2_6472_fu_39279_p4 = p_Val2_3537_reg_86626.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_6474_fu_39321_p4() {
    p_Val2_6474_fu_39321_p4 = p_Val2_3748_fu_39295_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6483_cast_fu_22751_p1() {
    p_Val2_6483_cast_fu_22751_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6484_cast_fu_22755_p1() {
    p_Val2_6484_cast_fu_22755_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6489_cast_fu_22759_p1() {
    p_Val2_6489_cast_fu_22759_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6490_cast_fu_22763_p1() {
    p_Val2_6490_cast_fu_22763_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6499_cast_fu_22767_p1() {
    p_Val2_6499_cast_fu_22767_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6511_fu_29101_p1() {
    p_Val2_6511_fu_29101_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6518_cast_fu_22728_p1() {
    p_Val2_6518_cast_fu_22728_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6519_cast_fu_22732_p1() {
    p_Val2_6519_cast_fu_22732_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6524_fu_30312_p4() {
    p_Val2_6524_fu_30312_p4 = p_Val2_2976_fu_30286_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6540_fu_62614_p2() {
    p_Val2_6540_fu_62614_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_3925_reg_97665.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6548_fu_63483_p1() {
    p_Val2_6548_fu_63483_p1 = p_Val2_3975_fu_63447_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6550_fu_63473_p4() {
    p_Val2_6550_fu_63473_p4 = p_Val2_3975_fu_63447_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6560_fu_52246_p2() {
    p_Val2_6560_fu_52246_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4001_reg_93210.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6568_fu_53115_p1() {
    p_Val2_6568_fu_53115_p1 = p_Val2_4042_fu_53079_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6570_fu_53105_p4() {
    p_Val2_6570_fu_53105_p4 = p_Val2_4042_fu_53079_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6573_cast_fu_12394_p1() {
    p_Val2_6573_cast_fu_12394_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6582_cast_fu_12398_p1() {
    p_Val2_6582_cast_fu_12398_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6583_fu_63819_p1() {
    p_Val2_6583_fu_63819_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6590_fu_64133_p2() {
    p_Val2_6590_fu_64133_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4074_reg_98336.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6591_cast_fu_12402_p1() {
    p_Val2_6591_cast_fu_12402_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6598_fu_65025_p1() {
    p_Val2_6598_fu_65025_p1 = p_Val2_4122_fu_64989_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6600_cast_fu_12406_p1() {
    p_Val2_6600_cast_fu_12406_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6600_fu_65015_p4() {
    p_Val2_6600_fu_65015_p4 = p_Val2_4122_fu_64989_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6609_cast_fu_12410_p1() {
    p_Val2_6609_cast_fu_12410_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6617_fu_53451_p1() {
    p_Val2_6617_fu_53451_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6624_cast_fu_12371_p1() {
    p_Val2_6624_cast_fu_12371_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6624_fu_53790_p2() {
    p_Val2_6624_fu_53790_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4153_reg_93892.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6628_cast_fu_12375_p1() {
    p_Val2_6628_cast_fu_12375_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6632_fu_54672_p1() {
    p_Val2_6632_fu_54672_p1 = p_Val2_4201_fu_54636_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6634_fu_54662_p4() {
    p_Val2_6634_fu_54662_p4 = p_Val2_4201_fu_54636_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6656_fu_65890_p2() {
    p_Val2_6656_fu_65890_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4232_reg_99077.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6664_fu_66732_p1() {
    p_Val2_6664_fu_66732_p1 = p_Val2_4279_fu_66696_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6666_fu_66722_p4() {
    p_Val2_6666_fu_66722_p4 = p_Val2_4279_fu_66696_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6677_fu_55523_p2() {
    p_Val2_6677_fu_55523_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4305_reg_94617.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6685_fu_56365_p1() {
    p_Val2_6685_fu_56365_p1 = p_Val2_4346_fu_56329_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6687_fu_56355_p4() {
    p_Val2_6687_fu_56355_p4 = p_Val2_4346_fu_56329_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6719_fu_67399_p2() {
    p_Val2_6719_fu_67399_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4373_reg_99758.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6727_fu_68307_p1() {
    p_Val2_6727_fu_68307_p1 = p_Val2_4419_fu_68271_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6729_fu_68297_p4() {
    p_Val2_6729_fu_68297_p4 = p_Val2_4419_fu_68271_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6760_fu_57032_p2() {
    p_Val2_6760_fu_57032_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4449_reg_95298.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6768_fu_57940_p1() {
    p_Val2_6768_fu_57940_p1 = p_Val2_4498_fu_57904_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6770_fu_57930_p4() {
    p_Val2_6770_fu_57930_p4 = p_Val2_4498_fu_57904_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6777_cast_fu_51153_p1() {
    p_Val2_6777_cast_fu_51153_p1 = esl_sext<121,109>(p_Val2_3810_reg_92789.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6785_fu_30841_p1() {
    p_Val2_6785_fu_30841_p1 = reg_6316.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6792_fu_69226_p2() {
    p_Val2_6792_fu_69226_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4522_reg_100548.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6800_fu_70095_p1() {
    p_Val2_6800_fu_70095_p1 = p_Val2_4563_fu_70059_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6802_fu_70085_p4() {
    p_Val2_6802_fu_70085_p4 = p_Val2_4563_fu_70059_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6812_fu_58859_p2() {
    p_Val2_6812_fu_58859_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4595_reg_96088.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6820_fu_59728_p1() {
    p_Val2_6820_fu_59728_p1 = p_Val2_4645_fu_59692_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6822_fu_59718_p4() {
    p_Val2_6822_fu_59718_p4 = p_Val2_4645_fu_59692_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6844_cast_fu_40797_p1() {
    p_Val2_6844_cast_fu_40797_p1 = esl_sext<121,109>(p_Val2_3878_reg_88326.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_6848_fu_70616_p1() {
    p_Val2_6848_fu_70616_p1 = p_Val2_4667_fu_70580_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6849_cast1_fu_40878_p2() {
    p_Val2_6849_cast1_fu_40878_p2 = (!tmp_5526_fu_40869_p1.read().is_01() || !tmp_7208_reg_88352.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_5526_fu_40869_p1.read()) + sc_biguint<120>(tmp_7208_reg_88352.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6849_cast_fu_40883_p2() {
    p_Val2_6849_cast_fu_40883_p2 = (!p_Val2_3882_fu_40859_p1.read().is_01() || !tmp_7207_reg_88347.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_3882_fu_40859_p1.read()) + sc_biguint<121>(tmp_7207_reg_88347.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_6861_fu_71066_p1() {
    p_Val2_6861_fu_71066_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6880_fu_60249_p1() {
    p_Val2_6880_fu_60249_p1 = p_Val2_4685_fu_60213_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6893_fu_60699_p1() {
    p_Val2_6893_fu_60699_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6900_fu_71500_p2() {
    p_Val2_6900_fu_71500_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4710_reg_101498.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6908_fu_72363_p1() {
    p_Val2_6908_fu_72363_p1 = p_Val2_4758_fu_72327_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6910_fu_72353_p4() {
    p_Val2_6910_fu_72353_p4 = p_Val2_4758_fu_72327_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6920_fu_61133_p2() {
    p_Val2_6920_fu_61133_p2 = (!ap_const_lv83_1.is_01())? sc_lv<83>(): p_Val2_4790_reg_97038.read() << (unsigned short)ap_const_lv83_1.to_uint();
}

void particlemaster_ReadCalculations::thread_p_Val2_6928_fu_61996_p1() {
    p_Val2_6928_fu_61996_p1 = p_Val2_4843_fu_61960_p2.read().range(35-1, 0);
}

void particlemaster_ReadCalculations::thread_p_Val2_6930_fu_61986_p4() {
    p_Val2_6930_fu_61986_p4 = p_Val2_4843_fu_61960_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6943_fu_67080_p1() {
    p_Val2_6943_fu_67080_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6954_fu_70564_p4() {
    p_Val2_6954_fu_70564_p4 = p_Val2_4410_reg_100081.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_6956_fu_70606_p4() {
    p_Val2_6956_fu_70606_p4 = p_Val2_4667_fu_70580_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_6965_fu_56713_p1() {
    p_Val2_6965_fu_56713_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_Val2_6976_fu_60197_p4() {
    p_Val2_6976_fu_60197_p4 = p_Val2_4491_reg_95621.read().range(119, 49);
}

void particlemaster_ReadCalculations::thread_p_Val2_6978_fu_60239_p4() {
    p_Val2_6978_fu_60239_p4 = p_Val2_4685_fu_60213_p2.read().range(42, 35);
}

void particlemaster_ReadCalculations::thread_p_Val2_7020_cast_fu_24291_p1() {
    p_Val2_7020_cast_fu_24291_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7027_cast_fu_24295_p1() {
    p_Val2_7027_cast_fu_24295_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7028_cast_fu_24299_p1() {
    p_Val2_7028_cast_fu_24299_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7030_cast_fu_24303_p1() {
    p_Val2_7030_cast_fu_24303_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7043_cast_fu_24307_p1() {
    p_Val2_7043_cast_fu_24307_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7052_cast_fu_24237_p1() {
    p_Val2_7052_cast_fu_24237_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7061_cast_fu_24261_p1() {
    p_Val2_7061_cast_fu_24261_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7081_cast_fu_24451_p2() {
    p_Val2_7081_cast_fu_24451_p2 = (!tmp_5104_reg_81156.read().is_01() || !tmp_3555_fu_24442_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_5104_reg_81156.read()) + sc_bigint<120>(tmp_3555_fu_24442_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7124_cast_fu_13941_p1() {
    p_Val2_7124_cast_fu_13941_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7133_cast_fu_13945_p1() {
    p_Val2_7133_cast_fu_13945_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7142_cast_fu_13949_p1() {
    p_Val2_7142_cast_fu_13949_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7157_cast_fu_13953_p1() {
    p_Val2_7157_cast_fu_13953_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7161_cast_fu_13957_p1() {
    p_Val2_7161_cast_fu_13957_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7162_cast_fu_13887_p1() {
    p_Val2_7162_cast_fu_13887_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7167_cast_fu_13911_p1() {
    p_Val2_7167_cast_fu_13911_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7369_cast_fu_63202_p1() {
    p_Val2_7369_cast_fu_63202_p1 = esl_sext<121,109>(p_Val2_3959_reg_97945.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7437_cast_fu_52834_p1() {
    p_Val2_7437_cast_fu_52834_p1 = esl_sext<121,109>(p_Val2_4031_reg_93490.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7442_cast1_fu_52915_p2() {
    p_Val2_7442_cast1_fu_52915_p2 = (!tmp_5735_fu_52906_p1.read().is_01() || !tmp_7244_reg_93516.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_5735_fu_52906_p1.read()) + sc_biguint<120>(tmp_7244_reg_93516.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7442_cast_fu_52920_p2() {
    p_Val2_7442_cast_fu_52920_p2 = (!p_Val2_4033_fu_52896_p1.read().is_01() || !tmp_7243_reg_93511.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_4033_fu_52896_p1.read()) + sc_biguint<121>(tmp_7243_reg_93511.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7513_cast_fu_26077_p1() {
    p_Val2_7513_cast_fu_26077_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7528_cast_fu_26081_p1() {
    p_Val2_7528_cast_fu_26081_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7532_cast_fu_26085_p1() {
    p_Val2_7532_cast_fu_26085_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7533_cast_fu_26089_p1() {
    p_Val2_7533_cast_fu_26089_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7538_cast_fu_26093_p1() {
    p_Val2_7538_cast_fu_26093_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7549_cast_fu_26023_p1() {
    p_Val2_7549_cast_fu_26023_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7558_cast_fu_26047_p1() {
    p_Val2_7558_cast_fu_26047_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7565_cast_fu_64753_p1() {
    p_Val2_7565_cast_fu_64753_p1 = esl_sext<121,109>(p_Val2_4110_reg_98632.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7585_cast1_fu_26241_p2() {
    p_Val2_7585_cast1_fu_26241_p2 = (!tmp_3766_fu_26232_p1.read().is_01() || !tmp_5519_reg_81944.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_3766_fu_26232_p1.read()) + sc_biguint<120>(tmp_5519_reg_81944.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7585_cast_fu_26246_p2() {
    p_Val2_7585_cast_fu_26246_p2 = (!p_Val2_2662_fu_26222_p1.read().is_01() || !tmp_5518_reg_81939.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2662_fu_26222_p1.read()) + sc_biguint<121>(tmp_5518_reg_81939.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7619_cast_fu_15727_p1() {
    p_Val2_7619_cast_fu_15727_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7620_cast_fu_15731_p1() {
    p_Val2_7620_cast_fu_15731_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7629_cast_fu_15735_p1() {
    p_Val2_7629_cast_fu_15735_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7642_cast_fu_54400_p1() {
    p_Val2_7642_cast_fu_54400_p1 = esl_sext<121,109>(p_Val2_4188_reg_94177.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7647_cast_fu_54477_p2() {
    p_Val2_7647_cast_fu_54477_p2 = (!tmp_7282_reg_94198.read().is_01() || !tmp_5950_fu_54468_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_7282_reg_94198.read()) + sc_bigint<120>(tmp_5950_fu_54468_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_7648_cast_fu_15739_p1() {
    p_Val2_7648_cast_fu_15739_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7649_cast_fu_15743_p1() {
    p_Val2_7649_cast_fu_15743_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7658_cast_fu_15673_p1() {
    p_Val2_7658_cast_fu_15673_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7679_cast_fu_15697_p1() {
    p_Val2_7679_cast_fu_15697_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7778_cast_fu_66505_p1() {
    p_Val2_7778_cast_fu_66505_p1 = esl_sext<121,109>(p_Val2_4268_reg_99357.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7846_cast_fu_56138_p1() {
    p_Val2_7846_cast_fu_56138_p1 = esl_sext<121,109>(p_Val2_4335_reg_94897.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_7969_cast_fu_68019_p1() {
    p_Val2_7969_cast_fu_68019_p1 = esl_sext<121,109>(p_Val2_4406_reg_100055.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8045_cast_fu_57652_p1() {
    p_Val2_8045_cast_fu_57652_p1 = esl_sext<121,109>(p_Val2_4486_reg_95595.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8051_cast_fu_57729_p2() {
    p_Val2_8051_cast_fu_57729_p2 = (!tmp_7348_reg_95616.read().is_01() || !tmp_6344_fu_57720_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_7348_reg_95616.read()) + sc_bigint<120>(tmp_6344_fu_57720_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8180_cast_fu_69814_p1() {
    p_Val2_8180_cast_fu_69814_p1 = esl_sext<121,109>(p_Val2_4552_reg_100828.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8254_cast_fu_59447_p1() {
    p_Val2_8254_cast_fu_59447_p1 = esl_sext<121,109>(p_Val2_4633_reg_96368.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8259_cast1_fu_59528_p2() {
    p_Val2_8259_cast1_fu_59528_p2 = (!tmp_6530_fu_59519_p1.read().is_01() || !tmp_7380_reg_96394.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_6530_fu_59519_p1.read()) + sc_biguint<120>(tmp_7380_reg_96394.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8259_cast_fu_59533_p2() {
    p_Val2_8259_cast_fu_59533_p2 = (!p_Val2_4635_fu_59509_p1.read().is_01() || !tmp_7379_reg_96389.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_4635_fu_59509_p1.read()) + sc_biguint<121>(tmp_7379_reg_96389.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8389_cast_fu_28345_p1() {
    p_Val2_8389_cast_fu_28345_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8398_cast_fu_28349_p1() {
    p_Val2_8398_cast_fu_28349_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8407_cast_fu_28353_p1() {
    p_Val2_8407_cast_fu_28353_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8416_cast_fu_28357_p1() {
    p_Val2_8416_cast_fu_28357_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8431_cast_fu_28361_p1() {
    p_Val2_8431_cast_fu_28361_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8435_cast_fu_28291_p1() {
    p_Val2_8435_cast_fu_28291_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8436_cast_fu_28315_p1() {
    p_Val2_8436_cast_fu_28315_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8461_cast1_fu_28509_p2() {
    p_Val2_8461_cast1_fu_28509_p2 = (!tmp_4046_fu_28500_p1.read().is_01() || !tmp_6145_reg_82889.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_4046_fu_28500_p1.read()) + sc_biguint<120>(tmp_6145_reg_82889.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8461_cast_fu_28514_p2() {
    p_Val2_8461_cast_fu_28514_p2 = (!p_Val2_2832_fu_28490_p1.read().is_01() || !tmp_6144_reg_82884.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_2832_fu_28490_p1.read()) + sc_biguint<121>(tmp_6144_reg_82884.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8512_cast_fu_17995_p1() {
    p_Val2_8512_cast_fu_17995_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8516_cast_fu_17999_p1() {
    p_Val2_8516_cast_fu_17999_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8517_cast_fu_18003_p1() {
    p_Val2_8517_cast_fu_18003_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8522_cast_fu_18007_p1() {
    p_Val2_8522_cast_fu_18007_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8523_cast_fu_18011_p1() {
    p_Val2_8523_cast_fu_18011_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8532_cast_fu_17941_p1() {
    p_Val2_8532_cast_fu_17941_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8551_cast_fu_17965_p1() {
    p_Val2_8551_cast_fu_17965_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8584_cast_fu_72082_p1() {
    p_Val2_8584_cast_fu_72082_p1 = esl_sext<121,109>(p_Val2_4742_reg_101773.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8664_cast_fu_61715_p1() {
    p_Val2_8664_cast_fu_61715_p1 = esl_sext<121,109>(p_Val2_4828_reg_97313.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_8669_cast1_fu_61796_p2() {
    p_Val2_8669_cast1_fu_61796_p2 = (!tmp_6808_fu_61787_p1.read().is_01() || !tmp_7434_reg_97339.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_6808_fu_61787_p1.read()) + sc_biguint<120>(tmp_7434_reg_97339.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_8669_cast_fu_61801_p2() {
    p_Val2_8669_cast_fu_61801_p2 = (!p_Val2_4830_fu_61777_p1.read().is_01() || !tmp_7433_reg_97334.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_4830_fu_61777_p1.read()) + sc_biguint<121>(tmp_7433_reg_97334.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_9277_cast_fu_29967_p1() {
    p_Val2_9277_cast_fu_29967_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9279_cast_fu_29971_p1() {
    p_Val2_9279_cast_fu_29971_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9282_cast_fu_29975_p1() {
    p_Val2_9282_cast_fu_29975_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9284_cast_fu_29979_p1() {
    p_Val2_9284_cast_fu_29979_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9293_cast_fu_29983_p1() {
    p_Val2_9293_cast_fu_29983_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9302_cast_fu_29913_p1() {
    p_Val2_9302_cast_fu_29913_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9311_cast_fu_29937_p1() {
    p_Val2_9311_cast_fu_29937_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9339_cast_fu_30127_p2() {
    p_Val2_9339_cast_fu_30127_p2 = (!tmp_6597_reg_83612.read().is_01() || !tmp_4251_fu_30118_p1.read().is_01())? sc_lv<120>(): (sc_biguint<120>(tmp_6597_reg_83612.read()) + sc_bigint<120>(tmp_4251_fu_30118_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_9717_cast_fu_42188_p1() {
    p_Val2_9717_cast_fu_42188_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9721_cast_fu_42192_p1() {
    p_Val2_9721_cast_fu_42192_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9723_cast_fu_42196_p1() {
    p_Val2_9723_cast_fu_42196_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9726_cast_fu_42200_p1() {
    p_Val2_9726_cast_fu_42200_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9728_cast_fu_42204_p1() {
    p_Val2_9728_cast_fu_42204_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9736_cast_fu_42134_p1() {
    p_Val2_9736_cast_fu_42134_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9745_cast_fu_42158_p1() {
    p_Val2_9745_cast_fu_42158_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9772_cast1_fu_42352_p2() {
    p_Val2_9772_cast1_fu_42352_p2 = (!tmp_4360_fu_42343_p1.read().is_01() || !tmp_6880_reg_88985.read().is_01())? sc_lv<120>(): (sc_bigint<120>(tmp_4360_fu_42343_p1.read()) + sc_biguint<120>(tmp_6880_reg_88985.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_9772_cast_fu_42357_p2() {
    p_Val2_9772_cast_fu_42357_p2 = (!p_Val2_3033_fu_42333_p1.read().is_01() || !tmp_6841_reg_88980.read().is_01())? sc_lv<121>(): (sc_bigint<121>(p_Val2_3033_fu_42333_p1.read()) + sc_biguint<121>(tmp_6841_reg_88980.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_9808_cast_fu_31833_p1() {
    p_Val2_9808_cast_fu_31833_p1 = esl_zext<109,105>(hls_pow_reduce_an_16_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9817_cast_fu_31837_p1() {
    p_Val2_9817_cast_fu_31837_p1 = esl_zext<103,102>(hls_pow_reduce_an_17_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9826_cast_fu_31841_p1() {
    p_Val2_9826_cast_fu_31841_p1 = esl_zext<103,97>(hls_pow_reduce_an_9_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9835_cast_fu_31845_p1() {
    p_Val2_9835_cast_fu_31845_p1 = esl_zext<93,92>(reg_6292.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9844_cast_fu_31849_p1() {
    p_Val2_9844_cast_fu_31849_p1 = esl_zext<93,87>(reg_6296.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9853_cast_fu_31779_p1() {
    p_Val2_9853_cast_fu_31779_p1 = esl_zext<83,82>(hls_pow_reduce_an_14_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_9868_cast_fu_31803_p1() {
    p_Val2_9868_cast_fu_31803_p1 = esl_zext<83,77>(hls_pow_reduce_an_15_q0.read());
}

void particlemaster_ReadCalculations::thread_p_Val2_s_67_fu_22872_p2() {
    p_Val2_s_67_fu_22872_p2 = (!tmp_6348_cast_fu_22868_p1.read().is_01() || !p_Val2_4223_cast_fu_22855_p1.read().is_01())? sc_lv<121>(): (sc_bigint<121>(tmp_6348_cast_fu_22868_p1.read()) + sc_bigint<121>(p_Val2_4223_cast_fu_22855_p1.read()));
}

void particlemaster_ReadCalculations::thread_p_Val2_s_fu_6382_p1() {
    p_Val2_s_fu_6382_p1 = grp_fu_6178_p1.read();
}

void particlemaster_ReadCalculations::thread_p_cast_cast_fu_8017_p3() {
    p_cast_cast_fu_8017_p3 = (!tmp_3718_fu_8010_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_3718_fu_8010_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux29_cast_cast_fu_8311_p3() {
    p_mux29_cast_cast_fu_8311_p3 = (!tmp_5987_not_fu_8299_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_5987_not_fu_8299_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux30_cast_cast_fu_8253_p3() {
    p_mux30_cast_cast_fu_8253_p3 = (!tmp_5989_not_fu_8241_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_5989_not_fu_8241_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux31_cast_cast_fu_21792_p3() {
    p_mux31_cast_cast_fu_21792_p3 = (!tmp_6309_not_reg_79927.read()[0].is_01())? sc_lv<64>(): ((tmp_6309_not_reg_79927.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux32_cast_cast_fu_11435_p3() {
    p_mux32_cast_cast_fu_11435_p3 = (!tmp_6311_not_reg_75488.read()[0].is_01())? sc_lv<64>(): ((tmp_6311_not_reg_75488.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux33_cast_cast_fu_25277_p3() {
    p_mux33_cast_cast_fu_25277_p3 = (!tmp_7213_not_fu_25266_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7213_not_fu_25266_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux34_cast_cast_fu_14927_p3() {
    p_mux34_cast_cast_fu_14927_p3 = (!tmp_7215_not_fu_14916_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7215_not_fu_14916_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux35_cast_cast_fu_27191_p3() {
    p_mux35_cast_cast_fu_27191_p3 = (!tmp_7517_not_reg_82164.read()[0].is_01())? sc_lv<64>(): ((tmp_7517_not_reg_82164.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux36_cast_cast_fu_16841_p3() {
    p_mux36_cast_cast_fu_16841_p3 = (!tmp_7519_not_reg_77702.read()[0].is_01())? sc_lv<64>(): ((tmp_7519_not_reg_77702.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux37_cast_cast_fu_27522_p3() {
    p_mux37_cast_cast_fu_27522_p3 = (!tmp_7845_not_fu_27510_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7845_not_fu_27510_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux38_cast_cast_fu_17172_p3() {
    p_mux38_cast_cast_fu_17172_p3 = (!tmp_7847_not_fu_17160_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_7847_not_fu_17160_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux41_cast_cast_fu_30719_p3() {
    p_mux41_cast_cast_fu_30719_p3 = (!tmp_8471_not_reg_83808.read()[0].is_01())? sc_lv<64>(): ((tmp_8471_not_reg_83808.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux43_cast_cast_fu_31032_p3() {
    p_mux43_cast_cast_fu_31032_p3 = (!tmp_8793_not_fu_31020_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_8793_not_fu_31020_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux44_cast_cast_fu_30974_p3() {
    p_mux44_cast_cast_fu_30974_p3 = (!tmp_8795_not_fu_30962_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_8795_not_fu_30962_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux45_cast_cast_fu_44511_p3() {
    p_mux45_cast_cast_fu_44511_p3 = (!tmp_9115_not_reg_89863.read()[0].is_01())? sc_lv<64>(): ((tmp_9115_not_reg_89863.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux46_cast_cast_fu_34156_p3() {
    p_mux46_cast_cast_fu_34156_p3 = (!tmp_9117_not_reg_85398.read()[0].is_01())? sc_lv<64>(): ((tmp_9117_not_reg_85398.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux47_cast_cast_fu_48001_p3() {
    p_mux47_cast_cast_fu_48001_p3 = (!tmp_10019_not_fu_47990_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_10019_not_fu_47990_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux48_cast_cast_fu_37645_p3() {
    p_mux48_cast_cast_fu_37645_p3 = (!tmp_10021_not_fu_37634_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_10021_not_fu_37634_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux49_cast_cast_fu_49916_p3() {
    p_mux49_cast_cast_fu_49916_p3 = (!tmp_10323_not_reg_92090.read()[0].is_01())? sc_lv<64>(): ((tmp_10323_not_reg_92090.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux50_cast_cast_fu_39560_p3() {
    p_mux50_cast_cast_fu_39560_p3 = (!tmp_10325_not_reg_87627.read()[0].is_01())? sc_lv<64>(): ((tmp_10325_not_reg_87627.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux51_cast_cast_fu_50247_p3() {
    p_mux51_cast_cast_fu_50247_p3 = (!tmp_10651_not_fu_50235_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_10651_not_fu_50235_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux52_cast_cast_fu_39891_p3() {
    p_mux52_cast_cast_fu_39891_p3 = (!tmp_10653_not_fu_39879_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_10653_not_fu_39879_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux57_cast_cast_fu_51951_p3() {
    p_mux57_cast_cast_fu_51951_p3 = (!tmp_11587_not_fu_51940_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_11587_not_fu_51940_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux58_cast_cast_fu_51894_p3() {
    p_mux58_cast_cast_fu_51894_p3 = (!tmp_11589_not_fu_51883_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_11589_not_fu_51883_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux59_cast_cast_fu_65442_p3() {
    p_mux59_cast_cast_fu_65442_p3 = (!tmp_11909_not_reg_98849.read()[0].is_01())? sc_lv<64>(): ((tmp_11909_not_reg_98849.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux60_cast_cast_fu_55075_p3() {
    p_mux60_cast_cast_fu_55075_p3 = (!tmp_11911_not_reg_94394.read()[0].is_01())? sc_lv<64>(): ((tmp_11911_not_reg_94394.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux61_cast_cast_fu_68931_p3() {
    p_mux61_cast_cast_fu_68931_p3 = (!tmp_12813_not_fu_68920_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_12813_not_fu_68920_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux62_cast_cast_fu_58564_p3() {
    p_mux62_cast_cast_fu_58564_p3 = (!tmp_12815_not_fu_58553_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_12815_not_fu_58553_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux63_cast_cast_fu_70845_p3() {
    p_mux63_cast_cast_fu_70845_p3 = (!tmp_13117_not_reg_101074.read()[0].is_01())? sc_lv<64>(): ((tmp_13117_not_reg_101074.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux64_cast_cast_fu_60478_p3() {
    p_mux64_cast_cast_fu_60478_p3 = (!tmp_13119_not_reg_96614.read()[0].is_01())? sc_lv<64>(): ((tmp_13119_not_reg_96614.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux65_cast_cast_fu_71176_p3() {
    p_mux65_cast_cast_fu_71176_p3 = (!tmp_13445_not_fu_71164_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_13445_not_fu_71164_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux66_cast_cast_fu_60809_p3() {
    p_mux66_cast_cast_fu_60809_p3 = (!tmp_13447_not_fu_60797_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_13447_not_fu_60797_p2.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_mux_cast_cast_fu_7999_p3() {
    p_mux_cast_cast_fu_7999_p3 = (!tmp_5667_not_reg_73949.read()[0].is_01())? sc_lv<64>(): ((tmp_5667_not_reg_73949.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i37_de_fu_8223_p2() {
    p_not_not_1051_i37_de_fu_8223_p2 = (tmp1714_fu_8219_p2.read() | tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i43_de_fu_24983_p2() {
    p_not_not_1051_i43_de_fu_24983_p2 = (tmp1740_fu_24978_p2.read() | tmp_3491_reg_81033.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i44_de_fu_14533_p2() {
    p_not_not_1051_i44_de_fu_14533_p2 = (tmp1805_fu_14528_p2.read() | tmp_3599_reg_76591.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i55_de_fu_30944_p2() {
    p_not_not_1051_i55_de_fu_30944_p2 = (tmp1844_fu_30939_p2.read() | tmp_4291_reg_83976.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i61_de_fu_47621_p2() {
    p_not_not_1051_i61_de_fu_47621_p2 = (tmp1870_fu_47616_p2.read() | tmp_4884_reg_90643.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i62_de_fu_37366_p2() {
    p_not_not_1051_i62_de_fu_37366_p2 = (tmp1935_fu_37362_p2.read() | tmp_4991_reg_86498.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i79_de_fu_68634_p2() {
    p_not_not_1051_i79_de_fu_68634_p2 = (tmp2000_fu_68629_p2.read() | tmp_6171_reg_99953.read());
}

void particlemaster_ReadCalculations::thread_p_not_not_1051_i80_de_fu_58267_p2() {
    p_not_not_1051_i80_de_fu_58267_p2 = (tmp2065_fu_58262_p2.read() | tmp_6277_reg_95493.read());
}

void particlemaster_ReadCalculations::thread_particlemaster_iterations_o() {
    particlemaster_iterations_o = tmp_4178_fu_29088_p2.read();
}

void particlemaster_ReadCalculations::thread_particlemaster_iterations_o_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1257.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_29076_p2.read()))) {
        particlemaster_iterations_o_ap_vld = ap_const_logic_1;
    } else {
        particlemaster_iterations_o_ap_vld = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_particlemaster_negFo_read_fu_732_p2() {
    particlemaster_negFo_read_fu_732_p2 =  (sc_lv<1>) (particlemaster_negFormula.read());
}

void particlemaster_ReadCalculations::thread_particlemaster_x1_best_o() {
    particlemaster_x1_best_o = x1s_load_reg_83141.read();
}

void particlemaster_ReadCalculations::thread_particlemaster_x1_best_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3083.read())) {
        particlemaster_x1_best_o_ap_vld = ap_const_logic_1;
    } else {
        particlemaster_x1_best_o_ap_vld = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_particlemaster_x2_best_o() {
    particlemaster_x2_best_o = x2s_load_reg_84010.read();
}

void particlemaster_ReadCalculations::thread_particlemaster_x2_best_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3083.read())) {
        particlemaster_x2_best_o_ap_vld = ap_const_logic_1;
    } else {
        particlemaster_x2_best_o_ap_vld = ap_const_logic_0;
    }
}

void particlemaster_ReadCalculations::thread_r_V_371_fu_7633_p2() {
    r_V_371_fu_7633_p2 = (!tmp_2887_fu_7629_p1.read().is_01() || !tmp_2886_fu_7626_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_2887_fu_7629_p1.read()) + sc_biguint<36>(tmp_2886_fu_7626_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_374_fu_19864_p2() {
    r_V_374_fu_19864_p2 = (!tmp_2988_fu_19857_p1.read().is_01() || !tmp_2989_fu_19860_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_2988_fu_19857_p1.read()) + sc_biguint<36>(tmp_2989_fu_19860_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_377_fu_21406_p2() {
    r_V_377_fu_21406_p2 = (!tmp_3169_fu_21402_p1.read().is_01() || !tmp_3168_fu_21399_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3169_fu_21402_p1.read()) + sc_biguint<36>(tmp_3168_fu_21399_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_380_fu_23113_p2() {
    r_V_380_fu_23113_p2 = (!tmp_3382_fu_23106_p1.read().is_01() || !tmp_3383_fu_23109_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3382_fu_23106_p1.read()) + sc_biguint<36>(tmp_3383_fu_23109_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_383_fu_24693_p2() {
    r_V_383_fu_24693_p2 = (!tmp_3567_fu_24689_p1.read().is_01() || !tmp_3566_fu_24686_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3567_fu_24689_p1.read()) + sc_biguint<36>(tmp_3566_fu_24686_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_386_fu_26472_p2() {
    r_V_386_fu_26472_p2 = (!tmp_3777_fu_26465_p1.read().is_01() || !tmp_3778_fu_26468_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3777_fu_26465_p1.read()) + sc_biguint<36>(tmp_3778_fu_26468_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_388_fu_26993_p2() {
    r_V_388_fu_26993_p2 = (!tmp_3897_fu_26989_p1.read().is_01() || !tmp_3896_fu_26986_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3897_fu_26989_p1.read()) + sc_biguint<36>(tmp_3896_fu_26986_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_391_fu_28740_p2() {
    r_V_391_fu_28740_p2 = (!tmp_4058_fu_28733_p1.read().is_01() || !tmp_4059_fu_28736_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_4058_fu_28733_p1.read()) + sc_biguint<36>(tmp_4059_fu_28736_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_394_fu_9507_p2() {
    r_V_394_fu_9507_p2 = (!tmp_3069_fu_9500_p1.read().is_01() || !tmp_3070_fu_9503_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3069_fu_9500_p1.read()) + sc_biguint<36>(tmp_3070_fu_9503_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_397_fu_11049_p2() {
    r_V_397_fu_11049_p2 = (!tmp_3280_fu_11045_p1.read().is_01() || !tmp_3279_fu_11042_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3280_fu_11045_p1.read()) + sc_biguint<36>(tmp_3279_fu_11042_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_400_fu_12756_p2() {
    r_V_400_fu_12756_p2 = (!tmp_3465_fu_12749_p1.read().is_01() || !tmp_3466_fu_12752_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3465_fu_12749_p1.read()) + sc_biguint<36>(tmp_3466_fu_12752_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_403_fu_14343_p2() {
    r_V_403_fu_14343_p2 = (!tmp_3676_fu_14339_p1.read().is_01() || !tmp_3675_fu_14336_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3676_fu_14339_p1.read()) + sc_biguint<36>(tmp_3675_fu_14336_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_406_fu_16122_p2() {
    r_V_406_fu_16122_p2 = (!tmp_3864_fu_16115_p1.read().is_01() || !tmp_3865_fu_16118_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3864_fu_16115_p1.read()) + sc_biguint<36>(tmp_3865_fu_16118_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_408_fu_16643_p2() {
    r_V_408_fu_16643_p2 = (!tmp_3945_fu_16639_p1.read().is_01() || !tmp_3944_fu_16636_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_3945_fu_16639_p1.read()) + sc_biguint<36>(tmp_3944_fu_16636_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_411_fu_18390_p2() {
    r_V_411_fu_18390_p2 = (!tmp_4145_fu_18383_p1.read().is_01() || !tmp_4146_fu_18386_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_4145_fu_18383_p1.read()) + sc_biguint<36>(tmp_4146_fu_18386_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_414_fu_30353_p2() {
    r_V_414_fu_30353_p2 = (!tmp_4263_fu_30349_p1.read().is_01() || !tmp_4262_fu_30346_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_4263_fu_30349_p1.read()) + sc_biguint<36>(tmp_4262_fu_30346_p1.read()));
}

void particlemaster_ReadCalculations::thread_r_V_417_fu_42583_p2() {
    r_V_417_fu_42583_p2 = (!tmp_4372_fu_42576_p1.read().is_01() || !tmp_4373_fu_42579_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_4372_fu_42576_p1.read()) + sc_biguint<36>(tmp_4373_fu_42579_p1.read()));
}

}

