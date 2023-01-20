// @generated by Thrift for /data/users/dokwon/fbsource/fbcode/thrift/annotation/hack.thrift
// This file is probably not the place you want to edit!

package hack // /data/users/dokwon/fbsource/fbcode/thrift/annotation/hack.thrift

import (
  "fmt"

  scope "thrift/annotation/scope"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = scope.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type FieldWrapper struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &FieldWrapper{}

func NewFieldWrapper() *FieldWrapper {
    return (&FieldWrapper{})
}
func (x *FieldWrapper) GetName() string {
    return x.Name
}

func (x *FieldWrapper) SetName(name string) *FieldWrapper {
    x.Name = name
    return x
}


func (x *FieldWrapper) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *FieldWrapper) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetName(result)
    return nil
}


// Deprecated: Use FieldWrapper.Set* methods instead or set the fields directly.
type FieldWrapperBuilder struct {
    obj *FieldWrapper
}

func NewFieldWrapperBuilder() *FieldWrapperBuilder {
    return &FieldWrapperBuilder{
        obj: NewFieldWrapper(),
    }
}

func (x *FieldWrapperBuilder) Name(name string) *FieldWrapperBuilder {
    x.obj.Name = name
    return x
}

func (x *FieldWrapperBuilder) Emit() *FieldWrapper {
    var objCopy FieldWrapper = *x.obj
    return &objCopy
}

func (x *FieldWrapper) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("FieldWrapper"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *FieldWrapper) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type Wrapper struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
    UnderlyingName string `thrift:"underlyingName,2" json:"underlyingName" db:"underlyingName"`
    ExtraNamespace string `thrift:"extraNamespace,3" json:"extraNamespace" db:"extraNamespace"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Wrapper{}

func NewWrapper() *Wrapper {
    return (&Wrapper{}).
        SetExtraNamespace("thrift_adapted_types")
}
func (x *Wrapper) GetName() string {
    return x.Name
}

func (x *Wrapper) GetUnderlyingName() string {
    return x.UnderlyingName
}

func (x *Wrapper) GetExtraNamespace() string {
    return x.ExtraNamespace
}

func (x *Wrapper) SetName(name string) *Wrapper {
    x.Name = name
    return x
}

func (x *Wrapper) SetUnderlyingName(underlyingName string) *Wrapper {
    x.UnderlyingName = underlyingName
    return x
}

func (x *Wrapper) SetExtraNamespace(extraNamespace string) *Wrapper {
    x.ExtraNamespace = extraNamespace
    return x
}




func (x *Wrapper) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) writeField2(p thrift.Protocol) error {  // UnderlyingName
    if err := p.WriteFieldBegin("underlyingName", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetUnderlyingName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) writeField3(p thrift.Protocol) error {  // ExtraNamespace
    if err := p.WriteFieldBegin("extraNamespace", thrift.STRING, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetExtraNamespace()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetName(result)
    return nil
}

func (x *Wrapper) readField2(p thrift.Protocol) error {  // UnderlyingName
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetUnderlyingName(result)
    return nil
}

func (x *Wrapper) readField3(p thrift.Protocol) error {  // ExtraNamespace
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetExtraNamespace(result)
    return nil
}


// Deprecated: Use Wrapper.Set* methods instead or set the fields directly.
type WrapperBuilder struct {
    obj *Wrapper
}

func NewWrapperBuilder() *WrapperBuilder {
    return &WrapperBuilder{
        obj: NewWrapper(),
    }
}

func (x *WrapperBuilder) Name(name string) *WrapperBuilder {
    x.obj.Name = name
    return x
}

func (x *WrapperBuilder) UnderlyingName(underlyingName string) *WrapperBuilder {
    x.obj.UnderlyingName = underlyingName
    return x
}

func (x *WrapperBuilder) ExtraNamespace(extraNamespace string) *WrapperBuilder {
    x.obj.ExtraNamespace = extraNamespace
    return x
}

func (x *WrapperBuilder) Emit() *Wrapper {
    var objCopy Wrapper = *x.obj
    return &objCopy
}

func (x *Wrapper) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Wrapper"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Wrapper) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // underlyingName
            if err := x.readField2(p); err != nil {
                return err
            }
        case 3:  // extraNamespace
            if err := x.readField3(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type Adapter struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Adapter{}

func NewAdapter() *Adapter {
    return (&Adapter{})
}
func (x *Adapter) GetName() string {
    return x.Name
}

func (x *Adapter) SetName(name string) *Adapter {
    x.Name = name
    return x
}


func (x *Adapter) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetName(result)
    return nil
}


// Deprecated: Use Adapter.Set* methods instead or set the fields directly.
type AdapterBuilder struct {
    obj *Adapter
}

func NewAdapterBuilder() *AdapterBuilder {
    return &AdapterBuilder{
        obj: NewAdapter(),
    }
}

func (x *AdapterBuilder) Name(name string) *AdapterBuilder {
    x.obj.Name = name
    return x
}

func (x *AdapterBuilder) Emit() *Adapter {
    var objCopy Adapter = *x.obj
    return &objCopy
}

func (x *Adapter) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Adapter"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Adapter) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type SkipCodegen struct {
    Reason string `thrift:"reason,1" json:"reason" db:"reason"`
}
// Compile time interface enforcer
var _ thrift.Struct = &SkipCodegen{}

func NewSkipCodegen() *SkipCodegen {
    return (&SkipCodegen{})
}
func (x *SkipCodegen) GetReason() string {
    return x.Reason
}

func (x *SkipCodegen) SetReason(reason string) *SkipCodegen {
    x.Reason = reason
    return x
}


func (x *SkipCodegen) writeField1(p thrift.Protocol) error {  // Reason
    if err := p.WriteFieldBegin("reason", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetReason()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SkipCodegen) readField1(p thrift.Protocol) error {  // Reason
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetReason(result)
    return nil
}


// Deprecated: Use SkipCodegen.Set* methods instead or set the fields directly.
type SkipCodegenBuilder struct {
    obj *SkipCodegen
}

func NewSkipCodegenBuilder() *SkipCodegenBuilder {
    return &SkipCodegenBuilder{
        obj: NewSkipCodegen(),
    }
}

func (x *SkipCodegenBuilder) Reason(reason string) *SkipCodegenBuilder {
    x.obj.Reason = reason
    return x
}

func (x *SkipCodegenBuilder) Emit() *SkipCodegen {
    var objCopy SkipCodegen = *x.obj
    return &objCopy
}

func (x *SkipCodegen) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("SkipCodegen"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *SkipCodegen) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // reason
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type Name struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
    Reason string `thrift:"reason,2" json:"reason" db:"reason"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Name{}

