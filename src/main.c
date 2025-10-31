/*
 * Copyright (c) Masanori Itoh
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(sodev_canapp, LOG_LEVEL_DBG);
  
#include <zephyr/kernel.h>

#include <zephyr/sys/printk.h>


int main(void)
{
  printf("Hello World! %s\n", CONFIG_BOARD_TARGET);
  return 0;
}
