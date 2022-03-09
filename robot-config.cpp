#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftDriveSmart = motor(PORT1, ratio36_1, false);
motor RightDriveSmart = motor(PORT8, ratio36_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 381, 304.79999999999995, mm, 1);
motor MotorGroup2MotorA = motor(PORT2, ratio36_1, true);
motor MotorGroup2MotorB = motor(PORT6, ratio36_1, false);
motor_group MotorGroup2 = motor_group(MotorGroup2MotorA, MotorGroup2MotorB);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
