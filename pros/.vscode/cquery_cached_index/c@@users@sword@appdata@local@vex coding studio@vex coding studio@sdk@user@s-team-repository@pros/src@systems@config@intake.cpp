#include "systems/intake.hpp"
#include "systems/config/motors.hpp"
#include "systems/config/controller.hpp"
namespace Intake{

  void manualintake()     {

    if (BtnIn.isPressed()) {
      motor.move_velocity(600);
    }
    else if (BtnOut.isPressed()) {
      motor.move_velocity(-600);

    }
    else{
      motor.move_velocity(0);
    }

  }
}
