/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing HCISocketProxyImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "HCISocketProxyImpl.h"

/*****************************************************************************
 * Implementation for type : HCISocketProxyImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void HCISocketProxy_Socket_OnExit(int state, struct HCISocketProxyImpl_Instance *_instance);
//Prototypes: Message Sending
void HCISocketProxyImpl_send_Socket_Opened(struct HCISocketProxyImpl_Instance *_instance, bdaddr_t Address);
void HCISocketProxyImpl_send_Socket_Closed(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_send_Events_ResetCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLocalNameCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_DisconnectStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_DisconnectionCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason);
void HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_LEAdvertisementReport(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data);
void HCISocketProxyImpl_send_Events_LECreateConnectionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_Events_LEConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy);
void HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy);
void HCISocketProxyImpl_send_Events_LERandCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random);
void HCISocketProxyImpl_send_Events_LEEncryptCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted);
void HCISocketProxyImpl_send_Events_EncryptionChanged(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled);
void HCISocketProxyImpl_send_Events_LEStartEncryptionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void HCISocketProxyImpl_send_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void HCISocketProxyImpl_send_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void HCISocketProxyImpl_send_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void HCISocketProxyImpl_send_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void HCISocketProxyImpl_send_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void HCISocketProxyImpl_send_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void HCISocketProxyImpl_send_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void HCISocketProxyImpl_send_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void HCISocketProxyImpl_send_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void HCISocketProxyImpl_send_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void HCISocketProxyImpl_send_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void HCISocketProxyImpl_send_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void HCISocketProxyImpl_send_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void HCISocketProxyImpl_send_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void HCISocketProxyImpl_send_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void HCISocketProxyImpl_send_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_send_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void HCISocketProxyImpl_send_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_send_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_send_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_send_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle);
void HCISocketProxyImpl_send_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_send_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_send_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_send_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
void f_HCISocketProxyImpl_OpenSocket(struct HCISocketProxyImpl_Instance *_instance);
void f_HCISocketProxyImpl_CloseSocket(struct HCISocketProxyImpl_Instance *_instance);
uint8_t f_HCISocketProxyImpl_SocketIsOpen(struct HCISocketProxyImpl_Instance *_instance);
bdaddr_t f_HCISocketProxyImpl_GetBTAddress(struct HCISocketProxyImpl_Instance *_instance);
void f_HCISocketProxyImpl_SendCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t Group, uint16_t Command, uint8_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_SendACLData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t CID, uint16_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_StartSocketReader(struct HCISocketProxyImpl_Instance *_instance);
void f_HCISocketProxyImpl_HandleACLData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t PacketBoundary, uint8_t Broadcast, uint16_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_OnL2CAPData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_DecodeEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t Event, uint8_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_OnCommandCompletedEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint16_t Group, uint16_t Command, uint8_t * Data);
void f_HCISocketProxyImpl_OnCommandStatusEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint16_t Group, uint16_t Command, uint8_t Status);
void f_HCISocketProxyImpl_OnLEMetaEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t SubEventCode, uint8_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_OnSMPData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data);
void f_HCISocketProxyImpl_OnATTData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data);
ble_uuid_t f_HCISocketProxyImpl_ReadUUID(struct HCISocketProxyImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_HCISocketProxyImpl_MakeUUID(struct HCISocketProxyImpl_Instance *_instance, const char * Text);
void f_HCISocketProxyImpl_PrintUUID(struct HCISocketProxyImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function OpenSocket
void f_HCISocketProxyImpl_OpenSocket(struct HCISocketProxyImpl_Instance *_instance) {

      // Find the device ID of address specified
      int device_id = hci_devid(_instance->HCISocketProxy_Device_var);
      if (device_id < 0) {
        printf("[ERROR] Couldn't find device with address ");
        fflush(stdout);
        perror(_instance->HCISocketProxy_Device_var);
        return;
      }
      // Open the device
      int handle = hci_open_dev(device_id);
      if (handle < 0) {
        perror("[ERROR] Couldn't open HCI socket");
        return;
      }
      // Set socket filters to give us all events from the Controller
      struct hci_filter filt;
      filt.type_mask = 0xFFFFFFFF;
      filt.event_mask[0] = 0xFFFFFFFF;
      filt.event_mask[1] = 0xFFFFFFFF;
      filt.opcode = 0x0000;
      if (setsockopt(handle, SOL_HCI, HCI_FILTER, &filt, sizeof(filt)) < 0) {
        perror("[ERROR] Couldn't set HCI socket filter");
        hci_close_dev(handle);
        return;
      }
      // We are open for business
      _instance->HCISocketProxyImpl_DevHandle_var = handle;
      
f_HCISocketProxyImpl_StartSocketReader(_instance);

    
}
// Definition of function CloseSocket
void f_HCISocketProxyImpl_CloseSocket(struct HCISocketProxyImpl_Instance *_instance) {
hci_close_dev(_instance->HCISocketProxyImpl_DevHandle_var);
}
// Definition of function SocketIsOpen
uint8_t f_HCISocketProxyImpl_SocketIsOpen(struct HCISocketProxyImpl_Instance *_instance) {
return _instance->HCISocketProxyImpl_DevHandle_var >= 0;
}
// Definition of function GetBTAddress
bdaddr_t f_HCISocketProxyImpl_GetBTAddress(struct HCISocketProxyImpl_Instance *_instance) {
;bdaddr_t Address = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
if(_instance->HCISocketProxyImpl_DevHandle_var >= 0) {

        int device_id = hci_devid(_instance->HCISocketProxy_Device_var);
        if (device_id < 0) {
          printf("[ERROR] Couldn't find device with address ");
          fflush(stdout);
          perror(_instance->HCISocketProxy_Device_var);
        }
        // Get the address
        hci_devba(device_id, &Address);
      

}
return Address;
}
// Definition of function SendCommand
void f_HCISocketProxyImpl_SendCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t Group, uint16_t Command, uint8_t Length, uint8_t * Data) {
if(_instance->HCISocketProxyImpl_DevHandle_var >= 0) {

        if (hci_send_cmd(_instance->HCISocketProxyImpl_DevHandle_var, Group, Command, Length, Data) < 0) {
          // Something went wrong, just close the socket and give up
          // It will eventually go into closed state and inform others
          hci_close_dev(_instance->HCISocketProxyImpl_DevHandle_var);
          _instance->HCISocketProxyImpl_DevHandle_var = -1;
        }
      

}
}
// Definition of function SendACLData
void f_HCISocketProxyImpl_SendACLData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t CID, uint16_t Length, uint8_t * Data) {
if(_instance->HCISocketProxyImpl_DevHandle_var >= 0) {

        uint8_t buffer[HCI_MAX_ACL_SIZE];
        buffer[0] = HCI_ACLDATA_PKT;
        *((uint16_t*)&buffer[1]) = Handle & 0x0FFF;
        *((uint16_t*)&buffer[3]) = Length + 4;
        *((uint16_t*)&buffer[5]) = Length;
        *((uint16_t*)&buffer[7]) = CID;
        memcpy(&buffer[9], Data, Length);

        while (write(_instance->HCISocketProxyImpl_DevHandle_var, buffer, Length+9) < 0) {
          if (errno == EAGAIN || errno == EINTR)
            continue;

          hci_close_dev(_instance->HCISocketProxyImpl_DevHandle_var);
          _instance->HCISocketProxyImpl_DevHandle_var = -1;
        }

      

}
}
// Fork a thread to execute the function f_HCISocketProxyImpl_StartSocketReader

// Struct for the parameters of the function  f_HCISocketProxyImpl_StartSocketReader
struct f_HCISocketProxyImpl_StartSocketReader_struct {
  struct HCISocketProxyImpl_Instance *_instance;

  pthread_mutex_t *lock;
  pthread_cond_t *cv;
};

// Definition of function start_receiver_process (executed in a separate thread)
void f_HCISocketProxyImpl_StartSocketReader_run(struct HCISocketProxyImpl_Instance *_instance)
{
  ;uint8_t MessageType;
;uint8_t EventType;
;uint8_t Length;
;uint16_t Handle;
;uint8_t PacketBoundary;
;uint8_t Broadcast;
;uint16_t LLength;
;uint8_t * Data;

      int bytes_read = 0;
      uint8_t buffer[HCI_MAX_FRAME_SIZE];
    
while(_instance->HCISocketProxyImpl_DevHandle_var >= 0) {

        bytes_read = read(_instance->HCISocketProxyImpl_DevHandle_var, buffer, HCI_MAX_FRAME_SIZE);
        if (bytes_read < 0) {
          if (errno == EAGAIN || errno == EINTR) {
            usleep(1);
          } else {
            // Something went wrong, just close the socket and give up
            // It will eventually go into closed state and inform others
            hci_close_dev(_instance->HCISocketProxyImpl_DevHandle_var);
            _instance->HCISocketProxyImpl_DevHandle_var = -1;
            return;
          }
        } else {
          // Decode packet and send appropriate messages
          MessageType = buffer[0];
          switch (MessageType) {
            case 0x01: // HCL Command
              //printf("[WARNING]: Unhandled incoming HCI command!\n");
              //TODO: Jakob - why does this even happen??
              break;
            case 0x02: // ACL Data
              Handle = *((uint16_t*)&buffer[1]) & 0x0FFF;
              PacketBoundary = (buffer[2] & 0x30) >> 4;
              Broadcast = (buffer[2] & 0xC0) >> 6;
              LLength = *((uint16_t*)&buffer[3]);
              Data = &buffer[5];
              
f_HCISocketProxyImpl_HandleACLData(_instance, Handle, PacketBoundary, Broadcast, LLength, Data);

              break;
            case 0x03: // SCO Data
              printf("[WARNING]: Unhandled incoming SCO data!\n");
              break;
            case 0x04: // HCL Event 
              EventType = buffer[1];
              Length = buffer[2];
              Data = &buffer[3];
              
f_HCISocketProxyImpl_DecodeEvent(_instance, EventType, Length, Data);

              break;
            case 0xff: // Vendor Package
              printf("[WARNING]: Unhandled incoming vendor package!\n");
              break;
          }
        }
      

}

}


void f_HCISocketProxyImpl_StartSocketReader_proc(void * p)
{
  // Get parameters from the main thread
  struct f_HCISocketProxyImpl_StartSocketReader_struct params = *((struct f_HCISocketProxyImpl_StartSocketReader_struct *) p);
  
  // Unblock the main thread
  pthread_mutex_lock(params.lock);
  pthread_cond_signal(params.cv);
  pthread_mutex_unlock(params.lock);
  
  // Run the function
  //f_HCISocketProxyImpl_StartSocketReader_run(params._instance, params.esums_device);
  f_HCISocketProxyImpl_StartSocketReader_run(params._instance);
}

// Operation called by the runtime and forking a new thread
void f_HCISocketProxyImpl_StartSocketReader(struct HCISocketProxyImpl_Instance *_instance)
{
  // Store parameters
  struct f_HCISocketProxyImpl_StartSocketReader_struct params;
  pthread_mutex_t lock;
  pthread_cond_t cv;
  params.lock = &lock;
  params.cv = &cv;
  params._instance = _instance;

  pthread_mutex_init(params.lock, NULL);
  pthread_cond_init(params.cv, NULL);
  //Start the new thread
  pthread_mutex_lock(params.lock);
  pthread_t thread; 
  pthread_create( &thread, NULL, f_HCISocketProxyImpl_StartSocketReader_proc, (void*) &params);
  // Wait until it has started and read its parameters
  pthread_cond_wait(params.cv, params.lock);
  // Realease mutex
  pthread_mutex_unlock(params.lock);
}// Definition of function HandleACLData
void f_HCISocketProxyImpl_HandleACLData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t PacketBoundary, uint8_t Broadcast, uint16_t Length, uint8_t * Data) {
if(PacketBoundary != ACLPACKETBOUNDARYFLAG_FIRST_FLUSHABLE) {
fprintf(stdout, "[ERROR]: Got an ACL packet what was not the first automatically flushable packet. Implement handling of this!\n");

} else {
;uint16_t NLength = *((uint16_t*)&Data[0]);
;uint16_t CID = *((uint16_t*)&Data[2]);
;uint8_t * NData = &Data[4];
if(CID == 0x0004) {
f_HCISocketProxyImpl_OnATTData(_instance, Handle, NLength, NData);

}
if(CID == 0x0005) {
f_HCISocketProxyImpl_OnL2CAPData(_instance, Handle, NLength, NData);

}
if(CID == 0x0006) {
f_HCISocketProxyImpl_OnSMPData(_instance, Handle, NLength, NData);

}
if(CID != 0x0004 && CID != 0x0005 && CID != 0x0006) {
fprintf(stdout, "[WARNING]: Got an L2CAP packet that was to an non-fixed channel!\n");

}

}
}
// Definition of function OnL2CAPData
void f_HCISocketProxyImpl_OnL2CAPData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data) {
fprintf(stdout, "!!! GOT LE L2CAP DATA !!!\n");
}
// Definition of function DecodeEvent
void f_HCISocketProxyImpl_DecodeEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t Event, uint8_t Length, uint8_t * Data) {
if(Event == 0x05) {
;uint8_t Status = Data[0];
;uint16_t ConnectionHandle = (*((uint16_t*)&Data[1]) & 0x0FFF);
;uint8_t Reason = Data[3];
HCISocketProxyImpl_send_Events_DisconnectionCompleted(_instance, Status, ConnectionHandle, Reason);

}
if(Event == 0x08) {
;uint8_t Status = Data[0];
;uint16_t ConnectionHandle = (*((uint16_t*)&Data[1]) & 0x0FFF);
;uint8_t Enabled = Data[3];
HCISocketProxyImpl_send_Events_EncryptionChanged(_instance, Status, ConnectionHandle, Enabled);

}
if(Event == 0x0E) {
;uint8_t NumberAllowedCommandPackets = Data[0];
;uint16_t Group = (*((uint16_t*)&Data[1]) >> 10);
;uint16_t Command = (*((uint16_t*)&Data[1]) & 0x03FF);
;uint8_t * ReturnData = &Data[3];
f_HCISocketProxyImpl_OnCommandCompletedEvent(_instance, NumberAllowedCommandPackets, Group, Command, ReturnData);

}
if(Event == 0x0F) {
;uint8_t Status = Data[0];
;uint8_t NumberAllowedCommandPackets = Data[1];
;uint16_t Group = (*((uint16_t*)&Data[2]) >> 10);
;uint16_t Command = (*((uint16_t*)&Data[2]) & 0x03FF);
f_HCISocketProxyImpl_OnCommandStatusEvent(_instance, NumberAllowedCommandPackets, Group, Command, Status);

}
if(Event == 0x3E) {
;uint8_t SubEventCode = Data[0];
;uint8_t NewLength = Length - 1;
;uint8_t * NewData = &Data[1];
f_HCISocketProxyImpl_OnLEMetaEvent(_instance, SubEventCode, NewLength, NewData);

}
}
// Definition of function OnCommandCompletedEvent
void f_HCISocketProxyImpl_OnCommandCompletedEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint16_t Group, uint16_t Command, uint8_t * Data) {
if(Group == 0x03) {
if(Command == 0x0003) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_ResetCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x0001) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetEventMaskCompleted(_instance, NumberAllowedCommandPackets, Status);

}

}
if(Group == 0x08) {
if(Command == 0x0001) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x0006) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x0008) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x0009) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x000A) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x000B) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x000C) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x000E) {
;uint8_t Status = Data[0];
HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x0018) {
;uint8_t Status = Data[0];
;ble_random_part_t Random = *((ble_random_part_t*)&Data[1]);
HCISocketProxyImpl_send_Events_LERandCompleted(_instance, NumberAllowedCommandPackets, Status, Random);

}
if(Command == 0x0017) {
;uint8_t Status = Data[0];
;ble_random_number_t EncryptedData = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_Events_LEEncryptCompleted(_instance, NumberAllowedCommandPackets, Status, EncryptedData);

}

}
}
// Definition of function OnCommandStatusEvent
void f_HCISocketProxyImpl_OnCommandStatusEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint16_t Group, uint16_t Command, uint8_t Status) {
if(Group == 0x01) {
if(Command == 0x0006) {
HCISocketProxyImpl_send_Events_DisconnectStatus(_instance, NumberAllowedCommandPackets, Status);

}

}
if(Group == 0x08) {
if(Command == 0x000D) {
HCISocketProxyImpl_send_Events_LECreateConnectionStatus(_instance, NumberAllowedCommandPackets, Status);

}
if(Command == 0x000D) {
HCISocketProxyImpl_send_Events_LEStartEncryptionStatus(_instance, NumberAllowedCommandPackets, Status);

}

}
}
// Definition of function OnLEMetaEvent
void f_HCISocketProxyImpl_OnLEMetaEvent(struct HCISocketProxyImpl_Instance *_instance, uint8_t SubEventCode, uint8_t Length, uint8_t * Data) {
if(SubEventCode == 0x01) {
evt_le_connection_complete* data = &Data[0];
;uint8_t Status = data->status;
;uint16_t ConnectionHandle = data->handle;
;uint8_t Role = data->role;
;uint8_t PeerAddressType = data->peer_bdaddr_type;
;bdaddr_t PeerAddress = data->peer_bdaddr;
;uint16_t ConnInterval = data->interval;
;uint16_t ConnLatency = data->latency;
;uint16_t SupervisionTimeout = data->supervision_timeout;
;uint8_t MasterClockAccuracy = data->master_clock_accuracy;
HCISocketProxyImpl_send_Events_LEConnectionComplete(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}
if(SubEventCode == 0x02) {
;uint8_t NumReports = Data[0];
;uint8_t Count = 0;
;uint8_t Index = 1;
while(Count < NumReports) {
le_advertising_info* data = &Data[Index];
;uint8_t Type = data->evt_type;
;uint8_t AddressType = data->bdaddr_type;
;bdaddr_t Address = data->bdaddr;
;uint8_t ReportLength = data->length;
;ble_adv_data_t ReportData;
memcpy(&ReportData, &(data->data), ReportLength);
HCISocketProxyImpl_send_Events_LEAdvertisementReport(_instance, Type, AddressType, Address, ReportLength, ReportData);
Index = Index + 9 + ReportLength;
Count = Count + 1;

}

}
if(SubEventCode == 0x0A) {
;uint8_t Status = Data[0];
;uint16_t ConnectionHandle = *((uint16_t*)&Data[1]);
;uint8_t Role = Data[3];
;uint8_t PeerAddressType = Data[4];
;bdaddr_t PeerAddress = *((bdaddr_t*)&Data[5]);
;bdaddr_t LocalResolvablePrivateAddress = *((bdaddr_t*)&Data[11]);
;bdaddr_t PeerResolvablePrivateAddress = *((bdaddr_t*)&Data[17]);
;uint16_t ConnInterval = *((uint16_t*)&Data[23]);
;uint16_t ConnLatency = *((uint16_t*)&Data[25]);
;uint16_t SupervisionTimeout = *((uint16_t*)&Data[27]);
;uint8_t MasterClockAccuracy = Data[29];
HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}
}
// Definition of function OnSMPData
void f_HCISocketProxyImpl_OnSMPData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data) {
;uint8_t Code = Data[0];
if(Code == 0x01) {
;uint8_t IOCapability = Data[1];
;uint8_t OOBDataPresent = Data[2] == 0x01;
;uint8_t Bonding = ((Data[3] & 0x03) == 0x01);
;uint8_t MITM = ((Data[3] & 0x04) > 0);
;uint8_t SecureConnection = ((Data[3] & 0x08) > 0);
;uint8_t Keypress = ((Data[3] & 0x10) > 0);
;uint8_t MaximumEncryptionKeySize = Data[4];
;uint8_t InitiatorKeyDistribution = Data[5];
;uint8_t ResponderKeyDistribution = Data[6];
HCISocketProxyImpl_send_SMP_SMPPairingRequest(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);

}
if(Code == 0x02) {
;uint8_t IOCapability = Data[1];
;uint8_t OOBDataPresent = Data[2] == 0x01;
;uint8_t Bonding = ((Data[3] & 0x03) == 0x01);
;uint8_t MITM = ((Data[3] & 0x04) > 0);
;uint8_t SecureConnection = ((Data[3] & 0x08) > 0);
;uint8_t Keypress = ((Data[3] & 0x10) > 0);
;uint8_t MaximumEncryptionKeySize = Data[4];
;uint8_t InitiatorKeyDistribution = Data[5];
;uint8_t ResponderKeyDistribution = Data[6];
HCISocketProxyImpl_send_SMP_SMPPairingResponse(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);

}
if(Code == 0x03) {
;ble_random_number_t ConfirmValue = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPPairingConfirm(_instance, Handle, ConfirmValue);

}
if(Code == 0x04) {
;ble_random_number_t RandomValue = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPPairingRandom(_instance, Handle, RandomValue);

}
if(Code == 0x05) {
;uint8_t Reason = Data[1];
HCISocketProxyImpl_send_SMP_SMPPairingFailed(_instance, Handle, Reason);

}
if(Code == 0x06) {
;ble_random_number_t LongTermKey = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPEncryptionInformation(_instance, Handle, LongTermKey);

}
if(Code == 0x07) {
;uint16_t EDIV = *((uint16_t*)&Data[1]);
;ble_random_part_t Rand = *((ble_random_part_t*)&Data[3]);
HCISocketProxyImpl_send_SMP_SMPMasterIdentification(_instance, Handle, EDIV, Rand);

}
if(Code == 0x08) {
;ble_random_number_t IdentityResolvingKey = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPIdentityInformation(_instance, Handle, IdentityResolvingKey);

}
if(Code == 0x09) {
;uint8_t AddressType = Data[1];
;bdaddr_t Address = *((bdaddr_t*)&Data[2]);
HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation(_instance, Handle, AddressType, Address);

}
if(Code == 0x0A) {
;ble_random_number_t SignatureKey = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPSigningInformation(_instance, Handle, SignatureKey);

}
if(Code == 0x0B) {
;uint8_t Bonding = ((Data[1] & 0x03) == 0x01);
;uint8_t MITM = ((Data[1] & 0x04) > 0);
;uint8_t SecureConnection = ((Data[1] & 0x08) > 0);
;uint8_t Keypress = ((Data[1] & 0x10) > 0);
HCISocketProxyImpl_send_SMP_SMPSecurityRequest(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);

}
if(Code == 0x0C) {
;smp_public_key_t KeyX = *((smp_public_key_t*)&Data[1]);
;smp_public_key_t KeyY = *((smp_public_key_t*)&Data[33]);
HCISocketProxyImpl_send_SMP_SMPPairingPublicKey(_instance, Handle, KeyX, KeyY);

}
if(Code == 0x0D) {
;ble_random_number_t DHKeyCheck = *((ble_random_number_t*)&Data[1]);
HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck(_instance, Handle, DHKeyCheck);

}
if(Code == 0x0E) {
;uint8_t Type = Data[1];
HCISocketProxyImpl_send_SMP_SMPKeypressNotification(_instance, Handle, Type);

}
}
// Definition of function OnATTData
void f_HCISocketProxyImpl_OnATTData(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t Length, uint8_t * Data) {
;uint8_t OpCode = Data[0];
if(OpCode == 0x01) {
;uint8_t RequestOpCode = Data[1];
;uint16_t AttributeHandle = *((uint16_t*)&Data[2]);
;uint8_t Error = Data[4];
if(RequestOpCode == 0x04) {
HCISocketProxyImpl_send_ATT_ATTFindInformationError(_instance, Handle, AttributeHandle, Error);

}
if(RequestOpCode == 0x08) {
HCISocketProxyImpl_send_ATT_ATTReadByTypeError(_instance, Handle, AttributeHandle, Error);

}
if(RequestOpCode == 0x0A) {
HCISocketProxyImpl_send_ATT_ATTReadError(_instance, Handle, AttributeHandle, Error);

}
if(RequestOpCode == 0x10) {
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError(_instance, Handle, AttributeHandle, Error);

}
if(RequestOpCode == 0x12) {
HCISocketProxyImpl_send_ATT_ATTWriteError(_instance, Handle, AttributeHandle, Error);

}

}
if(OpCode == 0x04) {
;uint16_t StartingHandle = *((uint16_t*)&Data[1]);
;uint16_t EndingHandle = *((uint16_t*)&Data[3]);
HCISocketProxyImpl_send_ATT_ATTFindInformationRequest(_instance, Handle, StartingHandle, EndingHandle);

}
if(OpCode == 0x05) {
;uint8_t Format = Data[1];
;ble_gatt_data_t InformationData;
InformationData.length = Length-2;
memcpy(&InformationData.bytes, &Data[2], Length-2);
HCISocketProxyImpl_send_ATT_ATTFindInformationResponse(_instance, Handle, Format, InformationData);

}
if(OpCode == 0x08) {
;uint16_t StartingHandle = *((uint16_t*)&Data[1]);
;uint16_t EndingHandle = *((uint16_t*)&Data[3]);
;ble_uuid_t AttributeType = f_HCISocketProxyImpl_ReadUUID(_instance, Length - 5, &Data[5]);
HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest(_instance, Handle, StartingHandle, EndingHandle, AttributeType);

}
if(OpCode == 0x09) {
;uint8_t ALength = Data[1];
;ble_gatt_data_t AttributeDataList;
AttributeDataList.length = Length-2;
memcpy(&AttributeDataList.bytes, &Data[2], Length-2);
HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse(_instance, Handle, ALength, AttributeDataList);

}
if(OpCode == 0x0A) {
;uint16_t AttributeHandle = *((uint16_t*)&Data[1]);
HCISocketProxyImpl_send_ATT_ATTReadRequest(_instance, Handle, AttributeHandle);

}
if(OpCode == 0x0B) {
;ble_gatt_data_t AttributeData;
AttributeData.length = Length-1;
memcpy(&AttributeData.bytes, &Data[1], Length-1);
HCISocketProxyImpl_send_ATT_ATTReadResponse(_instance, Handle, AttributeData);

}
if(OpCode == 0x10) {
;uint16_t StartingHandle = *((uint16_t*)&Data[1]);
;uint16_t EndingHandle = *((uint16_t*)&Data[3]);
;ble_uuid_t AttributeGroupType = f_HCISocketProxyImpl_ReadUUID(_instance, Length - 5, &Data[5]);
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest(_instance, Handle, StartingHandle, EndingHandle, AttributeGroupType);

}
if(OpCode == 0x11) {
;uint8_t ALength = Data[1];
;ble_gatt_data_t AttributeDataList;
AttributeDataList.length = Length-2;
memcpy(&AttributeDataList.bytes, &Data[2], Length-2);
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse(_instance, Handle, ALength, AttributeDataList);

}
if(OpCode == 0x12) {
;uint16_t AttributeHandle = *((uint16_t*)&Data[1]);
;ble_gatt_data_t AttributeValue;
AttributeValue.length = Length-3;
memcpy(&AttributeValue.bytes, &Data[3], Length-3);
HCISocketProxyImpl_send_ATT_ATTWriteRequest(_instance, Handle, AttributeHandle, AttributeValue);

}
if(OpCode == 0x13) {
HCISocketProxyImpl_send_ATT_ATTWriteResponse(_instance, Handle);

}
if(OpCode == 0x52) {
;uint16_t AttributeHandle = *((uint16_t*)&Data[1]);
;ble_gatt_data_t AttributeValue;
AttributeValue.length = Length-3;
memcpy(&AttributeValue.bytes, &Data[3], Length-3);
HCISocketProxyImpl_send_ATT_ATTWriteCommand(_instance, Handle, AttributeHandle, AttributeValue);

}
if(OpCode == 0x1B) {
;uint16_t AttributeHandle = *((uint16_t*)&Data[1]);
;ble_gatt_data_t AttributeValue;
AttributeValue.length = Length-3;
memcpy(&AttributeValue.bytes, &Data[3], Length-3);
HCISocketProxyImpl_send_ATT_ATTHandleValueNotification(_instance, Handle, AttributeHandle, AttributeValue);

}
if(OpCode == 0x1D) {
;uint16_t AttributeHandle = *((uint16_t*)&Data[1]);
;ble_gatt_data_t AttributeValue;
AttributeValue.length = Length-3;
memcpy(&AttributeValue.bytes, &Data[3], Length-3);
HCISocketProxyImpl_send_ATT_ATTHandleValueIndication(_instance, Handle, AttributeHandle, AttributeValue);

}
if(OpCode == 0x1E) {
HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation(_instance, Handle);

}
}
// Definition of function ReadUUID
ble_uuid_t f_HCISocketProxyImpl_ReadUUID(struct HCISocketProxyImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };
if(Length == 16) {
memcpy(&Value, Data, 16);

} else {
if(Length == 2 || Length == 4) {
memcpy(&(((uint8_t*)&Value)[12]), Data, Length);

} else {
fprintf(stdout, "[ERROR]: Trying to decode a UUID that was not 16, 32 or 128 bits long!\n");

}

}
return Value;
}
// Definition of function MakeUUID
ble_uuid_t f_HCISocketProxyImpl_MakeUUID(struct HCISocketProxyImpl_Instance *_instance, const char * Text) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };

      uint8_t *val = (uint8_t*)&Value;
      const char *str = Text;
      size_t length = strlen(str);
      if (length == 36 && str[8] == '-' && str[13] == '-' && str[18] == '-' && str[23] == '-') {
        // 128-bit UUID
        if (sscanf(str, "%02hhx%02hhx%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx"
                      , &val[15], &val[14], &val[13], &val[12], &val[11], &val[10], &val[9], &val[8], &val[7], &val[6], &val[5], &val[4], &val[3], &val[2], &val[1], &val[0] ) == 16 ) {
            // Should be valid, and have stored the values in the Value-memory
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }

      } else if (length == 4 || length == 6 || length == 8 || length == 10) {
        // 16-bit or 32-bit UUID
        uint32_t id;
        char *end = NULL;
        id = strtol(str, &end, 16);

        if (id && end && *end == '\0') {
          // Should be valid
          *(uint32_t*)&val[12] = id;
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }
      } else {
        printf("[ERROR]: String is not a valid UUID!\n");
      }
    
return Value;
}
// Definition of function PrintUUID
void f_HCISocketProxyImpl_PrintUUID(struct HCISocketProxyImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// On Entry Actions:
void HCISocketProxy_Socket_OnEntry(int state, struct HCISocketProxyImpl_Instance *_instance) {
switch(state) {
case HCISOCKETPROXY_SOCKET_STATE:{
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
HCISocketProxy_Socket_OnEntry(_instance->HCISocketProxy_Socket_State, _instance);
break;
}
case HCISOCKETPROXY_SOCKET_CLOSED_STATE:{
f_HCISocketProxyImpl_CloseSocket(_instance);
break;
}
case HCISOCKETPROXY_SOCKET_OPENING_STATE:{
f_HCISocketProxyImpl_OpenSocket(_instance);
break;
}
case HCISOCKETPROXY_SOCKET_OPEN_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void HCISocketProxy_Socket_OnExit(int state, struct HCISocketProxyImpl_Instance *_instance) {
switch(state) {
case HCISOCKETPROXY_SOCKET_STATE:{
HCISocketProxy_Socket_OnExit(_instance->HCISocketProxy_Socket_State, _instance);
break;}
case HCISOCKETPROXY_SOCKET_CLOSED_STATE:{
break;}
case HCISOCKETPROXY_SOCKET_OPENING_STATE:{
break;}
case HCISOCKETPROXY_SOCKET_OPEN_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[8];
          data[0] = 0x09;
          data[1] = AddressType;
          *((bdaddr_t*)&data[2]) = Address;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 8, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x03;
          *((ble_random_number_t*)&data[1]) = ConfirmValue;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x04;
          *((ble_random_number_t*)&data[1]) = RandomValue;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x0A;
          *((ble_random_number_t*)&data[1]) = SignatureKey;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[2];
          data[0] = 0x0E;
          data[1] = Type;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 2, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[11];
          data[0] = 0x07;
          *((uint16_t*)&data[1]) = EDIV;
          *((ble_random_part_t*)&data[3]) = Rand;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 11, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[2];
          data[0] = 0x05;
          data[1] = Reason;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 2, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x06;
          *((ble_random_number_t*)&data[1]) = LongTermKey;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[65];
          data[0] = 0x0C;
          *((smp_public_key_t*)&data[1]) = KeyX;
          *((smp_public_key_t*)&data[33]) = KeyY;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 65, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x08;
          *((ble_random_number_t*)&data[1]) = IdentityResolvingKey;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[2];
          data[0] = 0x0B;
          data[1] = ( ((Bonding) ? 0x01 : 0x00) | ((MITM) ? 0x04 : 0x00) | ((SecureConnection) ? 0x08 : 0x00) | ((Keypress) ? 0x10 : 0x00) );
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 2, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[7];
          data[0] = 0x01;
          data[1] = IOCapability;
          data[2] = (OOBDataPresent) ? 0x01 : 0x00;
          data[3] = ( ((Bonding) ? 0x01 : 0x00) | ((MITM) ? 0x04 : 0x00) | ((SecureConnection) ? 0x08 : 0x00) | ((Keypress) ? 0x10 : 0x00) );
          data[4] = MaximumEncryptionKeySize;
          data[5] = InitiatorKeyDistribution;
          data[6] = ResponderKeyDistribution;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 7, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[17];
          data[0] = 0x0D;
          *((ble_random_number_t*)&data[1]) = DHKeyCheck;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 17, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[7];
          data[0] = 0x02;
          data[1] = IOCapability;
          data[2] = (OOBDataPresent) ? 0x01 : 0x00;
          data[3] = ( ((Bonding) ? 0x01 : 0x00) | ((MITM) ? 0x04 : 0x00) | ((SecureConnection) ? 0x08 : 0x00) | ((Keypress) ? 0x10 : 0x00) );
          data[4] = MaximumEncryptionKeySize;
          data[5] = InitiatorKeyDistribution;
          data[6] = ResponderKeyDistribution;
        
f_HCISocketProxyImpl_SendACLData(_instance, Handle, 0x0006, 7, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetEventMaskAll(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
;set_event_mask_cp Mask = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
f_HCISocketProxyImpl_SendCommand(_instance, 0x03, 0x0001, 8, (uint8_t*)&Mask);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_LECreateConnection(struct HCISocketProxyImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_create_connection_cp data;
          data.interval = Interval;
          data.window = Window;
          data.initiator_filter = FilterPolicy;
          data.peer_bdaddr_type = PeerAddressType;
          data.peer_bdaddr = PeerAddress;
          data.own_bdaddr_type = OwnAddressType;
          data.min_interval = ConnIntervalMin;
          data.max_interval = ConnIntervalMax;
          data.latency = ConnLatency;
          data.supervision_timeout = SupervisionTimeout;
          data.min_ce_length = CELengthMin;
          data.max_ce_length = CELengthMax;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x000D, 25, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(struct HCISocketProxyImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_set_advertising_parameters_cp data;
          data.min_interval = MinInterval;
          data.max_interval = MaxInterval;
          data.advtype = Type;
          data.own_bdaddr_type = OwnAddressType;
          data.direct_bdaddr_type = PeerAddressType;
          data.direct_bdaddr = PeerAddress;
          data.chan_map = Channel;
          data.filter = FilterPolicy;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0006, 15, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_LEEncrypt(struct HCISocketProxyImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          ble_random_number_t data[2];
          data[0] = Key;
          data[1] = Plaintext;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0017, 32, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0001, 8, (uint8_t*)&Mask);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_Reset(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x03, 0x0003, 0, NULL);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
;set_event_mask_cp Mask = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0001, 8, (uint8_t*)&Mask);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEScanEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_set_scan_enable_cp data;
          data.enable = Enable;
          data.filter_dup = FilterDuplicates;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x000C, 2, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_Disconnect(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          disconnect_cp data;
          data.handle = ConnectionHandle;
          data.reason = Reason;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x01, 0x0006, 3, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x000A, 1, (uint8_t*)&Enable);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEScanParameters(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_set_scan_parameters_cp data;
          data.type = Type;
          data.interval = Interval;
          data.window = Window;
          data.own_bdaddr_type = OwnAddressType;
          data.filter = FilterPolicy;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x000B, 7, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_set_scan_response_data_cp data;
          data.length = Length;
          memcpy(data.data, Data.bytes, 31);
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0009, 32, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_LEStartEncryption(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[28];
          *((uint16_t*)&data[0]) = ConnectionHandle;
          *((ble_random_part_t*)&data[2]) = Random;
          *((uint16_t*)&data[10]) = EDIV;
          *((ble_random_number_t*)&data[12]) = LTK;
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0019, 28, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x03, 0x0001, 8, (uint8_t*)&Mask);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          le_set_advertising_data_cp data;
          data.length = Length;
          memcpy(data.data, Data.bytes, 31);
        
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0008, 32, (uint8_t*)&data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x000E, 0, NULL);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Commands_LERand(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
f_HCISocketProxyImpl_SendCommand(_instance, 0x08, 0x0018, 0, NULL);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Socket_Open(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_CLOSED_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
HCISocketProxy_Socket_OnExit(HCISOCKETPROXY_SOCKET_CLOSED_STATE, _instance);
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_OPENING_STATE;
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_OPENING_STATE, _instance);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_Socket_Close(struct HCISocketProxyImpl_Instance *_instance) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {
HCISocketProxy_Socket_OnExit(HCISOCKETPROXY_SOCKET_OPEN_STATE, _instance);
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
HCISocketProxyImpl_send_Socket_Closed(_instance);
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_CLOSED_STATE, _instance);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[21];
          data[0] = 0x10;
          *((uint16_t*)&data[1]) = StartingHandle;
          *((uint16_t*)&data[3]) = EndingHandle;
          memcpy(&data[5], &AttributeGroupType, 16);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 21, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[26];
          data[0] = 0x1D;
          *((uint16_t*)&data[1]) = AttributeHandle;
          memcpy(&data[3], AttributeValue.bytes, AttributeValue.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 3+AttributeValue.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[26];
          data[0] = 0x1B;
          *((uint16_t*)&data[1]) = AttributeHandle;
          memcpy(&data[3], AttributeValue.bytes, AttributeValue.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 3+AttributeValue.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x01;
          data[1] = 0x12;
          *((uint16_t*)&data[2]) = AttributeHandle;
          data[4] = Error;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[25];
          data[0] = 0x11;
          data[1] = Length;
          memcpy(&data[2], AttributeDataList.bytes, AttributeDataList.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 2+AttributeDataList.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x04;
          *((uint16_t*)&data[1]) = StartingHandle;
          *((uint16_t*)&data[3]) = EndingHandle;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[3];
          data[0] = 0x0A;
          *((uint16_t*)&data[1]) = AttributeHandle;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 3, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x01;
          data[1] = 0x08;
          *((uint16_t*)&data[2]) = AttributeHandle;
          data[4] = Error;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[25];
          data[0] = 0x09;
          data[1] = Length;
          memcpy(&data[2], AttributeDataList.bytes, AttributeDataList.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 2+AttributeDataList.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[24];
          data[0] = 0x0B;
          memcpy(&data[1], AttributeValue.bytes, AttributeValue.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 1+AttributeValue.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[26];
          data[0] = 0x12;
          *((uint16_t*)&data[1]) = AttributeHandle;
          memcpy(&data[3], AttributeValue.bytes, AttributeValue.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 3+AttributeValue.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[26];
          data[0] = 0x52;
          *((uint16_t*)&data[1]) = AttributeHandle;
          memcpy(&data[3], AttributeValue.bytes, AttributeValue.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 3+AttributeValue.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[21];
          data[0] = 0x08;
          *((uint16_t*)&data[1]) = StartingHandle;
          *((uint16_t*)&data[3]) = EndingHandle;
          memcpy(&data[5], &AttributeType, 16);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 21, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x01;
          data[1] = 0x0A;
          *((uint16_t*)&data[2]) = AttributeHandle;
          data[4] = Error;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[1];
          data[0] = 0x1E;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 1, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[1];
          data[0] = 0x13;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 1, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x01;
          data[1] = 0x10;
          *((uint16_t*)&data[2]) = AttributeHandle;
          data[4] = Error;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[25];
          data[0] = 0x05;
          data[1] = Format;
          memcpy(&data[2], InformationData.bytes, InformationData.length);
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 2+InformationData.length, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
void HCISocketProxyImpl_handle_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region Socket
uint8_t HCISocketProxy_Socket_State_event_consumed = 0;
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if (HCISocketProxy_Socket_State_event_consumed == 0 && 1) {

          uint8_t data[5];
          data[0] = 0x01;
          data[1] = 0x04;
          *((uint16_t*)&data[2]) = AttributeHandle;
          data[4] = Error;
        
f_HCISocketProxyImpl_SendACLData(_instance, ConnectionHandle, 0x0004, 5, data);
HCISocketProxy_Socket_State_event_consumed = 1;
}
}
//End Region Socket
//End dsregion Socket
//Session list: 
}
int HCISocketProxyImpl_handle_empty_event(struct HCISocketProxyImpl_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
//Region Socket
if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPENING_STATE) {
if ((f_HCISocketProxyImpl_SocketIsOpen(_instance) > 0)) {
HCISocketProxy_Socket_OnExit(HCISOCKETPROXY_SOCKET_OPENING_STATE, _instance);
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_OPEN_STATE;
HCISocketProxyImpl_send_Socket_Opened(_instance, f_HCISocketProxyImpl_GetBTAddress(_instance));
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_OPEN_STATE, _instance);
return 1;
}
else if ((f_HCISocketProxyImpl_SocketIsOpen(_instance) == 0)) {
HCISocketProxy_Socket_OnExit(HCISOCKETPROXY_SOCKET_OPENING_STATE, _instance);
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
HCISocketProxyImpl_send_Socket_Closed(_instance);
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_CLOSED_STATE, _instance);
return 1;
}
}
else if (_instance->HCISocketProxy_Socket_State == HCISOCKETPROXY_SOCKET_OPEN_STATE) {
if ((f_HCISocketProxyImpl_SocketIsOpen(_instance) == 0)) {
HCISocketProxy_Socket_OnExit(HCISOCKETPROXY_SOCKET_OPEN_STATE, _instance);
_instance->HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
HCISocketProxyImpl_send_Socket_Closed(_instance);
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_CLOSED_STATE, _instance);
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_HCISocketProxyImpl_send_Socket_Opened_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t)= 0x0;
void (*HCISocketProxyImpl_send_Socket_Opened_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Socket_Opened_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t)){
external_HCISocketProxyImpl_send_Socket_Opened_listener = _listener;
}
void register_HCISocketProxyImpl_send_Socket_Opened_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t)){
HCISocketProxyImpl_send_Socket_Opened_listener = _listener;
}
void HCISocketProxyImpl_send_Socket_Opened(struct HCISocketProxyImpl_Instance *_instance, bdaddr_t Address){
if (HCISocketProxyImpl_send_Socket_Opened_listener != 0x0) HCISocketProxyImpl_send_Socket_Opened_listener(_instance, Address);
if (external_HCISocketProxyImpl_send_Socket_Opened_listener != 0x0) external_HCISocketProxyImpl_send_Socket_Opened_listener(_instance, Address);
;
}
void (*external_HCISocketProxyImpl_send_Socket_Closed_listener)(struct HCISocketProxyImpl_Instance *)= 0x0;
void (*HCISocketProxyImpl_send_Socket_Closed_listener)(struct HCISocketProxyImpl_Instance *)= 0x0;
void register_external_HCISocketProxyImpl_send_Socket_Closed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *)){
external_HCISocketProxyImpl_send_Socket_Closed_listener = _listener;
}
void register_HCISocketProxyImpl_send_Socket_Closed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *)){
HCISocketProxyImpl_send_Socket_Closed_listener = _listener;
}
void HCISocketProxyImpl_send_Socket_Closed(struct HCISocketProxyImpl_Instance *_instance){
if (HCISocketProxyImpl_send_Socket_Closed_listener != 0x0) HCISocketProxyImpl_send_Socket_Closed_listener(_instance);
if (external_HCISocketProxyImpl_send_Socket_Closed_listener != 0x0) external_HCISocketProxyImpl_send_Socket_Closed_listener(_instance);
;
}
void (*external_HCISocketProxyImpl_send_Events_ResetCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_ResetCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_ResetCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_ResetCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_ResetCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_ResetCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_ResetCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_ResetCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_ResetCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_ResetCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_ResetCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLocalNameCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_DisconnectStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_DisconnectStatus_listener = _listener;
}
void HCISocketProxyImpl_send_Events_DisconnectStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_DisconnectStatus_listener != 0x0) HCISocketProxyImpl_send_Events_DisconnectStatus_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener != 0x0) external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_DisconnectionCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason){
if (HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(_instance, Status, ConnectionHandle, Reason);
if (external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(_instance, Status, ConnectionHandle, Reason);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t)){
external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t)){
HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LEAdvertisementReport(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data){
if (HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener != 0x0) HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(_instance, Type, AddressType, Address, Length, Data);
if (external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener != 0x0) external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(_instance, Type, AddressType, Address, Length, Data);
;
}
void (*external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LECreateConnectionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener != 0x0) HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener != 0x0) external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LEConnectionComplete_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_Events_LEConnectionComplete_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LEConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy){
if (HCISocketProxyImpl_send_Events_LEConnectionComplete_listener != 0x0) HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
if (external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener != 0x0) external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
;
}
void (*external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy){
if (HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener != 0x0) HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
if (external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener != 0x0) external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(_instance, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
;
}
void (*external_HCISocketProxyImpl_send_Events_LERandCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LERandCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LERandCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t)){
external_HCISocketProxyImpl_send_Events_LERandCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LERandCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t)){
HCISocketProxyImpl_send_Events_LERandCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LERandCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random){
if (HCISocketProxyImpl_send_Events_LERandCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_LERandCompleted_listener(_instance, NumberAllowedCommandPackets, Status, Random);
if (external_HCISocketProxyImpl_send_Events_LERandCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_LERandCompleted_listener(_instance, NumberAllowedCommandPackets, Status, Random);
;
}
void (*external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t)){
HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LEEncryptCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted){
if (HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener != 0x0) HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(_instance, NumberAllowedCommandPackets, Status, Encrypted);
if (external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener != 0x0) external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(_instance, NumberAllowedCommandPackets, Status, Encrypted);
;
}
void (*external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_EncryptionChanged_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_Events_EncryptionChanged_listener = _listener;
}
void HCISocketProxyImpl_send_Events_EncryptionChanged(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled){
if (HCISocketProxyImpl_send_Events_EncryptionChanged_listener != 0x0) HCISocketProxyImpl_send_Events_EncryptionChanged_listener(_instance, Status, ConnectionHandle, Enabled);
if (external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener != 0x0) external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(_instance, Status, ConnectionHandle, Enabled);
;
}
void (*external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener = _listener;
}
void register_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t)){
HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener = _listener;
}
void HCISocketProxyImpl_send_Events_LEStartEncryptionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
if (HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener != 0x0) HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(_instance, NumberAllowedCommandPackets, Status);
if (external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener != 0x0) external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(_instance, NumberAllowedCommandPackets, Status);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
if (HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
if (HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)){
HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
if (HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
if (HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
if (HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t)){
HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
if (HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
if (HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
if (HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
if (HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t)){
HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
if (HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void HCISocketProxyImpl_send_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
if (HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener != 0x0) HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener != 0x0) external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t)){
HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t)){
HCISocketProxyImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (HCISocketProxyImpl_send_ATT_ATTReadRequest_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (HCISocketProxyImpl_send_ATT_ATTReadResponse_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_ATT_ATTReadError_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (HCISocketProxyImpl_send_ATT_ATTReadError_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_HCISocketProxyImpl_send_ATT_ATTReadError_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)){
external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)){
HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle){
if (HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTWriteError_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t)){
HCISocketProxyImpl_send_ATT_ATTWriteError_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (HCISocketProxyImpl_send_ATT_ATTWriteError_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)= 0x0;
void (*HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)= 0x0;
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)){
external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t)){
HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle){
if (HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}


// Enqueue incoming messages:
// Message enqueue
void enqueue_HCISocketProxyImpl_Socket_Open(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (80 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 80 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Socket_Close(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (81 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 81 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_Reset(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (82 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 82 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetEventMask(struct HCISocketProxyImpl_Instance * inst, set_event_mask_cp Mask) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 12 ) {

        _fifo_enqueue(&(inst->fifo), (83 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 83 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (84 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 84 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_Disconnect(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint8_t Reason) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 7 ) {

        _fifo_enqueue(&(inst->fifo), (85 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 85 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(&(inst->fifo), u_Reason.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(struct HCISocketProxyImpl_Instance * inst, set_event_mask_cp Mask) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 12 ) {

        _fifo_enqueue(&(inst->fifo), (86 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 86 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Mask.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (87 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 87 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(struct HCISocketProxyImpl_Instance * inst, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 19 ) {

        _fifo_enqueue(&(inst->fifo), (88 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 88 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter MinInterval
union u_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MinInterval;
u_MinInterval.p = MinInterval;
_fifo_enqueue(&(inst->fifo), u_MinInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_MinInterval.bytebuffer[0] & 0xFF );

// parameter MaxInterval
union u_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MaxInterval;
u_MaxInterval.p = MaxInterval;
_fifo_enqueue(&(inst->fifo), u_MaxInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_MaxInterval.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(&(inst->fifo), u_Type.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(&(inst->fifo), u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(&(inst->fifo), u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter Channel
union u_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_Channel;
u_Channel.p = Channel;
_fifo_enqueue(&(inst->fifo), u_Channel.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(&(inst->fifo), u_FilterPolicy.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(struct HCISocketProxyImpl_Instance * inst, uint8_t Enable) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 5 ) {

        _fifo_enqueue(&(inst->fifo), (89 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 89 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(&(inst->fifo), u_Enable.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(struct HCISocketProxyImpl_Instance * inst, uint8_t Length, ble_adv_data_t Data) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 36 ) {

        _fifo_enqueue(&(inst->fifo), (90 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 90 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(&(inst->fifo), u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(struct HCISocketProxyImpl_Instance * inst, uint8_t Length, ble_adv_data_t Data) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 36 ) {

        _fifo_enqueue(&(inst->fifo), (91 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 91 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(&(inst->fifo), u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Data.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(struct HCISocketProxyImpl_Instance * inst, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 11 ) {

        _fifo_enqueue(&(inst->fifo), (92 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 92 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(&(inst->fifo), u_Type.bytebuffer[0] & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(&(inst->fifo), u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(&(inst->fifo), u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Window.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(&(inst->fifo), u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(&(inst->fifo), u_FilterPolicy.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(struct HCISocketProxyImpl_Instance * inst, uint8_t Enable, uint8_t FilterDuplicates) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (93 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 93 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(&(inst->fifo), u_Enable.bytebuffer[0] & 0xFF );

// parameter FilterDuplicates
union u_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterDuplicates;
u_FilterDuplicates.p = FilterDuplicates;
_fifo_enqueue(&(inst->fifo), u_FilterDuplicates.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_LECreateConnection(struct HCISocketProxyImpl_Instance * inst, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 29 ) {

        _fifo_enqueue(&(inst->fifo), (94 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 94 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(&(inst->fifo), u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(&(inst->fifo), u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Window.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(&(inst->fifo), u_FilterPolicy.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(&(inst->fifo), u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(&(inst->fifo), u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMin
union u_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMin;
u_ConnIntervalMin.p = ConnIntervalMin;
_fifo_enqueue(&(inst->fifo), u_ConnIntervalMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnIntervalMin.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMax
union u_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMax;
u_ConnIntervalMax.p = ConnIntervalMax;
_fifo_enqueue(&(inst->fifo), u_ConnIntervalMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnIntervalMax.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter CELengthMin
union u_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMin;
u_CELengthMin.p = CELengthMin;
_fifo_enqueue(&(inst->fifo), u_CELengthMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_CELengthMin.bytebuffer[0] & 0xFF );

// parameter CELengthMax
union u_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMax;
u_CELengthMax.p = CELengthMax;
_fifo_enqueue(&(inst->fifo), u_CELengthMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_CELengthMax.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (95 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 95 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_LERand(struct HCISocketProxyImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (96 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 96 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_LEEncrypt(struct HCISocketProxyImpl_Instance * inst, ble_random_number_t Key, ble_random_number_t Plaintext) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 36 ) {

        _fifo_enqueue(&(inst->fifo), (97 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 97 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Key
union u_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Key;
u_Key.p = Key;
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Key.bytebuffer[0] & 0xFF );

// parameter Plaintext
union u_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Plaintext;
u_Plaintext.p = Plaintext;
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Plaintext.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (98 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 98 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Random
union u_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Random.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[0] & 0xFF );

// parameter LTK
union u_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LTK;
u_LTK.p = LTK;
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LTK.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 15 ) {

        _fifo_enqueue(&(inst->fifo), (26 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 26 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(&(inst->fifo), u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(&(inst->fifo), u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(&(inst->fifo), u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(&(inst->fifo), u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(&(inst->fifo), u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(&(inst->fifo), u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(&(inst->fifo), u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 15 ) {

        _fifo_enqueue(&(inst->fifo), (27 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 27 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(&(inst->fifo), u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(&(inst->fifo), u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(&(inst->fifo), u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(&(inst->fifo), u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(&(inst->fifo), u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(&(inst->fifo), u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(&(inst->fifo), u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(&(inst->fifo), u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t ConfirmValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (28 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 28 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConfirmValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t RandomValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (29 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 29 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_RandomValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t Reason) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 7 ) {

        _fifo_enqueue(&(inst->fifo), (30 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 30 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(&(inst->fifo), u_Reason.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 70 ) {

        _fifo_enqueue(&(inst->fifo), (31 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 31 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter KeyX
union u_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyX;
u_KeyX.p = KeyX;
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[31] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[30] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[29] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[28] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[27] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[26] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[25] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[24] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyX.bytebuffer[0] & 0xFF );

// parameter KeyY
union u_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyY;
u_KeyY.p = KeyY;
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[31] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[30] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[29] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[28] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[27] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[26] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[25] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[24] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_KeyY.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t DHKeyCheck) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (32 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 32 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter DHKeyCheck
union u_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_DHKeyCheck;
u_DHKeyCheck.p = DHKeyCheck;
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_DHKeyCheck.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t Type) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 7 ) {

        _fifo_enqueue(&(inst->fifo), (33 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 33 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(&(inst->fifo), u_Type.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t LongTermKey) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (34 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 34 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LongTermKey.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 16 ) {

        _fifo_enqueue(&(inst->fifo), (35 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 35 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Rand.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (36 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 36 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 13 ) {

        _fifo_enqueue(&(inst->fifo), (37 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 37 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(&(inst->fifo), u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, ble_random_number_t SignatureKey) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (38 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 38 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter SignatureKey
union u_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SignatureKey;
u_SignatureKey.p = SignatureKey;
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SignatureKey.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (39 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 39 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(&(inst->fifo), u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(&(inst->fifo), u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(&(inst->fifo), u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(&(inst->fifo), u_Keypress.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (40 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 40 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 31 ) {

        _fifo_enqueue(&(inst->fifo), (41 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 41 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(&(inst->fifo), u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_InformationData.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (42 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 42 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 26 ) {

        _fifo_enqueue(&(inst->fifo), (43 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 43 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeType.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 31 ) {

        _fifo_enqueue(&(inst->fifo), (44 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 44 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(&(inst->fifo), u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (45 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 45 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 8 ) {

        _fifo_enqueue(&(inst->fifo), (46 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 46 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 30 ) {

        _fifo_enqueue(&(inst->fifo), (47 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 47 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadError(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (48 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 48 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 26 ) {

        _fifo_enqueue(&(inst->fifo), (49 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 49 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeGroupType.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 31 ) {

        _fifo_enqueue(&(inst->fifo), (50 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 50 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(&(inst->fifo), u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeDataList.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (51 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 51 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (52 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 52 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (53 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 53 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (54 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 54 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (55 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 55 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (56 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 56 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (57 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 57 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance * inst, uint16_t ConnectionHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (58 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 58 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int HCISocketProxyImpl_processMessageQueue(struct HCISocketProxyImpl_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 80:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Open = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
HCISocketProxyImpl_handle_Socket_Open(_instance);
return 1;
break;
}
}
break;
}
case 81:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Close = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
HCISocketProxyImpl_handle_Socket_Close(_instance);
return 1;
break;
}
}
break;
}
case 82:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Reset = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_Reset(_instance);
return 1;
break;
}
}
break;
}
case 83:{
byte mbuf[12 - 2];
while (mbufi < (12 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetEventMask = 2;
union u_SetEventMask_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_SetEventMask_Mask;
u_SetEventMask_Mask.bytebuffer[7] = mbuf[mbufi_SetEventMask + 0];
u_SetEventMask_Mask.bytebuffer[6] = mbuf[mbufi_SetEventMask + 1];
u_SetEventMask_Mask.bytebuffer[5] = mbuf[mbufi_SetEventMask + 2];
u_SetEventMask_Mask.bytebuffer[4] = mbuf[mbufi_SetEventMask + 3];
u_SetEventMask_Mask.bytebuffer[3] = mbuf[mbufi_SetEventMask + 4];
u_SetEventMask_Mask.bytebuffer[2] = mbuf[mbufi_SetEventMask + 5];
u_SetEventMask_Mask.bytebuffer[1] = mbuf[mbufi_SetEventMask + 6];
u_SetEventMask_Mask.bytebuffer[0] = mbuf[mbufi_SetEventMask + 7];
mbufi_SetEventMask += 8;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetEventMask(_instance,
 u_SetEventMask_Mask.p /* Mask */ );
