/* -*- mode: C++; c-basic-offset: 4; tab-width: 4 -*-
 *
 * Copyright (c) 2004-2005 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */


#ifndef __DYLDLIBSYSTEMHELPERS__
#define __DYLDLIBSYSTEMHELPERS__

#include <stdint.h>


namespace dyld {
	//
	// This file contains the synchronization utilities used by dyld to be thread safe.
	// This struct is implemented in in libSystem (where pthreads is available)
	// and passed to dyld to use.
	//
	struct ThreadingHelpers
	{
		uintptr_t	version;
		void		(*lockForReading)();
		void		(*unlockForReading)();
		char*		(*getThreadBufferFor_dlerror)(uint32_t sizeRequired);
	};
};





#endif // __DYLDLIBSYSTEMHELPERS__

