﻿//     Copyright (c) 2013 js200300953@qq.com All rights reserved.
//         ========圆点博士微型四轴飞行器配套程序声明========
// 
// 圆点博士微型四轴飞行器配套程序包括上位机程序、下位机Bootloader和
//     下位机App，及它们的源代码，以下总称“程序”。
// 程序由js200300953编写。
// 程序仅为使用者提供参考，js200300953不对程序提供任何明示或暗含的担保，
//     不对在使用该程序中出现的意外或者损失负责，
//     也不对因使用该程序而引起的第三方索赔负责。
// 使用者可以以学习为目的修改和使用该程序，请勿以商业的目的使用该程序。
// 修改该程序时，必须保留原版权声明，并且不能修改原版权声明。
// 
// 更多资料见：
//     http://blog.sina.com.cn/js200300953
//     http://www.etootle.com/
//     http://www.amobbs.com/thread-5504090-1-1.html
//     圆点博士微型四轴飞行器QQ群：276721324

// app/control/interface.h
// 2013-1-8 16:29:51
// js200300953

#ifndef __FILE_APP_CONTROL_INTERFACE_H__
#define __FILE_APP_CONTROL_INTERFACE_H__

#include "app/math/interface.h"
#include "pid.h"

void    ctrl_init(void);
void    ctrl_checkEvent(void);
void    ctrl_enterHaltMode(void);
void    ctrl_enterLockAttitudeMode(void);
int32_t ctrl_lockAttitude_getReady(void);
int32_t ctrl_lockAttitude_control(const quaternion * delta);
int32_t ctrl_lockAttitude_setTarget(const quaternion * target);
int32_t ctrl_lockAttitude_setBaseThrottle(float baseThrottle);
void ctrl_enterLockThrottleMode(void);
void ctrl_lockThrottle_setThrottle(const float th[4]);
const float * ctrl_getCurrentThrottle(void);

#endif // __FILE_APP_CONTROL_INTERFACE_H__