func NewName() *Name {
    return (&Name{})
}
func (x *Name) GetName() string {
    return x.Name
}

func (x *Name) GetReason() string {
    return x.Reason
}

func (x *Name) SetName(name string) *Name {
    x.Name = name
    return x
}

func (x *Name) SetReason(reason string) *Name {
    x.Reason = reason
    return x
}



func (x *Name) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Name) writeField2(p thrift.Protocol) error {  // Reason
    if err := p.WriteFieldBegin("reason", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetReason()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Name) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetName(result)
    return nil
}

func (x *Name) readField2(p thrift.Protocol) error {  // Reason
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetReason(result)
    return nil
}


// Deprecated: Use Name.Set* methods instead or set the fields directly.
type NameBuilder struct {
    obj *Name
}

func NewNameBuilder() *NameBuilder {
    return &NameBuilder{
        obj: NewName(),
    }
}

func (x *NameBuilder) Name(name string) *NameBuilder {
    x.obj.Name = name
    return x
}

func (x *NameBuilder) Reason(reason string) *NameBuilder {
    x.obj.Reason = reason
    return x
}

func (x *NameBuilder) Emit() *Name {
    var objCopy Name = *x.obj
    return &objCopy
}

func (x *Name) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Name"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Name) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // reason
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type UnionEnumAttributes struct {
    Attributes []string `thrift:"attributes,1" json:"attributes" db:"attributes"`
}
// Compile time interface enforcer
var _ thrift.Struct = &UnionEnumAttributes{}

func NewUnionEnumAttributes() *UnionEnumAttributes {
    return (&UnionEnumAttributes{})
}
func (x *UnionEnumAttributes) GetAttributes() []string {
    return x.Attributes
}

func (x *UnionEnumAttributes) SetAttributes(attributes []string) *UnionEnumAttributes {
    x.Attributes = attributes
    return x
}

func (x *UnionEnumAttributes) IsSetAttributes() bool {
    return x.Attributes != nil
}

