/*
 *  engine.h
 *
 *  Created on: Jun 26, 2013
 *      Author: Denis aka caat
 */

#ifndef ENGiNE_H_
#define ENGINE_H_

#define PITCH_UP_LIMIT (-50 * D2R)
#define PITCH_DOWN_LIMIT (90 * D2R)

#define CORRECTION_STEP 1.0F
#define LAKITU_CT_VALUE 90.0F
#define LAKITU_CT_VALUE_YAW 180.0F
#define EULAR 3

extern int debugPrint;
extern int debugPerf;
extern int debugSense;
extern int debugCnt;
extern int debugRC;
extern int debugOrient;
extern int debugAutoPan;
extern int debugLAKITU;
extern int LAKITU_enable;
extern float LakituAngles[EULAR];

void Init_Orientation(void);
void engineProcess(float dt);
void Get_Orientation(float *AccAngleSmooth, float *Orient, float *AccData, float *GyroData, float dt);
#endif /* ENGINE_H_ */




