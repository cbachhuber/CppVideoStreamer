

//-------------------------------------------------------------------------------------------------------------------
// xiApi Extension header file

// Generated for xiAPI version 4.15.24

#ifndef __XIAPIEXT_H
#define __XIAPIEXT_H

//-------------------------------------------------------------------------------------------------------------------
// xiApiExtended parameters

#define  XI_PRM_SENSOR_LINE_PERIOD              "sensor_line_period"      // Image sensor line period in us 
#define  XI_PRM_LENS_COMM_DATA                  "lens_comm_data"          // Write/Read data sequences to/from lens 
#define  XI_PRM_DEVICE_ID                       "device_id"               // Return unique device ID 
#define  XI_PRM_IMAGE_CORRECTION_SELECTOR       "image_correction_selector"// Select image correction function XI_IMAGE_CORRECTION_SELECTOR
#define  XI_PRM_IMAGE_CORRECTION_VALUE          "image_correction_value"  // Select image correction selected function value 
#define  XI_PRM_CAM_ENUM_GOLDEN_ENABLED         "cam_enum_golden_enabled" // Enable enumeration of golden devices 
#define  XI_PRM_RESET_USB_IF_BOOTLOADER         "reset_usb_if_bootloader" // Resets USB device if started as bootloader 
#define  XI_PRM_CAM_SIMULATORS_COUNT            "cam_simulators_count"    // Number of camera simulators to be available. 
#define  XI_PRM_CAM_SENSOR_INIT_DISABLED        "cam_sensor_init_disabled"// Camera sensor will not be initialized when 1=XI_ON is set. 
#define  XI_PRM_EXTENDED_FEATURE_SELECTOR       "ext_feature_selector"    // Selection of extended feature. XI_EXT_FEATURE_SELECTOR
#define  XI_PRM_EXTENDED_FEATURE                "ext_feature"             // Extended feature value. 
#define  XI_PRM_DEVICE_UNIT_SELECTOR            "device_unit_selector"    // Selects device unit. XI_DEVICE_UNIT_SELECTOR
#define  XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR   "device_unit_register_selector"// Selects register of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). 
#define  XI_PRM_DEVICE_UNIT_REGISTER_VALUE      "device_unit_register_value"// Sets/gets register value of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). 
#define  XI_PRM_API_PROGRESS_CALLBACK           "api_progress_callback"   // Callback address of pointer that is called upon long tasks (e.g. XI_PRM_WRITE_FILE_FFS). 


//-------------------------------------------------------------------------------------------------------------------
// defines
#define XI_LIST_STATUS_GENERATED        0x0001  //Sensor defects list was generated
#define XI_LIST_STATUS_UPTODATE         0x0002  //Sensor defects list is uptodate

//-------------------------------------------------------------------------------------------------------------------
// xiAPI enumerators
// Image correction function
typedef enum
{
	XI_CORRECTION_TYPE_SELECTOR  =0, // Correction Type selected see XI_TYPE_CORRECTION_SELECTOR
	XI_DEFECT_ID                 =1, // Select defect id
	XI_DEFECTS_COUNT_BY_TYPE     =2, // Count of defects selected by current XI_DEFECT_TYPE
	XI_DEFECT_TYPE               =3, // Type of defect see XI_IMAGE_DEFECT_TYPE
	XI_DEFECT_SUB_TYPE           =4, // Defect sub type see XI_IMAGE_DEFECT_SUB_TYPE
	XI_DEFECT_POS_X              =5, // Defect position x
	XI_DEFECT_POS_Y              =6, // Defect position y
	XI_DEFECT_CMD_ADD            =7, // Write cached defect to the list
	XI_DEFECT_CMD_DELETE         =8, // Delete defect to the list
	XI_DEFECT_CMD_APPLY_CHANGES  =9, // Apply changes
	XI_DEFECT_CMD_LIST_CLEAR     =10, // Clear list
	XI_DEFECT_CMD_LISTS_CLEAR    =11, // Clear lists
	XI_DEFECT_CMD_SAVE           =12, // Save list to device
	XI_CORRECTION_TYPE_ENABLED   =13, // Enable or disable correction type
	XI_DEFECT_ID_BY_TYPE         =14, // Select defect id by type
	XI_LIST_ID                   =15, // Select list id
	XI_DEFECT_CMD_APPLY_CHANGES_ALL=16, // Apply changes to all lists
	XI_LIST_STATUS               =17, // Current list status (Read-only). Result is mask of bits XI_LIST_STATUS_GENERATED, XI_LIST_STATUS_...
	XI_IMG_COR_TAP_SELECTOR      =64, // Selected tap id (0-N) for image correction
	XI_IMG_COR_GAIN_TUNE         =65, // Adjustment of gain in dB. For multitap sensors, active tap is selected by XI_IMG_COR_TAP_SELECTOR.
	XI_IMG_COR_OFFSET_TUNE       =66, // Adjustment of pixel values offset. For multitap sensors, active tap is selected by XI_IMG_COR_TAP_SELECTOR.
	
} XI_IMAGE_CORRECTION_SELECTOR;

// Define image  correction type
typedef enum
{
	XI_CORR_TYPE_SENSOR_DEFECTS_FACTORY=0, // Factory defect list
	XI_CORR_TYPE_SENSOR_COLUMN_FPN=1, // Select Fixed Pattern Noise Correction for Columns
	XI_CORR_TYPE_SENSOR_ADC_BLO  =2, // ADC gain and black level offset sensor register correction
	XI_CORR_TYPE_SENSOR_ROW_FPN  =3, // Select Fixed Pattern Noise Correction for Rows
	XI_CORR_TYPE_SENSOR_DEFECTS_USER0=4, // User defect list
	XI_CORR_TYPE_SENSOR_CHANNELS_TUNE=5, // Image channel/tap intensity correction
	
} XI_TYPE_CORRECTION_SELECTOR;

// Define image defect types
typedef enum
{
	XI_IMAGE_DEFECT_TYPE_PIXEL   =0, // Defect is pixel
	XI_IMAGE_DEFECT_TYPE_COLUMN  =1, // Defect is column
	XI_IMAGE_DEFECT_TYPE_ROW     =2, // Defect is row
	
} XI_IMAGE_DEFECT_TYPE;

// Define image defect sub types
typedef enum
{
	XI_IMAGE_DEFECT_SUB_TYPE_DARK=0, // Defect pixel(s) is(are) too dark
	XI_IMAGE_DEFECT_SUB_TYPE_BRIGHT=1, // Defect pixel(s) is(are) out of range
	XI_IMAGE_DEFECT_SUB_TYPE_HOT =2, // Defect pixel(s) is(are) too bright
	
} XI_IMAGE_DEFECT_SUB_TYPE;

// Extended feature selector.
typedef enum
{
	XI_EXT_FEATURE_SEL_SIMULATOR_GENERATOR_FRAME_LOST_PERIOD_MIN=1, // Camera simulator lost frame generation minimum period (in frames).
	XI_EXT_FEATURE_SEL_SIMULATOR_GENERATOR_FRAME_LOST_PERIOD_MAX=2, // Camera simulator lost frame generation random period (in frames).
	XI_EXT_FEATURE_SEL_SIMULATOR_IMAGE_DATA_FORMAT=3, // Camera simulator image data format.
	XI_EXT_FEATURE_SEL_BANDWIDTH_MEASUREMENT_TIME_SECONDS=4, // Number of seconds for bandwidth measurement. Default = 1.
	XI_EXT_FEATURE_SEL_IMAGE_INTENSIFIER_VOLTAGE=5, // Input voltage for image intensifier. Default = 0.
	XI_EXT_FEATURE_SEL_TRIG_FRAME=6, // Triggers frame(s) on internal event. Default = 0.
	XI_EXT_FEATURE_SEL_IMAGE_OVERSAMPLING=7, // Enable/disable image pixels oversampling. Default = 0.
	XI_EXT_FEATURE_SEL_APPLY_DATA_FINAL=8, // Enable/disable applying data final. Default = 1.
	XI_EXT_FEATURE_SEL_FAN_RPM   =9, // Sets camera cooling fan rpm (% from max). Default = 100.
	XI_EXT_FEATURE_SEL_DITHERING_HOST=10, // Enables/Disables shifted(left/up) image data dithering on HOST side. Default = 0(off).
	XI_EXT_FEATURE_SEL_DITHERING_DEVICE=11, // Enables/Disables shifted(left/up) image data dithering on DEVICE side. Default = 0(off).
	XI_EXT_FEATURE_SEL_FAN_THR_TEMP=12, // Sets camera fan/back side threshold temperature. Default = 35.
	
} XI_EXT_FEATURE_SELECTOR;

// Device unit selector
typedef enum
{
	XI_DEVICE_UNIT_SENSOR1       =0, // Selects first sensor on device
	XI_DEVICE_UNIT_FPGA1         =1, // Selects first FPGA on device
	XI_DEVICE_UNIT_SAL           =2, // Selects sensor abstraction layer
	XI_DEVICE_UNIT_DAL           =3, // Selects driver abstraction layer
	XI_DEVICE_UNIT_SCM           =4, // Selects sensor correction module
	XI_DEVICE_UNIT_FGENTL        =5, // Selects register in underlying GenTL layer
	XI_DEVICE_UNIT_MCU1          =6, // Selects first MCU on device
	XI_DEVICE_UNIT_MCU2          =7, // Selects second MCU on device
	XI_DEVICE_UNIT_CHF           =8, // Selects Camera High Features Model
	
} XI_DEVICE_UNIT_SELECTOR;

// Camera sensor mode enumerator.
typedef enum
{
	XI_SENS_MD0                  =0, // Sensor mode number 0
	XI_SENS_MD1                  =1, // Sensor mode number 1
	XI_SENS_MD2                  =2, // Sensor mode number 2
	XI_SENS_MD3                  =3, // Sensor mode number 3
	XI_SENS_MD4                  =4, // Sensor mode number 4
	XI_SENS_MD5                  =5, // Sensor mode number 5
	XI_SENS_MD6                  =6, // Sensor mode number 6
	XI_SENS_MD7                  =7, // Sensor mode number 7
	XI_SENS_MD8                  =8, // Sensor mode number 8
	XI_SENS_MD9                  =9, // Sensor mode number 9
	XI_SENS_MD10                 =10, // Sensor mode number 10
	XI_SENS_MD11                 =11, // Sensor mode number 11
	XI_SENS_MD12                 =12, // Sensor mode number 12
	XI_SENS_MD13                 =13, // Sensor mode number 13
	XI_SENS_MD14                 =14, // Sensor mode number 14
	XI_SENS_MD15                 =15, // Sensor mode number 15
	
} XI_SENSOR_MODE;

// Camera channel count enumerator.
typedef enum
{
	XI_CHANN_CNT2                =2, // 2 sensor readout channels.
	XI_CHANN_CNT4                =4, // 4 sensor readout channels.
	XI_CHANN_CNT8                =8, // 8 sensor readout channels.
	XI_CHANN_CNT16               =16, // 16 sensor readout channels.
	XI_CHANN_CNT32               =32, // 32 sensor readout channels.
	
} XI_SENSOR_OUTPUT_CHANNEL_COUNT;

	
#endif /* __XIAPIEXT_H */


//-------------------------------------------------------------------------------------------------------------------
// xiAPIplus header file - created from gen_xiAPIplus_h_file.xslt
// XIMEA Application Programming Interface Object Oriented Approach
//-------------------------------------------------------------------------------------------------------------------

#pragma once

#ifdef WIN32 
#include "xiApi.h" 
#else 
#include <m3api/xiApi.h> // Linux, OSX 
#endif
//#include <xiExt.h>
#include <stdio.h>
#include <chrono>
#include <iostream>
#include <opencv2/core.hpp> 
#include <opencv2/highgui/highgui.hpp>
// debug support

