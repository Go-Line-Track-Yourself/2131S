#pragma once

namespace flipper{
  //vars
  enum class Controllers{MANUAL,POSITION,CALABRATE,NONE};

  //postition
  // extern const double punFront1;//back first
  // extern const double punFront2;//back second
  // extern const double punBack1;//back first
  // extern const double punBack2;//back second

  extern const double up;
  extern const double limitMin;
  extern const double limitMax;

  //velocity
  extern const int vMove;
  extern const int vStop;
  extern const int vUp;
  extern const int vDown;
  extern const int vPos;
  // extern const int vScoop;
  extern const int vCal;

  //vars FUNCTIONS
  // double get_target();
  void set_target(double t);
  void set_target(double t,bool p);
  void set_target(double t,int v,bool p);
  bool get_calabrated();
  //methods
  void execute();
  // namespace feedback{
  //   /*
  //   * rumbles master_controller
  //   * when a cap is first inserted
  //   */
  //   // void rumble();
  // }
  namespace control{
    namespace flag{
      void manual();
    } // namespace flag
    namespace caps{
      void manual();
    } // namespace caps
    void position();
    void calabrate();
  }
  inline namespace auton{
    void wait(int w=0);
  }
}
