//messages.h

// Common serial messages
#define MSG_MARLIN "Marlin"

#if defined(__cplusplus)
extern "C" {
#endif //defined(__cplusplus)

#define WELCOME_MSG (CUSTOM_MENDEL_NAME " OK.")

// LCD Menu Messages
//internationalized messages
extern const char MSG_ALWAYS[];
extern const char MSG_AUTO_HOME[];
extern const char MSG_BABYSTEP_Z[];
extern const char MSG_BABYSTEP_Z_NOT_SET[];
extern const char MSG_BED[];
extern const char MSG_BED_DONE[];
extern const char MSG_BED_HEATING[];
extern const char MSG_BED_LEVELING_FAILED_POINT_LOW[];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED[];
extern const char MSG_BELT_STATUS[];
extern const char MSG_EJECT[];
extern const char MSG_CANCEL[];
extern const char MSG_CALIBRATE_Z_AUTO[];
extern const char MSG_CARD_MENU[];
extern const char MSG_CHECKING_X[];
extern const char MSG_CHECKING_Y[];
extern const char MSG_COMMUNITY_MADE[];
extern const char MSG_CONFIRM_NOZZLE_CLEAN[];
extern const char MSG_COOLDOWN[];
extern const char MSG_CRASH[];
extern const char MSG_CRASH_DETECTED[];
extern const char MSG_CRASHDETECT[];
extern const char MSG_DONE[];
extern const char MSG_ERROR[];
extern const char MSG_EXTRUDER[];
extern const char MSG_FANS_CHECK[];
extern const char MSG_FIL_RUNOUTS[];
extern const char MSG_FILAMENT[];
extern const char MSG_FAN_SPEED[];
extern const char MSG_HOTEND_FAN_SPEED[];
extern const char MSG_PRINT_FAN_SPEED[];
extern const char MSG_FILAMENT_CLEAN[];
extern const char MSG_FILAMENT_LOADED[];
extern const char MSG_FILAMENTCHANGE[];
extern const char MSG_FIND_BED_OFFSET_AND_SKEW_LINE1[];
extern const char MSG_FINISHING_MOVEMENTS[];
extern const char MSG_FOLLOW_CALIBRATION_FLOW[];
extern const char MSG_FOLLOW_Z_CALIBRATION_FLOW[];
extern const char MSG_FSENSOR_RUNOUT[];
extern const char MSG_FSENSOR_AUTOLOAD[];
extern const char MSG_FSENSOR_JAM_DETECTION[];
extern const char MSG_FSENSOR[];
extern const char MSG_HEATING[];
extern const char MSG_HEATING_COMPLETE[];
extern const char MSG_HOMEYZ[];
extern const char MSG_ITERATION[];
extern const char MSG_SELECT_FILAMENT[];
extern const char MSG_LAST_PRINT[];
extern const char MSG_LAST_PRINT_FAILURES[];
extern const char MSG_PRELOAD_TO_MMU[];
extern const char MSG_LOAD_FILAMENT[];
extern const char MSG_LOADING_TEST[];
extern const char MSG_LOADING_FILAMENT[];
extern const char MSG_TESTING_FILAMENT[];
extern const char MSG_M117_V2_CALIBRATION[];
extern const char MSG_MAIN[];
extern const char MSG_BACK[];
extern const char MSG_SHEET[];
extern const char MSG_STEEL_SHEETS[];
extern const char MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1[];
extern const char MSG_CALIBRATION[];
extern const char MSG_MMU_FAILS[];
extern const char MSG_MMU_LOAD_FAILS[];
extern const char MSG_MMU_POWER_FAILS[];
extern const char MSG_NO[];
extern const char MSG_NOZZLE[];
extern const char MSG_PAPER[];
extern const char MSG_PAUSE_PRINT[];
extern const char MSG_PRINT_PAUSED[];
extern const char MSG_PLACE_STEEL_SHEET[];
extern const char MSG_PLEASE_WAIT[];
extern const char MSG_POWER_FAILURES[];
extern const char MSG_PREHEAT_NOZZLE[];
extern const char MSG_PRESS_TO_UNLOAD[];
extern const char MSG_PRINT_ABORTED[];
extern const char MSG_PULL_OUT_FILAMENT[];
extern const char MSG_RECOVER_PRINT[];
extern const char MSG_REFRESH[];
extern const char MSG_REMOVE_STEEL_SHEET[];
extern const char MSG_RESET[];
extern const char MSG_RESUME_PRINT[];
extern const char MSG_RESUMING_PRINT[];
extern const char MSG_SELFTEST_PART_FAN[];
extern const char MSG_SELFTEST_HOTEND_FAN[];
extern const char MSG_SELFTEST_FAILED[];
extern const char MSG_SELFTEST_FAN[];
extern const char MSG_SELFTEST_FAN_NO[];
extern const char MSG_SELFTEST_FAN_YES[];
extern const char MSG_SELFTEST_CHECK_BED[];
extern const char MSG_SELFTEST_CHECK_FSENSOR[];
extern const char MSG_SELFTEST_MOTOR[];
extern const char MSG_SELFTEST_FILAMENT_SENSOR[];
extern const char MSG_SELFTEST_WIRINGERROR[];
extern const char MSG_SETTINGS[];
#ifndef REPLACE_SETREADY
extern const char MSG_SET_READY[];
extern const char MSG_SET_NOT_READY[];
#else
extern const char MSG_HOSTPRINT[];
#endif
#ifdef HOST_SHUTDOWN
extern const char MSG_SHUTDOWN_HOST[];
#endif //HOST_SHUTOWN
extern const char MSG_SELECT_LANGUAGE[];
extern const char MSG_SORTING_FILES[];
extern const char MSG_TOTAL[];
extern const char MSG_MATERIAL_CHANGES[];
extern const char MSG_TOTAL_FAILURES[];
extern const char MSG_HW_SETUP[];
extern const char MSG_TUNE[];
extern const char MSG_MODE[];
extern const char MSG_HIGH_POWER[];
extern const char MSG_AUTO_POWER[];
extern const char MSG_SILENT[];
extern const char MSG_NORMAL[];
extern const char MSG_STEALTH[];
extern const char MSG_STEEL_SHEET_CHECK[];
extern const char MSG_STOP_PRINT[];
extern const char MSG_STOPPED[];
extern const char MSG_PINDA_CALIBRATION[];
extern const char MSG_PINDA_CALIBRATION_DONE[];
extern const char MSG_UNLOAD_FILAMENT[];
extern const char MSG_UNLOADING_FILAMENT[];
extern const char MSG_INFO_SCREEN[];
extern const char MSG_WIZARD_CALIBRATION_FAILED[];
extern const char MSG_WIZARD_DONE[];
extern const char MSG_WIZARD_HEATING[];
extern const char MSG_WIZARD_QUIT[];
extern const char MSG_WIZARD_WELCOME[];
extern const char MSG_WIZARD_WELCOME_SHIPPING[];
extern const char MSG_YES[];
extern const char MSG_V2_CALIBRATION[];
extern const char MSG_OFF[];
extern const char MSG_ON[];
extern const char MSG_NA[];
extern const char MSG_CUTTER[];
extern const char MSG_NONE[];
extern const char MSG_WARN[];
extern const char MSG_STRICT[];
extern const char MSG_MODEL[];
extern const char MSG_GCODE_DIFF_PRINTER_CONTINUE[];
extern const char MSG_GCODE_DIFF_PRINTER_CANCELLED[];
extern const char MSG_GCODE_NEWER_FIRMWARE_CONTINUE[];
extern const char MSG_GCODE_NEWER_FIRMWARE_CANCELLED[];
extern const char MSG_GCODE_DIFF_CONTINUE[];
extern const char MSG_GCODE_DIFF_CANCELLED[];
extern const char MSG_NOZZLE_DIFFERS_CONTINUE[];
extern const char MSG_NOZZLE_DIFFERS_CANCELLED[];
extern const char MSG_NOZZLE_DIAMETER[];
extern const char MSG_MMU_MODE[];
extern const char MSG_SD_CARD[];
extern const char MSG_SORT[];
extern const char MSG_SORT_TIME[];
extern const char MSG_SORT_ALPHA[];
extern const char MSG_RPI_PORT[];
extern const char MSG_SOUND[];
extern const char MSG_SOUND_LOUD[];
extern const char MSG_SOUND_ONCE[];
extern const char MSG_SOUND_BLIND[];
extern const char MSG_MESH[];
extern const char MSG_MESH_BED_LEVELING[];
extern const char MSG_Z_PROBE_NR[];
extern const char MSG_MAGNETS_COMP[];
extern const char MSG_FS_ACTION[];
extern const char MSG_CONTINUE_SHORT[];
extern const char MSG_PAUSE[];
extern const char MSG_BRIGHTNESS[];
extern const char MSG_BL_HIGH[];
extern const char MSG_BL_LOW[];
extern const char MSG_TIMEOUT[];
extern const char MSG_BRIGHT[];
extern const char MSG_DIM[];
extern const char MSG_AUTO[];
#if (FILAMENT_SENSOR_TYPE == FSENSOR_IR_ANALOG)
extern const char MSG_IR_04_OR_NEWER[];
extern const char MSG_IR_03_OR_OLDER[];
extern const char MSG_IR_UNKNOWN[];
#endif
extern const char MSG_PAUSED_THERMAL_ERROR[];
#ifdef THERMAL_MODEL
extern const char MSG_THERMAL_ANOMALY[];
extern const char MSG_TM_NOT_CAL[];
extern const char MSG_TM_ACK_ERROR[];
#endif
extern const char MSG_LOAD_ALL[];
extern const char MSG_NOZZLE_CNG_MENU [];
extern const char MSG_NOZZLE_CNG_READ_HELP [];
extern const char MSG_NOZZLE_CNG_CHANGED [];
#ifdef QUICK_NOZZLE_CHANGE
extern const char MSG_NOZZLE_CNG_COOLDOWN [];
#endif //QUICK_NOZZLE_CHANGE
extern const char MSG_REPRINT [];
extern const char MSG_FILE_CNT [];
extern const char MSG_CHANGED_MOTHERBOARD [];
extern const char MSG_CHANGED_PRINTER [];
extern const char MSG_CHANGED_BOTH [];
extern const char MSG_DEFAULT_SETTINGS_LOADED [];
extern const char MSG_FORCE_SELFTEST [];
extern const char MSG_MBL_FAILED_Z_CAL [];
extern const char MSG_ZLEVELING_ENFORCED [];
extern const char MSG_UNLOAD_SUCCESSFUL [];
extern const char MSG_CHECK_IDLER [];
extern const char MSG_RUN_XYZ [];
extern const char MSG_TEMP_CAL_WARNING [];
extern const char MSG_USERWAIT [];
extern const char MSG_NO_MOVE [];
extern const char MSG_BED_HEATING_SAFETY_DISABLED [];
extern const char MSG_PRESS_TO_PREHEAT [];
extern const char MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1 [];
extern const char MSG_MMU_RESTORE_TEMP [];
extern const char MSG_MMU_SENSITIVITY [];
extern const char MSG_RECOVERING_PRINT [];
extern const char MSG_HOMEYZ_DONE [];
extern const char MSG_PINDA_PREHEAT [];
extern const char MSG_PID_RUNNING [];
extern const char MSG_PID_FINISHED [];
extern const char MSG_AMBIENT [];
extern const char MSG_DATE [];
extern const char MSG_MMU_CONNECTED [];
extern const char MSG_UNKNOWN [];
extern const char MSG_PRINTER_IP [];
extern const char MSG_XYZ_DETAILS [];
extern const char MSG_INFO_EXTRUDER [];
extern const char MSG_INFO_SENSORS [];
extern const char MSG_MENU_TEMPERATURES [];
extern const char MSG_MENU_VOLTAGES [];
extern const char MSG_PRESS_KNOB [];
extern const char MSG_TO_LOAD_FIL [];
extern const char MSG_TO_UNLOAD_FIL [];
extern const char MSG_PREHEATING_TO_LOAD [];
extern const char MSG_PREHEATING_TO_UNLOAD [];
extern const char MSG_PREHEATING_TO_EJECT [];
extern const char MSG_PREHEATING_TO_CUT [];
extern const char MSG_INSERT_FILAMENT [];
extern const char MSG_PRESS [];
extern const char MSG_CHANGE_SUCCESS [];
extern const char MSG_LOADING_COLOR [];
extern const char MSG_CORRECTLY [];
extern const char MSG_NOT_LOADED [];
extern const char MSG_NOT_COLOR [];
extern const char MSG_AUTOLOADING_ENABLED [];
extern const char MSG_FILAMENT_USED [];
extern const char MSG_PRINT_TIME [];
extern const char MSG_TOTAL_FILAMENT [];
extern const char MSG_TOTAL_PRINT_TIME [];
extern const char MSG_Y_DIST_FROM_MIN [];
extern const char MSG_LEFT [];
extern const char MSG_RIGHT [];
extern const char MSG_MEASURED_SKEW [];
extern const char MSG_SLIGHT_SKEW [];
extern const char MSG_SEVERE_SKEW [];
extern const char MSG_MEASURED_OFFSET [];
extern const char MSG_BABYSTEPPING_Z [];
extern const char MSG_BED_CORRECTION_LEFT [];
extern const char MSG_BED_CORRECTION_RIGHT [];
extern const char MSG_BED_CORRECTION_FRONT [];
extern const char MSG_BED_CORRECTION_REAR [];
extern const char MSG_SET_TEMPERATURE [];
extern const char MSG_WAITING_TEMP_PINDA [];
extern const char MSG_WAITING_TEMP [];
extern const char MSG_MOVE_CARRIAGE_TO_THE_TOP_Z [];
extern const char MSG_MOVE_CARRIAGE_TO_THE_TOP [];
extern const char MSG_CONFIRM_CARRIAGE_AT_THE_TOP [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_PERFECT [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD [];
extern const char MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME [];
extern const char MSG_PINDA_CAL_FAILED [];
extern const char MSG_MOVE_X [];
extern const char MSG_MOVE_Y [];
extern const char MSG_MOVE_Z [];
extern const char MSG_CRASH_DET_ONLY_IN_NORMAL [];
extern const char MSG_CRASH_DET_STEALTH_FORCE_OFF [];
extern const char MSG_MODE_CHANGE_IN_PROGRESS [];
extern const char MSG_COPY_SEL_LANG [];
extern const char MSG_SHEET_OFFSET [];
extern const char MSG_PLEASE_LOAD_PLA [];
extern const char MSG_WIZARD_RERUN [];
extern const char MSG_MMU_INSERT_FILAMENT_FIRST_TUBE [];
extern const char MSG_WIZARD_LOAD_FILAMENT [];
extern const char MSG_WIZARD_V2_CAL [];
extern const char MSG_SELECT_FIL_1ST_LAYERCAL [];
extern const char MSG_SELECT_TEMP_MATCHES_MATERIAL [];
extern const char MSG_WIZARD_V2_CAL_2 [];
extern const char MSG_WIZARD_SELFTEST [];
extern const char MSG_WIZARD_XYZ_CAL [];
extern const char MSG_REMOVE_SHIPPING_HELPERS [];
extern const char MSG_REMOVE_TEST_PRINT [];
extern const char MSG_WIZARD_Z_CAL [];
extern const char MSG_WIZARD_WILL_PREHEAT [];
extern const char MSG_TM_CAL [];
extern const char MSG_SEL_PREHEAT_TEMP [];
extern const char MSG_WIZARD_REPEAT_V2_CAL [];
extern const char MSG_WIZARD_CLEAN_HEATBED [];
extern const char MSG_ADDITIONAL_SHEETS [];
extern const char MSG_X_CORRECTION [];
extern const char MSG_Y_CORRECTION [];
extern const char MSG_Z_CORRECTION [];
extern const char MSG_EXTRUDER_CORRECTION [];
extern const char MSG_CHECKS [];
extern const char MSG_TEMPERATURE [];
extern const char MSG_MOVE_AXIS [];
extern const char MSG_DISABLE_STEPPERS [];
extern const char MSG_LIN_CORRECTION [];
extern const char MSG_WIZARD [];
extern const char MSG_BELTTEST [];
extern const char MSG_SELFTEST [];
extern const char MSG_CALIBRATE_BED [];
extern const char MSG_BED_CORRECTION_MENU [];
extern const char MSG_PID_EXTRUDER [];
extern const char MSG_SHOW_END_STOPS [];
extern const char MSG_CALIBRATE_BED_RESET [];
extern const char MSG_SELECT [];
extern const char MSG_RENAME [];
extern const char MSG_PREHEAT [];
extern const char MSG_CNG_SDCARD [];
extern const char MSG_NO_CARD [];
extern const char MSG_INIT_SDCARD [];
extern const char MSG_LOAD_TO_NOZZLE [];
extern const char MSG_AUTOLOAD_FILAMENT [];
extern const char MSG_STATISTICS [];
extern const char MSG_FAIL_STATS [];
extern const char MSG_MMU_FAIL_STATS [];
extern const char MSG_SUPPORT [];
extern const char MSG_SPEED [];
extern const char MSG_FLOW [];
extern const char MSG_INSERT_FIL [];
extern const char MSG_UNLOAD_FILAMENT_REPEAT [];
extern const char MSG_CHECK_IR_CONNECTION [];
extern const char MSG_FS_VERIFIED [];
extern const char MSG_FIL_FAILED [];
extern const char MSG_SELFTEST_START [];
extern const char MSG_SELFTEST_OK [];
extern const char MSG_SELFTEST_ERROR [];
extern const char MSG_SELFTEST_PLEASECHECK [];
extern const char MSG_SELFTEST_HEATERTHERMISTOR [];
extern const char MSG_SELFTEST_NOTCONNECTED [];
extern const char MSG_SELFTEST_BEDHEATER [];
extern const char MSG_SELFTEST_ENDSTOPS [];
extern const char MSG_SELFTEST_ENDSTOP [];
extern const char MSG_SELFTEST_ENDSTOP_NOTHIT [];
extern const char MSG_LOOSE_PULLEY [];
extern const char MSG_SELFTEST_AXIS_LENGTH [];
extern const char MSG_SELFTEST_AXIS [];
extern const char MSG_SELFTEST_FANS [];
extern const char MSG_SELFTEST_SWAPPED [];
extern const char MSG_FALSE_TRIGGERING [];
extern const char MSG_SELFTEST_FS_LEVEL [];
extern const char MSG_SELFTEST_CHECK_ENDSTOPS [];
extern const char MSG_SELFTEST_CHECK_Z [];
extern const char MSG_SELFTEST_CHECK_HOTEND [];
extern const char MSG_SELFTEST_CHECK_ALLCORRECT [];
extern const char MSG_CALIBRATING_HOME [];
extern const char MSG_CHECKING_FILE [];
extern const char MSG_FILE_INCOMPLETE [];
extern const char MSG_SD_REMOVED [];
extern const char MSG_NEW_FIRMWARE_AVAILABLE [];
extern const char MSG_NEW_FIRMWARE_PLEASE_UPGRADE [];
extern const char MSG_FW_MK3_DETECTED [];

//not internationalized messages
extern const char MSG_SPOOL_JOIN[];
extern const char MSG_FIRMWARE[];
extern const char MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY[];
extern const char MSG_PINDA[];
extern const char MSG_WELCOME[];
extern const char MSG_BROWNOUT_RESET[];
extern const char MSG_EXTERNAL_RESET[];
extern const char MSG_FILE_SAVED[];
extern const char MSG_POSITION_UNKNOWN[];
extern const char MSG_SOFTWARE_RESET[];
extern const char MSG_UNKNOWN_COMMAND[];
extern const char MSG_WATCHDOG_RESET[];
extern const char MSG_Z_MAX[];
extern const char MSG_Z_MIN[];
extern const char MSG_ZPROBE_OUT[];
#ifdef ENABLE_AUTO_BED_LEVELING
extern const char MSG_ZPROBE_ZOFFSET[];
#endif
extern const char MSG_TMC_OVERTEMP[];
extern const char MSG_Enqueing[];
extern const char MSG_SD_ERR_WRITE_TO_FILE[];
extern const char MSG_OK[];
extern const char MSG_OK_CAPS[];
extern const char MSG_SD_OPEN_FILE_FAIL[];
extern const char MSG_ENDSTOP_OPEN[];
extern const char MSG_POWERUP[];
extern const char MSG_ERR_STOPPED[];
extern const char MSG_ENDSTOP_HIT[];
extern const char MSG_EJECT_FROM_MMU[];
extern const char MSG_CUT_FILAMENT[];
extern const char MSG_HOST_ACTION_ASK_PAUSE[];
extern const char MSG_HOST_ACTION_PAUSED[];
extern const char MSG_HOST_ACTION_ASK_RESUME[];
extern const char MSG_HOST_ACTION_RESUMED[];
extern const char MSG_HOST_ACTION_CANCEL[];
extern const char MSG_HOST_ACTION_READY[];
extern const char MSG_HOST_ACTION_NOT_READY[];
extern const char MSG_HOST_ACTION_START[];
extern const char MSG_HOST_ACTION_UVLO_RECOVERY_READY[];
extern const char MSG_HOST_ACTION_UVLO_AUTO_RECOVERY_READY[];
#ifdef HOST_SHUTDOWN
extern const char MSG_HOST_ACTION_SHUTDOWN[];
#endif //HOST_SHUTOWN
extern const char MSG_FANCHECK_HOTEND[];
extern const char MSG_FANCHECK_PRINT[];
extern const char MSG_M112_KILL[];
extern const char MSG_ADVANCE_K[];
extern const char MSG_POWERPANIC_DETECTED[];
extern const char MSG_LCD_STATUS_CHANGED[];
extern const char MSG_UNKNOWN_CODE[];

// Common G-gcodes
extern const char G1_E_F2700[];
extern const char G28W[];
extern const char MSG_M23[];
extern const char MSG_M24[];
extern const char MSG_M83[];
extern const char MSG_M84[];
extern const char MSG_M107[];
extern const char MSG_M220[];
extern const char MSG_M500[];
extern const char MSG_M600[];
extern const char MSG_M701[];
extern const char MSG_M702[];

#if defined(__cplusplus)
}
#endif //defined(__cplusplus)