#define DBFIN  "xAPIp:"
#define DBFOUT "res: "
#define xiAPIPlusDP(x) {if (is_debug_enabled) {printf x;}}
#define CheckCamHandle(place) {xiAPIPlusDP((DBFIN "%s ... ",place));if (!camera_handle) CheckResult(XI_INVALID_HANDLE, place);}
#define CheckCamHandleInt(place,i) {xiAPIPlusDP((DBFIN "%s(%d) ... ",place,i));if (!camera_handle) CheckResult(XI_INVALID_HANDLE, place);}

// -----------------------------------------------
// xiAPIplus
// -----------------------------------------------

class xiAPIplus
{
public:
	unsigned long GetNumberOfConnectedCameras();
	void EnableCamEnumGoldenEnabled();
};

class xiAPIplus_Exception
{
public:
	xiAPIplus_Exception(XI_RETURN code, char* desc)
	{
		description = desc;
		error_code = code;
	}
	XI_RETURN GetErrorNumber() {return error_code;}
	void GetDescription(char* name, size_t name_max_size);
	void PrintError();
private:
	char*     description;
	XI_RETURN error_code;
};

// -----------------------------------------------
// general parametes interface
// working with set of parameters
// -----------------------------------------------

class xiAPIplus_Camera_Parameters
{
public:
	void Save_to_File(char* filename);
	void Load_from_File(char* filename);
	void Save_to_Preset(int id);
	void Load_from_Preset(int id);
	int Get_Count();
	void Get_Name(int id, char* name, size_t name_max_size);
	void Get_Value(int id, char* value, size_t value_max_size);
	void Set_Value(int id, char* value);
private:
};

// -----------------------------------------------
// class xiAPIplus - Image
// -----------------------------------------------

class xiAPIplus_Image
{
public:
	xiAPIplus_Image();
	virtual ~xiAPIplus_Image();

	// functions
	XI_IMG_FORMAT GetDataFormat() {return image.frm;}
	unsigned char* GetPixels() {return (unsigned char*)image.bp;}
	int GetWidth() {return image.width;}
	int GetHeight() {return image.height;}
	int GetPadding_X();
	XI_IMG* GetXI_IMG();
	int GetBytesPerPixel();
	int GetTotalPixelValues();
	int GetFrameNumber(){ return image.nframe;};
	int GetPixelsArraySize() {return ((image.width + GetPadding_X()) * image.height * GetBytesPerPixel());}
	int GetBitCount();

	virtual void CopyTo(xiAPIplus_Image* image_copy);
	bool IsCopy() {return is_copy;}
	void SetCopy(bool en) {is_copy=en;}
private:
XI_IMG image;
bool is_copy; // =1 if image bitmap is allocated, 0= if it is area in memory, that is not allocated in API
};

// -----------------------------------------------
// class xiAPIplus - Camera
// -----------------------------------------------

class xiAPIplus_Camera
{
public:
	xiAPIplus_Camera();
	~xiAPIplus_Camera();

	// API
	unsigned long GetNumberOfConnectedCameras();

	// open/close
	void OpenFirst();
	void OpenByID(unsigned long id);
	void OpenBySN(char* serial_number);
	void OpenByPath(char* device_path);
	void OpenByUserID(char* user_id);
	void OpenByLocation(char* location);
	void Close();

	// debug
	void EnableDebug() {is_debug_enabled=true;}
	void DisableDebug() {is_debug_enabled=false;}
	bool IsDebugEnabled() {return is_debug_enabled;}

	// acquisition
	void StartAcquisition();
	void StopAcquisition();
	bool IsAcquisitionActive();

	// image
	void SetNextImageTimeout_ms(int timeout_ms);
	int GetNextImageTimeout_ms();
	xiAPIplus_Image* GetNextImage(xiAPIplus_Image* app_image);
	xiAPIplus_Image* GetLastImage();
	HANDLE GetCameraHandle() {return camera_handle;}
	void SetCameraHandle(HANDLE handle) {camera_handle = handle;}

	// parameters
	xiAPIplus_Camera_Parameters* GetParameters() {return &parameters;}
	void GetXIAPIParamString(char* xiapi_param_name, char* value, int value_max_size);
	void SetXIAPIParamString(char* xiapi_param_name, char* value, unsigned int value_size);

	void GetXIAPIParamInt(char* xiapi_param_name, int* value);
	void SetXIAPIParamInt(char* xiapi_param_name, int value);

	void GetXIAPIParamFloat(char* xiapi_param_name, float* value);
	void SetXIAPIParamFloat(char* xiapi_param_name, float value);

	void GetXIAPIParam(char* xiapi_param_name, void* value, size_t * value_size, XI_PRM_TYPE * type);
	void SetXIAPIParam(char* xiapi_param_name, void* value, size_t value_size, XI_PRM_TYPE type);


	//-------------------------------------------------------------------------------------------------------------------
	// xiApi parameters


	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Basic
	//-------------------------------------------------------------------------------------------------------------------

	
	// Exposure time in microseconds (XI_PRM_EXPOSURE)
	
	int GetExposureTime();
	int GetExposureTime_Maximum();
	int GetExposureTime_Minimum();
	int GetExposureTime_Increment();
	void SetExposureTime(int ExposureTime);
	
	// Sets the number of times of exposure in one frame. (XI_PRM_EXPOSURE_BURST_COUNT)
	
	int GetExposureBurstCount();
	int GetExposureBurstCount_Maximum();
	int GetExposureBurstCount_Minimum();
	int GetExposureBurstCount_Increment();
	void SetExposureBurstCount(int ExposureBurstCount);
	
	// Gain selector for parameter Gain allows to select different type of gains. (XI_PRM_GAIN_SELECTOR)
	XI_GAIN_SELECTOR_TYPE GetGainSelector();
	XI_GAIN_SELECTOR_TYPE GetGainSelector_Maximum();
	XI_GAIN_SELECTOR_TYPE GetGainSelector_Minimum();
	int GetGainSelector_Increment();
	
	void SetGainSelector(XI_GAIN_SELECTOR_TYPE GainSelector);
	
	// Gain in dB (XI_PRM_GAIN)
	
	float GetGain();
	float GetGain_Maximum();
	float GetGain_Minimum();
	float GetGain_Increment();
	
	void SetGain(float Gain);
	
	// Change image resolution by binning or skipping. (XI_PRM_DOWNSAMPLING)
	XI_DOWNSAMPLING_VALUE GetDownsampling();
	XI_DOWNSAMPLING_VALUE GetDownsampling_Maximum();
	XI_DOWNSAMPLING_VALUE GetDownsampling_Minimum();
	int GetDownsampling_Increment();
	
	void SetDownsampling(XI_DOWNSAMPLING_VALUE Downsampling);
	
	// Change image downsampling type. (XI_PRM_DOWNSAMPLING_TYPE)
	XI_DOWNSAMPLING_TYPE GetDownsamplingType();
	XI_DOWNSAMPLING_TYPE GetDownsamplingType_Maximum();
	XI_DOWNSAMPLING_TYPE GetDownsamplingType_Minimum();
	int GetDownsamplingType_Increment();
	
	void SetDownsamplingType(XI_DOWNSAMPLING_TYPE DownsamplingType);
	
	// Selects which test pattern generator is controlled by the TestPattern feature. (XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR)
	XI_TEST_PATTERN_GENERATOR GetTestPatternGeneratorSelector();
	XI_TEST_PATTERN_GENERATOR GetTestPatternGeneratorSelector_Maximum();
	XI_TEST_PATTERN_GENERATOR GetTestPatternGeneratorSelector_Minimum();
	int GetTestPatternGeneratorSelector_Increment();
	
	void SetTestPatternGeneratorSelector(XI_TEST_PATTERN_GENERATOR TestPatternGeneratorSelector);
	
	// Selects which test pattern type is generated by the selected generator. (XI_PRM_TEST_PATTERN)
	XI_TEST_PATTERN GetTestPattern();
	XI_TEST_PATTERN GetTestPattern_Maximum();
	XI_TEST_PATTERN GetTestPattern_Minimum();
	int GetTestPattern_Increment();
	
	void SetTestPattern(XI_TEST_PATTERN TestPattern);
	
	// Output data format. (XI_PRM_IMAGE_DATA_FORMAT)
	XI_IMG_FORMAT GetImageDataFormat();
	XI_IMG_FORMAT GetImageDataFormat_Maximum();
	XI_IMG_FORMAT GetImageDataFormat_Minimum();
	int GetImageDataFormat_Increment();
	
	void SetImageDataFormat(XI_IMG_FORMAT ImageDataFormat);
	
	// Change sensor shutter type(CMOS sensor). (XI_PRM_SHUTTER_TYPE)
	XI_SHUTTER_TYPE GetShutterType();
	XI_SHUTTER_TYPE GetShutterType_Maximum();
	XI_SHUTTER_TYPE GetShutterType_Minimum();
	int GetShutterType_Increment();
	
	void SetShutterType(XI_SHUTTER_TYPE ShutterType);
	
	// Number of taps (XI_PRM_SENSOR_TAPS)
	XI_SENSOR_TAP_CNT GetSensorTaps();
	XI_SENSOR_TAP_CNT GetSensorTaps_Maximum();
	XI_SENSOR_TAP_CNT GetSensorTaps_Minimum();
	int GetSensorTaps_Increment();
	
	void SetSensorTaps(XI_SENSOR_TAP_CNT SensorTaps);
	
	// Automatic exposure/gain (XI_PRM_AEAG)
	
	bool IsAutoExposureAutoGain();
	
	void EnableAutoExposureAutoGain();
	void DisableAutoExposureAutoGain();
	
	// Automatic exposure/gain ROI offset X (XI_PRM_AEAG_ROI_OFFSET_X)
	
	int GetAutoExposureAutoGainROIoffsetX();
	int GetAutoExposureAutoGainROIoffsetX_Maximum();
	int GetAutoExposureAutoGainROIoffsetX_Minimum();
	int GetAutoExposureAutoGainROIoffsetX_Increment();
	void SetAutoExposureAutoGainROIoffsetX(int AutoExposureAutoGainROIoffsetX);
	
	// Automatic exposure/gain ROI offset Y (XI_PRM_AEAG_ROI_OFFSET_Y)
	
	int GetAutoExposureAutoGainROIoffsetY();
	int GetAutoExposureAutoGainROIoffsetY_Maximum();
	int GetAutoExposureAutoGainROIoffsetY_Minimum();
	int GetAutoExposureAutoGainROIoffsetY_Increment();
	void SetAutoExposureAutoGainROIoffsetY(int AutoExposureAutoGainROIoffsetY);
	
	// Automatic exposure/gain ROI Width (XI_PRM_AEAG_ROI_WIDTH)
	
	int GetAutoExposureAutoGainROIWidth();
	int GetAutoExposureAutoGainROIWidth_Maximum();
	int GetAutoExposureAutoGainROIWidth_Minimum();
	int GetAutoExposureAutoGainROIWidth_Increment();
	void SetAutoExposureAutoGainROIWidth(int AutoExposureAutoGainROIWidth);
	
	// Automatic exposure/gain ROI Height (XI_PRM_AEAG_ROI_HEIGHT)
	
	int GetAutoExposureAutoGainROIHeight();
	int GetAutoExposureAutoGainROIHeight_Maximum();
	int GetAutoExposureAutoGainROIHeight_Minimum();
	int GetAutoExposureAutoGainROIHeight_Increment();
	void SetAutoExposureAutoGainROIHeight(int AutoExposureAutoGainROIHeight);
	
	// Selector of list used by Sensor Defects Correction parameter (XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR)
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR GetSensorDefectsCorrectionListSelector();
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR GetSensorDefectsCorrectionListSelector_Maximum();
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR GetSensorDefectsCorrectionListSelector_Minimum();
	int GetSensorDefectsCorrectionListSelector_Increment();
	
