## Setting up the Medical GW to synchronise blood pressure measurements from the A&D Medical UA561-BLE to an MQTT broker, and send commands to BLE notification base

### Pairing with and setting up encryption keys for the Blood Pressure device

### Configuring and building the Medical GW logic
1. Install `libbluetooth-dev`
2. Build executable
  * `cd ThingML-BLE/AND_UA651BLE/2_Sync/thingml-gen/posixmt/`
  * `make -j 4`
3. Start the node `sudo ./AND_UA651BLE_SYNC`
