#ifndef MOTIONSUBSYSTEM_H
#define MOTIONSUBSYSTEM_H

#include "frc2/command/SubsystemBase.h"

class MotionSubsystem : public frc2::SubsystemBase {
	public:
		MotionSubsystem();

		/**
		 * Will be called periodically whenever the CommandScheduler runs.
		 */
		void Periodic() override;

	private:
		// Components (e.g. motor controllers and sensors) should generally be
		// declared private and exposed only through public methods.
};

#endif