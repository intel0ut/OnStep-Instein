// TMC_SPI stepper driver validate

#if AXIS1_DRIVER_MODEL == TMC_SPI
  #if AXIS1_DRIVER_MICROSTEPS != 1 && AXIS1_DRIVER_MICROSTEPS != 2 && AXIS1_DRIVER_MICROSTEPS != 4 && AXIS1_DRIVER_MICROSTEPS != 8 && AXIS1_DRIVER_MICROSTEPS != 16 && AXIS1_DRIVER_MICROSTEPS != 32 && AXIS1_DRIVER_MICROSTEPS != 64 && AXIS1_DRIVER_MICROSTEPS != 128 && AXIS1_DRIVER_MICROSTEPS != 256
    #error "Configuration (Config.xxx.h): AXIS1_DRIVER_MICROSTEPS; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
  #endif
  #if AXIS2_DRIVER_MODEL != TMC_SPI
    #error "Configuration (Config.xxx.h): TMC SPI stepper drivers must be used in pairs (both Axis1 and Axis2.)"
  #endif
  #if AXIS1_DRIVER_MICROSTEPS_GOTO != OFF
    #if AXIS1_DRIVER_MICROSTEPS_GOTO != 1 && AXIS1_DRIVER_MICROSTEPS_GOTO != 2 && AXIS1_DRIVER_MICROSTEPS_GOTO != 4 && AXIS1_DRIVER_MICROSTEPS_GOTO != 8 && AXIS1_DRIVER_MICROSTEPS_GOTO != 16 && AXIS1_DRIVER_MICROSTEPS_GOTO != 32 && AXIS1_DRIVER_MICROSTEPS_GOTO != 64 && AXIS1_DRIVER_MICROSTEPS_GOTO != 128 && AXIS1_DRIVER_MICROSTEPS_GOTO != 256
      #error "Configuration (Config.xxx.h): AXIS1_DRIVER_MICROSTEPS_GOTO; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
    #endif
    #if AXIS1_DRIVER_MICROSTEPS != AXIS1_DRIVER_MICROSTEPS_GOTO
      #warning "Configuration (Config.xxx.h): AXIS1_DRIVER_MICROSTEPS_GOTO; is not OFF.  This can effect pointing accuracy and PEC if index sensing isn't used."
    #endif
  #endif
  #if STEP_WAVE_FORM == PULSE && HAL_PULSE_WIDTH < TMC_SPI_PULSE_WIDTH
    #error "Configuration (Config.xxx.h): STEP_WAVE_FORM PULSE; Pulse width is below the TMC SPI stepper driver specifications."
  #endif
  #ifndef AXIS1_DRIVER_FS_VHIGH
    #define AXIS1_DRIVER_FS_VHIGH OFF
  #endif
  #ifndef AXIS1_DRIVER_PWM_VHIGH
    #define AXIS1_DRIVER_PWM_VHIGH OFF
  #endif
#endif

