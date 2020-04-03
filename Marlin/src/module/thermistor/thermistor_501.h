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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// 100k Zonestar thermistor. Adjusted By Hally
const short temptable_501[][2] PROGMEM = {
   { OV(   1), 713 },
   { OV(  14), 260 }, // Top rating 300C
   { OV(  16), 250 },
   { OV(  19), 240 },
   { OV(  23), 230 },
   { OV(  27), 220 },
   { OV(  31), 210 },
   { OV(  37), 200 },
   { OV(  47), 190 },
   { OV(  57), 180 },
   { OV(  68), 170 },
   { OV(  84), 160 },
   { OV( 100), 150 },
   { OV( 128), 140 },
   { OV( 155), 130 },
   { OV( 189), 120 },
   { OV( 230), 110 },
   { OV( 278), 100 },
   { OV( 336),  90 },
   { OV( 402),  80 },
   { OV( 476),  70 },
   { OV( 554),  60 },
   { OV( 635),  50 },
   { OV( 713),  40 },
   { OV( 784),  30 },
   { OV( 846),  25 },
   { OV( 897),  20 },
   { OV( 937),  15 },
   { OV( 966),  10 },
   { OV( 986),   5 },
   { OV(1000),   2 },
   { OV(1010),   0 }
};
