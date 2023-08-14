#include"xiApiPlusOcv.hpp"

//-------------------------------------------------------------------------------------------------------------------
// xiAPIplus parameters implementation file - created from gen_xiAPIplus_cpp_file.xslt
// XIMEA Application Programming Interface Object Oriented Approach
//-------------------------------------------------------------------------------------------------------------------


//#include <xiAPIplus/xiapiplus.h>

	//-------------------------------------------------------------------------------------------------------------------
	// xiApi parameters


	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Basic
	//-------------------------------------------------------------------------------------------------------------------

	
	// Exposure time in microseconds (XI_PRM_EXPOSURE)
	int xiAPIplus_Camera::GetExposureTime()
	{
		int val=0;
		
		CheckCamHandle("GetExposureTime");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE, &val);
		CheckResult(res,"GetExposureTime");
		return val;
	}
	
	int xiAPIplus_Camera::GetExposureTime_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetExposureTime" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetExposureTime" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetExposureTime_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetExposureTime" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetExposureTime" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetExposureTime_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetExposureTime" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetExposureTime" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetExposureTime(int ExposureTime)
	{
		
		CheckCamHandleInt("SetExposureTime",ExposureTime);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_EXPOSURE, ExposureTime);
		CheckResult(res,"SetExposureTime");
	}
	
	// Sets the number of times of exposure in one frame. (XI_PRM_EXPOSURE_BURST_COUNT)
	int xiAPIplus_Camera::GetExposureBurstCount()
	{
		int val=0;
		
		CheckCamHandle("GetExposureBurstCount");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE_BURST_COUNT, &val);
		CheckResult(res,"GetExposureBurstCount");
		return val;
	}
	
	int xiAPIplus_Camera::GetExposureBurstCount_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetExposureBurstCount" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE_BURST_COUNT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetExposureBurstCount" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetExposureBurstCount_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetExposureBurstCount" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE_BURST_COUNT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetExposureBurstCount" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetExposureBurstCount_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetExposureBurstCount" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXPOSURE_BURST_COUNT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetExposureBurstCount" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetExposureBurstCount(int ExposureBurstCount)
	{
		
		CheckCamHandleInt("SetExposureBurstCount",ExposureBurstCount);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_EXPOSURE_BURST_COUNT, ExposureBurstCount);
		CheckResult(res,"SetExposureBurstCount");
	}
	
	// Gain selector for parameter Gain allows to select different type of gains. (XI_PRM_GAIN_SELECTOR)
	XI_GAIN_SELECTOR_TYPE xiAPIplus_Camera::GetGainSelector()
	{
		int val=0;
		
		CheckCamHandle("GetGainSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GAIN_SELECTOR, &val);
		CheckResult(res,"GetGainSelector");
		return (XI_GAIN_SELECTOR_TYPE)val;
	}
	
	XI_GAIN_SELECTOR_TYPE xiAPIplus_Camera::GetGainSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGainSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GAIN_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGainSelector" "_Maximum");
		return (XI_GAIN_SELECTOR_TYPE)val;
	}
	
	XI_GAIN_SELECTOR_TYPE xiAPIplus_Camera::GetGainSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGainSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GAIN_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGainSelector" "_Minimum");
		return (XI_GAIN_SELECTOR_TYPE)val;
	}
	
	int xiAPIplus_Camera::GetGainSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGainSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GAIN_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGainSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGainSelector(XI_GAIN_SELECTOR_TYPE GainSelector)
	{
		
		CheckCamHandleInt("SetGainSelector",(int)GainSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_GAIN_SELECTOR, GainSelector);
		CheckResult(res,"SetGainSelector");
	}
	
	// Gain in dB (XI_PRM_GAIN)
	float xiAPIplus_Camera::GetGain()
	{
		float val=0;
		
		CheckCamHandle("GetGain");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAIN, &val);
		CheckResult(res,"GetGain");
		return val;
	}

	float xiAPIplus_Camera::GetGain_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetGain" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAIN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGain" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetGain_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetGain" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAIN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGain" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetGain_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetGain" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAIN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGain" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGain(float Gain)
	{
		
		CheckCamHandle("SetGain");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_GAIN, Gain);
		CheckResult(res,"SetGain");
	}
	
	// Change image resolution by binning or skipping. (XI_PRM_DOWNSAMPLING)
	XI_DOWNSAMPLING_VALUE xiAPIplus_Camera::GetDownsampling()
	{
		int val=0;
		
		CheckCamHandle("GetDownsampling");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING, &val);
		CheckResult(res,"GetDownsampling");
		return (XI_DOWNSAMPLING_VALUE)val;
	}
	
	XI_DOWNSAMPLING_VALUE xiAPIplus_Camera::GetDownsampling_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDownsampling" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDownsampling" "_Maximum");
		return (XI_DOWNSAMPLING_VALUE)val;
	}
	
	XI_DOWNSAMPLING_VALUE xiAPIplus_Camera::GetDownsampling_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDownsampling" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDownsampling" "_Minimum");
		return (XI_DOWNSAMPLING_VALUE)val;
	}
	
	int xiAPIplus_Camera::GetDownsampling_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDownsampling" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDownsampling" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDownsampling(XI_DOWNSAMPLING_VALUE Downsampling)
	{
		
		CheckCamHandleInt("SetDownsampling",(int)Downsampling);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DOWNSAMPLING, Downsampling);
		CheckResult(res,"SetDownsampling");
	}
	
	// Change image downsampling type. (XI_PRM_DOWNSAMPLING_TYPE)
	XI_DOWNSAMPLING_TYPE xiAPIplus_Camera::GetDownsamplingType()
	{
		int val=0;
		
		CheckCamHandle("GetDownsamplingType");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING_TYPE, &val);
		CheckResult(res,"GetDownsamplingType");
		return (XI_DOWNSAMPLING_TYPE)val;
	}
	
	XI_DOWNSAMPLING_TYPE xiAPIplus_Camera::GetDownsamplingType_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDownsamplingType" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING_TYPE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDownsamplingType" "_Maximum");
		return (XI_DOWNSAMPLING_TYPE)val;
	}
	
	XI_DOWNSAMPLING_TYPE xiAPIplus_Camera::GetDownsamplingType_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDownsamplingType" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING_TYPE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDownsamplingType" "_Minimum");
		return (XI_DOWNSAMPLING_TYPE)val;
	}
	
	int xiAPIplus_Camera::GetDownsamplingType_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDownsamplingType" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DOWNSAMPLING_TYPE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDownsamplingType" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDownsamplingType(XI_DOWNSAMPLING_TYPE DownsamplingType)
	{
		
		CheckCamHandleInt("SetDownsamplingType",(int)DownsamplingType);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DOWNSAMPLING_TYPE, DownsamplingType);
		CheckResult(res,"SetDownsamplingType");
	}
	
	// Selects which test pattern generator is controlled by the TestPattern feature. (XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR)
	XI_TEST_PATTERN_GENERATOR xiAPIplus_Camera::GetTestPatternGeneratorSelector()
	{
		int val=0;
		
		CheckCamHandle("GetTestPatternGeneratorSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR, &val);
		CheckResult(res,"GetTestPatternGeneratorSelector");
		return (XI_TEST_PATTERN_GENERATOR)val;
	}
	
	XI_TEST_PATTERN_GENERATOR xiAPIplus_Camera::GetTestPatternGeneratorSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTestPatternGeneratorSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTestPatternGeneratorSelector" "_Maximum");
		return (XI_TEST_PATTERN_GENERATOR)val;
	}
	
	XI_TEST_PATTERN_GENERATOR xiAPIplus_Camera::GetTestPatternGeneratorSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTestPatternGeneratorSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTestPatternGeneratorSelector" "_Minimum");
		return (XI_TEST_PATTERN_GENERATOR)val;
	}
	
	int xiAPIplus_Camera::GetTestPatternGeneratorSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTestPatternGeneratorSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTestPatternGeneratorSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTestPatternGeneratorSelector(XI_TEST_PATTERN_GENERATOR TestPatternGeneratorSelector)
	{
		
		CheckCamHandleInt("SetTestPatternGeneratorSelector",(int)TestPatternGeneratorSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TEST_PATTERN_GENERATOR_SELECTOR, TestPatternGeneratorSelector);
		CheckResult(res,"SetTestPatternGeneratorSelector");
	}
	
	// Selects which test pattern type is generated by the selected generator. (XI_PRM_TEST_PATTERN)
	XI_TEST_PATTERN xiAPIplus_Camera::GetTestPattern()
	{
		int val=0;
		
		CheckCamHandle("GetTestPattern");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN, &val);
		CheckResult(res,"GetTestPattern");
		return (XI_TEST_PATTERN)val;
	}
	
	XI_TEST_PATTERN xiAPIplus_Camera::GetTestPattern_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTestPattern" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTestPattern" "_Maximum");
		return (XI_TEST_PATTERN)val;
	}
	
	XI_TEST_PATTERN xiAPIplus_Camera::GetTestPattern_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTestPattern" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTestPattern" "_Minimum");
		return (XI_TEST_PATTERN)val;
	}
	
	int xiAPIplus_Camera::GetTestPattern_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTestPattern" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEST_PATTERN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTestPattern" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTestPattern(XI_TEST_PATTERN TestPattern)
	{
		
		CheckCamHandleInt("SetTestPattern",(int)TestPattern);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TEST_PATTERN, TestPattern);
		CheckResult(res,"SetTestPattern");
	}
	
	// Output data format. (XI_PRM_IMAGE_DATA_FORMAT)
	XI_IMG_FORMAT xiAPIplus_Camera::GetImageDataFormat()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormat");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT, &val);
		CheckResult(res,"GetImageDataFormat");
		return (XI_IMG_FORMAT)val;
	}
	
	XI_IMG_FORMAT xiAPIplus_Camera::GetImageDataFormat_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormat" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageDataFormat" "_Maximum");
		return (XI_IMG_FORMAT)val;
	}
	
	XI_IMG_FORMAT xiAPIplus_Camera::GetImageDataFormat_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormat" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageDataFormat" "_Minimum");
		return (XI_IMG_FORMAT)val;
	}
	
	int xiAPIplus_Camera::GetImageDataFormat_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormat" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageDataFormat" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageDataFormat(XI_IMG_FORMAT ImageDataFormat)
	{
		
		CheckCamHandleInt("SetImageDataFormat",(int)ImageDataFormat);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT, ImageDataFormat);
		CheckResult(res,"SetImageDataFormat");
	}
	
	// Change sensor shutter type(CMOS sensor). (XI_PRM_SHUTTER_TYPE)
	XI_SHUTTER_TYPE xiAPIplus_Camera::GetShutterType()
	{
		int val=0;
		
		CheckCamHandle("GetShutterType");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SHUTTER_TYPE, &val);
		CheckResult(res,"GetShutterType");
		return (XI_SHUTTER_TYPE)val;
	}
	
	XI_SHUTTER_TYPE xiAPIplus_Camera::GetShutterType_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetShutterType" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SHUTTER_TYPE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetShutterType" "_Maximum");
		return (XI_SHUTTER_TYPE)val;
	}
	
	XI_SHUTTER_TYPE xiAPIplus_Camera::GetShutterType_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetShutterType" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SHUTTER_TYPE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetShutterType" "_Minimum");
		return (XI_SHUTTER_TYPE)val;
	}
	
	int xiAPIplus_Camera::GetShutterType_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetShutterType" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SHUTTER_TYPE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetShutterType" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetShutterType(XI_SHUTTER_TYPE ShutterType)
	{
		
		CheckCamHandleInt("SetShutterType",(int)ShutterType);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SHUTTER_TYPE, ShutterType);
		CheckResult(res,"SetShutterType");
	}
	
	// Number of taps (XI_PRM_SENSOR_TAPS)
	XI_SENSOR_TAP_CNT xiAPIplus_Camera::GetSensorTaps()
	{
		int val=0;
		
		CheckCamHandle("GetSensorTaps");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_TAPS, &val);
		CheckResult(res,"GetSensorTaps");
		return (XI_SENSOR_TAP_CNT)val;
	}
	
	XI_SENSOR_TAP_CNT xiAPIplus_Camera::GetSensorTaps_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorTaps" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_TAPS XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorTaps" "_Maximum");
		return (XI_SENSOR_TAP_CNT)val;
	}
	
	XI_SENSOR_TAP_CNT xiAPIplus_Camera::GetSensorTaps_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorTaps" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_TAPS XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorTaps" "_Minimum");
		return (XI_SENSOR_TAP_CNT)val;
	}
	
	int xiAPIplus_Camera::GetSensorTaps_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorTaps" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_TAPS XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorTaps" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorTaps(XI_SENSOR_TAP_CNT SensorTaps)
	{
		
		CheckCamHandleInt("SetSensorTaps",(int)SensorTaps);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_TAPS, SensorTaps);
		CheckResult(res,"SetSensorTaps");
	}
	
	// Automatic exposure/gain (XI_PRM_AEAG)
	bool xiAPIplus_Camera::IsAutoExposureAutoGain()
	{
		int val=0;
		
		CheckCamHandle("IsAutoExposureAutoGain");
		
		xiGetParamInt(camera_handle, XI_PRM_AEAG, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableAutoExposureAutoGain()
	{
		
		CheckCamHandle("IsAutoExposureAutoGain");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG, XI_ON);
		CheckResult(res,"EnableAutoExposureAutoGain");
	}

	void xiAPIplus_Camera::DisableAutoExposureAutoGain()
	{
		
		CheckCamHandle("DisableAutoExposureAutoGain");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG, XI_OFF);
		CheckResult(res,"DisableAutoExposureAutoGain");
	}	
	
	// Automatic exposure/gain ROI offset X (XI_PRM_AEAG_ROI_OFFSET_X)
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetX()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetX");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_X, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetX");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetX_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetX" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_X XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetX" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetX_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetX" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_X XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetX" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetX_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetX" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_X XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetX" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainROIoffsetX(int AutoExposureAutoGainROIoffsetX)
	{
		
		CheckCamHandleInt("SetAutoExposureAutoGainROIoffsetX",AutoExposureAutoGainROIoffsetX);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_X, AutoExposureAutoGainROIoffsetX);
		CheckResult(res,"SetAutoExposureAutoGainROIoffsetX");
	}
	
	// Automatic exposure/gain ROI offset Y (XI_PRM_AEAG_ROI_OFFSET_Y)
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetY()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetY");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_Y, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetY");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetY_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetY" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_Y XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetY" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetY_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetY" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_Y XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetY" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureAutoGainROIoffsetY_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIoffsetY" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_Y XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIoffsetY" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainROIoffsetY(int AutoExposureAutoGainROIoffsetY)
	{
		
		CheckCamHandleInt("SetAutoExposureAutoGainROIoffsetY",AutoExposureAutoGainROIoffsetY);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG_ROI_OFFSET_Y, AutoExposureAutoGainROIoffsetY);
		CheckResult(res,"SetAutoExposureAutoGainROIoffsetY");
	}
	
	// Automatic exposure/gain ROI Width (XI_PRM_AEAG_ROI_WIDTH)
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIWidth()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIWidth");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_WIDTH, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIWidth");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIWidth_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIWidth" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_WIDTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIWidth" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIWidth_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIWidth" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_WIDTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIWidth" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureAutoGainROIWidth_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIWidth" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_WIDTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIWidth" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainROIWidth(int AutoExposureAutoGainROIWidth)
	{
		
		CheckCamHandleInt("SetAutoExposureAutoGainROIWidth",AutoExposureAutoGainROIWidth);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG_ROI_WIDTH, AutoExposureAutoGainROIWidth);
		CheckResult(res,"SetAutoExposureAutoGainROIWidth");
	}
	
	// Automatic exposure/gain ROI Height (XI_PRM_AEAG_ROI_HEIGHT)
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIHeight()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIHeight");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_HEIGHT, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIHeight");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIHeight_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIHeight" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_HEIGHT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIHeight" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainROIHeight_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIHeight" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_HEIGHT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIHeight" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureAutoGainROIHeight_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainROIHeight" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_ROI_HEIGHT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainROIHeight" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainROIHeight(int AutoExposureAutoGainROIHeight)
	{
		
		CheckCamHandleInt("SetAutoExposureAutoGainROIHeight",AutoExposureAutoGainROIHeight);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG_ROI_HEIGHT, AutoExposureAutoGainROIHeight);
		CheckResult(res,"SetAutoExposureAutoGainROIHeight");
	}
	
	// Selector of list used by Sensor Defects Correction parameter (XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR)
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR xiAPIplus_Camera::GetSensorDefectsCorrectionListSelector()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDefectsCorrectionListSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR, &val);
		CheckResult(res,"GetSensorDefectsCorrectionListSelector");
		return (XI_SENS_DEFFECTS_CORR_LIST_SELECTOR)val;
	}
	
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR xiAPIplus_Camera::GetSensorDefectsCorrectionListSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDefectsCorrectionListSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorDefectsCorrectionListSelector" "_Maximum");
		return (XI_SENS_DEFFECTS_CORR_LIST_SELECTOR)val;
	}
	
	XI_SENS_DEFFECTS_CORR_LIST_SELECTOR xiAPIplus_Camera::GetSensorDefectsCorrectionListSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDefectsCorrectionListSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorDefectsCorrectionListSelector" "_Minimum");
		return (XI_SENS_DEFFECTS_CORR_LIST_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetSensorDefectsCorrectionListSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDefectsCorrectionListSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorDefectsCorrectionListSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorDefectsCorrectionListSelector(XI_SENS_DEFFECTS_CORR_LIST_SELECTOR SensorDefectsCorrectionListSelector)
	{
		
		CheckCamHandleInt("SetSensorDefectsCorrectionListSelector",(int)SensorDefectsCorrectionListSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_SELECTOR, SensorDefectsCorrectionListSelector);
		CheckResult(res,"SetSensorDefectsCorrectionListSelector");
	}
	
	// Sets/Gets sensor defects list in special text format (XI_PRM_SENS_DEFECTS_CORR_LIST_CONTENT)
	void xiAPIplus_Camera::GetSensDefectsCorrListContent(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_CONTENT, buffer, buffer_length);
		CheckResult(res,"GetSensDefectsCorrListContent");
	}
	
	void xiAPIplus_Camera::SetSensDefectsCorrListContent(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_SENS_DEFECTS_CORR_LIST_CONTENT, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetSensDefectsCorrListContent");
	}
	
	// Correction of sensor defects (pixels, columns, rows) enable/disable (XI_PRM_SENS_DEFECTS_CORR)
	bool xiAPIplus_Camera::IsSensorDefectsCorrection()
	{
		int val=0;
		
		CheckCamHandle("IsSensorDefectsCorrection");
		
		xiGetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableSensorDefectsCorrection()
	{
		
		CheckCamHandle("IsSensorDefectsCorrection");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR, XI_ON);
		CheckResult(res,"EnableSensorDefectsCorrection");
	}

	void xiAPIplus_Camera::DisableSensorDefectsCorrection()
	{
		
		CheckCamHandle("DisableSensorDefectsCorrection");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENS_DEFECTS_CORR, XI_OFF);
		CheckResult(res,"DisableSensorDefectsCorrection");
	}	
	
	// Automatic white balance (XI_PRM_AUTO_WB)
	bool xiAPIplus_Camera::IsWhiteBalanceAuto()
	{
		int val=0;
		
		CheckCamHandle("IsWhiteBalanceAuto");
		
		xiGetParamInt(camera_handle, XI_PRM_AUTO_WB, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableWhiteBalanceAuto()
	{
		
		CheckCamHandle("IsWhiteBalanceAuto");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AUTO_WB, XI_ON);
		CheckResult(res,"EnableWhiteBalanceAuto");
	}

	void xiAPIplus_Camera::DisableWhiteBalanceAuto()
	{
		
		CheckCamHandle("DisableWhiteBalanceAuto");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AUTO_WB, XI_OFF);
		CheckResult(res,"DisableWhiteBalanceAuto");
	}	
	
	// Calculates White Balance(xiGetImage function must be called) (XI_PRM_MANUAL_WB)
	void xiAPIplus_Camera::SetWhiteBalanceManualNow(int WhiteBalanceManualNow)
	{
		
		CheckCamHandleInt("SetWhiteBalanceManualNow",WhiteBalanceManualNow);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_MANUAL_WB, WhiteBalanceManualNow);
		CheckResult(res,"SetWhiteBalanceManualNow");
	}
	
	// White balance red coefficient (XI_PRM_WB_KR)
	float xiAPIplus_Camera::GetWhiteBalanceRed()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceRed");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KR, &val);
		CheckResult(res,"GetWhiteBalanceRed");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceRed_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceRed" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetWhiteBalanceRed" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceRed_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceRed" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetWhiteBalanceRed" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceRed_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceRed" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetWhiteBalanceRed" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetWhiteBalanceRed(float WhiteBalanceRed)
	{
		
		CheckCamHandle("SetWhiteBalanceRed");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_WB_KR, WhiteBalanceRed);
		CheckResult(res,"SetWhiteBalanceRed");
	}
	
	// White balance green coefficient (XI_PRM_WB_KG)
	float xiAPIplus_Camera::GetWhiteBalanceGreen()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceGreen");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KG, &val);
		CheckResult(res,"GetWhiteBalanceGreen");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceGreen_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceGreen" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KG XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetWhiteBalanceGreen" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceGreen_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceGreen" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KG XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetWhiteBalanceGreen" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceGreen_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceGreen" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KG XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetWhiteBalanceGreen" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetWhiteBalanceGreen(float WhiteBalanceGreen)
	{
		
		CheckCamHandle("SetWhiteBalanceGreen");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_WB_KG, WhiteBalanceGreen);
		CheckResult(res,"SetWhiteBalanceGreen");
	}
	
	// White balance blue coefficient (XI_PRM_WB_KB)
	float xiAPIplus_Camera::GetWhiteBalanceBlue()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceBlue");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KB, &val);
		CheckResult(res,"GetWhiteBalanceBlue");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceBlue_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceBlue" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KB XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetWhiteBalanceBlue" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceBlue_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceBlue" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KB XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetWhiteBalanceBlue" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetWhiteBalanceBlue_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetWhiteBalanceBlue" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_WB_KB XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetWhiteBalanceBlue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetWhiteBalanceBlue(float WhiteBalanceBlue)
	{
		
		CheckCamHandle("SetWhiteBalanceBlue");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_WB_KB, WhiteBalanceBlue);
		CheckResult(res,"SetWhiteBalanceBlue");
	}
	
	// Width of the Image provided by the device (in pixels). (XI_PRM_WIDTH)
	int xiAPIplus_Camera::GetWidth()
	{
		int val=0;
		
		CheckCamHandle("GetWidth");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_WIDTH, &val);
		CheckResult(res,"GetWidth");
		return val;
	}
	
	int xiAPIplus_Camera::GetWidth_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetWidth" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_WIDTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetWidth" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetWidth_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetWidth" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_WIDTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetWidth" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetWidth_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetWidth" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_WIDTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetWidth" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetWidth(int Width)
	{
		
		CheckCamHandleInt("SetWidth",Width);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_WIDTH, Width);
		CheckResult(res,"SetWidth");
	}
	
	// Height of the Image provided by the device (in pixels). (XI_PRM_HEIGHT)
	int xiAPIplus_Camera::GetHeight()
	{
		int val=0;
		
		CheckCamHandle("GetHeight");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HEIGHT, &val);
		CheckResult(res,"GetHeight");
		return val;
	}
	
	int xiAPIplus_Camera::GetHeight_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHeight" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HEIGHT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHeight" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHeight_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHeight" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HEIGHT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHeight" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHeight_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHeight" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HEIGHT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHeight" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHeight(int Height)
	{
		
		CheckCamHandleInt("SetHeight",Height);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HEIGHT, Height);
		CheckResult(res,"SetHeight");
	}
	
	// Horizontal offset from the origin to the area of interest (in pixels). (XI_PRM_OFFSET_X)
	int xiAPIplus_Camera::GetOffsetX()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetX");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_X, &val);
		CheckResult(res,"GetOffsetX");
		return val;
	}
	
	int xiAPIplus_Camera::GetOffsetX_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetX" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_X XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetOffsetX" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetOffsetX_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetX" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_X XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetOffsetX" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetOffsetX_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetX" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_X XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetOffsetX" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetOffsetX(int OffsetX)
	{
		
		CheckCamHandleInt("SetOffsetX",OffsetX);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OFFSET_X, OffsetX);
		CheckResult(res,"SetOffsetX");
	}
	
	// Vertical offset from the origin to the area of interest (in pixels). (XI_PRM_OFFSET_Y)
	int xiAPIplus_Camera::GetOffsetY()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetY");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_Y, &val);
		CheckResult(res,"GetOffsetY");
		return val;
	}
	
	int xiAPIplus_Camera::GetOffsetY_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetY" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_Y XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetOffsetY" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetOffsetY_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetY" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_Y XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetOffsetY" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetOffsetY_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetOffsetY" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OFFSET_Y XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetOffsetY" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetOffsetY(int OffsetY)
	{
		
		CheckCamHandleInt("SetOffsetY",OffsetY);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OFFSET_Y, OffsetY);
		CheckResult(res,"SetOffsetY");
	}
	
	// Selects Region in Multiple ROI which parameters are set by width, height, ... ,region mode (XI_PRM_REGION_SELECTOR)
	int xiAPIplus_Camera::GetRegion_selector()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_selector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_SELECTOR, &val);
		CheckResult(res,"GetRegion_selector");
		return val;
	}
	
	int xiAPIplus_Camera::GetRegion_selector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_selector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetRegion_selector" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetRegion_selector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_selector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetRegion_selector" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetRegion_selector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_selector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetRegion_selector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetRegion_selector(int Region_selector)
	{
		
		CheckCamHandleInt("SetRegion_selector",Region_selector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_REGION_SELECTOR, Region_selector);
		CheckResult(res,"SetRegion_selector");
	}
	
	// Activates/deactivates Region selected by Region Selector (XI_PRM_REGION_MODE)
	int xiAPIplus_Camera::GetRegion_mode()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_mode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_MODE, &val);
		CheckResult(res,"GetRegion_mode");
		return val;
	}
	
	int xiAPIplus_Camera::GetRegion_mode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_mode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetRegion_mode" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetRegion_mode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_mode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetRegion_mode" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetRegion_mode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetRegion_mode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_REGION_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetRegion_mode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetRegion_mode(int Region_mode)
	{
		
		CheckCamHandleInt("SetRegion_mode",Region_mode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_REGION_MODE, Region_mode);
		CheckResult(res,"SetRegion_mode");
	}
	
	// Horizontal flip enable (XI_PRM_HORIZONTAL_FLIP)
	bool xiAPIplus_Camera::IsHorizontalFlip()
	{
		int val=0;
		
		CheckCamHandle("IsHorizontalFlip");
		
		xiGetParamInt(camera_handle, XI_PRM_HORIZONTAL_FLIP, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableHorizontalFlip()
	{
		
		CheckCamHandle("IsHorizontalFlip");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HORIZONTAL_FLIP, XI_ON);
		CheckResult(res,"EnableHorizontalFlip");
	}

	void xiAPIplus_Camera::DisableHorizontalFlip()
	{
		
		CheckCamHandle("DisableHorizontalFlip");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HORIZONTAL_FLIP, XI_OFF);
		CheckResult(res,"DisableHorizontalFlip");
	}	
	
	// Vertical flip enable (XI_PRM_VERTICAL_FLIP)
	bool xiAPIplus_Camera::IsVerticalFlip()
	{
		int val=0;
		
		CheckCamHandle("IsVerticalFlip");
		
		xiGetParamInt(camera_handle, XI_PRM_VERTICAL_FLIP, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableVerticalFlip()
	{
		
		CheckCamHandle("IsVerticalFlip");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_VERTICAL_FLIP, XI_ON);
		CheckResult(res,"EnableVerticalFlip");
	}

	void xiAPIplus_Camera::DisableVerticalFlip()
	{
		
		CheckCamHandle("DisableVerticalFlip");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_VERTICAL_FLIP, XI_OFF);
		CheckResult(res,"DisableVerticalFlip");
	}	
	
	// Image flat field correction (XI_PRM_FFC)
	bool xiAPIplus_Camera::IsFlatFieldCorrection()
	{
		int val=0;
		
		CheckCamHandle("IsFlatFieldCorrection");
		
		xiGetParamInt(camera_handle, XI_PRM_FFC, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableFlatFieldCorrection()
	{
		
		CheckCamHandle("IsFlatFieldCorrection");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_FFC, XI_ON);
		CheckResult(res,"EnableFlatFieldCorrection");
	}

	void xiAPIplus_Camera::DisableFlatFieldCorrection()
	{
		
		CheckCamHandle("DisableFlatFieldCorrection");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_FFC, XI_OFF);
		CheckResult(res,"DisableFlatFieldCorrection");
	}	
	
	// Set name of file to be applied for FFC processor. (XI_PRM_FFC_FLAT_FIELD_FILE_NAME)
	void xiAPIplus_Camera::GetFFCFlatFieldFileName(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_FFC_FLAT_FIELD_FILE_NAME, buffer, buffer_length);
		CheckResult(res,"GetFFCFlatFieldFileName");
	}
	
	void xiAPIplus_Camera::SetFFCFlatFieldFileName(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_FFC_FLAT_FIELD_FILE_NAME, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetFFCFlatFieldFileName");
	}
	
	// Set name of file to be applied for FFC processor. (XI_PRM_FFC_DARK_FIELD_FILE_NAME)
	void xiAPIplus_Camera::GetFFCDarkFieldFileName(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_FFC_DARK_FIELD_FILE_NAME, buffer, buffer_length);
		CheckResult(res,"GetFFCDarkFieldFileName");
	}
	
	void xiAPIplus_Camera::SetFFCDarkFieldFileName(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_FFC_DARK_FIELD_FILE_NAME, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetFFCDarkFieldFileName");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Image Format
	//-------------------------------------------------------------------------------------------------------------------

	
	// Binning engine selector. (XI_PRM_BINNING_SELECTOR)
	XI_BIN_SELECTOR xiAPIplus_Camera::GetBinningSelector()
	{
		int val=0;
		
		CheckCamHandle("GetBinningSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_SELECTOR, &val);
		CheckResult(res,"GetBinningSelector");
		return (XI_BIN_SELECTOR)val;
	}
	
	XI_BIN_SELECTOR xiAPIplus_Camera::GetBinningSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningSelector" "_Maximum");
		return (XI_BIN_SELECTOR)val;
	}
	
	XI_BIN_SELECTOR xiAPIplus_Camera::GetBinningSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningSelector" "_Minimum");
		return (XI_BIN_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetBinningSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningSelector(XI_BIN_SELECTOR BinningSelector)
	{
		
		CheckCamHandleInt("SetBinningSelector",(int)BinningSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_SELECTOR, BinningSelector);
		CheckResult(res,"SetBinningSelector");
	}
	
	// Sets the mode to use to combine vertical pixel together. (XI_PRM_BINNING_VERTICAL_MODE)
	XI_BIN_MODE xiAPIplus_Camera::GetBinningVerticalMode()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_MODE, &val);
		CheckResult(res,"GetBinningVerticalMode");
		return (XI_BIN_MODE)val;
	}
	
	XI_BIN_MODE xiAPIplus_Camera::GetBinningVerticalMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningVerticalMode" "_Maximum");
		return (XI_BIN_MODE)val;
	}
	
	XI_BIN_MODE xiAPIplus_Camera::GetBinningVerticalMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningVerticalMode" "_Minimum");
		return (XI_BIN_MODE)val;
	}
	
	int xiAPIplus_Camera::GetBinningVerticalMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningVerticalMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningVerticalMode(XI_BIN_MODE BinningVerticalMode)
	{
		
		CheckCamHandleInt("SetBinningVerticalMode",(int)BinningVerticalMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_MODE, BinningVerticalMode);
		CheckResult(res,"SetBinningVerticalMode");
	}
	
	// Vertical Binning - number of vertical photo-sensitive cells to combine together. (XI_PRM_BINNING_VERTICAL)
	int xiAPIplus_Camera::GetBinningVertical()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVertical");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL, &val);
		CheckResult(res,"GetBinningVertical");
		return val;
	}
	
	int xiAPIplus_Camera::GetBinningVertical_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVertical" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningVertical" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetBinningVertical_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVertical" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningVertical" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetBinningVertical_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVertical" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningVertical" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningVertical(int BinningVertical)
	{
		
		CheckCamHandleInt("SetBinningVertical",BinningVertical);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL, BinningVertical);
		CheckResult(res,"SetBinningVertical");
	}
	
	// Sets the mode to use to combine horizontal pixel together. (XI_PRM_BINNING_HORIZONTAL_MODE)
	XI_BIN_MODE xiAPIplus_Camera::GetBinningHorizontalMode()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_MODE, &val);
		CheckResult(res,"GetBinningHorizontalMode");
		return (XI_BIN_MODE)val;
	}
	
	XI_BIN_MODE xiAPIplus_Camera::GetBinningHorizontalMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningHorizontalMode" "_Maximum");
		return (XI_BIN_MODE)val;
	}
	
	XI_BIN_MODE xiAPIplus_Camera::GetBinningHorizontalMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningHorizontalMode" "_Minimum");
		return (XI_BIN_MODE)val;
	}
	
	int xiAPIplus_Camera::GetBinningHorizontalMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningHorizontalMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningHorizontalMode(XI_BIN_MODE BinningHorizontalMode)
	{
		
		CheckCamHandleInt("SetBinningHorizontalMode",(int)BinningHorizontalMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_MODE, BinningHorizontalMode);
		CheckResult(res,"SetBinningHorizontalMode");
	}
	
	// Horizontal Binning - number of horizontal photo-sensitive cells to combine together. (XI_PRM_BINNING_HORIZONTAL)
	int xiAPIplus_Camera::GetBinningHorizontal()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontal");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL, &val);
		CheckResult(res,"GetBinningHorizontal");
		return val;
	}
	
	int xiAPIplus_Camera::GetBinningHorizontal_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontal" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningHorizontal" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetBinningHorizontal_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontal" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningHorizontal" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetBinningHorizontal_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontal" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningHorizontal" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningHorizontal(int BinningHorizontal)
	{
		
		CheckCamHandleInt("SetBinningHorizontal",BinningHorizontal);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL, BinningHorizontal);
		CheckResult(res,"SetBinningHorizontal");
	}
	
	// Binning horizontal pattern type. (XI_PRM_BINNING_HORIZONTAL_PATTERN)
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningHorizontalPattern()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalPattern");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_PATTERN, &val);
		CheckResult(res,"GetBinningHorizontalPattern");
		return (XI_BIN_PATTERN)val;
	}
	
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningHorizontalPattern_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalPattern" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_PATTERN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningHorizontalPattern" "_Maximum");
		return (XI_BIN_PATTERN)val;
	}
	
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningHorizontalPattern_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalPattern" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_PATTERN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningHorizontalPattern" "_Minimum");
		return (XI_BIN_PATTERN)val;
	}
	
	int xiAPIplus_Camera::GetBinningHorizontalPattern_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningHorizontalPattern" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_PATTERN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningHorizontalPattern" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningHorizontalPattern(XI_BIN_PATTERN BinningHorizontalPattern)
	{
		
		CheckCamHandleInt("SetBinningHorizontalPattern",(int)BinningHorizontalPattern);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_HORIZONTAL_PATTERN, BinningHorizontalPattern);
		CheckResult(res,"SetBinningHorizontalPattern");
	}
	
	// Binning vertical pattern type. (XI_PRM_BINNING_VERTICAL_PATTERN)
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningVerticalPattern()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalPattern");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_PATTERN, &val);
		CheckResult(res,"GetBinningVerticalPattern");
		return (XI_BIN_PATTERN)val;
	}
	
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningVerticalPattern_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalPattern" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_PATTERN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBinningVerticalPattern" "_Maximum");
		return (XI_BIN_PATTERN)val;
	}
	
	XI_BIN_PATTERN xiAPIplus_Camera::GetBinningVerticalPattern_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalPattern" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_PATTERN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBinningVerticalPattern" "_Minimum");
		return (XI_BIN_PATTERN)val;
	}
	
	int xiAPIplus_Camera::GetBinningVerticalPattern_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBinningVerticalPattern" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_PATTERN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBinningVerticalPattern" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBinningVerticalPattern(XI_BIN_PATTERN BinningVerticalPattern)
	{
		
		CheckCamHandleInt("SetBinningVerticalPattern",(int)BinningVerticalPattern);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BINNING_VERTICAL_PATTERN, BinningVerticalPattern);
		CheckResult(res,"SetBinningVerticalPattern");
	}
	
	// Decimation engine selector. (XI_PRM_DECIMATION_SELECTOR)
	XI_DEC_SELECTOR xiAPIplus_Camera::GetDecimationSelector()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_SELECTOR, &val);
		CheckResult(res,"GetDecimationSelector");
		return (XI_DEC_SELECTOR)val;
	}
	
	XI_DEC_SELECTOR xiAPIplus_Camera::GetDecimationSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDecimationSelector" "_Maximum");
		return (XI_DEC_SELECTOR)val;
	}
	
	XI_DEC_SELECTOR xiAPIplus_Camera::GetDecimationSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDecimationSelector" "_Minimum");
		return (XI_DEC_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetDecimationSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDecimationSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDecimationSelector(XI_DEC_SELECTOR DecimationSelector)
	{
		
		CheckCamHandleInt("SetDecimationSelector",(int)DecimationSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DECIMATION_SELECTOR, DecimationSelector);
		CheckResult(res,"SetDecimationSelector");
	}
	
	// Vertical Decimation - vertical sub-sampling of the image - reduces the vertical resolution of the image by the specified vertical decimation factor. (XI_PRM_DECIMATION_VERTICAL)
	int xiAPIplus_Camera::GetDecimationVertical()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVertical");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL, &val);
		CheckResult(res,"GetDecimationVertical");
		return val;
	}
	
	int xiAPIplus_Camera::GetDecimationVertical_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVertical" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDecimationVertical" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetDecimationVertical_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVertical" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDecimationVertical" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetDecimationVertical_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVertical" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDecimationVertical" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDecimationVertical(int DecimationVertical)
	{
		
		CheckCamHandleInt("SetDecimationVertical",DecimationVertical);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL, DecimationVertical);
		CheckResult(res,"SetDecimationVertical");
	}
	
	// Horizontal Decimation - horizontal sub-sampling of the image - reduces the horizontal resolution of the image by the specified vertical decimation factor. (XI_PRM_DECIMATION_HORIZONTAL)
	int xiAPIplus_Camera::GetDecimationHorizontal()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontal");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL, &val);
		CheckResult(res,"GetDecimationHorizontal");
		return val;
	}
	
	int xiAPIplus_Camera::GetDecimationHorizontal_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontal" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDecimationHorizontal" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetDecimationHorizontal_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontal" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDecimationHorizontal" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetDecimationHorizontal_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontal" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDecimationHorizontal" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDecimationHorizontal(int DecimationHorizontal)
	{
		
		CheckCamHandleInt("SetDecimationHorizontal",DecimationHorizontal);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL, DecimationHorizontal);
		CheckResult(res,"SetDecimationHorizontal");
	}
	
	// Decimation horizontal pattern type. (XI_PRM_DECIMATION_HORIZONTAL_PATTERN)
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationHorizontalPattern()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontalPattern");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL_PATTERN, &val);
		CheckResult(res,"GetDecimationHorizontalPattern");
		return (XI_DEC_PATTERN)val;
	}
	
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationHorizontalPattern_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontalPattern" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL_PATTERN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDecimationHorizontalPattern" "_Maximum");
		return (XI_DEC_PATTERN)val;
	}
	
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationHorizontalPattern_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontalPattern" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL_PATTERN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDecimationHorizontalPattern" "_Minimum");
		return (XI_DEC_PATTERN)val;
	}
	
	int xiAPIplus_Camera::GetDecimationHorizontalPattern_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationHorizontalPattern" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL_PATTERN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDecimationHorizontalPattern" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDecimationHorizontalPattern(XI_DEC_PATTERN DecimationHorizontalPattern)
	{
		
		CheckCamHandleInt("SetDecimationHorizontalPattern",(int)DecimationHorizontalPattern);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DECIMATION_HORIZONTAL_PATTERN, DecimationHorizontalPattern);
		CheckResult(res,"SetDecimationHorizontalPattern");
	}
	
	// Decimation vertical pattern type. (XI_PRM_DECIMATION_VERTICAL_PATTERN)
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationVerticalPattern()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVerticalPattern");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL_PATTERN, &val);
		CheckResult(res,"GetDecimationVerticalPattern");
		return (XI_DEC_PATTERN)val;
	}
	
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationVerticalPattern_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVerticalPattern" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL_PATTERN XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDecimationVerticalPattern" "_Maximum");
		return (XI_DEC_PATTERN)val;
	}
	
	XI_DEC_PATTERN xiAPIplus_Camera::GetDecimationVerticalPattern_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVerticalPattern" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL_PATTERN XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDecimationVerticalPattern" "_Minimum");
		return (XI_DEC_PATTERN)val;
	}
	
	int xiAPIplus_Camera::GetDecimationVerticalPattern_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDecimationVerticalPattern" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL_PATTERN XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDecimationVerticalPattern" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDecimationVerticalPattern(XI_DEC_PATTERN DecimationVerticalPattern)
	{
		
		CheckCamHandleInt("SetDecimationVerticalPattern",(int)DecimationVerticalPattern);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DECIMATION_VERTICAL_PATTERN, DecimationVerticalPattern);
		CheckResult(res,"SetDecimationVerticalPattern");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: AE Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Exposure priority (0.8 - exposure 80%, gain 20%). (XI_PRM_EXP_PRIORITY)
	float xiAPIplus_Camera::GetAutoExposureAutoGainExposurePriority()
	{
		float val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainExposurePriority");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_EXP_PRIORITY, &val);
		CheckResult(res,"GetAutoExposureAutoGainExposurePriority");
		return val;
	}

	float xiAPIplus_Camera::GetAutoExposureAutoGainExposurePriority_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainExposurePriority" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_EXP_PRIORITY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainExposurePriority" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetAutoExposureAutoGainExposurePriority_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainExposurePriority" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_EXP_PRIORITY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainExposurePriority" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetAutoExposureAutoGainExposurePriority_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainExposurePriority" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_EXP_PRIORITY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainExposurePriority" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainExposurePriority(float AutoExposureAutoGainExposurePriority)
	{
		
		CheckCamHandle("SetAutoExposureAutoGainExposurePriority");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_EXP_PRIORITY, AutoExposureAutoGainExposurePriority);
		CheckResult(res,"SetAutoExposureAutoGainExposurePriority");
	}
	
	// Maximum limit of gain in AEAG procedure (XI_PRM_AG_MAX_LIMIT)
	float xiAPIplus_Camera::GetAutoGainTopLimit()
	{
		float val=0;
		
		CheckCamHandle("GetAutoGainTopLimit");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_AG_MAX_LIMIT, &val);
		CheckResult(res,"GetAutoGainTopLimit");
		return val;
	}

	float xiAPIplus_Camera::GetAutoGainTopLimit_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetAutoGainTopLimit" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_AG_MAX_LIMIT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoGainTopLimit" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetAutoGainTopLimit_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetAutoGainTopLimit" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_AG_MAX_LIMIT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoGainTopLimit" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetAutoGainTopLimit_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetAutoGainTopLimit" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_AG_MAX_LIMIT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoGainTopLimit" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoGainTopLimit(float AutoGainTopLimit)
	{
		
		CheckCamHandle("SetAutoGainTopLimit");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_AG_MAX_LIMIT, AutoGainTopLimit);
		CheckResult(res,"SetAutoGainTopLimit");
	}
	
	// Maximum time (us) used for exposure in AEAG procedure (XI_PRM_AE_MAX_LIMIT)
	int xiAPIplus_Camera::GetAutoExposureTopLimit()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureTopLimit");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AE_MAX_LIMIT, &val);
		CheckResult(res,"GetAutoExposureTopLimit");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureTopLimit_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureTopLimit" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AE_MAX_LIMIT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureTopLimit" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureTopLimit_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureTopLimit" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AE_MAX_LIMIT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureTopLimit" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureTopLimit_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureTopLimit" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AE_MAX_LIMIT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureTopLimit" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureTopLimit(int AutoExposureTopLimit)
	{
		
		CheckCamHandleInt("SetAutoExposureTopLimit",AutoExposureTopLimit);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AE_MAX_LIMIT, AutoExposureTopLimit);
		CheckResult(res,"SetAutoExposureTopLimit");
	}
	
	// Average intensity of output signal AEAG should achieve(in %) (XI_PRM_AEAG_LEVEL)
	int xiAPIplus_Camera::GetAutoExposureAutoGainTargetLevel()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainTargetLevel");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_LEVEL, &val);
		CheckResult(res,"GetAutoExposureAutoGainTargetLevel");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainTargetLevel_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainTargetLevel" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_LEVEL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAutoExposureAutoGainTargetLevel" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAutoExposureAutoGainTargetLevel_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainTargetLevel" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_LEVEL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAutoExposureAutoGainTargetLevel" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAutoExposureAutoGainTargetLevel_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAutoExposureAutoGainTargetLevel" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AEAG_LEVEL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAutoExposureAutoGainTargetLevel" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAutoExposureAutoGainTargetLevel(int AutoExposureAutoGainTargetLevel)
	{
		
		CheckCamHandleInt("SetAutoExposureAutoGainTargetLevel",AutoExposureAutoGainTargetLevel);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AEAG_LEVEL, AutoExposureAutoGainTargetLevel);
		CheckResult(res,"SetAutoExposureAutoGainTargetLevel");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Performance
	//-------------------------------------------------------------------------------------------------------------------

	
	// Set/get bandwidth(datarate)(in Megabits) (XI_PRM_LIMIT_BANDWIDTH)
	int xiAPIplus_Camera::GetBandwidthLimit()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimit");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH, &val);
		CheckResult(res,"GetBandwidthLimit");
		return val;
	}
	
	int xiAPIplus_Camera::GetBandwidthLimit_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimit" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBandwidthLimit" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetBandwidthLimit_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimit" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBandwidthLimit" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetBandwidthLimit_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimit" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBandwidthLimit" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBandwidthLimit(int BandwidthLimit)
	{
		
		CheckCamHandleInt("SetBandwidthLimit",BandwidthLimit);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH, BandwidthLimit);
		CheckResult(res,"SetBandwidthLimit");
	}
	
	// Bandwidth limit enabled (XI_PRM_LIMIT_BANDWIDTH_MODE)
	XI_SWITCH xiAPIplus_Camera::GetBandwidthLimitMode()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimitMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH_MODE, &val);
		CheckResult(res,"GetBandwidthLimitMode");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetBandwidthLimitMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimitMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBandwidthLimitMode" "_Maximum");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetBandwidthLimitMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimitMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBandwidthLimitMode" "_Minimum");
		return (XI_SWITCH)val;
	}
	
	int xiAPIplus_Camera::GetBandwidthLimitMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthLimitMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBandwidthLimitMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBandwidthLimitMode(XI_SWITCH BandwidthLimitMode)
	{
		
		CheckCamHandleInt("SetBandwidthLimitMode",(int)BandwidthLimitMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LIMIT_BANDWIDTH_MODE, BandwidthLimitMode);
		CheckResult(res,"SetBandwidthLimitMode");
	}
	
	// Image sensor line period in us (XI_PRM_SENSOR_LINE_PERIOD)
	float xiAPIplus_Camera::GetSensorLinePeriod()
	{
		float val=0;
		
		CheckCamHandle("GetSensorLinePeriod");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_LINE_PERIOD, &val);
		CheckResult(res,"GetSensorLinePeriod");
		return val;
	}

	float xiAPIplus_Camera::GetSensorLinePeriod_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetSensorLinePeriod" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_LINE_PERIOD XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorLinePeriod" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetSensorLinePeriod_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetSensorLinePeriod" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_LINE_PERIOD XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorLinePeriod" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetSensorLinePeriod_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetSensorLinePeriod" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_LINE_PERIOD XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorLinePeriod" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorLinePeriod(float SensorLinePeriod)
	{
		
		CheckCamHandle("SetSensorLinePeriod");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_SENSOR_LINE_PERIOD, SensorLinePeriod);
		CheckResult(res,"SetSensorLinePeriod");
	}
	
	// Sensor output data bit depth. (XI_PRM_SENSOR_DATA_BIT_DEPTH)
	XI_BIT_DEPTH xiAPIplus_Camera::GetSensorDataBitDepth()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDataBitDepth");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_DATA_BIT_DEPTH, &val);
		CheckResult(res,"GetSensorDataBitDepth");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetSensorDataBitDepth_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDataBitDepth" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_DATA_BIT_DEPTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorDataBitDepth" "_Maximum");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetSensorDataBitDepth_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDataBitDepth" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_DATA_BIT_DEPTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorDataBitDepth" "_Minimum");
		return (XI_BIT_DEPTH)val;
	}
	
	int xiAPIplus_Camera::GetSensorDataBitDepth_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorDataBitDepth" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_DATA_BIT_DEPTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorDataBitDepth" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorDataBitDepth(XI_BIT_DEPTH SensorDataBitDepth)
	{
		
		CheckCamHandleInt("SetSensorDataBitDepth",(int)SensorDataBitDepth);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_DATA_BIT_DEPTH, SensorDataBitDepth);
		CheckResult(res,"SetSensorDataBitDepth");
	}
	
	// Device output data bit depth. (XI_PRM_OUTPUT_DATA_BIT_DEPTH)
	XI_BIT_DEPTH xiAPIplus_Camera::GetDeviceOutputDataBitDepth()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataBitDepth");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_BIT_DEPTH, &val);
		CheckResult(res,"GetDeviceOutputDataBitDepth");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetDeviceOutputDataBitDepth_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataBitDepth" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_BIT_DEPTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDeviceOutputDataBitDepth" "_Maximum");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetDeviceOutputDataBitDepth_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataBitDepth" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_BIT_DEPTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDeviceOutputDataBitDepth" "_Minimum");
		return (XI_BIT_DEPTH)val;
	}
	
	int xiAPIplus_Camera::GetDeviceOutputDataBitDepth_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataBitDepth" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_BIT_DEPTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDeviceOutputDataBitDepth" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDeviceOutputDataBitDepth(XI_BIT_DEPTH DeviceOutputDataBitDepth)
	{
		
		CheckCamHandleInt("SetDeviceOutputDataBitDepth",(int)DeviceOutputDataBitDepth);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_BIT_DEPTH, DeviceOutputDataBitDepth);
		CheckResult(res,"SetDeviceOutputDataBitDepth");
	}
	
	// bitdepth of data returned by function xiGetImage (XI_PRM_IMAGE_DATA_BIT_DEPTH)
	XI_BIT_DEPTH xiAPIplus_Camera::GetImageDataBitDepth()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataBitDepth");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_BIT_DEPTH, &val);
		CheckResult(res,"GetImageDataBitDepth");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetImageDataBitDepth_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataBitDepth" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_BIT_DEPTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageDataBitDepth" "_Maximum");
		return (XI_BIT_DEPTH)val;
	}
	
	XI_BIT_DEPTH xiAPIplus_Camera::GetImageDataBitDepth_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataBitDepth" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_BIT_DEPTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageDataBitDepth" "_Minimum");
		return (XI_BIT_DEPTH)val;
	}
	
	int xiAPIplus_Camera::GetImageDataBitDepth_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataBitDepth" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_BIT_DEPTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageDataBitDepth" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageDataBitDepth(XI_BIT_DEPTH ImageDataBitDepth)
	{
		
		CheckCamHandleInt("SetImageDataBitDepth",(int)ImageDataBitDepth);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_DATA_BIT_DEPTH, ImageDataBitDepth);
		CheckResult(res,"SetImageDataBitDepth");
	}
	
	// Device output data packing (or grouping) enabled. Packing could be enabled if output_data_bit_depth > 8 and packing capability is available. (XI_PRM_OUTPUT_DATA_PACKING)
	bool xiAPIplus_Camera::IsDeviceOutputDataPacking()
	{
		int val=0;
		
		CheckCamHandle("IsDeviceOutputDataPacking");
		
		xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableDeviceOutputDataPacking()
	{
		
		CheckCamHandle("IsDeviceOutputDataPacking");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING, XI_ON);
		CheckResult(res,"EnableDeviceOutputDataPacking");
	}

	void xiAPIplus_Camera::DisableDeviceOutputDataPacking()
	{
		
		CheckCamHandle("DisableDeviceOutputDataPacking");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING, XI_OFF);
		CheckResult(res,"DisableDeviceOutputDataPacking");
	}	
	
	// Data packing type. Some cameras supports only specific packing type. (XI_PRM_OUTPUT_DATA_PACKING_TYPE)
	XI_OUTPUT_DATA_PACKING_TYPE xiAPIplus_Camera::GetDeviceOutputDataPackingType()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataPackingType");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING_TYPE, &val);
		CheckResult(res,"GetDeviceOutputDataPackingType");
		return (XI_OUTPUT_DATA_PACKING_TYPE)val;
	}
	
	XI_OUTPUT_DATA_PACKING_TYPE xiAPIplus_Camera::GetDeviceOutputDataPackingType_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataPackingType" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING_TYPE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDeviceOutputDataPackingType" "_Maximum");
		return (XI_OUTPUT_DATA_PACKING_TYPE)val;
	}
	
	XI_OUTPUT_DATA_PACKING_TYPE xiAPIplus_Camera::GetDeviceOutputDataPackingType_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataPackingType" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING_TYPE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDeviceOutputDataPackingType" "_Minimum");
		return (XI_OUTPUT_DATA_PACKING_TYPE)val;
	}
	
	int xiAPIplus_Camera::GetDeviceOutputDataPackingType_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceOutputDataPackingType" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING_TYPE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDeviceOutputDataPackingType" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDeviceOutputDataPackingType(XI_OUTPUT_DATA_PACKING_TYPE DeviceOutputDataPackingType)
	{
		
		CheckCamHandleInt("SetDeviceOutputDataPackingType",(int)DeviceOutputDataPackingType);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_OUTPUT_DATA_PACKING_TYPE, DeviceOutputDataPackingType);
		CheckResult(res,"SetDeviceOutputDataPackingType");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Temperature
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns 1 for cameras that support cooling. (XI_PRM_IS_COOLED)
	bool xiAPIplus_Camera::IsCooled()
	{
		int val=0;
		
		CheckCamHandle("IsCooled");
		
		xiGetParamInt(camera_handle, XI_PRM_IS_COOLED, &val);
		return (val!=0);
	}
	
	// Temperature control mode. (XI_PRM_COOLING)
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetCooling()
	{
		int val=0;
		
		CheckCamHandle("GetCooling");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COOLING, &val);
		CheckResult(res,"GetCooling");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetCooling_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetCooling" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COOLING XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetCooling" "_Maximum");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetCooling_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetCooling" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COOLING XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetCooling" "_Minimum");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetCooling_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetCooling" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COOLING XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetCooling" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetCooling(XI_TEMP_CTRL_MODE_SELECTOR Cooling)
	{
		
		CheckCamHandleInt("SetCooling",(int)Cooling);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_COOLING, Cooling);
		CheckResult(res,"SetCooling");
	}
	
	// Set sensor target temperature for cooling. (XI_PRM_TARGET_TEMP)
	float xiAPIplus_Camera::GetTargetTemperature()
	{
		float val=0;
		
		CheckCamHandle("GetTargetTemperature");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TARGET_TEMP, &val);
		CheckResult(res,"GetTargetTemperature");
		return val;
	}

	float xiAPIplus_Camera::GetTargetTemperature_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTargetTemperature" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TARGET_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTargetTemperature" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTargetTemperature_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTargetTemperature" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TARGET_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTargetTemperature" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTargetTemperature_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTargetTemperature" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TARGET_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTargetTemperature" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTargetTemperature(float TargetTemperature)
	{
		
		CheckCamHandle("SetTargetTemperature");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_TARGET_TEMP, TargetTemperature);
		CheckResult(res,"SetTargetTemperature");
	}
	
	// Selector of mechanical point where thermometer is located. (XI_PRM_TEMP_SELECTOR)
	XI_TEMP_SELECTOR xiAPIplus_Camera::GetTemperatureSelector()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_SELECTOR, &val);
		CheckResult(res,"GetTemperatureSelector");
		return (XI_TEMP_SELECTOR)val;
	}
	
	XI_TEMP_SELECTOR xiAPIplus_Camera::GetTemperatureSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureSelector" "_Maximum");
		return (XI_TEMP_SELECTOR)val;
	}
	
	XI_TEMP_SELECTOR xiAPIplus_Camera::GetTemperatureSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureSelector" "_Minimum");
		return (XI_TEMP_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetTemperatureSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTemperatureSelector(XI_TEMP_SELECTOR TemperatureSelector)
	{
		
		CheckCamHandleInt("SetTemperatureSelector",(int)TemperatureSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TEMP_SELECTOR, TemperatureSelector);
		CheckResult(res,"SetTemperatureSelector");
	}
	
	// Camera temperature (selected by XI_PRM_TEMP_SELECTOR) (XI_PRM_TEMP)
	float xiAPIplus_Camera::GetTemperature()
	{
		float val=0;
		
		CheckCamHandle("GetTemperature");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP, &val);
		CheckResult(res,"GetTemperature");
		return val;
	}

	float xiAPIplus_Camera::GetTemperature_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperature" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperature" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperature_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperature" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperature" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperature_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperature" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperature" "_Increment");
		return val;
	}
	
	// Temperature control mode. (XI_PRM_TEMP_CONTROL_MODE)
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetTemperatureControlMode()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureControlMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_CONTROL_MODE, &val);
		CheckResult(res,"GetTemperatureControlMode");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetTemperatureControlMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureControlMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_CONTROL_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureControlMode" "_Maximum");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	XI_TEMP_CTRL_MODE_SELECTOR xiAPIplus_Camera::GetTemperatureControlMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureControlMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_CONTROL_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureControlMode" "_Minimum");
		return (XI_TEMP_CTRL_MODE_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetTemperatureControlMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureControlMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_CONTROL_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureControlMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTemperatureControlMode(XI_TEMP_CTRL_MODE_SELECTOR TemperatureControlMode)
	{
		
		CheckCamHandleInt("SetTemperatureControlMode",(int)TemperatureControlMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TEMP_CONTROL_MODE, TemperatureControlMode);
		CheckResult(res,"SetTemperatureControlMode");
	}
	
	// Camera sensor temperature (XI_PRM_CHIP_TEMP)
	float xiAPIplus_Camera::GetTemperatureSensor()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensor");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CHIP_TEMP, &val);
		CheckResult(res,"GetTemperatureSensor");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensor_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensor" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CHIP_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureSensor" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensor_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensor" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CHIP_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureSensor" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensor_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensor" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CHIP_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureSensor" "_Increment");
		return val;
	}
	
	// Camera housing tepmerature (XI_PRM_HOUS_TEMP)
	float xiAPIplus_Camera::GetTemperatureHousing()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousing");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_TEMP, &val);
		CheckResult(res,"GetTemperatureHousing");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousing_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousing" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureHousing" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousing_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousing" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureHousing" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousing_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousing" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureHousing" "_Increment");
		return val;
	}
	
	// Camera housing back side tepmerature (XI_PRM_HOUS_BACK_SIDE_TEMP)
	float xiAPIplus_Camera::GetTemperatureHousingBackSide()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousingBackSide");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_BACK_SIDE_TEMP, &val);
		CheckResult(res,"GetTemperatureHousingBackSide");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousingBackSide_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousingBackSide" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_BACK_SIDE_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureHousingBackSide" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousingBackSide_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousingBackSide" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_BACK_SIDE_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureHousingBackSide" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureHousingBackSide_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureHousingBackSide" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_HOUS_BACK_SIDE_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureHousingBackSide" "_Increment");
		return val;
	}
	
	// Camera sensor board temperature (XI_PRM_SENSOR_BOARD_TEMP)
	float xiAPIplus_Camera::GetTemperatureSensorBoard()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensorBoard");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_BOARD_TEMP, &val);
		CheckResult(res,"GetTemperatureSensorBoard");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensorBoard_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensorBoard" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_BOARD_TEMP XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureSensorBoard" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensorBoard_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensorBoard" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_BOARD_TEMP XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureSensorBoard" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureSensorBoard_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureSensorBoard" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_BOARD_TEMP XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureSensorBoard" "_Increment");
		return val;
	}
	
	// Temperature element selector (TEC(Peltier), Fan). (XI_PRM_TEMP_ELEMENT_SEL)
	XI_TEMP_ELEMENT_SELECTOR xiAPIplus_Camera::GetTemperatureElementSelector()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureElementSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_ELEMENT_SEL, &val);
		CheckResult(res,"GetTemperatureElementSelector");
		return (XI_TEMP_ELEMENT_SELECTOR)val;
	}
	
	XI_TEMP_ELEMENT_SELECTOR xiAPIplus_Camera::GetTemperatureElementSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureElementSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_ELEMENT_SEL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureElementSelector" "_Maximum");
		return (XI_TEMP_ELEMENT_SELECTOR)val;
	}
	
	XI_TEMP_ELEMENT_SELECTOR xiAPIplus_Camera::GetTemperatureElementSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureElementSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_ELEMENT_SEL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureElementSelector" "_Minimum");
		return (XI_TEMP_ELEMENT_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetTemperatureElementSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTemperatureElementSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TEMP_ELEMENT_SEL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureElementSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTemperatureElementSelector(XI_TEMP_ELEMENT_SELECTOR TemperatureElementSelector)
	{
		
		CheckCamHandleInt("SetTemperatureElementSelector",(int)TemperatureElementSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TEMP_ELEMENT_SEL, TemperatureElementSelector);
		CheckResult(res,"SetTemperatureElementSelector");
	}
	
	// Temperature element value in percents of full control range (XI_PRM_TEMP_ELEMENT_VALUE)
	float xiAPIplus_Camera::GetTemperatureElementValue()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureElementValue");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP_ELEMENT_VALUE, &val);
		CheckResult(res,"GetTemperatureElementValue");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureElementValue_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureElementValue" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP_ELEMENT_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTemperatureElementValue" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureElementValue_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureElementValue" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP_ELEMENT_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTemperatureElementValue" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetTemperatureElementValue_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetTemperatureElementValue" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_TEMP_ELEMENT_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTemperatureElementValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTemperatureElementValue(float TemperatureElementValue)
	{
		
		CheckCamHandle("SetTemperatureElementValue");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_TEMP_ELEMENT_VALUE, TemperatureElementValue);
		CheckResult(res,"SetTemperatureElementValue");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Color Correction
	//-------------------------------------------------------------------------------------------------------------------

	
	// Mode of color management system. (XI_PRM_CMS)
	XI_CMS_MODE xiAPIplus_Camera::GetColorManagementMode()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS, &val);
		CheckResult(res,"GetColorManagementMode");
		return (XI_CMS_MODE)val;
	}
	
	XI_CMS_MODE xiAPIplus_Camera::GetColorManagementMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorManagementMode" "_Maximum");
		return (XI_CMS_MODE)val;
	}
	
	XI_CMS_MODE xiAPIplus_Camera::GetColorManagementMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorManagementMode" "_Minimum");
		return (XI_CMS_MODE)val;
	}
	
	int xiAPIplus_Camera::GetColorManagementMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorManagementMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorManagementMode(XI_CMS_MODE ColorManagementMode)
	{
		
		CheckCamHandleInt("SetColorManagementMode",(int)ColorManagementMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CMS, ColorManagementMode);
		CheckResult(res,"SetColorManagementMode");
	}
	
	// Intent of color management system. (XI_PRM_CMS_INTENT)
	XI_CMS_INTENT xiAPIplus_Camera::GetColorManagementIntent()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementIntent");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS_INTENT, &val);
		CheckResult(res,"GetColorManagementIntent");
		return (XI_CMS_INTENT)val;
	}
	
	XI_CMS_INTENT xiAPIplus_Camera::GetColorManagementIntent_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementIntent" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS_INTENT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorManagementIntent" "_Maximum");
		return (XI_CMS_INTENT)val;
	}
	
	XI_CMS_INTENT xiAPIplus_Camera::GetColorManagementIntent_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementIntent" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS_INTENT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorManagementIntent" "_Minimum");
		return (XI_CMS_INTENT)val;
	}
	
	int xiAPIplus_Camera::GetColorManagementIntent_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetColorManagementIntent" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CMS_INTENT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorManagementIntent" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorManagementIntent(XI_CMS_INTENT ColorManagementIntent)
	{
		
		CheckCamHandleInt("SetColorManagementIntent",(int)ColorManagementIntent);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CMS_INTENT, ColorManagementIntent);
		CheckResult(res,"SetColorManagementIntent");
	}
	
	// Enable applying of CMS profiles to xiGetImage (see XI_PRM_INPUT_CMS_PROFILE, XI_PRM_OUTPUT_CMS_PROFILE). (XI_PRM_APPLY_CMS)
	bool xiAPIplus_Camera::IsColorManagementApply()
	{
		int val=0;
		
		CheckCamHandle("IsColorManagementApply");
		
		xiGetParamInt(camera_handle, XI_PRM_APPLY_CMS, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableColorManagementApply()
	{
		
		CheckCamHandle("IsColorManagementApply");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_APPLY_CMS, XI_ON);
		CheckResult(res,"EnableColorManagementApply");
	}

	void xiAPIplus_Camera::DisableColorManagementApply()
	{
		
		CheckCamHandle("DisableColorManagementApply");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_APPLY_CMS, XI_OFF);
		CheckResult(res,"DisableColorManagementApply");
	}	
	
	// Filename for input cms profile (e.g. input.icc) (XI_PRM_INPUT_CMS_PROFILE)
	void xiAPIplus_Camera::GetColorManagementInputProfile(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetColorManagementInputProfile");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_INPUT_CMS_PROFILE, buffer, buffer_length);
		CheckResult(res,"GetColorManagementInputProfile");
	}
	
	void xiAPIplus_Camera::SetColorManagementInputProfile(char* new_value)
	{
		
		CheckCamHandle("SetColorManagementInputProfile");
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_INPUT_CMS_PROFILE, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetColorManagementInputProfile");
	}
	
	// Filename for output cms profile (e.g. input.icc) (XI_PRM_OUTPUT_CMS_PROFILE)
	void xiAPIplus_Camera::GetColorManagementOutputProfile(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetColorManagementOutputProfile");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_OUTPUT_CMS_PROFILE, buffer, buffer_length);
		CheckResult(res,"GetColorManagementOutputProfile");
	}
	
	void xiAPIplus_Camera::SetColorManagementOutputProfile(char* new_value)
	{
		
		CheckCamHandle("SetColorManagementOutputProfile");
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_OUTPUT_CMS_PROFILE, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetColorManagementOutputProfile");
	}
	
	// Returns 1 for color cameras. (XI_PRM_IMAGE_IS_COLOR)
	bool xiAPIplus_Camera::IsSensorColor()
	{
		int val=0;
		
		CheckCamHandle("IsSensorColor");
		
		xiGetParamInt(camera_handle, XI_PRM_IMAGE_IS_COLOR, &val);
		return (val!=0);
	}
	
	// Returns color filter array type of RAW data. (XI_PRM_COLOR_FILTER_ARRAY)
	XI_COLOR_FILTER_ARRAY xiAPIplus_Camera::GetSensorColorFilterArray()
	{
		int val=0;
		
		CheckCamHandle("GetSensorColorFilterArray");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLOR_FILTER_ARRAY, &val);
		CheckResult(res,"GetSensorColorFilterArray");
		return (XI_COLOR_FILTER_ARRAY)val;
	}
	
	XI_COLOR_FILTER_ARRAY xiAPIplus_Camera::GetSensorColorFilterArray_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorColorFilterArray" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLOR_FILTER_ARRAY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorColorFilterArray" "_Maximum");
		return (XI_COLOR_FILTER_ARRAY)val;
	}
	
	XI_COLOR_FILTER_ARRAY xiAPIplus_Camera::GetSensorColorFilterArray_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorColorFilterArray" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLOR_FILTER_ARRAY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorColorFilterArray" "_Minimum");
		return (XI_COLOR_FILTER_ARRAY)val;
	}
	
	int xiAPIplus_Camera::GetSensorColorFilterArray_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorColorFilterArray" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLOR_FILTER_ARRAY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorColorFilterArray" "_Increment");
		return val;
	}
	
	// Luminosity gamma (XI_PRM_GAMMAY)
	float xiAPIplus_Camera::GetGammaLuminosity()
	{
		float val=0;
		
		CheckCamHandle("GetGammaLuminosity");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAY, &val);
		CheckResult(res,"GetGammaLuminosity");
		return val;
	}

	float xiAPIplus_Camera::GetGammaLuminosity_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetGammaLuminosity" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGammaLuminosity" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetGammaLuminosity_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetGammaLuminosity" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGammaLuminosity" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetGammaLuminosity_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetGammaLuminosity" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGammaLuminosity" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGammaLuminosity(float GammaLuminosity)
	{
		
		CheckCamHandle("SetGammaLuminosity");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_GAMMAY, GammaLuminosity);
		CheckResult(res,"SetGammaLuminosity");
	}
	
	// Chromaticity gamma (XI_PRM_GAMMAC)
	float xiAPIplus_Camera::GetGammaChromaticity()
	{
		float val=0;
		
		CheckCamHandle("GetGammaChromaticity");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAC, &val);
		CheckResult(res,"GetGammaChromaticity");
		return val;
	}

	float xiAPIplus_Camera::GetGammaChromaticity_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetGammaChromaticity" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAC XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGammaChromaticity" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetGammaChromaticity_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetGammaChromaticity" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAC XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGammaChromaticity" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetGammaChromaticity_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetGammaChromaticity" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_GAMMAC XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGammaChromaticity" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGammaChromaticity(float GammaChromaticity)
	{
		
		CheckCamHandle("SetGammaChromaticity");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_GAMMAC, GammaChromaticity);
		CheckResult(res,"SetGammaChromaticity");
	}
	
	// Sharpness Strenght (XI_PRM_SHARPNESS)
	float xiAPIplus_Camera::GetSharpness()
	{
		float val=0;
		
		CheckCamHandle("GetSharpness");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SHARPNESS, &val);
		CheckResult(res,"GetSharpness");
		return val;
	}

	float xiAPIplus_Camera::GetSharpness_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetSharpness" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SHARPNESS XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSharpness" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetSharpness_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetSharpness" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SHARPNESS XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSharpness" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetSharpness_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetSharpness" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SHARPNESS XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSharpness" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSharpness(float Sharpness)
	{
		
		CheckCamHandle("SetSharpness");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_SHARPNESS, Sharpness);
		CheckResult(res,"SetSharpness");
	}
	
	// Color Correction Matrix element [0][0] (XI_PRM_CC_MATRIX_00)
	float xiAPIplus_Camera::GetColorCorrectionMatrix00()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix00");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_00, &val);
		CheckResult(res,"GetColorCorrectionMatrix00");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix00_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix00" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_00 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix00" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix00_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix00" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_00 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix00" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix00_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix00" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_00 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix00" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix00(float ColorCorrectionMatrix00)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix00");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_00, ColorCorrectionMatrix00);
		CheckResult(res,"SetColorCorrectionMatrix00");
	}
	
	// Color Correction Matrix element [0][1] (XI_PRM_CC_MATRIX_01)
	float xiAPIplus_Camera::GetColorCorrectionMatrix01()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix01");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_01, &val);
		CheckResult(res,"GetColorCorrectionMatrix01");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix01_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix01" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_01 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix01" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix01_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix01" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_01 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix01" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix01_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix01" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_01 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix01" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix01(float ColorCorrectionMatrix01)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix01");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_01, ColorCorrectionMatrix01);
		CheckResult(res,"SetColorCorrectionMatrix01");
	}
	
	// Color Correction Matrix element [0][2] (XI_PRM_CC_MATRIX_02)
	float xiAPIplus_Camera::GetColorCorrectionMatrix02()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix02");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_02, &val);
		CheckResult(res,"GetColorCorrectionMatrix02");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix02_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix02" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_02 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix02" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix02_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix02" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_02 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix02" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix02_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix02" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_02 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix02" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix02(float ColorCorrectionMatrix02)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix02");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_02, ColorCorrectionMatrix02);
		CheckResult(res,"SetColorCorrectionMatrix02");
	}
	
	// Color Correction Matrix element [0][3] (XI_PRM_CC_MATRIX_03)
	float xiAPIplus_Camera::GetColorCorrectionMatrix03()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix03");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_03, &val);
		CheckResult(res,"GetColorCorrectionMatrix03");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix03_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix03" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_03 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix03" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix03_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix03" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_03 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix03" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix03_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix03" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_03 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix03" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix03(float ColorCorrectionMatrix03)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix03");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_03, ColorCorrectionMatrix03);
		CheckResult(res,"SetColorCorrectionMatrix03");
	}
	
	// Color Correction Matrix element [1][0] (XI_PRM_CC_MATRIX_10)
	float xiAPIplus_Camera::GetColorCorrectionMatrix10()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix10");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_10, &val);
		CheckResult(res,"GetColorCorrectionMatrix10");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix10_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix10" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_10 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix10" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix10_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix10" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_10 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix10" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix10_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix10" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_10 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix10" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix10(float ColorCorrectionMatrix10)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix10");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_10, ColorCorrectionMatrix10);
		CheckResult(res,"SetColorCorrectionMatrix10");
	}
	
	// Color Correction Matrix element [1][1] (XI_PRM_CC_MATRIX_11)
	float xiAPIplus_Camera::GetColorCorrectionMatrix11()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix11");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_11, &val);
		CheckResult(res,"GetColorCorrectionMatrix11");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix11_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix11" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_11 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix11" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix11_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix11" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_11 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix11" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix11_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix11" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_11 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix11" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix11(float ColorCorrectionMatrix11)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix11");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_11, ColorCorrectionMatrix11);
		CheckResult(res,"SetColorCorrectionMatrix11");
	}
	
	// Color Correction Matrix element [1][2] (XI_PRM_CC_MATRIX_12)
	float xiAPIplus_Camera::GetColorCorrectionMatrix12()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix12");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_12, &val);
		CheckResult(res,"GetColorCorrectionMatrix12");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix12_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix12" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_12 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix12" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix12_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix12" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_12 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix12" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix12_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix12" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_12 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix12" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix12(float ColorCorrectionMatrix12)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix12");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_12, ColorCorrectionMatrix12);
		CheckResult(res,"SetColorCorrectionMatrix12");
	}
	
	// Color Correction Matrix element [1][3] (XI_PRM_CC_MATRIX_13)
	float xiAPIplus_Camera::GetColorCorrectionMatrix13()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix13");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_13, &val);
		CheckResult(res,"GetColorCorrectionMatrix13");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix13_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix13" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_13 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix13" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix13_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix13" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_13 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix13" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix13_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix13" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_13 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix13" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix13(float ColorCorrectionMatrix13)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix13");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_13, ColorCorrectionMatrix13);
		CheckResult(res,"SetColorCorrectionMatrix13");
	}
	
	// Color Correction Matrix element [2][0] (XI_PRM_CC_MATRIX_20)
	float xiAPIplus_Camera::GetColorCorrectionMatrix20()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix20");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_20, &val);
		CheckResult(res,"GetColorCorrectionMatrix20");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix20_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix20" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_20 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix20" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix20_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix20" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_20 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix20" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix20_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix20" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_20 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix20" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix20(float ColorCorrectionMatrix20)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix20");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_20, ColorCorrectionMatrix20);
		CheckResult(res,"SetColorCorrectionMatrix20");
	}
	
	// Color Correction Matrix element [2][1] (XI_PRM_CC_MATRIX_21)
	float xiAPIplus_Camera::GetColorCorrectionMatrix21()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix21");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_21, &val);
		CheckResult(res,"GetColorCorrectionMatrix21");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix21_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix21" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_21 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix21" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix21_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix21" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_21 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix21" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix21_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix21" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_21 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix21" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix21(float ColorCorrectionMatrix21)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix21");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_21, ColorCorrectionMatrix21);
		CheckResult(res,"SetColorCorrectionMatrix21");
	}
	
	// Color Correction Matrix element [2][2] (XI_PRM_CC_MATRIX_22)
	float xiAPIplus_Camera::GetColorCorrectionMatrix22()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix22");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_22, &val);
		CheckResult(res,"GetColorCorrectionMatrix22");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix22_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix22" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_22 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix22" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix22_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix22" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_22 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix22" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix22_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix22" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_22 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix22" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix22(float ColorCorrectionMatrix22)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix22");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_22, ColorCorrectionMatrix22);
		CheckResult(res,"SetColorCorrectionMatrix22");
	}
	
	// Color Correction Matrix element [2][3] (XI_PRM_CC_MATRIX_23)
	float xiAPIplus_Camera::GetColorCorrectionMatrix23()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix23");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_23, &val);
		CheckResult(res,"GetColorCorrectionMatrix23");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix23_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix23" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_23 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix23" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix23_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix23" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_23 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix23" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix23_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix23" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_23 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix23" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix23(float ColorCorrectionMatrix23)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix23");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_23, ColorCorrectionMatrix23);
		CheckResult(res,"SetColorCorrectionMatrix23");
	}
	
	// Color Correction Matrix element [3][0] (XI_PRM_CC_MATRIX_30)
	float xiAPIplus_Camera::GetColorCorrectionMatrix30()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix30");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_30, &val);
		CheckResult(res,"GetColorCorrectionMatrix30");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix30_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix30" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_30 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix30" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix30_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix30" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_30 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix30" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix30_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix30" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_30 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix30" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix30(float ColorCorrectionMatrix30)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix30");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_30, ColorCorrectionMatrix30);
		CheckResult(res,"SetColorCorrectionMatrix30");
	}
	
	// Color Correction Matrix element [3][1] (XI_PRM_CC_MATRIX_31)
	float xiAPIplus_Camera::GetColorCorrectionMatrix31()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix31");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_31, &val);
		CheckResult(res,"GetColorCorrectionMatrix31");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix31_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix31" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_31 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix31" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix31_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix31" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_31 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix31" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix31_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix31" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_31 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix31" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix31(float ColorCorrectionMatrix31)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix31");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_31, ColorCorrectionMatrix31);
		CheckResult(res,"SetColorCorrectionMatrix31");
	}
	
	// Color Correction Matrix element [3][2] (XI_PRM_CC_MATRIX_32)
	float xiAPIplus_Camera::GetColorCorrectionMatrix32()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix32");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_32, &val);
		CheckResult(res,"GetColorCorrectionMatrix32");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix32_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix32" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_32 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix32" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix32_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix32" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_32 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix32" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix32_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix32" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_32 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix32" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix32(float ColorCorrectionMatrix32)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix32");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_32, ColorCorrectionMatrix32);
		CheckResult(res,"SetColorCorrectionMatrix32");
	}
	
	// Color Correction Matrix element [3][3] (XI_PRM_CC_MATRIX_33)
	float xiAPIplus_Camera::GetColorCorrectionMatrix33()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix33");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_33, &val);
		CheckResult(res,"GetColorCorrectionMatrix33");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix33_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix33" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_33 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColorCorrectionMatrix33" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix33_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix33" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_33 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColorCorrectionMatrix33" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetColorCorrectionMatrix33_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetColorCorrectionMatrix33" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_CC_MATRIX_33 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColorCorrectionMatrix33" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColorCorrectionMatrix33(float ColorCorrectionMatrix33)
	{
		
		CheckCamHandle("SetColorCorrectionMatrix33");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_CC_MATRIX_33, ColorCorrectionMatrix33);
		CheckResult(res,"SetColorCorrectionMatrix33");
	}
	
	// Set default Color Correction Matrix (XI_PRM_DEFAULT_CC_MATRIX)
	void xiAPIplus_Camera::SetColorCorrectionMatrixDefault(int ColorCorrectionMatrixDefault)
	{
		
		CheckCamHandleInt("SetColorCorrectionMatrixDefault",ColorCorrectionMatrixDefault);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEFAULT_CC_MATRIX, ColorCorrectionMatrixDefault);
		CheckResult(res,"SetColorCorrectionMatrixDefault");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device IO
	//-------------------------------------------------------------------------------------------------------------------

	
	// Defines source of trigger. (XI_PRM_TRG_SOURCE)
	XI_TRG_SOURCE xiAPIplus_Camera::GetTriggerSource()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSource");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SOURCE, &val);
		CheckResult(res,"GetTriggerSource");
		return (XI_TRG_SOURCE)val;
	}
	
	XI_TRG_SOURCE xiAPIplus_Camera::GetTriggerSource_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSource" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SOURCE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTriggerSource" "_Maximum");
		return (XI_TRG_SOURCE)val;
	}
	
	XI_TRG_SOURCE xiAPIplus_Camera::GetTriggerSource_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSource" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SOURCE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTriggerSource" "_Minimum");
		return (XI_TRG_SOURCE)val;
	}
	
	int xiAPIplus_Camera::GetTriggerSource_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSource" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SOURCE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTriggerSource" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTriggerSource(XI_TRG_SOURCE TriggerSource)
	{
		
		CheckCamHandleInt("SetTriggerSource",(int)TriggerSource);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRG_SOURCE, TriggerSource);
		CheckResult(res,"SetTriggerSource");
	}
	
	// Generates an internal trigger. XI_PRM_TRG_SOURCE must be set to TRG_SOFTWARE. (XI_PRM_TRG_SOFTWARE)
	void xiAPIplus_Camera::SetTriggerSoftware(int TriggerSoftware)
	{
		
		CheckCamHandleInt("SetTriggerSoftware",TriggerSoftware);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRG_SOFTWARE, TriggerSoftware);
		CheckResult(res,"SetTriggerSoftware");
	}
	
	// Selects the type of trigger. (XI_PRM_TRG_SELECTOR)
	XI_TRG_SELECTOR xiAPIplus_Camera::GetTriggerSelector()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SELECTOR, &val);
		CheckResult(res,"GetTriggerSelector");
		return (XI_TRG_SELECTOR)val;
	}
	
	XI_TRG_SELECTOR xiAPIplus_Camera::GetTriggerSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTriggerSelector" "_Maximum");
		return (XI_TRG_SELECTOR)val;
	}
	
	XI_TRG_SELECTOR xiAPIplus_Camera::GetTriggerSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTriggerSelector" "_Minimum");
		return (XI_TRG_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetTriggerSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTriggerSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTriggerSelector(XI_TRG_SELECTOR TriggerSelector)
	{
		
		CheckCamHandleInt("SetTriggerSelector",(int)TriggerSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRG_SELECTOR, TriggerSelector);
		CheckResult(res,"SetTriggerSelector");
	}
	
	// Sets number of frames acquired by burst. This burst is used only if trigger is set to FrameBurstStart (XI_PRM_ACQ_FRAME_BURST_COUNT)
	int xiAPIplus_Camera::GetAcquisitionFrameBurstCount()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionFrameBurstCount");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_FRAME_BURST_COUNT, &val);
		CheckResult(res,"GetAcquisitionFrameBurstCount");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionFrameBurstCount_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionFrameBurstCount" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_FRAME_BURST_COUNT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionFrameBurstCount" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionFrameBurstCount_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionFrameBurstCount" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_FRAME_BURST_COUNT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionFrameBurstCount" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionFrameBurstCount_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionFrameBurstCount" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_FRAME_BURST_COUNT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionFrameBurstCount" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionFrameBurstCount(int AcquisitionFrameBurstCount)
	{
		
		CheckCamHandleInt("SetAcquisitionFrameBurstCount",AcquisitionFrameBurstCount);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_FRAME_BURST_COUNT, AcquisitionFrameBurstCount);
		CheckResult(res,"SetAcquisitionFrameBurstCount");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: GPIO Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selects GPI (XI_PRM_GPI_SELECTOR)
	XI_GPI_SELECTOR xiAPIplus_Camera::GetGPISelector()
	{
		int val=0;
		
		CheckCamHandle("GetGPISelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_SELECTOR, &val);
		CheckResult(res,"GetGPISelector");
		return (XI_GPI_SELECTOR)val;
	}
	
	XI_GPI_SELECTOR xiAPIplus_Camera::GetGPISelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPISelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPISelector" "_Maximum");
		return (XI_GPI_SELECTOR)val;
	}
	
	XI_GPI_SELECTOR xiAPIplus_Camera::GetGPISelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPISelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPISelector" "_Minimum");
		return (XI_GPI_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetGPISelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPISelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPISelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPISelector(XI_GPI_SELECTOR GPISelector)
	{
		
		CheckCamHandleInt("SetGPISelector",(int)GPISelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_GPI_SELECTOR, GPISelector);
		CheckResult(res,"SetGPISelector");
	}
	
	// Defines GPI functionality (XI_PRM_GPI_MODE)
	XI_GPI_MODE xiAPIplus_Camera::GetGPIMode()
	{
		int val=0;
		
		CheckCamHandle("GetGPIMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_MODE, &val);
		CheckResult(res,"GetGPIMode");
		return (XI_GPI_MODE)val;
	}
	
	XI_GPI_MODE xiAPIplus_Camera::GetGPIMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPIMode" "_Maximum");
		return (XI_GPI_MODE)val;
	}
	
	XI_GPI_MODE xiAPIplus_Camera::GetGPIMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPIMode" "_Minimum");
		return (XI_GPI_MODE)val;
	}
	
	int xiAPIplus_Camera::GetGPIMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPIMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPIMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPIMode(XI_GPI_MODE GPIMode)
	{
		
		CheckCamHandleInt("SetGPIMode",(int)GPIMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_GPI_MODE, GPIMode);
		CheckResult(res,"SetGPIMode");
	}
	
	// GPI level (XI_PRM_GPI_LEVEL)
	int xiAPIplus_Camera::GetGPILevel()
	{
		int val=0;
		
		CheckCamHandle("GetGPILevel");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_LEVEL, &val);
		CheckResult(res,"GetGPILevel");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPILevel_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPILevel" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_LEVEL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPILevel" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPILevel_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPILevel" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_LEVEL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPILevel" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetGPILevel_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPILevel" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPI_LEVEL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPILevel" "_Increment");
		return val;
	}
	
	// Selects GPO (XI_PRM_GPO_SELECTOR)
	XI_GPO_SELECTOR xiAPIplus_Camera::GetGPOSelector()
	{
		int val=0;
		
		CheckCamHandle("GetGPOSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_SELECTOR, &val);
		CheckResult(res,"GetGPOSelector");
		return (XI_GPO_SELECTOR)val;
	}
	
	XI_GPO_SELECTOR xiAPIplus_Camera::GetGPOSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPOSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPOSelector" "_Maximum");
		return (XI_GPO_SELECTOR)val;
	}
	
	XI_GPO_SELECTOR xiAPIplus_Camera::GetGPOSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPOSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPOSelector" "_Minimum");
		return (XI_GPO_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetGPOSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPOSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPOSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPOSelector(XI_GPO_SELECTOR GPOSelector)
	{
		
		CheckCamHandleInt("SetGPOSelector",(int)GPOSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_GPO_SELECTOR, GPOSelector);
		CheckResult(res,"SetGPOSelector");
	}
	
	// Defines GPO functionality (XI_PRM_GPO_MODE)
	XI_GPO_MODE xiAPIplus_Camera::GetGPOMode()
	{
		int val=0;
		
		CheckCamHandle("GetGPOMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_MODE, &val);
		CheckResult(res,"GetGPOMode");
		return (XI_GPO_MODE)val;
	}
	
	XI_GPO_MODE xiAPIplus_Camera::GetGPOMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPOMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPOMode" "_Maximum");
		return (XI_GPO_MODE)val;
	}
	
	XI_GPO_MODE xiAPIplus_Camera::GetGPOMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPOMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPOMode" "_Minimum");
		return (XI_GPO_MODE)val;
	}
	
	int xiAPIplus_Camera::GetGPOMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPOMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_GPO_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPOMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPOMode(XI_GPO_MODE GPOMode)
	{
		
		CheckCamHandleInt("SetGPOMode",(int)GPOMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_GPO_MODE, GPOMode);
		CheckResult(res,"SetGPOMode");
	}
	
	// Selects LED (XI_PRM_LED_SELECTOR)
	XI_LED_SELECTOR xiAPIplus_Camera::GetLEDSelector()
	{
		int val=0;
		
		CheckCamHandle("GetLEDSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_SELECTOR, &val);
		CheckResult(res,"GetLEDSelector");
		return (XI_LED_SELECTOR)val;
	}
	
	XI_LED_SELECTOR xiAPIplus_Camera::GetLEDSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLEDSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLEDSelector" "_Maximum");
		return (XI_LED_SELECTOR)val;
	}
	
	XI_LED_SELECTOR xiAPIplus_Camera::GetLEDSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLEDSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLEDSelector" "_Minimum");
		return (XI_LED_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetLEDSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLEDSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLEDSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLEDSelector(XI_LED_SELECTOR LEDSelector)
	{
		
		CheckCamHandleInt("SetLEDSelector",(int)LEDSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LED_SELECTOR, LEDSelector);
		CheckResult(res,"SetLEDSelector");
	}
	
	// Defines LED functionality (XI_PRM_LED_MODE)
	XI_LED_MODE xiAPIplus_Camera::GetLEDMode()
	{
		int val=0;
		
		CheckCamHandle("GetLEDMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_MODE, &val);
		CheckResult(res,"GetLEDMode");
		return (XI_LED_MODE)val;
	}
	
	XI_LED_MODE xiAPIplus_Camera::GetLEDMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLEDMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLEDMode" "_Maximum");
		return (XI_LED_MODE)val;
	}
	
	XI_LED_MODE xiAPIplus_Camera::GetLEDMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLEDMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLEDMode" "_Minimum");
		return (XI_LED_MODE)val;
	}
	
	int xiAPIplus_Camera::GetLEDMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLEDMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LED_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLEDMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLEDMode(XI_LED_MODE LEDMode)
	{
		
		CheckCamHandleInt("SetLEDMode",(int)LEDMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LED_MODE, LEDMode);
		CheckResult(res,"SetLEDMode");
	}
	
	// Enable/Disable debounce to selected GPI (XI_PRM_DEBOUNCE_EN)
	bool xiAPIplus_Camera::IsGPIDebounce()
	{
		int val=0;
		
		CheckCamHandle("IsGPIDebounce");
		
		xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_EN, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableGPIDebounce()
	{
		
		CheckCamHandle("IsGPIDebounce");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBOUNCE_EN, XI_ON);
		CheckResult(res,"EnableGPIDebounce");
	}

	void xiAPIplus_Camera::DisableGPIDebounce()
	{
		
		CheckCamHandle("DisableGPIDebounce");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBOUNCE_EN, XI_OFF);
		CheckResult(res,"DisableGPIDebounce");
	}	
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Debounce Setup
	//-------------------------------------------------------------------------------------------------------------------

	
	// Debounce time (x * 10us) (XI_PRM_DEBOUNCE_T0)
	int xiAPIplus_Camera::GetGPIDebounceFirstEdge()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceFirstEdge");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T0, &val);
		CheckResult(res,"GetGPIDebounceFirstEdge");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebounceFirstEdge_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceFirstEdge" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T0 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPIDebounceFirstEdge" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebounceFirstEdge_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceFirstEdge" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T0 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPIDebounceFirstEdge" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetGPIDebounceFirstEdge_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceFirstEdge" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T0 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPIDebounceFirstEdge" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPIDebounceFirstEdge(int GPIDebounceFirstEdge)
	{
		
		CheckCamHandleInt("SetGPIDebounceFirstEdge",GPIDebounceFirstEdge);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBOUNCE_T0, GPIDebounceFirstEdge);
		CheckResult(res,"SetGPIDebounceFirstEdge");
	}
	
	// Debounce time (x * 10us) (XI_PRM_DEBOUNCE_T1)
	int xiAPIplus_Camera::GetGPIDebounceSecondEdge()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceSecondEdge");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T1, &val);
		CheckResult(res,"GetGPIDebounceSecondEdge");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebounceSecondEdge_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceSecondEdge" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T1 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPIDebounceSecondEdge" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebounceSecondEdge_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceSecondEdge" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T1 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPIDebounceSecondEdge" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetGPIDebounceSecondEdge_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebounceSecondEdge" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_T1 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPIDebounceSecondEdge" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPIDebounceSecondEdge(int GPIDebounceSecondEdge)
	{
		
		CheckCamHandleInt("SetGPIDebounceSecondEdge",GPIDebounceSecondEdge);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBOUNCE_T1, GPIDebounceSecondEdge);
		CheckResult(res,"SetGPIDebounceSecondEdge");
	}
	
	// Debounce polarity (pol = 1 t0 - falling edge, t1 - rising edge) (XI_PRM_DEBOUNCE_POL)
	int xiAPIplus_Camera::GetGPIDebouncePolarity()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebouncePolarity");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_POL, &val);
		CheckResult(res,"GetGPIDebouncePolarity");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebouncePolarity_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebouncePolarity" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_POL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetGPIDebouncePolarity" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetGPIDebouncePolarity_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebouncePolarity" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_POL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetGPIDebouncePolarity" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetGPIDebouncePolarity_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetGPIDebouncePolarity" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBOUNCE_POL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetGPIDebouncePolarity" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetGPIDebouncePolarity(int GPIDebouncePolarity)
	{
		
		CheckCamHandleInt("SetGPIDebouncePolarity",GPIDebouncePolarity);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBOUNCE_POL, GPIDebouncePolarity);
		CheckResult(res,"SetGPIDebouncePolarity");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Lens Control
	//-------------------------------------------------------------------------------------------------------------------

	
	// Status of lens control interface. This shall be set to XI_ON before any Lens operations. (XI_PRM_LENS_MODE)
	bool xiAPIplus_Camera::IsLensMode()
	{
		int val=0;
		
		CheckCamHandle("IsLensMode");
		
		xiGetParamInt(camera_handle, XI_PRM_LENS_MODE, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableLensMode()
	{
		
		CheckCamHandle("IsLensMode");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LENS_MODE, XI_ON);
		CheckResult(res,"EnableLensMode");
	}

	void xiAPIplus_Camera::DisableLensMode()
	{
		
		CheckCamHandle("DisableLensMode");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LENS_MODE, XI_OFF);
		CheckResult(res,"DisableLensMode");
	}	
	
	// Current lens aperture value in stops. Examples: 2.8, 4, 5.6, 8, 11 (XI_PRM_LENS_APERTURE_VALUE)
	float xiAPIplus_Camera::GetLensApertureValue()
	{
		float val=0;
		
		CheckCamHandle("GetLensApertureValue");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_APERTURE_VALUE, &val);
		CheckResult(res,"GetLensApertureValue");
		return val;
	}

	float xiAPIplus_Camera::GetLensApertureValue_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetLensApertureValue" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_APERTURE_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensApertureValue" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetLensApertureValue_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetLensApertureValue" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_APERTURE_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensApertureValue" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetLensApertureValue_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetLensApertureValue" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_APERTURE_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensApertureValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLensApertureValue(float LensApertureValue)
	{
		
		CheckCamHandle("SetLensApertureValue");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_LENS_APERTURE_VALUE, LensApertureValue);
		CheckResult(res,"SetLensApertureValue");
	}
	
	// Lens current focus movement value to be used by XI_PRM_LENS_FOCUS_MOVE in motor steps. (XI_PRM_LENS_FOCUS_MOVEMENT_VALUE)
	int xiAPIplus_Camera::GetLensFocusMovementValue()
	{
		int val=0;
		
		CheckCamHandle("GetLensFocusMovementValue");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVEMENT_VALUE, &val);
		CheckResult(res,"GetLensFocusMovementValue");
		return val;
	}
	
	int xiAPIplus_Camera::GetLensFocusMovementValue_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLensFocusMovementValue" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVEMENT_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensFocusMovementValue" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetLensFocusMovementValue_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLensFocusMovementValue" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVEMENT_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensFocusMovementValue" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetLensFocusMovementValue_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLensFocusMovementValue" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVEMENT_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensFocusMovementValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLensFocusMovementValue(int LensFocusMovementValue)
	{
		
		CheckCamHandleInt("SetLensFocusMovementValue",LensFocusMovementValue);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVEMENT_VALUE, LensFocusMovementValue);
		CheckResult(res,"SetLensFocusMovementValue");
	}
	
	// Moves lens focus motor by steps set in XI_PRM_LENS_FOCUS_MOVEMENT_VALUE. (XI_PRM_LENS_FOCUS_MOVE)
	void xiAPIplus_Camera::SetLensFocusMove(int LensFocusMove)
	{
		
		CheckCamHandleInt("SetLensFocusMove",LensFocusMove);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LENS_FOCUS_MOVE, LensFocusMove);
		CheckResult(res,"SetLensFocusMove");
	}
	
	// Lens focus distance in cm. (XI_PRM_LENS_FOCUS_DISTANCE)
	float xiAPIplus_Camera::GetLensFocusDistance()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocusDistance");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCUS_DISTANCE, &val);
		CheckResult(res,"GetLensFocusDistance");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocusDistance_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocusDistance" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCUS_DISTANCE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensFocusDistance" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocusDistance_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocusDistance" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCUS_DISTANCE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensFocusDistance" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocusDistance_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocusDistance" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCUS_DISTANCE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensFocusDistance" "_Increment");
		return val;
	}
	
	// Lens focal distance in mm. (XI_PRM_LENS_FOCAL_LENGTH)
	float xiAPIplus_Camera::GetLensFocalLength()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocalLength");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCAL_LENGTH, &val);
		CheckResult(res,"GetLensFocalLength");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocalLength_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocalLength" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCAL_LENGTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensFocalLength" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocalLength_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocalLength" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCAL_LENGTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensFocalLength" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFocalLength_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetLensFocalLength" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FOCAL_LENGTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensFocalLength" "_Increment");
		return val;
	}
	
	// Selects the current feature which is accessible by XI_PRM_LENS_FEATURE. (XI_PRM_LENS_FEATURE_SELECTOR)
	XI_LENS_FEATURE xiAPIplus_Camera::GetLensFeatureSelector()
	{
		int val=0;
		
		CheckCamHandle("GetLensFeatureSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FEATURE_SELECTOR, &val);
		CheckResult(res,"GetLensFeatureSelector");
		return (XI_LENS_FEATURE)val;
	}
	
	XI_LENS_FEATURE xiAPIplus_Camera::GetLensFeatureSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLensFeatureSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FEATURE_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensFeatureSelector" "_Maximum");
		return (XI_LENS_FEATURE)val;
	}
	
	XI_LENS_FEATURE xiAPIplus_Camera::GetLensFeatureSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLensFeatureSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FEATURE_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensFeatureSelector" "_Minimum");
		return (XI_LENS_FEATURE)val;
	}
	
	int xiAPIplus_Camera::GetLensFeatureSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLensFeatureSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LENS_FEATURE_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensFeatureSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLensFeatureSelector(XI_LENS_FEATURE LensFeatureSelector)
	{
		
		CheckCamHandleInt("SetLensFeatureSelector",(int)LensFeatureSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LENS_FEATURE_SELECTOR, LensFeatureSelector);
		CheckResult(res,"SetLensFeatureSelector");
	}
	
	// Allows access to lens feature value currently selected by XI_PRM_LENS_FEATURE_SELECTOR. (XI_PRM_LENS_FEATURE)
	float xiAPIplus_Camera::GetLensFeature()
	{
		float val=0;
		
		CheckCamHandle("GetLensFeature");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FEATURE, &val);
		CheckResult(res,"GetLensFeature");
		return val;
	}

	float xiAPIplus_Camera::GetLensFeature_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFeature" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FEATURE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLensFeature" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFeature_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetLensFeature" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FEATURE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLensFeature" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetLensFeature_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetLensFeature" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_LENS_FEATURE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLensFeature" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLensFeature(float LensFeature)
	{
		
		CheckCamHandle("SetLensFeature");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_LENS_FEATURE, LensFeature);
		CheckResult(res,"SetLensFeature");
	}
	
	// Write/Read data sequences to/from lens (XI_PRM_LENS_COMM_DATA)
	void xiAPIplus_Camera::GetLensCommData(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetLensCommData");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_LENS_COMM_DATA, buffer, buffer_length);
		CheckResult(res,"GetLensCommData");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device info parameters
	//-------------------------------------------------------------------------------------------------------------------

	
	// Return device name (XI_PRM_DEVICE_NAME)
	void xiAPIplus_Camera::GetCameraName(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetCameraName");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_NAME, buffer, buffer_length);
		CheckResult(res,"GetCameraName");
	}
	
	// Return device type (XI_PRM_DEVICE_TYPE)
	void xiAPIplus_Camera::GetCameraType(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetCameraType");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_TYPE, buffer, buffer_length);
		CheckResult(res,"GetCameraType");
	}
	
	// Return device model id (XI_PRM_DEVICE_MODEL_ID)
	int xiAPIplus_Camera::GetModelId()
	{
		int val=0;
		
		CheckCamHandle("GetModelId");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_MODEL_ID, &val);
		CheckResult(res,"GetModelId");
		return val;
	}
	
	int xiAPIplus_Camera::GetModelId_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetModelId" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_MODEL_ID XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetModelId" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetModelId_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetModelId" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_MODEL_ID XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetModelId" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetModelId_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetModelId" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_MODEL_ID XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetModelId" "_Increment");
		return val;
	}
	
	// Return device sensor model id (XI_PRM_SENSOR_MODEL_ID)
	int xiAPIplus_Camera::GetSensorId()
	{
		int val=0;
		
		CheckCamHandle("GetSensorId");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODEL_ID, &val);
		CheckResult(res,"GetSensorId");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorId_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorId" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODEL_ID XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorId" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorId_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorId" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODEL_ID XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorId" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetSensorId_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorId" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODEL_ID XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorId" "_Increment");
		return val;
	}
	
	// Return device serial number (XI_PRM_DEVICE_SN)
	void xiAPIplus_Camera::GetSerialNumber(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetSerialNumber");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_SN, buffer, buffer_length);
		CheckResult(res,"GetSerialNumber");
	}
	
	// Return sensor serial number (XI_PRM_DEVICE_SENS_SN)
	void xiAPIplus_Camera::GetSensorSerialNumber(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetSensorSerialNumber");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_SENS_SN, buffer, buffer_length);
		CheckResult(res,"GetSensorSerialNumber");
	}
	
	// Return unique device ID (XI_PRM_DEVICE_ID)
	void xiAPIplus_Camera::GetDeviceId(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetDeviceId");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_ID, buffer, buffer_length);
		CheckResult(res,"GetDeviceId");
	}
	
	// Return device system instance path. (XI_PRM_DEVICE_INSTANCE_PATH)
	void xiAPIplus_Camera::GetDevicePath(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetDevicePath");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_INSTANCE_PATH, buffer, buffer_length);
		CheckResult(res,"GetDevicePath");
	}
	
	// Represents the location of the device in the device tree. (XI_PRM_DEVICE_LOCATION_PATH)
	void xiAPIplus_Camera::GetDeviceLocPath(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetDeviceLocPath");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_LOCATION_PATH, buffer, buffer_length);
		CheckResult(res,"GetDeviceLocPath");
	}
	
	// Return custom ID of camera. (XI_PRM_DEVICE_USER_ID)
	void xiAPIplus_Camera::GetUserId(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetUserId");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_USER_ID, buffer, buffer_length);
		CheckResult(res,"GetUserId");
	}
	
	// Return device capability description XML. (XI_PRM_DEVICE_MANIFEST)
	void xiAPIplus_Camera::GetDeviceManifest(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetDeviceManifest");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DEVICE_MANIFEST, buffer, buffer_length);
		CheckResult(res,"GetDeviceManifest");
	}
	
	// User image data at image header to track parameters synchronization. (XI_PRM_IMAGE_USER_DATA)
	int xiAPIplus_Camera::GetImageUserData()
	{
		int val=0;
		
		CheckCamHandle("GetImageUserData");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_USER_DATA, &val);
		CheckResult(res,"GetImageUserData");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageUserData_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageUserData" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_USER_DATA XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageUserData" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageUserData_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageUserData" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_USER_DATA XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageUserData" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetImageUserData_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageUserData" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_USER_DATA XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageUserData" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageUserData(int ImageUserData)
	{
		
		CheckCamHandleInt("SetImageUserData",ImageUserData);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_USER_DATA, ImageUserData);
		CheckResult(res,"SetImageUserData");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Device acquisition settings
	//-------------------------------------------------------------------------------------------------------------------

	
	// The alpha channel of RGB32 output image format. (XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA)
	int xiAPIplus_Camera::GetImageDataFormatRGB32Alpha()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormatRGB32Alpha");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA, &val);
		CheckResult(res,"GetImageDataFormatRGB32Alpha");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageDataFormatRGB32Alpha_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormatRGB32Alpha" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageDataFormatRGB32Alpha" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageDataFormatRGB32Alpha_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormatRGB32Alpha" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageDataFormatRGB32Alpha" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetImageDataFormatRGB32Alpha_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageDataFormatRGB32Alpha" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageDataFormatRGB32Alpha" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageDataFormatRGB32Alpha(int ImageDataFormatRGB32Alpha)
	{
		
		CheckCamHandleInt("SetImageDataFormatRGB32Alpha",ImageDataFormatRGB32Alpha);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_DATA_FORMAT_RGB32_ALPHA, ImageDataFormatRGB32Alpha);
		CheckResult(res,"SetImageDataFormatRGB32Alpha");
	}
	
	// Buffer size in bytes sufficient for output image returned by xiGetImage (XI_PRM_IMAGE_PAYLOAD_SIZE)
	int xiAPIplus_Camera::GetImagePayloadSize()
	{
		int val=0;
		
		CheckCamHandle("GetImagePayloadSize");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_PAYLOAD_SIZE, &val);
		CheckResult(res,"GetImagePayloadSize");
		return val;
	}
	
	int xiAPIplus_Camera::GetImagePayloadSize_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImagePayloadSize" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_PAYLOAD_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImagePayloadSize" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetImagePayloadSize_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImagePayloadSize" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_PAYLOAD_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImagePayloadSize" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetImagePayloadSize_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImagePayloadSize" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_PAYLOAD_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImagePayloadSize" "_Increment");
		return val;
	}
	
	// Current format of pixels on transport layer. (XI_PRM_TRANSPORT_PIXEL_FORMAT)
	XI_GenTL_Image_Format_e xiAPIplus_Camera::GetTransportPixelFormat()
	{
		int val=0;
		
		CheckCamHandle("GetTransportPixelFormat");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_PIXEL_FORMAT, &val);
		CheckResult(res,"GetTransportPixelFormat");
		return (XI_GenTL_Image_Format_e)val;
	}
	
	XI_GenTL_Image_Format_e xiAPIplus_Camera::GetTransportPixelFormat_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTransportPixelFormat" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_PIXEL_FORMAT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTransportPixelFormat" "_Maximum");
		return (XI_GenTL_Image_Format_e)val;
	}
	
	XI_GenTL_Image_Format_e xiAPIplus_Camera::GetTransportPixelFormat_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTransportPixelFormat" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_PIXEL_FORMAT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTransportPixelFormat" "_Minimum");
		return (XI_GenTL_Image_Format_e)val;
	}
	
	int xiAPIplus_Camera::GetTransportPixelFormat_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTransportPixelFormat" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_PIXEL_FORMAT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTransportPixelFormat" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTransportPixelFormat(XI_GenTL_Image_Format_e TransportPixelFormat)
	{
		
		CheckCamHandleInt("SetTransportPixelFormat",(int)TransportPixelFormat);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRANSPORT_PIXEL_FORMAT, TransportPixelFormat);
		CheckResult(res,"SetTransportPixelFormat");
	}
	
	// Target selector for data - CPU RAM or GPU RAM (XI_PRM_TRANSPORT_DATA_TARGET)
	XI_TRANSPORT_DATA_TARGET_MODE xiAPIplus_Camera::GetTransportDataTarget()
	{
		int val=0;
		
		CheckCamHandle("GetTransportDataTarget");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_DATA_TARGET, &val);
		CheckResult(res,"GetTransportDataTarget");
		return (XI_TRANSPORT_DATA_TARGET_MODE)val;
	}
	
	XI_TRANSPORT_DATA_TARGET_MODE xiAPIplus_Camera::GetTransportDataTarget_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTransportDataTarget" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_DATA_TARGET XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTransportDataTarget" "_Maximum");
		return (XI_TRANSPORT_DATA_TARGET_MODE)val;
	}
	
	XI_TRANSPORT_DATA_TARGET_MODE xiAPIplus_Camera::GetTransportDataTarget_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTransportDataTarget" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_DATA_TARGET XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTransportDataTarget" "_Minimum");
		return (XI_TRANSPORT_DATA_TARGET_MODE)val;
	}
	
	int xiAPIplus_Camera::GetTransportDataTarget_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTransportDataTarget" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRANSPORT_DATA_TARGET XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTransportDataTarget" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTransportDataTarget(XI_TRANSPORT_DATA_TARGET_MODE TransportDataTarget)
	{
		
		CheckCamHandleInt("SetTransportDataTarget",(int)TransportDataTarget);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRANSPORT_DATA_TARGET, TransportDataTarget);
		CheckResult(res,"SetTransportDataTarget");
	}
	
	// Sensor clock frequency in Hz. (XI_PRM_SENSOR_CLOCK_FREQ_HZ)
	float xiAPIplus_Camera::GetSensorClockFrequencyHz()
	{
		float val=0;
		
		CheckCamHandle("GetSensorClockFrequencyHz");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_HZ, &val);
		CheckResult(res,"GetSensorClockFrequencyHz");
		return val;
	}

	float xiAPIplus_Camera::GetSensorClockFrequencyHz_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetSensorClockFrequencyHz" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_HZ XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorClockFrequencyHz" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetSensorClockFrequencyHz_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetSensorClockFrequencyHz" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_HZ XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorClockFrequencyHz" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetSensorClockFrequencyHz_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetSensorClockFrequencyHz" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_HZ XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorClockFrequencyHz" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorClockFrequencyHz(float SensorClockFrequencyHz)
	{
		
		CheckCamHandle("SetSensorClockFrequencyHz");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_HZ, SensorClockFrequencyHz);
		CheckResult(res,"SetSensorClockFrequencyHz");
	}
	
	// Sensor clock frequency index. Sensor with selected frequencies have possibility to set the frequency only by this index. (XI_PRM_SENSOR_CLOCK_FREQ_INDEX)
	int xiAPIplus_Camera::GetSensorClockFrequencyIndex()
	{
		int val=0;
		
		CheckCamHandle("GetSensorClockFrequencyIndex");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_INDEX, &val);
		CheckResult(res,"GetSensorClockFrequencyIndex");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorClockFrequencyIndex_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorClockFrequencyIndex" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_INDEX XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorClockFrequencyIndex" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorClockFrequencyIndex_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorClockFrequencyIndex" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_INDEX XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorClockFrequencyIndex" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetSensorClockFrequencyIndex_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorClockFrequencyIndex" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_INDEX XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorClockFrequencyIndex" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorClockFrequencyIndex(int SensorClockFrequencyIndex)
	{
		
		CheckCamHandleInt("SetSensorClockFrequencyIndex",SensorClockFrequencyIndex);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_CLOCK_FREQ_INDEX, SensorClockFrequencyIndex);
		CheckResult(res,"SetSensorClockFrequencyIndex");
	}
	
	// Number of output channels from sensor used for data transfer. (XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT)
	XI_SENSOR_OUTPUT_CHANNEL_COUNT xiAPIplus_Camera::GetSensorOutputChannelCount()
	{
		int val=0;
		
		CheckCamHandle("GetSensorOutputChannelCount");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT, &val);
		CheckResult(res,"GetSensorOutputChannelCount");
		return (XI_SENSOR_OUTPUT_CHANNEL_COUNT)val;
	}
	
	XI_SENSOR_OUTPUT_CHANNEL_COUNT xiAPIplus_Camera::GetSensorOutputChannelCount_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorOutputChannelCount" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorOutputChannelCount" "_Maximum");
		return (XI_SENSOR_OUTPUT_CHANNEL_COUNT)val;
	}
	
	XI_SENSOR_OUTPUT_CHANNEL_COUNT xiAPIplus_Camera::GetSensorOutputChannelCount_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorOutputChannelCount" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorOutputChannelCount" "_Minimum");
		return (XI_SENSOR_OUTPUT_CHANNEL_COUNT)val;
	}
	
	int xiAPIplus_Camera::GetSensorOutputChannelCount_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorOutputChannelCount" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorOutputChannelCount" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorOutputChannelCount(XI_SENSOR_OUTPUT_CHANNEL_COUNT SensorOutputChannelCount)
	{
		
		CheckCamHandleInt("SetSensorOutputChannelCount",(int)SensorOutputChannelCount);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_OUTPUT_CHANNEL_COUNT, SensorOutputChannelCount);
		CheckResult(res,"SetSensorOutputChannelCount");
	}
	
	// Define framerate in Hz (XI_PRM_FRAMERATE)
	float xiAPIplus_Camera::GetFrameRate()
	{
		float val=0;
		
		CheckCamHandle("GetFrameRate");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_FRAMERATE, &val);
		CheckResult(res,"GetFrameRate");
		return val;
	}

	float xiAPIplus_Camera::GetFrameRate_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetFrameRate" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_FRAMERATE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetFrameRate" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetFrameRate_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetFrameRate" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_FRAMERATE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetFrameRate" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetFrameRate_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetFrameRate" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_FRAMERATE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetFrameRate" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetFrameRate(float FrameRate)
	{
		
		CheckCamHandle("SetFrameRate");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_FRAMERATE, FrameRate);
		CheckResult(res,"SetFrameRate");
	}
	
	// Select counter (XI_PRM_COUNTER_SELECTOR)
	XI_COUNTER_SELECTOR xiAPIplus_Camera::GetCounterSelector()
	{
		int val=0;
		
		CheckCamHandle("GetCounterSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_SELECTOR, &val);
		CheckResult(res,"GetCounterSelector");
		return (XI_COUNTER_SELECTOR)val;
	}
	
	XI_COUNTER_SELECTOR xiAPIplus_Camera::GetCounterSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetCounterSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetCounterSelector" "_Maximum");
		return (XI_COUNTER_SELECTOR)val;
	}
	
	XI_COUNTER_SELECTOR xiAPIplus_Camera::GetCounterSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetCounterSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetCounterSelector" "_Minimum");
		return (XI_COUNTER_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetCounterSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetCounterSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetCounterSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetCounterSelector(XI_COUNTER_SELECTOR CounterSelector)
	{
		
		CheckCamHandleInt("SetCounterSelector",(int)CounterSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_COUNTER_SELECTOR, CounterSelector);
		CheckResult(res,"SetCounterSelector");
	}
	
	// Counter status (XI_PRM_COUNTER_VALUE)
	int xiAPIplus_Camera::GetCounterValue()
	{
		int val=0;
		
		CheckCamHandle("GetCounterValue");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_VALUE, &val);
		CheckResult(res,"GetCounterValue");
		return val;
	}
	
	int xiAPIplus_Camera::GetCounterValue_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetCounterValue" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetCounterValue" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetCounterValue_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetCounterValue" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetCounterValue" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetCounterValue_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetCounterValue" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COUNTER_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetCounterValue" "_Increment");
		return val;
	}
	
	// Type of sensor frames timing. (XI_PRM_ACQ_TIMING_MODE)
	XI_ACQ_TIMING_MODE xiAPIplus_Camera::GetAcquisitionTimingMode()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTimingMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TIMING_MODE, &val);
		CheckResult(res,"GetAcquisitionTimingMode");
		return (XI_ACQ_TIMING_MODE)val;
	}
	
	XI_ACQ_TIMING_MODE xiAPIplus_Camera::GetAcquisitionTimingMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTimingMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TIMING_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionTimingMode" "_Maximum");
		return (XI_ACQ_TIMING_MODE)val;
	}
	
	XI_ACQ_TIMING_MODE xiAPIplus_Camera::GetAcquisitionTimingMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTimingMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TIMING_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionTimingMode" "_Minimum");
		return (XI_ACQ_TIMING_MODE)val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTimingMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTimingMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TIMING_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionTimingMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionTimingMode(XI_ACQ_TIMING_MODE AcquisitionTimingMode)
	{
		
		CheckCamHandleInt("SetAcquisitionTimingMode",(int)AcquisitionTimingMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_TIMING_MODE, AcquisitionTimingMode);
		CheckResult(res,"SetAcquisitionTimingMode");
	}
	
	// Measure and return available interface bandwidth(int Megabits) (XI_PRM_AVAILABLE_BANDWIDTH)
	int xiAPIplus_Camera::GetBandwidthAvailable()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthAvailable");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AVAILABLE_BANDWIDTH, &val);
		CheckResult(res,"GetBandwidthAvailable");
		return val;
	}
	
	int xiAPIplus_Camera::GetBandwidthAvailable_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthAvailable" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AVAILABLE_BANDWIDTH XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBandwidthAvailable" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetBandwidthAvailable_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthAvailable" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AVAILABLE_BANDWIDTH XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBandwidthAvailable" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetBandwidthAvailable_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBandwidthAvailable" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_AVAILABLE_BANDWIDTH XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBandwidthAvailable" "_Increment");
		return val;
	}
	
	// Data move policy (XI_PRM_BUFFER_POLICY)
	XI_BP xiAPIplus_Camera::GetBufferPolicy()
	{
		int val=0;
		
		CheckCamHandle("GetBufferPolicy");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFER_POLICY, &val);
		CheckResult(res,"GetBufferPolicy");
		return (XI_BP)val;
	}
	
	XI_BP xiAPIplus_Camera::GetBufferPolicy_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetBufferPolicy" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFER_POLICY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetBufferPolicy" "_Maximum");
		return (XI_BP)val;
	}
	
	XI_BP xiAPIplus_Camera::GetBufferPolicy_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetBufferPolicy" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFER_POLICY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetBufferPolicy" "_Minimum");
		return (XI_BP)val;
	}
	
	int xiAPIplus_Camera::GetBufferPolicy_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetBufferPolicy" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFER_POLICY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetBufferPolicy" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetBufferPolicy(XI_BP BufferPolicy)
	{
		
		CheckCamHandleInt("SetBufferPolicy",(int)BufferPolicy);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BUFFER_POLICY, BufferPolicy);
		CheckResult(res,"SetBufferPolicy");
	}
	
	// Activates LUT. (XI_PRM_LUT_EN)
	bool xiAPIplus_Camera::IsLookUpTable()
	{
		int val=0;
		
		CheckCamHandle("IsLookUpTable");
		
		xiGetParamInt(camera_handle, XI_PRM_LUT_EN, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableLookUpTable()
	{
		
		CheckCamHandle("IsLookUpTable");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LUT_EN, XI_ON);
		CheckResult(res,"EnableLookUpTable");
	}

	void xiAPIplus_Camera::DisableLookUpTable()
	{
		
		CheckCamHandle("DisableLookUpTable");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LUT_EN, XI_OFF);
		CheckResult(res,"DisableLookUpTable");
	}	
	
	// Control the index (offset) of the coefficient to access in the LUT. (XI_PRM_LUT_INDEX)
	int xiAPIplus_Camera::GetLookUpTableIndex()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableIndex");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_INDEX, &val);
		CheckResult(res,"GetLookUpTableIndex");
		return val;
	}
	
	int xiAPIplus_Camera::GetLookUpTableIndex_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableIndex" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_INDEX XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLookUpTableIndex" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetLookUpTableIndex_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableIndex" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_INDEX XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLookUpTableIndex" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetLookUpTableIndex_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableIndex" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_INDEX XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLookUpTableIndex" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLookUpTableIndex(int LookUpTableIndex)
	{
		
		CheckCamHandleInt("SetLookUpTableIndex",LookUpTableIndex);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LUT_INDEX, LookUpTableIndex);
		CheckResult(res,"SetLookUpTableIndex");
	}
	
	// Value at entry LUTIndex of the LUT (XI_PRM_LUT_VALUE)
	int xiAPIplus_Camera::GetLookUpTableValue()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableValue");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_VALUE, &val);
		CheckResult(res,"GetLookUpTableValue");
		return val;
	}
	
	int xiAPIplus_Camera::GetLookUpTableValue_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableValue" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetLookUpTableValue" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetLookUpTableValue_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableValue" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetLookUpTableValue" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetLookUpTableValue_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetLookUpTableValue" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_LUT_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetLookUpTableValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetLookUpTableValue(int LookUpTableValue)
	{
		
		CheckCamHandleInt("SetLookUpTableValue",LookUpTableValue);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_LUT_VALUE, LookUpTableValue);
		CheckResult(res,"SetLookUpTableValue");
	}
	
	// Specifies the delay in microseconds (us) to apply after the trigger reception before activating it. (XI_PRM_TRG_DELAY)
	int xiAPIplus_Camera::GetTriggerDelay()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerDelay");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_DELAY, &val);
		CheckResult(res,"GetTriggerDelay");
		return val;
	}
	
	int xiAPIplus_Camera::GetTriggerDelay_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerDelay" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_DELAY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTriggerDelay" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetTriggerDelay_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerDelay" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_DELAY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTriggerDelay" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetTriggerDelay_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTriggerDelay" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TRG_DELAY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTriggerDelay" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTriggerDelay(int TriggerDelay)
	{
		
		CheckCamHandleInt("SetTriggerDelay",TriggerDelay);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TRG_DELAY, TriggerDelay);
		CheckResult(res,"SetTriggerDelay");
	}
	
	// Defines how time stamp reset engine will be armed (XI_PRM_TS_RST_MODE)
	XI_TS_RST_MODE xiAPIplus_Camera::GetTimeStampResetMode()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_MODE, &val);
		CheckResult(res,"GetTimeStampResetMode");
		return (XI_TS_RST_MODE)val;
	}
	
	XI_TS_RST_MODE xiAPIplus_Camera::GetTimeStampResetMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTimeStampResetMode" "_Maximum");
		return (XI_TS_RST_MODE)val;
	}
	
	XI_TS_RST_MODE xiAPIplus_Camera::GetTimeStampResetMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTimeStampResetMode" "_Minimum");
		return (XI_TS_RST_MODE)val;
	}
	
	int xiAPIplus_Camera::GetTimeStampResetMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTimeStampResetMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTimeStampResetMode(XI_TS_RST_MODE TimeStampResetMode)
	{
		
		CheckCamHandleInt("SetTimeStampResetMode",(int)TimeStampResetMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TS_RST_MODE, TimeStampResetMode);
		CheckResult(res,"SetTimeStampResetMode");
	}
	
	// Defines which source will be used for timestamp reset. Writing this parameter will trigger settings of engine (arming) (XI_PRM_TS_RST_SOURCE)
	XI_TS_RST_SOURCE xiAPIplus_Camera::GetTimeStampResetSource()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetSource");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_SOURCE, &val);
		CheckResult(res,"GetTimeStampResetSource");
		return (XI_TS_RST_SOURCE)val;
	}
	
	XI_TS_RST_SOURCE xiAPIplus_Camera::GetTimeStampResetSource_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetSource" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_SOURCE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetTimeStampResetSource" "_Maximum");
		return (XI_TS_RST_SOURCE)val;
	}
	
	XI_TS_RST_SOURCE xiAPIplus_Camera::GetTimeStampResetSource_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetSource" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_SOURCE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetTimeStampResetSource" "_Minimum");
		return (XI_TS_RST_SOURCE)val;
	}
	
	int xiAPIplus_Camera::GetTimeStampResetSource_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetTimeStampResetSource" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_TS_RST_SOURCE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetTimeStampResetSource" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetTimeStampResetSource(XI_TS_RST_SOURCE TimeStampResetSource)
	{
		
		CheckCamHandleInt("SetTimeStampResetSource",(int)TimeStampResetSource);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_TS_RST_SOURCE, TimeStampResetSource);
		CheckResult(res,"SetTimeStampResetSource");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Extended Device parameters
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns 1 if camera connected and works properly. (XI_PRM_IS_DEVICE_EXIST)
	bool xiAPIplus_Camera::IsExist()
	{
		int val=0;
		
		CheckCamHandle("IsExist");
		
		xiGetParamInt(camera_handle, XI_PRM_IS_DEVICE_EXIST, &val);
		return (val!=0);
	}
	
	// Acquisition buffer size in buffer_size_unit. Default bytes. (XI_PRM_ACQ_BUFFER_SIZE)
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytes()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytes");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytes");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytes_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytes" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytes" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytes_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytes" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytes" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytes_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytes" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytes" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionBufferSizeBytes(int AcquisitionBufferSizeBytes)
	{
		
		CheckCamHandleInt("SetAcquisitionBufferSizeBytes",AcquisitionBufferSizeBytes);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE, AcquisitionBufferSizeBytes);
		CheckResult(res,"SetAcquisitionBufferSizeBytes");
	}
	
	// Acquisition buffer size unit in bytes. Default 1. E.g. Value 1024 means that buffer_size is in KiBytes (XI_PRM_ACQ_BUFFER_SIZE_UNIT)
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytesUnit()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytesUnit");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE_UNIT, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytesUnit");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytesUnit_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytesUnit" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE_UNIT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytesUnit" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytesUnit_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytesUnit" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE_UNIT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytesUnit" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionBufferSizeBytesUnit_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionBufferSizeBytesUnit" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE_UNIT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionBufferSizeBytesUnit" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionBufferSizeBytesUnit(int AcquisitionBufferSizeBytesUnit)
	{
		
		CheckCamHandleInt("SetAcquisitionBufferSizeBytesUnit",AcquisitionBufferSizeBytesUnit);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_BUFFER_SIZE_UNIT, AcquisitionBufferSizeBytesUnit);
		CheckResult(res,"SetAcquisitionBufferSizeBytesUnit");
	}
	
	// Acquisition transport buffer size in bytes (XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE)
	int xiAPIplus_Camera::GetAcquisitionTransportBufferSizeBytes()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferSizeBytes");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE, &val);
		CheckResult(res,"GetAcquisitionTransportBufferSizeBytes");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportBufferSizeBytes_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferSizeBytes" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionTransportBufferSizeBytes" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportBufferSizeBytes_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferSizeBytes" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionTransportBufferSizeBytes" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionTransportBufferSizeBytes_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferSizeBytes" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionTransportBufferSizeBytes" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionTransportBufferSizeBytes(int AcquisitionTransportBufferSizeBytes)
	{
		
		CheckCamHandleInt("SetAcquisitionTransportBufferSizeBytes",AcquisitionTransportBufferSizeBytes);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_SIZE, AcquisitionTransportBufferSizeBytes);
		CheckResult(res,"SetAcquisitionTransportBufferSizeBytes");
	}
	
	// Acquisition transport packet size in bytes (XI_PRM_ACQ_TRANSPORT_PACKET_SIZE)
	int xiAPIplus_Camera::GetAcquisitionTransportPacketSizeBytes()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportPacketSizeBytes");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_PACKET_SIZE, &val);
		CheckResult(res,"GetAcquisitionTransportPacketSizeBytes");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportPacketSizeBytes_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportPacketSizeBytes" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_PACKET_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionTransportPacketSizeBytes" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportPacketSizeBytes_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportPacketSizeBytes" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_PACKET_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionTransportPacketSizeBytes" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionTransportPacketSizeBytes_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportPacketSizeBytes" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_PACKET_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionTransportPacketSizeBytes" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionTransportPacketSizeBytes(int AcquisitionTransportPacketSizeBytes)
	{
		
		CheckCamHandleInt("SetAcquisitionTransportPacketSizeBytes",AcquisitionTransportPacketSizeBytes);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_PACKET_SIZE, AcquisitionTransportPacketSizeBytes);
		CheckResult(res,"SetAcquisitionTransportPacketSizeBytes");
	}
	
	// Queue of field/frame buffers (XI_PRM_BUFFERS_QUEUE_SIZE)
	int xiAPIplus_Camera::GetAcquisitionQueueImagesCount()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionQueueImagesCount");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFERS_QUEUE_SIZE, &val);
		CheckResult(res,"GetAcquisitionQueueImagesCount");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionQueueImagesCount_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionQueueImagesCount" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFERS_QUEUE_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionQueueImagesCount" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionQueueImagesCount_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionQueueImagesCount" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFERS_QUEUE_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionQueueImagesCount" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionQueueImagesCount_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionQueueImagesCount" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_BUFFERS_QUEUE_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionQueueImagesCount" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionQueueImagesCount(int AcquisitionQueueImagesCount)
	{
		
		CheckCamHandleInt("SetAcquisitionQueueImagesCount",AcquisitionQueueImagesCount);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_BUFFERS_QUEUE_SIZE, AcquisitionQueueImagesCount);
		CheckResult(res,"SetAcquisitionQueueImagesCount");
	}
	
	// Number of buffers to commit to low level (XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT)
	int xiAPIplus_Camera::GetAcquisitionTransportBufferCommit()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferCommit");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT, &val);
		CheckResult(res,"GetAcquisitionTransportBufferCommit");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportBufferCommit_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferCommit" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionTransportBufferCommit" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionTransportBufferCommit_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferCommit" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionTransportBufferCommit" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetAcquisitionTransportBufferCommit_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionTransportBufferCommit" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionTransportBufferCommit" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionTransportBufferCommit(int AcquisitionTransportBufferCommit)
	{
		
		CheckCamHandleInt("SetAcquisitionTransportBufferCommit",AcquisitionTransportBufferCommit);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQ_TRANSPORT_BUFFER_COMMIT, AcquisitionTransportBufferCommit);
		CheckResult(res,"SetAcquisitionTransportBufferCommit");
	}
	
	// GetImage returns most recent frame (XI_PRM_RECENT_FRAME)
	bool xiAPIplus_Camera::IsSelectRecentImage()
	{
		int val=0;
		
		CheckCamHandle("IsSelectRecentImage");
		
		xiGetParamInt(camera_handle, XI_PRM_RECENT_FRAME, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableSelectRecentImage()
	{
		
		CheckCamHandle("IsSelectRecentImage");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_RECENT_FRAME, XI_ON);
		CheckResult(res,"EnableSelectRecentImage");
	}

	void xiAPIplus_Camera::DisableSelectRecentImage()
	{
		
		CheckCamHandle("DisableSelectRecentImage");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_RECENT_FRAME, XI_OFF);
		CheckResult(res,"DisableSelectRecentImage");
	}	
	
	// Resets the camera to default state. (XI_PRM_DEVICE_RESET)
	void xiAPIplus_Camera::SetDeviceReset(int DeviceReset)
	{
		
		CheckCamHandleInt("SetDeviceReset",DeviceReset);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEVICE_RESET, DeviceReset);
		CheckResult(res,"SetDeviceReset");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor Defects Correction
	//-------------------------------------------------------------------------------------------------------------------

	
	// Correction of column FPN (XI_PRM_COLUMN_FPN_CORRECTION)
	XI_SWITCH xiAPIplus_Camera::GetColumnFpnCorrection()
	{
		int val=0;
		
		CheckCamHandle("GetColumnFpnCorrection");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLUMN_FPN_CORRECTION, &val);
		CheckResult(res,"GetColumnFpnCorrection");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetColumnFpnCorrection_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetColumnFpnCorrection" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLUMN_FPN_CORRECTION XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetColumnFpnCorrection" "_Maximum");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetColumnFpnCorrection_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetColumnFpnCorrection" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLUMN_FPN_CORRECTION XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetColumnFpnCorrection" "_Minimum");
		return (XI_SWITCH)val;
	}
	
	int xiAPIplus_Camera::GetColumnFpnCorrection_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetColumnFpnCorrection" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_COLUMN_FPN_CORRECTION XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetColumnFpnCorrection" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetColumnFpnCorrection(XI_SWITCH ColumnFpnCorrection)
	{
		
		CheckCamHandleInt("SetColumnFpnCorrection",(int)ColumnFpnCorrection);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_COLUMN_FPN_CORRECTION, ColumnFpnCorrection);
		CheckResult(res,"SetColumnFpnCorrection");
	}
	
	// Correction of row FPN (XI_PRM_ROW_FPN_CORRECTION)
	XI_SWITCH xiAPIplus_Camera::GetRowFpnCorrection()
	{
		int val=0;
		
		CheckCamHandle("GetRowFpnCorrection");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ROW_FPN_CORRECTION, &val);
		CheckResult(res,"GetRowFpnCorrection");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetRowFpnCorrection_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetRowFpnCorrection" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ROW_FPN_CORRECTION XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetRowFpnCorrection" "_Maximum");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetRowFpnCorrection_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetRowFpnCorrection" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ROW_FPN_CORRECTION XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetRowFpnCorrection" "_Minimum");
		return (XI_SWITCH)val;
	}
	
	int xiAPIplus_Camera::GetRowFpnCorrection_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetRowFpnCorrection" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ROW_FPN_CORRECTION XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetRowFpnCorrection" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetRowFpnCorrection(XI_SWITCH RowFpnCorrection)
	{
		
		CheckCamHandleInt("SetRowFpnCorrection",(int)RowFpnCorrection);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ROW_FPN_CORRECTION, RowFpnCorrection);
		CheckResult(res,"SetRowFpnCorrection");
	}
	
	// Select image correction function (XI_PRM_IMAGE_CORRECTION_SELECTOR)
	XI_IMAGE_CORRECTION_SELECTOR xiAPIplus_Camera::GetImageCorrectionSelector()
	{
		int val=0;
		
		CheckCamHandle("GetImageCorrectionSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_CORRECTION_SELECTOR, &val);
		CheckResult(res,"GetImageCorrectionSelector");
		return (XI_IMAGE_CORRECTION_SELECTOR)val;
	}
	
	XI_IMAGE_CORRECTION_SELECTOR xiAPIplus_Camera::GetImageCorrectionSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageCorrectionSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_CORRECTION_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageCorrectionSelector" "_Maximum");
		return (XI_IMAGE_CORRECTION_SELECTOR)val;
	}
	
	XI_IMAGE_CORRECTION_SELECTOR xiAPIplus_Camera::GetImageCorrectionSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageCorrectionSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_CORRECTION_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageCorrectionSelector" "_Minimum");
		return (XI_IMAGE_CORRECTION_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetImageCorrectionSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageCorrectionSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_CORRECTION_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageCorrectionSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageCorrectionSelector(XI_IMAGE_CORRECTION_SELECTOR ImageCorrectionSelector)
	{
		
		CheckCamHandleInt("SetImageCorrectionSelector",(int)ImageCorrectionSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_CORRECTION_SELECTOR, ImageCorrectionSelector);
		CheckResult(res,"SetImageCorrectionSelector");
	}
	
	// Select image correction selected function value (XI_PRM_IMAGE_CORRECTION_VALUE)
	float xiAPIplus_Camera::GetImageCorrectionValue()
	{
		float val=0;
		
		CheckCamHandle("GetImageCorrectionValue");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_IMAGE_CORRECTION_VALUE, &val);
		CheckResult(res,"GetImageCorrectionValue");
		return val;
	}

	float xiAPIplus_Camera::GetImageCorrectionValue_Maximum()
	{
		float val=0;
		
		CheckCamHandle("GetImageCorrectionValue" "_Maximum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_IMAGE_CORRECTION_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageCorrectionValue" "_Maximum");
		return val;
	}

	float xiAPIplus_Camera::GetImageCorrectionValue_Minimum()
	{
		float val=0;
		
		CheckCamHandle("GetImageCorrectionValue" "_Minimum");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_IMAGE_CORRECTION_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageCorrectionValue" "_Minimum");
		return val;
	}

	float xiAPIplus_Camera::GetImageCorrectionValue_Increment()
	{
		float val=0;
		
		CheckCamHandle("GetImageCorrectionValue" "_Increment");
		
		XI_RETURN res=xiGetParamFloat(camera_handle, XI_PRM_IMAGE_CORRECTION_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageCorrectionValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageCorrectionValue(float ImageCorrectionValue)
	{
		
		CheckCamHandle("SetImageCorrectionValue");
		
		XI_RETURN res=xiSetParamFloat(camera_handle, XI_PRM_IMAGE_CORRECTION_VALUE, ImageCorrectionValue);
		CheckResult(res,"SetImageCorrectionValue");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Current sensor mode. Allows to select sensor mode by one integer. Setting of this parameter affects: image dimensions and downsampling. (XI_PRM_SENSOR_MODE)
	XI_SENSOR_MODE xiAPIplus_Camera::GetSensorMode()
	{
		int val=0;
		
		CheckCamHandle("GetSensorMode");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODE, &val);
		CheckResult(res,"GetSensorMode");
		return (XI_SENSOR_MODE)val;
	}
	
	XI_SENSOR_MODE xiAPIplus_Camera::GetSensorMode_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorMode" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorMode" "_Maximum");
		return (XI_SENSOR_MODE)val;
	}
	
	XI_SENSOR_MODE xiAPIplus_Camera::GetSensorMode_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorMode" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorMode" "_Minimum");
		return (XI_SENSOR_MODE)val;
	}
	
	int xiAPIplus_Camera::GetSensorMode_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorMode" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_MODE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorMode" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorMode(XI_SENSOR_MODE SensorMode)
	{
		
		CheckCamHandleInt("SetSensorMode",(int)SensorMode);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_MODE, SensorMode);
		CheckResult(res,"SetSensorMode");
	}
	
	// Enable High Dynamic Range feature. (XI_PRM_HDR)
	bool xiAPIplus_Camera::IsHDR()
	{
		int val=0;
		
		CheckCamHandle("IsHDR");
		
		xiGetParamInt(camera_handle, XI_PRM_HDR, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableHDR()
	{
		
		CheckCamHandle("IsHDR");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HDR, XI_ON);
		CheckResult(res,"EnableHDR");
	}

	void xiAPIplus_Camera::DisableHDR()
	{
		
		CheckCamHandle("DisableHDR");
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HDR, XI_OFF);
		CheckResult(res,"DisableHDR");
	}	
	
	// The number of kneepoints in the PWLR. (XI_PRM_HDR_KNEEPOINT_COUNT)
	int xiAPIplus_Camera::GetHDR_KNEEPOINT_COUNT()
	{
		int val=0;
		
		CheckCamHandle("GetHDR_KNEEPOINT_COUNT");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_KNEEPOINT_COUNT, &val);
		CheckResult(res,"GetHDR_KNEEPOINT_COUNT");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDR_KNEEPOINT_COUNT_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHDR_KNEEPOINT_COUNT" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_KNEEPOINT_COUNT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHDR_KNEEPOINT_COUNT" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDR_KNEEPOINT_COUNT_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHDR_KNEEPOINT_COUNT" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_KNEEPOINT_COUNT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHDR_KNEEPOINT_COUNT" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHDR_KNEEPOINT_COUNT_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHDR_KNEEPOINT_COUNT" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_KNEEPOINT_COUNT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHDR_KNEEPOINT_COUNT" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHDR_KNEEPOINT_COUNT(int HDR_KNEEPOINT_COUNT)
	{
		
		CheckCamHandleInt("SetHDR_KNEEPOINT_COUNT",HDR_KNEEPOINT_COUNT);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HDR_KNEEPOINT_COUNT, HDR_KNEEPOINT_COUNT);
		CheckResult(res,"SetHDR_KNEEPOINT_COUNT");
	}
	
	// position of first kneepoint(in % of XI_PRM_EXPOSURE) (XI_PRM_HDR_T1)
	int xiAPIplus_Camera::GetHDRTimeSlope1()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope1");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T1, &val);
		CheckResult(res,"GetHDRTimeSlope1");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRTimeSlope1_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope1" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T1 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHDRTimeSlope1" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRTimeSlope1_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope1" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T1 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHDRTimeSlope1" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHDRTimeSlope1_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope1" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T1 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHDRTimeSlope1" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHDRTimeSlope1(int HDRTimeSlope1)
	{
		
		CheckCamHandleInt("SetHDRTimeSlope1",HDRTimeSlope1);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HDR_T1, HDRTimeSlope1);
		CheckResult(res,"SetHDRTimeSlope1");
	}
	
	// position of second kneepoint (in % of XI_PRM_EXPOSURE) (XI_PRM_HDR_T2)
	int xiAPIplus_Camera::GetHDRTimeSlope2()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope2");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T2, &val);
		CheckResult(res,"GetHDRTimeSlope2");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRTimeSlope2_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope2" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T2 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHDRTimeSlope2" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRTimeSlope2_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope2" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T2 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHDRTimeSlope2" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHDRTimeSlope2_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHDRTimeSlope2" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_HDR_T2 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHDRTimeSlope2" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHDRTimeSlope2(int HDRTimeSlope2)
	{
		
		CheckCamHandleInt("SetHDRTimeSlope2",HDRTimeSlope2);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_HDR_T2, HDRTimeSlope2);
		CheckResult(res,"SetHDRTimeSlope2");
	}
	
	// value of first kneepoint (% of sensor saturation) (XI_PRM_KNEEPOINT1)
	int xiAPIplus_Camera::GetHDRKnee1Percent()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee1Percent");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT1, &val);
		CheckResult(res,"GetHDRKnee1Percent");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRKnee1Percent_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee1Percent" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT1 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHDRKnee1Percent" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRKnee1Percent_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee1Percent" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT1 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHDRKnee1Percent" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHDRKnee1Percent_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee1Percent" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT1 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHDRKnee1Percent" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHDRKnee1Percent(int HDRKnee1Percent)
	{
		
		CheckCamHandleInt("SetHDRKnee1Percent",HDRKnee1Percent);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_KNEEPOINT1, HDRKnee1Percent);
		CheckResult(res,"SetHDRKnee1Percent");
	}
	
	// value of second kneepoint (% of sensor saturation) (XI_PRM_KNEEPOINT2)
	int xiAPIplus_Camera::GetHDRKnee2Percent()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee2Percent");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT2, &val);
		CheckResult(res,"GetHDRKnee2Percent");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRKnee2Percent_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee2Percent" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT2 XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetHDRKnee2Percent" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetHDRKnee2Percent_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee2Percent" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT2 XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetHDRKnee2Percent" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetHDRKnee2Percent_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetHDRKnee2Percent" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_KNEEPOINT2 XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetHDRKnee2Percent" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetHDRKnee2Percent(int HDRKnee2Percent)
	{
		
		CheckCamHandleInt("SetHDRKnee2Percent",HDRKnee2Percent);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_KNEEPOINT2, HDRKnee2Percent);
		CheckResult(res,"SetHDRKnee2Percent");
	}
	
	// Last image black level counts. Can be used for Offline processing to recall it. (XI_PRM_IMAGE_BLACK_LEVEL)
	int xiAPIplus_Camera::GetImageBlackLevel()
	{
		int val=0;
		
		CheckCamHandle("GetImageBlackLevel");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_BLACK_LEVEL, &val);
		CheckResult(res,"GetImageBlackLevel");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageBlackLevel_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetImageBlackLevel" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_BLACK_LEVEL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetImageBlackLevel" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetImageBlackLevel_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetImageBlackLevel" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_BLACK_LEVEL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetImageBlackLevel" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetImageBlackLevel_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetImageBlackLevel" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_IMAGE_BLACK_LEVEL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetImageBlackLevel" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetImageBlackLevel(int ImageBlackLevel)
	{
		
		CheckCamHandleInt("SetImageBlackLevel",ImageBlackLevel);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_IMAGE_BLACK_LEVEL, ImageBlackLevel);
		CheckResult(res,"SetImageBlackLevel");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Version info
	//-------------------------------------------------------------------------------------------------------------------

	
	// Returns version of API. (XI_PRM_API_VERSION)
	void xiAPIplus_Camera::GetVersionAPI(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionAPI");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_API_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionAPI");
	}
	
	// Returns version of current device driver. (XI_PRM_DRV_VERSION)
	void xiAPIplus_Camera::GetVersionDriver(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionDriver");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_DRV_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionDriver");
	}
	
	// Returns version of MCU1 firmware. (XI_PRM_MCU1_VERSION)
	void xiAPIplus_Camera::GetVersionMCU1(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionMCU1");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_MCU1_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionMCU1");
	}
	
	// Returns version of MCU2 firmware. (XI_PRM_MCU2_VERSION)
	void xiAPIplus_Camera::GetVersionMCU2(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionMCU2");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_MCU2_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionMCU2");
	}
	
	// Returns version of MCU3 firmware. (XI_PRM_MCU3_VERSION)
	void xiAPIplus_Camera::GetVersionMCU3(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionMCU3");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_MCU3_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionMCU3");
	}
	
	// Returns version of FPGA1 firmware. (XI_PRM_FPGA1_VERSION)
	void xiAPIplus_Camera::GetVersionFPGA1(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionFPGA1");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_FPGA1_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionFPGA1");
	}
	
	// Returns version of XML manifest. (XI_PRM_XMLMAN_VERSION)
	void xiAPIplus_Camera::GetVersionXMLMAN(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetVersionXMLMAN");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_XMLMAN_VERSION, buffer, buffer_length);
		CheckResult(res,"GetVersionXMLMAN");
	}
	
	// Returns hardware revision number. (XI_PRM_HW_REVISION)
	void xiAPIplus_Camera::GetHWRevision(char* buffer, int buffer_length)
	{
		
		CheckCamHandle("GetHWRevision");
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_HW_REVISION, buffer, buffer_length);
		CheckResult(res,"GetHWRevision");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: API features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Set debug level (XI_PRM_DEBUG_LEVEL)
	XI_DEBUG_LEVEL xiAPIplus_Camera::GetDebugLevel()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBUG_LEVEL, &val);
		CheckResult(res,"GetDebugLevel");
		return (XI_DEBUG_LEVEL)val;
	}
	
	XI_DEBUG_LEVEL xiAPIplus_Camera::GetDebugLevel_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBUG_LEVEL XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDebugLevel" "_Maximum");
		return (XI_DEBUG_LEVEL)val;
	}
	
	XI_DEBUG_LEVEL xiAPIplus_Camera::GetDebugLevel_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBUG_LEVEL XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDebugLevel" "_Minimum");
		return (XI_DEBUG_LEVEL)val;
	}
	
	int xiAPIplus_Camera::GetDebugLevel_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEBUG_LEVEL XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDebugLevel" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDebugLevel(XI_DEBUG_LEVEL DebugLevel)
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEBUG_LEVEL, DebugLevel);
		CheckResult(res,"SetDebugLevel");
	}
	
	// Automatic bandwidth calculation, (XI_PRM_AUTO_BANDWIDTH_CALCULATION)
	bool xiAPIplus_Camera::IsAutoBandwidthCalculation()
	{
		int val=0;
		
		xiGetParamInt(camera_handle, XI_PRM_AUTO_BANDWIDTH_CALCULATION, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableAutoBandwidthCalculation()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AUTO_BANDWIDTH_CALCULATION, XI_ON);
		CheckResult(res,"EnableAutoBandwidthCalculation");
	}

	void xiAPIplus_Camera::DisableAutoBandwidthCalculation()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_AUTO_BANDWIDTH_CALCULATION, XI_OFF);
		CheckResult(res,"DisableAutoBandwidthCalculation");
	}	
	
	// Enables (2015/FAPI) processing chain for MQ MU cameras (XI_PRM_NEW_PROCESS_CHAIN_ENABLE)
	bool xiAPIplus_Camera::IsNewProcessChainEnable()
	{
		int val=0;
		
		xiGetParamInt(camera_handle, XI_PRM_NEW_PROCESS_CHAIN_ENABLE, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableNewProcessChainEnable()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_NEW_PROCESS_CHAIN_ENABLE, XI_ON);
		CheckResult(res,"EnableNewProcessChainEnable");
	}

	void xiAPIplus_Camera::DisableNewProcessChainEnable()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_NEW_PROCESS_CHAIN_ENABLE, XI_OFF);
		CheckResult(res,"DisableNewProcessChainEnable");
	}	
	
	// Enable enumeration of golden devices (XI_PRM_CAM_ENUM_GOLDEN_ENABLED)
	bool xiAPIplus_Camera::IsCamEnumGoldenEnabled()
	{
		int val=0;
		
		xiGetParamInt(camera_handle, XI_PRM_CAM_ENUM_GOLDEN_ENABLED, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableCamEnumGoldenEnabled()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CAM_ENUM_GOLDEN_ENABLED, XI_ON);
		CheckResult(res,"EnableCamEnumGoldenEnabled");
	}

	void xiAPIplus_Camera::DisableCamEnumGoldenEnabled()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CAM_ENUM_GOLDEN_ENABLED, XI_OFF);
		CheckResult(res,"DisableCamEnumGoldenEnabled");
	}	
	
	// Resets USB device if started as bootloader (XI_PRM_RESET_USB_IF_BOOTLOADER)
	bool xiAPIplus_Camera::IsResetUSBIfBootloader()
	{
		int val=0;
		
		xiGetParamInt(camera_handle, XI_PRM_RESET_USB_IF_BOOTLOADER, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableResetUSBIfBootloader()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_RESET_USB_IF_BOOTLOADER, XI_ON);
		CheckResult(res,"EnableResetUSBIfBootloader");
	}

	void xiAPIplus_Camera::DisableResetUSBIfBootloader()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_RESET_USB_IF_BOOTLOADER, XI_OFF);
		CheckResult(res,"DisableResetUSBIfBootloader");
	}	
	
	// Number of camera simulators to be available. (XI_PRM_CAM_SIMULATORS_COUNT)
	int xiAPIplus_Camera::GetCameraSimulatorsCount()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CAM_SIMULATORS_COUNT, &val);
		CheckResult(res,"GetCameraSimulatorsCount");
		return val;
	}
	
	int xiAPIplus_Camera::GetCameraSimulatorsCount_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CAM_SIMULATORS_COUNT XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetCameraSimulatorsCount" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetCameraSimulatorsCount_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CAM_SIMULATORS_COUNT XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetCameraSimulatorsCount" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetCameraSimulatorsCount_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_CAM_SIMULATORS_COUNT XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetCameraSimulatorsCount" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetCameraSimulatorsCount(int CameraSimulatorsCount)
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CAM_SIMULATORS_COUNT, CameraSimulatorsCount);
		CheckResult(res,"SetCameraSimulatorsCount");
	}
	
	// Camera sensor will not be initialized when 1=XI_ON is set. (XI_PRM_CAM_SENSOR_INIT_DISABLED)
	bool xiAPIplus_Camera::IsCameraSensorInitDisabled()
	{
		int val=0;
		
		xiGetParamInt(camera_handle, XI_PRM_CAM_SENSOR_INIT_DISABLED, &val);
		return (val!=0);
	}
	
	void xiAPIplus_Camera::EnableCameraSensorInitDisabled()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CAM_SENSOR_INIT_DISABLED, XI_ON);
		CheckResult(res,"EnableCameraSensorInitDisabled");
	}

	void xiAPIplus_Camera::DisableCameraSensorInitDisabled()
	{
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_CAM_SENSOR_INIT_DISABLED, XI_OFF);
		CheckResult(res,"DisableCameraSensorInitDisabled");
	}	
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Camera FFS
	//-------------------------------------------------------------------------------------------------------------------

	
	// Read file from camera flash filesystem. (XI_PRM_READ_FILE_FFS)
	void xiAPIplus_Camera::GetReadFileFFS(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_READ_FILE_FFS, buffer, buffer_length);
		CheckResult(res,"GetReadFileFFS");
	}
	
	// Write file to camera flash filesystem. (XI_PRM_WRITE_FILE_FFS)
	void xiAPIplus_Camera::GetWriteFileFFS(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_WRITE_FILE_FFS, buffer, buffer_length);
		CheckResult(res,"GetWriteFileFFS");
	}
	
	void xiAPIplus_Camera::SetWriteFileFFS(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_WRITE_FILE_FFS, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetWriteFileFFS");
	}
	
	// Set name of file to be written/read from camera FFS. (XI_PRM_FFS_FILE_NAME)
	void xiAPIplus_Camera::GetFFSFileName(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_FFS_FILE_NAME, buffer, buffer_length);
		CheckResult(res,"GetFFSFileName");
	}
	
	void xiAPIplus_Camera::SetFFSFileName(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_FFS_FILE_NAME, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetFFSFileName");
	}
	
	// File number. (XI_PRM_FFS_FILE_ID)
	int xiAPIplus_Camera::GetFFSFileId()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_ID, &val);
		CheckResult(res,"GetFFSFileId");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSFileId_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_ID XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetFFSFileId" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSFileId_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_ID XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetFFSFileId" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetFFSFileId_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_ID XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetFFSFileId" "_Increment");
		return val;
	}
	
	// Size of file. (XI_PRM_FFS_FILE_SIZE)
	int xiAPIplus_Camera::GetFFSFileSize()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_SIZE, &val);
		CheckResult(res,"GetFFSFileSize");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSFileSize_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetFFSFileSize" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSFileSize_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetFFSFileSize" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetFFSFileSize_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_FILE_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetFFSFileSize" "_Increment");
		return val;
	}
	
	// Size of free camera FFS. (XI_PRM_FREE_FFS_SIZE)
	int xiAPIplus_Camera::GetFreeFFSSize()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FREE_FFS_SIZE, &val);
		CheckResult(res,"GetFreeFFSSize");
		return val;
	}
	
	int xiAPIplus_Camera::GetFreeFFSSize_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FREE_FFS_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetFreeFFSSize" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetFreeFFSSize_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FREE_FFS_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetFreeFFSSize" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetFreeFFSSize_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FREE_FFS_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetFreeFFSSize" "_Increment");
		return val;
	}
	
	// Size of used camera FFS. (XI_PRM_USED_FFS_SIZE)
	int xiAPIplus_Camera::GetUsedFFSSize()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_USED_FFS_SIZE, &val);
		CheckResult(res,"GetUsedFFSSize");
		return val;
	}
	
	int xiAPIplus_Camera::GetUsedFFSSize_Maximum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_USED_FFS_SIZE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetUsedFFSSize" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetUsedFFSSize_Minimum()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_USED_FFS_SIZE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetUsedFFSSize" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetUsedFFSSize_Increment()
	{
		int val=0;
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_USED_FFS_SIZE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetUsedFFSSize" "_Increment");
		return val;
	}
	
	// Setting of key enables file operations on some cameras. (XI_PRM_FFS_ACCESS_KEY)
	int xiAPIplus_Camera::GetFFSAccessKey()
	{
		int val=0;
		
		CheckCamHandle("GetFFSAccessKey");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_ACCESS_KEY, &val);
		CheckResult(res,"GetFFSAccessKey");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSAccessKey_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetFFSAccessKey" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_ACCESS_KEY XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetFFSAccessKey" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetFFSAccessKey_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetFFSAccessKey" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_ACCESS_KEY XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetFFSAccessKey" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetFFSAccessKey_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetFFSAccessKey" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_FFS_ACCESS_KEY XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetFFSAccessKey" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetFFSAccessKey(int FFSAccessKey)
	{
		
		CheckCamHandleInt("SetFFSAccessKey",FFSAccessKey);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_FFS_ACCESS_KEY, FFSAccessKey);
		CheckResult(res,"SetFFSAccessKey");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: APIContextControl
	//-------------------------------------------------------------------------------------------------------------------

	
	// List of current parameters settings context - parameters with values. Used for offline processing. (XI_PRM_API_CONTEXT_LIST)
	void xiAPIplus_Camera::GetApiContextList(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_API_CONTEXT_LIST, buffer, buffer_length);
		CheckResult(res,"GetApiContextList");
	}
	
	void xiAPIplus_Camera::SetApiContextList(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_API_CONTEXT_LIST, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetApiContextList");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Sensor Control
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selects the current feature which is accessible by XI_PRM_SENSOR_FEATURE_VALUE. (XI_PRM_SENSOR_FEATURE_SELECTOR)
	XI_SENSOR_FEATURE_SELECTOR xiAPIplus_Camera::GetSensorFeatureSelector()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_SELECTOR, &val);
		CheckResult(res,"GetSensorFeatureSelector");
		return (XI_SENSOR_FEATURE_SELECTOR)val;
	}
	
	XI_SENSOR_FEATURE_SELECTOR xiAPIplus_Camera::GetSensorFeatureSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorFeatureSelector" "_Maximum");
		return (XI_SENSOR_FEATURE_SELECTOR)val;
	}
	
	XI_SENSOR_FEATURE_SELECTOR xiAPIplus_Camera::GetSensorFeatureSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorFeatureSelector" "_Minimum");
		return (XI_SENSOR_FEATURE_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetSensorFeatureSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorFeatureSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorFeatureSelector(XI_SENSOR_FEATURE_SELECTOR SensorFeatureSelector)
	{
		
		CheckCamHandleInt("SetSensorFeatureSelector",(int)SensorFeatureSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_SELECTOR, SensorFeatureSelector);
		CheckResult(res,"SetSensorFeatureSelector");
	}
	
	// Allows access to sensor feature value currently selected by XI_PRM_SENSOR_FEATURE_SELECTOR. (XI_PRM_SENSOR_FEATURE_VALUE)
	int xiAPIplus_Camera::GetSensorFeatureValue()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureValue");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_VALUE, &val);
		CheckResult(res,"GetSensorFeatureValue");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorFeatureValue_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureValue" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetSensorFeatureValue" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetSensorFeatureValue_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureValue" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetSensorFeatureValue" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetSensorFeatureValue_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetSensorFeatureValue" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetSensorFeatureValue" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetSensorFeatureValue(int SensorFeatureValue)
	{
		
		CheckCamHandleInt("SetSensorFeatureValue",SensorFeatureValue);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_SENSOR_FEATURE_VALUE, SensorFeatureValue);
		CheckResult(res,"SetSensorFeatureValue");
	}
	

	//-------------------------------------------------------------------------------------------------------------------
	// ---- Parameter Group: Extended Features
	//-------------------------------------------------------------------------------------------------------------------

	
	// Selection of extended feature. (XI_PRM_EXTENDED_FEATURE_SELECTOR)
	XI_EXT_FEATURE_SELECTOR xiAPIplus_Camera::GetExtendedFeatureSelector()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeatureSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE_SELECTOR, &val);
		CheckResult(res,"GetExtendedFeatureSelector");
		return (XI_EXT_FEATURE_SELECTOR)val;
	}
	
	XI_EXT_FEATURE_SELECTOR xiAPIplus_Camera::GetExtendedFeatureSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeatureSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetExtendedFeatureSelector" "_Maximum");
		return (XI_EXT_FEATURE_SELECTOR)val;
	}
	
	XI_EXT_FEATURE_SELECTOR xiAPIplus_Camera::GetExtendedFeatureSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeatureSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetExtendedFeatureSelector" "_Minimum");
		return (XI_EXT_FEATURE_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetExtendedFeatureSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeatureSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetExtendedFeatureSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetExtendedFeatureSelector(XI_EXT_FEATURE_SELECTOR ExtendedFeatureSelector)
	{
		
		CheckCamHandleInt("SetExtendedFeatureSelector",(int)ExtendedFeatureSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE_SELECTOR, ExtendedFeatureSelector);
		CheckResult(res,"SetExtendedFeatureSelector");
	}
	
	// Extended feature value. (XI_PRM_EXTENDED_FEATURE)
	int xiAPIplus_Camera::GetExtendedFeature()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeature");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE, &val);
		CheckResult(res,"GetExtendedFeature");
		return val;
	}
	
	int xiAPIplus_Camera::GetExtendedFeature_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeature" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetExtendedFeature" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetExtendedFeature_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeature" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetExtendedFeature" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetExtendedFeature_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetExtendedFeature" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetExtendedFeature" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetExtendedFeature(int ExtendedFeature)
	{
		
		CheckCamHandleInt("SetExtendedFeature",ExtendedFeature);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_EXTENDED_FEATURE, ExtendedFeature);
		CheckResult(res,"SetExtendedFeature");
	}
	
	// Selects device unit. (XI_PRM_DEVICE_UNIT_SELECTOR)
	XI_DEVICE_UNIT_SELECTOR xiAPIplus_Camera::GetDeviceUnitSelector()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_SELECTOR, &val);
		CheckResult(res,"GetDeviceUnitSelector");
		return (XI_DEVICE_UNIT_SELECTOR)val;
	}
	
	XI_DEVICE_UNIT_SELECTOR xiAPIplus_Camera::GetDeviceUnitSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDeviceUnitSelector" "_Maximum");
		return (XI_DEVICE_UNIT_SELECTOR)val;
	}
	
	XI_DEVICE_UNIT_SELECTOR xiAPIplus_Camera::GetDeviceUnitSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDeviceUnitSelector" "_Minimum");
		return (XI_DEVICE_UNIT_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetDeviceUnitSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDeviceUnitSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDeviceUnitSelector(XI_DEVICE_UNIT_SELECTOR DeviceUnitSelector)
	{
		
		CheckCamHandleInt("SetDeviceUnitSelector",(int)DeviceUnitSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_SELECTOR, DeviceUnitSelector);
		CheckResult(res,"SetDeviceUnitSelector");
	}
	
	// Selects register of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). (XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR)
	int xiAPIplus_Camera::GetDeviceUnitRegisterSelector()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegisterSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR, &val);
		CheckResult(res,"GetDeviceUnitRegisterSelector");
		return val;
	}
	
	int xiAPIplus_Camera::GetDeviceUnitRegisterSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegisterSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDeviceUnitRegisterSelector" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetDeviceUnitRegisterSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegisterSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDeviceUnitRegisterSelector" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetDeviceUnitRegisterSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegisterSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDeviceUnitRegisterSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDeviceUnitRegisterSelector(int DeviceUnitRegisterSelector)
	{
		
		CheckCamHandleInt("SetDeviceUnitRegisterSelector",DeviceUnitRegisterSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_SELECTOR, DeviceUnitRegisterSelector);
		CheckResult(res,"SetDeviceUnitRegisterSelector");
	}
	
	// Sets/gets register value of selected device unit(XI_PRM_DEVICE_UNIT_SELECTOR). (XI_PRM_DEVICE_UNIT_REGISTER_VALUE)
	int xiAPIplus_Camera::GetDeviceUnitRegister()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegister");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_VALUE, &val);
		CheckResult(res,"GetDeviceUnitRegister");
		return val;
	}
	
	int xiAPIplus_Camera::GetDeviceUnitRegister_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegister" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_VALUE XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetDeviceUnitRegister" "_Maximum");
		return val;
	}
	
	int xiAPIplus_Camera::GetDeviceUnitRegister_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegister" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_VALUE XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetDeviceUnitRegister" "_Minimum");
		return val;
	}

	int xiAPIplus_Camera::GetDeviceUnitRegister_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetDeviceUnitRegister" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_VALUE XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetDeviceUnitRegister" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetDeviceUnitRegister(int DeviceUnitRegister)
	{
		
		CheckCamHandleInt("SetDeviceUnitRegister",DeviceUnitRegister);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_DEVICE_UNIT_REGISTER_VALUE, DeviceUnitRegister);
		CheckResult(res,"SetDeviceUnitRegister");
	}
	
	// Callback address of pointer that is called upon long tasks (e.g. XI_PRM_WRITE_FILE_FFS). (XI_PRM_API_PROGRESS_CALLBACK)
	void xiAPIplus_Camera::GetApiProgressCallback(char* buffer, int buffer_length)
	{
		
		XI_RETURN res=xiGetParamString(camera_handle, XI_PRM_API_PROGRESS_CALLBACK, buffer, buffer_length);
		CheckResult(res,"GetApiProgressCallback");
	}
	
	void xiAPIplus_Camera::SetApiProgressCallback(char* new_value)
	{
		
		XI_RETURN res=xiSetParamString(camera_handle, XI_PRM_API_PROGRESS_CALLBACK, new_value, (DWORD)strlen(new_value));
		CheckResult(res,"SetApiProgressCallback");
	}
	
	// Selects the internal acquisition signal to read using XI_PRM_ACQUISITION_STATUS. (XI_PRM_ACQUISITION_STATUS_SELECTOR)
	XI_ACQUISITION_STATUS_SELECTOR xiAPIplus_Camera::GetAcquisitionStatusSelector()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatusSelector");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS_SELECTOR, &val);
		CheckResult(res,"GetAcquisitionStatusSelector");
		return (XI_ACQUISITION_STATUS_SELECTOR)val;
	}
	
	XI_ACQUISITION_STATUS_SELECTOR xiAPIplus_Camera::GetAcquisitionStatusSelector_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatusSelector" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS_SELECTOR XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionStatusSelector" "_Maximum");
		return (XI_ACQUISITION_STATUS_SELECTOR)val;
	}
	
	XI_ACQUISITION_STATUS_SELECTOR xiAPIplus_Camera::GetAcquisitionStatusSelector_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatusSelector" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS_SELECTOR XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionStatusSelector" "_Minimum");
		return (XI_ACQUISITION_STATUS_SELECTOR)val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionStatusSelector_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatusSelector" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS_SELECTOR XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionStatusSelector" "_Increment");
		return val;
	}
	
	void xiAPIplus_Camera::SetAcquisitionStatusSelector(XI_ACQUISITION_STATUS_SELECTOR AcquisitionStatusSelector)
	{
		
		CheckCamHandleInt("SetAcquisitionStatusSelector",(int)AcquisitionStatusSelector);
		
		XI_RETURN res=xiSetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS_SELECTOR, AcquisitionStatusSelector);
		CheckResult(res,"SetAcquisitionStatusSelector");
	}
	
	// Acquisition status(True/False) (XI_PRM_ACQUISITION_STATUS)
	XI_SWITCH xiAPIplus_Camera::GetAcquisitionStatus()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatus");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS, &val);
		CheckResult(res,"GetAcquisitionStatus");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetAcquisitionStatus_Maximum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatus" "_Maximum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS XI_PRM_INFO_MAX, &val);
		CheckResult(res,"GetAcquisitionStatus" "_Maximum");
		return (XI_SWITCH)val;
	}
	
	XI_SWITCH xiAPIplus_Camera::GetAcquisitionStatus_Minimum()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatus" "_Minimum");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS XI_PRM_INFO_MIN, &val);
		CheckResult(res,"GetAcquisitionStatus" "_Minimum");
		return (XI_SWITCH)val;
	}
	
	int xiAPIplus_Camera::GetAcquisitionStatus_Increment()
	{
		int val=0;
		
		CheckCamHandle("GetAcquisitionStatus" "_Increment");
		
		XI_RETURN res=xiGetParamInt(camera_handle, XI_PRM_ACQUISITION_STATUS XI_PRM_INFO_INCREMENT, &val);
		CheckResult(res,"GetAcquisitionStatus" "_Increment");
		return val;
	}
	


