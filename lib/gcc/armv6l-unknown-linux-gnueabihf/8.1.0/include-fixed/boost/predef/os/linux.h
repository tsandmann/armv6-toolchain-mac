/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/usr/local/armv6l-unknown-linux-gnueabihf/armv6l-unknown-linux-gnueabihf/sysroot/usr/include/boost/predef/os/linux.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_LINUX_H
#define BOOST_PREDEF_OS_LINUX_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_OS_LINUX`]

[@http://en.wikipedia.org/wiki/Linux Linux] operating system.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`linux`] [__predef_detection__]]
    [[`__linux`] [__predef_detection__]]
    ]
 */

#define BOOST_OS_LINUX BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if !defined(BOOST_PREDEF_DETAIL_OS_DETECTED) && ( \
    defined(__linux__) || defined(__linux) \
    )
#   undef BOOST_OS_LINUX
#   define BOOST_OS_LINUX BOOST_VERSION_NUMBER_AVAILABLE
#endif

#if BOOST_OS_LINUX
#   define BOOST_OS_LINUX_AVAILABLE
#   include <boost/predef/detail/os_detected.h>
#endif

#define BOOST_OS_LINUX_NAME "Linux"

#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_LINUX,BOOST_OS_LINUX_NAME)
