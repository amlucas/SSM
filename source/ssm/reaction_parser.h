#pragma once

#include <string>
#include <tuple>
#include <vector>

namespace ssm {

std::tuple<std::vector<std::string>,
           std::vector<int>,
           std::vector<std::string>,
           std::vector<int>,
           std::vector<bool>>
parseReactionString(std::string s);

} // namespace ssm