//-------------------------------------------------------------------------------------------------------------------
// Error codes xiApi
struct xiapi_errorcode_t
{
	XI_RETURN code;
	const char*     descr;
};

xiapi_errorcode_t xiAPIplus_errorcodes_list[]=
{
	XI_OK                             ,  "Function call succeeded",
		XI_INVALID_HANDLE                 ,  "Invalid handle",
		XI_READREG                        ,  "Register read error",
		XI_WRITEREG                       ,  "Register write error",
		XI_FREE_RESOURCES                 ,  "Freeing resources error",
		XI_FREE_CHANNEL                   ,  "Freeing channel error",
		XI_FREE_BANDWIDTH                 ,  "Freeing bandwith error",
		XI_READBLK                        ,  "Read block error",
		XI_WRITEBLK                       ,  "Write block error",
		XI_NO_IMAGE                       ,  "No image",
		XI_TIMEOUT                        ,  "Timeout",
		XI_INVALID_ARG                    ,  "Invalid arguments supplied",
		XI_NOT_SUPPORTED                  ,  "Not supported",
		XI_ISOCH_ATTACH_BUFFERS           ,  "Attach buffers error",
		XI_GET_OVERLAPPED_RESULT          ,  "Overlapped result",
		XI_MEMORY_ALLOCATION              ,  "Memory allocation error",
		XI_DLLCONTEXTISNULL               ,  "DLL context is NULL",
		XI_DLLCONTEXTISNONZERO            ,  "DLL context is non zero",
		XI_DLLCONTEXTEXIST                ,  "DLL context exists",
		XI_TOOMANYDEVICES                 ,  "Too many devices connected",
		XI_ERRORCAMCONTEXT                ,  "Camera context error",
		XI_UNKNOWN_HARDWARE               ,  "Unknown hardware",
		XI_INVALID_TM_FILE                ,  "Invalid TM file",
		XI_INVALID_TM_TAG                 ,  "Invalid TM tag",
		XI_INCOMPLETE_TM                  ,  "Incomplete TM",
		XI_BUS_RESET_FAILED               ,  "Bus reset error",
		XI_NOT_IMPLEMENTED                ,  "Not implemented",
		XI_SHADING_TOOBRIGHT              ,  "Shading is too bright",
		XI_SHADING_TOODARK                ,  "Shading is too dark",
		XI_TOO_LOW_GAIN                   ,  "Gain is too low",
		XI_INVALID_BPL                    ,  "Invalid sensor defect correction list",
		XI_BPL_REALLOC                    ,  "Error while sensor defect correction list reallocation",
		XI_INVALID_PIXEL_LIST             ,  "Invalid pixel list",
		XI_INVALID_FFS                    ,  "Invalid Flash File System",
		XI_INVALID_PROFILE                ,  "Invalid profile",
		XI_INVALID_CALIBRATION            ,  "Invalid calibration",
		XI_INVALID_BUFFER                 ,  "Invalid buffer",
		XI_INVALID_DATA                   ,  "Invalid data",
		XI_TGBUSY                         ,  "Timing generator is busy",
		XI_IO_WRONG                       ,  "Wrong operation open/write/read/close",
		XI_ACQUISITION_ALREADY_UP         ,  "Acquisition already started",
		XI_OLD_DRIVER_VERSION             ,  "Old version of device driver installed to the system.",
		XI_GET_LAST_ERROR                 ,  "To get error code please call GetLastError function.",
		XI_CANT_PROCESS                   ,  "Data cannot be processed",
		XI_ACQUISITION_STOPED             ,  "Acquisition is stopped. It needs to be started to perform operation.",
		XI_ACQUISITION_STOPED_WERR        ,  "Acquisition has been stopped with an error.",
		XI_INVALID_INPUT_ICC_PROFILE      ,  "Input ICC profile missing or corrupted",
		XI_INVALID_OUTPUT_ICC_PROFILE     ,  "Output ICC profile missing or corrupted",
		XI_DEVICE_NOT_READY               ,  "Device not ready to operate",
		XI_SHADING_TOOCONTRAST            ,  "Shading is too contrast",
		XI_ALREADY_INITIALIZED            ,  "Module already initialized",
		XI_NOT_ENOUGH_PRIVILEGES          ,  "Application does not have enough privileges (one or more app)",
		XI_NOT_COMPATIBLE_DRIVER          ,  "Installed driver is not compatible with current software",
		XI_TM_INVALID_RESOURCE            ,  "TM file was not loaded successfully from resources",
		XI_DEVICE_HAS_BEEN_RESETED        ,  "Device has been reset, abnormal initial state",
		XI_NO_DEVICES_FOUND               ,  "No Devices Found",
		XI_RESOURCE_OR_FUNCTION_LOCKED    ,  "Resource (device) or function locked by mutex",
		XI_BUFFER_SIZE_TOO_SMALL          ,  "Buffer provided by user is too small",
		XI_COULDNT_INIT_PROCESSOR         ,  "Couldnt initialize processor.",
		XI_NOT_INITIALIZED                ,  "The object/module/procedure/process being referred to has not been started.",
		XI_RESOURCE_NOT_FOUND             ,  "Resource not found(could be processor, file, item...).",
		XI_UNKNOWN_PARAM                  ,  "Unknown parameter",
		XI_WRONG_PARAM_VALUE              ,  "Wrong parameter value",
		XI_WRONG_PARAM_TYPE               ,  "Wrong parameter type",
		XI_WRONG_PARAM_SIZE               ,  "Wrong parameter size",
		XI_BUFFER_TOO_SMALL               ,  "Input buffer is too small",
		XI_NOT_SUPPORTED_PARAM            ,  "Parameter is not supported",
		XI_NOT_SUPPORTED_PARAM_INFO       ,  "Parameter info not supported",
		XI_NOT_SUPPORTED_DATA_FORMAT      ,  "Data format is not supported",
		XI_READ_ONLY_PARAM                ,  "Read only parameter",
		XI_BANDWIDTH_NOT_SUPPORTED        ,  "This camera does not support currently available bandwidth",
		XI_INVALID_FFS_FILE_NAME          ,  "FFS file selector is invalid or NULL",
		XI_FFS_FILE_NOT_FOUND             ,  "FFS file not found",
		XI_PARAM_NOT_SETTABLE             ,  "Parameter value cannot be set (might be out of range or invalid).",
		XI_SAFE_POLICY_NOT_SUPPORTED      ,  "Safe buffer policy is not supported. E.g. when transport target is set to GPU (GPUDirect).",
		XI_GPUDIRECT_NOT_AVAILABLE        ,  "GPUDirect is not available. E.g. platform isn't supported or CUDA toolkit isn't installed.",
		XI_PROC_OTHER_ERROR               ,  "Processing error - other",
		XI_PROC_PROCESSING_ERROR          ,  "Error while image processing.",
		XI_PROC_INPUT_FORMAT_UNSUPPORTED  ,  "Input format is not supported for processing.",
		XI_PROC_OUTPUT_FORMAT_UNSUPPORTED ,  "Output format is not supported for processing.",
		XI_OUT_OF_RANGE                   ,  "Parameter value is out of range",
		
};

