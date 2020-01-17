/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/optionals/gen-cpp2/module_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;

void GeneratedEnumMetadata<::cpp2::Animal>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.Animal", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& module_Animal = res.first->second;
  module_Animal.name = "module.Animal";
  module_Animal.elements[1] = "DOG";
  module_Animal.elements[2] = "CAT";
  module_Animal.elements[3] = "TARANTULA";
}

void GeneratedStructMetadata<::cpp2::Color>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Color", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Color = res.first->second;
  module_Color.name = "module.Color";
  module_Color.is_union = false;
  ::apache::thrift::metadata::ThriftField module_Color_red_1;
  module_Color_red_1.id = 1;
  module_Color_red_1.name = "red";
  module_Color_red_1.is_optional = false;
  auto module_Color_red_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::DOUBLE);
  module_Color_red_1_type->initialize(module_Color_red_1.type);
  module_Color.fields.push_back(std::move(module_Color_red_1));
  ::apache::thrift::metadata::ThriftField module_Color_green_2;
  module_Color_green_2.id = 2;
  module_Color_green_2.name = "green";
  module_Color_green_2.is_optional = false;
  auto module_Color_green_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::DOUBLE);
  module_Color_green_2_type->initialize(module_Color_green_2.type);
  module_Color.fields.push_back(std::move(module_Color_green_2));
  ::apache::thrift::metadata::ThriftField module_Color_blue_3;
  module_Color_blue_3.id = 3;
  module_Color_blue_3.name = "blue";
  module_Color_blue_3.is_optional = false;
  auto module_Color_blue_3_type = std::make_unique<Primitive>(ThriftPrimitiveType::DOUBLE);
  module_Color_blue_3_type->initialize(module_Color_blue_3.type);
  module_Color.fields.push_back(std::move(module_Color_blue_3));
  ::apache::thrift::metadata::ThriftField module_Color_alpha_4;
  module_Color_alpha_4.id = 4;
  module_Color_alpha_4.name = "alpha";
  module_Color_alpha_4.is_optional = false;
  auto module_Color_alpha_4_type = std::make_unique<Primitive>(ThriftPrimitiveType::DOUBLE);
  module_Color_alpha_4_type->initialize(module_Color_alpha_4.type);
  module_Color.fields.push_back(std::move(module_Color_alpha_4));
}
void GeneratedStructMetadata<::cpp2::Vehicle>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Vehicle", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Vehicle = res.first->second;
  module_Vehicle.name = "module.Vehicle";
  module_Vehicle.is_union = false;
  ::apache::thrift::metadata::ThriftField module_Vehicle_color_1;
  module_Vehicle_color_1.id = 1;
  module_Vehicle_color_1.name = "color";
  module_Vehicle_color_1.is_optional = false;
  auto module_Vehicle_color_1_type = std::make_unique<Struct< ::cpp2::Color>>("module.Color", metadata);
  module_Vehicle_color_1_type->initialize(module_Vehicle_color_1.type);
  module_Vehicle.fields.push_back(std::move(module_Vehicle_color_1));
  ::apache::thrift::metadata::ThriftField module_Vehicle_licensePlate_2;
  module_Vehicle_licensePlate_2.id = 2;
  module_Vehicle_licensePlate_2.name = "licensePlate";
  module_Vehicle_licensePlate_2.is_optional = true;
  auto module_Vehicle_licensePlate_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Vehicle_licensePlate_2_type->initialize(module_Vehicle_licensePlate_2.type);
  module_Vehicle.fields.push_back(std::move(module_Vehicle_licensePlate_2));
  ::apache::thrift::metadata::ThriftField module_Vehicle_description_3;
  module_Vehicle_description_3.id = 3;
  module_Vehicle_description_3.name = "description";
  module_Vehicle_description_3.is_optional = true;
  auto module_Vehicle_description_3_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Vehicle_description_3_type->initialize(module_Vehicle_description_3.type);
  module_Vehicle.fields.push_back(std::move(module_Vehicle_description_3));
  ::apache::thrift::metadata::ThriftField module_Vehicle_name_4;
  module_Vehicle_name_4.id = 4;
  module_Vehicle_name_4.name = "name";
  module_Vehicle_name_4.is_optional = true;
  auto module_Vehicle_name_4_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Vehicle_name_4_type->initialize(module_Vehicle_name_4.type);
  module_Vehicle.fields.push_back(std::move(module_Vehicle_name_4));
  ::apache::thrift::metadata::ThriftField module_Vehicle_hasAC_5;
  module_Vehicle_hasAC_5.id = 5;
  module_Vehicle_hasAC_5.name = "hasAC";
  module_Vehicle_hasAC_5.is_optional = true;
  auto module_Vehicle_hasAC_5_type = std::make_unique<Primitive>(ThriftPrimitiveType::BOOL);
  module_Vehicle_hasAC_5_type->initialize(module_Vehicle_hasAC_5.type);
  module_Vehicle.fields.push_back(std::move(module_Vehicle_hasAC_5));
}
void GeneratedStructMetadata<::cpp2::Person>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Person", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Person = res.first->second;
  module_Person.name = "module.Person";
  module_Person.is_union = false;
  ::apache::thrift::metadata::ThriftField module_Person_id_1;
  module_Person_id_1.id = 1;
  module_Person_id_1.name = "id";
  module_Person_id_1.is_optional = false;
  auto module_Person_id_1_type = std::make_unique<Typedef>("module.PersonID", std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_Person_id_1_type->initialize(module_Person_id_1.type);
  module_Person.fields.push_back(std::move(module_Person_id_1));
  ::apache::thrift::metadata::ThriftField module_Person_name_2;
  module_Person_name_2.id = 2;
  module_Person_name_2.name = "name";
  module_Person_name_2.is_optional = false;
  auto module_Person_name_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Person_name_2_type->initialize(module_Person_name_2.type);
  module_Person.fields.push_back(std::move(module_Person_name_2));
  ::apache::thrift::metadata::ThriftField module_Person_age_3;
  module_Person_age_3.id = 3;
  module_Person_age_3.name = "age";
  module_Person_age_3.is_optional = true;
  auto module_Person_age_3_type = std::make_unique<Primitive>(ThriftPrimitiveType::I16);
  module_Person_age_3_type->initialize(module_Person_age_3.type);
  module_Person.fields.push_back(std::move(module_Person_age_3));
  ::apache::thrift::metadata::ThriftField module_Person_address_4;
  module_Person_address_4.id = 4;
  module_Person_address_4.name = "address";
  module_Person_address_4.is_optional = true;
  auto module_Person_address_4_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_Person_address_4_type->initialize(module_Person_address_4.type);
  module_Person.fields.push_back(std::move(module_Person_address_4));
  ::apache::thrift::metadata::ThriftField module_Person_favoriteColor_5;
  module_Person_favoriteColor_5.id = 5;
  module_Person_favoriteColor_5.name = "favoriteColor";
  module_Person_favoriteColor_5.is_optional = true;
  auto module_Person_favoriteColor_5_type = std::make_unique<Struct< ::cpp2::Color>>("module.Color", metadata);
  module_Person_favoriteColor_5_type->initialize(module_Person_favoriteColor_5.type);
  module_Person.fields.push_back(std::move(module_Person_favoriteColor_5));
  ::apache::thrift::metadata::ThriftField module_Person_friends_6;
  module_Person_friends_6.id = 6;
  module_Person_friends_6.name = "friends";
  module_Person_friends_6.is_optional = true;
  auto module_Person_friends_6_type = std::make_unique<Set>(std::make_unique<Typedef>("module.PersonID", std::make_unique<Primitive>(ThriftPrimitiveType::I64)));
  module_Person_friends_6_type->initialize(module_Person_friends_6.type);
  module_Person.fields.push_back(std::move(module_Person_friends_6));
  ::apache::thrift::metadata::ThriftField module_Person_bestFriend_7;
  module_Person_bestFriend_7.id = 7;
  module_Person_bestFriend_7.name = "bestFriend";
  module_Person_bestFriend_7.is_optional = true;
  auto module_Person_bestFriend_7_type = std::make_unique<Typedef>("module.PersonID", std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_Person_bestFriend_7_type->initialize(module_Person_bestFriend_7.type);
  module_Person.fields.push_back(std::move(module_Person_bestFriend_7));
  ::apache::thrift::metadata::ThriftField module_Person_petNames_8;
  module_Person_petNames_8.id = 8;
  module_Person_petNames_8.name = "petNames";
  module_Person_petNames_8.is_optional = true;
  auto module_Person_petNames_8_type = std::make_unique<Map>(std::make_unique<Enum< ::cpp2::Animal>>("module.Animal", metadata), std::make_unique<Primitive>(ThriftPrimitiveType::STRING));
  module_Person_petNames_8_type->initialize(module_Person_petNames_8.type);
  module_Person.fields.push_back(std::move(module_Person_petNames_8));
  ::apache::thrift::metadata::ThriftField module_Person_afraidOfAnimal_9;
  module_Person_afraidOfAnimal_9.id = 9;
  module_Person_afraidOfAnimal_9.name = "afraidOfAnimal";
  module_Person_afraidOfAnimal_9.is_optional = true;
  auto module_Person_afraidOfAnimal_9_type = std::make_unique<Enum< ::cpp2::Animal>>("module.Animal", metadata);
  module_Person_afraidOfAnimal_9_type->initialize(module_Person_afraidOfAnimal_9.type);
  module_Person.fields.push_back(std::move(module_Person_afraidOfAnimal_9));
  ::apache::thrift::metadata::ThriftField module_Person_vehicles_10;
  module_Person_vehicles_10.id = 10;
  module_Person_vehicles_10.name = "vehicles";
  module_Person_vehicles_10.is_optional = true;
  auto module_Person_vehicles_10_type = std::make_unique<List>(std::make_unique<Struct< ::cpp2::Vehicle>>("module.Vehicle", metadata));
  module_Person_vehicles_10_type->initialize(module_Person_vehicles_10.type);
  module_Person.fields.push_back(std::move(module_Person_vehicles_10));
}

} // apache::thrift::detail::metadata