	void SetSensorDefectsCorrectionListSelector(XI_SENS_DEFFECTS_CORR_LIST_SELECTOR SensorDefectsCorrectionListSelector);
	
	// Sets/Gets sensor defects list in special text format (XI_PRM_SENS_DEFECTS_CORR_LIST_CONTENT)
	
	void GetSensDefectsCorrListContent(char* buffer, int buffer_lenght);
	
	void SetSensDefectsCorrListContent(char* SensDefectsCorrListContent);
	
	// Correction of sensor defects (pixels, columns, rows) enable/disable (XI_PRM_SENS_DEFECTS_CORR)
	
	bool IsSensorDefectsCorrection();
	
	void EnableSensorDefectsCorrection();
	void DisableSensorDefectsCorrection();
	
	// Automatic white balance (XI_PRM_AUTO_WB)
	
	bool IsWhiteBalanceAuto();
	
	void EnableWhiteBalanceAuto();
	void DisableWhiteBalanceAuto();
	
	// Calculates White Balance(xiGetImage function must be called) (XI_PRM_MANUAL_WB)
	
	void SetWhiteBalanceManualNow(int WhiteBalanceManualNow);
	
	// White balance red coefficient (XI_PRM_WB_KR)
	
	float GetWhiteBalanceRed();
	float GetWhiteBalanceRed_Maximum();
	float GetWhiteBalanceRed_Minimum();
	float GetWhiteBalanceRed_Increment();
	
	void SetWhiteBalanceRed(float WhiteBalanceRed);
	
	// White balance green coefficient (XI_PRM_WB_KG)
	
	float GetWhiteBalanceGreen();
	float GetWhiteBalanceGreen_Maximum();
	float GetWhiteBalanceGreen_Minimum();
	float GetWhiteBalanceGreen_Increment();
	
	void SetWhiteBalanceGreen(float WhiteBalanceGreen);
	
	// White balance blue coefficient (XI_PRM_WB_KB)
	
	float GetWhiteBalanceBlue();
	float GetWhiteBalanceBlue_Maximum();
	float GetWhiteBalanceBlue_Minimum();
	float GetWhiteBalanceBlue_Increment();
	
	void SetWhiteBalanceBlue(float WhiteBalanceBlue);
	
	// Width of the Image provided by the device (in pixels). (XI_PRM_WIDTH)
	
	int GetWidth();
	int GetWidth_Maximum();
	int GetWidth_Minimum();
	int GetWidth_Increment();
	void SetWidth(int Width);
	
	// Height of the Image provided by the device (in pixels). (XI_PRM_HEIGHT)
	
	int GetHeight();
	int GetHeight_Maximum();
	int GetHeight_Minimum();
	int GetHeight_Increment();
	void SetHeight(int Height);
	
	// Horizontal offset from the origin to the area of interest (in pixels). (XI_PRM_OFFSET_X)
	
	int GetOffsetX();
	int GetOffsetX_Maximum();
	int GetOffsetX_Minimum();
	int GetOffsetX_Increment();
	void SetOffsetX(int OffsetX);
	
	// Vertical offset from the origin to the area of interest (in pixels). (XI_PRM_OFFSET_Y)
	
	int GetOffsetY();
	int GetOffsetY_Maximum();
	int GetOffsetY_Minimum();
	int GetOffsetY_Increment();
	void SetOffsetY(int OffsetY);
	
	// Selects Region in Multiple ROI which parameters are set by width, height, ... ,region mode (XI_PRM_REGION_SELECTOR)
	
	int GetRegion_selector();
	int GetRegion_selector_Maximum();
	int GetRegion_selector_Minimum();
	int GetRegion_selector_Increment();
	void SetRegion_selector(int Region_selector);
	
	// Activates/deactivates Region selected by Region Selector (XI_PRM_REGION_MODE)
	
	int GetRegion_mode();
	int GetRegion_mode_Maximum();
	int GetRegion_mode_Minimum();
	int GetRegion_mode_Increment();
	void SetRegion_mode(int Region_mode);
	
	// Horizontal flip enable (XI_PRM_HORIZONTAL_FLIP)
	
	bool IsHorizontalFlip();
	
	void EnableHorizontalFlip();
	void DisableHorizontalFlip();
	
	// Vertical flip enable (XI_PRM_VERTICAL_FLIP)
	
	bool IsVerticalFlip();
	
	void EnableVerticalFlip();
	void DisableVerticalFlip();
	
	// Image flat field correction (XI_PRM_FFC)
	
	bool IsFlatFieldCorrection();
	
	void EnableFlatFieldCorrection();
	void DisableFlatFieldCorrection();
	
	// Set name of file to be applied for FFC processor. (XI_PRM_FFC_FLAT_FIELD_FILE_NAME)
	
	void GetFFCFlatFieldFileName(char* buffer, int buffer_lenght);
	
	void SetFFCFlatFieldFileName(char* FFCFlatFieldFileName);
	
	// Set name of file to be applied for FFC processor. (XI_PRM_FFC_DARK_FIELD_FILE_NAME)
	
	void GetFFCDarkFieldFileName(char* buffer, int buffer_lenght);
	
	void SetFFCDarkFieldFileName(char* FFCDarkFieldFileName);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Image Format
	//-------------------------------------------------------------------------------------------------------------------

	
	// Binning engine selector. (XI_PRM_BINNING_SELECTOR)
	XI_BIN_SELECTOR GetBinningSelector();
	XI_BIN_SELECTOR GetBinningSelector_Maximum();
	XI_BIN_SELECTOR GetBinningSelector_Minimum();
	int GetBinningSelector_Increment();
	
	void SetBinningSelector(XI_BIN_SELECTOR BinningSelector);
	
	// Sets the mode to use to combine vertical pixel together. (XI_PRM_BINNING_VERTICAL_MODE)
	XI_BIN_MODE GetBinningVerticalMode();
	XI_BIN_MODE GetBinningVerticalMode_Maximum();
	XI_BIN_MODE GetBinningVerticalMode_Minimum();
	int GetBinningVerticalMode_Increment();
	
	void SetBinningVerticalMode(XI_BIN_MODE BinningVerticalMode);
	
	// Vertical Binning - number of vertical photo-sensitive cells to combine together. (XI_PRM_BINNING_VERTICAL)
	
	int GetBinningVertical();
	int GetBinningVertical_Maximum();
	int GetBinningVertical_Minimum();
	int GetBinningVertical_Increment();
	void SetBinningVertical(int BinningVertical);
	
	// Sets the mode to use to combine horizontal pixel together. (XI_PRM_BINNING_HORIZONTAL_MODE)
	XI_BIN_MODE GetBinningHorizontalMode();
	XI_BIN_MODE GetBinningHorizontalMode_Maximum();
	XI_BIN_MODE GetBinningHorizontalMode_Minimum();
	int GetBinningHorizontalMode_Increment();
	
	void SetBinningHorizontalMode(XI_BIN_MODE BinningHorizontalMode);
	
	// Horizontal Binning - number of horizontal photo-sensitive cells to combine together. (XI_PRM_BINNING_HORIZONTAL)
	
	int GetBinningHorizontal();
	int GetBinningHorizontal_Maximum();
	int GetBinningHorizontal_Minimum();
	int GetBinningHorizontal_Increment();
	void SetBinningHorizontal(int BinningHorizontal);
	
	// Binning horizontal pattern type. (XI_PRM_BINNING_HORIZONTAL_PATTERN)
	XI_BIN_PATTERN GetBinningHorizontalPattern();
	XI_BIN_PATTERN GetBinningHorizontalPattern_Maximum();
	XI_BIN_PATTERN GetBinningHorizontalPattern_Minimum();
	int GetBinningHorizontalPattern_Increment();
	
	void SetBinningHorizontalPattern(XI_BIN_PATTERN BinningHorizontalPattern);
	
	// Binning vertical pattern type. (XI_PRM_BINNING_VERTICAL_PATTERN)
	XI_BIN_PATTERN GetBinningVerticalPattern();
	XI_BIN_PATTERN GetBinningVerticalPattern_Maximum();
	XI_BIN_PATTERN GetBinningVerticalPattern_Minimum();
	int GetBinningVerticalPattern_Increment();
	
	void SetBinningVerticalPattern(XI_BIN_PATTERN BinningVerticalPattern);
	
	// Decimation engine selector. (XI_PRM_DECIMATION_SELECTOR)
	XI_DEC_SELECTOR GetDecimationSelector();
	XI_DEC_SELECTOR GetDecimationSelector_Maximum();
	XI_DEC_SELECTOR GetDecimationSelector_Minimum();
	int GetDecimationSelector_Increment();
	
	void SetDecimationSelector(XI_DEC_SELECTOR DecimationSelector);
	
	// Vertical Decimation - vertical sub-sampling of the image - reduces the vertical resolution of the image by the specified vertical decimation factor. (XI_PRM_DECIMATION_VERTICAL)
	
	int GetDecimationVertical();
	int GetDecimationVertical_Maximum();
	int GetDecimationVertical_Minimum();
	int GetDecimationVertical_Increment();
	void SetDecimationVertical(int DecimationVertical);
	
	// Horizontal Decimation - horizontal sub-sampling of the image - reduces the horizontal resolution of the image by the specified vertical decimation factor. (XI_PRM_DECIMATION_HORIZONTAL)
	
	int GetDecimationHorizontal();
	int GetDecimationHorizontal_Maximum();
	int GetDecimationHorizontal_Minimum();
	int GetDecimationHorizontal_Increment();
	void SetDecimationHorizontal(int DecimationHorizontal);
	
	// Decimation horizontal pattern type. (XI_PRM_DECIMATION_HORIZONTAL_PATTERN)
	XI_DEC_PATTERN GetDecimationHorizontalPattern();
	XI_DEC_PATTERN GetDecimationHorizontalPattern_Maximum();
	XI_DEC_PATTERN GetDecimationHorizontalPattern_Minimum();
	int GetDecimationHorizontalPattern_Increment();
	
	void SetDecimationHorizontalPattern(XI_DEC_PATTERN DecimationHorizontalPattern);
	
	// Decimation vertical pattern type. (XI_PRM_DECIMATION_VERTICAL_PATTERN)
	XI_DEC_PATTERN GetDecimationVerticalPattern();
	XI_DEC_PATTERN GetDecimationVerticalPattern_Maximum();
	XI_DEC_PATTERN GetDecimationVerticalPattern_Minimum();
	int GetDecimationVerticalPattern_Increment();
	
	void SetDecimationVerticalPattern(XI_DEC_PATTERN DecimationVerticalPattern);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: AE Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Exposure priority (0.8 - exposure 80%, gain 20%). (XI_PRM_EXP_PRIORITY)
	
	float GetAutoExposureAutoGainExposurePriority();
	float GetAutoExposureAutoGainExposurePriority_Maximum();
	float GetAutoExposureAutoGainExposurePriority_Minimum();
	float GetAutoExposureAutoGainExposurePriority_Increment();
	
	void SetAutoExposureAutoGainExposurePriority(float AutoExposureAutoGainExposurePriority);
	
	// Maximum limit of gain in AEAG procedure (XI_PRM_AG_MAX_LIMIT)
	
	float GetAutoGainTopLimit();
	float GetAutoGainTopLimit_Maximum();
	float GetAutoGainTopLimit_Minimum();
	float GetAutoGainTopLimit_Increment();
	
	void SetAutoGainTopLimit(float AutoGainTopLimit);
	
	// Maximum time (us) used for exposure in AEAG procedure (XI_PRM_AE_MAX_LIMIT)
	