//-------------------------------------------------------------------------------------------------------------------
// xiAPIplus implementation file
// XIMEA Application Programming Interface Object Oriented Approach
//-------------------------------------------------------------------------------------------------------------------

//#include <os_common_header.h>
//#include <stdio.h>
//#include <xiAPIplus/xiapiplus.h>

// forward declarations

void ReportException(XI_RETURN res, const char* location);

// -----------------------------------------------
// parameters handlers implementation
// -----------------------------------------------

//#include "xiAPIplus_parameters.cpp"

// -----------------------------------------------
// xiAPIplus
// -----------------------------------------------

unsigned long xiAPIplus::GetNumberOfConnectedCameras()
{
	DWORD count=0;
	XI_RETURN res=xiGetNumberDevices(&count);
	if (res) ReportException(res,"GetNumberOfConnectedCameras");
	return count;
}

void xiAPIplus::EnableCamEnumGoldenEnabled()
{
	XI_RETURN res=xiSetParamInt(NULL, XI_PRM_CAM_ENUM_GOLDEN_ENABLED, XI_ON);
	if (res) ReportException(res,"EnableCamEnumGoldenEnabled");
}

#if 0
// -----------------------------------------------
// general parametes interface
// working with set of parameters
// -----------------------------------------------

void xiAPIplus_Camera_Parameters::Save_to_File(char* filename);
void xiAPIplus_Camera_Parameters::Load_from_File(char* filename);
void xiAPIplus_Camera_Parameters::Save_to_Preset(int id);
void xiAPIplus_Camera_Parameters::Load_from_Preset(int id);
int xiAPIplus_Camera_Parameters::Get_Count();
void xiAPIplus_Camera_Parameters::Get_Name(int id, char* name, int name_max_size);
void xiAPIplus_Camera_Parameters::Get_Value(int id, char* value, int value_max_size);
void xiAPIplus_Camera_Parameters::Set_Value(int id, char* value);

