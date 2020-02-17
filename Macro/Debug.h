#pragma once

#ifdef NDEBUG

#define ASSERT(b)

#else

#define ASSERT(b) Debug::Assert((b), __FILE__, __LINE__)
namespace Debug
{
    void Assert(bool b, const char* file, int line);
}

#endif