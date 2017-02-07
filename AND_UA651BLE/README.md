## Setting up the Medical GW to synchronise blood pressure measurements from the A&D Medical UA561-BLE to an MQTT broker, and send commands to BLE notification base

### Pairing with and setting up encryption keys for the Blood Pressure device
1. Install `libbluetooth-dev`
2. Build executable
  * `cd ThingML-BLE/AND_UA651BLE/1_Pair/thingml-gen/posixmt/`
  * `make -j 4`
3. Start the node `sudo ./BLE_PAIR`
4. Initiate pairing from the UA-651BLE device by holding the `Start` button until `Pair` appears on the screen.

### Configuring and building the Medical GW logic
1. Install `libbluetooth-dev`
2. Build executable
  * `cd ThingML-BLE/AND_UA651BLE/2_Sync/thingml-gen/posixmt/`
  * `make -j 4`
3. Start the node `sudo ./AND_UA651BLE_SYNC`