#endif // 0

// exception handling
void ReportException(XI_RETURN res, const char* location)
{
	// generate exception
	char descr[200]="(missing_error_description)";
	int total_errors=sizeof(xiAPIplus_errorcodes_list)/sizeof(xiapi_errorcode_t);
	// find description
	for(int i=0;i<total_errors;i++)
	{
		if (xiAPIplus_errorcodes_list[i].code == res)
		{
			// found
			//sprintf_s(descr,sizeof(descr),"%s (xiAPIplus_Camera::%s)",xiAPIplus_errorcodes_list[i].descr,location);
			break;
		}
	}
	throw xiAPIplus_Exception(res, descr);
}

void xiAPIplus_Camera::CheckResult(XI_RETURN res, const char* location)
{
	xiAPIPlusDP((DBFOUT "%d\n",res));
	if (res != XI_OK)
	{
		ReportException(res, location);
	}
}

void xiAPIplus_Camera::CheckResultParam(XI_RETURN res, const char* location, const char* param)
{
	xiAPIPlusDP((DBFOUT "%d\n",res));
	if (res != XI_OK)
	{
		char buff[MAX_PATH] = "";
		sprintf(buff, "%s - %s", location, param);
		ReportException(res, buff);
	}
}

void xiAPIplus_Exception::GetDescription(char* name, size_t name_max_size)
{
	if (!name) return;
	if (!description) return;
	if (name_max_size<sizeof(description)) return;
	strncpy(name,description,name_max_size);
}

