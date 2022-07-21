#ifndef __ISE102_H__
#define __ISE102_H__

//#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
//#include "scn/all.h"
#include "fmt/core.h"
#include "fmt/format.h"
#include "fmt/color.h"
// Detect target's platform and set some macros in order to wrap platform
// specific code this library depends on.
// Platform check borrowed from termcolor.hpp, github.com/ikalnytskyi
#if defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
#   define TARGET_POSIX
#elif defined(_WIN32) || defined(_WIN64)
#   define TARGET_WINDOWS
#endif

#if defined(TARGET_POSIX)
// Use conio_linux.h on LINUX (including replit)
#   include "conio_linux.h"
#elif defined(TARGET_WINDOWS)
//Use conio.h on WINDOWS (Visual Studio Community, open the sln file)
# include <conio.h>
#endif
//using namespace std;
using fmt::print;
using fmt::format;
using fmt::emphasis;
using fmt::fg;
using fmt::bg;
//using scn::input;
//using scn::prompt;
using fmt::color;
using namespace std::literals::chrono_literals;


void delay(int duration_ms)
{
  std::this_thread::sleep_for(std::chrono::milliseconds(duration_ms));
}

void clearScreen()
{
#ifdef WINDOWS
  std::system("cls");
  //print("\n windows clearscreen \n");
#else
  // Assume POSIX
  std::system("clear");
  //print("\n linux clearscreen \n");
#endif
}

fmt::text_style makeStyle(fmt::color foreground, fmt::color background,fmt::emphasis emph = fmt::emphasis(0))
{
  return emph | fg(foreground) | bg (background);
}

#endif  // ISE102_H