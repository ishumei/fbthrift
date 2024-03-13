/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyDataEnsureStruct implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyDataEnsureStruct");
  private static final TField DATA1_FIELD_DESC = new TField("data1", TType.STRING, (short)1);
  private static final TField DATA2_FIELD_DESC = new TField("data2", TType.I32, (short)2);

  public final String data1;
  public final Integer data2;
  public static final int DATA1 = 1;
  public static final int DATA2 = 2;

  public MyDataEnsureStruct(
      String data1,
      Integer data2) {
    this.data1 = data1;
    this.data2 = data2;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyDataEnsureStruct(MyDataEnsureStruct other) {
    if (other.isSetData1()) {
      this.data1 = TBaseHelper.deepCopy(other.data1);
    } else {
      this.data1 = null;
    }
    if (other.isSetData2()) {
      this.data2 = TBaseHelper.deepCopy(other.data2);
    } else {
      this.data2 = null;
    }
  }

  public MyDataEnsureStruct deepCopy() {
    return new MyDataEnsureStruct(this);
  }

  public String getData1() {
    return this.data1;
  }

  // Returns true if field data1 is set (has been assigned a value) and false otherwise
  public boolean isSetData1() {
    return this.data1 != null;
  }

  public Integer getData2() {
    return this.data2;
  }

  // Returns true if field data2 is set (has been assigned a value) and false otherwise
  public boolean isSetData2() {
    return this.data2 != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyDataEnsureStruct))
      return false;
    MyDataEnsureStruct that = (MyDataEnsureStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetData1(), that.isSetData1(), this.data1, that.data1)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetData2(), that.isSetData2(), this.data2, that.data2)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {data1, data2});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyDataEnsureStruct deserialize(TProtocol iprot) throws TException {
    String tmp_data1 = null;
    Integer tmp_data2 = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case DATA1:
          if (__field.type == TType.STRING) {
            tmp_data1 = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case DATA2:
          if (__field.type == TType.I32) {
            tmp_data2 = iprot.readI32();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    MyDataEnsureStruct _that;
    _that = new MyDataEnsureStruct(
      tmp_data1
      ,tmp_data2
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.data1 != null) {
      if (isSetData1()) {
        oprot.writeFieldBegin(DATA1_FIELD_DESC);
        oprot.writeString(this.data1);
        oprot.writeFieldEnd();
      }
    }
    if (this.data2 != null) {
      if (isSetData2()) {
        oprot.writeFieldBegin(DATA2_FIELD_DESC);
        oprot.writeI32(this.data2);
        oprot.writeFieldEnd();
      }
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}
