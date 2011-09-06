/* $asf_license$ */

#ifndef _SAM3N1C_PIO_
#define _SAM3N1C_PIO_

#define PIO_PA0           (1u << 0)  /**< \brief Pin Controlled by PA0 */
#define PIO_PA1           (1u << 1)  /**< \brief Pin Controlled by PA1 */
#define PIO_PA2           (1u << 2)  /**< \brief Pin Controlled by PA2 */
#define PIO_PA3           (1u << 3)  /**< \brief Pin Controlled by PA3 */
#define PIO_PA4           (1u << 4)  /**< \brief Pin Controlled by PA4 */
#define PIO_PA5           (1u << 5)  /**< \brief Pin Controlled by PA5 */
#define PIO_PA6           (1u << 6)  /**< \brief Pin Controlled by PA6 */
#define PIO_PA7           (1u << 7)  /**< \brief Pin Controlled by PA7 */
#define PIO_PA8           (1u << 8)  /**< \brief Pin Controlled by PA8 */
#define PIO_PA9           (1u << 9)  /**< \brief Pin Controlled by PA9 */
#define PIO_PA10          (1u << 10) /**< \brief Pin Controlled by PA10 */
#define PIO_PA11          (1u << 11) /**< \brief Pin Controlled by PA11 */
#define PIO_PA12          (1u << 12) /**< \brief Pin Controlled by PA12 */
#define PIO_PA13          (1u << 13) /**< \brief Pin Controlled by PA13 */
#define PIO_PA14          (1u << 14) /**< \brief Pin Controlled by PA14 */
#define PIO_PA15          (1u << 15) /**< \brief Pin Controlled by PA15 */
#define PIO_PA16          (1u << 16) /**< \brief Pin Controlled by PA16 */
#define PIO_PA17          (1u << 17) /**< \brief Pin Controlled by PA17 */
#define PIO_PA18          (1u << 18) /**< \brief Pin Controlled by PA18 */
#define PIO_PA19          (1u << 19) /**< \brief Pin Controlled by PA19 */
#define PIO_PA20          (1u << 20) /**< \brief Pin Controlled by PA20 */
#define PIO_PA21          (1u << 21) /**< \brief Pin Controlled by PA21 */
#define PIO_PA22          (1u << 22) /**< \brief Pin Controlled by PA22 */
#define PIO_PA23          (1u << 23) /**< \brief Pin Controlled by PA23 */
#define PIO_PA24          (1u << 24) /**< \brief Pin Controlled by PA24 */
#define PIO_PA25          (1u << 25) /**< \brief Pin Controlled by PA25 */
#define PIO_PA26          (1u << 26) /**< \brief Pin Controlled by PA26 */
#define PIO_PA27          (1u << 27) /**< \brief Pin Controlled by PA27 */
#define PIO_PA28          (1u << 28) /**< \brief Pin Controlled by PA28 */
#define PIO_PA29          (1u << 29) /**< \brief Pin Controlled by PA29 */
#define PIO_PA30          (1u << 30) /**< \brief Pin Controlled by PA30 */
#define PIO_PA31          (1u << 31) /**< \brief Pin Controlled by PA31 */
#define PIO_PB0           (1u << 0)  /**< \brief Pin Controlled by PB0 */
#define PIO_PB1           (1u << 1)  /**< \brief Pin Controlled by PB1 */
#define PIO_PB2           (1u << 2)  /**< \brief Pin Controlled by PB2 */
#define PIO_PB3           (1u << 3)  /**< \brief Pin Controlled by PB3 */
#define PIO_PB4           (1u << 4)  /**< \brief Pin Controlled by PB4 */
#define PIO_PB5           (1u << 5)  /**< \brief Pin Controlled by PB5 */
#define PIO_PB6           (1u << 6)  /**< \brief Pin Controlled by PB6 */
#define PIO_PB7           (1u << 7)  /**< \brief Pin Controlled by PB7 */
#define PIO_PB8           (1u << 8)  /**< \brief Pin Controlled by PB8 */
#define PIO_PB9           (1u << 9)  /**< \brief Pin Controlled by PB9 */
#define PIO_PB10          (1u << 10) /**< \brief Pin Controlled by PB10 */
#define PIO_PB11          (1u << 11) /**< \brief Pin Controlled by PB11 */
#define PIO_PB12          (1u << 12) /**< \brief Pin Controlled by PB12 */
#define PIO_PB13          (1u << 13) /**< \brief Pin Controlled by PB13 */
#define PIO_PB14          (1u << 14) /**< \brief Pin Controlled by PB14 */
#define PIO_PC0           (1u << 0)  /**< \brief Pin Controlled by PC0 */
#define PIO_PC1           (1u << 1)  /**< \brief Pin Controlled by PC1 */
#define PIO_PC2           (1u << 2)  /**< \brief Pin Controlled by PC2 */
#define PIO_PC3           (1u << 3)  /**< \brief Pin Controlled by PC3 */
#define PIO_PC4           (1u << 4)  /**< \brief Pin Controlled by PC4 */
#define PIO_PC5           (1u << 5)  /**< \brief Pin Controlled by PC5 */
#define PIO_PC6           (1u << 6)  /**< \brief Pin Controlled by PC6 */
#define PIO_PC7           (1u << 7)  /**< \brief Pin Controlled by PC7 */
#define PIO_PC8           (1u << 8)  /**< \brief Pin Controlled by PC8 */
#define PIO_PC9           (1u << 9)  /**< \brief Pin Controlled by PC9 */
#define PIO_PC10          (1u << 10) /**< \brief Pin Controlled by PC10 */
#define PIO_PC11          (1u << 11) /**< \brief Pin Controlled by PC11 */
#define PIO_PC12          (1u << 12) /**< \brief Pin Controlled by PC12 */
#define PIO_PC13          (1u << 13) /**< \brief Pin Controlled by PC13 */
#define PIO_PC14          (1u << 14) /**< \brief Pin Controlled by PC14 */
#define PIO_PC15          (1u << 15) /**< \brief Pin Controlled by PC15 */
#define PIO_PC16          (1u << 16) /**< \brief Pin Controlled by PC16 */
#define PIO_PC17          (1u << 17) /**< \brief Pin Controlled by PC17 */
#define PIO_PC18          (1u << 18) /**< \brief Pin Controlled by PC18 */
#define PIO_PC19          (1u << 19) /**< \brief Pin Controlled by PC19 */
#define PIO_PC20          (1u << 20) /**< \brief Pin Controlled by PC20 */
#define PIO_PC21          (1u << 21) /**< \brief Pin Controlled by PC21 */
#define PIO_PC22          (1u << 22) /**< \brief Pin Controlled by PC22 */
#define PIO_PC23          (1u << 23) /**< \brief Pin Controlled by PC23 */
#define PIO_PC24          (1u << 24) /**< \brief Pin Controlled by PC24 */
#define PIO_PC25          (1u << 25) /**< \brief Pin Controlled by PC25 */
#define PIO_PC26          (1u << 26) /**< \brief Pin Controlled by PC26 */
#define PIO_PC27          (1u << 27) /**< \brief Pin Controlled by PC27 */
#define PIO_PC28          (1u << 28) /**< \brief Pin Controlled by PC28 */
#define PIO_PC29          (1u << 29) /**< \brief Pin Controlled by PC29 */
#define PIO_PC30          (1u << 30) /**< \brief Pin Controlled by PC30 */
#define PIO_PC31          (1u << 31) /**< \brief Pin Controlled by PC31 */
/* ========== Pio definition for ADC peripheral ========== */
#define PIO_PA17X1_AD0    (1u << 17) /**< \brief Adc signal: AD0 */
#define PIO_PA18X1_AD1    (1u << 18) /**< \brief Adc signal: AD1 */
#define PIO_PC13X1_AD10   (1u << 13) /**< \brief Adc signal: AD10 */
#define PIO_PC15X1_AD11   (1u << 15) /**< \brief Adc signal: AD11 */
#define PIO_PC12X1_AD12   (1u << 12) /**< \brief Adc signal: AD12 */
#define PIO_PC29X1_AD13   (1u << 29) /**< \brief Adc signal: AD13 */
#define PIO_PC30X1_AD14   (1u << 30) /**< \brief Adc signal: AD14 */
#define PIO_PC31X1_AD15   (1u << 31) /**< \brief Adc signal: AD15 */
#define PIO_PA19X1_AD2    (1u << 19) /**< \brief Adc signal: AD2/WKUP9 */
#define PIO_PA19X1_WKUP9  (1u << 19) /**< \brief Adc signal: AD2/WKUP9 */
#define PIO_PA20X1_AD3    (1u << 20) /**< \brief Adc signal: AD3/WKUP10 */
#define PIO_PA20X1_WKUP10 (1u << 20) /**< \brief Adc signal: AD3/WKUP10 */
#define PIO_PB0X1_AD4     (1u << 0)  /**< \brief Adc signal: AD4 */
#define PIO_PB1X1_AD5     (1u << 1)  /**< \brief Adc signal: AD5 */
#define PIO_PB2X1_AD6     (1u << 2)  /**< \brief Adc signal: AD6/WKUP12 */
#define PIO_PB2X1_WKUP12  (1u << 2)  /**< \brief Adc signal: AD6/WKUP12 */
#define PIO_PB3X1_AD7     (1u << 3)  /**< \brief Adc signal: AD7 */
#define PIO_PA21X1_AD8    (1u << 21) /**< \brief Adc signal: AD8 */
#define PIO_PA22X1_AD9    (1u << 22) /**< \brief Adc signal: AD9 */
#define PIO_PA8B_ADTRG    (1u << 8)  /**< \brief Adc signal: ADTRG */
/* ========== Pio definition for DACC peripheral ========== */
#define PIO_PB13X1_DAC0   (1u << 13) /**< \brief Dacc signal: DAC0 */
#define PIO_PA2C_DATRG    (1u << 2)  /**< \brief Dacc signal: DATRG */
/* ========== Pio definition for PMC peripheral ========== */
#define PIO_PA6B_PCK0     (1u << 6)  /**< \brief Pmc signal: PCK0 */
#define PIO_PB13B_PCK0    (1u << 13) /**< \brief Pmc signal: PCK0 */
#define PIO_PC16B_PCK0    (1u << 16) /**< \brief Pmc signal: PCK0 */
#define PIO_PA17B_PCK1    (1u << 17) /**< \brief Pmc signal: PCK1 */
#define PIO_PA21B_PCK1    (1u << 21) /**< \brief Pmc signal: PCK1 */
#define PIO_PC17B_PCK1    (1u << 17) /**< \brief Pmc signal: PCK1 */
#define PIO_PA18B_PCK2    (1u << 18) /**< \brief Pmc signal: PCK2 */
#define PIO_PA31B_PCK2    (1u << 31) /**< \brief Pmc signal: PCK2 */
#define PIO_PB3B_PCK2     (1u << 3)  /**< \brief Pmc signal: PCK2 */
#define PIO_PC14B_PCK2    (1u << 14) /**< \brief Pmc signal: PCK2 */
/* ========== Pio definition for PWM peripheral ========== */
#define PIO_PA0A_PWM0     (1u << 0)  /**< \brief Pwm signal: PWM0 */
#define PIO_PA11B_PWM0    (1u << 11) /**< \brief Pwm signal: PWM0 */
#define PIO_PA23B_PWM0    (1u << 23) /**< \brief Pwm signal: PWM0 */
#define PIO_PB0A_PWM0     (1u << 0)  /**< \brief Pwm signal: PWM0 */
#define PIO_PC8B_PWM0     (1u << 8)  /**< \brief Pwm signal: PWM0 */
#define PIO_PC18B_PWM0    (1u << 18) /**< \brief Pwm signal: PWM0 */
#define PIO_PC22B_PWM0    (1u << 22) /**< \brief Pwm signal: PWM0 */
#define PIO_PA1A_PWM1     (1u << 1)  /**< \brief Pwm signal: PWM1 */
#define PIO_PA12B_PWM1    (1u << 12) /**< \brief Pwm signal: PWM1 */
#define PIO_PA24B_PWM1    (1u << 24) /**< \brief Pwm signal: PWM1 */
#define PIO_PB1A_PWM1     (1u << 1)  /**< \brief Pwm signal: PWM1 */
#define PIO_PC9B_PWM1     (1u << 9)  /**< \brief Pwm signal: PWM1 */
#define PIO_PC19B_PWM1    (1u << 19) /**< \brief Pwm signal: PWM1 */
#define PIO_PA2A_PWM2     (1u << 2)  /**< \brief Pwm signal: PWM2 */
#define PIO_PA13B_PWM2    (1u << 13) /**< \brief Pwm signal: PWM2 */
#define PIO_PA25B_PWM2    (1u << 25) /**< \brief Pwm signal: PWM2 */
#define PIO_PB4B_PWM2     (1u << 4)  /**< \brief Pwm signal: PWM2 */
#define PIO_PC10B_PWM2    (1u << 10) /**< \brief Pwm signal: PWM2 */
#define PIO_PC20B_PWM2    (1u << 20) /**< \brief Pwm signal: PWM2 */
#define PIO_PA7B_PWM3     (1u << 7)  /**< \brief Pwm signal: PWM3 */
#define PIO_PA14B_PWM3    (1u << 14) /**< \brief Pwm signal: PWM3 */
#define PIO_PB14B_PWM3    (1u << 14) /**< \brief Pwm signal: PWM3 */
#define PIO_PC11B_PWM3    (1u << 11) /**< \brief Pwm signal: PWM3 */
#define PIO_PC21B_PWM3    (1u << 21) /**< \brief Pwm signal: PWM3 */
/* ========== Pio definition for SPI peripheral ========== */
#define PIO_PA12A_MISO    (1u << 12) /**< \brief Spi signal: MISO */
#define PIO_PA13A_MOSI    (1u << 13) /**< \brief Spi signal: MOSI */
#define PIO_PA11A_NPCS0   (1u << 11) /**< \brief Spi signal: NPCS0 */
#define PIO_PA9B_NPCS1    (1u << 9)  /**< \brief Spi signal: NPCS1 */
#define PIO_PA31A_NPCS1   (1u << 31) /**< \brief Spi signal: NPCS1 */
#define PIO_PB14A_NPCS1   (1u << 14) /**< \brief Spi signal: NPCS1 */
#define PIO_PC4B_NPCS1    (1u << 4)  /**< \brief Spi signal: NPCS1 */
#define PIO_PA10B_NPCS2   (1u << 10) /**< \brief Spi signal: NPCS2 */
#define PIO_PA30B_NPCS2   (1u << 30) /**< \brief Spi signal: NPCS2 */
#define PIO_PB2B_NPCS2    (1u << 2)  /**< \brief Spi signal: NPCS2 */
#define PIO_PC7B_NPCS2    (1u << 7)  /**< \brief Spi signal: NPCS2 */
#define PIO_PA3B_NPCS3    (1u << 3)  /**< \brief Spi signal: NPCS3 */
#define PIO_PA5B_NPCS3    (1u << 5)  /**< \brief Spi signal: NPCS3 */
#define PIO_PA22B_NPCS3   (1u << 22) /**< \brief Spi signal: NPCS3 */
#define PIO_PA14A_SPCK    (1u << 14) /**< \brief Spi signal: SPCK */
/* ========== Pio definition for TC0 peripheral ========== */
#define PIO_PA4B_TCLK0    (1u << 4)  /**< \brief Tc0 signal: TCLK0 */
#define PIO_PA28B_TCLK1   (1u << 28) /**< \brief Tc0 signal: TCLK1 */
#define PIO_PA29B_TCLK2   (1u << 29) /**< \brief Tc0 signal: TCLK2 */
#define PIO_PA0B_TIOA0    (1u << 0)  /**< \brief Tc0 signal: TIOA0 */
#define PIO_PA15B_TIOA1   (1u << 15) /**< \brief Tc0 signal: TIOA1 */
#define PIO_PA26B_TIOA2   (1u << 26) /**< \brief Tc0 signal: TIOA2 */
#define PIO_PA1B_TIOB0    (1u << 1)  /**< \brief Tc0 signal: TIOB0 */
#define PIO_PA16B_TIOB1   (1u << 16) /**< \brief Tc0 signal: TIOB1 */
#define PIO_PA27B_TIOB2   (1u << 27) /**< \brief Tc0 signal: TIOB2 */
/* ========== Pio definition for TC1 peripheral ========== */
#define PIO_PC25B_TCLK3   (1u << 25) /**< \brief Tc1 signal: TCLK3 */
#define PIO_PC28B_TCLK4   (1u << 28) /**< \brief Tc1 signal: TCLK4 */
#define PIO_PC31B_TCLK5   (1u << 31) /**< \brief Tc1 signal: TCLK5 */
#define PIO_PC23B_TIOA3   (1u << 23) /**< \brief Tc1 signal: TIOA3 */
#define PIO_PC26B_TIOA4   (1u << 26) /**< \brief Tc1 signal: TIOA4 */
#define PIO_PC29B_TIOA5   (1u << 29) /**< \brief Tc1 signal: TIOA5 */
#define PIO_PC24B_TIOB3   (1u << 24) /**< \brief Tc1 signal: TIOB3 */
#define PIO_PC27B_TIOB4   (1u << 27) /**< \brief Tc1 signal: TIOB4 */
#define PIO_PC30B_TIOB5   (1u << 30) /**< \brief Tc1 signal: TIOB5 */
/* ========== Pio definition for TWI0 peripheral ========== */
#define PIO_PA4A_TWCK0    (1u << 4)  /**< \brief Twi0 signal: TWCK0 */
#define PIO_PA3A_TWD0     (1u << 3)  /**< \brief Twi0 signal: TWD0 */
/* ========== Pio definition for TWI1 peripheral ========== */
#define PIO_PB5A_TWCK1    (1u << 5)  /**< \brief Twi1 signal: TWCK1 */
#define PIO_PB4A_TWD1     (1u << 4)  /**< \brief Twi1 signal: TWD1 */
/* ========== Pio definition for UART0 peripheral ========== */
#define PIO_PA9A_URXD0    (1u << 9)  /**< \brief Uart0 signal: URXD0 */
#define PIO_PA10A_UTXD0   (1u << 10) /**< \brief Uart0 signal: UTXD0 */
/* ========== Pio definition for UART1 peripheral ========== */
#define PIO_PB2A_URXD1    (1u << 2)  /**< \brief Uart1 signal: URXD1 */
#define PIO_PB3A_UTXD1    (1u << 3)  /**< \brief Uart1 signal: UTXD1 */
/* ========== Pio definition for USART0 peripheral ========== */
#define PIO_PA8A_CTS0     (1u << 8)  /**< \brief Usart0 signal: CTS0 */
#define PIO_PA7A_RTS0     (1u << 7)  /**< \brief Usart0 signal: RTS0 */
#define PIO_PA5A_RXD0     (1u << 5)  /**< \brief Usart0 signal: RXD0 */
#define PIO_PA2B_SCK0     (1u << 2)  /**< \brief Usart0 signal: SCK0 */
#define PIO_PA6A_TXD0     (1u << 6)  /**< \brief Usart0 signal: TXD0 */
/* ========== Pio definition for USART1 peripheral ========== */
#define PIO_PA25A_CTS1    (1u << 25) /**< \brief Usart1 signal: CTS1 */
#define PIO_PA24A_RTS1    (1u << 24) /**< \brief Usart1 signal: RTS1 */
#define PIO_PA21A_RXD1    (1u << 21) /**< \brief Usart1 signal: RXD1 */
#define PIO_PA23A_SCK1    (1u << 23) /**< \brief Usart1 signal: SCK1 */
#define PIO_PA22A_TXD1    (1u << 22) /**< \brief Usart1 signal: TXD1 */
/* ========== Pio indexes ========== */
#define PIO_PA0_IDX       0
#define PIO_PA1_IDX       1
#define PIO_PA2_IDX       2
#define PIO_PA3_IDX       3
#define PIO_PA4_IDX       4
#define PIO_PA5_IDX       5
#define PIO_PA6_IDX       6
#define PIO_PA7_IDX       7
#define PIO_PA8_IDX       8
#define PIO_PA9_IDX       9
#define PIO_PA10_IDX      10
#define PIO_PA11_IDX      11
#define PIO_PA12_IDX      12
#define PIO_PA13_IDX      13
#define PIO_PA14_IDX      14
#define PIO_PA15_IDX      15
#define PIO_PA16_IDX      16
#define PIO_PA17_IDX      17
#define PIO_PA18_IDX      18
#define PIO_PA19_IDX      19
#define PIO_PA20_IDX      20
#define PIO_PA21_IDX      21
#define PIO_PA22_IDX      22
#define PIO_PA23_IDX      23
#define PIO_PA24_IDX      24
#define PIO_PA25_IDX      25
#define PIO_PA26_IDX      26
#define PIO_PA27_IDX      27
#define PIO_PA28_IDX      28
#define PIO_PA29_IDX      29
#define PIO_PA30_IDX      30
#define PIO_PA31_IDX      31
#define PIO_PB0_IDX       32
#define PIO_PB1_IDX       33
#define PIO_PB2_IDX       34
#define PIO_PB3_IDX       35
#define PIO_PB4_IDX       36
#define PIO_PB5_IDX       37
#define PIO_PB6_IDX       38
#define PIO_PB7_IDX       39
#define PIO_PB8_IDX       40
#define PIO_PB9_IDX       41
#define PIO_PB10_IDX      42
#define PIO_PB11_IDX      43
#define PIO_PB12_IDX      44
#define PIO_PB13_IDX      45
#define PIO_PB14_IDX      46
#define PIO_PC0_IDX       64
#define PIO_PC1_IDX       65
#define PIO_PC2_IDX       66
#define PIO_PC3_IDX       67
#define PIO_PC4_IDX       68
#define PIO_PC5_IDX       69
#define PIO_PC6_IDX       70
#define PIO_PC7_IDX       71
#define PIO_PC8_IDX       72
#define PIO_PC9_IDX       73
#define PIO_PC10_IDX      74
#define PIO_PC11_IDX      75
#define PIO_PC12_IDX      76
#define PIO_PC13_IDX      77
#define PIO_PC14_IDX      78
#define PIO_PC15_IDX      79
#define PIO_PC16_IDX      80
#define PIO_PC17_IDX      81
#define PIO_PC18_IDX      82
#define PIO_PC19_IDX      83
#define PIO_PC20_IDX      84
#define PIO_PC21_IDX      85
#define PIO_PC22_IDX      86
#define PIO_PC23_IDX      87
#define PIO_PC24_IDX      88
#define PIO_PC25_IDX      89
#define PIO_PC26_IDX      90
#define PIO_PC27_IDX      91
#define PIO_PC28_IDX      92
#define PIO_PC29_IDX      93
#define PIO_PC30_IDX      94
#define PIO_PC31_IDX      95

#endif /* _SAM3N1C_PIO_ */
