/**
 *  @file 	   I2CDevice.h	 
 *  @brief     Main I2C device functions header
 *  @details   Abstracts bit and byte I2C R/W functions
 *  @author    Jeff Rowberg
 *  @author    Luis Maduro (Port from C++ to C and adapted to PIC18)
 *  @version   1.0
 *  @date      June 2012
 *  @copyright MIT License.
 * 
 * I2CDevice library code is placed under the MIT license
 * Copyright (c) 2011 Jeff Rowberg
 * Copyright (c) 2012 Luis Maduro
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
 * 
 */

#ifndef _I2CDEV_H_
#define _I2CDEV_H_

#include <stm32f10x.h>

extern unsigned char deviceAddressRead;
extern unsigned char deviceAddressWrite;

void I2CStart(void);
void I2CRestart(void);
void I2CStop(void);
void I2CAck(void);
void I2CNotAck(void);
void I2CSendAddress(unsigned char Address, unsigned char I2C_Direction);
void I2CWrite(unsigned char data_out);
unsigned char I2CRead(void);
void I2CDeviceSetDeviceAddress(unsigned char address);
unsigned char I2CDeviceReadBit(unsigned char address,
                               unsigned char _bit);
unsigned char I2CDeviceReadBits(unsigned char address,
                                unsigned char bitStart,
                                unsigned char length);
unsigned char I2CDeviceReadByte(unsigned char address);
void I2CDeviceReadBytes(unsigned char address,
                        unsigned int length,
                        unsigned char *data);
void I2CDeviceWriteBit(unsigned char address,
                       unsigned char _bit,
                       unsigned char value);
void I2CDeviceWriteBits(unsigned char address,
                        unsigned char bitStart,
                        unsigned char length,
                        unsigned char value);
void I2CDeviceWriteByte(unsigned char address,
                        unsigned char value);
void I2CDeviceWriteBytes(unsigned char address,
                         unsigned int length,
                         unsigned char *data);

#endif /* _I2CDEV_H_ */
