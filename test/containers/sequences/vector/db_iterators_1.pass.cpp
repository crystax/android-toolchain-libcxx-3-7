//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <vector>

// Compare iterators from different containers with == or !=.

#if _LIBCPP_DEBUG2 >= 1

struct X {};

#define _LIBCPP_ASSERT(x, m) ((x) ? (void)0 : std::terminate())

#include <vector>
#include <cassert>
#include <iterator>
#include <exception>
#include <cstdlib>

void f1()
{
    std::exit(0);
}

int main()
{
    std::set_terminate(f1);
    typedef int T;
    typedef std::vector<T> C;
    C c1;
    C c2;
    bool b = c1.begin() != c2.begin();
    assert(false);
}

#else

int main()
{
}

#endif