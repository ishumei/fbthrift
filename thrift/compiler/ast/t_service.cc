/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/compiler/ast/t_service.h>

#include <thrift/compiler/ast/t_interaction.h>

namespace apache {
namespace thrift {
namespace compiler {

void t_service::set_functions(
    std::vector<std::unique_ptr<t_function>> functions) {
  functions_ = std::move(functions);
  functions_raw_.clear();
  old_functions_raw_.clear();
  for (const auto& func : functions_) {
    assert(func != nullptr);
    functions_raw_.push_back(func.get());
    old_functions_raw_.push_back(func.get());
  }
}

void t_service::add_function(std::unique_ptr<t_function> func) {
  assert(func != nullptr);
  functions_raw_.push_back(func.get());
  old_functions_raw_.push_back(func.get());
  functions_.push_back(std::move(func));
}

bool t_service::is_interaction() const {
  return dynamic_cast<const t_interaction*>(this) != nullptr;
}

bool t_service::is_serial_interaction() const {
  if (const auto* tinteraction = dynamic_cast<const t_interaction*>(this)) {
    return tinteraction->is_serial();
  }
  return false;
}

} // namespace compiler
} // namespace thrift
} // namespace apache
