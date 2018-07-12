#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

extern "C"
{
	#include "ffmpeg/libavcodec/avcodec.h"
	#include "ffmpeg/libavformat/avformat.h"
	#include "ffmpeg/libswscale/swscale.h"
	#include "ffmpeg/libavutil/imgutils.h"

};

#define PIC_SUM  1024

#define FFMPEG_LIB(libname) "../../02lib/third_lib/ffmpeg/"libname


void Common_init();
void Common_uninit();
void Print_ffmpeg_ConfigInfo();

#define SAFE_DELETE(var) \
	if (var)\
	{\
	delete var;\
	var = NULL;\
}


#endif