return 1;
break;
}
}
break;
}
case 84:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetEventMaskAll = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetEventMaskAll(_instance);
return 1;
break;
}
}
break;
}
case 99:{
byte mbuf[252 - 2];
while (mbufi < (252 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLocalName = 2;
union u_SetLocalName_Name_t {
change_local_name_cp p;
byte bytebuffer[248];
} u_SetLocalName_Name;
u_SetLocalName_Name.bytebuffer[247] = mbuf[mbufi_SetLocalName + 0];
u_SetLocalName_Name.bytebuffer[246] = mbuf[mbufi_SetLocalName + 1];
u_SetLocalName_Name.bytebuffer[245] = mbuf[mbufi_SetLocalName + 2];
u_SetLocalName_Name.bytebuffer[244] = mbuf[mbufi_SetLocalName + 3];
u_SetLocalName_Name.bytebuffer[243] = mbuf[mbufi_SetLocalName + 4];
u_SetLocalName_Name.bytebuffer[242] = mbuf[mbufi_SetLocalName + 5];
u_SetLocalName_Name.bytebuffer[241] = mbuf[mbufi_SetLocalName + 6];
u_SetLocalName_Name.bytebuffer[240] = mbuf[mbufi_SetLocalName + 7];
u_SetLocalName_Name.bytebuffer[239] = mbuf[mbufi_SetLocalName + 8];
u_SetLocalName_Name.bytebuffer[238] = mbuf[mbufi_SetLocalName + 9];
u_SetLocalName_Name.bytebuffer[237] = mbuf[mbufi_SetLocalName + 10];
u_SetLocalName_Name.bytebuffer[236] = mbuf[mbufi_SetLocalName + 11];
u_SetLocalName_Name.bytebuffer[235] = mbuf[mbufi_SetLocalName + 12];
u_SetLocalName_Name.bytebuffer[234] = mbuf[mbufi_SetLocalName + 13];
u_SetLocalName_Name.bytebuffer[233] = mbuf[mbufi_SetLocalName + 14];
u_SetLocalName_Name.bytebuffer[232] = mbuf[mbufi_SetLocalName + 15];
u_SetLocalName_Name.bytebuffer[231] = mbuf[mbufi_SetLocalName + 16];
u_SetLocalName_Name.bytebuffer[230] = mbuf[mbufi_SetLocalName + 17];
u_SetLocalName_Name.bytebuffer[229] = mbuf[mbufi_SetLocalName + 18];
u_SetLocalName_Name.bytebuffer[228] = mbuf[mbufi_SetLocalName + 19];
u_SetLocalName_Name.bytebuffer[227] = mbuf[mbufi_SetLocalName + 20];
u_SetLocalName_Name.bytebuffer[226] = mbuf[mbufi_SetLocalName + 21];
u_SetLocalName_Name.bytebuffer[225] = mbuf[mbufi_SetLocalName + 22];
u_SetLocalName_Name.bytebuffer[224] = mbuf[mbufi_SetLocalName + 23];
u_SetLocalName_Name.bytebuffer[223] = mbuf[mbufi_SetLocalName + 24];
u_SetLocalName_Name.bytebuffer[222] = mbuf[mbufi_SetLocalName + 25];
u_SetLocalName_Name.bytebuffer[221] = mbuf[mbufi_SetLocalName + 26];
u_SetLocalName_Name.bytebuffer[220] = mbuf[mbufi_SetLocalName + 27];
u_SetLocalName_Name.bytebuffer[219] = mbuf[mbufi_SetLocalName + 28];
u_SetLocalName_Name.bytebuffer[218] = mbuf[mbufi_SetLocalName + 29];
u_SetLocalName_Name.bytebuffer[217] = mbuf[mbufi_SetLocalName + 30];
u_SetLocalName_Name.bytebuffer[216] = mbuf[mbufi_SetLocalName + 31];
u_SetLocalName_Name.bytebuffer[215] = mbuf[mbufi_SetLocalName + 32];
u_SetLocalName_Name.bytebuffer[214] = mbuf[mbufi_SetLocalName + 33];
u_SetLocalName_Name.bytebuffer[213] = mbuf[mbufi_SetLocalName + 34];
u_SetLocalName_Name.bytebuffer[212] = mbuf[mbufi_SetLocalName + 35];
u_SetLocalName_Name.bytebuffer[211] = mbuf[mbufi_SetLocalName + 36];
u_SetLocalName_Name.bytebuffer[210] = mbuf[mbufi_SetLocalName + 37];
u_SetLocalName_Name.bytebuffer[209] = mbuf[mbufi_SetLocalName + 38];
u_SetLocalName_Name.bytebuffer[208] = mbuf[mbufi_SetLocalName + 39];
u_SetLocalName_Name.bytebuffer[207] = mbuf[mbufi_SetLocalName + 40];
u_SetLocalName_Name.bytebuffer[206] = mbuf[mbufi_SetLocalName + 41];
u_SetLocalName_Name.bytebuffer[205] = mbuf[mbufi_SetLocalName + 42];
u_SetLocalName_Name.bytebuffer[204] = mbuf[mbufi_SetLocalName + 43];
u_SetLocalName_Name.bytebuffer[203] = mbuf[mbufi_SetLocalName + 44];
u_SetLocalName_Name.bytebuffer[202] = mbuf[mbufi_SetLocalName + 45];
u_SetLocalName_Name.bytebuffer[201] = mbuf[mbufi_SetLocalName + 46];
u_SetLocalName_Name.bytebuffer[200] = mbuf[mbufi_SetLocalName + 47];
u_SetLocalName_Name.bytebuffer[199] = mbuf[mbufi_SetLocalName + 48];
u_SetLocalName_Name.bytebuffer[198] = mbuf[mbufi_SetLocalName + 49];
u_SetLocalName_Name.bytebuffer[197] = mbuf[mbufi_SetLocalName + 50];
u_SetLocalName_Name.bytebuffer[196] = mbuf[mbufi_SetLocalName + 51];
u_SetLocalName_Name.bytebuffer[195] = mbuf[mbufi_SetLocalName + 52];
u_SetLocalName_Name.bytebuffer[194] = mbuf[mbufi_SetLocalName + 53];
u_SetLocalName_Name.bytebuffer[193] = mbuf[mbufi_SetLocalName + 54];
u_SetLocalName_Name.bytebuffer[192] = mbuf[mbufi_SetLocalName + 55];
u_SetLocalName_Name.bytebuffer[191] = mbuf[mbufi_SetLocalName + 56];
u_SetLocalName_Name.bytebuffer[190] = mbuf[mbufi_SetLocalName + 57];
u_SetLocalName_Name.bytebuffer[189] = mbuf[mbufi_SetLocalName + 58];
u_SetLocalName_Name.bytebuffer[188] = mbuf[mbufi_SetLocalName + 59];
u_SetLocalName_Name.bytebuffer[187] = mbuf[mbufi_SetLocalName + 60];
u_SetLocalName_Name.bytebuffer[186] = mbuf[mbufi_SetLocalName + 61];
u_SetLocalName_Name.bytebuffer[185] = mbuf[mbufi_SetLocalName + 62];
u_SetLocalName_Name.bytebuffer[184] = mbuf[mbufi_SetLocalName + 63];
u_SetLocalName_Name.bytebuffer[183] = mbuf[mbufi_SetLocalName + 64];
u_SetLocalName_Name.bytebuffer[182] = mbuf[mbufi_SetLocalName + 65];
u_SetLocalName_Name.bytebuffer[181] = mbuf[mbufi_SetLocalName + 66];
u_SetLocalName_Name.bytebuffer[180] = mbuf[mbufi_SetLocalName + 67];
u_SetLocalName_Name.bytebuffer[179] = mbuf[mbufi_SetLocalName + 68];
u_SetLocalName_Name.bytebuffer[178] = mbuf[mbufi_SetLocalName + 69];
u_SetLocalName_Name.bytebuffer[177] = mbuf[mbufi_SetLocalName + 70];
u_SetLocalName_Name.bytebuffer[176] = mbuf[mbufi_SetLocalName + 71];
u_SetLocalName_Name.bytebuffer[175] = mbuf[mbufi_SetLocalName + 72];
u_SetLocalName_Name.bytebuffer[174] = mbuf[mbufi_SetLocalName + 73];
u_SetLocalName_Name.bytebuffer[173] = mbuf[mbufi_SetLocalName + 74];
u_SetLocalName_Name.bytebuffer[172] = mbuf[mbufi_SetLocalName + 75];
u_SetLocalName_Name.bytebuffer[171] = mbuf[mbufi_SetLocalName + 76];
u_SetLocalName_Name.bytebuffer[170] = mbuf[mbufi_SetLocalName + 77];
u_SetLocalName_Name.bytebuffer[169] = mbuf[mbufi_SetLocalName + 78];
u_SetLocalName_Name.bytebuffer[168] = mbuf[mbufi_SetLocalName + 79];
u_SetLocalName_Name.bytebuffer[167] = mbuf[mbufi_SetLocalName + 80];
u_SetLocalName_Name.bytebuffer[166] = mbuf[mbufi_SetLocalName + 81];
u_SetLocalName_Name.bytebuffer[165] = mbuf[mbufi_SetLocalName + 82];
u_SetLocalName_Name.bytebuffer[164] = mbuf[mbufi_SetLocalName + 83];
u_SetLocalName_Name.bytebuffer[163] = mbuf[mbufi_SetLocalName + 84];
u_SetLocalName_Name.bytebuffer[162] = mbuf[mbufi_SetLocalName + 85];
u_SetLocalName_Name.bytebuffer[161] = mbuf[mbufi_SetLocalName + 86];
u_SetLocalName_Name.bytebuffer[160] = mbuf[mbufi_SetLocalName + 87];
u_SetLocalName_Name.bytebuffer[159] = mbuf[mbufi_SetLocalName + 88];
u_SetLocalName_Name.bytebuffer[158] = mbuf[mbufi_SetLocalName + 89];
u_SetLocalName_Name.bytebuffer[157] = mbuf[mbufi_SetLocalName + 90];
u_SetLocalName_Name.bytebuffer[156] = mbuf[mbufi_SetLocalName + 91];
u_SetLocalName_Name.bytebuffer[155] = mbuf[mbufi_SetLocalName + 92];
u_SetLocalName_Name.bytebuffer[154] = mbuf[mbufi_SetLocalName + 93];
u_SetLocalName_Name.bytebuffer[153] = mbuf[mbufi_SetLocalName + 94];
u_SetLocalName_Name.bytebuffer[152] = mbuf[mbufi_SetLocalName + 95];
u_SetLocalName_Name.bytebuffer[151] = mbuf[mbufi_SetLocalName + 96];
u_SetLocalName_Name.bytebuffer[150] = mbuf[mbufi_SetLocalName + 97];
u_SetLocalName_Name.bytebuffer[149] = mbuf[mbufi_SetLocalName + 98];
u_SetLocalName_Name.bytebuffer[148] = mbuf[mbufi_SetLocalName + 99];
u_SetLocalName_Name.bytebuffer[147] = mbuf[mbufi_SetLocalName + 100];
u_SetLocalName_Name.bytebuffer[146] = mbuf[mbufi_SetLocalName + 101];
u_SetLocalName_Name.bytebuffer[145] = mbuf[mbufi_SetLocalName + 102];
u_SetLocalName_Name.bytebuffer[144] = mbuf[mbufi_SetLocalName + 103];
u_SetLocalName_Name.bytebuffer[143] = mbuf[mbufi_SetLocalName + 104];
u_SetLocalName_Name.bytebuffer[142] = mbuf[mbufi_SetLocalName + 105];
u_SetLocalName_Name.bytebuffer[141] = mbuf[mbufi_SetLocalName + 106];
u_SetLocalName_Name.bytebuffer[140] = mbuf[mbufi_SetLocalName + 107];
u_SetLocalName_Name.bytebuffer[139] = mbuf[mbufi_SetLocalName + 108];
u_SetLocalName_Name.bytebuffer[138] = mbuf[mbufi_SetLocalName + 109];
u_SetLocalName_Name.bytebuffer[137] = mbuf[mbufi_SetLocalName + 110];
u_SetLocalName_Name.bytebuffer[136] = mbuf[mbufi_SetLocalName + 111];
u_SetLocalName_Name.bytebuffer[135] = mbuf[mbufi_SetLocalName + 112];
u_SetLocalName_Name.bytebuffer[134] = mbuf[mbufi_SetLocalName + 113];
u_SetLocalName_Name.bytebuffer[133] = mbuf[mbufi_SetLocalName + 114];
u_SetLocalName_Name.bytebuffer[132] = mbuf[mbufi_SetLocalName + 115];
u_SetLocalName_Name.bytebuffer[131] = mbuf[mbufi_SetLocalName + 116];
u_SetLocalName_Name.bytebuffer[130] = mbuf[mbufi_SetLocalName + 117];
u_SetLocalName_Name.bytebuffer[129] = mbuf[mbufi_SetLocalName + 118];
u_SetLocalName_Name.bytebuffer[128] = mbuf[mbufi_SetLocalName + 119];
u_SetLocalName_Name.bytebuffer[127] = mbuf[mbufi_SetLocalName + 120];
u_SetLocalName_Name.bytebuffer[126] = mbuf[mbufi_SetLocalName + 121];
u_SetLocalName_Name.bytebuffer[125] = mbuf[mbufi_SetLocalName + 122];
u_SetLocalName_Name.bytebuffer[124] = mbuf[mbufi_SetLocalName + 123];
u_SetLocalName_Name.bytebuffer[123] = mbuf[mbufi_SetLocalName + 124];
u_SetLocalName_Name.bytebuffer[122] = mbuf[mbufi_SetLocalName + 125];
u_SetLocalName_Name.bytebuffer[121] = mbuf[mbufi_SetLocalName + 126];
u_SetLocalName_Name.bytebuffer[120] = mbuf[mbufi_SetLocalName + 127];
u_SetLocalName_Name.bytebuffer[119] = mbuf[mbufi_SetLocalName + 128];
u_SetLocalName_Name.bytebuffer[118] = mbuf[mbufi_SetLocalName + 129];
u_SetLocalName_Name.bytebuffer[117] = mbuf[mbufi_SetLocalName + 130];
u_SetLocalName_Name.bytebuffer[116] = mbuf[mbufi_SetLocalName + 131];
u_SetLocalName_Name.bytebuffer[115] = mbuf[mbufi_SetLocalName + 132];
u_SetLocalName_Name.bytebuffer[114] = mbuf[mbufi_SetLocalName + 133];
u_SetLocalName_Name.bytebuffer[113] = mbuf[mbufi_SetLocalName + 134];
u_SetLocalName_Name.bytebuffer[112] = mbuf[mbufi_SetLocalName + 135];
u_SetLocalName_Name.bytebuffer[111] = mbuf[mbufi_SetLocalName + 136];
u_SetLocalName_Name.bytebuffer[110] = mbuf[mbufi_SetLocalName + 137];
u_SetLocalName_Name.bytebuffer[109] = mbuf[mbufi_SetLocalName + 138];
u_SetLocalName_Name.bytebuffer[108] = mbuf[mbufi_SetLocalName + 139];
u_SetLocalName_Name.bytebuffer[107] = mbuf[mbufi_SetLocalName + 140];
u_SetLocalName_Name.bytebuffer[106] = mbuf[mbufi_SetLocalName + 141];
u_SetLocalName_Name.bytebuffer[105] = mbuf[mbufi_SetLocalName + 142];
u_SetLocalName_Name.bytebuffer[104] = mbuf[mbufi_SetLocalName + 143];
u_SetLocalName_Name.bytebuffer[103] = mbuf[mbufi_SetLocalName + 144];
u_SetLocalName_Name.bytebuffer[102] = mbuf[mbufi_SetLocalName + 145];
u_SetLocalName_Name.bytebuffer[101] = mbuf[mbufi_SetLocalName + 146];
u_SetLocalName_Name.bytebuffer[100] = mbuf[mbufi_SetLocalName + 147];
u_SetLocalName_Name.bytebuffer[99] = mbuf[mbufi_SetLocalName + 148];
u_SetLocalName_Name.bytebuffer[98] = mbuf[mbufi_SetLocalName + 149];
u_SetLocalName_Name.bytebuffer[97] = mbuf[mbufi_SetLocalName + 150];
u_SetLocalName_Name.bytebuffer[96] = mbuf[mbufi_SetLocalName + 151];
u_SetLocalName_Name.bytebuffer[95] = mbuf[mbufi_SetLocalName + 152];
u_SetLocalName_Name.bytebuffer[94] = mbuf[mbufi_SetLocalName + 153];
u_SetLocalName_Name.bytebuffer[93] = mbuf[mbufi_SetLocalName + 154];
u_SetLocalName_Name.bytebuffer[92] = mbuf[mbufi_SetLocalName + 155];
u_SetLocalName_Name.bytebuffer[91] = mbuf[mbufi_SetLocalName + 156];
u_SetLocalName_Name.bytebuffer[90] = mbuf[mbufi_SetLocalName + 157];
u_SetLocalName_Name.bytebuffer[89] = mbuf[mbufi_SetLocalName + 158];
u_SetLocalName_Name.bytebuffer[88] = mbuf[mbufi_SetLocalName + 159];
u_SetLocalName_Name.bytebuffer[87] = mbuf[mbufi_SetLocalName + 160];
u_SetLocalName_Name.bytebuffer[86] = mbuf[mbufi_SetLocalName + 161];
u_SetLocalName_Name.bytebuffer[85] = mbuf[mbufi_SetLocalName + 162];
u_SetLocalName_Name.bytebuffer[84] = mbuf[mbufi_SetLocalName + 163];
u_SetLocalName_Name.bytebuffer[83] = mbuf[mbufi_SetLocalName + 164];
u_SetLocalName_Name.bytebuffer[82] = mbuf[mbufi_SetLocalName + 165];
u_SetLocalName_Name.bytebuffer[81] = mbuf[mbufi_SetLocalName + 166];
u_SetLocalName_Name.bytebuffer[80] = mbuf[mbufi_SetLocalName + 167];
u_SetLocalName_Name.bytebuffer[79] = mbuf[mbufi_SetLocalName + 168];
u_SetLocalName_Name.bytebuffer[78] = mbuf[mbufi_SetLocalName + 169];
u_SetLocalName_Name.bytebuffer[77] = mbuf[mbufi_SetLocalName + 170];
u_SetLocalName_Name.bytebuffer[76] = mbuf[mbufi_SetLocalName + 171];
u_SetLocalName_Name.bytebuffer[75] = mbuf[mbufi_SetLocalName + 172];
u_SetLocalName_Name.bytebuffer[74] = mbuf[mbufi_SetLocalName + 173];
u_SetLocalName_Name.bytebuffer[73] = mbuf[mbufi_SetLocalName + 174];
u_SetLocalName_Name.bytebuffer[72] = mbuf[mbufi_SetLocalName + 175];
u_SetLocalName_Name.bytebuffer[71] = mbuf[mbufi_SetLocalName + 176];
u_SetLocalName_Name.bytebuffer[70] = mbuf[mbufi_SetLocalName + 177];
u_SetLocalName_Name.bytebuffer[69] = mbuf[mbufi_SetLocalName + 178];
u_SetLocalName_Name.bytebuffer[68] = mbuf[mbufi_SetLocalName + 179];
u_SetLocalName_Name.bytebuffer[67] = mbuf[mbufi_SetLocalName + 180];
u_SetLocalName_Name.bytebuffer[66] = mbuf[mbufi_SetLocalName + 181];
u_SetLocalName_Name.bytebuffer[65] = mbuf[mbufi_SetLocalName + 182];
u_SetLocalName_Name.bytebuffer[64] = mbuf[mbufi_SetLocalName + 183];
u_SetLocalName_Name.bytebuffer[63] = mbuf[mbufi_SetLocalName + 184];
u_SetLocalName_Name.bytebuffer[62] = mbuf[mbufi_SetLocalName + 185];
u_SetLocalName_Name.bytebuffer[61] = mbuf[mbufi_SetLocalName + 186];
u_SetLocalName_Name.bytebuffer[60] = mbuf[mbufi_SetLocalName + 187];
u_SetLocalName_Name.bytebuffer[59] = mbuf[mbufi_SetLocalName + 188];
u_SetLocalName_Name.bytebuffer[58] = mbuf[mbufi_SetLocalName + 189];
u_SetLocalName_Name.bytebuffer[57] = mbuf[mbufi_SetLocalName + 190];
u_SetLocalName_Name.bytebuffer[56] = mbuf[mbufi_SetLocalName + 191];
u_SetLocalName_Name.bytebuffer[55] = mbuf[mbufi_SetLocalName + 192];
u_SetLocalName_Name.bytebuffer[54] = mbuf[mbufi_SetLocalName + 193];
u_SetLocalName_Name.bytebuffer[53] = mbuf[mbufi_SetLocalName + 194];
u_SetLocalName_Name.bytebuffer[52] = mbuf[mbufi_SetLocalName + 195];
u_SetLocalName_Name.bytebuffer[51] = mbuf[mbufi_SetLocalName + 196];
u_SetLocalName_Name.bytebuffer[50] = mbuf[mbufi_SetLocalName + 197];
u_SetLocalName_Name.bytebuffer[49] = mbuf[mbufi_SetLocalName + 198];
u_SetLocalName_Name.bytebuffer[48] = mbuf[mbufi_SetLocalName + 199];
u_SetLocalName_Name.bytebuffer[47] = mbuf[mbufi_SetLocalName + 200];
u_SetLocalName_Name.bytebuffer[46] = mbuf[mbufi_SetLocalName + 201];
u_SetLocalName_Name.bytebuffer[45] = mbuf[mbufi_SetLocalName + 202];
u_SetLocalName_Name.bytebuffer[44] = mbuf[mbufi_SetLocalName + 203];
u_SetLocalName_Name.bytebuffer[43] = mbuf[mbufi_SetLocalName + 204];
u_SetLocalName_Name.bytebuffer[42] = mbuf[mbufi_SetLocalName + 205];
u_SetLocalName_Name.bytebuffer[41] = mbuf[mbufi_SetLocalName + 206];
u_SetLocalName_Name.bytebuffer[40] = mbuf[mbufi_SetLocalName + 207];
u_SetLocalName_Name.bytebuffer[39] = mbuf[mbufi_SetLocalName + 208];
u_SetLocalName_Name.bytebuffer[38] = mbuf[mbufi_SetLocalName + 209];
u_SetLocalName_Name.bytebuffer[37] = mbuf[mbufi_SetLocalName + 210];
u_SetLocalName_Name.bytebuffer[36] = mbuf[mbufi_SetLocalName + 211];
u_SetLocalName_Name.bytebuffer[35] = mbuf[mbufi_SetLocalName + 212];
u_SetLocalName_Name.bytebuffer[34] = mbuf[mbufi_SetLocalName + 213];
u_SetLocalName_Name.bytebuffer[33] = mbuf[mbufi_SetLocalName + 214];
u_SetLocalName_Name.bytebuffer[32] = mbuf[mbufi_SetLocalName + 215];
u_SetLocalName_Name.bytebuffer[31] = mbuf[mbufi_SetLocalName + 216];
u_SetLocalName_Name.bytebuffer[30] = mbuf[mbufi_SetLocalName + 217];
u_SetLocalName_Name.bytebuffer[29] = mbuf[mbufi_SetLocalName + 218];
u_SetLocalName_Name.bytebuffer[28] = mbuf[mbufi_SetLocalName + 219];
u_SetLocalName_Name.bytebuffer[27] = mbuf[mbufi_SetLocalName + 220];
u_SetLocalName_Name.bytebuffer[26] = mbuf[mbufi_SetLocalName + 221];
u_SetLocalName_Name.bytebuffer[25] = mbuf[mbufi_SetLocalName + 222];
u_SetLocalName_Name.bytebuffer[24] = mbuf[mbufi_SetLocalName + 223];
u_SetLocalName_Name.bytebuffer[23] = mbuf[mbufi_SetLocalName + 224];
u_SetLocalName_Name.bytebuffer[22] = mbuf[mbufi_SetLocalName + 225];
u_SetLocalName_Name.bytebuffer[21] = mbuf[mbufi_SetLocalName + 226];
u_SetLocalName_Name.bytebuffer[20] = mbuf[mbufi_SetLocalName + 227];
u_SetLocalName_Name.bytebuffer[19] = mbuf[mbufi_SetLocalName + 228];
u_SetLocalName_Name.bytebuffer[18] = mbuf[mbufi_SetLocalName + 229];
u_SetLocalName_Name.bytebuffer[17] = mbuf[mbufi_SetLocalName + 230];
u_SetLocalName_Name.bytebuffer[16] = mbuf[mbufi_SetLocalName + 231];
u_SetLocalName_Name.bytebuffer[15] = mbuf[mbufi_SetLocalName + 232];
u_SetLocalName_Name.bytebuffer[14] = mbuf[mbufi_SetLocalName + 233];
u_SetLocalName_Name.bytebuffer[13] = mbuf[mbufi_SetLocalName + 234];
u_SetLocalName_Name.bytebuffer[12] = mbuf[mbufi_SetLocalName + 235];
u_SetLocalName_Name.bytebuffer[11] = mbuf[mbufi_SetLocalName + 236];
u_SetLocalName_Name.bytebuffer[10] = mbuf[mbufi_SetLocalName + 237];
u_SetLocalName_Name.bytebuffer[9] = mbuf[mbufi_SetLocalName + 238];
u_SetLocalName_Name.bytebuffer[8] = mbuf[mbufi_SetLocalName + 239];
u_SetLocalName_Name.bytebuffer[7] = mbuf[mbufi_SetLocalName + 240];
u_SetLocalName_Name.bytebuffer[6] = mbuf[mbufi_SetLocalName + 241];
u_SetLocalName_Name.bytebuffer[5] = mbuf[mbufi_SetLocalName + 242];
u_SetLocalName_Name.bytebuffer[4] = mbuf[mbufi_SetLocalName + 243];
u_SetLocalName_Name.bytebuffer[3] = mbuf[mbufi_SetLocalName + 244];
u_SetLocalName_Name.bytebuffer[2] = mbuf[mbufi_SetLocalName + 245];
u_SetLocalName_Name.bytebuffer[1] = mbuf[mbufi_SetLocalName + 246];
u_SetLocalName_Name.bytebuffer[0] = mbuf[mbufi_SetLocalName + 247];
mbufi_SetLocalName += 248;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 85:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Disconnect = 2;
union u_Disconnect_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_Disconnect_ConnectionHandle;
u_Disconnect_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_Disconnect + 0];
u_Disconnect_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_Disconnect + 1];
mbufi_Disconnect += 2;
union u_Disconnect_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Disconnect_Reason;
u_Disconnect_Reason.bytebuffer[0] = mbuf[mbufi_Disconnect + 0];
mbufi_Disconnect += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_Disconnect(_instance,
 u_Disconnect_ConnectionHandle.p /* ConnectionHandle */ ,
 u_Disconnect_Reason.p /* Reason */ );
return 1;
break;
}
}
break;
}
case 86:{
byte mbuf[12 - 2];
while (mbufi < (12 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEEventMask = 2;
union u_SetLEEventMask_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_SetLEEventMask_Mask;
u_SetLEEventMask_Mask.bytebuffer[7] = mbuf[mbufi_SetLEEventMask + 0];
u_SetLEEventMask_Mask.bytebuffer[6] = mbuf[mbufi_SetLEEventMask + 1];
u_SetLEEventMask_Mask.bytebuffer[5] = mbuf[mbufi_SetLEEventMask + 2];
u_SetLEEventMask_Mask.bytebuffer[4] = mbuf[mbufi_SetLEEventMask + 3];
u_SetLEEventMask_Mask.bytebuffer[3] = mbuf[mbufi_SetLEEventMask + 4];
u_SetLEEventMask_Mask.bytebuffer[2] = mbuf[mbufi_SetLEEventMask + 5];
u_SetLEEventMask_Mask.bytebuffer[1] = mbuf[mbufi_SetLEEventMask + 6];
u_SetLEEventMask_Mask.bytebuffer[0] = mbuf[mbufi_SetLEEventMask + 7];
mbufi_SetLEEventMask += 8;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEEventMask(_instance,
 u_SetLEEventMask_Mask.p /* Mask */ );
return 1;
break;
}
}
break;
}
case 87:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEEventMaskAll = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(_instance);
return 1;
break;
}
}
break;
}
case 88:{
byte mbuf[19 - 2];
while (mbufi < (19 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertisementParameters = 2;
union u_SetLEAdvertisementParameters_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEAdvertisementParameters_MinInterval;
u_SetLEAdvertisementParameters_MinInterval.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_MinInterval.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
mbufi_SetLEAdvertisementParameters += 2;
union u_SetLEAdvertisementParameters_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEAdvertisementParameters_MaxInterval;
u_SetLEAdvertisementParameters_MaxInterval.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_MaxInterval.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
mbufi_SetLEAdvertisementParameters += 2;
union u_SetLEAdvertisementParameters_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_Type;
u_SetLEAdvertisementParameters_Type.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_OwnAddressType;
u_SetLEAdvertisementParameters_OwnAddressType.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_PeerAddressType;
u_SetLEAdvertisementParameters_PeerAddressType.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_SetLEAdvertisementParameters_PeerAddress;
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[5] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[4] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[3] = mbuf[mbufi_SetLEAdvertisementParameters + 2];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[2] = mbuf[mbufi_SetLEAdvertisementParameters + 3];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 4];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 5];
mbufi_SetLEAdvertisementParameters += 6;
union u_SetLEAdvertisementParameters_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_Channel;
u_SetLEAdvertisementParameters_Channel.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_FilterPolicy;
u_SetLEAdvertisementParameters_FilterPolicy.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(_instance,
 u_SetLEAdvertisementParameters_MinInterval.p /* MinInterval */ ,
 u_SetLEAdvertisementParameters_MaxInterval.p /* MaxInterval */ ,
 u_SetLEAdvertisementParameters_Type.p /* Type */ ,
 u_SetLEAdvertisementParameters_OwnAddressType.p /* OwnAddressType */ ,
 u_SetLEAdvertisementParameters_PeerAddressType.p /* PeerAddressType */ ,
 u_SetLEAdvertisementParameters_PeerAddress.p /* PeerAddress */ ,
 u_SetLEAdvertisementParameters_Channel.p /* Channel */ ,
 u_SetLEAdvertisementParameters_FilterPolicy.p /* FilterPolicy */ );
return 1;
break;
}
}
break;
}
case 89:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertiseEnable = 2;
union u_SetLEAdvertiseEnable_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnable_Enable;
u_SetLEAdvertiseEnable_Enable.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnable + 0];
mbufi_SetLEAdvertiseEnable += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(_instance,
 u_SetLEAdvertiseEnable_Enable.p /* Enable */ );
