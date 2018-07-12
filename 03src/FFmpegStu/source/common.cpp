#include "common.h"


#pragma comment(lib,FFMPEG_LIB("avcodec.lib"))
#pragma comment(lib,FFMPEG_LIB("avdevice.lib"))
#pragma comment(lib,FFMPEG_LIB("avfilter.lib"))
#pragma comment(lib,FFMPEG_LIB("avformat.lib"))
#pragma comment(lib,FFMPEG_LIB("avutil.lib"))
#pragma comment(lib,FFMPEG_LIB("postproc.lib"))
#pragma comment(lib,FFMPEG_LIB("swresample.lib"))
#pragma comment(lib,FFMPEG_LIB("swscale.lib"))

void Print_ffmpeg_ConfigInfo()
{
	printf("%s\n",avcodec_configuration());
}