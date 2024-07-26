


#ifndef MEMMAP_H_
#define MEMMAP_H_

/*************  FSMC register map **************************/

#define  FSMC_BWTR_3    (*(volatile unsigned long *)0x0114)
#define  FSMC_BWTR_4    (*(volatile unsigned long *)0x011C)
#define   FSMC_PCR2    (*(volatile unsigned long *)0x0xA000_0060)

/************* RCC register map and reset values ***********/

#define   RCC_CR    (*(volatile unsigned long *)0x40021000)
#define   RCC_CFGR    (*(volatile unsigned long *)0x40021004)//0x04
#define   RCC_CIR    (*(volatile unsigned long *)0x40021008)//0x08
#define   RCC_APB2RSTR    (*(volatile unsigned long *)0x4002100C)//0x0C
#define   RCC_APB1RSTR    (*(volatile unsigned long *)0x40021010)//0x010
#define   RCC_AHBENR    (*(volatile unsigned long *)0x40021014)//0x14
#define   RCC_APB2ENR    (*(volatile unsigned long *)0x40021018)//0x18
#define   RCC_APB1ENR    (*(volatile unsigned long *)0x4002101C)//0x1C
#define   RCC_BDCR    (*(volatile unsigned long *)0x40021020)//0x20
#define   RCC_CSR    (*(volatile unsigned long *)0x40021024)//0x24



#endif /* MEMMAP_H_ */