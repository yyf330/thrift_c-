/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "checklicense_types.h"

#include <algorithm>



const char* ProcessProfile::ascii_fingerprint = "3368C2F81F2FEF71F11EDACDB2A3ECEF";
const uint8_t ProcessProfile::binary_fingerprint[16] = {0x33,0x68,0xC2,0xF8,0x1F,0x2F,0xEF,0x71,0xF1,0x1E,0xDA,0xCD,0xB2,0xA3,0xEC,0xEF};

uint32_t ProcessProfile::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->process_id);
          this->__isset.process_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->c_id);
          this->__isset.c_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->process_type);
          this->__isset.process_type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ProcessProfile::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ProcessProfile");

  xfer += oprot->writeFieldBegin("process_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->process_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("c_id", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->c_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("process_type", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->process_type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ProcessProfile &a, ProcessProfile &b) {
  using ::std::swap;
  swap(a.process_id, b.process_id);
  swap(a.c_id, b.c_id);
  swap(a.process_type, b.process_type);
  swap(a.__isset, b.__isset);
}