return 1;
break;
}
}
break;
}
case 90:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEAdvertisingData = 2;
union u_SetLEAdvertisingData_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingData_Length;
u_SetLEAdvertisingData_Length.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingData + 0];
mbufi_SetLEAdvertisingData += 1;
union u_SetLEAdvertisingData_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_SetLEAdvertisingData_Data;
u_SetLEAdvertisingData_Data.bytebuffer[30] = mbuf[mbufi_SetLEAdvertisingData + 0];
u_SetLEAdvertisingData_Data.bytebuffer[29] = mbuf[mbufi_SetLEAdvertisingData + 1];
u_SetLEAdvertisingData_Data.bytebuffer[28] = mbuf[mbufi_SetLEAdvertisingData + 2];
u_SetLEAdvertisingData_Data.bytebuffer[27] = mbuf[mbufi_SetLEAdvertisingData + 3];
u_SetLEAdvertisingData_Data.bytebuffer[26] = mbuf[mbufi_SetLEAdvertisingData + 4];
u_SetLEAdvertisingData_Data.bytebuffer[25] = mbuf[mbufi_SetLEAdvertisingData + 5];
u_SetLEAdvertisingData_Data.bytebuffer[24] = mbuf[mbufi_SetLEAdvertisingData + 6];
u_SetLEAdvertisingData_Data.bytebuffer[23] = mbuf[mbufi_SetLEAdvertisingData + 7];
u_SetLEAdvertisingData_Data.bytebuffer[22] = mbuf[mbufi_SetLEAdvertisingData + 8];
u_SetLEAdvertisingData_Data.bytebuffer[21] = mbuf[mbufi_SetLEAdvertisingData + 9];
u_SetLEAdvertisingData_Data.bytebuffer[20] = mbuf[mbufi_SetLEAdvertisingData + 10];
u_SetLEAdvertisingData_Data.bytebuffer[19] = mbuf[mbufi_SetLEAdvertisingData + 11];
u_SetLEAdvertisingData_Data.bytebuffer[18] = mbuf[mbufi_SetLEAdvertisingData + 12];
u_SetLEAdvertisingData_Data.bytebuffer[17] = mbuf[mbufi_SetLEAdvertisingData + 13];
u_SetLEAdvertisingData_Data.bytebuffer[16] = mbuf[mbufi_SetLEAdvertisingData + 14];
u_SetLEAdvertisingData_Data.bytebuffer[15] = mbuf[mbufi_SetLEAdvertisingData + 15];
u_SetLEAdvertisingData_Data.bytebuffer[14] = mbuf[mbufi_SetLEAdvertisingData + 16];
u_SetLEAdvertisingData_Data.bytebuffer[13] = mbuf[mbufi_SetLEAdvertisingData + 17];
u_SetLEAdvertisingData_Data.bytebuffer[12] = mbuf[mbufi_SetLEAdvertisingData + 18];
u_SetLEAdvertisingData_Data.bytebuffer[11] = mbuf[mbufi_SetLEAdvertisingData + 19];
u_SetLEAdvertisingData_Data.bytebuffer[10] = mbuf[mbufi_SetLEAdvertisingData + 20];
u_SetLEAdvertisingData_Data.bytebuffer[9] = mbuf[mbufi_SetLEAdvertisingData + 21];
u_SetLEAdvertisingData_Data.bytebuffer[8] = mbuf[mbufi_SetLEAdvertisingData + 22];
u_SetLEAdvertisingData_Data.bytebuffer[7] = mbuf[mbufi_SetLEAdvertisingData + 23];
u_SetLEAdvertisingData_Data.bytebuffer[6] = mbuf[mbufi_SetLEAdvertisingData + 24];
u_SetLEAdvertisingData_Data.bytebuffer[5] = mbuf[mbufi_SetLEAdvertisingData + 25];
u_SetLEAdvertisingData_Data.bytebuffer[4] = mbuf[mbufi_SetLEAdvertisingData + 26];
u_SetLEAdvertisingData_Data.bytebuffer[3] = mbuf[mbufi_SetLEAdvertisingData + 27];
u_SetLEAdvertisingData_Data.bytebuffer[2] = mbuf[mbufi_SetLEAdvertisingData + 28];
u_SetLEAdvertisingData_Data.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisingData + 29];
u_SetLEAdvertisingData_Data.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingData + 30];
mbufi_SetLEAdvertisingData += 31;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(_instance,
 u_SetLEAdvertisingData_Length.p /* Length */ ,
 u_SetLEAdvertisingData_Data.p /* Data */ );
