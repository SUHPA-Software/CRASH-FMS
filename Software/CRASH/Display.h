#pragma once

#include <stdint.h>

#define DISPLAY_XY_PLOT_BUFFER_SIZE 32

class Display
{
public:
	static void Init ();
	static void Update (int vertVal, int horizVal, int horizMinVal, int horizMaxVal, int vertMinVal, int vertMaxVal, int horizTrim, int vertTrim, float batPercent, float ping, float packetLoss, bool sdConencted);

private:
	static int xyPlotPositionX[DISPLAY_XY_PLOT_BUFFER_SIZE];
	static int xyPlotPositionY[DISPLAY_XY_PLOT_BUFFER_SIZE];
	static int stickPositionBufferHead;
	static uint32_t mergeTailTime;

	static int lastVertVal;
	static int lastHorizVal;
	static uint32_t lastUpdateMillis;
	static const uint32_t displayTurnOffTime = 30000;
	static const int maxValueDelta = 10;
};