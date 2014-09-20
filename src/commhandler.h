/*
 *  commhandler.h
 *
 *  Created on: Aug 18, 2013
 *      Author: ala42
 *
 *  extracted code from main.c
 */

#ifndef COMMHANDLER_H_
#define COMMHANDLER_H_

#define LAKITU_DEBUG_OFF 1
#define LAKITU_LENGTH 10
#define ASCII2INT 48
#define LAKITU_CT_VALUE 90.0F
#define LAKITU_CT_VALUE_YAW 180.0F

extern int ConfigMode;


void CommHandler(void);

#endif /* COMMHANDLER_H_ */