	int GetAutoExposureTopLimit();
	int GetAutoExposureTopLimit_Maximum();
	int GetAutoExposureTopLimit_Minimum();
	int GetAutoExposureTopLimit_Increment();
	void SetAutoExposureTopLimit(int AutoExposureTopLimit);
	
	// Average intensity of output signal AEAG should achieve(in %) (XI_PRM_AEAG_LEVEL)
	
	int GetAutoExposureAutoGainTargetLevel();
	int GetAutoExposureAutoGainTargetLevel_Maximum();
	int GetAutoExposureAutoGainTargetLevel_Minimum();
	int GetAutoExposureAutoGainTargetLevel_Increment();
	void SetAutoExposureAutoGainTargetLevel(int AutoExposureAutoGainTargetLevel);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Performance
	//-------------------------------------------------------------------------------------------------------------------

	
	// Set/get bandwidth(datarate)(in Megabits) (XI_PRM_LIMIT_BANDWIDTH)
	
	int GetBandwidthLimit();
	int GetBandwidthLimit_Maximum();
	int GetBandwidthLimit_Minimum();
	int GetBandwidthLimit_Increment();
	void SetBandwidthLimit(int BandwidthLimit);
	
	// Bandwidth limit enabled (XI_PRM_LIMIT_BANDWIDTH_MODE)
	XI_SWITCH GetBandwidthLimitMode();
	XI_SWITCH GetBandwidthLimitMode_Maximum();
	XI_SWITCH GetBandwidthLimitMode_Minimum();
	int GetBandwidthLimitMode_Increment();
	
	void SetBandwidthLimitMode(XI_SWITCH BandwidthLimitMode);
	
	// Image sensor line period in us (XI_PRM_SENSOR_LINE_PERIOD)
	
	float GetSensorLinePeriod();
	float GetSensorLinePeriod_Maximum();
	float GetSensorLinePeriod_Minimum();
	float GetSensorLinePeriod_Increment();
	
	void SetSensorLinePeriod(float SensorLinePeriod);
	
	// Sensor output data bit depth. (XI_PRM_SENSOR_DATA_BIT_DEPTH)
	XI_BIT_DEPTH GetSensorDataBitDepth();
	XI_BIT_DEPTH GetSensorDataBitDepth_Maximum();
	XI_BIT_DEPTH GetSensorDataBitDepth_Minimum();
	int GetSensorDataBitDepth_Increment();
	
	void SetSensorDataBitDepth(XI_BIT_DEPTH SensorDataBitDepth);
	
	// Device output data bit depth. (XI_PRM_OUTPUT_DATA_BIT_DEPTH)
	XI_BIT_DEPTH GetDeviceOutputDataBitDepth();
	XI_BIT_DEPTH GetDeviceOutputDataBitDepth_Maximum();
	XI_BIT_DEPTH GetDeviceOutputDataBitDepth_Minimum();
	int GetDeviceOutputDataBitDepth_Increment();
	
	void SetDeviceOutputDataBitDepth(XI_BIT_DEPTH DeviceOutputDataBitDepth);
	
	// bitdepth of data returned by function xiGetImage (XI_PRM_IMAGE_DATA_BIT_DEPTH)
	XI_BIT_DEPTH GetImageDataBitDepth();
	XI_BIT_DEPTH GetImageDataBitDepth_Maximum();
	XI_BIT_DEPTH GetImageDataBitDepth_Minimum();
	int GetImageDataBitDepth_Increment();
	
	void SetImageDataBitDepth(XI_BIT_DEPTH ImageDataBitDepth);
	
	// Device output data packing (or grouping) enabled. Packing could be enabled if output_data_bit_depth > 8 and packing capability is available. (XI_PRM_OUTPUT_DATA_PACKING)
	
	bool IsDeviceOutputDataPacking();
	
	void EnableDeviceOutputDataPacking();
	void DisableDeviceOutputDataPacking();
	
	// Data packing type. Some cameras supports only specific packing type. (XI_PRM_OUTPUT_DATA_PACKING_TYPE)
	XI_OUTPUT_DATA_PACKING_TYPE GetDeviceOutputDataPackingType();
	XI_OUTPUT_DATA_PACKING_TYPE GetDeviceOutputDataPackingType_Maximum();
	XI_OUTPUT_DATA_PACKING_TYPE GetDeviceOutputDataPackingType_Minimum();
	int GetDeviceOutputDataPackingType_Increment();
	
	void SetDeviceOutputDataPackingType(XI_OUTPUT_DATA_PACKING_TYPE DeviceOutputDataPackingType);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Temperature
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns 1 for cameras that support cooling. (XI_PRM_IS_COOLED)
	
	bool IsCooled();
	
	// Temperature control mode. (XI_PRM_COOLING)
	XI_TEMP_CTRL_MODE_SELECTOR GetCooling();
	XI_TEMP_CTRL_MODE_SELECTOR GetCooling_Maximum();
	XI_TEMP_CTRL_MODE_SELECTOR GetCooling_Minimum();
	int GetCooling_Increment();
	
	void SetCooling(XI_TEMP_CTRL_MODE_SELECTOR Cooling);
	
	// Set sensor target temperature for cooling. (XI_PRM_TARGET_TEMP)
	
	float GetTargetTemperature();
	float GetTargetTemperature_Maximum();
	float GetTargetTemperature_Minimum();
	float GetTargetTemperature_Increment();
	
	void SetTargetTemperature(float TargetTemperature);
	
	// Selector of mechanical point where thermometer is located. (XI_PRM_TEMP_SELECTOR)
	XI_TEMP_SELECTOR GetTemperatureSelector();
	XI_TEMP_SELECTOR GetTemperatureSelector_Maximum();
	XI_TEMP_SELECTOR GetTemperatureSelector_Minimum();
	int GetTemperatureSelector_Increment();
	
	void SetTemperatureSelector(XI_TEMP_SELECTOR TemperatureSelector);
	
	// Camera temperature (selected by XI_PRM_TEMP_SELECTOR) (XI_PRM_TEMP)
	
	float GetTemperature();
	float GetTemperature_Maximum();
	float GetTemperature_Minimum();
	float GetTemperature_Increment();
	
	// Temperature control mode. (XI_PRM_TEMP_CONTROL_MODE)
	XI_TEMP_CTRL_MODE_SELECTOR GetTemperatureControlMode();
	XI_TEMP_CTRL_MODE_SELECTOR GetTemperatureControlMode_Maximum();
	XI_TEMP_CTRL_MODE_SELECTOR GetTemperatureControlMode_Minimum();
	int GetTemperatureControlMode_Increment();
	
	void SetTemperatureControlMode(XI_TEMP_CTRL_MODE_SELECTOR TemperatureControlMode);
	
	// Camera sensor temperature (XI_PRM_CHIP_TEMP)
	
	float GetTemperatureSensor();
	float GetTemperatureSensor_Maximum();
	float GetTemperatureSensor_Minimum();
	float GetTemperatureSensor_Increment();
	
	// Camera housing tepmerature (XI_PRM_HOUS_TEMP)
	
	float GetTemperatureHousing();
	float GetTemperatureHousing_Maximum();
	float GetTemperatureHousing_Minimum();
	float GetTemperatureHousing_Increment();
	
	// Camera housing back side tepmerature (XI_PRM_HOUS_BACK_SIDE_TEMP)
	
	float GetTemperatureHousingBackSide();
	float GetTemperatureHousingBackSide_Maximum();
	float GetTemperatureHousingBackSide_Minimum();
	float GetTemperatureHousingBackSide_Increment();
	
	// Camera sensor board temperature (XI_PRM_SENSOR_BOARD_TEMP)
	
	float GetTemperatureSensorBoard();
	float GetTemperatureSensorBoard_Maximum();
	float GetTemperatureSensorBoard_Minimum();
	float GetTemperatureSensorBoard_Increment();
	
	// Temperature element selector (TEC(Peltier), Fan). (XI_PRM_TEMP_ELEMENT_SEL)
	XI_TEMP_ELEMENT_SELECTOR GetTemperatureElementSelector();
	XI_TEMP_ELEMENT_SELECTOR GetTemperatureElementSelector_Maximum();
	XI_TEMP_ELEMENT_SELECTOR GetTemperatureElementSelector_Minimum();
	int GetTemperatureElementSelector_Increment();
	
	void SetTemperatureElementSelector(XI_TEMP_ELEMENT_SELECTOR TemperatureElementSelector);
	
	// Temperature element value in percents of full control range (XI_PRM_TEMP_ELEMENT_VALUE)
	
	float GetTemperatureElementValue();
	float GetTemperatureElementValue_Maximum();
	float GetTemperatureElementValue_Minimum();
	float GetTemperatureElementValue_Increment();
	
	void SetTemperatureElementValue(float TemperatureElementValue);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Color Correction
	//-------------------------------------------------------------------------------------------------------------------

	
	// Mode of color management system. (XI_PRM_CMS)
	XI_CMS_MODE GetColorManagementMode();
	XI_CMS_MODE GetColorManagementMode_Maximum();
	XI_CMS_MODE GetColorManagementMode_Minimum();
	int GetColorManagementMode_Increment();
	
	void SetColorManagementMode(XI_CMS_MODE ColorManagementMode);
	
	// Intent of color management system. (XI_PRM_CMS_INTENT)
	XI_CMS_INTENT GetColorManagementIntent();
	XI_CMS_INTENT GetColorManagementIntent_Maximum();
	XI_CMS_INTENT GetColorManagementIntent_Minimum();
	int GetColorManagementIntent_Increment();
	
	void SetColorManagementIntent(XI_CMS_INTENT ColorManagementIntent);
	
	// Enable applying of CMS profiles to xiGetImage (see XI_PRM_INPUT_CMS_PROFILE, XI_PRM_OUTPUT_CMS_PROFILE). (XI_PRM_APPLY_CMS)
	
	bool IsColorManagementApply();
	
	void EnableColorManagementApply();
	void DisableColorManagementApply();
	
	// Filename for input cms profile (e.g. input.icc) (XI_PRM_INPUT_CMS_PROFILE)
	
	void GetColorManagementInputProfile(char* buffer, int buffer_lenght);
	
	void SetColorManagementInputProfile(char* ColorManagementInputProfile);
	
	// Filename for output cms profile (e.g. input.icc) (XI_PRM_OUTPUT_CMS_PROFILE)
	
	void GetColorManagementOutputProfile(char* buffer, int buffer_lenght);
	
	void SetColorManagementOutputProfile(char* ColorManagementOutputProfile);
	
	// Returns 1 for color cameras. (XI_PRM_IMAGE_IS_COLOR)
	
	bool IsSensorColor();
	
	// Returns color filter array type of RAW data. (XI_PRM_COLOR_FILTER_ARRAY)
	XI_COLOR_FILTER_ARRAY GetSensorColorFilterArray();
	XI_COLOR_FILTER_ARRAY GetSensorColorFilterArray_Maximum();
	XI_COLOR_FILTER_ARRAY GetSensorColorFilterArray_Minimum();
	int GetSensorColorFilterArray_Increment();
	
	// Luminosity gamma (XI_PRM_GAMMAY)
	
	float GetGammaLuminosity();
	float GetGammaLuminosity_Maximum();
	float GetGammaLuminosity_Minimum();
	float GetGammaLuminosity_Increment();
	
	void SetGammaLuminosity(float GammaLuminosity);
	
	// Chromaticity gamma (XI_PRM_GAMMAC)
	
	float GetGammaChromaticity();
	float GetGammaChromaticity_Maximum();
	float GetGammaChromaticity_Minimum();
	float GetGammaChromaticity_Increment();
	
	void SetGammaChromaticity(float GammaChromaticity);
	
	// Sharpness Strenght (XI_PRM_SHARPNESS)
	
	float GetSharpness();
	float GetSharpness_Maximum();
	float GetSharpness_Minimum();
	float GetSharpness_Increment();
	
