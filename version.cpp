/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
**
**  SysStat is a Qt-based interface to system statistics
**
**  Authors:
**       Copyright (c) 2009 - 2012 Kuzma Shapran <Kuzma.Shapran@gmail.com>
**
**  This library is free software; you can redistribute it and/or
**  modify it under the terms of the GNU Lesser General Public
**  License as published by the Free Software Foundation; either
**  version 2.1 of the License, or (at your option) any later version.
**
**  This library is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
**  Lesser General Public License for more details.
**
**  You should have received a copy of the GNU Lesser General Public
**  License along with this library;
**  if not, write to the Free Software Foundation, Inc.,
**  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
** END_COMMON_COPYRIGHT_HEADER */


#include <QtCore/QString>
#include "version_p.hpp"


namespace SysStat {

namespace version {

QString verbose(void)
{
    return QString("%1.%2.%3").arg(MAJOR_VERSION_STR).arg(MINOR_VERSION_STR).arg(PATCH_VERSION_STR);
}

int major_number(void)
{
    return MAJOR_VERSION;
}

int minor_number(void)
{
    return MINOR_VERSION;
}

int patch_number(void)
{
    return PATCH_VERSION;
}

}

}
