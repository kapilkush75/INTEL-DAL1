/*******************************************************************************
* Copyright 2020 Intel Corporation
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
*******************************************************************************/

#pragma once

#include "oneapi/dal/algo/svm/infer_types.hpp"
#include "oneapi/dal/backend/dispatcher_dp.hpp"

namespace oneapi::dal::svm::backend {

template <typename Float, typename Task, typename Method>
struct infer_kernel_gpu {
    infer_result operator()(const dal::backend::context_gpu& ctx,
                            const descriptor_base& params,
                            const infer_input& input) const;
};

} // namespace oneapi::dal::svm::backend