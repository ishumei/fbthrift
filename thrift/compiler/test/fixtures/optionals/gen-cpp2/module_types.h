/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct red;
struct green;
struct blue;
struct alpha;
struct color;
struct licensePlate;
struct description;
struct name;
struct hasAC;
struct id;
struct name;
struct age;
struct address;
struct favoriteColor;
struct friends;
struct bestFriend;
struct petNames;
struct afraidOfAnimal;
struct vehicles;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_red
#define APACHE_THRIFT_ACCESSOR_red
APACHE_THRIFT_DEFINE_ACCESSOR(red);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_green
#define APACHE_THRIFT_ACCESSOR_green
APACHE_THRIFT_DEFINE_ACCESSOR(green);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_blue
#define APACHE_THRIFT_ACCESSOR_blue
APACHE_THRIFT_DEFINE_ACCESSOR(blue);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_alpha
#define APACHE_THRIFT_ACCESSOR_alpha
APACHE_THRIFT_DEFINE_ACCESSOR(alpha);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_color
#define APACHE_THRIFT_ACCESSOR_color
APACHE_THRIFT_DEFINE_ACCESSOR(color);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_licensePlate
#define APACHE_THRIFT_ACCESSOR_licensePlate
APACHE_THRIFT_DEFINE_ACCESSOR(licensePlate);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_description
#define APACHE_THRIFT_ACCESSOR_description
APACHE_THRIFT_DEFINE_ACCESSOR(description);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_hasAC
#define APACHE_THRIFT_ACCESSOR_hasAC
APACHE_THRIFT_DEFINE_ACCESSOR(hasAC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_age
#define APACHE_THRIFT_ACCESSOR_age
APACHE_THRIFT_DEFINE_ACCESSOR(age);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_address
#define APACHE_THRIFT_ACCESSOR_address
APACHE_THRIFT_DEFINE_ACCESSOR(address);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_favoriteColor
#define APACHE_THRIFT_ACCESSOR_favoriteColor
APACHE_THRIFT_DEFINE_ACCESSOR(favoriteColor);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_friends
#define APACHE_THRIFT_ACCESSOR_friends
APACHE_THRIFT_DEFINE_ACCESSOR(friends);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_bestFriend
#define APACHE_THRIFT_ACCESSOR_bestFriend
APACHE_THRIFT_DEFINE_ACCESSOR(bestFriend);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_petNames
#define APACHE_THRIFT_ACCESSOR_petNames
APACHE_THRIFT_DEFINE_ACCESSOR(petNames);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_afraidOfAnimal
#define APACHE_THRIFT_ACCESSOR_afraidOfAnimal
APACHE_THRIFT_DEFINE_ACCESSOR(afraidOfAnimal);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_vehicles
#define APACHE_THRIFT_ACCESSOR_vehicles
APACHE_THRIFT_DEFINE_ACCESSOR(vehicles);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3,
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::Animal> : public apache::thrift::detail::enum_hash<typename ::cpp2::Animal> {};
template<> struct equal_to<typename ::cpp2::Animal> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::Animal> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Animal>;

template <> struct TEnumTraits<::cpp2::Animal> {
  using type = ::cpp2::Animal;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::DOG; }
  static constexpr type max() { return type::TARANTULA; }
};


}} // apache::thrift

namespace cpp2 {

using _Animal_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Animal>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Color;
class Vehicle;
class Person;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef int64_t PersonID;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Color final : private apache::thrift::detail::st::ComparisonOperators<Color> {
 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  Color() :
      red(0),
      green(0),
      blue(0),
      alpha(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg);

  Color(Color&&) = default;

  Color(const Color&) = default;

  Color& operator=(Color&&) = default;

