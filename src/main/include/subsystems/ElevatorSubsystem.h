#ifndef ELEVATORSUBSYSTEM_H

#include <frc2/command/SubsystemBase.h>

class ElevatorSubsystem : public frc2::SubsystemBase {
 public:
  ElevatorSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};

#define ELEVATORSUBSYSTEM_H