#include "particlemaster_ReadCalculations.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particlemaster_ReadCalculations::thread_tmp2016_cast_fu_69769_p1() {
    tmp2016_cast_fu_69769_p1 = esl_zext<93,83>(tmp2016_reg_100787.read());
}

void particlemaster_ReadCalculations::thread_tmp2016_fu_69705_p2() {
    tmp2016_fu_69705_p2 = (!p_Val2_11099_cast_fu_69677_p1.read().is_01() || !p_Val2_11100_cast_fu_69701_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_11099_cast_fu_69677_p1.read()) + sc_biguint<83>(p_Val2_11100_cast_fu_69701_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2017_cast_fu_70179_p1() {
    tmp2017_cast_fu_70179_p1 = esl_zext<44,36>(tmp2017_fu_70174_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2017_fu_70174_p2() {
    tmp2017_fu_70174_p2 = (!r_V_469_reg_100960.read().is_01() || !tmp_12347_cast_fu_70171_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_469_reg_100960.read()) + sc_biguint<36>(tmp_12347_cast_fu_70171_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2018_cast_fu_70248_p1() {
    tmp2018_cast_fu_70248_p1 = esl_zext<52,44>(tmp2018_fu_70243_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2018_fu_70243_p2() {
    tmp2018_fu_70243_p2 = (!p_Val2_4570_reg_100991.read().is_01() || !tmp_12356_cast_fu_70240_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4570_reg_100991.read()) + sc_biguint<44>(tmp_12356_cast_fu_70240_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2019_cast_fu_70700_p1() {
    tmp2019_cast_fu_70700_p1 = esl_zext<44,36>(tmp2019_fu_70695_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2019_fu_70695_p2() {
    tmp2019_fu_70695_p2 = (!tmp_12631_cast_fu_70692_p1.read().is_01() || !r_V_471_reg_101152.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_12631_cast_fu_70692_p1.read()) + sc_biguint<36>(r_V_471_reg_101152.read()));
}

void particlemaster_ReadCalculations::thread_tmp2020_cast_fu_70769_p1() {
    tmp2020_cast_fu_70769_p1 = esl_zext<52,44>(tmp2020_fu_70764_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2020_fu_70764_p2() {
    tmp2020_fu_70764_p2 = (!tmp_12640_cast_fu_70761_p1.read().is_01() || !p_Val2_4672_reg_101183.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_12640_cast_fu_70761_p1.read()) + sc_biguint<44>(p_Val2_4672_reg_101183.read()));
}

void particlemaster_ReadCalculations::thread_tmp2021_fu_71008_p2() {
    tmp2021_fu_71008_p2 = (tmp_6591_reg_101257.read() & sel_tmp501_fu_71002_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2022_fu_72058_p2() {
    tmp2022_fu_72058_p2 = (!tmp2024_cast_fu_72055_p1.read().is_01() || !tmp2023_reg_101747.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2024_cast_fu_72055_p1.read()) + sc_biguint<109>(tmp2023_reg_101747.read()));
}

void particlemaster_ReadCalculations::thread_tmp2023_fu_72019_p2() {
    tmp2023_fu_72019_p2 = (!hls_pow_reduce_an_19_q0.read().is_01() || !p_Val2_11210_cast_fu_71999_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(hls_pow_reduce_an_19_q0.read()) + sc_biguint<109>(p_Val2_11210_cast_fu_71999_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2024_cast_fu_72055_p1() {
    tmp2024_cast_fu_72055_p1 = esl_zext<109,103>(tmp2024_reg_101752.read());
}

void particlemaster_ReadCalculations::thread_tmp2024_fu_72025_p2() {
    tmp2024_fu_72025_p2 = (!p_Val2_11211_cast_fu_72003_p1.read().is_01() || !p_Val2_11212_cast_fu_72007_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_11211_cast_fu_72003_p1.read()) + sc_biguint<103>(p_Val2_11212_cast_fu_72007_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2025_cast_fu_72063_p1() {
    tmp2025_cast_fu_72063_p1 = esl_zext<109,93>(tmp2025_reg_101757.read());
}

void particlemaster_ReadCalculations::thread_tmp2025_fu_72040_p2() {
    tmp2025_fu_72040_p2 = (!tmp2027_cast_fu_72037_p1.read().is_01() || !tmp2026_fu_72031_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2027_cast_fu_72037_p1.read()) + sc_biguint<93>(tmp2026_fu_72031_p2.read()));
}

void particlemaster_ReadCalculations::thread_tmp2026_fu_72031_p2() {
    tmp2026_fu_72031_p2 = (!p_Val2_11213_cast_fu_72011_p1.read().is_01() || !p_Val2_11214_cast_fu_72015_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_11213_cast_fu_72011_p1.read()) + sc_biguint<93>(p_Val2_11214_cast_fu_72015_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2027_cast_fu_72037_p1() {
    tmp2027_cast_fu_72037_p1 = esl_zext<93,83>(tmp2027_reg_101732.read());
}

void particlemaster_ReadCalculations::thread_tmp2027_fu_71973_p2() {
    tmp2027_fu_71973_p2 = (!p_Val2_11215_cast_fu_71945_p1.read().is_01() || !p_Val2_11216_cast_fu_71969_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_11215_cast_fu_71945_p1.read()) + sc_biguint<83>(p_Val2_11216_cast_fu_71969_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2028_cast_fu_72447_p1() {
    tmp2028_cast_fu_72447_p1 = esl_zext<44,36>(tmp2028_fu_72442_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2028_fu_72442_p2() {
    tmp2028_fu_72442_p2 = (!r_V_474_reg_101905.read().is_01() || !tmp_12939_cast_fu_72439_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_474_reg_101905.read()) + sc_biguint<36>(tmp_12939_cast_fu_72439_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2029_cast_fu_72516_p1() {
    tmp2029_cast_fu_72516_p1 = esl_zext<52,44>(tmp2029_fu_72511_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2029_fu_72511_p2() {
    tmp2029_fu_72511_p2 = (!p_Val2_4765_reg_101936.read().is_01() || !tmp_12948_cast_fu_72508_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4765_reg_101936.read()) + sc_biguint<44>(tmp_12948_cast_fu_72508_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2040_fu_52810_p2() {
    tmp2040_fu_52810_p2 = (!tmp2042_cast_fu_52807_p1.read().is_01() || !tmp2041_reg_93464.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2042_cast_fu_52807_p1.read()) + sc_biguint<109>(tmp2041_reg_93464.read()));
}

void particlemaster_ReadCalculations::thread_tmp2041_fu_52771_p2() {
    tmp2041_fu_52771_p2 = (!hls_pow_reduce_an_19_q0.read().is_01() || !p_Val2_10848_cast_fu_52751_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(hls_pow_reduce_an_19_q0.read()) + sc_biguint<109>(p_Val2_10848_cast_fu_52751_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2042_cast_fu_52807_p1() {
    tmp2042_cast_fu_52807_p1 = esl_zext<109,103>(tmp2042_reg_93469.read());
}

void particlemaster_ReadCalculations::thread_tmp2042_fu_52777_p2() {
    tmp2042_fu_52777_p2 = (!p_Val2_10849_cast_fu_52755_p1.read().is_01() || !p_Val2_10850_cast_fu_52759_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_10849_cast_fu_52755_p1.read()) + sc_biguint<103>(p_Val2_10850_cast_fu_52759_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2043_cast_fu_52815_p1() {
    tmp2043_cast_fu_52815_p1 = esl_zext<109,93>(tmp2043_reg_93474.read());
}

void particlemaster_ReadCalculations::thread_tmp2043_fu_52792_p2() {
    tmp2043_fu_52792_p2 = (!tmp2045_cast_fu_52789_p1.read().is_01() || !tmp2044_fu_52783_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2045_cast_fu_52789_p1.read()) + sc_biguint<93>(tmp2044_fu_52783_p2.read()));
}

void particlemaster_ReadCalculations::thread_tmp2044_fu_52783_p2() {
    tmp2044_fu_52783_p2 = (!p_Val2_10851_cast_fu_52763_p1.read().is_01() || !p_Val2_10852_cast_fu_52767_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_10851_cast_fu_52763_p1.read()) + sc_biguint<93>(p_Val2_10852_cast_fu_52767_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2045_cast_fu_52789_p1() {
    tmp2045_cast_fu_52789_p1 = esl_zext<93,83>(tmp2045_reg_93449.read());
}

void particlemaster_ReadCalculations::thread_tmp2045_fu_52725_p2() {
    tmp2045_fu_52725_p2 = (!p_Val2_10853_cast_fu_52697_p1.read().is_01() || !p_Val2_10854_cast_fu_52721_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_10853_cast_fu_52697_p1.read()) + sc_biguint<83>(p_Val2_10854_cast_fu_52721_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2046_cast_fu_53199_p1() {
    tmp2046_cast_fu_53199_p1 = esl_zext<44,36>(tmp2046_fu_53194_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2046_fu_53194_p2() {
    tmp2046_fu_53194_p2 = (!r_V_477_reg_93622.read().is_01() || !tmp_11208_cast_fu_53191_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_477_reg_93622.read()) + sc_biguint<36>(tmp_11208_cast_fu_53191_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2047_cast_fu_53268_p1() {
    tmp2047_cast_fu_53268_p1 = esl_zext<52,44>(tmp2047_fu_53263_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2047_fu_53263_p2() {
    tmp2047_fu_53263_p2 = (!p_Val2_4047_reg_93653.read().is_01() || !tmp_11217_cast_fu_53260_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4047_reg_93653.read()) + sc_biguint<44>(tmp_11217_cast_fu_53260_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2048_fu_54376_p2() {
    tmp2048_fu_54376_p2 = (!tmp2049_reg_94151.read().is_01() || !tmp2050_cast_fu_54373_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2049_reg_94151.read()) + sc_biguint<109>(tmp2050_cast_fu_54373_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2049_fu_54337_p2() {
    tmp2049_fu_54337_p2 = (!p_Val2_10906_cast_fu_54317_p1.read().is_01() || !hls_pow_reduce_an_19_q0.read().is_01())? sc_lv<109>(): (sc_biguint<109>(p_Val2_10906_cast_fu_54317_p1.read()) + sc_biguint<109>(hls_pow_reduce_an_19_q0.read()));
}

void particlemaster_ReadCalculations::thread_tmp2050_cast_fu_54373_p1() {
    tmp2050_cast_fu_54373_p1 = esl_zext<109,103>(tmp2050_reg_94156.read());
}

void particlemaster_ReadCalculations::thread_tmp2050_fu_54343_p2() {
    tmp2050_fu_54343_p2 = (!p_Val2_10908_cast_fu_54325_p1.read().is_01() || !p_Val2_10907_cast_fu_54321_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_10908_cast_fu_54325_p1.read()) + sc_biguint<103>(p_Val2_10907_cast_fu_54321_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2051_cast_fu_54381_p1() {
    tmp2051_cast_fu_54381_p1 = esl_zext<109,93>(tmp2051_reg_94161.read());
}

void particlemaster_ReadCalculations::thread_tmp2051_fu_54358_p2() {
    tmp2051_fu_54358_p2 = (!tmp2052_fu_54349_p2.read().is_01() || !tmp2053_cast_fu_54355_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2052_fu_54349_p2.read()) + sc_biguint<93>(tmp2053_cast_fu_54355_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2052_fu_54349_p2() {
    tmp2052_fu_54349_p2 = (!p_Val2_10910_cast_fu_54333_p1.read().is_01() || !p_Val2_10909_cast_fu_54329_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_10910_cast_fu_54333_p1.read()) + sc_biguint<93>(p_Val2_10909_cast_fu_54329_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2053_cast_fu_54355_p1() {
    tmp2053_cast_fu_54355_p1 = esl_zext<93,83>(tmp2053_reg_94136.read());
}

void particlemaster_ReadCalculations::thread_tmp2053_fu_54291_p2() {
    tmp2053_fu_54291_p2 = (!p_Val2_10912_cast_fu_54287_p1.read().is_01() || !p_Val2_10911_cast_fu_54263_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_10912_cast_fu_54287_p1.read()) + sc_biguint<83>(p_Val2_10911_cast_fu_54263_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2054_cast_fu_54756_p1() {
    tmp2054_cast_fu_54756_p1 = esl_zext<44,36>(tmp2054_fu_54751_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2054_fu_54751_p2() {
    tmp2054_fu_54751_p2 = (!tmp_11510_cast_fu_54748_p1.read().is_01() || !r_V_480_reg_94305.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_11510_cast_fu_54748_p1.read()) + sc_biguint<36>(r_V_480_reg_94305.read()));
}

void particlemaster_ReadCalculations::thread_tmp2055_cast_fu_54825_p1() {
    tmp2055_cast_fu_54825_p1 = esl_zext<52,44>(tmp2055_fu_54820_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2055_fu_54820_p2() {
    tmp2055_fu_54820_p2 = (!tmp_11519_cast_fu_54817_p1.read().is_01() || !p_Val2_4207_reg_94336.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_11519_cast_fu_54817_p1.read()) + sc_biguint<44>(p_Val2_4207_reg_94336.read()));
}

void particlemaster_ReadCalculations::thread_tmp2056_fu_55142_p2() {
    tmp2056_fu_55142_p2 = (tmp_5977_reg_94433.read() & sel_tmp452_fu_55136_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2057_fu_56094_p2() {
    tmp2057_fu_56094_p2 = (!tmp2059_cast_fu_56091_p1.read().is_01() || !tmp2058_reg_94872.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2059_cast_fu_56091_p1.read()) + sc_biguint<109>(tmp2058_reg_94872.read()));
}

void particlemaster_ReadCalculations::thread_tmp2058_fu_56054_p2() {
    tmp2058_fu_56054_p2 = (!hls_pow_reduce_an_19_q0.read().is_01() || !p_Val2_10970_cast_fu_56034_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(hls_pow_reduce_an_19_q0.read()) + sc_biguint<109>(p_Val2_10970_cast_fu_56034_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2059_cast_fu_56091_p1() {
    tmp2059_cast_fu_56091_p1 = esl_zext<109,103>(tmp2059_reg_94877.read());
}

void particlemaster_ReadCalculations::thread_tmp2059_fu_56060_p2() {
    tmp2059_fu_56060_p2 = (!p_Val2_10971_cast_fu_56038_p1.read().is_01() || !p_Val2_10972_cast_fu_56042_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_10971_cast_fu_56038_p1.read()) + sc_biguint<103>(p_Val2_10972_cast_fu_56042_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2060_cast_fu_56099_p1() {
    tmp2060_cast_fu_56099_p1 = esl_zext<109,93>(tmp2060_reg_94882.read());
}

void particlemaster_ReadCalculations::thread_tmp2060_fu_56075_p2() {
    tmp2060_fu_56075_p2 = (!tmp2062_cast_fu_56072_p1.read().is_01() || !tmp2061_fu_56066_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2062_cast_fu_56072_p1.read()) + sc_biguint<93>(tmp2061_fu_56066_p2.read()));
}

void particlemaster_ReadCalculations::thread_tmp2061_fu_56066_p2() {
    tmp2061_fu_56066_p2 = (!p_Val2_10973_cast_fu_56046_p1.read().is_01() || !p_Val2_10974_cast_fu_56050_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_10973_cast_fu_56046_p1.read()) + sc_biguint<93>(p_Val2_10974_cast_fu_56050_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2062_cast_fu_56072_p1() {
    tmp2062_cast_fu_56072_p1 = esl_zext<93,83>(tmp2062_reg_94861.read());
}

void particlemaster_ReadCalculations::thread_tmp2062_fu_56019_p2() {
    tmp2062_fu_56019_p2 = (!p_Val2_10975_cast_fu_56011_p1.read().is_01() || !p_Val2_10976_cast_fu_56015_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_10975_cast_fu_56011_p1.read()) + sc_biguint<83>(p_Val2_10976_cast_fu_56015_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2063_cast_fu_56449_p1() {
    tmp2063_cast_fu_56449_p1 = esl_zext<44,36>(tmp2063_fu_56444_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2063_fu_56444_p2() {
    tmp2063_fu_56444_p2 = (!r_V_483_reg_95021.read().is_01() || !tmp_11798_cast_fu_56441_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_483_reg_95021.read()) + sc_biguint<36>(tmp_11798_cast_fu_56441_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2064_cast_fu_56518_p1() {
    tmp2064_cast_fu_56518_p1 = esl_zext<52,44>(tmp2064_fu_56513_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2064_fu_56513_p2() {
    tmp2064_fu_56513_p2 = (!p_Val2_4351_reg_95052.read().is_01() || !tmp_11807_cast_fu_56510_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4351_reg_95052.read()) + sc_biguint<44>(tmp_11807_cast_fu_56510_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2065_fu_58262_p2() {
    tmp2065_fu_58262_p2 = (tmp_6278_reg_95848.read() | not_Result_i10_0_32_fu_58252_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2066_fu_57628_p2() {
    tmp2066_fu_57628_p2 = (!tmp2067_reg_95569.read().is_01() || !tmp2068_cast_fu_57625_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2067_reg_95569.read()) + sc_biguint<109>(tmp2068_cast_fu_57625_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2067_fu_57589_p2() {
    tmp2067_fu_57589_p2 = (!p_Val2_11042_cast_fu_57569_p1.read().is_01() || !hls_pow_reduce_an_19_q0.read().is_01())? sc_lv<109>(): (sc_biguint<109>(p_Val2_11042_cast_fu_57569_p1.read()) + sc_biguint<109>(hls_pow_reduce_an_19_q0.read()));
}

void particlemaster_ReadCalculations::thread_tmp2068_cast_fu_57625_p1() {
    tmp2068_cast_fu_57625_p1 = esl_zext<109,103>(tmp2068_reg_95574.read());
}

void particlemaster_ReadCalculations::thread_tmp2068_fu_57595_p2() {
    tmp2068_fu_57595_p2 = (!p_Val2_11044_cast_fu_57577_p1.read().is_01() || !p_Val2_11043_cast_fu_57573_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_11044_cast_fu_57577_p1.read()) + sc_biguint<103>(p_Val2_11043_cast_fu_57573_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2069_cast_fu_57633_p1() {
    tmp2069_cast_fu_57633_p1 = esl_zext<109,93>(tmp2069_reg_95579.read());
}

void particlemaster_ReadCalculations::thread_tmp2069_fu_57610_p2() {
    tmp2069_fu_57610_p2 = (!tmp2070_fu_57601_p2.read().is_01() || !tmp2071_cast_fu_57607_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2070_fu_57601_p2.read()) + sc_biguint<93>(tmp2071_cast_fu_57607_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2070_fu_57601_p2() {
    tmp2070_fu_57601_p2 = (!p_Val2_11046_cast_fu_57585_p1.read().is_01() || !p_Val2_11045_cast_fu_57581_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_11046_cast_fu_57585_p1.read()) + sc_biguint<93>(p_Val2_11045_cast_fu_57581_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2071_cast_fu_57607_p1() {
    tmp2071_cast_fu_57607_p1 = esl_zext<93,83>(tmp2071_reg_95554.read());
}

void particlemaster_ReadCalculations::thread_tmp2071_fu_57543_p2() {
    tmp2071_fu_57543_p2 = (!p_Val2_11048_cast_fu_57539_p1.read().is_01() || !p_Val2_11047_cast_fu_57515_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_11048_cast_fu_57539_p1.read()) + sc_biguint<83>(p_Val2_11047_cast_fu_57515_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2072_cast_fu_58024_p1() {
    tmp2072_cast_fu_58024_p1 = esl_zext<44,36>(tmp2072_fu_58019_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2072_fu_58019_p2() {
    tmp2072_fu_58019_p2 = (!tmp_12096_cast_fu_58016_p1.read().is_01() || !r_V_486_reg_95755.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_12096_cast_fu_58016_p1.read()) + sc_biguint<36>(r_V_486_reg_95755.read()));
}

void particlemaster_ReadCalculations::thread_tmp2073_cast_fu_58093_p1() {
    tmp2073_cast_fu_58093_p1 = esl_zext<52,44>(tmp2073_fu_58088_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2073_fu_58088_p2() {
    tmp2073_fu_58088_p2 = (!tmp_12105_cast_fu_58085_p1.read().is_01() || !p_Val2_4503_reg_95786.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_12105_cast_fu_58085_p1.read()) + sc_biguint<44>(p_Val2_4503_reg_95786.read()));
}

void particlemaster_ReadCalculations::thread_tmp2074_fu_58240_p2() {
    tmp2074_fu_58240_p2 = (tmp_6280_fu_58161_p2.read() & sel_tmp476_fu_58234_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2075_fu_58397_p2() {
    tmp2075_fu_58397_p2 = (tmp_6371_fu_58304_p2.read() & sel_tmp484_fu_58391_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2076_fu_59423_p2() {
    tmp2076_fu_59423_p2 = (!tmp2078_cast_fu_59420_p1.read().is_01() || !tmp2077_reg_96342.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2078_cast_fu_59420_p1.read()) + sc_biguint<109>(tmp2077_reg_96342.read()));
}

void particlemaster_ReadCalculations::thread_tmp2077_fu_59384_p2() {
    tmp2077_fu_59384_p2 = (!hls_pow_reduce_an_19_q0.read().is_01() || !p_Val2_11108_cast_fu_59364_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(hls_pow_reduce_an_19_q0.read()) + sc_biguint<109>(p_Val2_11108_cast_fu_59364_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2078_cast_fu_59420_p1() {
    tmp2078_cast_fu_59420_p1 = esl_zext<109,103>(tmp2078_reg_96347.read());
}

void particlemaster_ReadCalculations::thread_tmp2078_fu_59390_p2() {
    tmp2078_fu_59390_p2 = (!p_Val2_11109_cast_fu_59368_p1.read().is_01() || !p_Val2_11110_cast_fu_59372_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_11109_cast_fu_59368_p1.read()) + sc_biguint<103>(p_Val2_11110_cast_fu_59372_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2079_cast_fu_59428_p1() {
    tmp2079_cast_fu_59428_p1 = esl_zext<109,93>(tmp2079_reg_96352.read());
}

void particlemaster_ReadCalculations::thread_tmp2079_fu_59405_p2() {
    tmp2079_fu_59405_p2 = (!tmp2081_cast_fu_59402_p1.read().is_01() || !tmp2080_fu_59396_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2081_cast_fu_59402_p1.read()) + sc_biguint<93>(tmp2080_fu_59396_p2.read()));
}

void particlemaster_ReadCalculations::thread_tmp2080_fu_59396_p2() {
    tmp2080_fu_59396_p2 = (!p_Val2_11111_cast_fu_59376_p1.read().is_01() || !p_Val2_11112_cast_fu_59380_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_11111_cast_fu_59376_p1.read()) + sc_biguint<93>(p_Val2_11112_cast_fu_59380_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2081_cast_fu_59402_p1() {
    tmp2081_cast_fu_59402_p1 = esl_zext<93,83>(tmp2081_reg_96327.read());
}

void particlemaster_ReadCalculations::thread_tmp2081_fu_59338_p2() {
    tmp2081_fu_59338_p2 = (!p_Val2_11113_cast_fu_59310_p1.read().is_01() || !p_Val2_11114_cast_fu_59334_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_11113_cast_fu_59310_p1.read()) + sc_biguint<83>(p_Val2_11114_cast_fu_59334_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2082_cast_fu_59812_p1() {
    tmp2082_cast_fu_59812_p1 = esl_zext<44,36>(tmp2082_fu_59807_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2082_fu_59807_p2() {
    tmp2082_fu_59807_p2 = (!r_V_489_reg_96500.read().is_01() || !tmp_12382_cast_fu_59804_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_489_reg_96500.read()) + sc_biguint<36>(tmp_12382_cast_fu_59804_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2083_cast_fu_59881_p1() {
    tmp2083_cast_fu_59881_p1 = esl_zext<52,44>(tmp2083_fu_59876_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2083_fu_59876_p2() {
    tmp2083_fu_59876_p2 = (!p_Val2_4651_reg_96531.read().is_01() || !tmp_12391_cast_fu_59873_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4651_reg_96531.read()) + sc_biguint<44>(tmp_12391_cast_fu_59873_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2084_cast_fu_60333_p1() {
    tmp2084_cast_fu_60333_p1 = esl_zext<44,36>(tmp2084_fu_60328_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2084_fu_60328_p2() {
    tmp2084_fu_60328_p2 = (!tmp_12666_cast_fu_60325_p1.read().is_01() || !r_V_491_reg_96692.read().is_01())? sc_lv<36>(): (sc_biguint<36>(tmp_12666_cast_fu_60325_p1.read()) + sc_biguint<36>(r_V_491_reg_96692.read()));
}

void particlemaster_ReadCalculations::thread_tmp2085_cast_fu_60402_p1() {
    tmp2085_cast_fu_60402_p1 = esl_zext<52,44>(tmp2085_fu_60397_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2085_fu_60397_p2() {
    tmp2085_fu_60397_p2 = (!tmp_12675_cast_fu_60394_p1.read().is_01() || !p_Val2_4690_reg_96723.read().is_01())? sc_lv<44>(): (sc_biguint<44>(tmp_12675_cast_fu_60394_p1.read()) + sc_biguint<44>(p_Val2_4690_reg_96723.read()));
}

void particlemaster_ReadCalculations::thread_tmp2086_fu_60641_p2() {
    tmp2086_fu_60641_p2 = (tmp_6639_reg_96797.read() & sel_tmp514_fu_60635_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2087_fu_61691_p2() {
    tmp2087_fu_61691_p2 = (!tmp2089_cast_fu_61688_p1.read().is_01() || !tmp2088_reg_97287.read().is_01())? sc_lv<109>(): (sc_biguint<109>(tmp2089_cast_fu_61688_p1.read()) + sc_biguint<109>(tmp2088_reg_97287.read()));
}

void particlemaster_ReadCalculations::thread_tmp2088_fu_61652_p2() {
    tmp2088_fu_61652_p2 = (!hls_pow_reduce_an_19_q0.read().is_01() || !p_Val2_11224_cast_fu_61632_p1.read().is_01())? sc_lv<109>(): (sc_biguint<109>(hls_pow_reduce_an_19_q0.read()) + sc_biguint<109>(p_Val2_11224_cast_fu_61632_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2089_cast_fu_61688_p1() {
    tmp2089_cast_fu_61688_p1 = esl_zext<109,103>(tmp2089_reg_97292.read());
}

void particlemaster_ReadCalculations::thread_tmp2089_fu_61658_p2() {
    tmp2089_fu_61658_p2 = (!p_Val2_11225_cast_fu_61636_p1.read().is_01() || !p_Val2_11226_cast_fu_61640_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(p_Val2_11225_cast_fu_61636_p1.read()) + sc_biguint<103>(p_Val2_11226_cast_fu_61640_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2090_cast_fu_61696_p1() {
    tmp2090_cast_fu_61696_p1 = esl_zext<109,93>(tmp2090_reg_97297.read());
}

void particlemaster_ReadCalculations::thread_tmp2090_fu_61673_p2() {
    tmp2090_fu_61673_p2 = (!tmp2092_cast_fu_61670_p1.read().is_01() || !tmp2091_fu_61664_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(tmp2092_cast_fu_61670_p1.read()) + sc_biguint<93>(tmp2091_fu_61664_p2.read()));
}

void particlemaster_ReadCalculations::thread_tmp2091_fu_61664_p2() {
    tmp2091_fu_61664_p2 = (!p_Val2_11227_cast_fu_61644_p1.read().is_01() || !p_Val2_11228_cast_fu_61648_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(p_Val2_11227_cast_fu_61644_p1.read()) + sc_biguint<93>(p_Val2_11228_cast_fu_61648_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2092_cast_fu_61670_p1() {
    tmp2092_cast_fu_61670_p1 = esl_zext<93,83>(tmp2092_reg_97272.read());
}

void particlemaster_ReadCalculations::thread_tmp2092_fu_61606_p2() {
    tmp2092_fu_61606_p2 = (!p_Val2_11229_cast_fu_61578_p1.read().is_01() || !p_Val2_11230_cast_fu_61602_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(p_Val2_11229_cast_fu_61578_p1.read()) + sc_biguint<83>(p_Val2_11230_cast_fu_61602_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2093_cast_fu_62080_p1() {
    tmp2093_cast_fu_62080_p1 = esl_zext<44,36>(tmp2093_fu_62075_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2093_fu_62075_p2() {
    tmp2093_fu_62075_p2 = (!r_V_494_reg_97445.read().is_01() || !tmp_12974_cast_fu_62072_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(r_V_494_reg_97445.read()) + sc_biguint<36>(tmp_12974_cast_fu_62072_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp2094_cast_fu_62149_p1() {
    tmp2094_cast_fu_62149_p1 = esl_zext<52,44>(tmp2094_fu_62144_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp2094_fu_62144_p2() {
    tmp2094_fu_62144_p2 = (!p_Val2_4850_reg_97476.read().is_01() || !tmp_12983_cast_fu_62141_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(p_Val2_4850_reg_97476.read()) + sc_biguint<44>(tmp_12983_cast_fu_62141_p1.read()));
}

void particlemaster_ReadCalculations::thread_tmp_10006_cast_fu_49890_p1() {
    tmp_10006_cast_fu_49890_p1 = esl_zext<108,100>(p_Val2_3736_reg_92245.read());
}

void particlemaster_ReadCalculations::thread_tmp_10010_cast_fu_39225_p1() {
    tmp_10010_cast_fu_39225_p1 = esl_sext<130,129>(tmp_5328_fu_39167_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10019_not_fu_47990_p2() {
    tmp_10019_not_fu_47990_p2 = (!tmp_5092_fu_47983_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5092_fu_47983_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10021_not_fu_37634_p2() {
    tmp_10021_not_fu_37634_p2 = (!tmp_5093_fu_37627_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5093_fu_37627_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10024_cast_fu_39407_p1() {
    tmp_10024_cast_fu_39407_p1 = esl_zext<36,20>(tmp_5341_reg_87726.read());
}

void particlemaster_ReadCalculations::thread_tmp_10031_cast_fu_39472_p1() {
    tmp_10031_cast_fu_39472_p1 = esl_zext<52,51>(tmp_5347_fu_39461_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_10033_cast_fu_39476_p1() {
    tmp_10033_cast_fu_39476_p1 = esl_zext<44,36>(tmp_5346_reg_87757.read());
}

void particlemaster_ReadCalculations::thread_tmp_10041_cast_fu_39538_p1() {
    tmp_10041_cast_fu_39538_p1 = esl_zext<108,100>(p_Val2_3759_reg_87782.read());
}

void particlemaster_ReadCalculations::thread_tmp_10062_cast_fu_50169_p1() {
    tmp_10062_cast_fu_50169_p1 = esl_zext<12,11>(loc_V_107_reg_92331.read());
}

void particlemaster_ReadCalculations::thread_tmp_10075_cast_fu_39813_p1() {
    tmp_10075_cast_fu_39813_p1 = esl_zext<12,11>(loc_V_120_reg_87868.read());
}

void particlemaster_ReadCalculations::thread_tmp_10099_cast_fu_50424_p1() {
    tmp_10099_cast_fu_50424_p1 = esl_zext<77,75>(tmp_5385_fu_50416_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10108_cast_fu_50507_p1() {
    tmp_10108_cast_fu_50507_p1 = esl_zext<82,81>(tmp_5391_fu_50500_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10112_cast_fu_50543_p1() {
    tmp_10112_cast_fu_50543_p1 = esl_zext<83,80>(tmp_5394_fu_50536_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10117_cast_fu_50592_p1() {
    tmp_10117_cast_fu_50592_p1 = esl_zext<102,101>(tmp_5396_fu_50585_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10121_cast_fu_50629_p1() {
    tmp_10121_cast_fu_50629_p1 = esl_zext<103,95>(tmp_5399_fu_50622_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10127_cast_fu_50683_p1() {
    tmp_10127_cast_fu_50683_p1 = esl_zext<121,120>(tmp_5402_fu_50676_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10131_cast_fu_50719_p1() {
    tmp_10131_cast_fu_50719_p1 = esl_zext<122,109>(tmp_5405_fu_50712_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10137_cast_fu_50773_p1() {
    tmp_10137_cast_fu_50773_p1 = esl_zext<126,125>(tmp_5408_fu_50766_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10141_cast_fu_50809_p1() {
    tmp_10141_cast_fu_50809_p1 = esl_zext<127,109>(tmp_5412_fu_50802_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10147_cast_fu_50863_p1() {
    tmp_10147_cast_fu_50863_p1 = esl_zext<131,130>(tmp_5418_fu_50856_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10151_cast_fu_50899_p1() {
    tmp_10151_cast_fu_50899_p1 = esl_zext<132,109>(tmp_5421_fu_50892_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10157_cast_fu_50953_p1() {
    tmp_10157_cast_fu_50953_p1 = esl_zext<136,135>(tmp_5424_fu_50946_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10161_cast_fu_51030_p1() {
    tmp_10161_cast_fu_51030_p1 = esl_zext<137,109>(tmp_5427_fu_51023_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10169_cast_fu_51163_p1() {
    tmp_10169_cast_fu_51163_p1 = esl_zext<118,117>(tmp_5432_fu_51156_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10170_cast_fu_51167_p1() {
    tmp_10170_cast_fu_51167_p1 = esl_zext<118,79>(tmp_5431_reg_92794.read());
}

void particlemaster_ReadCalculations::thread_tmp_10174_cast_fu_51193_p1() {
    tmp_10174_cast_fu_51193_p1 = esl_sext<122,120>(tmp_5434_fu_51186_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10193_cast_fu_40068_p1() {
    tmp_10193_cast_fu_40068_p1 = esl_zext<77,75>(tmp_5473_fu_40060_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10202_cast_fu_40151_p1() {
    tmp_10202_cast_fu_40151_p1 = esl_zext<82,81>(tmp_5479_fu_40144_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10206_cast_fu_40187_p1() {
    tmp_10206_cast_fu_40187_p1 = esl_zext<83,80>(tmp_5482_fu_40180_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10211_cast_fu_40236_p1() {
    tmp_10211_cast_fu_40236_p1 = esl_zext<102,101>(tmp_5484_fu_40229_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10215_cast_fu_40273_p1() {
    tmp_10215_cast_fu_40273_p1 = esl_zext<103,95>(tmp_5487_fu_40266_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10221_cast_fu_40327_p1() {
    tmp_10221_cast_fu_40327_p1 = esl_zext<121,120>(tmp_5490_fu_40320_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10225_cast_fu_40363_p1() {
    tmp_10225_cast_fu_40363_p1 = esl_zext<122,109>(tmp_5494_fu_40356_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10231_cast_fu_40417_p1() {
    tmp_10231_cast_fu_40417_p1 = esl_zext<126,125>(tmp_5497_fu_40410_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10235_cast_fu_40453_p1() {
    tmp_10235_cast_fu_40453_p1 = esl_zext<127,109>(tmp_5500_fu_40446_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10241_cast_fu_40507_p1() {
    tmp_10241_cast_fu_40507_p1 = esl_zext<131,130>(tmp_5503_fu_40500_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10245_cast_fu_40543_p1() {
    tmp_10245_cast_fu_40543_p1 = esl_zext<132,109>(tmp_5506_fu_40536_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10251_cast_fu_40597_p1() {
    tmp_10251_cast_fu_40597_p1 = esl_zext<136,135>(tmp_5509_fu_40590_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10255_cast_fu_40674_p1() {
    tmp_10255_cast_fu_40674_p1 = esl_zext<137,109>(tmp_5512_fu_40667_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10263_cast_fu_40807_p1() {
    tmp_10263_cast_fu_40807_p1 = esl_zext<118,117>(tmp_5517_fu_40800_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10264_cast_fu_40811_p1() {
    tmp_10264_cast_fu_40811_p1 = esl_zext<118,79>(tmp_5516_reg_88331.read());
}

void particlemaster_ReadCalculations::thread_tmp_10268_cast_fu_40837_p1() {
    tmp_10268_cast_fu_40837_p1 = esl_sext<122,120>(tmp_5521_fu_40830_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10283_cast_fu_51338_p1() {
    tmp_10283_cast_fu_51338_p1 = esl_sext<130,129>(tmp_5441_fu_51299_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10297_cast_fu_51510_p1() {
    tmp_10297_cast_fu_51510_p1 = esl_zext<36,20>(tmp_5455_reg_92942.read());
}

void particlemaster_ReadCalculations::thread_tmp_10304_cast_fu_51575_p1() {
    tmp_10304_cast_fu_51575_p1 = esl_zext<52,51>(tmp_5461_fu_51564_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_10306_cast_fu_51579_p1() {
    tmp_10306_cast_fu_51579_p1 = esl_zext<44,36>(tmp_5460_reg_92973.read());
}

void particlemaster_ReadCalculations::thread_tmp_10314_cast_fu_51637_p1() {
    tmp_10314_cast_fu_51637_p1 = esl_zext<108,100>(p_Val2_3830_reg_92998.read());
}

void particlemaster_ReadCalculations::thread_tmp_10318_cast_fu_40982_p1() {
    tmp_10318_cast_fu_40982_p1 = esl_sext<130,129>(tmp_5529_fu_40943_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10323_not_fu_49502_p2() {
    tmp_10323_not_fu_49502_p2 = (!tmp_4886_reg_91342.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4886_reg_91342.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10325_not_fu_39146_p2() {
    tmp_10325_not_fu_39146_p2 = (!tmp_4993_reg_86865.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4993_reg_86865.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10332_cast_fu_41154_p1() {
    tmp_10332_cast_fu_41154_p1 = esl_zext<36,20>(tmp_5543_reg_88479.read());
}

void particlemaster_ReadCalculations::thread_tmp_10339_cast_fu_41219_p1() {
    tmp_10339_cast_fu_41219_p1 = esl_zext<52,51>(tmp_5549_fu_41208_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_10341_cast_fu_41223_p1() {
    tmp_10341_cast_fu_41223_p1 = esl_zext<44,36>(tmp_5548_reg_88510.read());
}

void particlemaster_ReadCalculations::thread_tmp_10349_cast_fu_41281_p1() {
    tmp_10349_cast_fu_41281_p1 = esl_zext<108,100>(p_Val2_3903_reg_88535.read());
}

void particlemaster_ReadCalculations::thread_tmp_10651_not_fu_50235_p2() {
    tmp_10651_not_fu_50235_p2 = (!tmp_5370_fu_50228_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5370_fu_50228_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10653_not_fu_39879_p2() {
    tmp_10653_not_fu_39879_p2 = (!tmp_5371_fu_39872_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5371_fu_39872_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_10975_cast_fu_62467_p1() {
    tmp_10975_cast_fu_62467_p1 = esl_zext<77,75>(tmp_5591_fu_62459_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10984_cast_fu_62550_p1() {
    tmp_10984_cast_fu_62550_p1 = esl_zext<82,81>(tmp_5597_fu_62543_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10988_cast_fu_62586_p1() {
    tmp_10988_cast_fu_62586_p1 = esl_zext<83,80>(tmp_5600_fu_62579_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10993_cast_fu_62635_p1() {
    tmp_10993_cast_fu_62635_p1 = esl_zext<102,101>(tmp_5602_fu_62628_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_10997_cast_fu_62672_p1() {
    tmp_10997_cast_fu_62672_p1 = esl_zext<103,95>(tmp_5606_fu_62665_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11003_cast_fu_62726_p1() {
    tmp_11003_cast_fu_62726_p1 = esl_zext<121,120>(tmp_5612_fu_62719_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11007_cast_fu_62762_p1() {
    tmp_11007_cast_fu_62762_p1 = esl_zext<122,109>(tmp_5615_fu_62755_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11013_cast_fu_62816_p1() {
    tmp_11013_cast_fu_62816_p1 = esl_zext<126,125>(tmp_5618_fu_62809_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11017_cast_fu_62852_p1() {
    tmp_11017_cast_fu_62852_p1 = esl_zext<127,109>(tmp_5621_fu_62845_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11023_cast_fu_62906_p1() {
    tmp_11023_cast_fu_62906_p1 = esl_zext<131,130>(tmp_5626_fu_62899_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11027_cast_fu_62942_p1() {
    tmp_11027_cast_fu_62942_p1 = esl_zext<132,109>(tmp_5629_fu_62935_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11033_cast_fu_62996_p1() {
    tmp_11033_cast_fu_62996_p1 = esl_zext<136,135>(tmp_5632_fu_62989_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11037_cast_fu_63079_p1() {
    tmp_11037_cast_fu_63079_p1 = esl_zext<137,109>(tmp_5635_fu_63072_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11045_cast_fu_63212_p1() {
    tmp_11045_cast_fu_63212_p1 = esl_zext<118,117>(tmp_5640_fu_63205_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11046_cast_fu_63216_p1() {
    tmp_11046_cast_fu_63216_p1 = esl_zext<118,79>(tmp_5639_reg_97950.read());
}

void particlemaster_ReadCalculations::thread_tmp_11050_cast_fu_63242_p1() {
    tmp_11050_cast_fu_63242_p1 = esl_sext<122,120>(tmp_5642_fu_63235_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11069_cast_fu_52099_p1() {
    tmp_11069_cast_fu_52099_p1 = esl_zext<77,75>(tmp_5679_fu_52091_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11078_cast_fu_52182_p1() {
    tmp_11078_cast_fu_52182_p1 = esl_zext<82,81>(tmp_5685_fu_52175_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11082_cast_fu_52218_p1() {
    tmp_11082_cast_fu_52218_p1 = esl_zext<83,80>(tmp_5688_fu_52211_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11087_cast_fu_52267_p1() {
    tmp_11087_cast_fu_52267_p1 = esl_zext<102,101>(tmp_5690_fu_52260_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11091_cast_fu_52304_p1() {
    tmp_11091_cast_fu_52304_p1 = esl_zext<103,95>(tmp_5693_fu_52297_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11097_cast_fu_52358_p1() {
    tmp_11097_cast_fu_52358_p1 = esl_zext<121,120>(tmp_5699_fu_52351_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11101_cast_fu_52394_p1() {
    tmp_11101_cast_fu_52394_p1 = esl_zext<122,109>(tmp_5702_fu_52387_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11107_cast_fu_52448_p1() {
    tmp_11107_cast_fu_52448_p1 = esl_zext<126,125>(tmp_5705_fu_52441_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11111_cast_fu_52484_p1() {
    tmp_11111_cast_fu_52484_p1 = esl_zext<127,109>(tmp_5708_fu_52477_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11117_cast_fu_52538_p1() {
    tmp_11117_cast_fu_52538_p1 = esl_zext<131,130>(tmp_5712_fu_52531_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11121_cast_fu_52574_p1() {
    tmp_11121_cast_fu_52574_p1 = esl_zext<132,109>(tmp_5716_fu_52567_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11127_cast_fu_52628_p1() {
    tmp_11127_cast_fu_52628_p1 = esl_zext<136,135>(tmp_5719_fu_52621_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11131_cast_fu_52711_p1() {
    tmp_11131_cast_fu_52711_p1 = esl_zext<137,109>(tmp_5722_fu_52704_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11139_cast_fu_52844_p1() {
    tmp_11139_cast_fu_52844_p1 = esl_zext<118,117>(tmp_5727_fu_52837_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11140_cast_fu_52848_p1() {
    tmp_11140_cast_fu_52848_p1 = esl_zext<118,79>(tmp_5726_reg_93495.read());
}

void particlemaster_ReadCalculations::thread_tmp_11144_cast_fu_52874_p1() {
    tmp_11144_cast_fu_52874_p1 = esl_sext<122,120>(tmp_5729_fu_52867_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11159_cast_fu_63387_p1() {
    tmp_11159_cast_fu_63387_p1 = esl_sext<130,129>(tmp_5649_fu_63348_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11173_cast_fu_63559_p1() {
    tmp_11173_cast_fu_63559_p1 = esl_zext<36,20>(tmp_5661_reg_98098.read());
}

void particlemaster_ReadCalculations::thread_tmp_11180_cast_fu_63624_p1() {
    tmp_11180_cast_fu_63624_p1 = esl_zext<52,51>(tmp_5668_fu_63613_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11182_cast_fu_63628_p1() {
    tmp_11182_cast_fu_63628_p1 = esl_zext<44,36>(tmp_5667_reg_98129.read());
}

void particlemaster_ReadCalculations::thread_tmp_11190_cast_fu_63686_p1() {
    tmp_11190_cast_fu_63686_p1 = esl_zext<108,100>(p_Val2_3984_reg_98154.read());
}

void particlemaster_ReadCalculations::thread_tmp_11194_cast_fu_53019_p1() {
    tmp_11194_cast_fu_53019_p1 = esl_sext<130,129>(tmp_5738_fu_52980_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11208_cast_fu_53191_p1() {
    tmp_11208_cast_fu_53191_p1 = esl_zext<36,20>(tmp_5752_reg_93643.read());
}

void particlemaster_ReadCalculations::thread_tmp_11215_cast_fu_53256_p1() {
    tmp_11215_cast_fu_53256_p1 = esl_zext<52,51>(tmp_5758_fu_53245_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11217_cast_fu_53260_p1() {
    tmp_11217_cast_fu_53260_p1 = esl_zext<44,36>(tmp_5757_reg_93674.read());
}

void particlemaster_ReadCalculations::thread_tmp_11225_cast_fu_53318_p1() {
    tmp_11225_cast_fu_53318_p1 = esl_zext<108,100>(p_Val2_4053_reg_93699.read());
}

void particlemaster_ReadCalculations::thread_tmp_11243_cast_fu_64541_p1() {
    tmp_11243_cast_fu_64541_p1 = esl_zext<12,11>(loc_V_124_reg_98198.read());
}

void particlemaster_ReadCalculations::thread_tmp_11253_cast_fu_54198_p1() {
    tmp_11253_cast_fu_54198_p1 = esl_zext<12,11>(loc_V_137_reg_93743.read());
}

void particlemaster_ReadCalculations::thread_tmp_11277_cast_fu_63986_p1() {
    tmp_11277_cast_fu_63986_p1 = esl_zext<77,75>(tmp_5785_fu_63978_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11286_cast_fu_64069_p1() {
    tmp_11286_cast_fu_64069_p1 = esl_zext<82,81>(tmp_5793_fu_64062_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11290_cast_fu_64105_p1() {
    tmp_11290_cast_fu_64105_p1 = esl_zext<83,80>(tmp_5796_fu_64098_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11295_cast_fu_64154_p1() {
    tmp_11295_cast_fu_64154_p1 = esl_zext<102,101>(tmp_5798_fu_64147_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11299_cast_fu_64191_p1() {
    tmp_11299_cast_fu_64191_p1 = esl_zext<103,95>(tmp_5801_fu_64184_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11305_cast_fu_64245_p1() {
    tmp_11305_cast_fu_64245_p1 = esl_zext<121,120>(tmp_5804_fu_64238_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11309_cast_fu_64281_p1() {
    tmp_11309_cast_fu_64281_p1 = esl_zext<122,109>(tmp_5807_fu_64274_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11315_cast_fu_64335_p1() {
    tmp_11315_cast_fu_64335_p1 = esl_zext<126,125>(tmp_5810_fu_64328_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11319_cast_fu_64371_p1() {
    tmp_11319_cast_fu_64371_p1 = esl_zext<127,109>(tmp_5813_fu_64364_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11325_cast_fu_64425_p1() {
    tmp_11325_cast_fu_64425_p1 = esl_zext<131,130>(tmp_5816_fu_64418_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11329_cast_fu_64461_p1() {
    tmp_11329_cast_fu_64461_p1 = esl_zext<132,109>(tmp_5822_fu_64454_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11335_cast_fu_64515_p1() {
    tmp_11335_cast_fu_64515_p1 = esl_zext<136,135>(tmp_5825_fu_64508_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11339_cast_fu_64630_p1() {
    tmp_11339_cast_fu_64630_p1 = esl_zext<137,109>(tmp_5828_fu_64623_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11347_cast_fu_64763_p1() {
    tmp_11347_cast_fu_64763_p1 = esl_zext<118,117>(tmp_5833_fu_64756_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11348_cast_fu_64767_p1() {
    tmp_11348_cast_fu_64767_p1 = esl_zext<118,79>(tmp_5832_reg_98637.read());
}

void particlemaster_ReadCalculations::thread_tmp_11352_cast_fu_64793_p1() {
    tmp_11352_cast_fu_64793_p1 = esl_sext<122,120>(tmp_5837_fu_64786_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11371_cast_fu_53643_p1() {
    tmp_11371_cast_fu_53643_p1 = esl_zext<77,75>(tmp_5896_fu_53635_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11380_cast_fu_53726_p1() {
    tmp_11380_cast_fu_53726_p1 = esl_zext<82,81>(tmp_5902_fu_53719_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11384_cast_fu_53762_p1() {
    tmp_11384_cast_fu_53762_p1 = esl_zext<83,80>(tmp_5905_fu_53755_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11389_cast_fu_53811_p1() {
    tmp_11389_cast_fu_53811_p1 = esl_zext<102,101>(tmp_5907_fu_53804_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11393_cast_fu_53848_p1() {
    tmp_11393_cast_fu_53848_p1 = esl_zext<103,95>(tmp_5911_fu_53841_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11399_cast_fu_53902_p1() {
    tmp_11399_cast_fu_53902_p1 = esl_zext<121,120>(tmp_5914_fu_53895_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11403_cast_fu_53938_p1() {
    tmp_11403_cast_fu_53938_p1 = esl_zext<122,109>(tmp_5917_fu_53931_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11409_cast_fu_53992_p1() {
    tmp_11409_cast_fu_53992_p1 = esl_zext<126,125>(tmp_5920_fu_53985_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11413_cast_fu_54028_p1() {
    tmp_11413_cast_fu_54028_p1 = esl_zext<127,109>(tmp_5923_fu_54021_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11419_cast_fu_54082_p1() {
    tmp_11419_cast_fu_54082_p1 = esl_zext<131,130>(tmp_5928_fu_54075_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11423_cast_fu_54118_p1() {
    tmp_11423_cast_fu_54118_p1 = esl_zext<132,109>(tmp_5931_fu_54111_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11429_cast_fu_54172_p1() {
    tmp_11429_cast_fu_54172_p1 = esl_zext<136,135>(tmp_5934_fu_54165_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11433_cast_fu_54277_p1() {
    tmp_11433_cast_fu_54277_p1 = esl_zext<137,109>(tmp_5937_fu_54270_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11441_cast_fu_54410_p1() {
    tmp_11441_cast_fu_54410_p1 = esl_zext<118,117>(tmp_5944_fu_54403_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11442_cast_fu_54414_p1() {
    tmp_11442_cast_fu_54414_p1 = esl_zext<118,79>(tmp_5942_reg_94182.read());
}

void particlemaster_ReadCalculations::thread_tmp_11446_cast_fu_54440_p1() {
    tmp_11446_cast_fu_54440_p1 = esl_sext<122,120>(tmp_5946_fu_54433_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11461_cast_fu_64929_p1() {
    tmp_11461_cast_fu_64929_p1 = esl_sext<130,129>(tmp_5844_fu_64890_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11475_cast_fu_65101_p1() {
    tmp_11475_cast_fu_65101_p1 = esl_zext<36,20>(tmp_5856_reg_98781.read());
}

void particlemaster_ReadCalculations::thread_tmp_11482_cast_fu_65166_p1() {
    tmp_11482_cast_fu_65166_p1 = esl_zext<52,51>(tmp_5862_fu_65155_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11484_cast_fu_65170_p1() {
    tmp_11484_cast_fu_65170_p1 = esl_zext<44,36>(tmp_5861_reg_98812.read());
}

void particlemaster_ReadCalculations::thread_tmp_11492_cast_fu_65250_p1() {
    tmp_11492_cast_fu_65250_p1 = esl_zext<108,100>(p_Val2_4133_reg_98837.read());
}

void particlemaster_ReadCalculations::thread_tmp_11496_cast_fu_54576_p1() {
    tmp_11496_cast_fu_54576_p1 = esl_sext<130,129>(tmp_5953_fu_54537_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11510_cast_fu_54748_p1() {
    tmp_11510_cast_fu_54748_p1 = esl_zext<36,20>(tmp_5965_reg_94326.read());
}

void particlemaster_ReadCalculations::thread_tmp_11517_cast_fu_54813_p1() {
    tmp_11517_cast_fu_54813_p1 = esl_zext<52,51>(tmp_5971_fu_54802_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11519_cast_fu_54817_p1() {
    tmp_11519_cast_fu_54817_p1 = esl_zext<44,36>(tmp_5970_reg_94357.read());
}

void particlemaster_ReadCalculations::thread_tmp_11527_cast_fu_54897_p1() {
    tmp_11527_cast_fu_54897_p1 = esl_zext<108,100>(p_Val2_4211_reg_94382.read());
}

void particlemaster_ReadCalculations::thread_tmp_11569_cast_fu_65743_p1() {
    tmp_11569_cast_fu_65743_p1 = esl_zext<77,75>(tmp_6002_fu_65735_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11578_cast_fu_65826_p1() {
    tmp_11578_cast_fu_65826_p1 = esl_zext<82,81>(tmp_6008_fu_65819_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11582_cast_fu_65862_p1() {
    tmp_11582_cast_fu_65862_p1 = esl_zext<83,80>(tmp_6012_fu_65855_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11587_cast_fu_65911_p1() {
    tmp_11587_cast_fu_65911_p1 = esl_zext<102,101>(tmp_6014_fu_65904_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11587_not_fu_51940_p2() {
    tmp_11587_not_fu_51940_p2 = (!tmp_5578_fu_51933_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5578_fu_51933_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_11589_not_fu_51883_p2() {
    tmp_11589_not_fu_51883_p2 = (!tmp_5579_fu_51876_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5579_fu_51876_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_11591_cast_fu_65948_p1() {
    tmp_11591_cast_fu_65948_p1 = esl_zext<103,95>(tmp_6017_fu_65941_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11597_cast_fu_66002_p1() {
    tmp_11597_cast_fu_66002_p1 = esl_zext<121,120>(tmp_6020_fu_65995_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11601_cast_fu_66038_p1() {
    tmp_11601_cast_fu_66038_p1 = esl_zext<122,109>(tmp_6023_fu_66031_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11607_cast_fu_66092_p1() {
    tmp_11607_cast_fu_66092_p1 = esl_zext<126,125>(tmp_6026_fu_66085_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11611_cast_fu_66128_p1() {
    tmp_11611_cast_fu_66128_p1 = esl_zext<127,109>(tmp_6029_fu_66121_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11617_cast_fu_66182_p1() {
    tmp_11617_cast_fu_66182_p1 = esl_zext<131,130>(tmp_6032_fu_66175_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11621_cast_fu_66218_p1() {
    tmp_11621_cast_fu_66218_p1 = esl_zext<132,109>(tmp_6035_fu_66211_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11627_cast_fu_66311_p1() {
    tmp_11627_cast_fu_66311_p1 = esl_zext<136,135>(tmp_6039_fu_66304_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11631_cast_fu_66332_p1() {
    tmp_11631_cast_fu_66332_p1 = esl_zext<136,109>(tmp_6042_fu_66325_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11639_cast_fu_66482_p1() {
    tmp_11639_cast_fu_66482_p1 = esl_zext<118,117>(tmp_6047_fu_66475_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11640_cast_fu_66486_p1() {
    tmp_11640_cast_fu_66486_p1 = esl_zext<118,79>(tmp_6046_reg_99347.read());
}

void particlemaster_ReadCalculations::thread_tmp_11644_cast_fu_66518_p1() {
    tmp_11644_cast_fu_66518_p1 = esl_sext<121,120>(tmp_6049_fu_66511_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11661_cast_fu_55376_p1() {
    tmp_11661_cast_fu_55376_p1 = esl_zext<77,75>(tmp_6083_fu_55368_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11670_cast_fu_55459_p1() {
    tmp_11670_cast_fu_55459_p1 = esl_zext<82,81>(tmp_6089_fu_55452_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11674_cast_fu_55495_p1() {
    tmp_11674_cast_fu_55495_p1 = esl_zext<83,80>(tmp_6093_fu_55488_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11679_cast_fu_55544_p1() {
    tmp_11679_cast_fu_55544_p1 = esl_zext<102,101>(tmp_6095_fu_55537_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11683_cast_fu_55581_p1() {
    tmp_11683_cast_fu_55581_p1 = esl_zext<103,95>(tmp_6098_fu_55574_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11689_cast_fu_55635_p1() {
    tmp_11689_cast_fu_55635_p1 = esl_zext<121,120>(tmp_6101_fu_55628_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11693_cast_fu_55671_p1() {
    tmp_11693_cast_fu_55671_p1 = esl_zext<122,109>(tmp_6104_fu_55664_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11699_cast_fu_55725_p1() {
    tmp_11699_cast_fu_55725_p1 = esl_zext<126,125>(tmp_6107_fu_55718_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11703_cast_fu_55761_p1() {
    tmp_11703_cast_fu_55761_p1 = esl_zext<127,109>(tmp_6110_fu_55754_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11709_cast_fu_55815_p1() {
    tmp_11709_cast_fu_55815_p1 = esl_zext<131,130>(tmp_6113_fu_55808_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11713_cast_fu_55851_p1() {
    tmp_11713_cast_fu_55851_p1 = esl_zext<132,109>(tmp_6116_fu_55844_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11719_cast_fu_55944_p1() {
    tmp_11719_cast_fu_55944_p1 = esl_zext<136,135>(tmp_6119_fu_55937_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11723_cast_fu_55965_p1() {
    tmp_11723_cast_fu_55965_p1 = esl_zext<136,109>(tmp_6121_fu_55958_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11731_cast_fu_56115_p1() {
    tmp_11731_cast_fu_56115_p1 = esl_zext<118,117>(tmp_6127_fu_56108_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11732_cast_fu_56119_p1() {
    tmp_11732_cast_fu_56119_p1 = esl_zext<118,79>(tmp_6126_reg_94887.read());
}

void particlemaster_ReadCalculations::thread_tmp_11736_cast_fu_56151_p1() {
    tmp_11736_cast_fu_56151_p1 = esl_sext<121,120>(tmp_6129_fu_56144_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11763_cast_fu_66808_p1() {
    tmp_11763_cast_fu_66808_p1 = esl_zext<36,20>(tmp_6066_reg_99502.read());
}

void particlemaster_ReadCalculations::thread_tmp_11770_cast_fu_66873_p1() {
    tmp_11770_cast_fu_66873_p1 = esl_zext<52,51>(tmp_6072_fu_66862_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11772_cast_fu_66877_p1() {
    tmp_11772_cast_fu_66877_p1 = esl_zext<44,36>(tmp_6071_reg_99533.read());
}

void particlemaster_ReadCalculations::thread_tmp_11780_cast_fu_66935_p1() {
    tmp_11780_cast_fu_66935_p1 = esl_zext<108,100>(p_Val2_4288_reg_99558.read());
}

void particlemaster_ReadCalculations::thread_tmp_11798_cast_fu_56441_p1() {
    tmp_11798_cast_fu_56441_p1 = esl_zext<36,20>(tmp_6146_reg_95042.read());
}

void particlemaster_ReadCalculations::thread_tmp_11805_cast_fu_56506_p1() {
    tmp_11805_cast_fu_56506_p1 = esl_zext<52,51>(tmp_6153_fu_56495_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_11807_cast_fu_56510_p1() {
    tmp_11807_cast_fu_56510_p1 = esl_zext<44,36>(tmp_6152_reg_95073.read());
}

void particlemaster_ReadCalculations::thread_tmp_11815_cast_fu_56568_p1() {
    tmp_11815_cast_fu_56568_p1 = esl_zext<108,100>(p_Val2_4355_reg_95098.read());
}

void particlemaster_ReadCalculations::thread_tmp_11832_cast_fu_67807_p1() {
    tmp_11832_cast_fu_67807_p1 = esl_zext<12,11>(loc_V_128_reg_99615.read());
}

void particlemaster_ReadCalculations::thread_tmp_11841_cast_fu_57440_p1() {
    tmp_11841_cast_fu_57440_p1 = esl_zext<12,11>(loc_V_141_reg_95155.read());
}

void particlemaster_ReadCalculations::thread_tmp_11867_cast_fu_67252_p1() {
    tmp_11867_cast_fu_67252_p1 = esl_zext<77,75>(tmp_6182_fu_67244_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11876_cast_fu_67335_p1() {
    tmp_11876_cast_fu_67335_p1 = esl_zext<82,81>(tmp_6188_fu_67328_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11880_cast_fu_67371_p1() {
    tmp_11880_cast_fu_67371_p1 = esl_zext<83,80>(tmp_6191_fu_67364_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11885_cast_fu_67420_p1() {
    tmp_11885_cast_fu_67420_p1 = esl_zext<102,101>(tmp_6193_fu_67413_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11889_cast_fu_67457_p1() {
    tmp_11889_cast_fu_67457_p1 = esl_zext<103,95>(tmp_6196_fu_67450_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11895_cast_fu_67511_p1() {
    tmp_11895_cast_fu_67511_p1 = esl_zext<121,120>(tmp_6199_fu_67504_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11899_cast_fu_67547_p1() {
    tmp_11899_cast_fu_67547_p1 = esl_zext<122,109>(tmp_6202_fu_67540_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11905_cast_fu_67601_p1() {
    tmp_11905_cast_fu_67601_p1 = esl_zext<126,125>(tmp_6205_fu_67594_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11909_cast_fu_67637_p1() {
    tmp_11909_cast_fu_67637_p1 = esl_zext<127,109>(tmp_6208_fu_67630_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11909_not_fu_65237_p2() {
    tmp_11909_not_fu_65237_p2 = (!tmp_5777_fu_65229_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5777_fu_65229_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_11911_not_fu_54884_p2() {
    tmp_11911_not_fu_54884_p2 = (!tmp_5888_fu_54876_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_5888_fu_54876_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_11915_cast_fu_67691_p1() {
    tmp_11915_cast_fu_67691_p1 = esl_zext<131,130>(tmp_6211_fu_67684_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11919_cast_fu_67727_p1() {
    tmp_11919_cast_fu_67727_p1 = esl_zext<132,109>(tmp_6214_fu_67720_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11925_cast_fu_67781_p1() {
    tmp_11925_cast_fu_67781_p1 = esl_zext<136,135>(tmp_6217_fu_67774_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11929_cast_fu_67896_p1() {
    tmp_11929_cast_fu_67896_p1 = esl_zext<137,109>(tmp_6220_fu_67889_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11937_cast_fu_68029_p1() {
    tmp_11937_cast_fu_68029_p1 = esl_zext<118,117>(tmp_6225_fu_68022_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11938_cast_fu_68033_p1() {
    tmp_11938_cast_fu_68033_p1 = esl_zext<118,79>(tmp_6224_reg_100060.read());
}

void particlemaster_ReadCalculations::thread_tmp_11942_cast_fu_68059_p1() {
    tmp_11942_cast_fu_68059_p1 = esl_sext<122,120>(tmp_6229_fu_68052_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11959_cast_fu_56885_p1() {
    tmp_11959_cast_fu_56885_p1 = esl_zext<77,75>(tmp_6288_fu_56877_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11968_cast_fu_56968_p1() {
    tmp_11968_cast_fu_56968_p1 = esl_zext<82,81>(tmp_6294_fu_56961_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11972_cast_fu_57004_p1() {
    tmp_11972_cast_fu_57004_p1 = esl_zext<83,80>(tmp_6297_fu_56997_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11977_cast_fu_57053_p1() {
    tmp_11977_cast_fu_57053_p1 = esl_zext<102,101>(tmp_6299_fu_57046_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11981_cast_fu_57090_p1() {
    tmp_11981_cast_fu_57090_p1 = esl_zext<103,95>(tmp_6302_fu_57083_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11987_cast_fu_57144_p1() {
    tmp_11987_cast_fu_57144_p1 = esl_zext<121,120>(tmp_6305_fu_57137_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11991_cast_fu_57180_p1() {
    tmp_11991_cast_fu_57180_p1 = esl_zext<122,109>(tmp_6310_fu_57173_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_11997_cast_fu_57234_p1() {
    tmp_11997_cast_fu_57234_p1 = esl_zext<126,125>(tmp_6313_fu_57227_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12001_cast_fu_57270_p1() {
    tmp_12001_cast_fu_57270_p1 = esl_zext<127,109>(tmp_6316_fu_57263_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12007_cast_fu_57324_p1() {
    tmp_12007_cast_fu_57324_p1 = esl_zext<131,130>(tmp_6319_fu_57317_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12011_cast_fu_57360_p1() {
    tmp_12011_cast_fu_57360_p1 = esl_zext<132,109>(tmp_6322_fu_57353_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12017_cast_fu_57414_p1() {
    tmp_12017_cast_fu_57414_p1 = esl_zext<136,135>(tmp_6325_fu_57407_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12021_cast_fu_57529_p1() {
    tmp_12021_cast_fu_57529_p1 = esl_zext<137,109>(tmp_6331_fu_57522_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12029_cast_fu_57662_p1() {
    tmp_12029_cast_fu_57662_p1 = esl_zext<118,117>(tmp_6336_fu_57655_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12030_cast_fu_57666_p1() {
    tmp_12030_cast_fu_57666_p1 = esl_zext<118,79>(tmp_6335_reg_95600.read());
}

void particlemaster_ReadCalculations::thread_tmp_12034_cast_fu_57692_p1() {
    tmp_12034_cast_fu_57692_p1 = esl_sext<122,120>(tmp_6338_fu_57685_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12061_cast_fu_68383_p1() {
    tmp_12061_cast_fu_68383_p1 = esl_zext<36,20>(tmp_6251_reg_100236.read());
}

void particlemaster_ReadCalculations::thread_tmp_12068_cast_fu_68448_p1() {
    tmp_12068_cast_fu_68448_p1 = esl_zext<52,51>(tmp_6257_fu_68437_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12070_cast_fu_68452_p1() {
    tmp_12070_cast_fu_68452_p1 = esl_zext<44,36>(tmp_6256_reg_100267.read());
}

void particlemaster_ReadCalculations::thread_tmp_12078_cast_fu_68568_p1() {
    tmp_12078_cast_fu_68568_p1 = esl_zext<108,100>(p_Val2_4429_reg_100292.read());
}

void particlemaster_ReadCalculations::thread_tmp_12096_cast_fu_58016_p1() {
    tmp_12096_cast_fu_58016_p1 = esl_zext<36,20>(tmp_6359_reg_95776.read());
}

void particlemaster_ReadCalculations::thread_tmp_12103_cast_fu_58081_p1() {
    tmp_12103_cast_fu_58081_p1 = esl_zext<52,51>(tmp_6365_fu_58070_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12105_cast_fu_58085_p1() {
    tmp_12105_cast_fu_58085_p1 = esl_zext<44,36>(tmp_6364_reg_95807.read());
}

void particlemaster_ReadCalculations::thread_tmp_12113_cast_fu_58201_p1() {
    tmp_12113_cast_fu_58201_p1 = esl_zext<108,100>(p_Val2_4507_reg_95832.read());
}

void particlemaster_ReadCalculations::thread_tmp_12149_cast_fu_69079_p1() {
    tmp_12149_cast_fu_69079_p1 = esl_zext<77,75>(tmp_6393_fu_69071_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12158_cast_fu_69162_p1() {
    tmp_12158_cast_fu_69162_p1 = esl_zext<82,81>(tmp_6399_fu_69155_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12162_cast_fu_69198_p1() {
    tmp_12162_cast_fu_69198_p1 = esl_zext<83,80>(tmp_6402_fu_69191_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12167_cast_fu_69247_p1() {
    tmp_12167_cast_fu_69247_p1 = esl_zext<102,101>(tmp_6404_fu_69240_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12171_cast_fu_69284_p1() {
    tmp_12171_cast_fu_69284_p1 = esl_zext<103,95>(tmp_6407_fu_69277_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12177_cast_fu_69338_p1() {
    tmp_12177_cast_fu_69338_p1 = esl_zext<121,120>(tmp_6410_fu_69331_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12181_cast_fu_69374_p1() {
    tmp_12181_cast_fu_69374_p1 = esl_zext<122,109>(tmp_6413_fu_69367_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12187_cast_fu_69428_p1() {
    tmp_12187_cast_fu_69428_p1 = esl_zext<126,125>(tmp_6417_fu_69421_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12191_cast_fu_69464_p1() {
    tmp_12191_cast_fu_69464_p1 = esl_zext<127,109>(tmp_6420_fu_69457_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12197_cast_fu_69518_p1() {
    tmp_12197_cast_fu_69518_p1 = esl_zext<131,130>(tmp_6423_fu_69511_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12201_cast_fu_69554_p1() {
    tmp_12201_cast_fu_69554_p1 = esl_zext<132,109>(tmp_6426_fu_69547_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12207_cast_fu_69608_p1() {
    tmp_12207_cast_fu_69608_p1 = esl_zext<136,135>(tmp_6429_fu_69601_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12211_cast_fu_69691_p1() {
    tmp_12211_cast_fu_69691_p1 = esl_zext<137,109>(tmp_6432_fu_69684_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12219_cast_fu_69824_p1() {
    tmp_12219_cast_fu_69824_p1 = esl_zext<118,117>(tmp_6440_fu_69817_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12220_cast_fu_69828_p1() {
    tmp_12220_cast_fu_69828_p1 = esl_zext<118,79>(tmp_6438_reg_100833.read());
}

void particlemaster_ReadCalculations::thread_tmp_12224_cast_fu_69854_p1() {
    tmp_12224_cast_fu_69854_p1 = esl_sext<122,120>(tmp_6442_fu_69847_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12243_cast_fu_58712_p1() {
    tmp_12243_cast_fu_58712_p1 = esl_zext<77,75>(tmp_6480_fu_58704_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12252_cast_fu_58795_p1() {
    tmp_12252_cast_fu_58795_p1 = esl_zext<82,81>(tmp_6486_fu_58788_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12256_cast_fu_58831_p1() {
    tmp_12256_cast_fu_58831_p1 = esl_zext<83,80>(tmp_6489_fu_58824_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12261_cast_fu_58880_p1() {
    tmp_12261_cast_fu_58880_p1 = esl_zext<102,101>(tmp_6491_fu_58873_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12265_cast_fu_58917_p1() {
    tmp_12265_cast_fu_58917_p1 = esl_zext<103,95>(tmp_6494_fu_58910_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12271_cast_fu_58971_p1() {
    tmp_12271_cast_fu_58971_p1 = esl_zext<121,120>(tmp_6497_fu_58964_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12275_cast_fu_59007_p1() {
    tmp_12275_cast_fu_59007_p1 = esl_zext<122,109>(tmp_6500_fu_59000_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12281_cast_fu_59061_p1() {
    tmp_12281_cast_fu_59061_p1 = esl_zext<126,125>(tmp_6503_fu_59054_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12285_cast_fu_59097_p1() {
    tmp_12285_cast_fu_59097_p1 = esl_zext<127,109>(tmp_6506_fu_59090_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12291_cast_fu_59151_p1() {
    tmp_12291_cast_fu_59151_p1 = esl_zext<131,130>(tmp_6509_fu_59144_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12295_cast_fu_59187_p1() {
    tmp_12295_cast_fu_59187_p1 = esl_zext<132,109>(tmp_6512_fu_59180_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12301_cast_fu_59241_p1() {
    tmp_12301_cast_fu_59241_p1 = esl_zext<136,135>(tmp_6515_fu_59234_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12305_cast_fu_59324_p1() {
    tmp_12305_cast_fu_59324_p1 = esl_zext<137,109>(tmp_6518_fu_59317_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12313_cast_fu_59457_p1() {
    tmp_12313_cast_fu_59457_p1 = esl_zext<118,117>(tmp_6524_fu_59450_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12314_cast_fu_59461_p1() {
    tmp_12314_cast_fu_59461_p1 = esl_zext<118,79>(tmp_6522_reg_96373.read());
}

void particlemaster_ReadCalculations::thread_tmp_12318_cast_fu_59487_p1() {
    tmp_12318_cast_fu_59487_p1 = esl_sext<122,120>(tmp_6526_fu_59480_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12333_cast_fu_69999_p1() {
    tmp_12333_cast_fu_69999_p1 = esl_sext<130,129>(tmp_6449_fu_69960_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12347_cast_fu_70171_p1() {
    tmp_12347_cast_fu_70171_p1 = esl_zext<36,20>(tmp_6463_reg_100981.read());
}

void particlemaster_ReadCalculations::thread_tmp_12354_cast_fu_70236_p1() {
    tmp_12354_cast_fu_70236_p1 = esl_zext<52,51>(tmp_6469_fu_70225_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12356_cast_fu_70240_p1() {
    tmp_12356_cast_fu_70240_p1 = esl_zext<44,36>(tmp_6468_reg_101012.read());
}

void particlemaster_ReadCalculations::thread_tmp_12364_cast_fu_70298_p1() {
    tmp_12364_cast_fu_70298_p1 = esl_zext<108,100>(p_Val2_4575_reg_101037.read());
}

void particlemaster_ReadCalculations::thread_tmp_12368_cast_fu_59632_p1() {
    tmp_12368_cast_fu_59632_p1 = esl_sext<130,129>(tmp_6533_fu_59593_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12382_cast_fu_59804_p1() {
    tmp_12382_cast_fu_59804_p1 = esl_zext<36,20>(tmp_6548_reg_96521.read());
}

void particlemaster_ReadCalculations::thread_tmp_12389_cast_fu_59869_p1() {
    tmp_12389_cast_fu_59869_p1 = esl_zext<52,51>(tmp_6554_fu_59858_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12391_cast_fu_59873_p1() {
    tmp_12391_cast_fu_59873_p1 = esl_zext<44,36>(tmp_6553_reg_96552.read());
}

void particlemaster_ReadCalculations::thread_tmp_12399_cast_fu_59931_p1() {
    tmp_12399_cast_fu_59931_p1 = esl_zext<108,100>(p_Val2_4656_reg_96577.read());
}

void particlemaster_ReadCalculations::thread_tmp_12617_cast_fu_70510_p1() {
    tmp_12617_cast_fu_70510_p1 = esl_sext<130,129>(tmp_6567_fu_70452_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12631_cast_fu_70692_p1() {
    tmp_12631_cast_fu_70692_p1 = esl_zext<36,20>(tmp_6579_reg_101173.read());
}

void particlemaster_ReadCalculations::thread_tmp_12638_cast_fu_70757_p1() {
    tmp_12638_cast_fu_70757_p1 = esl_zext<52,51>(tmp_6585_fu_70746_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12640_cast_fu_70761_p1() {
    tmp_12640_cast_fu_70761_p1 = esl_zext<44,36>(tmp_6584_reg_101204.read());
}

void particlemaster_ReadCalculations::thread_tmp_12648_cast_fu_70819_p1() {
    tmp_12648_cast_fu_70819_p1 = esl_zext<108,100>(p_Val2_4676_reg_101229.read());
}

void particlemaster_ReadCalculations::thread_tmp_12652_cast_fu_60143_p1() {
    tmp_12652_cast_fu_60143_p1 = esl_sext<130,129>(tmp_6612_fu_60085_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12666_cast_fu_60325_p1() {
    tmp_12666_cast_fu_60325_p1 = esl_zext<36,20>(tmp_6624_reg_96713.read());
}

void particlemaster_ReadCalculations::thread_tmp_12673_cast_fu_60390_p1() {
    tmp_12673_cast_fu_60390_p1 = esl_zext<52,51>(tmp_6633_fu_60379_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12675_cast_fu_60394_p1() {
    tmp_12675_cast_fu_60394_p1 = esl_zext<44,36>(tmp_6632_reg_96744.read());
}

void particlemaster_ReadCalculations::thread_tmp_12683_cast_fu_60452_p1() {
    tmp_12683_cast_fu_60452_p1 = esl_zext<108,100>(p_Val2_4694_reg_96769.read());
}

void particlemaster_ReadCalculations::thread_tmp_12704_cast_fu_71098_p1() {
    tmp_12704_cast_fu_71098_p1 = esl_zext<12,11>(loc_V_133_reg_101315.read());
}

void particlemaster_ReadCalculations::thread_tmp_12717_cast_fu_60725_p1() {
    tmp_12717_cast_fu_60725_p1 = esl_zext<12,11>(loc_V_146_reg_96855.read());
}

void particlemaster_ReadCalculations::thread_tmp_12741_cast_fu_71353_p1() {
    tmp_12741_cast_fu_71353_p1 = esl_zext<77,75>(tmp_6671_fu_71345_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12750_cast_fu_71436_p1() {
    tmp_12750_cast_fu_71436_p1 = esl_zext<82,81>(tmp_6677_fu_71429_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12754_cast_fu_71472_p1() {
    tmp_12754_cast_fu_71472_p1 = esl_zext<83,80>(tmp_6680_fu_71465_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12759_cast_fu_71521_p1() {
    tmp_12759_cast_fu_71521_p1 = esl_zext<102,101>(tmp_6682_fu_71514_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12763_cast_fu_71558_p1() {
    tmp_12763_cast_fu_71558_p1 = esl_zext<103,95>(tmp_6687_fu_71551_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12769_cast_fu_71612_p1() {
    tmp_12769_cast_fu_71612_p1 = esl_zext<121,120>(tmp_6690_fu_71605_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12773_cast_fu_71648_p1() {
    tmp_12773_cast_fu_71648_p1 = esl_zext<122,109>(tmp_6693_fu_71641_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12779_cast_fu_71702_p1() {
    tmp_12779_cast_fu_71702_p1 = esl_zext<126,125>(tmp_6696_fu_71695_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12783_cast_fu_71738_p1() {
    tmp_12783_cast_fu_71738_p1 = esl_zext<127,109>(tmp_6699_fu_71731_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12789_cast_fu_71792_p1() {
    tmp_12789_cast_fu_71792_p1 = esl_zext<131,130>(tmp_6702_fu_71785_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12793_cast_fu_71828_p1() {
    tmp_12793_cast_fu_71828_p1 = esl_zext<132,109>(tmp_6705_fu_71821_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12799_cast_fu_71882_p1() {
    tmp_12799_cast_fu_71882_p1 = esl_zext<136,135>(tmp_6708_fu_71875_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12803_cast_fu_71959_p1() {
    tmp_12803_cast_fu_71959_p1 = esl_zext<137,109>(tmp_6711_fu_71952_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12811_cast_fu_72092_p1() {
    tmp_12811_cast_fu_72092_p1 = esl_zext<118,117>(tmp_6716_fu_72085_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12812_cast_fu_72096_p1() {
    tmp_12812_cast_fu_72096_p1 = esl_zext<118,79>(tmp_6715_reg_101778.read());
}

void particlemaster_ReadCalculations::thread_tmp_12813_not_fu_68920_p2() {
    tmp_12813_not_fu_68920_p2 = (!tmp_6379_fu_68913_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6379_fu_68913_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_12815_not_fu_58553_p2() {
    tmp_12815_not_fu_58553_p2 = (!tmp_6380_fu_58546_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6380_fu_58546_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_12816_cast_fu_72122_p1() {
    tmp_12816_cast_fu_72122_p1 = esl_sext<122,120>(tmp_6718_fu_72115_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12835_cast_fu_60986_p1() {
    tmp_12835_cast_fu_60986_p1 = esl_zext<77,75>(tmp_6756_fu_60978_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12844_cast_fu_61069_p1() {
    tmp_12844_cast_fu_61069_p1 = esl_zext<82,81>(tmp_6762_fu_61062_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12848_cast_fu_61105_p1() {
    tmp_12848_cast_fu_61105_p1 = esl_zext<83,80>(tmp_6765_fu_61098_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12853_cast_fu_61154_p1() {
    tmp_12853_cast_fu_61154_p1 = esl_zext<102,101>(tmp_6767_fu_61147_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12857_cast_fu_61191_p1() {
    tmp_12857_cast_fu_61191_p1 = esl_zext<103,95>(tmp_6771_fu_61184_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12863_cast_fu_61245_p1() {
    tmp_12863_cast_fu_61245_p1 = esl_zext<121,120>(tmp_6774_fu_61238_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12867_cast_fu_61281_p1() {
    tmp_12867_cast_fu_61281_p1 = esl_zext<122,109>(tmp_6777_fu_61274_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12873_cast_fu_61335_p1() {
    tmp_12873_cast_fu_61335_p1 = esl_zext<126,125>(tmp_6780_fu_61328_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12877_cast_fu_61371_p1() {
    tmp_12877_cast_fu_61371_p1 = esl_zext<127,109>(tmp_6783_fu_61364_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12883_cast_fu_61425_p1() {
    tmp_12883_cast_fu_61425_p1 = esl_zext<131,130>(tmp_6786_fu_61418_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12887_cast_fu_61461_p1() {
    tmp_12887_cast_fu_61461_p1 = esl_zext<132,109>(tmp_6789_fu_61454_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12893_cast_fu_61515_p1() {
    tmp_12893_cast_fu_61515_p1 = esl_zext<136,135>(tmp_6792_fu_61508_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12897_cast_fu_61592_p1() {
    tmp_12897_cast_fu_61592_p1 = esl_zext<137,109>(tmp_6796_fu_61585_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12905_cast_fu_61725_p1() {
    tmp_12905_cast_fu_61725_p1 = esl_zext<118,117>(tmp_6802_fu_61718_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12906_cast_fu_61729_p1() {
    tmp_12906_cast_fu_61729_p1 = esl_zext<118,79>(tmp_6801_reg_97318.read());
}

void particlemaster_ReadCalculations::thread_tmp_12910_cast_fu_61755_p1() {
    tmp_12910_cast_fu_61755_p1 = esl_sext<122,120>(tmp_6804_fu_61748_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12925_cast_fu_72267_p1() {
    tmp_12925_cast_fu_72267_p1 = esl_sext<130,129>(tmp_6725_fu_72228_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12939_cast_fu_72439_p1() {
    tmp_12939_cast_fu_72439_p1 = esl_zext<36,20>(tmp_6737_reg_101926.read());
}

void particlemaster_ReadCalculations::thread_tmp_12946_cast_fu_72504_p1() {
    tmp_12946_cast_fu_72504_p1 = esl_zext<52,51>(tmp_6743_fu_72493_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12948_cast_fu_72508_p1() {
    tmp_12948_cast_fu_72508_p1 = esl_zext<44,36>(tmp_6742_reg_101957.read());
}

void particlemaster_ReadCalculations::thread_tmp_12956_cast_fu_72566_p1() {
    tmp_12956_cast_fu_72566_p1 = esl_zext<108,100>(p_Val2_4769_reg_101982.read());
}

void particlemaster_ReadCalculations::thread_tmp_12960_cast_fu_61900_p1() {
    tmp_12960_cast_fu_61900_p1 = esl_sext<130,129>(tmp_6811_fu_61861_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_12974_cast_fu_62072_p1() {
    tmp_12974_cast_fu_62072_p1 = esl_zext<36,20>(tmp_6823_reg_97466.read());
}

void particlemaster_ReadCalculations::thread_tmp_12981_cast_fu_62137_p1() {
    tmp_12981_cast_fu_62137_p1 = esl_zext<52,51>(tmp_6831_fu_62126_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_12983_cast_fu_62141_p1() {
    tmp_12983_cast_fu_62141_p1 = esl_zext<44,36>(tmp_6830_reg_97497.read());
}

void particlemaster_ReadCalculations::thread_tmp_12991_cast_fu_62199_p1() {
    tmp_12991_cast_fu_62199_p1 = esl_zext<108,100>(p_Val2_4855_reg_97522.read());
}

void particlemaster_ReadCalculations::thread_tmp_13044_neg_fu_21786_p2() {
    tmp_13044_neg_fu_21786_p2 = (p_015_i575_in_reg_5521.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_13050_neg_fu_11429_p2() {
    tmp_13050_neg_fu_11429_p2 = (p_015_i3617_in_reg_5414.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_13117_not_fu_70431_p2() {
    tmp_13117_not_fu_70431_p2 = (!tmp_6173_reg_100313.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6173_reg_100313.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_13119_not_fu_60064_p2() {
    tmp_13119_not_fu_60064_p2 = (!tmp_6279_reg_95853.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6279_reg_95853.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_13445_not_fu_71164_p2() {
    tmp_13445_not_fu_71164_p2 = (!tmp_6658_fu_71157_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6658_fu_71157_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_13447_not_fu_60797_p2() {
    tmp_13447_not_fu_60797_p2 = (!tmp_6659_fu_60790_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6659_fu_60790_p3.read() != ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_15646_neg_fu_27311_p2() {
    tmp_15646_neg_fu_27311_p2 = (p_015_i1927_in_reg_5575.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_15651_neg_fu_16961_p2() {
    tmp_15651_neg_fu_16961_p2 = (p_015_i4969_in_reg_5468.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_16950_neg_fu_29047_p2() {
    tmp_16950_neg_fu_29047_p2 = (p_015_i2603_in_phi_fu_5608_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_16955_neg_fu_18697_p2() {
    tmp_16955_neg_fu_18697_p2 = (p_015_i5645_in_phi_fu_5501_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_17602_neg_fu_29061_p2() {
    tmp_17602_neg_fu_29061_p2 = (tmp_17602_to_int_fu_29057_p1.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_17602_to_int_fu_29057_p1() {
    tmp_17602_to_int_fu_29057_p1 = reg_6353.read();
}

void particlemaster_ReadCalculations::thread_tmp_18905_neg_fu_44505_p2() {
    tmp_18905_neg_fu_44505_p2 = (p_015_i6659_in_reg_5798.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_18911_neg_fu_34150_p2() {
    tmp_18911_neg_fu_34150_p2 = (p_015_i9701_in_reg_5682.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_21507_neg_fu_50036_p2() {
    tmp_21507_neg_fu_50036_p2 = (p_015_i8011_in_reg_5852.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_21512_neg_fu_39712_p2() {
    tmp_21512_neg_fu_39712_p2 = (p_015_i11053_in_reg_5736.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_22811_neg_fu_51772_p2() {
    tmp_22811_neg_fu_51772_p2 = (p_015_i8687_in_phi_fu_5885_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_22816_neg_fu_41416_p2() {
    tmp_22816_neg_fu_41416_p2 = (p_015_i11729_in_phi_fu_5769_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_23463_neg_fu_51786_p2() {
    tmp_23463_neg_fu_51786_p2 = (tmp_23463_to_int_fu_51782_p1.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_23463_to_int_fu_51782_p1() {
    tmp_23463_to_int_fu_51782_p1 = reg_6353.read();
}

void particlemaster_ReadCalculations::thread_tmp_24765_neg_fu_65436_p2() {
    tmp_24765_neg_fu_65436_p2 = (p_015_i12743_in_reg_6012.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_24771_neg_fu_55069_p2() {
    tmp_24771_neg_fu_55069_p2 = (p_015_i15785_in_reg_5905.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_27367_neg_fu_70965_p2() {
    tmp_27367_neg_fu_70965_p2 = (p_015_i14095_in_reg_6066.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_27372_neg_fu_60598_p2() {
    tmp_27372_neg_fu_60598_p2 = (p_015_i17137_in_reg_5959.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_2811_fu_7132_p2() {
    tmp_2811_fu_7132_p2 = (!b_exp_fu_7126_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_fu_7126_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_2812_fu_6449_p2() {
    tmp_2812_fu_6449_p2 = (!loc_V_62_reg_73304.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_62_reg_73304.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2813_fu_7138_p2() {
    tmp_2813_fu_7138_p2 = (!loc_V_reg_73297.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_reg_73297.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_2814_fu_6454_p2() {
    tmp_2814_fu_6454_p2 = (!loc_V_62_reg_73304.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_62_reg_73304.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2815_fu_7802_p2() {
    tmp_2815_fu_7802_p2 = (tmp_2813_reg_73630.read() & tmp_2814_reg_73345.read());
}

void particlemaster_ReadCalculations::thread_tmp_2816_fu_6426_p2() {
    tmp_2816_fu_6426_p2 = (!loc_V_reg_73297.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_reg_73297.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_2817_fu_7863_p2() {
    tmp_2817_fu_7863_p2 = (tmp_2813_reg_73630.read() & tmp_2812_reg_73339.read());
}

void particlemaster_ReadCalculations::thread_tmp_2818_fu_7806_p3() {
    tmp_2818_fu_7806_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2815_fu_7802_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2819_fu_7872_p3() {
    tmp_2819_fu_7872_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2817_fu_7863_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2820_fu_7880_p2() {
    tmp_2820_fu_7880_p2 = (!tmp_2819_fu_7872_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2819_fu_7872_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2821_fu_6431_p3() {
    tmp_2821_fu_6431_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2816_fu_6426_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2822_fu_6439_p2() {
    tmp_2822_fu_6439_p2 = (!tmp_2821_fu_6431_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2821_fu_6431_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2823_fu_6445_p1() {
    tmp_2823_fu_6445_p1 = esl_zext<32,6>(index0_V_reg_73318.read());
}

void particlemaster_ReadCalculations::thread_tmp_2824_fu_6539_p4() {
    tmp_2824_fu_6539_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_3585_reg_73371.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_2825_fu_6548_p1() {
    tmp_2825_fu_6548_p1 = esl_zext<76,75>(sf_fu_6530_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2826_fu_6560_p3() {
    tmp_2826_fu_6560_p3 = esl_concat<50,25>(tmp_3588_fu_6520_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_2827_fu_6572_p1() {
    tmp_2827_fu_6572_p1 = esl_zext<77,76>(p_Val2_2024_fu_6552_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2828_fu_6595_p1() {
    tmp_2828_fu_6595_p1 = esl_zext<78,77>(p_Val2_2025_reg_73384.read());
}

void particlemaster_ReadCalculations::thread_tmp_2829_fu_6598_p1() {
    tmp_2829_fu_6598_p1 = esl_zext<78,75>(p_Val2_2026_reg_73399.read());
}

void particlemaster_ReadCalculations::thread_tmp_2830_fu_7181_p1() {
    tmp_2830_fu_7181_p1 = esl_zext<32,4>(p_Val2_6983_reg_73378.read());
}

void particlemaster_ReadCalculations::thread_tmp_2832_fu_6644_p3() {
    tmp_2832_fu_6644_p3 = esl_concat<67,14>(tmp_2831_reg_73416.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_2833_fu_6655_p1() {
    tmp_2833_fu_6655_p1 = esl_zext<82,81>(p_Val2_2030_fu_6637_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2834_fu_6677_p1() {
    tmp_2834_fu_6677_p1 = esl_zext<83,82>(p_Val2_2031_reg_73421.read());
}

void particlemaster_ReadCalculations::thread_tmp_2835_fu_6680_p3() {
    tmp_2835_fu_6680_p3 = esl_concat<79,1>(p_Val2_2032_reg_73436.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_2836_fu_7185_p1() {
    tmp_2836_fu_7185_p1 = esl_zext<32,6>(p_Val2_6984_reg_73410.read());
}

void particlemaster_ReadCalculations::thread_tmp_2837_fu_6729_p3() {
    tmp_2837_fu_6729_p3 = esl_concat<76,25>(tmp_3609_reg_73457.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_2838_fu_6740_p1() {
    tmp_2838_fu_6740_p1 = esl_zext<102,96>(p_Val2_2035_fu_6720_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2839_fu_6763_p1() {
    tmp_2839_fu_6763_p1 = esl_zext<103,102>(p_Val2_2036_reg_73462.read());
}

void particlemaster_ReadCalculations::thread_tmp_2840_fu_6766_p3() {
    tmp_2840_fu_6766_p3 = esl_concat<89,6>(p_Val2_2037_reg_73477.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_2841_fu_7189_p1() {
    tmp_2841_fu_7189_p1 = esl_zext<32,6>(p_Val2_6985_reg_73451.read());
}

void particlemaster_ReadCalculations::thread_tmp_2843_fu_6820_p3() {
    tmp_2843_fu_6820_p3 = esl_concat<86,34>(tmp_2842_reg_73494.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_2844_fu_6831_p1() {
    tmp_2844_fu_6831_p1 = esl_zext<121,110>(p_Val2_2041_fu_6813_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2845_fu_6853_p1() {
    tmp_2845_fu_6853_p1 = esl_zext<122,121>(p_Val2_2042_reg_73499.read());
}

void particlemaster_ReadCalculations::thread_tmp_2846_fu_6856_p3() {
    tmp_2846_fu_6856_p3 = esl_concat<98,11>(p_Val2_2043_reg_73514.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_2847_fu_7165_p1() {
    tmp_2847_fu_7165_p1 = esl_zext<32,6>(p_Val2_6986_reg_73488.read());
}

void particlemaster_ReadCalculations::thread_tmp_2849_fu_6910_p3() {
    tmp_2849_fu_6910_p3 = esl_concat<81,44>(tmp_2848_reg_73531.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_2850_fu_6921_p1() {
    tmp_2850_fu_6921_p1 = esl_zext<126,110>(p_Val2_2047_fu_6903_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2851_fu_6943_p1() {
    tmp_2851_fu_6943_p1 = esl_zext<127,126>(p_Val2_2048_reg_73536.read());
}

void particlemaster_ReadCalculations::thread_tmp_2852_fu_6946_p3() {
    tmp_2852_fu_6946_p3 = esl_concat<93,16>(p_Val2_2049_reg_73551.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_2853_fu_7169_p1() {
    tmp_2853_fu_7169_p1 = esl_zext<32,6>(p_Val2_6987_reg_73525.read());
}

void particlemaster_ReadCalculations::thread_tmp_2855_fu_7000_p3() {
    tmp_2855_fu_7000_p3 = esl_concat<76,54>(tmp_2854_reg_73568.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_2856_fu_7011_p1() {
    tmp_2856_fu_7011_p1 = esl_zext<131,110>(p_Val2_2053_fu_6993_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2857_fu_7033_p1() {
    tmp_2857_fu_7033_p1 = esl_zext<132,131>(p_Val2_2054_reg_73573.read());
}

void particlemaster_ReadCalculations::thread_tmp_2858_fu_7036_p3() {
    tmp_2858_fu_7036_p3 = esl_concat<88,21>(p_Val2_2055_reg_73588.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_2859_fu_7173_p1() {
    tmp_2859_fu_7173_p1 = esl_zext<32,6>(p_Val2_6988_reg_73562.read());
}

void particlemaster_ReadCalculations::thread_tmp_2861_fu_7090_p3() {
    tmp_2861_fu_7090_p3 = esl_concat<71,64>(tmp_2860_reg_73605.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_2862_fu_7101_p1() {
    tmp_2862_fu_7101_p1 = esl_zext<136,110>(p_Val2_2059_fu_7083_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2863_fu_7197_p1() {
    tmp_2863_fu_7197_p1 = esl_zext<137,136>(p_Val2_2060_reg_73610.read());
}

void particlemaster_ReadCalculations::thread_tmp_2864_fu_7200_p3() {
    tmp_2864_fu_7200_p3 = esl_concat<83,26>(p_Val2_2061_reg_73661.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_2865_fu_7177_p1() {
    tmp_2865_fu_7177_p1 = esl_zext<32,6>(p_Val2_6989_reg_73599.read());
}

void particlemaster_ReadCalculations::thread_tmp_28671_neg_fu_72701_p2() {
    tmp_28671_neg_fu_72701_p2 = (p_015_i14771_in_phi_fu_6099_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_28676_neg_fu_62334_p2() {
    tmp_28676_neg_fu_62334_p2 = (p_015_i17813_in_phi_fu_5992_p14.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_2869_fu_7333_p3() {
    tmp_2869_fu_7333_p3 = esl_concat<72,45>(tmp_2866_reg_73696.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_2871_fu_7363_p3() {
    tmp_2871_fu_7363_p3 = esl_concat<90,30>(p_Val2_2020_reg_73727.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_2872_fu_7374_p1() {
    tmp_2872_fu_7374_p1 = esl_zext<122,121>(p_Val2_3671_cast_fu_7330_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_2873_fu_7391_p1() {
    tmp_2873_fu_7391_p1 = esl_zext<123,122>(p_Val2_2066_reg_73748.read());
}

void particlemaster_ReadCalculations::thread_tmp_2874_fu_7394_p1() {
    tmp_2874_fu_7394_p1 = esl_zext<123,121>(p_Val2_2065_fu_7388_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_2875_fu_7398_p1() {
    tmp_2875_fu_7398_p1 = esl_sext<120,73>(tmp_2870_reg_73742.read());
}

void particlemaster_ReadCalculations::thread_tmp_2878_fu_7467_p3() {
    tmp_2878_fu_7467_p3 = esl_concat<77,52>(tmp_2877_reg_73768.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2879_fu_7477_p3() {
    tmp_2879_fu_7477_p3 = esl_concat<1,18>(tmp_3622_reg_73783.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_2881_fu_7500_p2() {
    tmp_2881_fu_7500_p2 = (!tmp_3689_fu_7497_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3689_fu_7497_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_2882_fu_7560_p1() {
    tmp_2882_fu_7560_p1 = esl_sext<72,71>(p_Val2_3369_reg_73773.read());
}

void particlemaster_ReadCalculations::thread_tmp_2883_fu_7563_p1() {
    tmp_2883_fu_7563_p1 = esl_sext<72,71>(p_Val2_2073_reg_73823.read());
}

void particlemaster_ReadCalculations::thread_tmp_2884_fu_7718_p1() {
    tmp_2884_fu_7718_p1 = esl_zext<32,8>(m_diff_hi_V_reg_73828.read());
}

void particlemaster_ReadCalculations::thread_tmp_2885_fu_7616_p1() {
    tmp_2885_fu_7616_p1 = esl_zext<32,8>(Z4_ind_V_fu_7606_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2886_fu_7626_p1() {
    tmp_2886_fu_7626_p1 = esl_zext<36,35>(p_Val2_3286_reg_73845.read());
}

void particlemaster_ReadCalculations::thread_tmp_2887_fu_7629_p1() {
    tmp_2887_fu_7629_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2888_fu_7621_p1() {
    tmp_2888_fu_7621_p1 = esl_zext<32,8>(p_Val2_3377_fu_7592_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2889_fu_7639_p4() {
    tmp_2889_fu_7639_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_3377_reg_73840.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_2891_fu_7675_p1() {
    tmp_2891_fu_7675_p1 = esl_zext<44,43>(tmp_2889_reg_73866.read());
}

void particlemaster_ReadCalculations::thread_tmp_2892_fu_7671_p1() {
    tmp_2892_fu_7671_p1 = esl_zext<32,8>(p_Val2_3386_reg_73833.read());
}

void particlemaster_ReadCalculations::thread_tmp_2894_fu_7696_p4() {
    tmp_2894_fu_7696_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_3386_reg_73833.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_2896_fu_7732_p5() {
    tmp_2896_fu_7732_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_3386_reg_73833.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_2899_fu_7788_p1() {
    tmp_2899_fu_7788_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_2900_fu_7820_p3() {
    tmp_2900_fu_7820_p3 = esl_concat<59,49>(p_Val2_2082_reg_73932.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_2901_fu_7510_p2() {
    tmp_2901_fu_7510_p2 = (!tmp_5563_cast_fu_7506_p1.read().is_01() || !p_Val2_2068_fu_7460_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_5563_cast_fu_7506_p1.read() != p_Val2_2068_fu_7460_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2902_fu_7907_p2() {
    tmp_2902_fu_7907_p2 = (!p_0415_0_i_fu_7886_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i_fu_7886_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_2903_fu_7913_p4() {
    tmp_2903_fu_7913_p4 = p_Val2_2084_reg_73955.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_2904_fu_7922_p4() {
    tmp_2904_fu_7922_p4 = p_Val2_2084_reg_73955.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_2905_fu_8076_p2() {
    tmp_2905_fu_8076_p2 = (sel_tmp233_fu_8071_p2.read() | sel_tmp230_fu_8051_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2906_fu_8090_p2() {
    tmp_2906_fu_8090_p2 = (tmp_2905_fu_8076_p2.read() | sel_tmp227_fu_8041_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2908_fu_8157_p2() {
    tmp_2908_fu_8157_p2 = (!b_exp_38_fu_8151_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_38_fu_8151_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_2909_fu_8163_p2() {
    tmp_2909_fu_8163_p2 = (!loc_V_65_fu_8143_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_65_fu_8143_p1.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2910_fu_8175_p2() {
    tmp_2910_fu_8175_p2 = (!loc_V_64_fu_8133_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_64_fu_8133_p4.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_2911_fu_8181_p2() {
    tmp_2911_fu_8181_p2 = (!loc_V_65_fu_8143_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_65_fu_8143_p1.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2912_fu_8187_p2() {
    tmp_2912_fu_8187_p2 = (tmp_2910_fu_8175_p2.read() & tmp_2911_fu_8181_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2913_fu_8193_p2() {
    tmp_2913_fu_8193_p2 = (!loc_V_64_fu_8133_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_64_fu_8133_p4.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_2914_fu_8199_p2() {
    tmp_2914_fu_8199_p2 = (tmp_2910_fu_8175_p2.read() & tmp_2909_fu_8163_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_2915_fu_8292_p3() {
    tmp_2915_fu_8292_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_2916_fu_8234_p3() {
    tmp_2916_fu_8234_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_2917_fu_8319_p3() {
    tmp_2917_fu_8319_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_2918_fu_8326_p2() {
    tmp_2918_fu_8326_p2 = (!tmp_2917_fu_8319_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2917_fu_8319_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2919_fu_8261_p3() {
    tmp_2919_fu_8261_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_2920_fu_8268_p2() {
    tmp_2920_fu_8268_p2 = (!tmp_2919_fu_8261_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2919_fu_8261_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2921_fu_8332_p3() {
    tmp_2921_fu_8332_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_2922_fu_8339_p2() {
    tmp_2922_fu_8339_p2 = (!tmp_2921_fu_8332_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2921_fu_8332_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2923_fu_8274_p3() {
    tmp_2923_fu_8274_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_2924_fu_8281_p2() {
    tmp_2924_fu_8281_p2 = (!tmp_2923_fu_8274_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2923_fu_8274_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_2925_fu_8345_p1() {
    tmp_2925_fu_8345_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2926_fu_18788_p4() {
    tmp_2926_fu_18788_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_3802_reg_78673.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_2927_fu_18797_p1() {
    tmp_2927_fu_18797_p1 = esl_zext<76,75>(sf26_fu_18779_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2928_fu_18809_p3() {
    tmp_2928_fu_18809_p3 = esl_concat<50,25>(tmp_3819_fu_18769_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_2929_fu_18821_p1() {
    tmp_2929_fu_18821_p1 = esl_zext<77,76>(p_Val2_2090_fu_18801_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2930_fu_18844_p1() {
    tmp_2930_fu_18844_p1 = esl_zext<78,77>(p_Val2_2091_reg_78686.read());
}

void particlemaster_ReadCalculations::thread_tmp_2931_fu_18847_p1() {
    tmp_2931_fu_18847_p1 = esl_zext<78,75>(p_Val2_2092_reg_78701.read());
}

void particlemaster_ReadCalculations::thread_tmp_29323_neg_fu_62347_p2() {
    tmp_29323_neg_fu_62347_p2 = (tmp_29323_to_int_fu_62344_p1.read() ^ ap_const_lv64_8000000000000000);
}

void particlemaster_ReadCalculations::thread_tmp_29323_to_int_fu_62344_p1() {
    tmp_29323_to_int_fu_62344_p1 = tmp_6847_reg_102019.read();
}

void particlemaster_ReadCalculations::thread_tmp_2932_fu_19403_p1() {
    tmp_2932_fu_19403_p1 = esl_zext<32,4>(p_Val2_6990_reg_78680.read());
}

void particlemaster_ReadCalculations::thread_tmp_2934_fu_18893_p3() {
    tmp_2934_fu_18893_p3 = esl_concat<67,14>(tmp_2933_reg_78718.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_2935_fu_18904_p1() {
    tmp_2935_fu_18904_p1 = esl_zext<82,81>(p_Val2_2096_fu_18886_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2936_fu_18926_p1() {
    tmp_2936_fu_18926_p1 = esl_zext<83,82>(p_Val2_2097_reg_78723.read());
}

void particlemaster_ReadCalculations::thread_tmp_2937_fu_18929_p3() {
    tmp_2937_fu_18929_p3 = esl_concat<79,1>(p_Val2_2098_reg_78738.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_2938_fu_19407_p1() {
    tmp_2938_fu_19407_p1 = esl_zext<32,6>(p_Val2_6991_reg_78712.read());
}

void particlemaster_ReadCalculations::thread_tmp_2939_fu_18978_p3() {
    tmp_2939_fu_18978_p3 = esl_concat<76,25>(tmp_3836_reg_78759.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_2940_fu_18989_p1() {
    tmp_2940_fu_18989_p1 = esl_zext<102,96>(p_Val2_2101_fu_18969_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2941_fu_19012_p1() {
    tmp_2941_fu_19012_p1 = esl_zext<103,102>(p_Val2_2102_reg_78764.read());
}

void particlemaster_ReadCalculations::thread_tmp_2942_fu_19015_p3() {
    tmp_2942_fu_19015_p3 = esl_concat<89,6>(p_Val2_2103_reg_78779.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_2943_fu_19411_p1() {
    tmp_2943_fu_19411_p1 = esl_zext<32,6>(p_Val2_6992_reg_78753.read());
}

void particlemaster_ReadCalculations::thread_tmp_2945_fu_19069_p3() {
    tmp_2945_fu_19069_p3 = esl_concat<86,34>(tmp_2944_reg_78796.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_2946_fu_19080_p1() {
    tmp_2946_fu_19080_p1 = esl_zext<121,110>(p_Val2_2107_fu_19062_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2947_fu_19102_p1() {
    tmp_2947_fu_19102_p1 = esl_zext<122,121>(p_Val2_2108_reg_78801.read());
}

void particlemaster_ReadCalculations::thread_tmp_2948_fu_19105_p3() {
    tmp_2948_fu_19105_p3 = esl_concat<98,11>(p_Val2_2109_reg_78816.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_2949_fu_19387_p1() {
    tmp_2949_fu_19387_p1 = esl_zext<32,6>(p_Val2_6993_reg_78790.read());
}

void particlemaster_ReadCalculations::thread_tmp_2951_fu_19159_p3() {
    tmp_2951_fu_19159_p3 = esl_concat<81,44>(tmp_2950_reg_78833.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_2952_fu_19170_p1() {
    tmp_2952_fu_19170_p1 = esl_zext<126,110>(p_Val2_2113_fu_19152_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2953_fu_19192_p1() {
    tmp_2953_fu_19192_p1 = esl_zext<127,126>(p_Val2_2114_reg_78838.read());
}

void particlemaster_ReadCalculations::thread_tmp_2954_fu_19195_p3() {
    tmp_2954_fu_19195_p3 = esl_concat<93,16>(p_Val2_2115_reg_78853.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_2955_fu_19391_p1() {
    tmp_2955_fu_19391_p1 = esl_zext<32,6>(p_Val2_6994_reg_78827.read());
}

void particlemaster_ReadCalculations::thread_tmp_2957_fu_19249_p3() {
    tmp_2957_fu_19249_p3 = esl_concat<76,54>(tmp_2956_reg_78870.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_2958_fu_19260_p1() {
    tmp_2958_fu_19260_p1 = esl_zext<131,110>(p_Val2_2119_fu_19242_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2959_fu_19282_p1() {
    tmp_2959_fu_19282_p1 = esl_zext<132,131>(p_Val2_2120_reg_78875.read());
}

void particlemaster_ReadCalculations::thread_tmp_2960_fu_19285_p3() {
    tmp_2960_fu_19285_p3 = esl_concat<88,21>(p_Val2_2121_reg_78890.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_2961_fu_19395_p1() {
    tmp_2961_fu_19395_p1 = esl_zext<32,6>(p_Val2_6995_reg_78864.read());
}

void particlemaster_ReadCalculations::thread_tmp_2963_fu_19339_p3() {
    tmp_2963_fu_19339_p3 = esl_concat<71,64>(tmp_2962_reg_78907.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_2964_fu_19350_p1() {
    tmp_2964_fu_19350_p1 = esl_zext<136,110>(p_Val2_2125_fu_19332_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_2965_fu_19419_p1() {
    tmp_2965_fu_19419_p1 = esl_zext<137,136>(p_Val2_2126_reg_78912.read());
}

void particlemaster_ReadCalculations::thread_tmp_2966_fu_19422_p3() {
    tmp_2966_fu_19422_p3 = esl_concat<83,26>(p_Val2_2127_reg_78952.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_2967_fu_19399_p1() {
    tmp_2967_fu_19399_p1 = esl_zext<32,6>(p_Val2_6996_reg_78901.read());
}

void particlemaster_ReadCalculations::thread_tmp_2971_fu_19555_p3() {
    tmp_2971_fu_19555_p3 = esl_concat<72,45>(tmp_2968_reg_78987.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_2973_fu_19585_p3() {
    tmp_2973_fu_19585_p3 = esl_concat<90,30>(p_Val2_2086_reg_79018.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_2974_fu_19596_p1() {
    tmp_2974_fu_19596_p1 = esl_zext<122,121>(p_Val2_3855_cast_fu_19552_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_2975_fu_19617_p1() {
    tmp_2975_fu_19617_p1 = esl_zext<123,122>(p_Val2_2132_reg_79039.read());
}

void particlemaster_ReadCalculations::thread_tmp_2976_fu_19620_p1() {
    tmp_2976_fu_19620_p1 = esl_zext<123,121>(p_Val2_2131_fu_19614_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_2977_fu_19624_p1() {
    tmp_2977_fu_19624_p1 = esl_sext<120,73>(tmp_2972_reg_79033.read());
}

void particlemaster_ReadCalculations::thread_tmp_2980_fu_19698_p3() {
    tmp_2980_fu_19698_p3 = esl_concat<77,52>(tmp_2979_reg_79064.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_2981_fu_19708_p3() {
    tmp_2981_fu_19708_p3 = esl_concat<1,18>(tmp_3906_reg_79079.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_2983_fu_19731_p2() {
    tmp_2983_fu_19731_p2 = (!tmp_3909_fu_19728_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3909_fu_19728_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_2984_fu_19791_p1() {
    tmp_2984_fu_19791_p1 = esl_sext<72,71>(p_Val2_3512_reg_79069.read());
}

void particlemaster_ReadCalculations::thread_tmp_2985_fu_19794_p1() {
    tmp_2985_fu_19794_p1 = esl_sext<72,71>(p_Val2_2139_reg_79118.read());
}

void particlemaster_ReadCalculations::thread_tmp_2986_fu_19949_p1() {
    tmp_2986_fu_19949_p1 = esl_zext<32,8>(m_diff_hi_V_30_reg_79123.read());
}

void particlemaster_ReadCalculations::thread_tmp_2987_fu_19847_p1() {
    tmp_2987_fu_19847_p1 = esl_zext<32,8>(Z4_ind_V_30_fu_19837_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2988_fu_19857_p1() {
    tmp_2988_fu_19857_p1 = esl_zext<36,35>(p_Val2_3520_reg_79140.read());
}

void particlemaster_ReadCalculations::thread_tmp_2989_fu_19860_p1() {
    tmp_2989_fu_19860_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2990_fu_19852_p1() {
    tmp_2990_fu_19852_p1 = esl_zext<32,8>(p_Val2_3522_fu_19823_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_2991_fu_19870_p4() {
    tmp_2991_fu_19870_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_3522_reg_79135.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_2993_fu_19906_p1() {
    tmp_2993_fu_19906_p1 = esl_zext<44,43>(tmp_2991_reg_79161.read());
}

void particlemaster_ReadCalculations::thread_tmp_2994_fu_19902_p1() {
    tmp_2994_fu_19902_p1 = esl_zext<32,8>(p_Val2_3548_reg_79128.read());
}

void particlemaster_ReadCalculations::thread_tmp_2996_fu_19927_p4() {
    tmp_2996_fu_19927_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_3548_reg_79128.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_2998_fu_19963_p5() {
    tmp_2998_fu_19963_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_3548_reg_79128.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3001_fu_20019_p1() {
    tmp_3001_fu_20019_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3002_fu_20029_p3() {
    tmp_3002_fu_20029_p3 = esl_concat<59,49>(p_Val2_2148_reg_79227.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3003_fu_20063_p4() {
    tmp_3003_fu_20063_p4 = p_Val2_2150_fu_20039_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3004_fu_20073_p3() {
    tmp_3004_fu_20073_p3 = esl_concat<57,1>(tmp_3003_fu_20063_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3005_fu_19741_p2() {
    tmp_3005_fu_19741_p2 = (!tmp_5863_cast_fu_19737_p1.read().is_01() || !p_Val2_2134_fu_19691_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_5863_cast_fu_19737_p1.read() != p_Val2_2134_fu_19691_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3006_fu_8287_p1() {
    tmp_3006_fu_8287_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3007_fu_8431_p4() {
    tmp_3007_fu_8431_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_3965_reg_74234.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3008_fu_8440_p1() {
    tmp_3008_fu_8440_p1 = esl_zext<76,75>(sf27_fu_8422_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3009_fu_8452_p3() {
    tmp_3009_fu_8452_p3 = esl_concat<50,25>(tmp_3995_fu_8412_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3010_fu_8464_p1() {
    tmp_3010_fu_8464_p1 = esl_zext<77,76>(p_Val2_2157_fu_8444_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3011_fu_8487_p1() {
    tmp_3011_fu_8487_p1 = esl_zext<78,77>(p_Val2_2158_reg_74247.read());
}

void particlemaster_ReadCalculations::thread_tmp_3012_fu_8490_p1() {
    tmp_3012_fu_8490_p1 = esl_zext<78,75>(p_Val2_2159_reg_74262.read());
}

void particlemaster_ReadCalculations::thread_tmp_3013_fu_9046_p1() {
    tmp_3013_fu_9046_p1 = esl_zext<32,4>(p_Val2_7032_reg_74241.read());
}

void particlemaster_ReadCalculations::thread_tmp_3015_fu_8536_p3() {
    tmp_3015_fu_8536_p3 = esl_concat<67,14>(tmp_3014_reg_74279.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3016_fu_8547_p1() {
    tmp_3016_fu_8547_p1 = esl_zext<82,81>(p_Val2_2163_fu_8529_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3017_fu_8569_p1() {
    tmp_3017_fu_8569_p1 = esl_zext<83,82>(p_Val2_2164_reg_74284.read());
}

void particlemaster_ReadCalculations::thread_tmp_3018_fu_8572_p3() {
    tmp_3018_fu_8572_p3 = esl_concat<79,1>(p_Val2_2165_reg_74299.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3019_fu_9050_p1() {
    tmp_3019_fu_9050_p1 = esl_zext<32,6>(p_Val2_7033_reg_74273.read());
}

void particlemaster_ReadCalculations::thread_tmp_3020_fu_8621_p3() {
    tmp_3020_fu_8621_p3 = esl_concat<76,25>(tmp_4027_reg_74320.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3021_fu_8632_p1() {
    tmp_3021_fu_8632_p1 = esl_zext<102,96>(p_Val2_2168_fu_8612_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3022_fu_8655_p1() {
    tmp_3022_fu_8655_p1 = esl_zext<103,102>(p_Val2_2169_reg_74325.read());
}

void particlemaster_ReadCalculations::thread_tmp_3023_fu_8658_p3() {
    tmp_3023_fu_8658_p3 = esl_concat<89,6>(p_Val2_2170_reg_74340.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3024_fu_9054_p1() {
    tmp_3024_fu_9054_p1 = esl_zext<32,6>(p_Val2_7034_reg_74314.read());
}

void particlemaster_ReadCalculations::thread_tmp_3026_fu_8712_p3() {
    tmp_3026_fu_8712_p3 = esl_concat<86,34>(tmp_3025_reg_74357.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3027_fu_8723_p1() {
    tmp_3027_fu_8723_p1 = esl_zext<121,110>(p_Val2_2174_fu_8705_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3028_fu_8745_p1() {
    tmp_3028_fu_8745_p1 = esl_zext<122,121>(p_Val2_2175_reg_74362.read());
}

void particlemaster_ReadCalculations::thread_tmp_3029_fu_8748_p3() {
    tmp_3029_fu_8748_p3 = esl_concat<98,11>(p_Val2_2176_reg_74377.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3030_fu_9030_p1() {
    tmp_3030_fu_9030_p1 = esl_zext<32,6>(p_Val2_7035_reg_74351.read());
}

void particlemaster_ReadCalculations::thread_tmp_3032_fu_8802_p3() {
    tmp_3032_fu_8802_p3 = esl_concat<81,44>(tmp_3031_reg_74394.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3033_fu_8813_p1() {
    tmp_3033_fu_8813_p1 = esl_zext<126,110>(p_Val2_2180_fu_8795_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3034_fu_8835_p1() {
    tmp_3034_fu_8835_p1 = esl_zext<127,126>(p_Val2_2181_reg_74399.read());
}

void particlemaster_ReadCalculations::thread_tmp_3035_fu_8838_p3() {
    tmp_3035_fu_8838_p3 = esl_concat<93,16>(p_Val2_2182_reg_74414.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3036_fu_9034_p1() {
    tmp_3036_fu_9034_p1 = esl_zext<32,6>(p_Val2_7036_reg_74388.read());
}

void particlemaster_ReadCalculations::thread_tmp_3038_fu_8892_p3() {
    tmp_3038_fu_8892_p3 = esl_concat<76,54>(tmp_3037_reg_74431.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3039_fu_8903_p1() {
    tmp_3039_fu_8903_p1 = esl_zext<131,110>(p_Val2_2186_fu_8885_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3040_fu_8925_p1() {
    tmp_3040_fu_8925_p1 = esl_zext<132,131>(p_Val2_2187_reg_74436.read());
}

void particlemaster_ReadCalculations::thread_tmp_3041_fu_8928_p3() {
    tmp_3041_fu_8928_p3 = esl_concat<88,21>(p_Val2_2188_reg_74451.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3042_fu_9038_p1() {
    tmp_3042_fu_9038_p1 = esl_zext<32,6>(p_Val2_7037_reg_74425.read());
}

void particlemaster_ReadCalculations::thread_tmp_3044_fu_8982_p3() {
    tmp_3044_fu_8982_p3 = esl_concat<71,64>(tmp_3043_reg_74468.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3045_fu_8993_p1() {
    tmp_3045_fu_8993_p1 = esl_zext<136,110>(p_Val2_2192_fu_8975_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3046_fu_9062_p1() {
    tmp_3046_fu_9062_p1 = esl_zext<137,136>(p_Val2_2193_reg_74473.read());
}

void particlemaster_ReadCalculations::thread_tmp_3047_fu_9065_p3() {
    tmp_3047_fu_9065_p3 = esl_concat<83,26>(p_Val2_2194_reg_74513.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3048_fu_9042_p1() {
    tmp_3048_fu_9042_p1 = esl_zext<32,6>(p_Val2_7038_reg_74462.read());
}

void particlemaster_ReadCalculations::thread_tmp_3052_fu_9198_p3() {
    tmp_3052_fu_9198_p3 = esl_concat<72,45>(tmp_3049_reg_74548.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3054_fu_9228_p3() {
    tmp_3054_fu_9228_p3 = esl_concat<90,30>(p_Val2_2153_reg_74579.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3055_fu_9239_p1() {
    tmp_3055_fu_9239_p1 = esl_zext<122,121>(p_Val2_3922_cast_fu_9195_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3056_fu_9260_p1() {
    tmp_3056_fu_9260_p1 = esl_zext<123,122>(p_Val2_2199_reg_74600.read());
}

void particlemaster_ReadCalculations::thread_tmp_3057_fu_9263_p1() {
    tmp_3057_fu_9263_p1 = esl_zext<123,121>(p_Val2_2198_fu_9257_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3058_fu_9267_p1() {
    tmp_3058_fu_9267_p1 = esl_sext<120,73>(tmp_3053_reg_74594.read());
}

void particlemaster_ReadCalculations::thread_tmp_3061_fu_9341_p3() {
    tmp_3061_fu_9341_p3 = esl_concat<77,52>(tmp_3060_reg_74625.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3062_fu_9351_p3() {
    tmp_3062_fu_9351_p3 = esl_concat<1,18>(tmp_4073_reg_74640.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3064_fu_9374_p2() {
    tmp_3064_fu_9374_p2 = (!tmp_4103_fu_9371_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4103_fu_9371_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3065_fu_9434_p1() {
    tmp_3065_fu_9434_p1 = esl_sext<72,71>(p_Val2_3602_reg_74630.read());
}

void particlemaster_ReadCalculations::thread_tmp_3066_fu_9437_p1() {
    tmp_3066_fu_9437_p1 = esl_sext<72,71>(p_Val2_2206_reg_74679.read());
}

void particlemaster_ReadCalculations::thread_tmp_3067_fu_9592_p1() {
    tmp_3067_fu_9592_p1 = esl_zext<32,8>(m_diff_hi_V_31_reg_74684.read());
}

void particlemaster_ReadCalculations::thread_tmp_3068_fu_9490_p1() {
    tmp_3068_fu_9490_p1 = esl_zext<32,8>(Z4_ind_V_31_fu_9480_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3069_fu_9500_p1() {
    tmp_3069_fu_9500_p1 = esl_zext<36,35>(p_Val2_3609_reg_74701.read());
}

void particlemaster_ReadCalculations::thread_tmp_3070_fu_9503_p1() {
    tmp_3070_fu_9503_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3071_fu_9495_p1() {
    tmp_3071_fu_9495_p1 = esl_zext<32,8>(p_Val2_3622_fu_9466_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3072_fu_9513_p4() {
    tmp_3072_fu_9513_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_3622_reg_74696.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3074_fu_9549_p1() {
    tmp_3074_fu_9549_p1 = esl_zext<44,43>(tmp_3072_reg_74722.read());
}

void particlemaster_ReadCalculations::thread_tmp_3075_fu_9545_p1() {
    tmp_3075_fu_9545_p1 = esl_zext<32,8>(p_Val2_3645_reg_74689.read());
}

void particlemaster_ReadCalculations::thread_tmp_3077_fu_9570_p4() {
    tmp_3077_fu_9570_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_3645_reg_74689.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3079_fu_9606_p5() {
    tmp_3079_fu_9606_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_3645_reg_74689.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3082_fu_9662_p1() {
    tmp_3082_fu_9662_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3083_fu_9672_p3() {
    tmp_3083_fu_9672_p3 = esl_concat<59,49>(p_Val2_2215_reg_74788.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3084_fu_9706_p4() {
    tmp_3084_fu_9706_p4 = p_Val2_2217_fu_9682_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3085_fu_9716_p3() {
    tmp_3085_fu_9716_p3 = esl_concat<57,1>(tmp_3084_fu_9706_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3086_fu_9384_p2() {
    tmp_3086_fu_9384_p2 = (!tmp_5898_cast_fu_9380_p1.read().is_01() || !p_Val2_2201_fu_9334_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_5898_cast_fu_9380_p1.read() != p_Val2_2201_fu_9334_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3087_fu_20121_p2() {
    tmp_3087_fu_20121_p2 = (!p_0415_0_i30_reg_79242.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i30_reg_79242.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3088_fu_9764_p2() {
    tmp_3088_fu_9764_p2 = (!p_0415_0_i31_reg_74803.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i31_reg_74803.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3089_fu_21910_p1() {
    tmp_3089_fu_21910_p1 = tmp_13044_neg_reg_80002.read();
}

void particlemaster_ReadCalculations::thread_tmp_3091_fu_20900_p2() {
    tmp_3091_fu_20900_p2 = (!b_exp_73_fu_20894_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_73_fu_20894_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3092_fu_20217_p2() {
    tmp_3092_fu_20217_p2 = (!loc_V_68_reg_79283.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_68_reg_79283.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3093_fu_20906_p2() {
    tmp_3093_fu_20906_p2 = (!loc_V_67_reg_79276.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_67_reg_79276.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3094_fu_20222_p2() {
    tmp_3094_fu_20222_p2 = (!loc_V_68_reg_79283.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_68_reg_79283.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3095_fu_21575_p2() {
    tmp_3095_fu_21575_p2 = (tmp_3093_reg_79603.read() & tmp_3094_reg_79318.read());
}

void particlemaster_ReadCalculations::thread_tmp_3096_fu_20911_p2() {
    tmp_3096_fu_20911_p2 = (!loc_V_67_reg_79276.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_67_reg_79276.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3097_fu_21636_p2() {
    tmp_3097_fu_21636_p2 = (tmp_3093_reg_79603.read() & tmp_3092_reg_79312.read());
}

void particlemaster_ReadCalculations::thread_tmp_3098_fu_21579_p3() {
    tmp_3098_fu_21579_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3095_fu_21575_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3099_fu_21645_p3() {
    tmp_3099_fu_21645_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3097_fu_21636_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3100_fu_21653_p2() {
    tmp_3100_fu_21653_p2 = (!tmp_3099_fu_21645_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3099_fu_21645_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3101_fu_21659_p3() {
    tmp_3101_fu_21659_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3096_reg_79609.read());
}

void particlemaster_ReadCalculations::thread_tmp_3102_fu_21666_p2() {
    tmp_3102_fu_21666_p2 = (!tmp_3101_fu_21659_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3101_fu_21659_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3103_fu_20213_p1() {
    tmp_3103_fu_20213_p1 = esl_zext<32,6>(index0_V_28_reg_79297.read());
}

void particlemaster_ReadCalculations::thread_tmp_3104_fu_20307_p4() {
    tmp_3104_fu_20307_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_4207_reg_79344.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3105_fu_20316_p1() {
    tmp_3105_fu_20316_p1 = esl_zext<76,75>(sf28_fu_20298_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3106_fu_20328_p3() {
    tmp_3106_fu_20328_p3 = esl_concat<50,25>(tmp_4209_fu_20288_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3107_fu_20340_p1() {
    tmp_3107_fu_20340_p1 = esl_zext<77,76>(p_Val2_2225_fu_20320_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3108_fu_20363_p1() {
    tmp_3108_fu_20363_p1 = esl_zext<78,77>(p_Val2_2226_reg_79357.read());
}

void particlemaster_ReadCalculations::thread_tmp_3109_fu_20366_p1() {
    tmp_3109_fu_20366_p1 = esl_zext<78,75>(p_Val2_2227_reg_79372.read());
}

void particlemaster_ReadCalculations::thread_tmp_3110_fu_20954_p1() {
    tmp_3110_fu_20954_p1 = esl_zext<32,4>(p_Val2_6997_reg_79351.read());
}

void particlemaster_ReadCalculations::thread_tmp_3112_fu_20412_p3() {
    tmp_3112_fu_20412_p3 = esl_concat<67,14>(tmp_3111_reg_79389.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3113_fu_20423_p1() {
    tmp_3113_fu_20423_p1 = esl_zext<82,81>(p_Val2_2231_fu_20405_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3114_fu_20445_p1() {
    tmp_3114_fu_20445_p1 = esl_zext<83,82>(p_Val2_2232_reg_79394.read());
}

void particlemaster_ReadCalculations::thread_tmp_3115_fu_20448_p3() {
    tmp_3115_fu_20448_p3 = esl_concat<79,1>(p_Val2_2233_reg_79409.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3116_fu_20958_p1() {
    tmp_3116_fu_20958_p1 = esl_zext<32,6>(p_Val2_6998_reg_79383.read());
}

void particlemaster_ReadCalculations::thread_tmp_3117_fu_20497_p3() {
    tmp_3117_fu_20497_p3 = esl_concat<76,25>(tmp_4282_reg_79430.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3118_fu_20508_p1() {
    tmp_3118_fu_20508_p1 = esl_zext<102,96>(p_Val2_2236_fu_20488_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3119_fu_20531_p1() {
    tmp_3119_fu_20531_p1 = esl_zext<103,102>(p_Val2_2237_reg_79435.read());
}

void particlemaster_ReadCalculations::thread_tmp_3120_fu_20534_p3() {
    tmp_3120_fu_20534_p3 = esl_concat<89,6>(p_Val2_2238_reg_79450.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3121_fu_20962_p1() {
    tmp_3121_fu_20962_p1 = esl_zext<32,6>(p_Val2_6999_reg_79424.read());
}

void particlemaster_ReadCalculations::thread_tmp_3123_fu_20588_p3() {
    tmp_3123_fu_20588_p3 = esl_concat<86,34>(tmp_3122_reg_79467.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3124_fu_20599_p1() {
    tmp_3124_fu_20599_p1 = esl_zext<121,110>(p_Val2_2242_fu_20581_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3125_fu_20621_p1() {
    tmp_3125_fu_20621_p1 = esl_zext<122,121>(p_Val2_2243_reg_79472.read());
}

void particlemaster_ReadCalculations::thread_tmp_3126_fu_20624_p3() {
    tmp_3126_fu_20624_p3 = esl_concat<98,11>(p_Val2_2244_reg_79487.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3127_fu_20938_p1() {
    tmp_3127_fu_20938_p1 = esl_zext<32,6>(p_Val2_7000_reg_79461.read());
}

void particlemaster_ReadCalculations::thread_tmp_3129_fu_20678_p3() {
    tmp_3129_fu_20678_p3 = esl_concat<81,44>(tmp_3128_reg_79504.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3130_fu_20689_p1() {
    tmp_3130_fu_20689_p1 = esl_zext<126,110>(p_Val2_2248_fu_20671_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3131_fu_20711_p1() {
    tmp_3131_fu_20711_p1 = esl_zext<127,126>(p_Val2_2249_reg_79509.read());
}

void particlemaster_ReadCalculations::thread_tmp_3132_fu_20714_p3() {
    tmp_3132_fu_20714_p3 = esl_concat<93,16>(p_Val2_2250_reg_79524.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3133_fu_20942_p1() {
    tmp_3133_fu_20942_p1 = esl_zext<32,6>(p_Val2_7001_reg_79498.read());
}

void particlemaster_ReadCalculations::thread_tmp_3135_fu_20768_p3() {
    tmp_3135_fu_20768_p3 = esl_concat<76,54>(tmp_3134_reg_79541.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3136_fu_20779_p1() {
    tmp_3136_fu_20779_p1 = esl_zext<131,110>(p_Val2_2254_fu_20761_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3137_fu_20801_p1() {
    tmp_3137_fu_20801_p1 = esl_zext<132,131>(p_Val2_2255_reg_79546.read());
}

void particlemaster_ReadCalculations::thread_tmp_3138_fu_20804_p3() {
    tmp_3138_fu_20804_p3 = esl_concat<88,21>(p_Val2_2256_reg_79561.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3139_fu_20946_p1() {
    tmp_3139_fu_20946_p1 = esl_zext<32,6>(p_Val2_7002_reg_79535.read());
}

void particlemaster_ReadCalculations::thread_tmp_3141_fu_20858_p3() {
    tmp_3141_fu_20858_p3 = esl_concat<71,64>(tmp_3140_reg_79578.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3142_fu_20869_p1() {
    tmp_3142_fu_20869_p1 = esl_zext<136,110>(p_Val2_2260_fu_20851_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3143_fu_20970_p1() {
    tmp_3143_fu_20970_p1 = esl_zext<137,136>(p_Val2_2261_reg_79583.read());
}

void particlemaster_ReadCalculations::thread_tmp_3144_fu_20973_p3() {
    tmp_3144_fu_20973_p3 = esl_concat<83,26>(p_Val2_2262_reg_79639.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3145_fu_20950_p1() {
    tmp_3145_fu_20950_p1 = esl_zext<32,6>(p_Val2_7003_reg_79572.read());
}

void particlemaster_ReadCalculations::thread_tmp_3149_fu_21106_p3() {
    tmp_3149_fu_21106_p3 = esl_concat<72,45>(tmp_3146_reg_79674.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3151_fu_21136_p3() {
    tmp_3151_fu_21136_p3 = esl_concat<90,30>(p_Val2_2221_reg_79705.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3152_fu_21147_p1() {
    tmp_3152_fu_21147_p1 = esl_zext<122,121>(p_Val2_4039_cast_fu_21103_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3153_fu_21164_p1() {
    tmp_3153_fu_21164_p1 = esl_zext<123,122>(p_Val2_2267_reg_79726.read());
}

void particlemaster_ReadCalculations::thread_tmp_3154_read_fu_744_p2() {
    tmp_3154_read_fu_744_p2 =  (sc_lv<1>) (ready_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3155_read_fu_750_p2() {
    tmp_3155_read_fu_750_p2 =  (sc_lv<1>) (ready_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3156_fu_21167_p1() {
    tmp_3156_fu_21167_p1 = esl_zext<123,121>(p_Val2_2266_fu_21161_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3157_fu_21171_p1() {
    tmp_3157_fu_21171_p1 = esl_sext<120,73>(tmp_3150_reg_79720.read());
}

void particlemaster_ReadCalculations::thread_tmp_3160_fu_21240_p3() {
    tmp_3160_fu_21240_p3 = esl_concat<77,52>(tmp_3159_reg_79746.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3161_fu_21250_p3() {
    tmp_3161_fu_21250_p3 = esl_concat<1,18>(tmp_4310_reg_79761.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3163_fu_21273_p2() {
    tmp_3163_fu_21273_p2 = (!tmp_4313_fu_21270_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4313_fu_21270_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3164_fu_21333_p1() {
    tmp_3164_fu_21333_p1 = esl_sext<72,71>(p_Val2_3742_reg_79751.read());
}

void particlemaster_ReadCalculations::thread_tmp_3165_fu_21336_p1() {
    tmp_3165_fu_21336_p1 = esl_sext<72,71>(p_Val2_2274_reg_79801.read());
}

void particlemaster_ReadCalculations::thread_tmp_3166_fu_21491_p1() {
    tmp_3166_fu_21491_p1 = esl_zext<32,8>(m_diff_hi_V_32_reg_79806.read());
}

void particlemaster_ReadCalculations::thread_tmp_3167_fu_21389_p1() {
    tmp_3167_fu_21389_p1 = esl_zext<32,8>(Z4_ind_V_32_fu_21379_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3168_fu_21399_p1() {
    tmp_3168_fu_21399_p1 = esl_zext<36,35>(p_Val2_3751_reg_79823.read());
}

void particlemaster_ReadCalculations::thread_tmp_3169_fu_21402_p1() {
    tmp_3169_fu_21402_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3170_fu_21394_p1() {
    tmp_3170_fu_21394_p1 = esl_zext<32,8>(p_Val2_3765_fu_21365_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3171_fu_21412_p4() {
    tmp_3171_fu_21412_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_3765_reg_79818.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3173_fu_21448_p1() {
    tmp_3173_fu_21448_p1 = esl_zext<44,43>(tmp_3171_reg_79844.read());
}

void particlemaster_ReadCalculations::thread_tmp_3174_fu_21444_p1() {
    tmp_3174_fu_21444_p1 = esl_zext<32,8>(p_Val2_3788_reg_79811.read());
}

void particlemaster_ReadCalculations::thread_tmp_3176_fu_21469_p4() {
    tmp_3176_fu_21469_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_3788_reg_79811.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3178_fu_21505_p5() {
    tmp_3178_fu_21505_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_3788_reg_79811.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3181_fu_21561_p1() {
    tmp_3181_fu_21561_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3182_fu_21593_p3() {
    tmp_3182_fu_21593_p3 = esl_concat<59,49>(p_Val2_2283_reg_79910.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3183_fu_21283_p2() {
    tmp_3183_fu_21283_p2 = (!tmp_6165_cast_fu_21279_p1.read().is_01() || !p_Val2_2269_fu_21233_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6165_cast_fu_21279_p1.read() != p_Val2_2269_fu_21233_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3184_fu_21693_p2() {
    tmp_3184_fu_21693_p2 = (!p_0415_0_i32_fu_21672_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i32_fu_21672_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3185_read_fu_756_p2() {
    tmp_3185_read_fu_756_p2 =  (sc_lv<1>) (ready_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3186_fu_21699_p4() {
    tmp_3186_fu_21699_p4 = p_Val2_2285_reg_79933.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3187_fu_21708_p4() {
    tmp_3187_fu_21708_p4 = p_Val2_2285_reg_79933.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3188_read_fu_762_p2() {
    tmp_3188_read_fu_762_p2 =  (sc_lv<1>) (ready_p5.read());
}

void particlemaster_ReadCalculations::thread_tmp_3189_read_fu_768_p2() {
    tmp_3189_read_fu_768_p2 =  (sc_lv<1>) (ready_p6.read());
}

void particlemaster_ReadCalculations::thread_tmp_3190_fu_21869_p2() {
    tmp_3190_fu_21869_p2 = (sel_tmp264_fu_21864_p2.read() | sel_tmp261_fu_21844_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3191_fu_21883_p2() {
    tmp_3191_fu_21883_p2 = (tmp_3190_fu_21869_p2.read() | sel_tmp254_fu_21834_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3196_fu_11553_p1() {
    tmp_3196_fu_11553_p1 = tmp_13050_neg_reg_75563.read();
}

void particlemaster_ReadCalculations::thread_tmp_3198_fu_10543_p2() {
    tmp_3198_fu_10543_p2 = (!b_exp_76_fu_10537_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_76_fu_10537_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3199_fu_9860_p2() {
    tmp_3199_fu_9860_p2 = (!loc_V_81_reg_74844.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_81_reg_74844.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3200_fu_10549_p2() {
    tmp_3200_fu_10549_p2 = (!loc_V_80_reg_74837.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_80_reg_74837.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3201_fu_9865_p2() {
    tmp_3201_fu_9865_p2 = (!loc_V_81_reg_74844.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_81_reg_74844.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3202_fu_11218_p2() {
    tmp_3202_fu_11218_p2 = (tmp_3200_reg_75164.read() & tmp_3201_reg_74879.read());
}

void particlemaster_ReadCalculations::thread_tmp_3203_fu_10554_p2() {
    tmp_3203_fu_10554_p2 = (!loc_V_80_reg_74837.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_80_reg_74837.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3204_fu_11279_p2() {
    tmp_3204_fu_11279_p2 = (tmp_3200_reg_75164.read() & tmp_3199_reg_74873.read());
}

void particlemaster_ReadCalculations::thread_tmp_3205_read_fu_774_p2() {
    tmp_3205_read_fu_774_p2 =  (sc_lv<1>) (ready_p7.read());
}

void particlemaster_ReadCalculations::thread_tmp_3206_read_fu_780_p2() {
    tmp_3206_read_fu_780_p2 =  (sc_lv<1>) (ready_p8.read());
}

void particlemaster_ReadCalculations::thread_tmp_3207_fu_11222_p3() {
    tmp_3207_fu_11222_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3202_fu_11218_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3208_fu_11288_p3() {
    tmp_3208_fu_11288_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3204_fu_11279_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3209_read_fu_786_p2() {
    tmp_3209_read_fu_786_p2 =  (sc_lv<1>) (ready_p9.read());
}

void particlemaster_ReadCalculations::thread_tmp_3210_fu_11296_p2() {
    tmp_3210_fu_11296_p2 = (!tmp_3208_fu_11288_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3208_fu_11288_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3211_fu_11302_p3() {
    tmp_3211_fu_11302_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3203_reg_75170.read());
}

void particlemaster_ReadCalculations::thread_tmp_3212_fu_11309_p2() {
    tmp_3212_fu_11309_p2 = (!tmp_3211_fu_11302_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3211_fu_11302_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3213_fu_9856_p1() {
    tmp_3213_fu_9856_p1 = esl_zext<32,6>(index0_V_29_reg_74858.read());
}

void particlemaster_ReadCalculations::thread_tmp_3214_fu_9950_p4() {
    tmp_3214_fu_9950_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_4424_reg_74905.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3215_fu_9959_p1() {
    tmp_3215_fu_9959_p1 = esl_zext<76,75>(sf29_fu_9941_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3216_fu_9971_p3() {
    tmp_3216_fu_9971_p3 = esl_concat<50,25>(tmp_4425_fu_9931_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3217_fu_9983_p1() {
    tmp_3217_fu_9983_p1 = esl_zext<77,76>(p_Val2_2291_fu_9963_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3218_fu_10006_p1() {
    tmp_3218_fu_10006_p1 = esl_zext<78,77>(p_Val2_2292_reg_74918.read());
}

void particlemaster_ReadCalculations::thread_tmp_3219_fu_10009_p1() {
    tmp_3219_fu_10009_p1 = esl_zext<78,75>(p_Val2_2293_reg_74933.read());
}

void particlemaster_ReadCalculations::thread_tmp_3221_fu_10597_p1() {
    tmp_3221_fu_10597_p1 = esl_zext<32,4>(p_Val2_7039_reg_74912.read());
}

void particlemaster_ReadCalculations::thread_tmp_3224_fu_10055_p3() {
    tmp_3224_fu_10055_p3 = esl_concat<67,14>(tmp_3223_reg_74950.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3225_fu_10066_p1() {
    tmp_3225_fu_10066_p1 = esl_zext<82,81>(p_Val2_2297_fu_10048_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3226_fu_10088_p1() {
    tmp_3226_fu_10088_p1 = esl_zext<83,82>(p_Val2_2298_reg_74955.read());
}

void particlemaster_ReadCalculations::thread_tmp_3227_fu_10091_p3() {
    tmp_3227_fu_10091_p3 = esl_concat<79,1>(p_Val2_2299_reg_74970.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3228_fu_10601_p1() {
    tmp_3228_fu_10601_p1 = esl_zext<32,6>(p_Val2_7040_reg_74944.read());
}

void particlemaster_ReadCalculations::thread_tmp_3229_fu_10140_p3() {
    tmp_3229_fu_10140_p3 = esl_concat<76,25>(tmp_4480_reg_74991.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3230_fu_10151_p1() {
    tmp_3230_fu_10151_p1 = esl_zext<102,96>(p_Val2_2302_fu_10131_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3231_fu_10174_p1() {
    tmp_3231_fu_10174_p1 = esl_zext<103,102>(p_Val2_2303_reg_74996.read());
}

void particlemaster_ReadCalculations::thread_tmp_3232_fu_10177_p3() {
    tmp_3232_fu_10177_p3 = esl_concat<89,6>(p_Val2_2304_reg_75011.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3233_fu_10605_p1() {
    tmp_3233_fu_10605_p1 = esl_zext<32,6>(p_Val2_7041_reg_74985.read());
}

void particlemaster_ReadCalculations::thread_tmp_3235_fu_10231_p3() {
    tmp_3235_fu_10231_p3 = esl_concat<86,34>(tmp_3234_reg_75028.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3236_fu_10242_p1() {
    tmp_3236_fu_10242_p1 = esl_zext<121,110>(p_Val2_2308_fu_10224_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3237_fu_10264_p1() {
    tmp_3237_fu_10264_p1 = esl_zext<122,121>(p_Val2_2309_reg_75033.read());
}

void particlemaster_ReadCalculations::thread_tmp_3238_fu_10267_p3() {
    tmp_3238_fu_10267_p3 = esl_concat<98,11>(p_Val2_2310_reg_75048.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3239_fu_10581_p1() {
    tmp_3239_fu_10581_p1 = esl_zext<32,6>(p_Val2_7042_reg_75022.read());
}

void particlemaster_ReadCalculations::thread_tmp_3241_fu_10321_p3() {
    tmp_3241_fu_10321_p3 = esl_concat<81,44>(tmp_3240_reg_75065.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3242_fu_10332_p1() {
    tmp_3242_fu_10332_p1 = esl_zext<126,110>(p_Val2_2314_fu_10314_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3243_fu_10354_p1() {
    tmp_3243_fu_10354_p1 = esl_zext<127,126>(p_Val2_2315_reg_75070.read());
}

void particlemaster_ReadCalculations::thread_tmp_3244_fu_10357_p3() {
    tmp_3244_fu_10357_p3 = esl_concat<93,16>(p_Val2_2316_reg_75085.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3245_fu_10585_p1() {
    tmp_3245_fu_10585_p1 = esl_zext<32,6>(p_Val2_7043_reg_75059.read());
}

void particlemaster_ReadCalculations::thread_tmp_3247_fu_10411_p3() {
    tmp_3247_fu_10411_p3 = esl_concat<76,54>(tmp_3246_reg_75102.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3248_fu_10422_p1() {
    tmp_3248_fu_10422_p1 = esl_zext<131,110>(p_Val2_2320_fu_10404_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3249_fu_10444_p1() {
    tmp_3249_fu_10444_p1 = esl_zext<132,131>(p_Val2_2321_reg_75107.read());
}

void particlemaster_ReadCalculations::thread_tmp_3250_fu_10447_p3() {
    tmp_3250_fu_10447_p3 = esl_concat<88,21>(p_Val2_2322_reg_75122.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3251_fu_10589_p1() {
    tmp_3251_fu_10589_p1 = esl_zext<32,6>(p_Val2_7044_reg_75096.read());
}

void particlemaster_ReadCalculations::thread_tmp_3253_fu_10501_p3() {
    tmp_3253_fu_10501_p3 = esl_concat<71,64>(tmp_3252_reg_75139.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3254_fu_10512_p1() {
    tmp_3254_fu_10512_p1 = esl_zext<136,110>(p_Val2_2326_fu_10494_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3255_fu_10613_p1() {
    tmp_3255_fu_10613_p1 = esl_zext<137,136>(p_Val2_2327_reg_75144.read());
}

void particlemaster_ReadCalculations::thread_tmp_3256_fu_10616_p3() {
    tmp_3256_fu_10616_p3 = esl_concat<83,26>(p_Val2_2328_reg_75200.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3257_fu_10593_p1() {
    tmp_3257_fu_10593_p1 = esl_zext<32,6>(p_Val2_7045_reg_75133.read());
}

void particlemaster_ReadCalculations::thread_tmp_3262_fu_10749_p3() {
    tmp_3262_fu_10749_p3 = esl_concat<72,45>(tmp_3258_reg_75235.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3264_fu_10779_p3() {
    tmp_3264_fu_10779_p3 = esl_concat<90,30>(p_Val2_2287_reg_75266.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3265_fu_10790_p1() {
    tmp_3265_fu_10790_p1 = esl_zext<122,121>(p_Val2_4106_cast_fu_10746_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3266_fu_10807_p1() {
    tmp_3266_fu_10807_p1 = esl_zext<123,122>(p_Val2_2333_reg_75287.read());
}

void particlemaster_ReadCalculations::thread_tmp_3267_fu_10810_p1() {
    tmp_3267_fu_10810_p1 = esl_zext<123,121>(p_Val2_2332_fu_10804_p1.read());
}

void particlemaster_ReadCalculations::thread_tmp_3268_fu_10814_p1() {
    tmp_3268_fu_10814_p1 = esl_sext<120,73>(tmp_3263_reg_75281.read());
}

void particlemaster_ReadCalculations::thread_tmp_3271_fu_10883_p3() {
    tmp_3271_fu_10883_p3 = esl_concat<77,52>(tmp_3270_reg_75307.read(), ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3272_fu_10893_p3() {
    tmp_3272_fu_10893_p3 = esl_concat<1,18>(tmp_4511_reg_75322.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3274_fu_10916_p2() {
    tmp_3274_fu_10916_p2 = (!tmp_4514_fu_10913_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4514_fu_10913_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3275_fu_10976_p1() {
    tmp_3275_fu_10976_p1 = esl_sext<72,71>(p_Val2_3931_reg_75312.read());
}

void particlemaster_ReadCalculations::thread_tmp_3276_fu_10979_p1() {
    tmp_3276_fu_10979_p1 = esl_sext<72,71>(p_Val2_2340_reg_75362.read());
}

void particlemaster_ReadCalculations::thread_tmp_3277_fu_11134_p1() {
    tmp_3277_fu_11134_p1 = esl_zext<32,8>(m_diff_hi_V_33_reg_75367.read());
}

void particlemaster_ReadCalculations::thread_tmp_3278_fu_11032_p1() {
    tmp_3278_fu_11032_p1 = esl_zext<32,8>(Z4_ind_V_33_fu_11022_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3279_fu_11042_p1() {
    tmp_3279_fu_11042_p1 = esl_zext<36,35>(p_Val2_3945_reg_75384.read());
}

void particlemaster_ReadCalculations::thread_tmp_3280_fu_11045_p1() {
    tmp_3280_fu_11045_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3281_fu_11037_p1() {
    tmp_3281_fu_11037_p1 = esl_zext<32,8>(p_Val2_3961_fu_11008_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3282_fu_11055_p4() {
    tmp_3282_fu_11055_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_3961_reg_75379.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3284_fu_11091_p1() {
    tmp_3284_fu_11091_p1 = esl_zext<44,43>(tmp_3282_reg_75405.read());
}

void particlemaster_ReadCalculations::thread_tmp_3285_fu_11087_p1() {
    tmp_3285_fu_11087_p1 = esl_zext<32,8>(p_Val2_3967_reg_75372.read());
}

void particlemaster_ReadCalculations::thread_tmp_3287_fu_11112_p4() {
    tmp_3287_fu_11112_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_3967_reg_75372.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3290_fu_11148_p5() {
    tmp_3290_fu_11148_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_3967_reg_75372.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3294_fu_11204_p1() {
    tmp_3294_fu_11204_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3295_fu_11236_p3() {
    tmp_3295_fu_11236_p3 = esl_concat<59,49>(p_Val2_2349_reg_75471.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3296_fu_10926_p2() {
    tmp_3296_fu_10926_p2 = (!tmp_6200_cast_fu_10922_p1.read().is_01() || !p_Val2_2335_fu_10876_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_6200_cast_fu_10922_p1.read() != p_Val2_2335_fu_10876_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3297_fu_11336_p2() {
    tmp_3297_fu_11336_p2 = (!p_0415_0_i33_fu_11315_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i33_fu_11315_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3298_fu_11342_p4() {
    tmp_3298_fu_11342_p4 = p_Val2_2351_reg_75494.read().range(105, 54);
}

void particlemaster_ReadCalculations::thread_tmp_3299_fu_11351_p4() {
    tmp_3299_fu_11351_p4 = p_Val2_2351_reg_75494.read().range(104, 53);
}

void particlemaster_ReadCalculations::thread_tmp_3300_fu_11512_p2() {
    tmp_3300_fu_11512_p2 = (sel_tmp292_fu_11507_p2.read() | sel_tmp289_fu_11487_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3301_fu_11526_p2() {
    tmp_3301_fu_11526_p2 = (tmp_3300_fu_11512_p2.read() | sel_tmp283_fu_11477_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3306_fu_21918_p3() {
    tmp_3306_fu_21918_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_3307_fu_21925_p2() {
    tmp_3307_fu_21925_p2 = (!tmp_3306_fu_21918_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3306_fu_21918_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3308_fu_11561_p3() {
    tmp_3308_fu_11561_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2912_reg_74087.read());
}

void particlemaster_ReadCalculations::thread_tmp_3309_fu_11568_p2() {
    tmp_3309_fu_11568_p2 = (!tmp_3308_fu_11561_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3308_fu_11561_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3310_fu_21931_p3() {
    tmp_3310_fu_21931_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_3311_fu_21938_p2() {
    tmp_3311_fu_21938_p2 = (!tmp_3310_fu_21931_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3310_fu_21931_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3312_fu_11574_p3() {
    tmp_3312_fu_11574_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2914_reg_74108.read());
}

void particlemaster_ReadCalculations::thread_tmp_3313_fu_11581_p2() {
    tmp_3313_fu_11581_p2 = (!tmp_3312_fu_11574_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3312_fu_11574_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3314_fu_21951_p3() {
    tmp_3314_fu_21951_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_3317_fu_21958_p2() {
    tmp_3317_fu_21958_p2 = (!tmp_3314_fu_21951_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3314_fu_21951_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3318_fu_11594_p3() {
    tmp_3318_fu_11594_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_2913_reg_74097.read());
}

void particlemaster_ReadCalculations::thread_tmp_3320_fu_11601_p2() {
    tmp_3320_fu_11601_p2 = (!tmp_3318_fu_11594_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3318_fu_11594_p3.read() == ap_const_lv32_0);
}

void particlemaster_ReadCalculations::thread_tmp_3321_fu_21971_p1() {
    tmp_3321_fu_21971_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3322_fu_22064_p4() {
    tmp_3322_fu_22064_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_4603_reg_80085.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3323_fu_22073_p1() {
    tmp_3323_fu_22073_p1 = esl_zext<76,75>(sf30_fu_22055_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3324_fu_22085_p3() {
    tmp_3324_fu_22085_p3 = esl_concat<50,25>(tmp_4604_fu_22045_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3325_fu_22097_p1() {
    tmp_3325_fu_22097_p1 = esl_zext<77,76>(p_Val2_2356_fu_22077_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3326_fu_22120_p1() {
    tmp_3326_fu_22120_p1 = esl_zext<78,77>(p_Val2_2357_reg_80098.read());
}

void particlemaster_ReadCalculations::thread_tmp_3327_fu_22123_p1() {
    tmp_3327_fu_22123_p1 = esl_zext<78,75>(p_Val2_2358_reg_80113.read());
}

void particlemaster_ReadCalculations::thread_tmp_3328_fu_22716_p1() {
    tmp_3328_fu_22716_p1 = esl_zext<32,4>(p_Val2_7004_reg_80092.read());
}

void particlemaster_ReadCalculations::thread_tmp_3331_fu_22169_p3() {
    tmp_3331_fu_22169_p3 = esl_concat<67,14>(tmp_3329_reg_80130.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3333_fu_22180_p1() {
    tmp_3333_fu_22180_p1 = esl_zext<82,81>(p_Val2_2362_fu_22162_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3334_fu_22202_p1() {
    tmp_3334_fu_22202_p1 = esl_zext<83,82>(p_Val2_2363_reg_80135.read());
}

void particlemaster_ReadCalculations::thread_tmp_3335_fu_22205_p3() {
    tmp_3335_fu_22205_p3 = esl_concat<79,1>(p_Val2_2364_reg_80150.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3336_fu_22720_p1() {
    tmp_3336_fu_22720_p1 = esl_zext<32,6>(p_Val2_7005_reg_80124.read());
}

void particlemaster_ReadCalculations::thread_tmp_3337_fu_22254_p3() {
    tmp_3337_fu_22254_p3 = esl_concat<76,25>(tmp_4635_reg_80171.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3338_fu_22265_p1() {
    tmp_3338_fu_22265_p1 = esl_zext<102,96>(p_Val2_2367_fu_22245_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3339_fu_22288_p1() {
    tmp_3339_fu_22288_p1 = esl_zext<103,102>(p_Val2_2368_reg_80176.read());
}

void particlemaster_ReadCalculations::thread_tmp_3340_fu_22291_p3() {
    tmp_3340_fu_22291_p3 = esl_concat<89,6>(p_Val2_2369_reg_80191.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3341_fu_22724_p1() {
    tmp_3341_fu_22724_p1 = esl_zext<32,6>(p_Val2_7006_reg_80165.read());
}

void particlemaster_ReadCalculations::thread_tmp_3343_fu_22345_p3() {
    tmp_3343_fu_22345_p3 = esl_concat<86,34>(tmp_3342_reg_80208.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3344_fu_22356_p1() {
    tmp_3344_fu_22356_p1 = esl_zext<121,110>(p_Val2_2373_fu_22338_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3345_fu_22378_p1() {
    tmp_3345_fu_22378_p1 = esl_zext<122,121>(p_Val2_2374_reg_80213.read());
}

void particlemaster_ReadCalculations::thread_tmp_3346_fu_22381_p3() {
    tmp_3346_fu_22381_p3 = esl_concat<98,11>(p_Val2_2375_reg_80228.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3347_fu_22635_p1() {
    tmp_3347_fu_22635_p1 = esl_zext<32,6>(p_Val2_7007_reg_80202.read());
}

void particlemaster_ReadCalculations::thread_tmp_3349_fu_22435_p3() {
    tmp_3349_fu_22435_p3 = esl_concat<81,44>(tmp_3348_reg_80245.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3350_fu_22446_p1() {
    tmp_3350_fu_22446_p1 = esl_zext<126,110>(p_Val2_2379_fu_22428_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3351_fu_22468_p1() {
    tmp_3351_fu_22468_p1 = esl_zext<127,126>(p_Val2_2380_reg_80250.read());
}

void particlemaster_ReadCalculations::thread_tmp_3352_fu_22471_p3() {
    tmp_3352_fu_22471_p3 = esl_concat<93,16>(p_Val2_2381_reg_80265.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3353_fu_22639_p1() {
    tmp_3353_fu_22639_p1 = esl_zext<32,6>(p_Val2_7008_reg_80239.read());
}

void particlemaster_ReadCalculations::thread_tmp_3355_fu_22525_p3() {
    tmp_3355_fu_22525_p3 = esl_concat<76,54>(tmp_3354_reg_80282.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3356_fu_22536_p1() {
    tmp_3356_fu_22536_p1 = esl_zext<131,110>(p_Val2_2385_fu_22518_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3357_fu_22558_p1() {
    tmp_3357_fu_22558_p1 = esl_zext<132,131>(p_Val2_2386_reg_80287.read());
}

void particlemaster_ReadCalculations::thread_tmp_3358_fu_22561_p3() {
    tmp_3358_fu_22561_p3 = esl_concat<88,21>(p_Val2_2387_reg_80302.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3359_fu_22643_p1() {
    tmp_3359_fu_22643_p1 = esl_zext<32,6>(p_Val2_7009_reg_80276.read());
}

void particlemaster_ReadCalculations::thread_tmp_3361_fu_22654_p3() {
    tmp_3361_fu_22654_p3 = esl_concat<71,64>(tmp_3360_reg_80319.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3362_fu_22665_p1() {
    tmp_3362_fu_22665_p1 = esl_zext<136,110>(p_Val2_2391_fu_22647_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3363_fu_22675_p3() {
    tmp_3363_fu_22675_p3 = esl_concat<83,26>(p_Val2_2393_reg_80344.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3364_fu_22692_p1() {
    tmp_3364_fu_22692_p1 = esl_zext<32,6>(p_Val2_7010_reg_80313.read());
}

void particlemaster_ReadCalculations::thread_tmp_3368_fu_22825_p3() {
    tmp_3368_fu_22825_p3 = esl_concat<72,45>(tmp_3365_reg_80369.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3370_fu_22861_p3() {
    tmp_3370_fu_22861_p3 = esl_concat<90,30>(p_Val2_2352_reg_80430.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3374_fu_22959_p3() {
    tmp_3374_fu_22959_p3 = esl_concat<1,18>(tmp_4637_reg_80483.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3376_fu_22982_p2() {
    tmp_3376_fu_22982_p2 = (!tmp_4704_fu_22979_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4704_fu_22979_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3377_fu_22988_p1() {
    tmp_3377_fu_22988_p1 = esl_sext<131,129>(phitmp16_reg_80468.read());
}

void particlemaster_ReadCalculations::thread_tmp_3378_fu_23040_p1() {
    tmp_3378_fu_23040_p1 = esl_sext<72,71>(p_Val2_4109_reg_80473.read());
}

void particlemaster_ReadCalculations::thread_tmp_3379_fu_23043_p1() {
    tmp_3379_fu_23043_p1 = esl_sext<72,71>(p_Val2_2404_reg_80522.read());
}

void particlemaster_ReadCalculations::thread_tmp_3380_fu_23198_p1() {
    tmp_3380_fu_23198_p1 = esl_zext<32,8>(m_diff_hi_V_34_reg_80527.read());
}

void particlemaster_ReadCalculations::thread_tmp_3381_fu_23096_p1() {
    tmp_3381_fu_23096_p1 = esl_zext<32,8>(Z4_ind_V_34_fu_23086_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3382_fu_23106_p1() {
    tmp_3382_fu_23106_p1 = esl_zext<36,35>(p_Val2_4128_reg_80544.read());
}

void particlemaster_ReadCalculations::thread_tmp_3383_fu_23109_p1() {
    tmp_3383_fu_23109_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3384_fu_23101_p1() {
    tmp_3384_fu_23101_p1 = esl_zext<32,8>(p_Val2_4136_fu_23072_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3385_fu_23119_p4() {
    tmp_3385_fu_23119_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4136_reg_80539.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3387_fu_23155_p1() {
    tmp_3387_fu_23155_p1 = esl_zext<44,43>(tmp_3385_reg_80565.read());
}

void particlemaster_ReadCalculations::thread_tmp_3388_fu_23151_p1() {
    tmp_3388_fu_23151_p1 = esl_zext<32,8>(p_Val2_4143_reg_80532.read());
}

void particlemaster_ReadCalculations::thread_tmp_3390_fu_23176_p4() {
    tmp_3390_fu_23176_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4143_reg_80532.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3392_fu_23212_p5() {
    tmp_3392_fu_23212_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4143_reg_80532.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3395_fu_23268_p1() {
    tmp_3395_fu_23268_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3396_fu_23278_p3() {
    tmp_3396_fu_23278_p3 = esl_concat<59,49>(p_Val2_2413_reg_80631.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3397_fu_23312_p4() {
    tmp_3397_fu_23312_p4 = p_Val2_2415_fu_23288_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3398_fu_23322_p3() {
    tmp_3398_fu_23322_p3 = esl_concat<57,1>(tmp_3397_fu_23312_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3400_fu_22991_p2() {
    tmp_3400_fu_22991_p2 = (!tmp_3377_fu_22988_p1.read().is_01() || !p_Val2_2399_reg_80462.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_3377_fu_22988_p1.read() != p_Val2_2399_reg_80462.read());
}

void particlemaster_ReadCalculations::thread_tmp_3401_fu_11614_p1() {
    tmp_3401_fu_11614_p1 = esl_zext<32,6>(grp_fu_6241_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3402_fu_11707_p4() {
    tmp_3402_fu_11707_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, tmp_4745_reg_75646.read()), ap_const_lv17_0);
}

void particlemaster_ReadCalculations::thread_tmp_3404_fu_11716_p1() {
    tmp_3404_fu_11716_p1 = esl_zext<76,75>(sf31_fu_11698_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3405_fu_11728_p3() {
    tmp_3405_fu_11728_p3 = esl_concat<50,25>(tmp_4747_fu_11688_p1.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3406_fu_11740_p1() {
    tmp_3406_fu_11740_p1 = esl_zext<77,76>(p_Val2_2422_fu_11720_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3407_fu_11763_p1() {
    tmp_3407_fu_11763_p1 = esl_zext<78,77>(p_Val2_2423_reg_75659.read());
}

void particlemaster_ReadCalculations::thread_tmp_3408_fu_11766_p1() {
    tmp_3408_fu_11766_p1 = esl_zext<78,75>(p_Val2_2424_reg_75674.read());
}

void particlemaster_ReadCalculations::thread_tmp_3409_fu_12359_p1() {
    tmp_3409_fu_12359_p1 = esl_zext<32,4>(p_Val2_7046_reg_75653.read());
}

void particlemaster_ReadCalculations::thread_tmp_3411_fu_11812_p3() {
    tmp_3411_fu_11812_p3 = esl_concat<67,14>(tmp_3410_reg_75691.read(), ap_const_lv14_0);
}

void particlemaster_ReadCalculations::thread_tmp_3412_fu_11823_p1() {
    tmp_3412_fu_11823_p1 = esl_zext<82,81>(p_Val2_2428_fu_11805_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3413_fu_11845_p1() {
    tmp_3413_fu_11845_p1 = esl_zext<83,82>(p_Val2_2429_reg_75696.read());
}

void particlemaster_ReadCalculations::thread_tmp_3414_fu_11848_p3() {
    tmp_3414_fu_11848_p3 = esl_concat<79,1>(p_Val2_2430_reg_75711.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3415_fu_12363_p1() {
    tmp_3415_fu_12363_p1 = esl_zext<32,6>(p_Val2_7047_reg_75685.read());
}

void particlemaster_ReadCalculations::thread_tmp_3416_fu_11897_p3() {
    tmp_3416_fu_11897_p3 = esl_concat<76,25>(tmp_4838_reg_75732.read(), ap_const_lv25_0);
}

void particlemaster_ReadCalculations::thread_tmp_3417_fu_11908_p1() {
    tmp_3417_fu_11908_p1 = esl_zext<102,96>(p_Val2_2433_fu_11888_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3418_fu_11931_p1() {
    tmp_3418_fu_11931_p1 = esl_zext<103,102>(p_Val2_2434_reg_75737.read());
}

void particlemaster_ReadCalculations::thread_tmp_3419_fu_11934_p3() {
    tmp_3419_fu_11934_p3 = esl_concat<89,6>(p_Val2_2435_reg_75752.read(), ap_const_lv6_0);
}

void particlemaster_ReadCalculations::thread_tmp_3420_fu_12367_p1() {
    tmp_3420_fu_12367_p1 = esl_zext<32,6>(p_Val2_7048_reg_75726.read());
}

void particlemaster_ReadCalculations::thread_tmp_3422_fu_11988_p3() {
    tmp_3422_fu_11988_p3 = esl_concat<86,34>(tmp_3421_reg_75769.read(), ap_const_lv34_0);
}

void particlemaster_ReadCalculations::thread_tmp_3425_fu_11999_p1() {
    tmp_3425_fu_11999_p1 = esl_zext<121,110>(p_Val2_2439_fu_11981_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3426_fu_12021_p1() {
    tmp_3426_fu_12021_p1 = esl_zext<122,121>(p_Val2_2440_reg_75774.read());
}

void particlemaster_ReadCalculations::thread_tmp_3428_fu_12024_p3() {
    tmp_3428_fu_12024_p3 = esl_concat<98,11>(p_Val2_2441_reg_75789.read(), ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3429_fu_12278_p1() {
    tmp_3429_fu_12278_p1 = esl_zext<32,6>(p_Val2_7049_reg_75763.read());
}

void particlemaster_ReadCalculations::thread_tmp_3431_fu_12078_p3() {
    tmp_3431_fu_12078_p3 = esl_concat<81,44>(tmp_3430_reg_75806.read(), ap_const_lv44_0);
}

void particlemaster_ReadCalculations::thread_tmp_3432_fu_12089_p1() {
    tmp_3432_fu_12089_p1 = esl_zext<126,110>(p_Val2_2445_fu_12071_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3433_fu_12111_p1() {
    tmp_3433_fu_12111_p1 = esl_zext<127,126>(p_Val2_2446_reg_75811.read());
}

void particlemaster_ReadCalculations::thread_tmp_3434_fu_12114_p3() {
    tmp_3434_fu_12114_p3 = esl_concat<93,16>(p_Val2_2447_reg_75826.read(), ap_const_lv16_0);
}

void particlemaster_ReadCalculations::thread_tmp_3435_fu_12282_p1() {
    tmp_3435_fu_12282_p1 = esl_zext<32,6>(p_Val2_7050_reg_75800.read());
}

void particlemaster_ReadCalculations::thread_tmp_3437_fu_12168_p3() {
    tmp_3437_fu_12168_p3 = esl_concat<76,54>(tmp_3436_reg_75843.read(), ap_const_lv54_0);
}

void particlemaster_ReadCalculations::thread_tmp_3439_fu_12179_p1() {
    tmp_3439_fu_12179_p1 = esl_zext<131,110>(p_Val2_2451_fu_12161_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3441_fu_12201_p1() {
    tmp_3441_fu_12201_p1 = esl_zext<132,131>(p_Val2_2452_reg_75848.read());
}

void particlemaster_ReadCalculations::thread_tmp_3442_fu_12204_p3() {
    tmp_3442_fu_12204_p3 = esl_concat<88,21>(p_Val2_2453_reg_75863.read(), ap_const_lv21_0);
}

void particlemaster_ReadCalculations::thread_tmp_3443_fu_12286_p1() {
    tmp_3443_fu_12286_p1 = esl_zext<32,6>(p_Val2_7051_reg_75837.read());
}

void particlemaster_ReadCalculations::thread_tmp_3445_fu_12297_p3() {
    tmp_3445_fu_12297_p3 = esl_concat<71,64>(tmp_3444_reg_75880.read(), ap_const_lv64_0);
}

void particlemaster_ReadCalculations::thread_tmp_3446_fu_12308_p1() {
    tmp_3446_fu_12308_p1 = esl_zext<136,110>(p_Val2_2457_fu_12290_p3.read());
}

void particlemaster_ReadCalculations::thread_tmp_3447_fu_12318_p3() {
    tmp_3447_fu_12318_p3 = esl_concat<83,26>(p_Val2_2459_reg_75905.read(), ap_const_lv26_0);
}

void particlemaster_ReadCalculations::thread_tmp_3448_fu_12335_p1() {
    tmp_3448_fu_12335_p1 = esl_zext<32,6>(p_Val2_7052_reg_75874.read());
}

void particlemaster_ReadCalculations::thread_tmp_3452_fu_12468_p3() {
    tmp_3452_fu_12468_p3 = esl_concat<72,45>(tmp_3449_reg_75930.read(), ap_const_lv45_0);
}

void particlemaster_ReadCalculations::thread_tmp_3454_fu_12504_p3() {
    tmp_3454_fu_12504_p3 = esl_concat<90,30>(p_Val2_2418_reg_75991.read(), ap_const_lv30_0);
}

void particlemaster_ReadCalculations::thread_tmp_3457_fu_12602_p3() {
    tmp_3457_fu_12602_p3 = esl_concat<1,18>(tmp_4839_reg_76044.read(), ap_const_lv18_20000);
}

void particlemaster_ReadCalculations::thread_tmp_3459_fu_12625_p2() {
    tmp_3459_fu_12625_p2 = (!tmp_4853_fu_12622_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_4853_fu_12622_p1.read() == ap_const_lv18_0);
}

void particlemaster_ReadCalculations::thread_tmp_3460_fu_12631_p1() {
    tmp_3460_fu_12631_p1 = esl_sext<131,129>(phitmp18_reg_76029.read());
}

void particlemaster_ReadCalculations::thread_tmp_3461_fu_12683_p1() {
    tmp_3461_fu_12683_p1 = esl_sext<72,71>(p_Val2_4224_reg_76034.read());
}

void particlemaster_ReadCalculations::thread_tmp_3462_fu_12686_p1() {
    tmp_3462_fu_12686_p1 = esl_sext<72,71>(p_Val2_2471_reg_76083.read());
}

void particlemaster_ReadCalculations::thread_tmp_3463_fu_12841_p1() {
    tmp_3463_fu_12841_p1 = esl_zext<32,8>(m_diff_hi_V_35_reg_76088.read());
}

void particlemaster_ReadCalculations::thread_tmp_3464_fu_12739_p1() {
    tmp_3464_fu_12739_p1 = esl_zext<32,8>(Z4_ind_V_35_fu_12729_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3465_fu_12749_p1() {
    tmp_3465_fu_12749_p1 = esl_zext<36,35>(p_Val2_4230_reg_76105.read());
}

void particlemaster_ReadCalculations::thread_tmp_3466_fu_12752_p1() {
    tmp_3466_fu_12752_p1 = esl_zext<36,10>(grp_fu_6211_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3467_fu_12744_p1() {
    tmp_3467_fu_12744_p1 = esl_zext<32,8>(p_Val2_4248_fu_12715_p4.read());
}

void particlemaster_ReadCalculations::thread_tmp_3468_fu_12762_p4() {
    tmp_3468_fu_12762_p4 = esl_concat<17,26>(esl_concat<8,9>(p_Val2_4248_reg_76100.read(), ap_const_lv9_0), reg_6300.read());
}

void particlemaster_ReadCalculations::thread_tmp_3470_fu_12798_p1() {
    tmp_3470_fu_12798_p1 = esl_zext<44,43>(tmp_3468_reg_76126.read());
}

void particlemaster_ReadCalculations::thread_tmp_3471_fu_12794_p1() {
    tmp_3471_fu_12794_p1 = esl_zext<32,8>(p_Val2_4255_reg_76093.read());
}

void particlemaster_ReadCalculations::thread_tmp_3473_fu_12819_p4() {
    tmp_3473_fu_12819_p4 = esl_concat<9,40>(esl_concat<8,1>(p_Val2_4255_reg_76093.read(), ap_const_lv1_0), reg_6304.read());
}

void particlemaster_ReadCalculations::thread_tmp_3475_fu_12855_p5() {
    tmp_3475_fu_12855_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(p_Val2_4255_reg_76093.read(), ap_const_lv1_0), reg_6304.read()), ap_const_lv2_0);
}

void particlemaster_ReadCalculations::thread_tmp_3478_fu_12911_p1() {
    tmp_3478_fu_12911_p1 = esl_zext<59,58>(reg_6308.read());
}

void particlemaster_ReadCalculations::thread_tmp_3479_fu_12921_p3() {
    tmp_3479_fu_12921_p3 = esl_concat<59,49>(p_Val2_2480_reg_76192.read(), ap_const_lv49_0);
}

void particlemaster_ReadCalculations::thread_tmp_3480_fu_12955_p4() {
    tmp_3480_fu_12955_p4 = p_Val2_2482_fu_12931_p2.read().range(105, 49);
}

void particlemaster_ReadCalculations::thread_tmp_3481_fu_12965_p3() {
    tmp_3481_fu_12965_p3 = esl_concat<57,1>(tmp_3480_fu_12955_p4.read(), ap_const_lv1_0);
}

void particlemaster_ReadCalculations::thread_tmp_3482_fu_12634_p2() {
    tmp_3482_fu_12634_p2 = (!tmp_3460_fu_12631_p1.read().is_01() || !p_Val2_2466_reg_76023.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_3460_fu_12631_p1.read() != p_Val2_2466_reg_76023.read());
}

void particlemaster_ReadCalculations::thread_tmp_3483_fu_23370_p2() {
    tmp_3483_fu_23370_p2 = (!p_0415_0_i34_reg_80646.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i34_reg_80646.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3484_fu_13013_p2() {
    tmp_3484_fu_13013_p2 = (!p_0415_0_i35_reg_76207.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(p_0415_0_i35_reg_76207.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void particlemaster_ReadCalculations::thread_tmp_3486_fu_24166_p2() {
    tmp_3486_fu_24166_p2 = (!b_exp_83_fu_24160_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_83_fu_24160_p2.read() == ap_const_lv12_0);
}

void particlemaster_ReadCalculations::thread_tmp_3487_fu_23483_p2() {
    tmp_3487_fu_23483_p2 = (!loc_V_72_reg_80700.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_72_reg_80700.read() == ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3488_fu_24177_p2() {
    tmp_3488_fu_24177_p2 = (!loc_V_71_reg_80693.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_71_reg_80693.read() == ap_const_lv11_7FF);
}

void particlemaster_ReadCalculations::thread_tmp_3489_fu_23488_p2() {
    tmp_3489_fu_23488_p2 = (!loc_V_72_reg_80700.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_72_reg_80700.read() != ap_const_lv52_0);
}

void particlemaster_ReadCalculations::thread_tmp_3490_fu_24862_p2() {
    tmp_3490_fu_24862_p2 = (tmp_3488_reg_81027.read() & tmp_3489_reg_80740.read());
}

void particlemaster_ReadCalculations::thread_tmp_3491_fu_24182_p2() {
    tmp_3491_fu_24182_p2 = (!loc_V_71_reg_80693.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_71_reg_80693.read() == ap_const_lv11_0);
}

void particlemaster_ReadCalculations::thread_tmp_3492_fu_24866_p2() {
    tmp_3492_fu_24866_p2 = (tmp_3488_reg_81027.read() & tmp_3487_reg_80734.read());
}

void particlemaster_ReadCalculations::thread_tmp_3493_fu_24870_p3() {
    tmp_3493_fu_24870_p3 = esl_concat<31,1>(ap_const_lv31_0, tmp_3490_fu_24862_p2.read());
}

void particlemaster_ReadCalculations::thread_tmp_3494_fu_24878_p2() {
    tmp_3494_fu_24878_p2 = (!tmp_3493_fu_24870_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_3493_fu_24870_p3.read() == ap_const_lv32_0);
}

}