	void SetSharpness(float Sharpness);
	
	// Color Correction Matrix element [0][0] (XI_PRM_CC_MATRIX_00)
	
	float GetColorCorrectionMatrix00();
	float GetColorCorrectionMatrix00_Maximum();
	float GetColorCorrectionMatrix00_Minimum();
	float GetColorCorrectionMatrix00_Increment();
	
	void SetColorCorrectionMatrix00(float ColorCorrectionMatrix00);
	
	// Color Correction Matrix element [0][1] (XI_PRM_CC_MATRIX_01)
	
	float GetColorCorrectionMatrix01();
	float GetColorCorrectionMatrix01_Maximum();
	float GetColorCorrectionMatrix01_Minimum();
	float GetColorCorrectionMatrix01_Increment();
	
	void SetColorCorrectionMatrix01(float ColorCorrectionMatrix01);
	
	// Color Correction Matrix element [0][2] (XI_PRM_CC_MATRIX_02)
	
	float GetColorCorrectionMatrix02();
	float GetColorCorrectionMatrix02_Maximum();
	float GetColorCorrectionMatrix02_Minimum();
	float GetColorCorrectionMatrix02_Increment();
	
	void SetColorCorrectionMatrix02(float ColorCorrectionMatrix02);
	
	// Color Correction Matrix element [0][3] (XI_PRM_CC_MATRIX_03)
	
	float GetColorCorrectionMatrix03();
	float GetColorCorrectionMatrix03_Maximum();
	float GetColorCorrectionMatrix03_Minimum();
	float GetColorCorrectionMatrix03_Increment();
	
	void SetColorCorrectionMatrix03(float ColorCorrectionMatrix03);
	
	// Color Correction Matrix element [1][0] (XI_PRM_CC_MATRIX_10)
	
	float GetColorCorrectionMatrix10();
	float GetColorCorrectionMatrix10_Maximum();
	float GetColorCorrectionMatrix10_Minimum();
	float GetColorCorrectionMatrix10_Increment();
	
	void SetColorCorrectionMatrix10(float ColorCorrectionMatrix10);
	
	// Color Correction Matrix element [1][1] (XI_PRM_CC_MATRIX_11)
	
	float GetColorCorrectionMatrix11();
	float GetColorCorrectionMatrix11_Maximum();
	float GetColorCorrectionMatrix11_Minimum();
	float GetColorCorrectionMatrix11_Increment();
	
	void SetColorCorrectionMatrix11(float ColorCorrectionMatrix11);
	
	// Color Correction Matrix element [1][2] (XI_PRM_CC_MATRIX_12)
	
	float GetColorCorrectionMatrix12();
	float GetColorCorrectionMatrix12_Maximum();
	float GetColorCorrectionMatrix12_Minimum();
	float GetColorCorrectionMatrix12_Increment();
	
	void SetColorCorrectionMatrix12(float ColorCorrectionMatrix12);
	
	// Color Correction Matrix element [1][3] (XI_PRM_CC_MATRIX_13)
	
	float GetColorCorrectionMatrix13();
	float GetColorCorrectionMatrix13_Maximum();
	float GetColorCorrectionMatrix13_Minimum();
	float GetColorCorrectionMatrix13_Increment();
	
	void SetColorCorrectionMatrix13(float ColorCorrectionMatrix13);
	
	// Color Correction Matrix element [2][0] (XI_PRM_CC_MATRIX_20)
	
	float GetColorCorrectionMatrix20();
	float GetColorCorrectionMatrix20_Maximum();
	float GetColorCorrectionMatrix20_Minimum();
	float GetColorCorrectionMatrix20_Increment();
	
	void SetColorCorrectionMatrix20(float ColorCorrectionMatrix20);
	
	// Color Correction Matrix element [2][1] (XI_PRM_CC_MATRIX_21)
	
	float GetColorCorrectionMatrix21();
	float GetColorCorrectionMatrix21_Maximum();
	float GetColorCorrectionMatrix21_Minimum();
	float GetColorCorrectionMatrix21_Increment();
	
	void SetColorCorrectionMatrix21(float ColorCorrectionMatrix21);
	
	// Color Correction Matrix element [2][2] (XI_PRM_CC_MATRIX_22)
	
	float GetColorCorrectionMatrix22();
	float GetColorCorrectionMatrix22_Maximum();
	float GetColorCorrectionMatrix22_Minimum();
	float GetColorCorrectionMatrix22_Increment();
	
	void SetColorCorrectionMatrix22(float ColorCorrectionMatrix22);
	
	// Color Correction Matrix element [2][3] (XI_PRM_CC_MATRIX_23)
	
	float GetColorCorrectionMatrix23();
	float GetColorCorrectionMatrix23_Maximum();
	float GetColorCorrectionMatrix23_Minimum();
	float GetColorCorrectionMatrix23_Increment();
	
	void SetColorCorrectionMatrix23(float ColorCorrectionMatrix23);
	
	// Color Correction Matrix element [3][0] (XI_PRM_CC_MATRIX_30)
	
	float GetColorCorrectionMatrix30();
	float GetColorCorrectionMatrix30_Maximum();
	float GetColorCorrectionMatrix30_Minimum();
	float GetColorCorrectionMatrix30_Increment();
	
	void SetColorCorrectionMatrix30(float ColorCorrectionMatrix30);
	
	// Color Correction Matrix element [3][1] (XI_PRM_CC_MATRIX_31)
	
	float GetColorCorrectionMatrix31();
	float GetColorCorrectionMatrix31_Maximum();
	float GetColorCorrectionMatrix31_Minimum();
	float GetColorCorrectionMatrix31_Increment();
	
	void SetColorCorrectionMatrix31(float ColorCorrectionMatrix31);
	
	// Color Correction Matrix element [3][2] (XI_PRM_CC_MATRIX_32)
	
	float GetColorCorrectionMatrix32();
	float GetColorCorrectionMatrix32_Maximum();
	float GetColorCorrectionMatrix32_Minimum();
	float GetColorCorrectionMatrix32_Increment();
	
	void SetColorCorrectionMatrix32(float ColorCorrectionMatrix32);
	
	// Color Correction Matrix element [3][3] (XI_PRM_CC_MATRIX_33)
	
	float GetColorCorrectionMatrix33();
	float GetColorCorrectionMatrix33_Maximum();
	float GetColorCorrectionMatrix33_Minimum();
	float GetColorCorrectionMatrix33_Increment();
	
	void SetColorCorrectionMatrix33(float ColorCorrectionMatrix33);
	
	// Set default Color Correction Matrix (XI_PRM_DEFAULT_CC_MATRIX)
	
	void SetColorCorrectionMatrixDefault(int ColorCorrectionMatrixDefault);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device IO
	//-------------------------------------------------------------------------------------------------------------------

	
	// Defines source of trigger. (XI_PRM_TRG_SOURCE)
	XI_TRG_SOURCE GetTriggerSource();
	XI_TRG_SOURCE GetTriggerSource_Maximum();
	XI_TRG_SOURCE GetTriggerSource_Minimum();
	int GetTriggerSource_Increment();
	
	void SetTriggerSource(XI_TRG_SOURCE TriggerSource);
	
	// Generates an internal trigger. XI_PRM_TRG_SOURCE must be set to TRG_SOFTWARE. (XI_PRM_TRG_SOFTWARE)
	
	void SetTriggerSoftware(int TriggerSoftware);
	
	// Selects the type of trigger. (XI_PRM_TRG_SELECTOR)
	XI_TRG_SELECTOR GetTriggerSelector();
	XI_TRG_SELECTOR GetTriggerSelector_Maximum();
	XI_TRG_SELECTOR GetTriggerSelector_Minimum();
	int GetTriggerSelector_Increment();
	
	void SetTriggerSelector(XI_TRG_SELECTOR TriggerSelector);
	
	// Sets number of frames acquired by burst. This burst is used only if trigger is set to FrameBurstStart (XI_PRM_ACQ_FRAME_BURST_COUNT)
	
	int GetAcquisitionFrameBurstCount();
	int GetAcquisitionFrameBurstCount_Maximum();
	int GetAcquisitionFrameBurstCount_Minimum();
	int GetAcquisitionFrameBurstCount_Increment();
	void SetAcquisitionFrameBurstCount(int AcquisitionFrameBurstCount);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: GPIO Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selects GPI (XI_PRM_GPI_SELECTOR)
	XI_GPI_SELECTOR GetGPISelector();
	XI_GPI_SELECTOR GetGPISelector_Maximum();
	XI_GPI_SELECTOR GetGPISelector_Minimum();
	int GetGPISelector_Increment();
	
	void SetGPISelector(XI_GPI_SELECTOR GPISelector);
	
	// Defines GPI functionality (XI_PRM_GPI_MODE)
	XI_GPI_MODE GetGPIMode();
	XI_GPI_MODE GetGPIMode_Maximum();
	XI_GPI_MODE GetGPIMode_Minimum();
	int GetGPIMode_Increment();
	
	void SetGPIMode(XI_GPI_MODE GPIMode);
	
	// GPI level (XI_PRM_GPI_LEVEL)
	
	int GetGPILevel();
	int GetGPILevel_Maximum();
	int GetGPILevel_Minimum();
	int GetGPILevel_Increment();
	// Selects GPO (XI_PRM_GPO_SELECTOR)
	XI_GPO_SELECTOR GetGPOSelector();
	XI_GPO_SELECTOR GetGPOSelector_Maximum();
	XI_GPO_SELECTOR GetGPOSelector_Minimum();
	int GetGPOSelector_Increment();
	
	void SetGPOSelector(XI_GPO_SELECTOR GPOSelector);
	
	// Defines GPO functionality (XI_PRM_GPO_MODE)
	XI_GPO_MODE GetGPOMode();
	XI_GPO_MODE GetGPOMode_Maximum();
	XI_GPO_MODE GetGPOMode_Minimum();
	int GetGPOMode_Increment();
	
	void SetGPOMode(XI_GPO_MODE GPOMode);
	
	// Selects LED (XI_PRM_LED_SELECTOR)
	XI_LED_SELECTOR GetLEDSelector();
	XI_LED_SELECTOR GetLEDSelector_Maximum();
	XI_LED_SELECTOR GetLEDSelector_Minimum();
	int GetLEDSelector_Increment();
	
	void SetLEDSelector(XI_LED_SELECTOR LEDSelector);
	
	// Defines LED functionality (XI_PRM_LED_MODE)
	XI_LED_MODE GetLEDMode();
	XI_LED_MODE GetLEDMode_Maximum();
	XI_LED_MODE GetLEDMode_Minimum();
	int GetLEDMode_Increment();
	
	void SetLEDMode(XI_LED_MODE LEDMode);
	
	// Enable/Disable debounce to selected GPI (XI_PRM_DEBOUNCE_EN)
	
	bool IsGPIDebounce();
	
	void EnableGPIDebounce();
	void DisableGPIDebounce();
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Debounce Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Debounce time (x * 10us) (XI_PRM_DEBOUNCE_T0)
	
	int GetGPIDebounceFirstEdge();
	int GetGPIDebounceFirstEdge_Maximum();
	int GetGPIDebounceFirstEdge_Minimum();
	int GetGPIDebounceFirstEdge_Increment();
	void SetGPIDebounceFirstEdge(int GPIDebounceFirstEdge);
	
	// Debounce time (x * 10us) (XI_PRM_DEBOUNCE_T1)
	
	int GetGPIDebounceSecondEdge();
	int GetGPIDebounceSecondEdge_Maximum();
	int GetGPIDebounceSecondEdge_Minimum();
	int GetGPIDebounceSecondEdge_Increment();
	void SetGPIDebounceSecondEdge(int GPIDebounceSecondEdge);
	
