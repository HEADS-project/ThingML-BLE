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

// Sessions functionss:


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
void HCISocketProxyImpl_handle_Socket_Open(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(struct HCISocketProxyImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEScanParameters(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_Disconnect(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetEventMaskAll(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_LERand(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_LECreateConnection(struct HCISocketProxyImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_LEEncrypt(struct HCISocketProxyImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_Reset(struct HCISocketProxyImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_LEStartEncryption(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEScanEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
if(!(_instance->active)) return;
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
void HCISocketProxyImpl_handle_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
if(!(_instance->active)) return;
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
int HCISocketProxyImpl_handle_empty_event(struct HCISocketProxyImpl_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
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



