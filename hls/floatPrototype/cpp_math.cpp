#include "cpp_math.h"
data_t cpp_math(data_t angle) {
	 data_t s = sinf(angle);
	 data_t c = cosf(angle);
	 return sqrtf(s*s+c*c);
}