return 1;
break;
}
}
break;
}
case 91:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanResponseData = 2;
union u_SetLEScanResponseData_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseData_Length;
u_SetLEScanResponseData_Length.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseData + 0];
mbufi_SetLEScanResponseData += 1;
union u_SetLEScanResponseData_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_SetLEScanResponseData_Data;
u_SetLEScanResponseData_Data.bytebuffer[30] = mbuf[mbufi_SetLEScanResponseData + 0];
u_SetLEScanResponseData_Data.bytebuffer[29] = mbuf[mbufi_SetLEScanResponseData + 1];
u_SetLEScanResponseData_Data.bytebuffer[28] = mbuf[mbufi_SetLEScanResponseData + 2];
u_SetLEScanResponseData_Data.bytebuffer[27] = mbuf[mbufi_SetLEScanResponseData + 3];
u_SetLEScanResponseData_Data.bytebuffer[26] = mbuf[mbufi_SetLEScanResponseData + 4];
u_SetLEScanResponseData_Data.bytebuffer[25] = mbuf[mbufi_SetLEScanResponseData + 5];
u_SetLEScanResponseData_Data.bytebuffer[24] = mbuf[mbufi_SetLEScanResponseData + 6];
u_SetLEScanResponseData_Data.bytebuffer[23] = mbuf[mbufi_SetLEScanResponseData + 7];
u_SetLEScanResponseData_Data.bytebuffer[22] = mbuf[mbufi_SetLEScanResponseData + 8];
u_SetLEScanResponseData_Data.bytebuffer[21] = mbuf[mbufi_SetLEScanResponseData + 9];
u_SetLEScanResponseData_Data.bytebuffer[20] = mbuf[mbufi_SetLEScanResponseData + 10];
u_SetLEScanResponseData_Data.bytebuffer[19] = mbuf[mbufi_SetLEScanResponseData + 11];
u_SetLEScanResponseData_Data.bytebuffer[18] = mbuf[mbufi_SetLEScanResponseData + 12];
u_SetLEScanResponseData_Data.bytebuffer[17] = mbuf[mbufi_SetLEScanResponseData + 13];
u_SetLEScanResponseData_Data.bytebuffer[16] = mbuf[mbufi_SetLEScanResponseData + 14];
u_SetLEScanResponseData_Data.bytebuffer[15] = mbuf[mbufi_SetLEScanResponseData + 15];
u_SetLEScanResponseData_Data.bytebuffer[14] = mbuf[mbufi_SetLEScanResponseData + 16];
u_SetLEScanResponseData_Data.bytebuffer[13] = mbuf[mbufi_SetLEScanResponseData + 17];
u_SetLEScanResponseData_Data.bytebuffer[12] = mbuf[mbufi_SetLEScanResponseData + 18];
u_SetLEScanResponseData_Data.bytebuffer[11] = mbuf[mbufi_SetLEScanResponseData + 19];
u_SetLEScanResponseData_Data.bytebuffer[10] = mbuf[mbufi_SetLEScanResponseData + 20];
u_SetLEScanResponseData_Data.bytebuffer[9] = mbuf[mbufi_SetLEScanResponseData + 21];
u_SetLEScanResponseData_Data.bytebuffer[8] = mbuf[mbufi_SetLEScanResponseData + 22];
u_SetLEScanResponseData_Data.bytebuffer[7] = mbuf[mbufi_SetLEScanResponseData + 23];
u_SetLEScanResponseData_Data.bytebuffer[6] = mbuf[mbufi_SetLEScanResponseData + 24];
u_SetLEScanResponseData_Data.bytebuffer[5] = mbuf[mbufi_SetLEScanResponseData + 25];
u_SetLEScanResponseData_Data.bytebuffer[4] = mbuf[mbufi_SetLEScanResponseData + 26];
u_SetLEScanResponseData_Data.bytebuffer[3] = mbuf[mbufi_SetLEScanResponseData + 27];
u_SetLEScanResponseData_Data.bytebuffer[2] = mbuf[mbufi_SetLEScanResponseData + 28];
u_SetLEScanResponseData_Data.bytebuffer[1] = mbuf[mbufi_SetLEScanResponseData + 29];
u_SetLEScanResponseData_Data.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseData + 30];
mbufi_SetLEScanResponseData += 31;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(_instance,
 u_SetLEScanResponseData_Length.p /* Length */ ,
 u_SetLEScanResponseData_Data.p /* Data */ );
