#include "chatclientcore.h"

// https://doc.qt.io/qt-5/sharedlibrary.html
// https://cliutils.gitlab.io/modern-cmake/
// https://cmake.org/cmake/help/latest/command/add_subdirectory.html

ChatClientCore::ChatClientCore()
{
}

std::string ChatClientCore::getString()
{
    return std::string("123");
}
