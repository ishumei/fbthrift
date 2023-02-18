/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.thrift.type.TypeList;
import java.util.ArrayList;
import java.util.List;

public class __fbthrift_TypeList_f5023485 implements TypeList {

  private static List<TypeMapping> list = new ArrayList<>();

  private static void add(String uri, String className) {
    list.add(new TypeList.TypeMapping(uri, className));
  }

  private static void addToList0() {
    add("test.dev/fixtures/patch/MyData", "test.fixtures.patch.MyData");
    add("test.dev/fixtures/patch/MyDataWithCustomDefault", "test.fixtures.patch.MyDataWithCustomDefault");
    add("test.dev/fixtures/patch/InnerUnion", "test.fixtures.patch.InnerUnion");
    add("test.dev/fixtures/patch/MyUnion", "test.fixtures.patch.MyUnion");
    add("test.dev/fixtures/patch/MyStruct", "test.fixtures.patch.MyStruct");
    add("test.dev/fixtures/patch/LateDefStruct", "test.fixtures.patch.LateDefStruct");
    add("test.dev/fixtures/patch/Recursive", "test.fixtures.patch.Recursive");
    add("test.dev/fixtures/patch/Bar", "test.fixtures.patch.Bar");
    add("test.dev/fixtures/patch/Loop", "test.fixtures.patch.Loop");
    add("test.dev/fixtures/patch/MyDataEnsureStruct", "test.fixtures.patch.MyDataEnsureStruct");
    add("test.dev/fixtures/patch/MyDataFieldPatch", "test.fixtures.patch.MyDataFieldPatch");
    add("test.dev/fixtures/patch/MyDataPatch", "test.fixtures.patch.MyDataPatch");
    add("test.dev/fixtures/patch/MyDataWithCustomDefaultEnsureStruct", "test.fixtures.patch.MyDataWithCustomDefaultEnsureStruct");
    add("test.dev/fixtures/patch/MyDataWithCustomDefaultFieldPatch", "test.fixtures.patch.MyDataWithCustomDefaultFieldPatch");
    add("test.dev/fixtures/patch/MyDataWithCustomDefaultPatch", "test.fixtures.patch.MyDataWithCustomDefaultPatch");
    add("test.dev/fixtures/patch/InnerUnionFieldPatch", "test.fixtures.patch.InnerUnionFieldPatch");
    add("test.dev/fixtures/patch/InnerUnionPatch", "test.fixtures.patch.InnerUnionPatch");
    add("test.dev/fixtures/patch/MyUnionFieldPatch", "test.fixtures.patch.MyUnionFieldPatch");
    add("test.dev/fixtures/patch/MyUnionPatch", "test.fixtures.patch.MyUnionPatch");
    add("test.dev/fixtures/patch/MyStructEnsureStruct", "test.fixtures.patch.MyStructEnsureStruct");
    add("test.dev/fixtures/patch/MyStructField10Patch", "test.fixtures.patch.MyStructField10Patch");
    add("test.dev/fixtures/patch/MyStructField23Patch", "test.fixtures.patch.MyStructField23Patch");
    add("test.dev/fixtures/patch/MyStructField26Patch", "test.fixtures.patch.MyStructField26Patch");
    add("test.dev/fixtures/patch/MyStructField27Patch", "test.fixtures.patch.MyStructField27Patch");
    add("test.dev/fixtures/patch/MyStructField28Patch", "test.fixtures.patch.MyStructField28Patch");
    add("test.dev/fixtures/patch/MyStructField29Patch", "test.fixtures.patch.MyStructField29Patch");
    add("test.dev/fixtures/patch/MyStructField29Patch1", "test.fixtures.patch.MyStructField29Patch1");
    add("test.dev/fixtures/patch/MyStructField30Patch", "test.fixtures.patch.MyStructField30Patch");
    add("test.dev/fixtures/patch/MyStructField30Patch1", "test.fixtures.patch.MyStructField30Patch1");
    add("test.dev/fixtures/patch/MyStructFieldPatch", "test.fixtures.patch.MyStructFieldPatch");
    add("test.dev/fixtures/patch/MyStructPatch", "test.fixtures.patch.MyStructPatch");
    add("test.dev/fixtures/patch/LateDefStructEnsureStruct", "test.fixtures.patch.LateDefStructEnsureStruct");
    add("test.dev/fixtures/patch/LateDefStructFieldPatch", "test.fixtures.patch.LateDefStructFieldPatch");
    add("test.dev/fixtures/patch/LateDefStructPatch", "test.fixtures.patch.LateDefStructPatch");
    add("test.dev/fixtures/patch/RecursiveEnsureStruct", "test.fixtures.patch.RecursiveEnsureStruct");
    add("test.dev/fixtures/patch/RecursiveField1Patch", "test.fixtures.patch.RecursiveField1Patch");
    add("test.dev/fixtures/patch/RecursiveFieldPatch", "test.fixtures.patch.RecursiveFieldPatch");
    add("test.dev/fixtures/patch/RecursivePatch", "test.fixtures.patch.RecursivePatch");
    add("test.dev/fixtures/patch/BarEnsureStruct", "test.fixtures.patch.BarEnsureStruct");
    add("test.dev/fixtures/patch/BarFieldPatch", "test.fixtures.patch.BarFieldPatch");
    add("test.dev/fixtures/patch/BarPatch", "test.fixtures.patch.BarPatch");
    add("test.dev/fixtures/patch/LoopEnsureStruct", "test.fixtures.patch.LoopEnsureStruct");
    add("test.dev/fixtures/patch/LoopFieldPatch", "test.fixtures.patch.LoopFieldPatch");
    add("test.dev/fixtures/patch/LoopPatch", "test.fixtures.patch.LoopPatch");
    add("test.dev/fixtures/patch/MyEnum", "test.fixtures.patch.MyEnum");
  }

  static {
    addToList0();
  }

  @java.lang.Override
  public List<TypeList.TypeMapping> getTypes() {
    return list;
  }
}
