/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\99733612                                         */
/*    Created:      Thu Mar 03 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 8            
// MotorGroup2          motor_group   2, 6            
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  //copious amount of time outs to be safe :)
  //moving out of tile
  MotorGroup2.setStopping(hold);
  Drivetrain.setTurnVelocity(40,percent);
  //previous two lines are crucial to holding and moving
  Drivetrain.driveFor(forward, 10, inches);
  Drivetrain.setTimeout(5,seconds);
  //turning and moving towards goal
  Drivetrain.turnFor(right, 250, degrees);
  Drivetrain.setTimeout(5,seconds);
  Drivetrain.driveFor(forward, 20, inches);
  Drivetrain.setTimeout(5,seconds);
  //add lift robot arm command
  MotorGroup2.spinFor(forward, 240, degrees);
  Drivetrain.setTimeout(5,seconds);
  Drivetrain.driveFor(reverse, 5, inches);
  Drivetrain.setTimeout(10,seconds);
  Drivetrain.turnFor(left, 265, degrees);
  wait(1, seconds);
  Drivetrain.driveFor(forward, 64, inches);
  Drivetrain.setTimeout(10, seconds);
  //add lower robot arm command
  MotorGroup2.spinFor(reverse, 210, degrees);
  Drivetrain.setTimeout(5, seconds);
  Drivetrain.driveFor(reverse, 10, inches);
}