return 1;
break;
}
}
break;
}
case 92:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanParameters = 2;
union u_SetLEScanParameters_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_Type;
u_SetLEScanParameters_Type.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
union u_SetLEScanParameters_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEScanParameters_Interval;
u_SetLEScanParameters_Interval.bytebuffer[1] = mbuf[mbufi_SetLEScanParameters + 0];
u_SetLEScanParameters_Interval.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 1];
mbufi_SetLEScanParameters += 2;
union u_SetLEScanParameters_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEScanParameters_Window;
u_SetLEScanParameters_Window.bytebuffer[1] = mbuf[mbufi_SetLEScanParameters + 0];
u_SetLEScanParameters_Window.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 1];
mbufi_SetLEScanParameters += 2;
union u_SetLEScanParameters_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_OwnAddressType;
u_SetLEScanParameters_OwnAddressType.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
union u_SetLEScanParameters_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_FilterPolicy;
u_SetLEScanParameters_FilterPolicy.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEScanParameters(_instance,
 u_SetLEScanParameters_Type.p /* Type */ ,
 u_SetLEScanParameters_Interval.p /* Interval */ ,
 u_SetLEScanParameters_Window.p /* Window */ ,
 u_SetLEScanParameters_OwnAddressType.p /* OwnAddressType */ ,
 u_SetLEScanParameters_FilterPolicy.p /* FilterPolicy */ );
