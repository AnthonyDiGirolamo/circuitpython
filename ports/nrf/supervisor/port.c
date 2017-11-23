/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include "supervisor/port.h"
#include "boards/board.h"

#if 0
// ASF 4
#include "atmel_start_pins.h"
#include "hal/include/hal_delay.h"
#include "hal/include/hal_gpio.h"
#include "hal/include/hal_init.h"
#include "hal/include/hal_usb_device.h"
#include "hpl/gclk/hpl_gclk_base.h"
#include "hpl/pm/hpl_pm_base.h"

#include "tick.h"
#endif

#include "common-hal/microcontroller/Pin.h"

safe_mode_t port_init(void) {
    board_init();

#if 0
    // Configure millisecond timer initialization.
    tick_init();

    #ifdef CIRCUITPY_CANARY_WORD
    // Run in safe mode if the canary is corrupt.
    if (_ezero != CIRCUITPY_CANARY_WORD) {
        return HARD_CRASH;
    }
    #endif

    if (board_requests_safe_mode()) {
        return USER_SAFE_MODE;
    }
#endif

    return NO_SAFE_MODE;
}

void reset_port(void) {
    reset_all_pins();
}


void HardFault_Handler(void)
{
#if NRF52
//	static volatile uint32_t reg;
//	static volatile uint32_t reg2;
//	static volatile uint32_t bfar;
//	reg = SCB->HFSR;
//	reg2 = SCB->CFSR;
//	bfar = SCB->BFAR;
//	for (int i = 0; i < 0; i++)
//	{
//		(void)reg;
//		(void)reg2;
//		(void)bfar;
//	}
#endif
}

