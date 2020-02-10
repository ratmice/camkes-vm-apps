/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#pragma once

enum IRQConstants {
    INTERRUPT_VTIMER                = 27,
    INTERRUPT_PPI_15                = 31,
    INTERRUPT_TMR1                  = 32,
    INTERRUPT_TMR2                  = 33,
    INTERRUPT_RTC                   = 34,
    INTERRUPT_CEC                   = 35,
    INTERRUPT_SHR_SEM_INBOX_FULL    = 36,
    INTERRUPT_SHR_SEM_INBOX_EMPTY   = 37,
    INTERRUPT_SHR_SEM_OUTBOX_FULL   = 38,
    INTERRUPT_SHR_SEM_OUTBOX_EMPTY  = 39,
    INTERRUPT_NVJPEG                = 40,
    INTERRUPT_NVDEC                 = 41,
    INTERRUPT_QUAD_SPI              = 42,
    INTERRUPT_DPAUX_INT1            = 43,
//  RESERVED                        = 44,
    INTERRUPT_SATA_RX_STAT          = 45,
    INTERRUPT_SDMMC1                = 46,
    INTERRUPT_SDMMC2                = 47,
    INTERRUPT_VGPIO_INT             = 48,
    INTERRUPT_VII12C_INT            = 49,
//  RESERVED                        = 50,
    INTERRUPT_SDMMC3                = 51,
    INTERRUPT_USB                   = 52,
    INTERRUPT_USB2                  = 53,
//  RESERVED                        = 54,
    INTERRUPT_SATA_CTL              = 55,
    INTERRUPT_PMC_INT               = 56,
    INTERRUPT_FC_INT                = 57,
    INTERRUPT_APB_DMA_CPU           = 58,
//  RESERVED                        = 59,
    INTERRUPT_ARB_SEM_GNT_COP       = 60,
    INTERRUPT_ARB_SEM_GNT_CPU       = 61,
//  RESERVED                        = 62,
    INTERRUPT_SDMMC4                = 63,
    INTERRUPT_GPIO1                 = 64,
    INTERRUPT_GPIO2                 = 65,
    INTERRUPT_GPIO3                 = 66,
    INTERRUPT_GPIO4                 = 67,
    INTERRUPT_UARTA                 = 68,
    INTERRUPT_UARTB                 = 69,
    INTERRUPT_I2C                   = 70,
    INTERRUPT_USB3_HOST_INT         = 71,
    INTERRUPT_USB3_HOST_SMI         = 72,
    INTERRUPT_TMR3                  = 73,
    INTERRUPT_TMR4                  = 74,
    INTERRUPT_USB3_HOST_PME         = 75,
    INTERRUPT_USB3_DEV_HOST         = 76,
    INTERRUPT_ACTMON                = 77,
    INTERRUPT_UARTC                 = 78,
//  RESERVED                        = 79,
    INTERRUPT_THERMAL               = 80,
    INTERRUPT_XUSB_PADCTL           = 81,
    INTERRUPT_TSEC                  = 82,
    INTERRUPT_EDP                   = 83,
//  RESERVED                        = 84,
    INTERRUPT_I2C5                  = 85,
//  RESERVED                        = 86,
    INTERRUPT_GPIO5                 = 87,
    INTERRUPT_USB3_DEV_SMI          = 88,
    INTERRUPT_USB3_DEV_PME          = 89,
    INTERRUPT_SE                    = 90,
    INTERRUPT_SPI1                  = 91,
    INTERRUPT_APB_DMA_COP           = 92,
//  RESERVED                        = 93,
    INTERRUPT_CLDVFS                = 94,
    INTERRUPT_I2C6                  = 95,
    INTERRUPT_HOST1X_SYNCPT_COP     = 96,
    INTERRUPT_HOST1X_SYNCPT_CPU     = 97,
    INTERRUPT_HOST1X_GEN_COP        = 98,
    INTERRUPT_HOST1X_GEN_CPU        = 99,
    INTERRUPT_NVENC                 = 100,
    INTERRUPT_VI                    = 101,
    INTERRUPT_ISPB                  = 102,
    INTERRUPT_ISP                   = 103,
    INTERRUPT_VIC                   = 104,
    INTERRUPT_DISPLAY               = 105,
    INTERRUPT_DISPLAYB              = 106,
    INTERRUPT_SOR1                  = 107,
    INTERRUPT_SOR                   = 108,
    INTERRUPT_MC                    = 109,
    INTERRUPT_EMC                   = 110,
//  RESERVED                        = 111,
    INTERRUPT_TSECB                 = 112,
    INTERRUPT_HDA                   = 113,
    INTERRUPT_SPI2                  = 114,
    INTERRUPT_SPI3                  = 115,
    INTERRUPT_I2C2                  = 116,
//  RESERVED                        = 117,
    INTERRUPT_PMU_EXT               = 118,
    INTERRUPT_GPIO6                 = 119,
//  RESERVED                        = 120,
    INTERRUPT_GPIO7                 = 121,
    INTERRUPT_UARTD                 = 122,
//  RESERVED                        = 123,
    INTERRUPT_I2C3                  = 124,
    INTERRUPT_SPI4                  = 125,
//  RESERVED                        = 126,
//  RESERVED                        = 127,
    INTERRUPT_DTV                   = 128,
//  RESERVED                        = 129,
    INTERRUPT_PCIE_INT              = 130,
    INTERRUPT_PCIE_MSI              = 131,
//  RESERVED                        = 132,
    INTERRUPT_AVP_CACHE             = 133,
    INTERRUPT_APE_INT1              = 134,
    INTERRUPT_APE_INT0              = 135,
    INTERRUPT_APB_DMA_CH0           = 136,
    INTERRUPT_APB_DMA_CH1           = 137,
    INTERRUPT_APB_DMA_CH2           = 138,
    INTERRUPT_APB_DMA_CH3           = 139,
    INTERRUPT_APB_DMA_CH4           = 140,
    INTERRUPT_APB_DMA_CH5           = 141,
    INTERRUPT_APB_DMA_CH6           = 142,
    INTERRUPT_APB_DMA_CH7           = 143,
    INTERRUPT_APB_DMA_CH8           = 144,
    INTERRUPT_APB_DMA_CH9           = 145,
    INTERRUPT_APB_DMA_CH10          = 146,
    INTERRUPT_APB_DMA_CH11          = 147,
    INTERRUPT_APB_DMA_CH12          = 148,
    INTERRUPT_APB_DMA_CH13          = 149,
    INTERRUPT_APB_DMA_CH14          = 150,
    INTERRUPT_APB_DMA_CH15          = 151,
    INTERRUPT_I2C4                  = 152,
    INTERRUPT_TMR5                  = 153,
//  RESERVED                        = 154,
    INTERRUPT_WDT_CPU               = 155,
    INTERRUPT_WDT_AVP               = 156,
    INTERRUPT_GPIO8                 = 157,
    INTERRUPT_CAR                   = 158,
//  RESERVED                        = 159,
    INTERRUPT_APB_DMA_CH16          = 160,
    INTERRUPT_APB_DMA_CH17          = 161,
    INTERRUPT_APB_DMA_CH18          = 162,
    INTERRUPT_APB_DMA_CH19          = 163,
    INTERRUPT_APB_DMA_CH20          = 164,
    INTERRUPT_APB_DMA_CH21          = 165,
    INTERRUPT_APB_DMA_CH22          = 166,
    INTERRUPT_APB_DMA_CH23          = 167,
    INTERRUPT_APB_DMA_CH24          = 168,
    INTERRUPT_APB_DMA_CH25          = 169,
    INTERRUPT_APB_DMA_CH26          = 170,
    INTERRUPT_APB_DMA_CH27          = 171,
    INTERRUPT_APB_DMA_CH28          = 172,
    INTERRUPT_APB_DMA_CH29          = 173,
    INTERRUPT_APB_DMA_CH30          = 174,
    INTERRUPT_APB_DMA_CH31          = 175,
    INTERRUPT_CPU0_PMU_INTR         = 176,
    INTERRUPT_CPU1_PMU_INTR         = 177,
    INTERRUPT_CPU2_PMU_INTR         = 178,
    INTERRUPT_CPU3_PMU_INTR         = 179,
    INTERRUPT_SDMMC1_SYS            = 180,
    INTERRUPT_SDMMC2_SYS            = 181,
    INTERRUPT_SDMMC3_SYS            = 182,
    INTERRUPT_SDMMC4_SYS            = 183,
    INTERRUPT_TMR6                  = 184,
    INTERRUPT_TMR7                  = 185,
    INTERRUPT_TMR8                  = 186,
    INTERRUPT_TMR9                  = 187,
    INTERRUPT_TMR0                  = 188,
    INTERRUPT_GPU                   = 189,
    INTERRUPT_GPU_NONSTALL          = 190,
    DPAUX                           = 191,
    INTERRUPT_MPCORE_AXIERRIRQ      = 192,
    INTERRUPT_MPCORE_INTERRIRQ      = 193,
    INTERRUPT_EVENT_GPIO_A          = 194,
    INTERRUPT_EVENT_GPIO_B          = 195,
    INTERRUPT_EVENT_GPIO_C          = 196,
//  RESERVED                        = 197,
//  RESERVED                        = 198,
//  RESERVED                        = 199,
    INTERRUPT_FLOW_RSN_CPU          = 200,
    INTERRUPT_FLOW_RSM_COP          = 201,
    INTERRUPT_TMR_SHARED            = 202,
    INTERRUPT_MPCORE_CTIIRQ0        = 203,
    INTERRUPT_MPCORE_CTIIRQ1        = 204,
    INTERRUPT_MPCORE_CTIIRQ2        = 205,
    INTERRUPT_MPCORE_CTIIRQ3        = 206,
    INTERRUPT_MSELECT_ERROR         = 207,
    INTERRUPT_TMR10                 = 208,
    INTERRUPT_TMR11                 = 209,
    INTERRUPT_TMR12                 = 210,
    INTERRUPT_TMR13                 = 211,
//  RESERVED                        = 212,
//  RESERVED                        = 213,
//  RESERVED                        = 214,
//  RESERVED                        = 215,
//  RESERVED                        = 216,
//  RESERVED                        = 217,
//  RESERVED                        = 218,
//  RESERVED                        = 219,
//  RESERVED                        = 220,
//  RESERVED                        = 221,
//  RESERVED                        = 222,
//  RESERVED                        = 223,
    maxIRQ                          = 224
} platform_interrupt_t;