	// Debounce polarity (pol = 1 t0 - falling edge, t1 - rising edge) (XI_PRM_DEBOUNCE_POL)
	
	int GetGPIDebouncePolarity();
	int GetGPIDebouncePolarity_Maximum();
	int GetGPIDebouncePolarity_Minimum();
	int GetGPIDebouncePolarity_Increment();
	void SetGPIDebouncePolarity(int GPIDebouncePolarity);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Lens Control
	//-------------------------------------------------------------------------------------------------------------------

	
	// Status of lens control interface. This shall be set to XI_ON before any Lens operations. (XI_PRM_LENS_MODE)
	
	bool IsLensMode();
	
	void EnableLensMode();
	void DisableLensMode();
	
	// Current lens aperture value in stops. Examples: 2.8, 4, 5.6, 8, 11 (XI_PRM_LENS_APERTURE_VALUE)
	
	float GetLensApertureValue();
	float GetLensApertureValue_Maximum();
	float GetLensApertureValue_Minimum();
	float GetLensApertureValue_Increment();
	
	void SetLensApertureValue(float LensApertureValue);
	
	// Lens current focus movement value to be used by XI_PRM_LENS_FOCUS_MOVE in motor steps. (XI_PRM_LENS_FOCUS_MOVEMENT_VALUE)
	
	int GetLensFocusMovementValue();
	int GetLensFocusMovementValue_Maximum();
	int GetLensFocusMovementValue_Minimum();
	int GetLensFocusMovementValue_Increment();
	void SetLensFocusMovementValue(int LensFocusMovementValue);
	
	// Moves lens focus motor by steps set in XI_PRM_LENS_FOCUS_MOVEMENT_VALUE. (XI_PRM_LENS_FOCUS_MOVE)
	
	void SetLensFocusMove(int LensFocusMove);
	
	// Lens focus distance in cm. (XI_PRM_LENS_FOCUS_DISTANCE)
	
	float GetLensFocusDistance();
	float GetLensFocusDistance_Maximum();
	float GetLensFocusDistance_Minimum();
	float GetLensFocusDistance_Increment();
	
	// Lens focal distance in mm. (XI_PRM_LENS_FOCAL_LENGTH)
	
	float GetLensFocalLength();
	float GetLensFocalLength_Maximum();
	float GetLensFocalLength_Minimum();
	float GetLensFocalLength_Increment();
	
	// Selects the current feature which is accessible by XI_PRM_LENS_FEATURE. (XI_PRM_LENS_FEATURE_SELECTOR)
	XI_LENS_FEATURE GetLensFeatureSelector();
	XI_LENS_FEATURE GetLensFeatureSelector_Maximum();
	XI_LENS_FEATURE GetLensFeatureSelector_Minimum();
	int GetLensFeatureSelector_Increment();
	
	void SetLensFeatureSelector(XI_LENS_FEATURE LensFeatureSelector);
	
	// Allows access to lens feature value currently selected by XI_PRM_LENS_FEATURE_SELECTOR. (XI_PRM_LENS_FEATURE)
	
	float GetLensFeature();
	float GetLensFeature_Maximum();
	float GetLensFeature_Minimum();
	float GetLensFeature_Increment();
	
	void SetLensFeature(float LensFeature);
	
	// Write/Read data sequences to/from lens (XI_PRM_LENS_COMM_DATA)
	
	void GetLensCommData(char* buffer, int buffer_lenght);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device info parameters
	//-------------------------------------------------------------------------------------------------------------------

	
	// Return device name (XI_PRM_DEVICE_NAME)
	
	void GetCameraName(char* buffer, int buffer_lenght);
	
	// Return device type (XI_PRM_DEVICE_TYPE)
	
	void GetCameraType(char* buffer, int buffer_lenght);
	
	// Return device model id (XI_PRM_DEVICE_MODEL_ID)
	
	int GetModelId();
	int GetModelId_Maximum();
	int GetModelId_Minimum();
	int GetModelId_Increment();
	// Return device sensor model id (XI_PRM_SENSOR_MODEL_ID)
	
	int GetSensorId();
	int GetSensorId_Maximum();
	int GetSensorId_Minimum();
	int GetSensorId_Increment();
	// Return device serial number (XI_PRM_DEVICE_SN)
	
	void GetSerialNumber(char* buffer, int buffer_lenght);
	
	// Return sensor serial number (XI_PRM_DEVICE_SENS_SN)
	
	void GetSensorSerialNumber(char* buffer, int buffer_lenght);
	
	// Return unique device ID (XI_PRM_DEVICE_ID)
	
	void GetDeviceId(char* buffer, int buffer_lenght);
	
	// Return device system instance path. (XI_PRM_DEVICE_INSTANCE_PATH)
	
	void GetDevicePath(char* buffer, int buffer_lenght);
	
	// Represents the location of the device in the device tree. (XI_PRM_DEVICE_LOCATION_PATH)
	
	void GetDeviceLocPath(char* buffer, int buffer_lenght);
	
	// Return custom ID of camera. (XI_PRM_DEVICE_USER_ID)
	
	void GetUserId(char* buffer, int buffer_lenght);
	
	// Return device capability description XML. (XI_PRM_DEVICE_MANIFEST)
	
	void GetDeviceManifest(char* buffer, int buffer_lenght);
	
	// User image data at image header to track parameters synchronization. (XI_PRM_IMAGE_USER_DATA)
	
	int GetImageUserData();
	int GetImageUserData_Maximum();
	int GetImageUserData_Minimum();
	int GetImageUserData_Increment();
	void SetImageUserData(int ImageUserData);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device acquisition settings
	//-------------------------------------------------------------------------------------------------------------------

	
	// The alpha channel of RGB32 output image format. (XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA)
	
	int GetImageDataFormatRGB32Alpha();
	int GetImageDataFormatRGB32Alpha_Maximum();
	int GetImageDataFormatRGB32Alpha_Minimum();
	int GetImageDataFormatRGB32Alpha_Increment();
	void SetImageDataFormatRGB32Alpha(int ImageDataFormatRGB32Alpha);
	
	// Buffer size in bytes sufficient for output image returned by xiGetImage (XI_PRM_IMAGE_PAYLOAD_SIZE)
	
	int GetImagePayloadSize();
	int GetImagePayloadSize_Maximum();
	int GetImagePayloadSize_Minimum();
	int GetImagePayloadSize_Increment();
	// Current format of pixels on transport layer. (XI_PRM_TRANSPORT_PIXEL_FORMAT)
	XI_GenTL_Image_Format_e GetTransportPixelFormat();
	XI_GenTL_Image_Format_e GetTransportPixelFormat_Maximum();
	XI_GenTL_Image_Format_e GetTransportPixelFormat_Minimum();
	int GetTransportPixelFormat_Increment();
	
	void SetTransportPixelFormat(XI_GenTL_Image_Format_e TransportPixelFormat);
	
	// Target selector for data - CPU RAM or GPU RAM (XI_PRM_TRANSPORT_DATA_TARGET)
	XI_TRANSPORT_DATA_TARGET_MODE GetTransportDataTarget();
	XI_TRANSPORT_DATA_TARGET_MODE GetTransportDataTarget_Maximum();
	XI_TRANSPORT_DATA_TARGET_MODE GetTransportDataTarget_Minimum();
	int GetTransportDataTarget_Increment();
	
	void SetTransportDataTarget(XI_TRANSPORT_DATA_TARGET_MODE TransportDataTarget);
	
	// Sensor clock frequency in Hz. (XI_PRM_SENSOR_CLOCK_FREQ_HZ)
	
	float GetSensorClockFrequencyHz();
	float GetSensorClockFrequencyHz_Maximum();
	float GetSensorClockFrequencyHz_Minimum();
	float GetSensorClockFrequencyHz_Increment();
	
	void SetSensorClockFrequencyHz(float SensorClockFrequencyHz);
	
	// Sensor clock frequency index. Sensor with selected frequencies have possibility to set the frequency only by this index. (XI_PRM_SENSOR_CLOCK_FREQ_INDEX)
	
	int GetSensorClockFrequencyIndex();
	int GetSensorClockFrequencyIndex_Maximum();
	int GetSensorClockFrequencyIndex_Minimum();
	int GetSensorClockFrequencyIndex_Increment();
	void SetSensorClockFrequencyIndex(int SensorClockFrequencyIndex);
	
	// Number of output channels from sensor used for data transfer. (XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT)
	XI_SENSOR_OUTPUT_CHANNEL_COUNT GetSensorOutputChannelCount();
	XI_SENSOR_OUTPUT_CHANNEL_COUNT GetSensorOutputChannelCount_Maximum();
	XI_SENSOR_OUTPUT_CHANNEL_COUNT GetSensorOutputChannelCount_Minimum();
	int GetSensorOutputChannelCount_Increment();
	
	void SetSensorOutputChannelCount(XI_SENSOR_OUTPUT_CHANNEL_COUNT SensorOutputChannelCount);
	
	// Define framerate in Hz (XI_PRM_FRAMERATE)
	
	float GetFrameRate();
	float GetFrameRate_Maximum();
	float GetFrameRate_Minimum();
	float GetFrameRate_Increment();
	
	void SetFrameRate(float FrameRate);
	
	// Select counter (XI_PRM_COUNTER_SELECTOR)
	XI_COUNTER_SELECTOR GetCounterSelector();
	XI_COUNTER_SELECTOR GetCounterSelector_Maximum();
	XI_COUNTER_SELECTOR GetCounterSelector_Minimum();
	int GetCounterSelector_Increment();
	
	void SetCounterSelector(XI_COUNTER_SELECTOR CounterSelector);
	
	// Counter status (XI_PRM_COUNTER_VALUE)
	
	int GetCounterValue();
	int GetCounterValue_Maximum();
	int GetCounterValue_Minimum();
	int GetCounterValue_Increment();
	// Type of sensor frames timing. (XI_PRM_ACQ_TIMING_MODE)
	XI_ACQ_TIMING_MODE GetAcquisitionTimingMode();
	XI_ACQ_TIMING_MODE GetAcquisitionTimingMode_Maximum();
	XI_ACQ_TIMING_MODE GetAcquisitionTimingMode_Minimum();
	int GetAcquisitionTimingMode_Increment();
	
	void SetAcquisitionTimingMode(XI_ACQ_TIMING_MODE AcquisitionTimingMode);
	
	// Measure and return available interface bandwidth(int Megabits) (XI_PRM_AVAILABLE_BANDWIDTH)
	
	int GetBandwidthAvailable();
	int GetBandwidthAvailable_Maximum();
	int GetBandwidthAvailable_Minimum();
	int GetBandwidthAvailable_Increment();
	// Data move policy (XI_PRM_BUFFER_POLICY)
	XI_BP GetBufferPolicy();
	XI_BP GetBufferPolicy_Maximum();
	XI_BP GetBufferPolicy_Minimum();
	int GetBufferPolicy_Increment();
	
	void SetBufferPolicy(XI_BP BufferPolicy);
	
	// Activates LUT. (XI_PRM_LUT_EN)
	
	bool IsLookUpTable();
	
	void EnableLookUpTable();
	void DisableLookUpTable();
	
	// Control the index (offset) of the coefficient to access in the LUT. (XI_PRM_LUT_INDEX)
	
	int GetLookUpTableIndex();
	int GetLookUpTableIndex_Maximum();
	int GetLookUpTableIndex_Minimum();
	int GetLookUpTableIndex_Increment();
	void SetLookUpTableIndex(int LookUpTableIndex);
	
	// Value at entry LUTIndex of the LUT (XI_PRM_LUT_VALUE)
	
	int GetLookUpTableValue();
	int GetLookUpTableValue_Maximum();
	int GetLookUpTableValue_Minimum();
	int GetLookUpTableValue_Increment();
	void SetLookUpTableValue(int LookUpTableValue);
	