void xiAPIplus_Exception::PrintError()
{
	char descr[100]="";
	GetDescription(descr,sizeof(descr));
	printf("xiAPIplus-Error %d:%s\n",GetErrorNumber(),descr);
}

unsigned long xiAPIplus_Camera::GetNumberOfConnectedCameras()
{
	xiAPIplus api;
	return api.GetNumberOfConnectedCameras();
}

// -----------------------------------------------
// class xiAPIplus - Image
// -----------------------------------------------

xiAPIplus_Image::xiAPIplus_Image()
{
	memset(&image,0,sizeof(image));
	image.size = sizeof(image);
	is_copy = false;
}

// -----------------------------------------------
// class xiAPIplus - Camera
// -----------------------------------------------

xiAPIplus_Camera::xiAPIplus_Camera()
{
	camera_handle=NULL;
	image_timeout_ms=1000;
	acquisition_active=false;
	is_debug_enabled=false;
}

xiAPIplus_Camera::~xiAPIplus_Camera()
{
	Close();
}

void xiAPIplus_Camera::OpenFirst()
{
	OpenByID(0);
}

void xiAPIplus_Camera::OpenByID(unsigned long id)
{
	xiAPIPlusDP((DBFIN "%s\n","OpenByID"));
	XI_RETURN res=xiOpenDevice(id, &camera_handle);
	CheckResult(res,"OpenByID");

	if(!camera_handle) res = XI_INVALID_HANDLE;
	CheckResult(res,"OpenByID");
}
void xiAPIplus_Camera::OpenBySN(char* serial_number)
{
	if (!serial_number)  ReportException(XI_WRONG_PARAM_VALUE, "xiAPIplus_Camera::OpenBySN()");
	
	xiAPIPlusDP((DBFIN "%s\n", "OpenBySN"));
	XI_RETURN res = xiOpenDeviceBy(XI_OPEN_BY_SN, serial_number, &camera_handle);
	CheckResult(res, "OpenBySN");

	if (!camera_handle) res = XI_INVALID_HANDLE;
	CheckResult(res, "OpenBySN");
}

