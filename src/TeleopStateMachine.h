/*
 * TeleopStateMachine.h
 *
 *  Created on: May 17, 2017
 *      Author: gracekwak
 */
#include <WPILib.h> //
#include <Tank.h>
#include <Barrel.h>
#include <Firing.h>
#include <Timer.h>
#ifndef TELEOPSTATEMACHINE_H_
#define TELEOPSTATEMACHINE_H_

class TeleopStateMachine {
public:

	Barrel * barrel_;
	Tank * tank_;
	Firing * firing_;

	TeleopStateMachine(Barrel *barrelP, Tank *tankP, Firing *firingP);
	void StateMachine(bool shoot, bool up);
	void Initialize();

};

#endif