return 1;
break;
}
}
break;
}
case 93:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SetLEScanEnable = 2;
union u_SetLEScanEnable_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnable_Enable;
u_SetLEScanEnable_Enable.bytebuffer[0] = mbuf[mbufi_SetLEScanEnable + 0];
mbufi_SetLEScanEnable += 1;
union u_SetLEScanEnable_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnable_FilterDuplicates;
u_SetLEScanEnable_FilterDuplicates.bytebuffer[0] = mbuf[mbufi_SetLEScanEnable + 0];
mbufi_SetLEScanEnable += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_SetLEScanEnable(_instance,
 u_SetLEScanEnable_Enable.p /* Enable */ ,
 u_SetLEScanEnable_FilterDuplicates.p /* FilterDuplicates */ );
return 1;
break;
}
}
break;
}
case 94:{
byte mbuf[29 - 2];
while (mbufi < (29 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LECreateConnection = 2;
union u_LECreateConnection_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_Interval;
u_LECreateConnection_Interval.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_Interval.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_Window;
u_LECreateConnection_Window.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_Window.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_FilterPolicy;
u_LECreateConnection_FilterPolicy.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_PeerAddressType;
u_LECreateConnection_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LECreateConnection_PeerAddress;
u_LECreateConnection_PeerAddress.bytebuffer[5] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_PeerAddress.bytebuffer[4] = mbuf[mbufi_LECreateConnection + 1];
u_LECreateConnection_PeerAddress.bytebuffer[3] = mbuf[mbufi_LECreateConnection + 2];
u_LECreateConnection_PeerAddress.bytebuffer[2] = mbuf[mbufi_LECreateConnection + 3];
u_LECreateConnection_PeerAddress.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 4];
u_LECreateConnection_PeerAddress.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 5];
mbufi_LECreateConnection += 6;
union u_LECreateConnection_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_OwnAddressType;
u_LECreateConnection_OwnAddressType.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnIntervalMin;
u_LECreateConnection_ConnIntervalMin.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnIntervalMin.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnIntervalMax;
u_LECreateConnection_ConnIntervalMax.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnIntervalMax.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnLatency;
u_LECreateConnection_ConnLatency.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnLatency.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_SupervisionTimeout;
u_LECreateConnection_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_CELengthMin;
u_LECreateConnection_CELengthMin.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_CELengthMin.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_CELengthMax;
u_LECreateConnection_CELengthMax.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_CELengthMax.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_LECreateConnection(_instance,
 u_LECreateConnection_Interval.p /* Interval */ ,
 u_LECreateConnection_Window.p /* Window */ ,
 u_LECreateConnection_FilterPolicy.p /* FilterPolicy */ ,
 u_LECreateConnection_PeerAddressType.p /* PeerAddressType */ ,
 u_LECreateConnection_PeerAddress.p /* PeerAddress */ ,
 u_LECreateConnection_OwnAddressType.p /* OwnAddressType */ ,
 u_LECreateConnection_ConnIntervalMin.p /* ConnIntervalMin */ ,
 u_LECreateConnection_ConnIntervalMax.p /* ConnIntervalMax */ ,
 u_LECreateConnection_ConnLatency.p /* ConnLatency */ ,
 u_LECreateConnection_SupervisionTimeout.p /* SupervisionTimeout */ ,
 u_LECreateConnection_CELengthMin.p /* CELengthMin */ ,
 u_LECreateConnection_CELengthMax.p /* CELengthMax */ );
return 1;
break;
}
}
break;
}
case 95:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LECreateConnectionCancel = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(_instance);
return 1;
break;
}
}
break;
}
case 96:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LERand = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_LERand(_instance);
return 1;
break;
}
}
break;
}
case 97:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEEncrypt = 2;
union u_LEEncrypt_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncrypt_Key;
u_LEEncrypt_Key.bytebuffer[15] = mbuf[mbufi_LEEncrypt + 0];
u_LEEncrypt_Key.bytebuffer[14] = mbuf[mbufi_LEEncrypt + 1];
u_LEEncrypt_Key.bytebuffer[13] = mbuf[mbufi_LEEncrypt + 2];
u_LEEncrypt_Key.bytebuffer[12] = mbuf[mbufi_LEEncrypt + 3];
u_LEEncrypt_Key.bytebuffer[11] = mbuf[mbufi_LEEncrypt + 4];
u_LEEncrypt_Key.bytebuffer[10] = mbuf[mbufi_LEEncrypt + 5];
u_LEEncrypt_Key.bytebuffer[9] = mbuf[mbufi_LEEncrypt + 6];
u_LEEncrypt_Key.bytebuffer[8] = mbuf[mbufi_LEEncrypt + 7];
u_LEEncrypt_Key.bytebuffer[7] = mbuf[mbufi_LEEncrypt + 8];
u_LEEncrypt_Key.bytebuffer[6] = mbuf[mbufi_LEEncrypt + 9];
u_LEEncrypt_Key.bytebuffer[5] = mbuf[mbufi_LEEncrypt + 10];
u_LEEncrypt_Key.bytebuffer[4] = mbuf[mbufi_LEEncrypt + 11];
u_LEEncrypt_Key.bytebuffer[3] = mbuf[mbufi_LEEncrypt + 12];
u_LEEncrypt_Key.bytebuffer[2] = mbuf[mbufi_LEEncrypt + 13];
u_LEEncrypt_Key.bytebuffer[1] = mbuf[mbufi_LEEncrypt + 14];
u_LEEncrypt_Key.bytebuffer[0] = mbuf[mbufi_LEEncrypt + 15];
mbufi_LEEncrypt += 16;
union u_LEEncrypt_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncrypt_Plaintext;
u_LEEncrypt_Plaintext.bytebuffer[15] = mbuf[mbufi_LEEncrypt + 0];
u_LEEncrypt_Plaintext.bytebuffer[14] = mbuf[mbufi_LEEncrypt + 1];
u_LEEncrypt_Plaintext.bytebuffer[13] = mbuf[mbufi_LEEncrypt + 2];
u_LEEncrypt_Plaintext.bytebuffer[12] = mbuf[mbufi_LEEncrypt + 3];
u_LEEncrypt_Plaintext.bytebuffer[11] = mbuf[mbufi_LEEncrypt + 4];
u_LEEncrypt_Plaintext.bytebuffer[10] = mbuf[mbufi_LEEncrypt + 5];
u_LEEncrypt_Plaintext.bytebuffer[9] = mbuf[mbufi_LEEncrypt + 6];
u_LEEncrypt_Plaintext.bytebuffer[8] = mbuf[mbufi_LEEncrypt + 7];
u_LEEncrypt_Plaintext.bytebuffer[7] = mbuf[mbufi_LEEncrypt + 8];
u_LEEncrypt_Plaintext.bytebuffer[6] = mbuf[mbufi_LEEncrypt + 9];
u_LEEncrypt_Plaintext.bytebuffer[5] = mbuf[mbufi_LEEncrypt + 10];
u_LEEncrypt_Plaintext.bytebuffer[4] = mbuf[mbufi_LEEncrypt + 11];
u_LEEncrypt_Plaintext.bytebuffer[3] = mbuf[mbufi_LEEncrypt + 12];
u_LEEncrypt_Plaintext.bytebuffer[2] = mbuf[mbufi_LEEncrypt + 13];
u_LEEncrypt_Plaintext.bytebuffer[1] = mbuf[mbufi_LEEncrypt + 14];
u_LEEncrypt_Plaintext.bytebuffer[0] = mbuf[mbufi_LEEncrypt + 15];
mbufi_LEEncrypt += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_LEEncrypt(_instance,
 u_LEEncrypt_Key.p /* Key */ ,
 u_LEEncrypt_Plaintext.p /* Plaintext */ );
return 1;
break;
}
}
break;
}
case 98:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_LEStartEncryption = 2;
union u_LEStartEncryption_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEStartEncryption_ConnectionHandle;
u_LEStartEncryption_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 1];
mbufi_LEStartEncryption += 2;
union u_LEStartEncryption_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_LEStartEncryption_Random;
u_LEStartEncryption_Random.bytebuffer[7] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_Random.bytebuffer[6] = mbuf[mbufi_LEStartEncryption + 1];
u_LEStartEncryption_Random.bytebuffer[5] = mbuf[mbufi_LEStartEncryption + 2];
u_LEStartEncryption_Random.bytebuffer[4] = mbuf[mbufi_LEStartEncryption + 3];
u_LEStartEncryption_Random.bytebuffer[3] = mbuf[mbufi_LEStartEncryption + 4];
u_LEStartEncryption_Random.bytebuffer[2] = mbuf[mbufi_LEStartEncryption + 5];
u_LEStartEncryption_Random.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 6];
u_LEStartEncryption_Random.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 7];
mbufi_LEStartEncryption += 8;
union u_LEStartEncryption_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_LEStartEncryption_EDIV;
u_LEStartEncryption_EDIV.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_EDIV.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 1];
mbufi_LEStartEncryption += 2;
union u_LEStartEncryption_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEStartEncryption_LTK;
u_LEStartEncryption_LTK.bytebuffer[15] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_LTK.bytebuffer[14] = mbuf[mbufi_LEStartEncryption + 1];
u_LEStartEncryption_LTK.bytebuffer[13] = mbuf[mbufi_LEStartEncryption + 2];
u_LEStartEncryption_LTK.bytebuffer[12] = mbuf[mbufi_LEStartEncryption + 3];
u_LEStartEncryption_LTK.bytebuffer[11] = mbuf[mbufi_LEStartEncryption + 4];
u_LEStartEncryption_LTK.bytebuffer[10] = mbuf[mbufi_LEStartEncryption + 5];
u_LEStartEncryption_LTK.bytebuffer[9] = mbuf[mbufi_LEStartEncryption + 6];
u_LEStartEncryption_LTK.bytebuffer[8] = mbuf[mbufi_LEStartEncryption + 7];
u_LEStartEncryption_LTK.bytebuffer[7] = mbuf[mbufi_LEStartEncryption + 8];
u_LEStartEncryption_LTK.bytebuffer[6] = mbuf[mbufi_LEStartEncryption + 9];
u_LEStartEncryption_LTK.bytebuffer[5] = mbuf[mbufi_LEStartEncryption + 10];
u_LEStartEncryption_LTK.bytebuffer[4] = mbuf[mbufi_LEStartEncryption + 11];
u_LEStartEncryption_LTK.bytebuffer[3] = mbuf[mbufi_LEStartEncryption + 12];
u_LEStartEncryption_LTK.bytebuffer[2] = mbuf[mbufi_LEStartEncryption + 13];
u_LEStartEncryption_LTK.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 14];
u_LEStartEncryption_LTK.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 15];
mbufi_LEStartEncryption += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
HCISocketProxyImpl_handle_Commands_LEStartEncryption(_instance,
 u_LEStartEncryption_ConnectionHandle.p /* ConnectionHandle */ ,
 u_LEStartEncryption_Random.p /* Random */ ,
 u_LEStartEncryption_EDIV.p /* EDIV */ ,
 u_LEStartEncryption_LTK.p /* LTK */ );
return 1;
break;
}
}
break;
}
case 26:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingRequest = 2;
union u_SMPPairingRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRequest_Handle;
u_SMPPairingRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRequest + 0];
u_SMPPairingRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 1];
mbufi_SMPPairingRequest += 2;
union u_SMPPairingRequest_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_IOCapability;
u_SMPPairingRequest_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_OOBDataPresent;
u_SMPPairingRequest_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Bonding;
u_SMPPairingRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MITM;
u_SMPPairingRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_SecureConnection;
u_SMPPairingRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Keypress;
u_SMPPairingRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MaximumEncryptionKeySize;
u_SMPPairingRequest_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_InitiatorKeyDistribution;
u_SMPPairingRequest_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_ResponderKeyDistribution;
u_SMPPairingRequest_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingRequest(_instance,
 u_SMPPairingRequest_Handle.p /* Handle */ ,
 u_SMPPairingRequest_IOCapability.p /* IOCapability */ ,
 u_SMPPairingRequest_OOBDataPresent.p /* OOBDataPresent */ ,
 u_SMPPairingRequest_Bonding.p /* Bonding */ ,
 u_SMPPairingRequest_MITM.p /* MITM */ ,
 u_SMPPairingRequest_SecureConnection.p /* SecureConnection */ ,
 u_SMPPairingRequest_Keypress.p /* Keypress */ ,
 u_SMPPairingRequest_MaximumEncryptionKeySize.p /* MaximumEncryptionKeySize */ ,
 u_SMPPairingRequest_InitiatorKeyDistribution.p /* InitiatorKeyDistribution */ ,
 u_SMPPairingRequest_ResponderKeyDistribution.p /* ResponderKeyDistribution */ );
