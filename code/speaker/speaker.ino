#include <A2DPVolumeControl.h>
#include <BluetoothA2DP.h>
#include <BluetoothA2DPCommon.h>
#include <BluetoothA2DPSink.h>
#include <BluetoothA2DPSinkQueued.h>
#include <BluetoothA2DPSource.h>
#include <config.h>
#include <SoundData.h>
#include "BluetoothA2DPSink.h"



BluetoothA2DPSink a2dp_sink;
void setup() {
    a2dp_sink.start("MyMusic");
}
void loop() {}
