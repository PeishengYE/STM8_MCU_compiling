#ifndef STM8S_H
#define STM8S_H

#define _SFR_(mem_addr)         (*(volatile uint8_t *)(0x5000 + (mem_addr)))

/* Clock */
#define CLK_CCOR                _SFR_(0xC9)
#define CLK_CCOR_CCOEN          0

/* PORT C */
#define PC_ODR                  _SFR_(0x0A)
#define PC_DDR                  _SFR_(0x0C)
#define PC_CR1                  _SFR_(0x0D)
#define PC_CR2                  _SFR_(0x0E)

/* PORT D */
#define PD_ODR                  _SFR_(0x0F)
#define PD_DDR                  _SFR_(0x11)
#define PD_CR1                  _SFR_(0x12)
#define PD_CR2                  _SFR_(0x13)

/* PORT E */
#define PE_ODR                  _SFR_(0x14)
#define PE_DDR                  _SFR_(0x16)
#define PE_CR1                  _SFR_(0x17)
#define PE_CR2                  _SFR_(0x18)

/* SPI */
#define SPI_CR1                 _SFR_(0x200)
#define SPI_CR1_LSBFIRST        7
#define SPI_CR1_SPE             6
#define SPI_CR1_BR2             5
#define SPI_CR1_BR1             4
#define SPI_CR1_BR0             3
#define SPI_CR1_MSTR            2
#define SPI_CR1_CPOL            1
#define SPI_CR1_CPHA            0
#define SPI_CR2                 _SFR_(0x201)
#define SPI_CR2_SSM             1
#define SPI_CR2_SSI             0
#define SPI_SR                  _SFR_(0x203)
#define SPI_SR_TXE              1
#define SPI_SR_RXNE             0
#define SPI_DR                  _SFR_(0x204)

/* I2C */
#define I2C_CR1                 _SFR_(0x210)
#define I2C_CR1_PE              0
#define I2C_CR2                 _SFR_(0x211)
#define I2C_CR2_ACK             2
#define I2C_CR2_STOP            1
#define I2C_CR2_START           0
#define I2C_FREQR               _SFR_(0x212)
#define I2C_FREQR_FREQ2         2
#define I2C_FREQR_FREQ1         1
#define I2C_FREQR_FREQ0         0
#define I2C_OARL                _SFR_(0x213)
#define I2C_OARH                _SFR_(0x214)
#define I2C_OARH_ADDMODE        7
#define I2C_OARH_ADDCONF        6
#define I2C_DR                  _SFR_(0x216)
#define I2C_SR1                 _SFR_(0x217)
#define I2C_SR1_TXE             7
#define I2C_SR1_RXNE            6
#define I2C_SR1_BTF             2
#define I2C_SR1_ADDR            1
#define I2C_SR1_SB              0
#define I2C_SR2                 _SFR_(0x218)
#define I2C_SR3                 _SFR_(0x219)
#define I2C_SR3_BUSY            1
#define I2C_SR3_MSL             0
#define I2C_ITR                 _SFR_(0x21A)
#define I2C_CCRL                _SFR_(0x21B)
#define I2C_CCRH                _SFR_(0x21C)

/* UART */
#define UART_SR                 _SFR_(0x240)
#define UART_SR_TXE             7
#define UART_SR_TC              6
#define UART_SR_RXNE            5
#define UART_DR                 _SFR_(0x241)
#define UART_BRR1               _SFR_(0x242)
#define UART_BRR2               _SFR_(0x243)
#define UART_CR1                _SFR_(0x244)
#define UART_CR2                _SFR_(0x245)
#define UART_CR2_TEN            3
#define UART_CR2_REN            2
#define UART_CR3                _SFR_(0x246)
#define UART_CR4                _SFR_(0x247)
#define UART_CR5                _SFR_(0x248)
#define UART_CR6                _SFR_(0x249)
#define UART_GTR                _SFR_(0x24A)
#define UART_PSCR               _SFR_(0x24B)

/* TIM4 */
#define TIM4_CR1                _SFR_(0x340)
#define TIM4_CR1_ARPE           7
#define TIM4_CR1_URS            2
#define TIM4_CR1_CEN            0
#define TIM4_IER                _SFR_(0x343)
#define TIM4_IER_UIE            0
#define TIM4_SR                 _SFR_(0x344)
#define TIM4_SR_UIF             0
#define TIM4_EGR                _SFR_(0x345)
#define TIM4_CNTR               _SFR_(0x346)
#define TIM4_PSCR               _SFR_(0x347)
#define TIM4_ARR                _SFR_(0x348)

/* Interrupts */
#define TLI_ISR                 0
#define AWU_ISR                 1
#define CLK_ISR                 2
#define EXTI0_ISR               3
#define EXTI1_ISR               4
#define EXTI2_ISR               5
#define EXTI3_ISR               6
#define EXTI4_ISR               7
#define SPI_ISR                 10
#define TIM1_OVF_ISR            11
#define TIM1_CC_ISR             12
#define TIM2_OVF_ISR            13
#define TIM2_CC_ISR             14
#define UART1_TXC_ISR           17
#define UART1_RXC_ISR           18
#define I2C_ISR                 19
#define ADC1_ISR                22
#define TIM4_ISR                23
#define FLASH_ISR               24

#define enable_interrupts()     __asm__("rim");
#define disable_interrupts()    __asm__("sim");

#endif /* STM8S_H */