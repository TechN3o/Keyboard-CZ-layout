/*
  Keyboard_cz_CZ.h

  Copyright (c) 2022, Edgar Bonet

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef KEYBOARD_CZ_CZ_h
#define KEYBOARD_CZ_CZ_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Keyboard

// cz_CZ key  - ě, š, č, ř, ž, ý, á, í, é
#define KEY_E_KARON      (136+0x1f)
#define KEY_S_KARON      (136+0x20)
#define KEY_C_KARON      (136+0x21)
#define KEY_R_KARON      (136+0x22)
#define KEY_Z_KARON      (136+0x23)
#define KEY_Y_AKUT      (136+0x24)
#define KEY_A_AKUT      (136+0x25)
#define KEY_I_AKUT      (136+0x26)
#define KEY_E_AKUT      (136+0x27)

#endif
#endif
