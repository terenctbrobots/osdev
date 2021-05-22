/*
 * Copyright (C) 2018 bzt (bztsrc@github)
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

#include "uart.h"
#include "lfb.h"

void main()
{
    // set up serial console and linear frame buffer
    uart_init();
    lfb_init();

    // display a pixmap
    lfb_showpicture();

    // for (int x=0; x < 800; x++) 
    // {
    //     write_pixel(x,0,255,0,0);
    // }

    // for (int y=0; y < 500; y++) 
    // {
    //     write_pixel(0,y,0,0,255);
    // }

    // for (int x=0; x < 800; x++) 
    // {
    //     for (int y=0; y < 500; y++) 
    //     {
    //         write_pixel(x,y,0,255,0);
    //     }
    // }  

    draw_line(0,0,800,500,0,255,0);

    // echo everything back
    while(1) {
        uart_send(uart_getc());
    }
}