return 1;
break;
}
}
break;
}
case 27:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingResponse = 2;
union u_SMPPairingResponse_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingResponse_Handle;
u_SMPPairingResponse_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingResponse + 0];
u_SMPPairingResponse_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 1];
mbufi_SMPPairingResponse += 2;
union u_SMPPairingResponse_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_IOCapability;
u_SMPPairingResponse_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_OOBDataPresent;
u_SMPPairingResponse_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Bonding;
u_SMPPairingResponse_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MITM;
u_SMPPairingResponse_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_SecureConnection;
u_SMPPairingResponse_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Keypress;
u_SMPPairingResponse_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MaximumEncryptionKeySize;
u_SMPPairingResponse_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_InitiatorKeyDistribution;
u_SMPPairingResponse_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_ResponderKeyDistribution;
u_SMPPairingResponse_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingResponse(_instance,
 u_SMPPairingResponse_Handle.p /* Handle */ ,
 u_SMPPairingResponse_IOCapability.p /* IOCapability */ ,
 u_SMPPairingResponse_OOBDataPresent.p /* OOBDataPresent */ ,
 u_SMPPairingResponse_Bonding.p /* Bonding */ ,
 u_SMPPairingResponse_MITM.p /* MITM */ ,
 u_SMPPairingResponse_SecureConnection.p /* SecureConnection */ ,
 u_SMPPairingResponse_Keypress.p /* Keypress */ ,
 u_SMPPairingResponse_MaximumEncryptionKeySize.p /* MaximumEncryptionKeySize */ ,
 u_SMPPairingResponse_InitiatorKeyDistribution.p /* InitiatorKeyDistribution */ ,
 u_SMPPairingResponse_ResponderKeyDistribution.p /* ResponderKeyDistribution */ );
return 1;
break;
}
}
break;
}
case 28:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingConfirm = 2;
union u_SMPPairingConfirm_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingConfirm_Handle;
u_SMPPairingConfirm_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 1];
mbufi_SMPPairingConfirm += 2;
union u_SMPPairingConfirm_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingConfirm_ConfirmValue;
u_SMPPairingConfirm_ConfirmValue.bytebuffer[15] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[14] = mbuf[mbufi_SMPPairingConfirm + 1];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[13] = mbuf[mbufi_SMPPairingConfirm + 2];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[12] = mbuf[mbufi_SMPPairingConfirm + 3];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[11] = mbuf[mbufi_SMPPairingConfirm + 4];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[10] = mbuf[mbufi_SMPPairingConfirm + 5];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[9] = mbuf[mbufi_SMPPairingConfirm + 6];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[8] = mbuf[mbufi_SMPPairingConfirm + 7];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[7] = mbuf[mbufi_SMPPairingConfirm + 8];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[6] = mbuf[mbufi_SMPPairingConfirm + 9];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[5] = mbuf[mbufi_SMPPairingConfirm + 10];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[4] = mbuf[mbufi_SMPPairingConfirm + 11];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[3] = mbuf[mbufi_SMPPairingConfirm + 12];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[2] = mbuf[mbufi_SMPPairingConfirm + 13];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 14];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 15];
mbufi_SMPPairingConfirm += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(_instance,
 u_SMPPairingConfirm_Handle.p /* Handle */ ,
 u_SMPPairingConfirm_ConfirmValue.p /* ConfirmValue */ );
return 1;
break;
}
}
break;
}
case 29:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingRandom = 2;
union u_SMPPairingRandom_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRandom_Handle;
u_SMPPairingRandom_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 1];
mbufi_SMPPairingRandom += 2;
union u_SMPPairingRandom_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingRandom_RandomValue;
u_SMPPairingRandom_RandomValue.bytebuffer[15] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_RandomValue.bytebuffer[14] = mbuf[mbufi_SMPPairingRandom + 1];
u_SMPPairingRandom_RandomValue.bytebuffer[13] = mbuf[mbufi_SMPPairingRandom + 2];
u_SMPPairingRandom_RandomValue.bytebuffer[12] = mbuf[mbufi_SMPPairingRandom + 3];
u_SMPPairingRandom_RandomValue.bytebuffer[11] = mbuf[mbufi_SMPPairingRandom + 4];
u_SMPPairingRandom_RandomValue.bytebuffer[10] = mbuf[mbufi_SMPPairingRandom + 5];
u_SMPPairingRandom_RandomValue.bytebuffer[9] = mbuf[mbufi_SMPPairingRandom + 6];
u_SMPPairingRandom_RandomValue.bytebuffer[8] = mbuf[mbufi_SMPPairingRandom + 7];
u_SMPPairingRandom_RandomValue.bytebuffer[7] = mbuf[mbufi_SMPPairingRandom + 8];
u_SMPPairingRandom_RandomValue.bytebuffer[6] = mbuf[mbufi_SMPPairingRandom + 9];
u_SMPPairingRandom_RandomValue.bytebuffer[5] = mbuf[mbufi_SMPPairingRandom + 10];
u_SMPPairingRandom_RandomValue.bytebuffer[4] = mbuf[mbufi_SMPPairingRandom + 11];
u_SMPPairingRandom_RandomValue.bytebuffer[3] = mbuf[mbufi_SMPPairingRandom + 12];
u_SMPPairingRandom_RandomValue.bytebuffer[2] = mbuf[mbufi_SMPPairingRandom + 13];
u_SMPPairingRandom_RandomValue.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 14];
u_SMPPairingRandom_RandomValue.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 15];
mbufi_SMPPairingRandom += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingRandom(_instance,
 u_SMPPairingRandom_Handle.p /* Handle */ ,
 u_SMPPairingRandom_RandomValue.p /* RandomValue */ );
return 1;
break;
}
}
break;
}
case 30:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingFailed = 2;
union u_SMPPairingFailed_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingFailed_Handle;
u_SMPPairingFailed_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingFailed + 0];
u_SMPPairingFailed_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 1];
mbufi_SMPPairingFailed += 2;
union u_SMPPairingFailed_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingFailed_Reason;
u_SMPPairingFailed_Reason.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 0];
mbufi_SMPPairingFailed += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingFailed(_instance,
 u_SMPPairingFailed_Handle.p /* Handle */ ,
 u_SMPPairingFailed_Reason.p /* Reason */ );
return 1;
break;
}
}
break;
}
case 31:{
byte mbuf[70 - 2];
while (mbufi < (70 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingPublicKey = 2;
union u_SMPPairingPublicKey_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingPublicKey_Handle;
u_SMPPairingPublicKey_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 1];
mbufi_SMPPairingPublicKey += 2;
union u_SMPPairingPublicKey_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyX;
u_SMPPairingPublicKey_KeyX.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyX.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyX.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyX.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyX.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyX.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyX.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyX.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyX.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyX.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyX.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyX.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyX.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyX.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyX.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyX.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyX.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyX.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyX.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyX.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyX.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyX.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyX.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyX.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyX.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyX.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyX.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyX.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyX.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyX.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyX.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyX.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
union u_SMPPairingPublicKey_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyY;
u_SMPPairingPublicKey_KeyY.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyY.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyY.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyY.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyY.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyY.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyY.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyY.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyY.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyY.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyY.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyY.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyY.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyY.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyY.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyY.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyY.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyY.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyY.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyY.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyY.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyY.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyY.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyY.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyY.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyY.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyY.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyY.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyY.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyY.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyY.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyY.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(_instance,
 u_SMPPairingPublicKey_Handle.p /* Handle */ ,
 u_SMPPairingPublicKey_KeyX.p /* KeyX */ ,
 u_SMPPairingPublicKey_KeyY.p /* KeyY */ );
return 1;
break;
}
}
break;
}
case 32:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPPairingDHKeyCheck = 2;
union u_SMPPairingDHKeyCheck_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingDHKeyCheck_Handle;
u_SMPPairingDHKeyCheck_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
mbufi_SMPPairingDHKeyCheck += 2;
union u_SMPPairingDHKeyCheck_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingDHKeyCheck_DHKeyCheck;
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[15] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[14] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[13] = mbuf[mbufi_SMPPairingDHKeyCheck + 2];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[12] = mbuf[mbufi_SMPPairingDHKeyCheck + 3];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[11] = mbuf[mbufi_SMPPairingDHKeyCheck + 4];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[10] = mbuf[mbufi_SMPPairingDHKeyCheck + 5];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[9] = mbuf[mbufi_SMPPairingDHKeyCheck + 6];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[8] = mbuf[mbufi_SMPPairingDHKeyCheck + 7];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[7] = mbuf[mbufi_SMPPairingDHKeyCheck + 8];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[6] = mbuf[mbufi_SMPPairingDHKeyCheck + 9];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[5] = mbuf[mbufi_SMPPairingDHKeyCheck + 10];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[4] = mbuf[mbufi_SMPPairingDHKeyCheck + 11];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[3] = mbuf[mbufi_SMPPairingDHKeyCheck + 12];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[2] = mbuf[mbufi_SMPPairingDHKeyCheck + 13];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 14];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 15];
mbufi_SMPPairingDHKeyCheck += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(_instance,
 u_SMPPairingDHKeyCheck_Handle.p /* Handle */ ,
 u_SMPPairingDHKeyCheck_DHKeyCheck.p /* DHKeyCheck */ );
return 1;
break;
}
}
break;
}
case 33:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPKeypressNotification = 2;
union u_SMPKeypressNotification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPKeypressNotification_Handle;
u_SMPKeypressNotification_Handle.bytebuffer[1] = mbuf[mbufi_SMPKeypressNotification + 0];
u_SMPKeypressNotification_Handle.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 1];
mbufi_SMPKeypressNotification += 2;
union u_SMPKeypressNotification_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPKeypressNotification_Type;
u_SMPKeypressNotification_Type.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 0];
mbufi_SMPKeypressNotification += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(_instance,
 u_SMPKeypressNotification_Handle.p /* Handle */ ,
 u_SMPKeypressNotification_Type.p /* Type */ );
return 1;
break;
}
}
break;
}
case 34:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPEncryptionInformation = 2;
union u_SMPEncryptionInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPEncryptionInformation_Handle;
u_SMPEncryptionInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 1];
mbufi_SMPEncryptionInformation += 2;
union u_SMPEncryptionInformation_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPEncryptionInformation_LongTermKey;
u_SMPEncryptionInformation_LongTermKey.bytebuffer[15] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[14] = mbuf[mbufi_SMPEncryptionInformation + 1];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[13] = mbuf[mbufi_SMPEncryptionInformation + 2];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[12] = mbuf[mbufi_SMPEncryptionInformation + 3];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[11] = mbuf[mbufi_SMPEncryptionInformation + 4];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[10] = mbuf[mbufi_SMPEncryptionInformation + 5];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[9] = mbuf[mbufi_SMPEncryptionInformation + 6];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[8] = mbuf[mbufi_SMPEncryptionInformation + 7];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[7] = mbuf[mbufi_SMPEncryptionInformation + 8];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[6] = mbuf[mbufi_SMPEncryptionInformation + 9];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[5] = mbuf[mbufi_SMPEncryptionInformation + 10];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[4] = mbuf[mbufi_SMPEncryptionInformation + 11];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[3] = mbuf[mbufi_SMPEncryptionInformation + 12];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[2] = mbuf[mbufi_SMPEncryptionInformation + 13];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 14];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 15];
mbufi_SMPEncryptionInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(_instance,
 u_SMPEncryptionInformation_Handle.p /* Handle */ ,
 u_SMPEncryptionInformation_LongTermKey.p /* LongTermKey */ );
return 1;
break;
}
}
break;
}
case 35:{
byte mbuf[16 - 2];
while (mbufi < (16 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPMasterIdentification = 2;
union u_SMPMasterIdentification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_Handle;
u_SMPMasterIdentification_Handle.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Handle.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_EDIV;
u_SMPMasterIdentification_EDIV.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_EDIV.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_SMPMasterIdentification_Rand;
u_SMPMasterIdentification_Rand.bytebuffer[7] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Rand.bytebuffer[6] = mbuf[mbufi_SMPMasterIdentification + 1];
u_SMPMasterIdentification_Rand.bytebuffer[5] = mbuf[mbufi_SMPMasterIdentification + 2];
u_SMPMasterIdentification_Rand.bytebuffer[4] = mbuf[mbufi_SMPMasterIdentification + 3];
u_SMPMasterIdentification_Rand.bytebuffer[3] = mbuf[mbufi_SMPMasterIdentification + 4];
u_SMPMasterIdentification_Rand.bytebuffer[2] = mbuf[mbufi_SMPMasterIdentification + 5];
u_SMPMasterIdentification_Rand.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 6];
u_SMPMasterIdentification_Rand.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 7];
mbufi_SMPMasterIdentification += 8;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(_instance,
 u_SMPMasterIdentification_Handle.p /* Handle */ ,
 u_SMPMasterIdentification_EDIV.p /* EDIV */ ,
 u_SMPMasterIdentification_Rand.p /* Rand */ );
return 1;
break;
}
}
break;
}
case 36:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPIdentityInformation = 2;
union u_SMPIdentityInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityInformation_Handle;
u_SMPIdentityInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 1];
mbufi_SMPIdentityInformation += 2;
union u_SMPIdentityInformation_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPIdentityInformation_IdentityResolvingKey;
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[15] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[14] = mbuf[mbufi_SMPIdentityInformation + 1];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[13] = mbuf[mbufi_SMPIdentityInformation + 2];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[12] = mbuf[mbufi_SMPIdentityInformation + 3];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[11] = mbuf[mbufi_SMPIdentityInformation + 4];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[10] = mbuf[mbufi_SMPIdentityInformation + 5];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[9] = mbuf[mbufi_SMPIdentityInformation + 6];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[8] = mbuf[mbufi_SMPIdentityInformation + 7];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[7] = mbuf[mbufi_SMPIdentityInformation + 8];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[6] = mbuf[mbufi_SMPIdentityInformation + 9];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[5] = mbuf[mbufi_SMPIdentityInformation + 10];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[4] = mbuf[mbufi_SMPIdentityInformation + 11];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[3] = mbuf[mbufi_SMPIdentityInformation + 12];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[2] = mbuf[mbufi_SMPIdentityInformation + 13];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 14];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 15];
mbufi_SMPIdentityInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(_instance,
 u_SMPIdentityInformation_Handle.p /* Handle */ ,
 u_SMPIdentityInformation_IdentityResolvingKey.p /* IdentityResolvingKey */ );
return 1;
break;
}
}
break;
}
case 37:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPIdentityAddressInformation = 2;
union u_SMPIdentityAddressInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityAddressInformation_Handle;
u_SMPIdentityAddressInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
mbufi_SMPIdentityAddressInformation += 2;
union u_SMPIdentityAddressInformation_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPIdentityAddressInformation_AddressType;
u_SMPIdentityAddressInformation_AddressType.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
mbufi_SMPIdentityAddressInformation += 1;
union u_SMPIdentityAddressInformation_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_SMPIdentityAddressInformation_Address;
u_SMPIdentityAddressInformation_Address.bytebuffer[5] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Address.bytebuffer[4] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
u_SMPIdentityAddressInformation_Address.bytebuffer[3] = mbuf[mbufi_SMPIdentityAddressInformation + 2];
u_SMPIdentityAddressInformation_Address.bytebuffer[2] = mbuf[mbufi_SMPIdentityAddressInformation + 3];
u_SMPIdentityAddressInformation_Address.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 4];
u_SMPIdentityAddressInformation_Address.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 5];
mbufi_SMPIdentityAddressInformation += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(_instance,
 u_SMPIdentityAddressInformation_Handle.p /* Handle */ ,
 u_SMPIdentityAddressInformation_AddressType.p /* AddressType */ ,
 u_SMPIdentityAddressInformation_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 38:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPSigningInformation = 2;
union u_SMPSigningInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSigningInformation_Handle;
u_SMPSigningInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 1];
mbufi_SMPSigningInformation += 2;
union u_SMPSigningInformation_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPSigningInformation_SignatureKey;
u_SMPSigningInformation_SignatureKey.bytebuffer[15] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_SignatureKey.bytebuffer[14] = mbuf[mbufi_SMPSigningInformation + 1];
u_SMPSigningInformation_SignatureKey.bytebuffer[13] = mbuf[mbufi_SMPSigningInformation + 2];
u_SMPSigningInformation_SignatureKey.bytebuffer[12] = mbuf[mbufi_SMPSigningInformation + 3];
u_SMPSigningInformation_SignatureKey.bytebuffer[11] = mbuf[mbufi_SMPSigningInformation + 4];
u_SMPSigningInformation_SignatureKey.bytebuffer[10] = mbuf[mbufi_SMPSigningInformation + 5];
u_SMPSigningInformation_SignatureKey.bytebuffer[9] = mbuf[mbufi_SMPSigningInformation + 6];
u_SMPSigningInformation_SignatureKey.bytebuffer[8] = mbuf[mbufi_SMPSigningInformation + 7];
u_SMPSigningInformation_SignatureKey.bytebuffer[7] = mbuf[mbufi_SMPSigningInformation + 8];
u_SMPSigningInformation_SignatureKey.bytebuffer[6] = mbuf[mbufi_SMPSigningInformation + 9];
u_SMPSigningInformation_SignatureKey.bytebuffer[5] = mbuf[mbufi_SMPSigningInformation + 10];
u_SMPSigningInformation_SignatureKey.bytebuffer[4] = mbuf[mbufi_SMPSigningInformation + 11];
u_SMPSigningInformation_SignatureKey.bytebuffer[3] = mbuf[mbufi_SMPSigningInformation + 12];
u_SMPSigningInformation_SignatureKey.bytebuffer[2] = mbuf[mbufi_SMPSigningInformation + 13];
u_SMPSigningInformation_SignatureKey.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 14];
u_SMPSigningInformation_SignatureKey.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 15];
mbufi_SMPSigningInformation += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPSigningInformation(_instance,
 u_SMPSigningInformation_Handle.p /* Handle */ ,
 u_SMPSigningInformation_SignatureKey.p /* SignatureKey */ );
