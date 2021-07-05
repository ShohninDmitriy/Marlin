/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Pin assignments for the RUMBA32
 *
 * https://aus3d.com.au/rumba32
 * https://github.com/Aus3D/RUMBA32
 */

#define BOARD_INFO_NAME "RUMBA32"

#if EITHER(NO_EEPROM_SELECTED, FLASH_EEPROM_EMULATION)
  #define FLASH_EEPROM_EMULATION
  #define FLASH_EEPROM_LEVELING
  #define FLASH_SECTOR          2
  #define FLASH_UNIT_SIZE     (0x4000U)           // 16KB
  #define FLASH_ADDRESS_START (0x8000000UL + (256) * 1024UL - (FLASH_UNIT_SIZE))
#endif


#include "pins_RUMBA32_common.h"