#if AXIS2_DRIVER_MODEL == TMC_SPI
  #if AXIS2_DRIVER_MICROSTEPS != 1 && AXIS2_DRIVER_MICROSTEPS != 2 && AXIS2_DRIVER_MICROSTEPS != 4 && AXIS2_DRIVER_MICROSTEPS != 8 && AXIS2_DRIVER_MICROSTEPS != 16 && AXIS2_DRIVER_MICROSTEPS != 32 && AXIS2_DRIVER_MICROSTEPS != 64 && AXIS2_DRIVER_MICROSTEPS != 128 && AXIS2_DRIVER_MICROSTEPS != 256
    #error "Configuration (Config.xxx.h): AXIS2_DRIVER_MICROSTEPS; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
  #endif
  #if AXIS1_DRIVER_MODEL != TMC_SPI
    #error "Configuration (Config.xxx.h): TMC SPI stepper drivers must be used in pairs (both Axis1 and Axis2.)"
  #endif
  #if AXIS2_DRIVER_MICROSTEPS_GOTO != OFF
    #if AXIS2_DRIVER_MICROSTEPS_GOTO != 1 && AXIS2_DRIVER_MICROSTEPS_GOTO != 2 && AXIS2_DRIVER_MICROSTEPS_GOTO != 4 && AXIS2_DRIVER_MICROSTEPS_GOTO != 8 && AXIS2_DRIVER_MICROSTEPS_GOTO != 16 && AXIS2_DRIVER_MICROSTEPS_GOTO != 32 && AXIS2_DRIVER_MICROSTEPS_GOTO != 64 && AXIS2_DRIVER_MICROSTEPS_GOTO != 128 && AXIS2_DRIVER_MICROSTEPS_GOTO != 256
      #error "Configuration (Config.xxx.h): AXIS2_DRIVER_MICROSTEPS_GOTO; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
    #endif
    #if AXIS2_DRIVER_MICROSTEPS != AXIS2_DRIVER_MICROSTEPS_GOTO
      #warning "Configuration (Config.xxx.h): AXIS2_DRIVER_MICROSTEPS_GOTO; is not OFF.  This can effect pointing accuracy."
    #endif
  #endif
  #if STEP_WAVE_FORM == PULSE && HAL_PULSE_WIDTH < TMC_SPI_PULSE_WIDTH
    #error "Configuration (Config.xxx.h): STEP_WAVE_FORM PULSE; Pulse width is below the TMC SPI stepper driver specifications."
  #endif
  #ifndef AXIS2_DRIVER_FS_VHIGH
    #define AXIS2_DRIVER_FS_VHIGH OFF
  #endif
  #ifndef AXIS2_DRIVER_PWM_VHIGH
    #define AXIS2_DRIVER_PWM_VHIGH OFF
  #endif
#endif

#if ROTATOR == ON && AXIS3_DRIVER_MODEL == TMC_SPI
  #if AXIS3_DRIVER_MICROSTEPS != 1 && AXIS3_DRIVER_MICROSTEPS != 2 && AXIS3_DRIVER_MICROSTEPS != 4 && AXIS3_DRIVER_MICROSTEPS != 8 && AXIS3_DRIVER_MICROSTEPS != 16 && AXIS3_DRIVER_MICROSTEPS != 32 && AXIS3_DRIVER_MICROSTEPS != 64 && AXIS3_DRIVER_MICROSTEPS != 128 && AXIS3_DRIVER_MICROSTEPS != 256
    #error "Configuration (Config.xxx.h): AXIS3_DRIVER_MICROSTEPS; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
  #endif
#endif

#if FOCUSER1 == ON && AXIS4_DRIVER_MODEL == TMC_SPI
  #if AXIS4_DRIVER_MICROSTEPS != 1 && AXIS4_DRIVER_MICROSTEPS != 2 && AXIS4_DRIVER_MICROSTEPS != 4 && AXIS4_DRIVER_MICROSTEPS != 8 && AXIS4_DRIVER_MICROSTEPS != 16 && AXIS4_DRIVER_MICROSTEPS != 32 && AXIS4_DRIVER_MICROSTEPS != 64 && AXIS4_DRIVER_MICROSTEPS != 128 && AXIS4_DRIVER_MICROSTEPS != 256
    #error "Configuration (Config.xxx.h): AXIS4_DRIVER_MICROSTEPS; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
  #endif
#endif

#if FOCUSER2 == ON && AXIS5_DRIVER_MODEL == TMC_SPI
  #if AXIS5_DRIVER_MICROSTEPS != 1 && AXIS5_DRIVER_MICROSTEPS != 2 && AXIS5_DRIVER_MICROSTEPS != 4 && AXIS5_DRIVER_MICROSTEPS != 8 && AXIS5_DRIVER_MICROSTEPS != 16 && AXIS5_DRIVER_MICROSTEPS != 32 && AXIS5_DRIVER_MICROSTEPS != 64 && AXIS5_DRIVER_MICROSTEPS != 128 && AXIS5_DRIVER_MICROSTEPS != 256
    #error "Configuration (Config.xxx.h): AXIS5_DRIVER_MICROSTEPS; TMC SPI driver invalid micro-step mode, use: 256,128,64,32,16,8,4,2,or 1"
  #endif
#endif