	// Specifies the delay in microseconds (us) to apply after the trigger reception before activating it. (XI_PRM_TRG_DELAY)
	
	int GetTriggerDelay();
	int GetTriggerDelay_Maximum();
	int GetTriggerDelay_Minimum();
	int GetTriggerDelay_Increment();
	void SetTriggerDelay(int TriggerDelay);
	
	// Defines how time stamp reset engine will be armed (XI_PRM_TS_RST_MODE)
	XI_TS_RST_MODE GetTimeStampResetMode();
	XI_TS_RST_MODE GetTimeStampResetMode_Maximum();
	XI_TS_RST_MODE GetTimeStampResetMode_Minimum();
	int GetTimeStampResetMode_Increment();
	
	void SetTimeStampResetMode(XI_TS_RST_MODE TimeStampResetMode);
	
	// Defines which source will be used for timestamp reset. Writing this parameter will trigger settings of engine (arming) (XI_PRM_TS_RST_SOURCE)
	XI_TS_RST_SOURCE GetTimeStampResetSource();
	XI_TS_RST_SOURCE GetTimeStampResetSource_Maximum();
	XI_TS_RST_SOURCE GetTimeStampResetSource_Minimum();
	int GetTimeStampResetSource_Increment();
	
	void SetTimeStampResetSource(XI_TS_RST_SOURCE TimeStampResetSource);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Extended Device parameters
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns 1 if camera connected and works properly. (XI_PRM_IS_DEVICE_EXIST)
	
	bool IsExist();
	
	// Acquisition buffer size in buffer_size_unit. Default bytes. (XI_PRM_ACQ_BUFFER_SIZE)
	
	int GetAcquisitionBufferSizeBytes();
	int GetAcquisitionBufferSizeBytes_Maximum();
	int GetAcquisitionBufferSizeBytes_Minimum();
	int GetAcquisitionBufferSizeBytes_Increment();
	void SetAcquisitionBufferSizeBytes(int AcquisitionBufferSizeBytes);
	
	// Acquisition buffer size unit in bytes. Default 1. E.g. Value 1024 means that buffer_size is in KiBytes (XI_PRM_ACQ_BUFFER_SIZE_UNIT)
	
	int GetAcquisitionBufferSizeBytesUnit();
	int GetAcquisitionBufferSizeBytesUnit_Maximum();
	int GetAcquisitionBufferSizeBytesUnit_Minimum();
	int GetAcquisitionBufferSizeBytesUnit_Increment();
	void SetAcquisitionBufferSizeBytesUnit(int AcquisitionBufferSizeBytesUnit);
	
	// Acquisition transport buffer size in bytes (XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE)
	
	int GetAcquisitionTransportBufferSizeBytes();
	int GetAcquisitionTransportBufferSizeBytes_Maximum();
	int GetAcquisitionTransportBufferSizeBytes_Minimum();
	int GetAcquisitionTransportBufferSizeBytes_Increment();
	void SetAcquisitionTransportBufferSizeBytes(int AcquisitionTransportBufferSizeBytes);
	
	// Acquisition transport packet size in bytes (XI_PRM_ACQ_TRANSPORT_PACKET_SIZE)
	
	int GetAcquisitionTransportPacketSizeBytes();
	int GetAcquisitionTransportPacketSizeBytes_Maximum();
	int GetAcquisitionTransportPacketSizeBytes_Minimum();
	int GetAcquisitionTransportPacketSizeBytes_Increment();
	void SetAcquisitionTransportPacketSizeBytes(int AcquisitionTransportPacketSizeBytes);
	
	// Queue of field/frame buffers (XI_PRM_BUFFERS_QUEUE_SIZE)
	
	int GetAcquisitionQueueImagesCount();
	int GetAcquisitionQueueImagesCount_Maximum();
	int GetAcquisitionQueueImagesCount_Minimum();
	int GetAcquisitionQueueImagesCount_Increment();
	void SetAcquisitionQueueImagesCount(int AcquisitionQueueImagesCount);
	
	// Number of buffers to commit to low level (XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT)
	
	int GetAcquisitionTransportBufferCommit();
	int GetAcquisitionTransportBufferCommit_Maximum();
	int GetAcquisitionTransportBufferCommit_Minimum();
	int GetAcquisitionTransportBufferCommit_Increment();
	void SetAcquisitionTransportBufferCommit(int AcquisitionTransportBufferCommit);
	
	// GetImage returns most recent frame (XI_PRM_RECENT_FRAME)
	
	bool IsSelectRecentImage();
	
	void EnableSelectRecentImage();
	void DisableSelectRecentImage();
	
	// Resets the camera to default state. (XI_PRM_DEVICE_RESET)
	
	void SetDeviceReset(int DeviceReset);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor Defects Correction
	//-------------------------------------------------------------------------------------------------------------------

	
	// Correction of column FPN (XI_PRM_COLUMN_FPN_CORRECTION)
	XI_SWITCH GetColumnFpnCorrection();
	XI_SWITCH GetColumnFpnCorrection_Maximum();
	XI_SWITCH GetColumnFpnCorrection_Minimum();
	int GetColumnFpnCorrection_Increment();
	
	void SetColumnFpnCorrection(XI_SWITCH ColumnFpnCorrection);
	
	// Correction of row FPN (XI_PRM_ROW_FPN_CORRECTION)
	XI_SWITCH GetRowFpnCorrection();
	XI_SWITCH GetRowFpnCorrection_Maximum();
	XI_SWITCH GetRowFpnCorrection_Minimum();
	int GetRowFpnCorrection_Increment();
	
	void SetRowFpnCorrection(XI_SWITCH RowFpnCorrection);
	
	// Select image correction function (XI_PRM_IMAGE_CORRECTION_SELECTOR)
	XI_IMAGE_CORRECTION_SELECTOR GetImageCorrectionSelector();
	XI_IMAGE_CORRECTION_SELECTOR GetImageCorrectionSelector_Maximum();
	XI_IMAGE_CORRECTION_SELECTOR GetImageCorrectionSelector_Minimum();
	int GetImageCorrectionSelector_Increment();
	
	void SetImageCorrectionSelector(XI_IMAGE_CORRECTION_SELECTOR ImageCorrectionSelector);
	
	// Select image correction selected function value (XI_PRM_IMAGE_CORRECTION_VALUE)
	
	float GetImageCorrectionValue();
	float GetImageCorrectionValue_Maximum();
	float GetImageCorrectionValue_Minimum();
	float GetImageCorrectionValue_Increment();
	
	void SetImageCorrectionValue(float ImageCorrectionValue);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Current sensor mode. Allows to select sensor mode by one integer. Setting of this parameter affects: image dimensions and downsampling. (XI_PRM_SENSOR_MODE)
	XI_SENSOR_MODE GetSensorMode();
	XI_SENSOR_MODE GetSensorMode_Maximum();
	XI_SENSOR_MODE GetSensorMode_Minimum();
	int GetSensorMode_Increment();
	
	void SetSensorMode(XI_SENSOR_MODE SensorMode);
	
	// Enable High Dynamic Range feature. (XI_PRM_HDR)
	
	bool IsHDR();
	
	void EnableHDR();
	void DisableHDR();
	
	// The number of kneepoints in the PWLR. (XI_PRM_HDR_KNEEPOINT_COUNT)
	
	int GetHDR_KNEEPOINT_COUNT();
	int GetHDR_KNEEPOINT_COUNT_Maximum();
	int GetHDR_KNEEPOINT_COUNT_Minimum();
	int GetHDR_KNEEPOINT_COUNT_Increment();
	void SetHDR_KNEEPOINT_COUNT(int HDR_KNEEPOINT_COUNT);
	
	// position of first kneepoint(in % of XI_PRM_EXPOSURE) (XI_PRM_HDR_T1)
	
	int GetHDRTimeSlope1();
	int GetHDRTimeSlope1_Maximum();
	int GetHDRTimeSlope1_Minimum();
	int GetHDRTimeSlope1_Increment();
	void SetHDRTimeSlope1(int HDRTimeSlope1);
	
	// position of second kneepoint (in % of XI_PRM_EXPOSURE) (XI_PRM_HDR_T2)
	
	int GetHDRTimeSlope2();
	int GetHDRTimeSlope2_Maximum();
	int GetHDRTimeSlope2_Minimum();
	int GetHDRTimeSlope2_Increment();
	void SetHDRTimeSlope2(int HDRTimeSlope2);
	
	// value of first kneepoint (% of sensor saturation) (XI_PRM_KNEEPOINT1)
	
	int GetHDRKnee1Percent();
	int GetHDRKnee1Percent_Maximum();
	int GetHDRKnee1Percent_Minimum();
	int GetHDRKnee1Percent_Increment();
	void SetHDRKnee1Percent(int HDRKnee1Percent);
	
	// value of second kneepoint (% of sensor saturation) (XI_PRM_KNEEPOINT2)
	
	int GetHDRKnee2Percent();
	int GetHDRKnee2Percent_Maximum();
	int GetHDRKnee2Percent_Minimum();
	int GetHDRKnee2Percent_Increment();
	void SetHDRKnee2Percent(int HDRKnee2Percent);
	
	// Last image black level counts. Can be used for Offline processing to recall it. (XI_PRM_IMAGE_BLACK_LEVEL)
	
	int GetImageBlackLevel();
	int GetImageBlackLevel_Maximum();
	int GetImageBlackLevel_Minimum();
	int GetImageBlackLevel_Increment();
	void SetImageBlackLevel(int ImageBlackLevel);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Version info
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns version of API. (XI_PRM_API_VERSION)
	
	void GetVersionAPI(char* buffer, int buffer_lenght);
	
	// Returns version of current device driver. (XI_PRM_DRV_VERSION)
	
	void GetVersionDriver(char* buffer, int buffer_lenght);
	
	// Returns version of MCU1 firmware. (XI_PRM_MCU1_VERSION)
	
	void GetVersionMCU1(char* buffer, int buffer_lenght);
	
	// Returns version of MCU2 firmware. (XI_PRM_MCU2_VERSION)
	
	void GetVersionMCU2(char* buffer, int buffer_lenght);
	
	// Returns version of MCU3 firmware. (XI_PRM_MCU3_VERSION)
	
	void GetVersionMCU3(char* buffer, int buffer_lenght);
	
	// Returns version of FPGA1 firmware. (XI_PRM_FPGA1_VERSION)
	
	void GetVersionFPGA1(char* buffer, int buffer_lenght);
	
	// Returns version of XML manifest. (XI_PRM_XMLMAN_VERSION)
	
	void GetVersionXMLMAN(char* buffer, int buffer_lenght);
	
	// Returns hardware revision number. (XI_PRM_HW_REVISION)
	
	void GetHWRevision(char* buffer, int buffer_lenght);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: API features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Set debug level (XI_PRM_DEBUG_LEVEL)
	XI_DEBUG_LEVEL GetDebugLevel();
	XI_DEBUG_LEVEL GetDebugLevel_Maximum();
	XI_DEBUG_LEVEL GetDebugLevel_Minimum();
	int GetDebugLevel_Increment();
	
	void SetDebugLevel(XI_DEBUG_LEVEL DebugLevel);
	
	// Automatic bandwidth calculation, (XI_PRM_AUTO_BANDWIDTH_CALCULATION)
	
	bool IsAutoBandwidthCalculation();
	
	void EnableAutoBandwidthCalculation();
	void DisableAutoBandwidthCalculation();
	
	// Enables (2015/FAPI) processing chain for MQ MU cameras (XI_PRM_NEW_PROCESS_CHAIN_ENABLE)
	
	bool IsNewProcessChainEnable();
	
	void EnableNewProcessChainEnable();
	void DisableNewProcessChainEnable();
	
	// Enable enumeration of golden devices (XI_PRM_CAM_ENUM_GOLDEN_ENABLED)
	