  Color& operator=(const Color&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
  double red;
 public:
  double green;
 public:
  double blue;
 public:
  double alpha;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool red;
    bool green;
    bool blue;
    bool alpha;
  } __isset = {};
  bool operator==(const Color& rhs) const;
  bool operator<(const Color& rhs) const;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> red_ref() const& {
    return {this->red, __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> red_ref() const&& {
    return {std::move(this->red), __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> red_ref() & {
    return {this->red, __isset.red};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> red_ref() && {
    return {std::move(this->red), __isset.red};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> green_ref() const& {
    return {this->green, __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> green_ref() const&& {
    return {std::move(this->green), __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> green_ref() & {
    return {this->green, __isset.green};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> green_ref() && {
    return {std::move(this->green), __isset.green};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> blue_ref() const& {
    return {this->blue, __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> blue_ref() const&& {
    return {std::move(this->blue), __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> blue_ref() & {
    return {this->blue, __isset.blue};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> blue_ref() && {
    return {std::move(this->blue), __isset.blue};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> alpha_ref() const& {
    return {this->alpha, __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> alpha_ref() const&& {
    return {std::move(this->alpha), __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> alpha_ref() & {
    return {this->alpha, __isset.alpha};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> alpha_ref() && {
    return {std::move(this->alpha), __isset.alpha};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  double get_red() const {
    return red;
  }

  double& set_red(double red_) {
    red = red_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.red = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return red;
  }

  double get_green() const {
    return green;
  }

  double& set_green(double green_) {
    green = green_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.green = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return green;
  }

  double get_blue() const {
    return blue;
  }

  double& set_blue(double blue_) {
    blue = blue_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.blue = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return blue;
  }

  double get_alpha() const {
    return alpha;
  }

  double& set_alpha(double alpha_) {
    alpha = alpha_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.alpha = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return alpha;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Color >;
};

void swap(Color& a, Color& b);

template <class Protocol_>
uint32_t Color::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Vehicle final : private apache::thrift::detail::st::ComparisonOperators<Vehicle> {
 public:

  Vehicle();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Vehicle(apache::thrift::FragileConstructor,  ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg);

  Vehicle(Vehicle&&) = default;

  Vehicle(const Vehicle&) = default;

  Vehicle& operator=(Vehicle&&) = default;

  Vehicle& operator=(const Vehicle&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();

  ~Vehicle();

 public:
   ::cpp2::Color color;
 private:
  ::std::string licensePlate;
 private:
  ::std::string description;
 private:
  ::std::string name;
 private:
  bool hasAC;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool color;
    bool licensePlate;
    bool description;
    bool name;
    bool hasAC;
  } __isset = {};
  bool operator==(const Vehicle& rhs) const;
  bool operator<(const Vehicle& rhs) const;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> color_ref() const& {
    return {this->color, __isset.color};
  }

  template <typename..., typename T =  ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> color_ref() const&& {
    return {std::move(this->color), __isset.color};
  }

  template <typename..., typename T =  ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> color_ref() & {
    return {this->color, __isset.color};
  }

  template <typename..., typename T =  ::cpp2::Color>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> color_ref() && {
    return {std::move(this->color), __isset.color};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&> licensePlate_ref() const& {
    return {licensePlate, __isset.licensePlate};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&&> licensePlate_ref() const&& {
    return {std::move(licensePlate), __isset.licensePlate};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&> licensePlate_ref() & {
    return {licensePlate, __isset.licensePlate};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&&> licensePlate_ref() && {
    return {std::move(licensePlate), __isset.licensePlate};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&> description_ref() const& {
    return {description, __isset.description};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&&> description_ref() const&& {
    return {std::move(description), __isset.description};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&> description_ref() & {
    return {description, __isset.description};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&&> description_ref() && {
    return {std::move(description), __isset.description};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&> name_ref() const& {
    return {name, __isset.name};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&&> name_ref() const&& {
    return {std::move(name), __isset.name};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&> name_ref() & {
    return {name, __isset.name};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&&> name_ref() && {
    return {std::move(name), __isset.name};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const bool&> hasAC_ref() const& {
    return {hasAC, __isset.hasAC};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const bool&&> hasAC_ref() const&& {
    return {std::move(hasAC), __isset.hasAC};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<bool&> hasAC_ref() & {
    return {hasAC, __isset.hasAC};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<bool&&> hasAC_ref() && {
    return {std::move(hasAC), __isset.hasAC};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  const  ::cpp2::Color& get_color() const&;
   ::cpp2::Color get_color() &&;

  template <typename T_Vehicle_color_struct_setter =  ::cpp2::Color>
   ::cpp2::Color& set_color(T_Vehicle_color_struct_setter&& color_) {
    color = std::forward<T_Vehicle_color_struct_setter>(color_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.color = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return color;
  }

  const ::std::string* get_licensePlate() const& {
    return licensePlate_ref() ? std::addressof(licensePlate) : nullptr;
  }

  ::std::string* get_licensePlate() & {
    return licensePlate_ref() ? std::addressof(licensePlate) : nullptr;
  }
  ::std::string* get_licensePlate() && = delete;

  template <typename T_Vehicle_licensePlate_struct_setter = ::std::string>
  ::std::string& set_licensePlate(T_Vehicle_licensePlate_struct_setter&& licensePlate_) {
    licensePlate = std::forward<T_Vehicle_licensePlate_struct_setter>(licensePlate_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.licensePlate = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return licensePlate;
  }

  const ::std::string* get_description() const& {
    return description_ref() ? std::addressof(description) : nullptr;
  }

  ::std::string* get_description() & {
    return description_ref() ? std::addressof(description) : nullptr;
  }
  ::std::string* get_description() && = delete;

  template <typename T_Vehicle_description_struct_setter = ::std::string>
  ::std::string& set_description(T_Vehicle_description_struct_setter&& description_) {
    description = std::forward<T_Vehicle_description_struct_setter>(description_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.description = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return description;
  }

  const ::std::string* get_name() const& {
    return name_ref() ? std::addressof(name) : nullptr;
  }

  ::std::string* get_name() & {
    return name_ref() ? std::addressof(name) : nullptr;
  }
  ::std::string* get_name() && = delete;

  template <typename T_Vehicle_name_struct_setter = ::std::string>
  ::std::string& set_name(T_Vehicle_name_struct_setter&& name_) {
    name = std::forward<T_Vehicle_name_struct_setter>(name_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.name = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return name;
  }

  const bool* get_hasAC() const& {
    return hasAC_ref() ? std::addressof(hasAC) : nullptr;
  }

  bool* get_hasAC() & {
    return hasAC_ref() ? std::addressof(hasAC) : nullptr;
  }
  bool* get_hasAC() && = delete;

  bool& set_hasAC(bool hasAC_) {
    hasAC = hasAC_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.hasAC = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return hasAC;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Vehicle >;
};

void swap(Vehicle& a, Vehicle& b);

template <class Protocol_>
uint32_t Vehicle::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Person final : private apache::thrift::detail::st::ComparisonOperators<Person> {
 public:

  Person();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Person(apache::thrift::FragileConstructor,  ::cpp2::PersonID id__arg, ::std::string name__arg, int16_t age__arg, ::std::string address__arg,  ::cpp2::Color favoriteColor__arg, ::std::set< ::cpp2::PersonID> friends__arg,  ::cpp2::PersonID bestFriend__arg, ::std::map< ::cpp2::Animal, ::std::string> petNames__arg,  ::cpp2::Animal afraidOfAnimal__arg, ::std::vector< ::cpp2::Vehicle> vehicles__arg);

  Person(Person&&) = default;

  Person(const Person&) = default;

  Person& operator=(Person&&) = default;

  Person& operator=(const Person&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();

  ~Person();

 public:
   ::cpp2::PersonID id;
 public:
  ::std::string name;
 private:
  int16_t age;
 private:
  ::std::string address;
 private:
   ::cpp2::Color favoriteColor;
 private:
  ::std::set< ::cpp2::PersonID> friends;
 private:
   ::cpp2::PersonID bestFriend;
 private:
  ::std::map< ::cpp2::Animal, ::std::string> petNames;
 private:
   ::cpp2::Animal afraidOfAnimal;
 private:
  ::std::vector< ::cpp2::Vehicle> vehicles;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool id;
    bool name;
    bool age;
    bool address;
    bool favoriteColor;
    bool friends;
    bool bestFriend;
    bool petNames;
    bool afraidOfAnimal;
    bool vehicles;
  } __isset = {};
  bool operator==(const Person& rhs) const;
  bool operator<(const Person& rhs) const;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->id, __isset.id};
  }

  template <typename..., typename T =  ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T =  ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->id, __isset.id};
  }

  template <typename..., typename T =  ::cpp2::PersonID>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {std::move(this->id), __isset.id};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> name_ref() const& {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> name_ref() const&& {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> name_ref() & {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> name_ref() && {
    return {std::move(this->name), __isset.name};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int16_t&> age_ref() const& {
    return {age, __isset.age};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const int16_t&&> age_ref() const&& {
    return {std::move(age), __isset.age};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int16_t&> age_ref() & {
    return {age, __isset.age};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<int16_t&&> age_ref() && {
    return {std::move(age), __isset.age};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&> address_ref() const& {
    return {address, __isset.address};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::string&&> address_ref() const&& {
    return {std::move(address), __isset.address};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&> address_ref() & {
    return {address, __isset.address};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::string&&> address_ref() && {
    return {std::move(address), __isset.address};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Color&> favoriteColor_ref() const& {
    return {favoriteColor, __isset.favoriteColor};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Color&&> favoriteColor_ref() const&& {
    return {std::move(favoriteColor), __isset.favoriteColor};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Color&> favoriteColor_ref() & {
    return {favoriteColor, __isset.favoriteColor};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Color&&> favoriteColor_ref() && {
    return {std::move(favoriteColor), __isset.favoriteColor};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::set< ::cpp2::PersonID>&> friends_ref() const& {
    return {friends, __isset.friends};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::set< ::cpp2::PersonID>&&> friends_ref() const&& {
    return {std::move(friends), __isset.friends};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::set< ::cpp2::PersonID>&> friends_ref() & {
    return {friends, __isset.friends};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::set< ::cpp2::PersonID>&&> friends_ref() && {
    return {std::move(friends), __isset.friends};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::PersonID&> bestFriend_ref() const& {
    return {bestFriend, __isset.bestFriend};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::PersonID&&> bestFriend_ref() const&& {
    return {std::move(bestFriend), __isset.bestFriend};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::PersonID&> bestFriend_ref() & {
    return {bestFriend, __isset.bestFriend};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::PersonID&&> bestFriend_ref() && {
    return {std::move(bestFriend), __isset.bestFriend};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::map< ::cpp2::Animal, ::std::string>&> petNames_ref() const& {
    return {petNames, __isset.petNames};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::map< ::cpp2::Animal, ::std::string>&&> petNames_ref() const&& {
    return {std::move(petNames), __isset.petNames};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::map< ::cpp2::Animal, ::std::string>&> petNames_ref() & {
    return {petNames, __isset.petNames};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::map< ::cpp2::Animal, ::std::string>&&> petNames_ref() && {
    return {std::move(petNames), __isset.petNames};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Animal&> afraidOfAnimal_ref() const& {
    return {afraidOfAnimal, __isset.afraidOfAnimal};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Animal&&> afraidOfAnimal_ref() const&& {
    return {std::move(afraidOfAnimal), __isset.afraidOfAnimal};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Animal&> afraidOfAnimal_ref() & {
    return {afraidOfAnimal, __isset.afraidOfAnimal};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Animal&&> afraidOfAnimal_ref() && {
    return {std::move(afraidOfAnimal), __isset.afraidOfAnimal};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::vector< ::cpp2::Vehicle>&> vehicles_ref() const& {
    return {vehicles, __isset.vehicles};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const ::std::vector< ::cpp2::Vehicle>&&> vehicles_ref() const&& {
    return {std::move(vehicles), __isset.vehicles};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::vector< ::cpp2::Vehicle>&> vehicles_ref() & {
    return {vehicles, __isset.vehicles};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<::std::vector< ::cpp2::Vehicle>&&> vehicles_ref() && {
    return {std::move(vehicles), __isset.vehicles};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

   ::cpp2::PersonID get_id() const {
    return id;
  }

   ::cpp2::PersonID& set_id( ::cpp2::PersonID id_) {
    id = id_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.id = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return id;
  }

  const ::std::string& get_name() const& {
    return name;
  }

  ::std::string get_name() && {
    return std::move(name);
  }

  template <typename T_Person_name_struct_setter = ::std::string>
  ::std::string& set_name(T_Person_name_struct_setter&& name_) {
    name = std::forward<T_Person_name_struct_setter>(name_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.name = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return name;
  }

  const int16_t* get_age() const& {
    return age_ref() ? std::addressof(age) : nullptr;
  }

  int16_t* get_age() & {
    return age_ref() ? std::addressof(age) : nullptr;
  }
  int16_t* get_age() && = delete;

  int16_t& set_age(int16_t age_) {
    age = age_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.age = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return age;
  }

  const ::std::string* get_address() const& {
    return address_ref() ? std::addressof(address) : nullptr;
  }

  ::std::string* get_address() & {
    return address_ref() ? std::addressof(address) : nullptr;
  }
  ::std::string* get_address() && = delete;

  template <typename T_Person_address_struct_setter = ::std::string>
  ::std::string& set_address(T_Person_address_struct_setter&& address_) {
    address = std::forward<T_Person_address_struct_setter>(address_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.address = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return address;
  }
  const  ::cpp2::Color* get_favoriteColor() const&;
   ::cpp2::Color* get_favoriteColor() &;
   ::cpp2::Color* get_favoriteColor() && = delete;

  template <typename T_Person_favoriteColor_struct_setter =  ::cpp2::Color>
   ::cpp2::Color& set_favoriteColor(T_Person_favoriteColor_struct_setter&& favoriteColor_) {
    favoriteColor = std::forward<T_Person_favoriteColor_struct_setter>(favoriteColor_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.favoriteColor = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return favoriteColor;
  }
  const ::std::set< ::cpp2::PersonID>* get_friends() const&;
  ::std::set< ::cpp2::PersonID>* get_friends() &;
  ::std::set< ::cpp2::PersonID>* get_friends() && = delete;

  template <typename T_Person_friends_struct_setter = ::std::set< ::cpp2::PersonID>>
  ::std::set< ::cpp2::PersonID>& set_friends(T_Person_friends_struct_setter&& friends_) {
    friends = std::forward<T_Person_friends_struct_setter>(friends_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.friends = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return friends;
  }

  const  ::cpp2::PersonID* get_bestFriend() const& {
    return bestFriend_ref() ? std::addressof(bestFriend) : nullptr;
  }

   ::cpp2::PersonID* get_bestFriend() & {
    return bestFriend_ref() ? std::addressof(bestFriend) : nullptr;
  }
   ::cpp2::PersonID* get_bestFriend() && = delete;

   ::cpp2::PersonID& set_bestFriend( ::cpp2::PersonID bestFriend_) {
    bestFriend = bestFriend_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.bestFriend = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return bestFriend;
  }
  const ::std::map< ::cpp2::Animal, ::std::string>* get_petNames() const&;
  ::std::map< ::cpp2::Animal, ::std::string>* get_petNames() &;
  ::std::map< ::cpp2::Animal, ::std::string>* get_petNames() && = delete;

  template <typename T_Person_petNames_struct_setter = ::std::map< ::cpp2::Animal, ::std::string>>
  ::std::map< ::cpp2::Animal, ::std::string>& set_petNames(T_Person_petNames_struct_setter&& petNames_) {
    petNames = std::forward<T_Person_petNames_struct_setter>(petNames_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.petNames = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return petNames;
  }

  const  ::cpp2::Animal* get_afraidOfAnimal() const& {
    return afraidOfAnimal_ref() ? std::addressof(afraidOfAnimal) : nullptr;
  }

   ::cpp2::Animal* get_afraidOfAnimal() & {
    return afraidOfAnimal_ref() ? std::addressof(afraidOfAnimal) : nullptr;
  }
   ::cpp2::Animal* get_afraidOfAnimal() && = delete;

   ::cpp2::Animal& set_afraidOfAnimal( ::cpp2::Animal afraidOfAnimal_) {
    afraidOfAnimal = afraidOfAnimal_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.afraidOfAnimal = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return afraidOfAnimal;
  }
  const ::std::vector< ::cpp2::Vehicle>* get_vehicles() const&;
  ::std::vector< ::cpp2::Vehicle>* get_vehicles() &;
  ::std::vector< ::cpp2::Vehicle>* get_vehicles() && = delete;

  template <typename T_Person_vehicles_struct_setter = ::std::vector< ::cpp2::Vehicle>>
  ::std::vector< ::cpp2::Vehicle>& set_vehicles(T_Person_vehicles_struct_setter&& vehicles_) {
    vehicles = std::forward<T_Person_vehicles_struct_setter>(vehicles_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.vehicles = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return vehicles;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Person >;
};

void swap(Person& a, Person& b);

template <class Protocol_>
uint32_t Person::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