func (x *UnionEnumAttributes) writeField1(p thrift.Protocol) error {  // Attributes
    if !x.IsSetAttributes() {
        return nil
    }

    if err := p.WriteFieldBegin("attributes", thrift.LIST, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetAttributes()
    if err := p.WriteListBegin(thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *UnionEnumAttributes) readField1(p thrift.Protocol) error {  // Attributes
    _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]string, 0, size)
for i := 0; i < size; i++ {
    var elem string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult

    x.SetAttributes(result)
    return nil
}


// Deprecated: Use UnionEnumAttributes.Set* methods instead or set the fields directly.
type UnionEnumAttributesBuilder struct {
    obj *UnionEnumAttributes
}

func NewUnionEnumAttributesBuilder() *UnionEnumAttributesBuilder {
    return &UnionEnumAttributesBuilder{
        obj: NewUnionEnumAttributes(),
    }
}

func (x *UnionEnumAttributesBuilder) Attributes(attributes []string) *UnionEnumAttributesBuilder {
    x.obj.Attributes = attributes
    return x
}

func (x *UnionEnumAttributesBuilder) Emit() *UnionEnumAttributes {
    var objCopy UnionEnumAttributes = *x.obj
    return &objCopy
}

func (x *UnionEnumAttributes) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("UnionEnumAttributes"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *UnionEnumAttributes) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // attributes
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type StructTrait struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = &StructTrait{}

func NewStructTrait() *StructTrait {
    return (&StructTrait{})
}
func (x *StructTrait) GetName() string {
    return x.Name
}

func (x *StructTrait) SetName(name string) *StructTrait {
    x.Name = name
    return x
}


func (x *StructTrait) writeField1(p thrift.Protocol) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetName()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *StructTrait) readField1(p thrift.Protocol) error {  // Name
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetName(result)
    return nil
}


// Deprecated: Use StructTrait.Set* methods instead or set the fields directly.
type StructTraitBuilder struct {
    obj *StructTrait
}

func NewStructTraitBuilder() *StructTraitBuilder {
    return &StructTraitBuilder{
        obj: NewStructTrait(),
    }
}

func (x *StructTraitBuilder) Name(name string) *StructTraitBuilder {
    x.obj.Name = name
    return x
}

func (x *StructTraitBuilder) Emit() *StructTrait {
    var objCopy StructTrait = *x.obj
    return &objCopy
}

func (x *StructTrait) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("StructTrait"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *StructTrait) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // name
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type Attributes struct {
    Attributes []string `thrift:"attributes,1" json:"attributes" db:"attributes"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Attributes{}

func NewAttributes() *Attributes {
    return (&Attributes{})
}
func (x *Attributes) GetAttributes() []string {
    return x.Attributes
}

func (x *Attributes) SetAttributes(attributes []string) *Attributes {
    x.Attributes = attributes
    return x
}

func (x *Attributes) IsSetAttributes() bool {
    return x.Attributes != nil
}

func (x *Attributes) writeField1(p thrift.Protocol) error {  // Attributes
    if !x.IsSetAttributes() {
        return nil
    }

    if err := p.WriteFieldBegin("attributes", thrift.LIST, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetAttributes()
    if err := p.WriteListBegin(thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Attributes) readField1(p thrift.Protocol) error {  // Attributes
    _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]string, 0, size)
for i := 0; i < size; i++ {
    var elem string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult

    x.SetAttributes(result)
    return nil
}


// Deprecated: Use Attributes.Set* methods instead or set the fields directly.
type AttributesBuilder struct {
    obj *Attributes
}

func NewAttributesBuilder() *AttributesBuilder {
    return &AttributesBuilder{
        obj: NewAttributes(),
    }
}

func (x *AttributesBuilder) Attributes(attributes []string) *AttributesBuilder {
    x.obj.Attributes = attributes
    return x
}

func (x *AttributesBuilder) Emit() *Attributes {
    var objCopy Attributes = *x.obj
    return &objCopy
}

func (x *Attributes) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Attributes"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Attributes) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // attributes
            if err := x.readField1(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type StructAsTrait struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &StructAsTrait{}

func NewStructAsTrait() *StructAsTrait {
    return (&StructAsTrait{})
}

// Deprecated: Use StructAsTrait.Set* methods instead or set the fields directly.
type StructAsTraitBuilder struct {
    obj *StructAsTrait
}

func NewStructAsTraitBuilder() *StructAsTraitBuilder {
    return &StructAsTraitBuilder{
        obj: NewStructAsTrait(),
    }
}

func (x *StructAsTraitBuilder) Emit() *StructAsTrait {
    var objCopy StructAsTrait = *x.obj
    return &objCopy
}

func (x *StructAsTrait) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("StructAsTrait"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *StructAsTrait) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}
