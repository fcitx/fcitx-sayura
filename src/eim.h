/***************************************************************************
 *   Copyright (C) 2012~2012 by Yichao Yu                                  *
 *   yyc1992@gmail.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.              *
 ***************************************************************************/

#ifndef EIM_H
#define EIM_H

#include <iconv.h>
#include <fcitx/ime.h>
#include <fcitx/instance.h>
#include <fcitx/candidate.h>

#define _(x) dgettext("fcitx-sayura", x)

#define FCITX_SAYURA_HACK_FORWARD (1 << 0)

typedef struct _FcitxSayura {
    FcitxInstance* owner;
    UT_array buff;
    iconv_t cd;
    /* A hack to pass information between do_input and get_cand_words,
     * in order to get a consistent behavior with ibus version. */
    int hack;
} FcitxSayura;

#endif
