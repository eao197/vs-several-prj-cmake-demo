#include "hello.hpp"

namespace core
{

	[[nodiscard]] int calculate(int a, int b) { return a + b;  }

	[[nodiscard]] std::string version() { return "1.0.1"; }

} // namespace core
