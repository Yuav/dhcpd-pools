/*
 * The dhcpd-pools has BSD 2-clause license which also known as "Simplified
 * BSD License" or "FreeBSD License".
 *
 * Copyright 2006- Sami Kerola. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the
 *       distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR AND CONTRIBUTORS OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are
 * those of the authors and should not be interpreted as representing
 * official policies, either expressed or implied, of Sami Kerola.
 */

/*! \file defaults.h
 * \brief Default settings which cannot be changed without recompiling
 * the software.
 */

#ifndef DEFAULTS_H
# define DEFAULTS_H 1

#include "dhcpd-pools.h"

/*! \var MAXLEN
 * \brief Maximum expected line length in dhcpd.conf and dhcpd.leases
 * files.  */
static const size_t MAXLEN = 1024;

/*! \var SHARED_NETWORKS
 * \brief Maximum number of different shared networks in dhcpd.conf file. */
static const unsigned int SHARED_NETWORKS = 8192;

/*! \var prefixes[2][NUM_OF_PREFIX]
 * \brief ISC lease file formats for IPv4 and IPv6.
 *
 * The .indent.pro in use will mess formatting of array below.
 * Please do not commit less readable indentation. */
static const char *prefixes[2][NUM_OF_PREFIX] = {
	[VERSION_4] = {
		       [PREFIX_LEASE]                   = "lease ",
		       [PREFIX_BINDING_STATE_FREE]      = "  binding state free",
		       [PREFIX_BINDING_STATE_ABANDONED] = "  binding state abandoned",
		       [PREFIX_BINDING_STATE_EXPIRED]   = "  binding state expired",
		       [PREFIX_BINDING_STATE_RELEASED]  = "  binding state released",
		       [PREFIX_BINDING_STATE_ACTIVE]    = "  binding state active",
		       [PREFIX_BINDING_STATE_BACKUP]    = "  binding state backup",
		       [PREFIX_HARDWARE_ETHERNET]       = "  hardware ethernet"
	},
	[VERSION_6] = {
		       [PREFIX_LEASE]                   = "  iaaddr ",
		       [PREFIX_BINDING_STATE_FREE]      = "    binding state free",
		       [PREFIX_BINDING_STATE_ABANDONED] = "    binding state abandoned",
		       [PREFIX_BINDING_STATE_EXPIRED]   = "    binding state expired",
		       [PREFIX_BINDING_STATE_RELEASED]  = "    binding state released",
		       [PREFIX_BINDING_STATE_ACTIVE]    = "    binding state active",
		       [PREFIX_BINDING_STATE_BACKUP]    = "    binding state backup",
		       [PREFIX_HARDWARE_ETHERNET]       = "    hardware ethernet"
	}
};

#endif				/* DEFAULTS_H */
