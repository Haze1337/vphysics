/**
 * vim: set ts=4 :
 * =============================================================================
 * SourceMod SDKTools Extension
 * Copyright (C) 2004-2008 AlliedModders LLC.  All rights reserved.
 * =============================================================================
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */

#ifndef _INCLUDE_SDKTOOLS_PHYSNATIVES_H_
#define _INCLUDE_SDKTOOLS_PHYSNATIVES_H_

#define BEGIN_NATIVES(prefix) sp_nativeinfo_t g_##prefix##Natives[] = \
	{

#define STRINGIFY(string) #string
#define ADD_NATIVE(prefix, function) {STRINGIFY(prefix##_##function), function},

#define END_NATIVES() {NULL, NULL} \
	};

#include <vphysics_interface.h>
#include <vphysics/constraints.h>
#include <vphysics/friction.h>

inline IPhysicsObject *GetPhysicsObject(int iEntityIndex);
inline IPhysicsObject *GetPhysicsObject(CBaseEntity *pEntity);

extern sp_nativeinfo_t g_PhysNatives[];

#endif //_INCLUDE_SDKTOOLS_PHYSNATIVES_H_
