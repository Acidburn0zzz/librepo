/* librepo - A library providing (libcURL like) API to downloading repository
 * Copyright (C) 2012  Tomas Mlcoch
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */

#ifndef LR_RESULT_INTERNAL_H
#define LR_RESULT_INTERNAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "types.h"

struct _lr_Result {
    char            *destdir;
    lr_YumRepoMd    yum_repomd;     /* pointer to struct representingrepomd.xml */
    lr_YumRepo      yum_repo;       /* pointer to struct with info about yum repo */
};

#ifdef __cplusplus
}
#endif

#endif