void xiAPIplus_Camera::OpenByPath(char* device_path)
{
	if(!device_path)  ReportException(XI_WRONG_PARAM_VALUE, "xiAPIplus_Camera::OpenByPath()");

	xiAPIPlusDP((DBFIN "%s\n","OpenByPath"));
	XI_RETURN res=xiOpenDeviceBy(XI_OPEN_BY_INST_PATH, device_path, &camera_handle);
	CheckResult(res,"OpenByPath");

	if(!camera_handle) res = XI_INVALID_HANDLE;
	CheckResult(res,"OpenByPath");
}

void xiAPIplus_Camera::OpenByUserID(char* user_id)
{
	if(!user_id)  ReportException(XI_WRONG_PARAM_VALUE, "xiAPIplus_Camera::OpenByUserID()");

	xiAPIPlusDP((DBFIN "%s\n","OpenByUserID"));
	XI_RETURN res=xiOpenDeviceBy(XI_OPEN_BY_USER_ID, user_id, &camera_handle);
	CheckResult(res,"OpenByUserID");

	if(!camera_handle) res = XI_INVALID_HANDLE;
	CheckResult(res,"OpenByUserID");
}

void xiAPIplus_Camera::OpenByLocation(char* location)
{
	if(!location)  ReportException(XI_WRONG_PARAM_VALUE, "xiAPIplus_Camera::OpenByLocation()");

	xiAPIPlusDP((DBFIN "%s\n","OpenByUserID"));
	XI_RETURN res=xiOpenDeviceBy(XI_OPEN_BY_LOC_PATH, location, &camera_handle);
	CheckResult(res,"OpenByLocation");

	if(!camera_handle) res = XI_INVALID_HANDLE;
	CheckResult(res,"OpenByLocation");
}

