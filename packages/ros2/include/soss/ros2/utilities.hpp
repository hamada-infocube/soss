/*
 * Copyright (C) 2018 Open Source Robotics Foundation
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
 *
*/

#ifndef SOSS__ROS2__UTILITIES_HPP
#define SOSS__ROS2__UTILITIES_HPP

#include <soss/utilities.hpp>
#include <rosidl_generator_cpp/bounded_vector.hpp>

namespace soss {

//==============================================================================
template<typename ElementType, std::size_t UpperBound, typename Allocator>
struct Convert<
  rosidl_generator_cpp::BoundedVector<ElementType, UpperBound, Allocator>>
    : ContainerConvert<
    ElementType,
    rosidl_generator_cpp::BoundedVector<ElementType, UpperBound, Allocator>,
    std::vector<typename Convert<ElementType>::soss_type>,
    soss::convert_bounded_vector<ElementType, UpperBound> > { };

} // namespace soss

#endif // SOSS__ROS2__UTILITIES_HPP
