/*
 * poly_pkt_fwd.h
 *
 *  Created on: Aug 28, 2015
 *      Author: ruud
 */

#ifndef _POLY_PKT_FWD_H_
#define _POLY_PKT_FWD_H_


/* -------------------------------------------------------------------------- */
/* --- MAC OSX Extensions  -------------------------------------------------- */

struct timespec;

#ifdef __MACH__
#include <AvailabilityMacros.h>

#ifndef MAC_OS_X_VERSION_10_12
#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 0
int clock_gettime(int clk_id, struct timespec* t);
#endif

#endif

double difftimespec(struct timespec end, struct timespec beginning);
int get_concentrator_time(struct timeval *concent_time, struct timeval unix_time);

#endif /* _POLY_PKT_FWD_H_ */
