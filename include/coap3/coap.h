/*
 * coap.h -- main header file for CoAP stack of libcoap
 *
 * Copyright (C) 2010-2012,2015-2023 Olaf Bergmann <bergmann@tzi.org>
 *               2015 Carsten Schoenert <c.schoenert@t-online.de>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * This file is part of the CoAP library libcoap. Please see README for terms
 * of use.
 */

/**
 * @file coap.h
 * @brief Primary include file
 */

#ifndef COAP_H_
#define COAP_H_

/* Define the address where bug reports for libcoap should be sent. */
#define LIBCOAP_PACKAGE_BUGREPORT "@PACKAGE_BUGREPORT@"

/* Define the full name of libcoap. */
#define LIBCOAP_PACKAGE_NAME "@PACKAGE_NAME@"

/* Define the full name and version of libcoap. */
#define LIBCOAP_PACKAGE_STRING "@PACKAGE_STRING@"

/* Define the home page for libcoap. */
#define LIBCOAP_PACKAGE_URL "@PACKAGE_URL@"

/* Define the version of libcoap this file belongs to. */
#define LIBCOAP_PACKAGE_VERSION "@PACKAGE_VERSION@"

/* Define the numeric version identifier for libcoap */
#define LIBCOAP_VERSION (@LIBCOAP_VERSION@U)

#ifdef __cplusplus
extern "C" {
#endif

#include "coap3/libcoap.h"

#include "coap3/coap_forward_decls.h"
#include "coap3/coap_address.h"
#include "coap3/coap_async.h"
#include "coap3/coap_block.h"
#include "coap3/coap_cache.h"
#include "coap3/coap_debug.h"
#include "coap3/coap_dtls.h"
#include "coap3/coap_encode.h"
// #include "coap3/coap_event.h" // 2024-02-07: NOT USED IN SWPE
#include "coap3/coap_io.h"
#include "coap3/coap_mem.h"
#include "coap3/coap_net.h"
#include "coap3/coap_option.h"
// #include "coap3/coap_oscore.h" // 2024-02-07: NOT USED IN SWPE
#include "coap3/coap_pdu.h"
#include "coap3/coap_prng.h"
#include "coap3/coap_resource.h"
#include "coap3/coap_str.h"
#include "coap3/coap_subscribe.h"
// #include "coap3/coap_time.h" // 2024-02-07: NOT USED IN SWPE
#include "coap3/coap_uri.h"
#include "coap3/coap_ws.h"

#ifdef __cplusplus
}
#endif

#endif /* COAP_H_ */