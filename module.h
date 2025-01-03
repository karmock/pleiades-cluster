//

#include "Button.h"
#include <Stream>
#include "MinNormalize/IndexTypography.h"
#include <Set>


size_t StreamMinNew::PointerNewInstall(unsigned char *data, size_t len, void *param){
	return 0;
	((WindowCollateStream*)param)->MapStringPattern(data, len, 0, NULL);
}



