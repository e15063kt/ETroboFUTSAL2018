/*
 * pid.h
 *
 *      Author: T. shikama
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef PIDCONTROL_H_
#define PIDCONTROL_H_

#define DELTA_T 0.005		/* 周期10ms(既定値) 0.01	-> 5ms 0.005*/

class Pid {
	float p;
	float i;
	float d;
	float delta_t;
	float diff[2];
	float integral;
public:
	float kp;
	float ki;
	float kd;
	Pid(void);
	float input(int);
	void set_params(float p, float i, float d);
	void reset();
};

#endif /* PIDCONTROL_H_ */

#ifdef __cplusplus
}
#endif
