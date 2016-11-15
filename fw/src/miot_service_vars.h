/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MIOT_SERVICE_VARS_H_
#define CS_FW_SRC_MIOT_SERVICE_VARS_H_

#if MG_ENABLE_CLUBBY && MG_ENABLE_CONFIG_SERVICE

#include "fw/src/miot_init.h"

/*
 * Initialises clubby handlers for /v1/Vars commands
 */
enum miot_init_result miot_service_vars_init(void);

#endif /* MG_ENABLE_CLUBBY && MG_ENABLE_CONFIG_SERVICE */
#endif /* CS_FW_SRC_MIOT_SERVICE_VARS_H_ */