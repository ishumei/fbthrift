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
public class MyStructFieldN30Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyStructFieldN30Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.MAP, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField ADD_FIELD_DESC = new TField("add", TType.MAP, (short)5);
  private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.SET, (short)7);
  private static final TField PUT_FIELD_DESC = new TField("put", TType.MAP, (short)9);

  /**
   * Assigns a value. If set, all other operations are ignored.
   */
  public final Map<String,String> assign;
  /**
   * Clears a value. Applies first.
   */
  public final Boolean clear;
  /**
   * Add the given values, if the keys are not already present. Applies forth.
   */
  public final Map<String,String> add;
  /**
   * Removes entries, if present. Applies third.
   */
  public final Set<String> remove;
  /**
   * Adds or replaces the given key/value pairs. Applies fifth.
   */
  public final Map<String,String> put;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int ADD = 5;
  public static final int REMOVE = 7;
  public static final int PUT = 9;

  public MyStructFieldN30Patch(
      Map<String,String> assign,
      Boolean clear,
      Map<String,String> add,
      Set<String> remove,
      Map<String,String> put) {
    this.assign = assign;
    this.clear = clear;
    this.add = add;
    this.remove = remove;
    this.put = put;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStructFieldN30Patch(MyStructFieldN30Patch other) {
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    } else {
      this.assign = null;
    }
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetAdd()) {
      this.add = TBaseHelper.deepCopy(other.add);
    } else {
      this.add = null;
    }
    if (other.isSetRemove()) {
      this.remove = TBaseHelper.deepCopy(other.remove);
    } else {
      this.remove = null;
    }
    if (other.isSetPut()) {
      this.put = TBaseHelper.deepCopy(other.put);
    } else {
      this.put = null;
    }
  }

  public MyStructFieldN30Patch deepCopy() {
    return new MyStructFieldN30Patch(this);
  }

  /**
   * Assigns a value. If set, all other operations are ignored.
   */
  public Map<String,String> getAssign() {
    return this.assign;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  /**
   * Clears a value. Applies first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * Add the given values, if the keys are not already present. Applies forth.
   */
  public Map<String,String> getAdd() {
    return this.add;
  }

  // Returns true if field add is set (has been assigned a value) and false otherwise
  public boolean isSetAdd() {
    return this.add != null;
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public Set<String> getRemove() {
    return this.remove;
  }

  // Returns true if field remove is set (has been assigned a value) and false otherwise
  public boolean isSetRemove() {
    return this.remove != null;
  }

  /**
   * Adds or replaces the given key/value pairs. Applies fifth.
   */
  public Map<String,String> getPut() {
    return this.put;
  }

  // Returns true if field put is set (has been assigned a value) and false otherwise
  public boolean isSetPut() {
    return this.put != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStructFieldN30Patch))
      return false;
    MyStructFieldN30Patch that = (MyStructFieldN30Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAdd(), that.isSetAdd(), this.add, that.add)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetRemove(), that.isSetRemove(), this.remove, that.remove)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPut(), that.isSetPut(), this.put, that.put)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, add, remove, put});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyStructFieldN30Patch deserialize(TProtocol iprot) throws TException {
    Map<String,String> tmp_assign = null;
    Boolean tmp_clear = null;
    Map<String,String> tmp_add = null;
    Set<String> tmp_remove = null;
    Map<String,String> tmp_put = null;
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
        case ASSIGN:
          if (__field.type == TType.MAP) {
            {
              TMap _map46 = iprot.readMapBegin();
              tmp_assign = new HashMap<String,String>(Math.max(0, 2*_map46.size));
              for (int _i47 = 0; 
                   (_map46.size < 0) ? iprot.peekMap() : (_i47 < _map46.size); 
                   ++_i47)
              {
                String _key48;
                String _val49;
                _key48 = iprot.readString();
                _val49 = iprot.readString();
                tmp_assign.put(_key48, _val49);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ADD:
          if (__field.type == TType.MAP) {
            {
              TMap _map50 = iprot.readMapBegin();
              tmp_add = new HashMap<String,String>(Math.max(0, 2*_map50.size));
              for (int _i51 = 0; 
                   (_map50.size < 0) ? iprot.peekMap() : (_i51 < _map50.size); 
                   ++_i51)
              {
                String _key52;
                String _val53;
                _key52 = iprot.readString();
                _val53 = iprot.readString();
                tmp_add.put(_key52, _val53);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REMOVE:
          if (__field.type == TType.SET) {
            {
              TSet _set54 = iprot.readSetBegin();
              tmp_remove = new HashSet<String>(Math.max(0, 2*_set54.size));
              for (int _i55 = 0; 
                   (_set54.size < 0) ? iprot.peekSet() : (_i55 < _set54.size); 
                   ++_i55)
              {
                String _elem56;
                _elem56 = iprot.readString();
                tmp_remove.add(_elem56);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PUT:
          if (__field.type == TType.MAP) {
            {
              TMap _map57 = iprot.readMapBegin();
              tmp_put = new HashMap<String,String>(Math.max(0, 2*_map57.size));
              for (int _i58 = 0; 
                   (_map57.size < 0) ? iprot.peekMap() : (_i58 < _map57.size); 
                   ++_i58)
              {
                String _key59;
                String _val60;
                _key59 = iprot.readString();
                _val60 = iprot.readString();
                tmp_put.put(_key59, _val60);
              }
              iprot.readMapEnd();
            }
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

    MyStructFieldN30Patch _that;
    _that = new MyStructFieldN30Patch(
      tmp_assign
      ,tmp_clear
      ,tmp_add
      ,tmp_remove
      ,tmp_put
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        {
          oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.assign.size()));
          for (Map.Entry<String, String> _iter61 : this.assign.entrySet())          {
            oprot.writeString(_iter61.getKey());
            oprot.writeString(_iter61.getValue());
          }
          oprot.writeMapEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.add != null) {
      oprot.writeFieldBegin(ADD_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.add.size()));
        for (Map.Entry<String, String> _iter62 : this.add.entrySet())        {
          oprot.writeString(_iter62.getKey());
          oprot.writeString(_iter62.getValue());
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.remove != null) {
      oprot.writeFieldBegin(REMOVE_FIELD_DESC);
      {
        oprot.writeSetBegin(new TSet(TType.STRING, this.remove.size()));
        for (String _iter63 : this.remove)        {
          oprot.writeString(_iter63);
        }
        oprot.writeSetEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.put != null) {
      oprot.writeFieldBegin(PUT_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.put.size()));
        for (Map.Entry<String, String> _iter64 : this.put.entrySet())        {
          oprot.writeString(_iter64.getKey());
          oprot.writeString(_iter64.getValue());
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
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
