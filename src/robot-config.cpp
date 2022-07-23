#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftFront = motor(PORT1, ratio6_1, true);
motor LeftBack = motor(PORT2, ratio6_1, true);
motor RightFront = motor(PORT6, ratio6_1, false);
motor RightBack = motor(PORT7, ratio6_1, false);
motor Indexer = motor(PORT5, ratio36_1, false);
motor Intake = motor(PORT16, ratio6_1, false);
motor Flywheel = motor(PORT9, ratio6_1, false);
motor Flywheel2 = motor(PORT10, ratio6_1, true);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}