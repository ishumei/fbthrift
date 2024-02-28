// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package service // [[[ program thrift source path ]]]


import (
    "context"
    "fmt"
    "strings"
    "sync"

    module "module"
    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = module.GoUnusedProtection__
var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = strings.Split
var _ = sync.Mutex{}
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__



type MyService interface {
    Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
    HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceChannelClientInterface interface {
    thrift.ClientInterface
    MyService
}

type MyServiceClientInterface interface {
    thrift.ClientInterface
    Query(s *module.MyStruct, i *includes.Included) (error)
    HasArgDocs(s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceContextClientInterface interface {
    MyServiceClientInterface
    QueryContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
    HasArgDocsContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error)
}

type MyServiceChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ MyServiceChannelClientInterface = &MyServiceChannelClient{}

func NewMyServiceChannelClient(channel thrift.RequestChannel) *MyServiceChannelClient {
    return &MyServiceChannelClient{
        ch: channel,
    }
}

func (c *MyServiceChannelClient) Close() error {
    return c.ch.Close()
}

type MyServiceClient struct {
    chClient *MyServiceChannelClient
    Mu       sync.Mutex
}
// Compile time interface enforcer
var _ MyServiceClientInterface = &MyServiceClient{}
var _ MyServiceContextClientInterface = &MyServiceClient{}

// Deprecated: Use NewMyServiceClientFromProtocol() instead.
func NewMyServiceClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceClient {
    return NewMyServiceClientFromProtocol(iprot)
}

func NewMyServiceClientFromProtocol(prot thrift.Protocol) *MyServiceClient {
    return &MyServiceClient{
        chClient: NewMyServiceChannelClient(
            thrift.NewSerialChannel(prot),
        ),
    }
}

func (c *MyServiceClient) Close() error {
    return c.chClient.Close()
}

// Deprecated: Use MyServiceClient instead.
type MyServiceThreadsafeClient = MyServiceClient

// Deprecated: Use NewMyServiceClientFromProtocol() instead.
func NewMyServiceThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceThreadsafeClient {
    return NewMyServiceClientFromProtocol(iprot)
}

// Deprecated: Use NewMyServiceClientFromProtocol() instead.
func NewMyServiceClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *MyServiceClient {
  return NewMyServiceClientFromProtocol(pf.GetProtocol(t))
}

// Deprecated: Use NewMyServiceClientFromProtocol() instead.
func NewMyServiceThreadsafeClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *MyServiceThreadsafeClient {
  return NewMyServiceClientFromProtocol(pf.GetProtocol(t))
}


func (c *MyServiceChannelClient) Query(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceQuery{
        S: s,
        I: i,
    }
    out := newRespMyServiceQuery()
    err := c.ch.Call(ctx, "query", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *MyServiceClient) Query(s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.Query(context.Background(), s, i)
}

func (c *MyServiceClient) QueryContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.Query(ctx, s, i)
}

func (c *MyServiceChannelClient) HasArgDocs(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    in := &reqMyServiceHasArgDocs{
        S: s,
        I: i,
    }
    out := newRespMyServiceHasArgDocs()
    err := c.ch.Call(ctx, "has_arg_docs", in, out)
    if err != nil {
        return err
    }
    return nil
}

func (c *MyServiceClient) HasArgDocs(s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.HasArgDocs(context.Background(), s, i)
}

func (c *MyServiceClient) HasArgDocsContext(ctx context.Context, s *module.MyStruct, i *includes.Included) (error) {
    return c.chClient.HasArgDocs(ctx, s, i)
}

type reqMyServiceQuery struct {
    S *module.MyStruct `thrift:"s,1" json:"s" db:"s"`
    I *includes.Included `thrift:"i,2" json:"i" db:"i"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqMyServiceQuery{}

// Deprecated: MyServiceQueryArgsDeprecated is deprecated, since it is supposed to be internal.
type MyServiceQueryArgsDeprecated = reqMyServiceQuery

func newReqMyServiceQuery() *reqMyServiceQuery {
    return (&reqMyServiceQuery{}).
        SetSNonCompat(*module.NewMyStruct()).
        SetINonCompat(*includes.NewIncluded())
}

func (x *reqMyServiceQuery) GetSNonCompat() *module.MyStruct {
    return x.S
}

func (x *reqMyServiceQuery) GetS() *module.MyStruct {
    if !x.IsSetS() {
        return nil
    }

    return x.S
}

func (x *reqMyServiceQuery) GetINonCompat() *includes.Included {
    return x.I
}

func (x *reqMyServiceQuery) GetI() *includes.Included {
    if !x.IsSetI() {
        return nil
    }

    return x.I
}

func (x *reqMyServiceQuery) SetSNonCompat(value module.MyStruct) *reqMyServiceQuery {
    x.S = &value
    return x
}

func (x *reqMyServiceQuery) SetS(value *module.MyStruct) *reqMyServiceQuery {
    x.S = value
    return x
}

func (x *reqMyServiceQuery) SetINonCompat(value includes.Included) *reqMyServiceQuery {
    x.I = &value
    return x
}

func (x *reqMyServiceQuery) SetI(value *includes.Included) *reqMyServiceQuery {
    x.I = value
    return x
}

func (x *reqMyServiceQuery) IsSetS() bool {
    return x != nil && x.S != nil
}

func (x *reqMyServiceQuery) IsSetI() bool {
    return x != nil && x.I != nil
}

func (x *reqMyServiceQuery) writeField1(p thrift.Protocol) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetSNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) writeField2(p thrift.Protocol) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetINonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceQuery) readField1(p thrift.Protocol) error {  // S
    result := *module.NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetSNonCompat(result)
    return nil
}

func (x *reqMyServiceQuery) readField2(p thrift.Protocol) error {  // I
    result := *includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetINonCompat(result)
    return nil
}

func (x *reqMyServiceQuery) toString1() string {  // S
    return fmt.Sprintf("%v", x.GetSNonCompat())
}

func (x *reqMyServiceQuery) toString2() string {  // I
    return fmt.Sprintf("%v", x.GetINonCompat())
}

// Deprecated: Use newReqMyServiceQuery().GetS() instead.
func (x *reqMyServiceQuery) DefaultGetS() *module.MyStruct {
    if !x.IsSetS() {
        return module.NewMyStruct()
    }
    return x.S
}

// Deprecated: Use newReqMyServiceQuery().GetI() instead.
func (x *reqMyServiceQuery) DefaultGetI() *includes.Included {
    if !x.IsSetI() {
        return includes.NewIncluded()
    }
    return x.I
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
type reqMyServiceQueryBuilder struct {
    obj *reqMyServiceQuery
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func newReqMyServiceQueryBuilder() *reqMyServiceQueryBuilder {
    return &reqMyServiceQueryBuilder{
        obj: newReqMyServiceQuery(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceQueryBuilder) S(value *module.MyStruct) *reqMyServiceQueryBuilder {
    x.obj.S = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceQueryBuilder) I(value *includes.Included) *reqMyServiceQueryBuilder {
    x.obj.I = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceQueryBuilder) Emit() *reqMyServiceQuery {
    var objCopy reqMyServiceQuery = *x.obj
    return &objCopy
}

func (x *reqMyServiceQuery) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqMyServiceQuery"); err != nil {
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

func (x *reqMyServiceQuery) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRUCT)):  // s
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRUCT)):  // i
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
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

func (x *reqMyServiceQuery) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqMyServiceQuery({")
    sb.WriteString(fmt.Sprintf("S:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("I:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}
type respMyServiceQuery struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &respMyServiceQuery{}
var _ thrift.WritableResult = &respMyServiceQuery{}

// Deprecated: MyServiceQueryResultDeprecated is deprecated, since it is supposed to be internal.
type MyServiceQueryResultDeprecated = respMyServiceQuery

func newRespMyServiceQuery() *respMyServiceQuery {
    return (&respMyServiceQuery{})
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
type respMyServiceQueryBuilder struct {
    obj *respMyServiceQuery
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func newRespMyServiceQueryBuilder() *respMyServiceQueryBuilder {
    return &respMyServiceQueryBuilder{
        obj: newRespMyServiceQuery(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceQuery().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *respMyServiceQueryBuilder) Emit() *respMyServiceQuery {
    var objCopy respMyServiceQuery = *x.obj
    return &objCopy
}

func (x *respMyServiceQuery) Exception() thrift.WritableException {
    return nil
}

func (x *respMyServiceQuery) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respMyServiceQuery"); err != nil {
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

func (x *respMyServiceQuery) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        default:
            if err := p.Skip(wireType); err != nil {
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

func (x *respMyServiceQuery) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respMyServiceQuery({")
    sb.WriteString("})")

    return sb.String()
}
type reqMyServiceHasArgDocs struct {
    S *module.MyStruct `thrift:"s,1" json:"s" db:"s"`
    I *includes.Included `thrift:"i,2" json:"i" db:"i"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqMyServiceHasArgDocs{}

// Deprecated: MyServiceHasArgDocsArgsDeprecated is deprecated, since it is supposed to be internal.
type MyServiceHasArgDocsArgsDeprecated = reqMyServiceHasArgDocs

func newReqMyServiceHasArgDocs() *reqMyServiceHasArgDocs {
    return (&reqMyServiceHasArgDocs{}).
        SetSNonCompat(*module.NewMyStruct()).
        SetINonCompat(*includes.NewIncluded())
}

func (x *reqMyServiceHasArgDocs) GetSNonCompat() *module.MyStruct {
    return x.S
}

func (x *reqMyServiceHasArgDocs) GetS() *module.MyStruct {
    if !x.IsSetS() {
        return nil
    }

    return x.S
}

func (x *reqMyServiceHasArgDocs) GetINonCompat() *includes.Included {
    return x.I
}

func (x *reqMyServiceHasArgDocs) GetI() *includes.Included {
    if !x.IsSetI() {
        return nil
    }

    return x.I
}

func (x *reqMyServiceHasArgDocs) SetSNonCompat(value module.MyStruct) *reqMyServiceHasArgDocs {
    x.S = &value
    return x
}

func (x *reqMyServiceHasArgDocs) SetS(value *module.MyStruct) *reqMyServiceHasArgDocs {
    x.S = value
    return x
}

func (x *reqMyServiceHasArgDocs) SetINonCompat(value includes.Included) *reqMyServiceHasArgDocs {
    x.I = &value
    return x
}

func (x *reqMyServiceHasArgDocs) SetI(value *includes.Included) *reqMyServiceHasArgDocs {
    x.I = value
    return x
}

func (x *reqMyServiceHasArgDocs) IsSetS() bool {
    return x != nil && x.S != nil
}

func (x *reqMyServiceHasArgDocs) IsSetI() bool {
    return x != nil && x.I != nil
}

func (x *reqMyServiceHasArgDocs) writeField1(p thrift.Protocol) error {  // S
    if !x.IsSetS() {
        return nil
    }

    if err := p.WriteFieldBegin("s", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetSNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceHasArgDocs) writeField2(p thrift.Protocol) error {  // I
    if !x.IsSetI() {
        return nil
    }

    if err := p.WriteFieldBegin("i", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetINonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqMyServiceHasArgDocs) readField1(p thrift.Protocol) error {  // S
    result := *module.NewMyStruct()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetSNonCompat(result)
    return nil
}

func (x *reqMyServiceHasArgDocs) readField2(p thrift.Protocol) error {  // I
    result := *includes.NewIncluded()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetINonCompat(result)
    return nil
}

func (x *reqMyServiceHasArgDocs) toString1() string {  // S
    return fmt.Sprintf("%v", x.GetSNonCompat())
}

func (x *reqMyServiceHasArgDocs) toString2() string {  // I
    return fmt.Sprintf("%v", x.GetINonCompat())
}

// Deprecated: Use newReqMyServiceHasArgDocs().GetS() instead.
func (x *reqMyServiceHasArgDocs) DefaultGetS() *module.MyStruct {
    if !x.IsSetS() {
        return module.NewMyStruct()
    }
    return x.S
}

// Deprecated: Use newReqMyServiceHasArgDocs().GetI() instead.
func (x *reqMyServiceHasArgDocs) DefaultGetI() *includes.Included {
    if !x.IsSetI() {
        return includes.NewIncluded()
    }
    return x.I
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
type reqMyServiceHasArgDocsBuilder struct {
    obj *reqMyServiceHasArgDocs
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func newReqMyServiceHasArgDocsBuilder() *reqMyServiceHasArgDocsBuilder {
    return &reqMyServiceHasArgDocsBuilder{
        obj: newReqMyServiceHasArgDocs(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceHasArgDocsBuilder) S(value *module.MyStruct) *reqMyServiceHasArgDocsBuilder {
    x.obj.S = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceHasArgDocsBuilder) I(value *includes.Included) *reqMyServiceHasArgDocsBuilder {
    x.obj.I = value
    return x
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newReqMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *reqMyServiceHasArgDocsBuilder) Emit() *reqMyServiceHasArgDocs {
    var objCopy reqMyServiceHasArgDocs = *x.obj
    return &objCopy
}

func (x *reqMyServiceHasArgDocs) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqMyServiceHasArgDocs"); err != nil {
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

func (x *reqMyServiceHasArgDocs) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        case (id == 1 && wireType == thrift.Type(thrift.STRUCT)):  // s
            if err := x.readField1(p); err != nil {
                return err
            }
        case (id == 2 && wireType == thrift.Type(thrift.STRUCT)):  // i
            if err := x.readField2(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(wireType); err != nil {
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

func (x *reqMyServiceHasArgDocs) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqMyServiceHasArgDocs({")
    sb.WriteString(fmt.Sprintf("S:%s ", x.toString1()))
    sb.WriteString(fmt.Sprintf("I:%s", x.toString2()))
    sb.WriteString("})")

    return sb.String()
}
type respMyServiceHasArgDocs struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &respMyServiceHasArgDocs{}
var _ thrift.WritableResult = &respMyServiceHasArgDocs{}

// Deprecated: MyServiceHasArgDocsResultDeprecated is deprecated, since it is supposed to be internal.
type MyServiceHasArgDocsResultDeprecated = respMyServiceHasArgDocs

func newRespMyServiceHasArgDocs() *respMyServiceHasArgDocs {
    return (&respMyServiceHasArgDocs{})
}


// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
type respMyServiceHasArgDocsBuilder struct {
    obj *respMyServiceHasArgDocs
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func newRespMyServiceHasArgDocsBuilder() *respMyServiceHasArgDocsBuilder {
    return &respMyServiceHasArgDocsBuilder{
        obj: newRespMyServiceHasArgDocs(),
    }
}

// Deprecated: Use "New" constructor and setters to build your structs.
// e.g newRespMyServiceHasArgDocs().Set<FieldNameFoo>().Set<FieldNameBar>()
func (x *respMyServiceHasArgDocsBuilder) Emit() *respMyServiceHasArgDocs {
    var objCopy respMyServiceHasArgDocs = *x.obj
    return &objCopy
}

func (x *respMyServiceHasArgDocs) Exception() thrift.WritableException {
    return nil
}

func (x *respMyServiceHasArgDocs) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respMyServiceHasArgDocs"); err != nil {
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

func (x *respMyServiceHasArgDocs) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch {
        default:
            if err := p.Skip(wireType); err != nil {
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

func (x *respMyServiceHasArgDocs) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respMyServiceHasArgDocs({")
    sb.WriteString("})")

    return sb.String()
}


type MyServiceProcessor struct {
    processorMap       map[string]thrift.ProcessorFunctionContext
    functionServiceMap map[string]string
    handler            MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorContext = &MyServiceProcessor{}

func NewMyServiceProcessor(handler MyService) *MyServiceProcessor {
    p := &MyServiceProcessor{
        handler:            handler,
        processorMap:       make(map[string]thrift.ProcessorFunctionContext),
        functionServiceMap: make(map[string]string),
    }
    p.AddToProcessorMap("query", &procFuncMyServiceQuery{handler: handler})
    p.AddToProcessorMap("has_arg_docs", &procFuncMyServiceHasArgDocs{handler: handler})
    p.AddToFunctionServiceMap("query", "MyService")
    p.AddToFunctionServiceMap("has_arg_docs", "MyService")

    return p
}

func (p *MyServiceProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunctionContext) {
    p.processorMap[key] = processor
}

func (p *MyServiceProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *MyServiceProcessor) GetProcessorFunctionContext(key string) (processor thrift.ProcessorFunctionContext, err error) {
    if processor, ok := p.processorMap[key]; ok {
        return processor, nil
    }
    return nil, nil
}

func (p *MyServiceProcessor) ProcessorMap() map[string]thrift.ProcessorFunctionContext {
    return p.processorMap
}

func (p *MyServiceProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func (p *MyServiceProcessor) GetThriftMetadata() *metadata.ThriftMetadata {
    return GetThriftMetadataForService("service.MyService")
}


type procFuncMyServiceQuery struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunctionContext = &procFuncMyServiceQuery{}

func (p *procFuncMyServiceQuery) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqMyServiceQuery()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceQuery) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("query", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyServiceQuery) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceQuery)
    result := newRespMyServiceQuery()
    err := p.handler.Query(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing Query: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


type procFuncMyServiceHasArgDocs struct {
    handler MyService
}
// Compile time interface enforcer
var _ thrift.ProcessorFunctionContext = &procFuncMyServiceHasArgDocs{}

func (p *procFuncMyServiceHasArgDocs) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqMyServiceHasArgDocs()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncMyServiceHasArgDocs) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("has_arg_docs", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncMyServiceHasArgDocs) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqMyServiceHasArgDocs)
    result := newRespMyServiceHasArgDocs()
    err := p.handler.HasArgDocs(ctx, args.S, args.I)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing HasArgDocs: " + err.Error(), err)
        return x, x
    }

    return result, nil
}


