#include "iostream"
#include "include/fmt/format.h"
#include "include/fmt/color.h"

using namespace fmt;
using namespace std;
int main(){
    print(fmt::emphasis::bold | fg(fmt::color::red), "Don't {}\n", "panic");
}