// ---------------------------------------------------------------------
// camera close

void xiAPIplus_Camera::Close()
{
	xiAPIPlusDP((DBFIN "%s\n","Close"));
	if (camera_handle)
	{
		XI_RETURN res=xiCloseDevice(camera_handle);
		CheckResult(res,"Close");
	}
	camera_handle=NULL;
}

// ---------------------------------------------------------------------
// acquisition
void xiAPIplus_Camera::StartAcquisition()
{
	CheckCamHandle("StartAcquisition");
	XI_RETURN res=xiStartAcquisition(camera_handle);
	CheckResult(res,"StartAcquisition");
	acquisition_active=true;
}

void xiAPIplus_Camera::StopAcquisition()
{
	CheckCamHandle("StopAcquisition");
	XI_RETURN res=xiStopAcquisition(camera_handle);
	CheckResult(res,"StopAcquisition");
	acquisition_active=false;
}

bool xiAPIplus_Camera::IsAcquisitionActive()
{
	return acquisition_active;
}

// ---------------------------------------------------------------------
// get next image
// receiving next image from xiAPI
// if (app_image is defined) storing result to app_image
// else storing result to last_image, also returing pointer to it

xiAPIplus_Image* xiAPIplus_Camera::GetNextImage(xiAPIplus_Image* app_image)
{
	CheckCamHandle("GetNextImage");
	xiAPIplus_Image* image=&last_image;
//	std::chrono::time_point<std::chrono::high_resolution_clock> start_time, end_time;
	if (app_image)
		image = app_image;

	XI_RETURN res = XI_OK;
//	start_time = std::chrono::high_resolution_clock::now();
	res = xiGetImage(camera_handle, image_timeout_ms, image->GetXI_IMG());
//	end_time = std::chrono::high_resolution_clock::now();
//	std::cout << "tcp = " << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() << std::endl;
	CheckResult(res,"GetNextImage");
	return image;	
}

