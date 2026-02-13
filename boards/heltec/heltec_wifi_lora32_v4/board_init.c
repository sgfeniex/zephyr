/*
 * Copyright (c) 2022 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

/* Board initialization for heltec_wifi_lora32_v4 */
/* VEXT control and OLED reset are now handled by the ssd1306 shield overlay */

static int board_heltec_wifi_lora32_v4_init(void)
{
	/* Board-specific initialization can be added here if needed */
	/* Currently no manual GPIO control needed as shield handles it */
	return 0;
}

SYS_INIT(board_heltec_wifi_lora32_v4_init, PRE_KERNEL_2, CONFIG_GPIO_INIT_PRIORITY);
