/* http://dhcpd-pools.sourceforge.net/
** Copyright 2006- Sami Kerola <kerolasa@iki.fi>
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.   
*/ 

#ifndef DEFAULTS_H
# define DEFAULTS_H 1

/* Maximum line length in dhcpd.conf and dhcpd.leases */
static const int MAXLEN = 1024;

/* Total number of characters in all shared network names */
static const int SHARED_NETWORKS_NAMES = 24576;

/* Maximum number of shared networks */
static const int SHARED_NETWORKS = 1024;

/* Maximum number of ranges */
static const unsigned int RANGES = 65536;

/* Merge sort split size */
static const int MIN_MERGE_SIZE = 8;

#endif /* DEFAULTS_H */