#define MAX_IRQ                       maxIRQ


static const int linux_pt_irqs[] = {
};

static const int free_plat_interrupts[] =  { -1 };

#define LINUX_RAM_BASE    0x80000000
#define LINUX_RAM_PADDR_BASE LINUX_RAM_BASE
#define LINUX_RAM_OFFSET  (LINUX_RAM_PADDR_BASE - LINUX_RAM_BASE)
#define LINUX_RAM_SIZE    0x8000000
#define PLAT_RAM_END      0xffffffff

/* the offset between actual physcial memory and guest physical memory */
// #define LINUX_RAM_OFFSET  (LINUX_RAM_PADDR_BASE - LINUX_RAM_BASE)
#define DTB_ADDR          (LINUX_RAM_BASE + 0x02000000)
#define INITRD_MAX_SIZE   0x1900000 //25 MB
#define INITRD_ADDR       (DTB_ADDR - INITRD_MAX_SIZE) //0x80700000

static const char *plat_keep_devices[] = {
    "/interrupt-controller@50041000",
    "/gpu@57000000",
    "/serial@70006300",
    "/timer@60005000",
    "/flow-controller@60007000",
    "/dma@60020000",
    "/apbmisc@70000800",
    "/pmu@7000a000",
    "/i2c@7000c700",
    "/fuse@7000f800",
    "/usb@70090000",
    "/sdhci@700b0000",
    "/sdhci@700b0600",
    "/mipi@700e3000",
    "/timer",
    "/aliases",
    "/psci",
};
static const char *plat_keep_device_and_disable[] = {
    "/serial@70006040",
    "/serial@70006200",
    "/serial@70006300",
    "/i2c@7000c000",
    "/i2c@7000c500",
    "/i2c@7000d100",
    "/i2c@7000d400",
    "/i2c@7000d600",
    "/i2c@7000d800",
    "/i2c@7000da00",
    "/hda@70030000",
    "/sdhci@700b0200",
    "/sdhci@700b0400",
    "/spi@70410000",
    "/usb@7d000000",
    "/usb-phy@7d000000",
    "/usb@7d004000",
    "/usb-phy@7d004000",
};
static const char *plat_keep_device_and_subtree[] = {
    "/pcie@1003000",
    "/host1x@50000000",
    "/thermal-zones",
    "/pinmux@700008d4",
    "/i2c@7000c400",
    "/i2c@7000d000",
    "/pmc@7000e400",
    "/padctl@7009f000",
    "/thermal-sensor@700e2000",
    "/thermal-zones",
    "/clocks",
    "/regulators",
    "/gpio-keys",
};
static const char *plat_keep_device_and_subtree_and_disable[] = {
    "/aconnect@702c0000",
};