	bool IsCamEnumGoldenEnabled();
	
	void EnableCamEnumGoldenEnabled();
	void DisableCamEnumGoldenEnabled();
	
	// Resets USB device if started as bootloader (XI_PRM_RESET_USB_IF_BOOTLOADER)
	
	bool IsResetUSBIfBootloader();
	
	void EnableResetUSBIfBootloader();
	void DisableResetUSBIfBootloader();
	
	// Number of camera simulators to be available. (XI_PRM_CAM_SIMULATORS_COUNT)
	
	int GetCameraSimulatorsCount();
	int GetCameraSimulatorsCount_Maximum();
	int GetCameraSimulatorsCount_Minimum();
	int GetCameraSimulatorsCount_Increment();
	void SetCameraSimulatorsCount(int CameraSimulatorsCount);
	
	// Camera sensor will not be initialized when 1=XI_ON is set. (XI_PRM_CAM_SENSOR_INIT_DISABLED)
	
	bool IsCameraSensorInitDisabled();
	
	void EnableCameraSensorInitDisabled();
	void DisableCameraSensorInitDisabled();
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Camera FFS
	//-------------------------------------------------------------------------------------------------------------------

	
	// Read file from camera flash filesystem. (XI_PRM_READ_FILE_FFS)
	
	void GetReadFileFFS(char* buffer, int buffer_lenght);
	
	// Write file to camera flash filesystem. (XI_PRM_WRITE_FILE_FFS)
	
	void GetWriteFileFFS(char* buffer, int buffer_lenght);
	
	void SetWriteFileFFS(char* WriteFileFFS);
	
	// Set name of file to be written/read from camera FFS. (XI_PRM_FFS_FILE_NAME)
	
	void GetFFSFileName(char* buffer, int buffer_lenght);
	
	void SetFFSFileName(char* FFSFileName);
	
	// File number. (XI_PRM_FFS_FILE_ID)
	
	int GetFFSFileId();
	int GetFFSFileId_Maximum();
	int GetFFSFileId_Minimum();
	int GetFFSFileId_Increment();
	// Size of file. (XI_PRM_FFS_FILE_SIZE)
	
	int GetFFSFileSize();
	int GetFFSFileSize_Maximum();
	int GetFFSFileSize_Minimum();
	int GetFFSFileSize_Increment();
	// Size of free camera FFS. (XI_PRM_FREE_FFS_SIZE)
	
	int GetFreeFFSSize();
	int GetFreeFFSSize_Maximum();
	int GetFreeFFSSize_Minimum();
	int GetFreeFFSSize_Increment();
	// Size of used camera FFS. (XI_PRM_USED_FFS_SIZE)
	
	int GetUsedFFSSize();
	int GetUsedFFSSize_Maximum();
	int GetUsedFFSSize_Minimum();
	int GetUsedFFSSize_Increment();
	// Setting of key enables file operations on some cameras. (XI_PRM_FFS_ACCESS_KEY)
	
	int GetFFSAccessKey();
	int GetFFSAccessKey_Maximum();
	int GetFFSAccessKey_Minimum();
	int GetFFSAccessKey_Increment();
	void SetFFSAccessKey(int FFSAccessKey);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: APIContextControl
	//-------------------------------------------------------------------------------------------------------------------

	
	// List of current parameters settings context - parameters with values. Used for offline processing. (XI_PRM_API_CONTEXT_LIST)
	
	void GetApiContextList(char* buffer, int buffer_lenght);
	
	void SetApiContextList(char* ApiContextList);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor Control
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selects the current feature which is accessible by XI_PRM_SENSOR_FEATURE_VALUE. (XI_PRM_SENSOR_FEATURE_SELECTOR)
	XI_SENSOR_FEATURE_SELECTOR GetSensorFeatureSelector();
	XI_SENSOR_FEATURE_SELECTOR GetSensorFeatureSelector_Maximum();
	XI_SENSOR_FEATURE_SELECTOR GetSensorFeatureSelector_Minimum();
	int GetSensorFeatureSelector_Increment();
	
	void SetSensorFeatureSelector(XI_SENSOR_FEATURE_SELECTOR SensorFeatureSelector);
	
	// Allows access to sensor feature value currently selected by XI_PRM_SENSOR_FEATURE_SELECTOR. (XI_PRM_SENSOR_FEATURE_VALUE)
	
	int GetSensorFeatureValue();
	int GetSensorFeatureValue_Maximum();
	int GetSensorFeatureValue_Minimum();
	int GetSensorFeatureValue_Increment();
	void SetSensorFeatureValue(int SensorFeatureValue);
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Extended Features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selection of extended feature. (XI_PRM_EXTENDED_FEATURE_SELECTOR)
	XI_EXT_FEATURE_SELECTOR GetExtendedFeatureSelector();
	XI_EXT_FEATURE_SELECTOR GetExtendedFeatureSelector_Maximum();
	XI_EXT_FEATURE_SELECTOR GetExtendedFeatureSelector_Minimum();
	int GetExtendedFeatureSelector_Increment();
	
	void SetExtendedFeatureSelector(XI_EXT_FEATURE_SELECTOR ExtendedFeatureSelector);
	
	// Extended feature value. (XI_PRM_EXTENDED_FEATURE)
	
	int GetExtendedFeature();
	int GetExtendedFeature_Maximum();
	int GetExtendedFeature_Minimum();
	int GetExtendedFeature_Increment();
	void SetExtendedFeature(int ExtendedFeature);
	
	// Selects device unit. (XI_PRM_DEVICE_UNIT_SELECTOR)
	XI_DEVICE_UNIT_SELECTOR GetDeviceUnitSelector();
	XI_DEVICE_UNIT_SELECTOR GetDeviceUnitSelector_Maximum();
	XI_DEVICE_UNIT_SELECTOR GetDeviceUnitSelector_Minimum();
	int GetDeviceUnitSelector_Increment();
	
	void SetDeviceUnitSelector(XI_DEVICE_UNIT_SELECTOR DeviceUnitSelector);
	
	// Selects register of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). (XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR)
	
	int GetDeviceUnitRegisterSelector();
	int GetDeviceUnitRegisterSelector_Maximum();
	int GetDeviceUnitRegisterSelector_Minimum();
	int GetDeviceUnitRegisterSelector_Increment();
	void SetDeviceUnitRegisterSelector(int DeviceUnitRegisterSelector);
	
	// Sets/gets register value of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). (XI_PRM_DEVICE_UNIT_REGISTER_VALUE)
	
	int GetDeviceUnitRegister();
	int GetDeviceUnitRegister_Maximum();
	int GetDeviceUnitRegister_Minimum();
	int GetDeviceUnitRegister_Increment();
	void SetDeviceUnitRegister(int DeviceUnitRegister);
	
	// Callback address of pointer that is called upon long tasks (e.g. XI_PRM_WRITE_FILE_FFS). (XI_PRM_API_PROGRESS_CALLBACK)
	
	void GetApiProgressCallback(char* buffer, int buffer_lenght);
	
	void SetApiProgressCallback(char* ApiProgressCallback);
	
	// Selects the internal acquisition signal to read using XI_PRM_ACQUISITION_STATUS. (XI_PRM_ACQUISITION_STATUS_SELECTOR)
	XI_ACQUISITION_STATUS_SELECTOR GetAcquisitionStatusSelector();
	XI_ACQUISITION_STATUS_SELECTOR GetAcquisitionStatusSelector_Maximum();
	XI_ACQUISITION_STATUS_SELECTOR GetAcquisitionStatusSelector_Minimum();
	int GetAcquisitionStatusSelector_Increment();
	
	void SetAcquisitionStatusSelector(XI_ACQUISITION_STATUS_SELECTOR AcquisitionStatusSelector);
	
	// Acquisition status(True/False) (XI_PRM_ACQUISITION_STATUS)
	XI_SWITCH GetAcquisitionStatus();
	XI_SWITCH GetAcquisitionStatus_Maximum();
	XI_SWITCH GetAcquisitionStatus_Minimum();
	int GetAcquisitionStatus_Increment();
	


private:
	// internal
	void CheckResult(XI_RETURN res,const char* location);
	void CheckResultParam(XI_RETURN res, const char* location, const char* param);
private:
	HANDLE camera_handle;
	xiAPIplus_Camera_Parameters parameters;
	int image_timeout_ms;
	xiAPIplus_Image last_image;
	bool acquisition_active;
	bool is_debug_enabled;
};

// -----------------------------------------------
// class xiAPIplus - ImageProcessing
// -----------------------------------------------

class xiAPIplus_ImageProcessing
{
public:
	xiAPIplus_ImageProcessing();
	~xiAPIplus_ImageProcessing();

	/**
	* xiSetProcParam
	* Sets the selected parameter to processing
	* @param[in] prm						parameter name string.
	* @param[in] val						pointer to parameter set value.
	* @param[in] size						size of val.
	* @param[in] type						val data type.
	* @return XI_OK on success, error value otherwise.
	*/
	void SetParam(const char* prm, void* val, DWORD size, XI_PRM_TYPE type);

	/**
	* PushImage
	* Set unprocessed image to processing chain
	* @param[in] First byte of first pixel of image to be processed
	*/
	void PushImage(unsigned char* first_pixel);

	/**
	* PullImage
	* Pulls processed image from processing chain into last_image_
	*/

	void PullImage();

	/**
	* GetImage
	* Returns point to last processed image 
	* @return pointer to last_image_ (xiAPIplus_Image) 
	*/
	void GetImage(xiAPIplus_Image* ret_image);


	void CheckResult(XI_RETURN res, const char* location);
private:
	xiProcessingHandle_t processing_handle_; //!< Handle for current processing context
	xiAPIplus_Image      last_image_;        //!< last image get by PullImage
};


class xiAPIplusCameraOcv : public xiAPIplus_Camera
{
public:
	/**
	* Initialize the xiAPIplusCameraOcv class.
	*/	
	xiAPIplusCameraOcv();
	/**
	* Class destructor. Free allocated memory, release images
	*/
	virtual ~xiAPIplusCameraOcv();
	/**
	* Reads an image from the camera using XiAPI, stores the image in OpenCV format.
	* @return OpenCV IpliImage* image. 
	*/
	IplImage *	GetNextImageOcvIpl(); //Reads and image and converts it to OpenCV IplImage
	/**
	* Reads an image from the camera using XiAPI, stores the image in OpenCV Mat format.
	* @return OpenCV Mat image. 
	*/
	cv::Mat			GetNextImageOcvMat(); //Reads and image and converts it to OpenCV Mat
	/**
	* Converts a XiAPI image (xiAPIplus_Image*) to OpenCV IplImage *.
	* @param input_image[in] Input xiAPIplus_Image* to be converted.
	* @return converted OpenCV IpliImage* image. 
	*/
	IplImage *	ConvertOcvIpl(xiAPIplus_Image * input_image); //Converts an image to OpenCV IplImage
	/**
	* Converts a XiAPI image (xiAPIplus_Image*) to OpenCV Mat.
	* @param input_image[in] Input xiAPIplus_Image* to be converted.
	* @return converted OpenCV IpliImage* image. 
	*/
	cv::Mat			ConvertOcvMat(xiAPIplus_Image * input_image); //Converts an image to OpenCV Mat
	//virtual xiAPIplusCameraOcv& operator >> (CV_OUT Mat& input_image);
    
    private:
	
	/**
	* Resets the Opencv image if properties of XI_IMG have changed. Resets the cv_image_.
	*/
    void resetCvImage_();				//Resets the OpenCV image properties if XI_IMG format has changed
	IplImage *			cv_image_; 
	cv::Mat 				cv_mat_image_;
	xiAPIplus_Image *	next_image_;      
	int					timeout_;
	int				counter_;
	int				index_;

	
};