// ---------------------------------------------------------------------
// get last received image
// returns last received image (by function GetNextImage)

xiAPIplus_Image* xiAPIplus_Camera::GetLastImage()
{
	return &last_image;
}


// ---------------------------------------------------------------------
// set next image timeout in milliseconds

void xiAPIplus_Camera::SetNextImageTimeout_ms(int timeout_ms)
{
	image_timeout_ms=timeout_ms;
}

// ---------------------------------------------------------------------
// get next image timeout in milliseconds

int xiAPIplus_Camera::GetNextImageTimeout_ms()
{
	return image_timeout_ms;
}

// ---------------------------------------------------------------------
// return xiAPI parameter by name

void xiAPIplus_Camera::GetXIAPIParamString(char* xiapi_param_name, char* value, int value_max_size)
{
	CheckCamHandle("GetXIAPIParamStr");
	XI_RETURN res=xiGetParamString(camera_handle, xiapi_param_name, value, value_max_size);
	CheckResultParam(res,"GetXIAPIParamStr", xiapi_param_name);
}

void xiAPIplus_Camera::SetXIAPIParamString(char* xiapi_param_name, char* value, unsigned int value_max_size)
{
	CheckCamHandle("SetXIAPIParamStr");
	XI_RETURN res=xiSetParamString(camera_handle, xiapi_param_name, value, value_max_size);
	CheckResultParam(res,"SetXIAPIParamStr", xiapi_param_name);
}

void xiAPIplus_Camera::GetXIAPIParamInt(char* xiapi_param_name, int* value)
{
	CheckCamHandle("GetXIAPIParamInt");
	XI_RETURN res=xiGetParamInt(camera_handle, xiapi_param_name, value);
	CheckResultParam(res,"GetXIAPIParamInt", xiapi_param_name);
}
void xiAPIplus_Camera::SetXIAPIParamInt(char* xiapi_param_name, int value)
{
	CheckCamHandle("SetXIAPIParamInt");
	XI_RETURN res=xiSetParamInt(camera_handle, xiapi_param_name, value);
	CheckResultParam(res,"SetXIAPIParamInt", xiapi_param_name);
}

void xiAPIplus_Camera::GetXIAPIParamFloat(char* xiapi_param_name, float* value)
{
	CheckCamHandle("GetXIAPIParamFloat");
	XI_RETURN res=xiGetParamFloat(camera_handle, xiapi_param_name, value);
	CheckResultParam(res,"GetXIAPIParamFloat", xiapi_param_name);
}

void xiAPIplus_Camera::SetXIAPIParamFloat(char* xiapi_param_name, float value)
{
	CheckCamHandle("SetXIAPIParamFloat");
	XI_RETURN res=xiSetParamFloat(camera_handle, xiapi_param_name, value);
	CheckResultParam(res,"SetXIAPIParamFloat", xiapi_param_name);
}

void xiAPIplus_Camera::SetXIAPIParam(char* xiapi_param_name, void* value, size_t value_size, XI_PRM_TYPE type)
{
	CheckCamHandle("SetXIAPIParam");
	XI_RETURN res=xiSetParam(camera_handle, xiapi_param_name, value, (DWORD)value_size,type);
	CheckResultParam(res,"SetXIAPIParam", xiapi_param_name);
}

void xiAPIplus_Camera::GetXIAPIParam(char* xiapi_param_name, void* value, size_t * value_size, XI_PRM_TYPE * type)
{
	CheckCamHandle("GetXIAPIParam");
	XI_RETURN res=xiGetParam(camera_handle, xiapi_param_name, value, (DWORD*)value_size,type);
	CheckResultParam(res,"GetXIAPIParam", xiapi_param_name);
}

// ---------------------------------------------------------------------
// Image Destructor

xiAPIplus_Image::~xiAPIplus_Image()
{
	if (IsCopy())
	{
		// desctruct copy
		XI_IMG* image=GetXI_IMG();
		if (image->bp && GetPixelsArraySize())
		{
			if(image->bp)
				free(image->bp);
		}
	}
}

// ---------------------------------------------------------------------
// get bytes per pixel

int xiAPIplus_Image::GetBytesPerPixel()
{
	int bpp=1;
	switch (image.frm)
	{
	case XI_MONO8:
	case XI_RAW8:
		bpp=1;
		break;
	case XI_MONO16:
	case XI_RAW16:
		bpp=2;
		break;
	case XI_RGB24:
		bpp=3;
		break;
	case XI_RGB32:
		bpp=4;
		break;
	case XI_RGB_PLANAR:
		bpp=3;
		break;
	default:
		ReportException(XI_NOT_SUPPORTED_DATA_FORMAT, "GetBytesPerPixel");
		break;
	}
	return bpp;
}

// ---------------------------------------------------------------------
// get bytes per pixel

int xiAPIplus_Image::GetTotalPixelValues()
{
	int vals=1;
	switch (image.frm)
	{
	case XI_MONO8:
	case XI_RAW8:
	case XI_RGB24:
	case XI_RGB32:
	case XI_RGB_PLANAR:
		vals=0x100;
		break;
	case XI_MONO16:
	case XI_RAW16:
		vals=0x1000; // 4096
		break;
	default:
		ReportException(XI_NOT_SUPPORTED_DATA_FORMAT, "GetTotalPixelValues");
		break;
	}
	return vals;
}

// ---------------------------------------------------------------------

int xiAPIplus_Image::GetBitCount()
{
	int vals=1;
	switch (image.frm)
	{
	case XI_MONO8:
	case XI_RAW8:       vals=8; break;
	case XI_RGB24:
	case XI_RGB_PLANAR: vals=24; break;
	case XI_RGB32:	    vals=32; break;
	case XI_MONO16:
	case XI_RAW16:      vals=16; break;
	default:
		ReportException(XI_NOT_SUPPORTED_DATA_FORMAT, "GetBitCount");
		break;
	}
	return vals;
}

// ---------------------------------------------------------------------
// Image Clone
// make new copy of existing image
// this copy should be deleted by caller after finishing of use

void xiAPIplus_Image::CopyTo(xiAPIplus_Image* image_copy)
{
	XI_IMG* orig=GetXI_IMG();
	XI_IMG* clone=image_copy->GetXI_IMG();
	// copy structure
	memcpy(clone,orig,sizeof(XI_IMG));
	// copy image data
	clone->bp = malloc(GetPixelsArraySize());
	if (!clone->bp)
	{
		ReportException(XI_MEMORY_ALLOCATION, "CopyTo");
	}
	memcpy(clone->bp, orig->bp, GetPixelsArraySize());
}

// ---------------------------------------------------------------------
// return core xiAPI image

XI_IMG* xiAPIplus_Image::GetXI_IMG()
{
	return &image;
}

// ---------------------------------------------------------------------

int xiAPIplus_Image::GetPadding_X()
{
	switch(image.frm)
	{
	case XI_RAW16:
	case XI_MONO16:
		return image.padding_x/2;
	default:
		return image.padding_x;	
	}	
}

// ---------------------------------------------------------------------


xiAPIplus_ImageProcessing::xiAPIplus_ImageProcessing()
{
	processing_handle_ = NULL;
	XI_RETURN res=xiProcOpen(&processing_handle_);
	CheckResult(res,"xiProcOpen");
}

// ---------------------------------------------------------------------

xiAPIplus_ImageProcessing::~xiAPIplus_ImageProcessing()
{
	XI_RETURN res=xiProcClose(processing_handle_);
	CheckResult(res,"xiProcClose");
}

// ---------------------------------------------------------------------

void xiAPIplus_ImageProcessing::CheckResult(XI_RETURN res, const char* location)
{
	if (res != XI_OK)
	{
		ReportException(res, location);
	}
}

// -------------------------------------------------------------------

void xiAPIplus_ImageProcessing::SetParam(const char* prm, void* val, DWORD size, XI_PRM_TYPE type)
{
	XI_RETURN res=xiProcSetParam(processing_handle_,prm,val,size,type);
	CheckResult(res,"xiProcSetParam");
}

// ---------------------------------------------------------------------

void xiAPIplus_ImageProcessing::PushImage(unsigned char* first_pixel)
{
	XI_RETURN res=xiProcPushImage(processing_handle_,first_pixel);
	CheckResult(res,"xiProcPushImage");
}

// ---------------------------------------------------------------------

void xiAPIplus_ImageProcessing::PullImage()
{
	XI_RETURN res=xiProcPullImage(processing_handle_,0, last_image_.GetXI_IMG());
	CheckResult(res,"xiPullImage");
}

// ---------------------------------------------------------------------

void xiAPIplus_ImageProcessing::GetImage(xiAPIplus_Image* ret_image)
{
	last_image_.CopyTo(ret_image);
}

// ---------------------------------------------------------------------//#include "XiSampleOpencv.hpp"




/**********************************************************************************/
/**
* Initialize the xiAPIplusCameraOcv class.
*/
xiAPIplusCameraOcv::xiAPIplusCameraOcv(){

	cv_image_ = cvCreateImage(cvSize( 1, 1), IPL_DEPTH_8U, 1);
	cv_mat_image_ = cv::Mat(0,1,CV_32FC1);
	next_image_ = NULL;
	counter_=0;
	index_=0;
}

/**********************************************************************************/
/**
* Class destructor. Free allocated memory, release images
*/
xiAPIplusCameraOcv::~xiAPIplusCameraOcv(){
	printf("Closing xiAPIplus_Ocv camera\n");
	if(cv_image_)
		cvReleaseImage(&cv_image_);
	cv_mat_image_.release();
}

/**********************************************************************************/
/**
* Reads an image from the camera using XiAPI, stores the image in OpenCV format.
* @return OpenCV IpliImage* image. 
*/

//Reads an image and converts it to OpenCV IplImage
IplImage*  xiAPIplusCameraOcv::GetNextImageOcvIpl(){
	next_image_ =	GetNextImage(NULL);
	return ConvertOcvIpl(next_image_);
}

/**********************************************************************************/
/**
* Reads an image from the camera using XiAPI, stores the image in OpenCV Mat format.
* @return OpenCV Mat image. 
*/
cv::Mat xiAPIplusCameraOcv::GetNextImageOcvMat(){
	cv_mat_image_ = cv::cvarrToMat(GetNextImageOcvIpl());
	return cv_mat_image_;
}

/**********************************************************************************/
/**
* Converts a XiAPI image (xiAPIplus_Image*) to OpenCV IplImage *.
* @param input_image[in] Input xiAPIplus_Image* to be converted.
* @return converted OpenCV IpliImage* image. 
*/
IplImage *	xiAPIplusCameraOcv::ConvertOcvIpl(xiAPIplus_Image * input_image){
	counter_++;
	next_image_ = input_image;	
	// update cvImage after format has changed
	resetCvImage_();
	// allocate frame buffer copy pixel data
	cv_image_->imageData = (char*)input_image->GetPixels();
		
	if (cv_image_)
		return cv_image_;
	else {
		printf("Error: converting XI_IMG to IplImage\n");
		return NULL;
	}
}

/**********************************************************************************/
/**
* Converts a XiAPI image (xiAPIplus_Image*) to OpenCV  .
* @param input_image[in] Input xiAPIplus_Image* to be converted.
* @return converted OpenCV Mat. 
*/
cv::Mat	xiAPIplusCameraOcv::ConvertOcvMat(xiAPIplus_Image *  input_image){
	cv_mat_image_= cv::cvarrToMat(ConvertOcvIpl(input_image));
	return cv_mat_image_;
}

/**********************************************************************************/
/**
* Resets the Opencv image if properties of XI_IMG have changed. Resets the cv_image_.
*/
void xiAPIplusCameraOcv::resetCvImage_()
{
	bool do_reset = false;
	// first check basic image resolution
	if (next_image_->GetDataFormat()!=XI_MONO8){
		if(((int) next_image_->GetWidth()!= cv_image_->width) || ((int)next_image_->GetHeight()!= cv_image_->height))
			do_reset = true; 
	}
	else {
		if(((int) (next_image_->GetWidth()+next_image_->GetPadding_X())!= cv_image_->width) || ((int)next_image_->GetHeight()!= cv_image_->height))
			do_reset = true; 
	}	

	// afterwards check image format
	switch( next_image_->GetDataFormat())
	{
	case XI_MONO8       :
	case XI_RAW8         :
		{
			if(cv_image_->depth != IPL_DEPTH_8U || cv_image_->nChannels != 1)
				do_reset = true;
		}
		break;
	case XI_MONO16      :
	case XI_RAW16        :
		{
			if(cv_image_->depth != IPL_DEPTH_16U || cv_image_->nChannels != 1)
				do_reset = true;
		}
		break;
	case XI_RGB24       :
	case XI_RGB_PLANAR  :
		{ 
			if(cv_image_->depth != IPL_DEPTH_8U || cv_image_->nChannels != 3)
				do_reset = true;
		}
		break;
	case XI_RGB32       :
		{
			if(cv_image_->depth != IPL_DEPTH_8U || cv_image_->nChannels != 4)
				do_reset = true;
		}
		break;
	default:
		printf("CvCaptureCAM_XIMEA::resetCvImage ERROR: Unknown format.");
		return;
	}


	if(do_reset)
	{		
		if(cv_image_) cvReleaseImage(&cv_image_);
		cv_image_ = NULL;

		switch( next_image_->GetDataFormat())
		{
		case XI_MONO8       : cv_image_ = cvCreateImage(cvSize( next_image_->GetWidth()+next_image_->GetPadding_X(), next_image_->GetHeight()), IPL_DEPTH_8U, 1); printf ("Doing reset to mono\n"); break;
		case XI_RAW8        : cv_image_ = cvCreateImage(cvSize( next_image_->GetWidth(), next_image_->GetHeight()), IPL_DEPTH_8U, 1); printf ("Doing reset to mono\n"); break;		
		case XI_MONO16      :
		case XI_RAW16       : cv_image_ = cvCreateImage(cvSize( next_image_->GetWidth(), next_image_->GetHeight()), IPL_DEPTH_16U, 1); printf ("Doing reset to mono\n");break;
		case XI_RGB24       :
		case XI_RGB_PLANAR  : cv_image_ = cvCreateImage(cvSize( next_image_->GetWidth(), next_image_->GetHeight()), IPL_DEPTH_8U, 3);	printf ("Doing reset to RGB\n");; break;
		case XI_RGB32       : cv_image_ = cvCreateImage(cvSize( next_image_->GetWidth(), next_image_->GetHeight()), IPL_DEPTH_8U, 4);	printf ("Doing reset to RGB\n");; break;
		default :
			printf("CvCaptureCAM_XIMEA::resetCvImage ERROR: Unknown format.");
			return;
		}
	}
	return;
}