return 1;
break;
}
}
break;
}
case 39:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_SMPSecurityRequest = 2;
union u_SMPSecurityRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSecurityRequest_Handle;
u_SMPSecurityRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPSecurityRequest + 0];
u_SMPSecurityRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 1];
mbufi_SMPSecurityRequest += 2;
union u_SMPSecurityRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Bonding;
u_SMPSecurityRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_MITM;
u_SMPSecurityRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_SecureConnection;
u_SMPSecurityRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Keypress;
u_SMPSecurityRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(_instance,
 u_SMPSecurityRequest_Handle.p /* Handle */ ,
 u_SMPSecurityRequest_Bonding.p /* Bonding */ ,
 u_SMPSecurityRequest_MITM.p /* MITM */ ,
 u_SMPSecurityRequest_SecureConnection.p /* SecureConnection */ ,
 u_SMPSecurityRequest_Keypress.p /* Keypress */ );
return 1;
break;
}
}
break;
}
case 40:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationRequest = 2;
union u_ATTFindInformationRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_ConnectionHandle;
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_StartingHandle;
u_ATTFindInformationRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_EndingHandle;
u_ATTFindInformationRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(_instance,
 u_ATTFindInformationRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTFindInformationRequest_EndingHandle.p /* EndingHandle */ );
return 1;
break;
}
}
break;
}
case 41:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationResponse = 2;
union u_ATTFindInformationResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationResponse_ConnectionHandle;
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 1];
mbufi_ATTFindInformationResponse += 2;
union u_ATTFindInformationResponse_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationResponse_Format;
u_ATTFindInformationResponse_Format.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 0];
mbufi_ATTFindInformationResponse += 1;
union u_ATTFindInformationResponse_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTFindInformationResponse_InformationData;
u_ATTFindInformationResponse_InformationData.bytebuffer[23] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_InformationData.bytebuffer[22] = mbuf[mbufi_ATTFindInformationResponse + 1];
u_ATTFindInformationResponse_InformationData.bytebuffer[21] = mbuf[mbufi_ATTFindInformationResponse + 2];
u_ATTFindInformationResponse_InformationData.bytebuffer[20] = mbuf[mbufi_ATTFindInformationResponse + 3];
u_ATTFindInformationResponse_InformationData.bytebuffer[19] = mbuf[mbufi_ATTFindInformationResponse + 4];
u_ATTFindInformationResponse_InformationData.bytebuffer[18] = mbuf[mbufi_ATTFindInformationResponse + 5];
u_ATTFindInformationResponse_InformationData.bytebuffer[17] = mbuf[mbufi_ATTFindInformationResponse + 6];
u_ATTFindInformationResponse_InformationData.bytebuffer[16] = mbuf[mbufi_ATTFindInformationResponse + 7];
u_ATTFindInformationResponse_InformationData.bytebuffer[15] = mbuf[mbufi_ATTFindInformationResponse + 8];
u_ATTFindInformationResponse_InformationData.bytebuffer[14] = mbuf[mbufi_ATTFindInformationResponse + 9];
u_ATTFindInformationResponse_InformationData.bytebuffer[13] = mbuf[mbufi_ATTFindInformationResponse + 10];
u_ATTFindInformationResponse_InformationData.bytebuffer[12] = mbuf[mbufi_ATTFindInformationResponse + 11];
u_ATTFindInformationResponse_InformationData.bytebuffer[11] = mbuf[mbufi_ATTFindInformationResponse + 12];
u_ATTFindInformationResponse_InformationData.bytebuffer[10] = mbuf[mbufi_ATTFindInformationResponse + 13];
u_ATTFindInformationResponse_InformationData.bytebuffer[9] = mbuf[mbufi_ATTFindInformationResponse + 14];
u_ATTFindInformationResponse_InformationData.bytebuffer[8] = mbuf[mbufi_ATTFindInformationResponse + 15];
u_ATTFindInformationResponse_InformationData.bytebuffer[7] = mbuf[mbufi_ATTFindInformationResponse + 16];
u_ATTFindInformationResponse_InformationData.bytebuffer[6] = mbuf[mbufi_ATTFindInformationResponse + 17];
u_ATTFindInformationResponse_InformationData.bytebuffer[5] = mbuf[mbufi_ATTFindInformationResponse + 18];
u_ATTFindInformationResponse_InformationData.bytebuffer[4] = mbuf[mbufi_ATTFindInformationResponse + 19];
u_ATTFindInformationResponse_InformationData.bytebuffer[3] = mbuf[mbufi_ATTFindInformationResponse + 20];
u_ATTFindInformationResponse_InformationData.bytebuffer[2] = mbuf[mbufi_ATTFindInformationResponse + 21];
u_ATTFindInformationResponse_InformationData.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 22];
u_ATTFindInformationResponse_InformationData.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 23];
mbufi_ATTFindInformationResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(_instance,
 u_ATTFindInformationResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationResponse_Format.p /* Format */ ,
 u_ATTFindInformationResponse_InformationData.p /* InformationData */ );
return 1;
break;
}
}
break;
}
case 42:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTFindInformationError = 2;
union u_ATTFindInformationError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_ConnectionHandle;
u_ATTFindInformationError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_AttributeHandle;
u_ATTFindInformationError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationError_Error;
u_ATTFindInformationError_Error.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 0];
mbufi_ATTFindInformationError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(_instance,
 u_ATTFindInformationError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTFindInformationError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 43:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeRequest = 2;
union u_ATTReadByTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_ConnectionHandle;
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_StartingHandle;
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_EndingHandle;
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByTypeRequest_AttributeType;
u_ATTReadByTypeRequest_AttributeType.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeRequest + 1];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeRequest + 2];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeRequest + 3];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeRequest + 4];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeRequest + 5];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeRequest + 6];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeRequest + 7];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeRequest + 8];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeRequest + 9];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeRequest + 10];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeRequest + 11];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeRequest + 12];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeRequest + 13];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 14];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 15];
mbufi_ATTReadByTypeRequest += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(_instance,
 u_ATTReadByTypeRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTReadByTypeRequest_EndingHandle.p /* EndingHandle */ ,
 u_ATTReadByTypeRequest_AttributeType.p /* AttributeType */ );
return 1;
break;
}
}
break;
}
case 44:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeResponse = 2;
union u_ATTReadByTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeResponse_ConnectionHandle;
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 1];
mbufi_ATTReadByTypeResponse += 2;
union u_ATTReadByTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeResponse_Length;
u_ATTReadByTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 0];
mbufi_ATTReadByTypeResponse += 1;
union u_ATTReadByTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByTypeResponse_AttributeDataList;
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByTypeResponse + 1];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByTypeResponse + 2];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByTypeResponse + 3];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByTypeResponse + 4];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByTypeResponse + 5];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByTypeResponse + 6];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByTypeResponse + 7];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeResponse + 8];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeResponse + 9];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeResponse + 10];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeResponse + 11];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeResponse + 12];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeResponse + 13];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeResponse + 14];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeResponse + 15];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeResponse + 16];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeResponse + 17];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeResponse + 18];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeResponse + 19];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeResponse + 20];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeResponse + 21];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 22];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 23];
mbufi_ATTReadByTypeResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(_instance,
 u_ATTReadByTypeResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeResponse_Length.p /* Length */ ,
 u_ATTReadByTypeResponse_AttributeDataList.p /* AttributeDataList */ );
return 1;
break;
}
}
break;
}
case 45:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByTypeError = 2;
union u_ATTReadByTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_ConnectionHandle;
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_AttributeHandle;
u_ATTReadByTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeError_Error;
u_ATTReadByTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 0];
mbufi_ATTReadByTypeError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(_instance,
 u_ATTReadByTypeError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadByTypeError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 46:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadRequest = 2;
union u_ATTReadRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_ConnectionHandle;
u_ATTReadRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
union u_ATTReadRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_AttributeHandle;
u_ATTReadRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadRequest(_instance,
 u_ATTReadRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadRequest_AttributeHandle.p /* AttributeHandle */ );
return 1;
break;
}
}
break;
}
case 47:{
byte mbuf[30 - 2];
while (mbufi < (30 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadResponse = 2;
union u_ATTReadResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadResponse_ConnectionHandle;
u_ATTReadResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 1];
mbufi_ATTReadResponse += 2;
union u_ATTReadResponse_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadResponse_AttributeValue;
u_ATTReadResponse_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTReadResponse + 1];
u_ATTReadResponse_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTReadResponse + 2];
u_ATTReadResponse_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTReadResponse + 3];
u_ATTReadResponse_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTReadResponse + 4];
u_ATTReadResponse_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTReadResponse + 5];
u_ATTReadResponse_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTReadResponse + 6];
u_ATTReadResponse_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTReadResponse + 7];
u_ATTReadResponse_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTReadResponse + 8];
u_ATTReadResponse_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTReadResponse + 9];
u_ATTReadResponse_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTReadResponse + 10];
u_ATTReadResponse_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTReadResponse + 11];
u_ATTReadResponse_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTReadResponse + 12];
u_ATTReadResponse_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTReadResponse + 13];
u_ATTReadResponse_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTReadResponse + 14];
u_ATTReadResponse_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTReadResponse + 15];
u_ATTReadResponse_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTReadResponse + 16];
u_ATTReadResponse_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTReadResponse + 17];
u_ATTReadResponse_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTReadResponse + 18];
u_ATTReadResponse_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTReadResponse + 19];
u_ATTReadResponse_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTReadResponse + 20];
u_ATTReadResponse_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTReadResponse + 21];
u_ATTReadResponse_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 22];
u_ATTReadResponse_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 23];
mbufi_ATTReadResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadResponse(_instance,
 u_ATTReadResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadResponse_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 48:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadError = 2;
union u_ATTReadError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_ConnectionHandle;
u_ATTReadError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_AttributeHandle;
u_ATTReadError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadError_Error;
u_ATTReadError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadError + 0];
mbufi_ATTReadError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadError(_instance,
 u_ATTReadError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 49:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeRequest = 2;
union u_ATTReadByGroupTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_ConnectionHandle;
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_StartingHandle;
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_EndingHandle;
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByGroupTypeRequest_AttributeGroupType;
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeRequest + 2];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeRequest + 3];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeRequest + 4];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeRequest + 5];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeRequest + 6];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeRequest + 7];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeRequest + 8];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeRequest + 9];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeRequest + 10];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeRequest + 11];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeRequest + 12];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeRequest + 13];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 14];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 15];
mbufi_ATTReadByGroupTypeRequest += 16;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(_instance,
 u_ATTReadByGroupTypeRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTReadByGroupTypeRequest_EndingHandle.p /* EndingHandle */ ,
 u_ATTReadByGroupTypeRequest_AttributeGroupType.p /* AttributeGroupType */ );
return 1;
break;
}
}
break;
}
case 50:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeResponse = 2;
union u_ATTReadByGroupTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeResponse_ConnectionHandle;
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
mbufi_ATTReadByGroupTypeResponse += 2;
union u_ATTReadByGroupTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeResponse_Length;
u_ATTReadByGroupTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
mbufi_ATTReadByGroupTypeResponse += 1;
union u_ATTReadByGroupTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByGroupTypeResponse_AttributeDataList;
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByGroupTypeResponse + 2];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByGroupTypeResponse + 3];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByGroupTypeResponse + 4];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByGroupTypeResponse + 5];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByGroupTypeResponse + 6];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByGroupTypeResponse + 7];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeResponse + 8];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeResponse + 9];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeResponse + 10];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeResponse + 11];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeResponse + 12];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeResponse + 13];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeResponse + 14];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeResponse + 15];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeResponse + 16];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeResponse + 17];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeResponse + 18];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeResponse + 19];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeResponse + 20];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeResponse + 21];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 22];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 23];
mbufi_ATTReadByGroupTypeResponse += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(_instance,
 u_ATTReadByGroupTypeResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeResponse_Length.p /* Length */ ,
 u_ATTReadByGroupTypeResponse_AttributeDataList.p /* AttributeDataList */ );
return 1;
break;
}
}
break;
}
case 51:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTReadByGroupTypeError = 2;
union u_ATTReadByGroupTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_ConnectionHandle;
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_AttributeHandle;
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeError_Error;
u_ATTReadByGroupTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
mbufi_ATTReadByGroupTypeError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(_instance,
 u_ATTReadByGroupTypeError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadByGroupTypeError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 52:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteRequest = 2;
union u_ATTWriteRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_ConnectionHandle;
u_ATTWriteRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_AttributeHandle;
u_ATTWriteRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteRequest_AttributeValue;
u_ATTWriteRequest_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteRequest + 1];
u_ATTWriteRequest_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteRequest + 2];
u_ATTWriteRequest_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteRequest + 3];
u_ATTWriteRequest_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteRequest + 4];
u_ATTWriteRequest_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteRequest + 5];
u_ATTWriteRequest_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteRequest + 6];
u_ATTWriteRequest_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteRequest + 7];
u_ATTWriteRequest_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteRequest + 8];
u_ATTWriteRequest_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteRequest + 9];
u_ATTWriteRequest_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteRequest + 10];
u_ATTWriteRequest_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteRequest + 11];
u_ATTWriteRequest_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteRequest + 12];
u_ATTWriteRequest_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteRequest + 13];
u_ATTWriteRequest_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteRequest + 14];
u_ATTWriteRequest_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteRequest + 15];
u_ATTWriteRequest_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteRequest + 16];
u_ATTWriteRequest_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteRequest + 17];
u_ATTWriteRequest_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteRequest + 18];
u_ATTWriteRequest_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteRequest + 19];
u_ATTWriteRequest_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteRequest + 20];
u_ATTWriteRequest_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteRequest + 21];
u_ATTWriteRequest_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 22];
u_ATTWriteRequest_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 23];
mbufi_ATTWriteRequest += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(_instance,
 u_ATTWriteRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteRequest_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteRequest_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 53:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteResponse = 2;
union u_ATTWriteResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteResponse_ConnectionHandle;
u_ATTWriteResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteResponse + 0];
u_ATTWriteResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteResponse + 1];
mbufi_ATTWriteResponse += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(_instance,
 u_ATTWriteResponse_ConnectionHandle.p /* ConnectionHandle */ );
return 1;
break;
}
}
break;
}
case 54:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteError = 2;
union u_ATTWriteError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_ConnectionHandle;
u_ATTWriteError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_AttributeHandle;
u_ATTWriteError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTWriteError_Error;
u_ATTWriteError_Error.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 0];
mbufi_ATTWriteError += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTWriteError(_instance,
 u_ATTWriteError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 55:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteCommand = 2;
union u_ATTWriteCommand_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_ConnectionHandle;
u_ATTWriteCommand_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_AttributeHandle;
u_ATTWriteCommand_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteCommand_AttributeValue;
u_ATTWriteCommand_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteCommand + 1];
u_ATTWriteCommand_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteCommand + 2];
u_ATTWriteCommand_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteCommand + 3];
u_ATTWriteCommand_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteCommand + 4];
u_ATTWriteCommand_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteCommand + 5];
u_ATTWriteCommand_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteCommand + 6];
u_ATTWriteCommand_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteCommand + 7];
u_ATTWriteCommand_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteCommand + 8];
u_ATTWriteCommand_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteCommand + 9];
u_ATTWriteCommand_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteCommand + 10];
u_ATTWriteCommand_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteCommand + 11];
u_ATTWriteCommand_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteCommand + 12];
u_ATTWriteCommand_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteCommand + 13];
u_ATTWriteCommand_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteCommand + 14];
u_ATTWriteCommand_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteCommand + 15];
u_ATTWriteCommand_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteCommand + 16];
u_ATTWriteCommand_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteCommand + 17];
u_ATTWriteCommand_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteCommand + 18];
u_ATTWriteCommand_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteCommand + 19];
u_ATTWriteCommand_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteCommand + 20];
u_ATTWriteCommand_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteCommand + 21];
u_ATTWriteCommand_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 22];
u_ATTWriteCommand_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 23];
mbufi_ATTWriteCommand += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(_instance,
 u_ATTWriteCommand_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteCommand_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteCommand_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 56:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueNotification = 2;
union u_ATTHandleValueNotification_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_ConnectionHandle;
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_AttributeHandle;
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueNotification_AttributeValue;
u_ATTHandleValueNotification_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueNotification + 1];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueNotification + 2];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueNotification + 3];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueNotification + 4];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueNotification + 5];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueNotification + 6];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueNotification + 7];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueNotification + 8];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueNotification + 9];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueNotification + 10];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueNotification + 11];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueNotification + 12];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueNotification + 13];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueNotification + 14];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueNotification + 15];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueNotification + 16];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueNotification + 17];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueNotification + 18];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueNotification + 19];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueNotification + 20];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueNotification + 21];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 22];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 23];
mbufi_ATTHandleValueNotification += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(_instance,
 u_ATTHandleValueNotification_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTHandleValueNotification_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTHandleValueNotification_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 57:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueIndication = 2;
union u_ATTHandleValueIndication_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_ConnectionHandle;
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_AttributeHandle;
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueIndication_AttributeValue;
u_ATTHandleValueIndication_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueIndication + 1];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueIndication + 2];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueIndication + 3];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueIndication + 4];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueIndication + 5];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueIndication + 6];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueIndication + 7];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueIndication + 8];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueIndication + 9];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueIndication + 10];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueIndication + 11];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueIndication + 12];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueIndication + 13];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueIndication + 14];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueIndication + 15];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueIndication + 16];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueIndication + 17];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueIndication + 18];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueIndication + 19];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueIndication + 20];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueIndication + 21];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 22];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 23];
mbufi_ATTHandleValueIndication += 24;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(_instance,
 u_ATTHandleValueIndication_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTHandleValueIndication_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTHandleValueIndication_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 58:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueConfirmation = 2;
union u_ATTHandleValueConfirmation_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueConfirmation_ConnectionHandle;
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueConfirmation + 0];
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueConfirmation + 1];
mbufi_ATTHandleValueConfirmation += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(_instance,
 u_ATTHandleValueConfirmation_ConnectionHandle.p /* ConnectionHandle */ );
return 1;
break;
}
}
break;
}
}
return 1;
}

// Thing main:
void HCISocketProxyImpl_run(struct HCISocketProxyImpl_Instance * _instance) {
if(_instance->initState != -1) {
HCISocketProxy_Socket_OnEntry(_instance->initState, _instance);
}
    while(1){
        int emptyEventConsumed = 1;
        while (emptyEventConsumed != 0) {
            emptyEventConsumed = 0;
            emptyEventConsumed += HCISocketProxyImpl_handle_empty_event(_instance);
        }
        HCISocketProxyImpl_processMessageQueue(_instance);
    }
}


