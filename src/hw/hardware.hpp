/*
 * DXUX - Copyright (C) 2025 NaokiS, spicyjpeg
 * hardware.hpp - Created on 24-04-2025
 * 
 * DXUX is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 * 
 * DXUX is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * DXUX. If not, see <https://www.gnu.org/licenses/>.
*/

// This file is used to include all hardware drives specific to the given platform.
#pragma once

// Windows Targets
#ifdef _WIN32
#include "win32/targetver.h"
#include "win32/system.hpp"

#define SYSTEM_CLASS WinSystem

#endif