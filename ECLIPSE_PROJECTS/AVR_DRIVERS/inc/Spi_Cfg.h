/*
 * Spi_Cfg.h
 *
 *  Created on: Mar 17, 2023
 *      Author: ahmad
 */

#ifndef INC_SPI_CFG_H_
#define INC_SPI_CFG_H_

#define SPI_MASTER          1
#define SPI_SLAVE           2
#define SPI_MSB_FIRST       1
#define SPI_LSB_FIRST       2
#define SPI_IDLE_HIGH       1
#define SPI_IDLE_LOW        2
#define SPI_SAMPLE_SETUP    1
#define SPI_SETUP_SAMPLE    2

/**
 * OPTIONS:
 *      SPI_MASTER
 *      SPI_SLAVE
*/
#define SPI_MOPDE           SPI_MASTER

/**
 * OPTIONS:
 *      SPI_MSB_FIRST
 *      SPI_LSB_FIRST
*/
#define SPI_DATA_ORDER      SPI_MSB_FIRST

/**
 * OPTIONS:
 *      SPI_IDLE_HIGH
 *      SPI_IDLE_LOW
*/
#define SPI_CLK_POLARITY    SPI_IDLE_HIGH

/**
 * OPTIONS:
 *      SPI_SAMPLE_SETUP
 *      SPI_SETUP_SAMPLE
*/
#define SPI_CLK_PHASE       SPI_SAMPLE_SETUP

/**
 * OPTIONS:
 *      2
 *      4
 *      8
 *      16
 *      32
 *      64
 *      128
*/
#define SPI_PRESCALER       8


#endif /* INC_SPI_CFG_H_ */
