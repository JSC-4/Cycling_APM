/* File generated by C:/ncs/v2.0.0/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM_MCUBOOT_OFFSET 0x0
#define PM_MCUBOOT_ADDRESS 0x0
#define PM_MCUBOOT_END_ADDRESS 0xc000
#define PM_MCUBOOT_SIZE 0xc000
#define PM_MCUBOOT_NAME mcuboot
#define PM_MCUBOOT_ID 0
#define PM_mcuboot_ID PM_MCUBOOT_ID
#define PM_mcuboot_IS_ENABLED 1
#define PM_0_LABEL MCUBOOT
#define PM_MCUBOOT_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_EMPTY_0_OFFSET 0xc000
#define PM_EMPTY_0_ADDRESS 0xc000
#define PM_EMPTY_0_END_ADDRESS 0x10000
#define PM_EMPTY_0_SIZE 0x4000
#define PM_EMPTY_0_NAME EMPTY_0
#define PM_EMPTY_0_ID 1
#define PM_empty_0_ID PM_EMPTY_0_ID
#define PM_empty_0_IS_ENABLED 1
#define PM_1_LABEL EMPTY_0
#define PM_EMPTY_0_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_PAD_OFFSET 0x10000
#define PM_MCUBOOT_PAD_ADDRESS 0x10000
#define PM_MCUBOOT_PAD_END_ADDRESS 0x10200
#define PM_MCUBOOT_PAD_SIZE 0x200
#define PM_MCUBOOT_PAD_NAME mcuboot_pad
#define PM_MCUBOOT_PAD_ID 2
#define PM_mcuboot_pad_ID PM_MCUBOOT_PAD_ID
#define PM_mcuboot_pad_IS_ENABLED 1
#define PM_2_LABEL MCUBOOT_PAD
#define PM_MCUBOOT_PAD_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_PRIMARY_OFFSET 0x10000
#define PM_MCUBOOT_PRIMARY_ADDRESS 0x10000
#define PM_MCUBOOT_PRIMARY_END_ADDRESS 0x78000
#define PM_MCUBOOT_PRIMARY_SIZE 0x68000
#define PM_MCUBOOT_PRIMARY_NAME mcuboot_primary
#define PM_MCUBOOT_PRIMARY_ID 3
#define PM_mcuboot_primary_ID PM_MCUBOOT_PRIMARY_ID
#define PM_mcuboot_primary_IS_ENABLED 1
#define PM_3_LABEL MCUBOOT_PRIMARY
#define PM_MCUBOOT_PRIMARY_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_TFM_SECURE_OFFSET 0x10000
#define PM_TFM_SECURE_ADDRESS 0x10000
#define PM_TFM_SECURE_END_ADDRESS 0x1c200
#define PM_TFM_SECURE_SIZE 0xc200
#define PM_TFM_SECURE_NAME tfm_secure
#define PM_TFM_SECURE_ID 4
#define PM_tfm_secure_ID PM_TFM_SECURE_ID
#define PM_tfm_secure_IS_ENABLED 1
#define PM_4_LABEL TFM_SECURE
#define PM_TFM_SECURE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_PRIMARY_APP_OFFSET 0x10200
#define PM_MCUBOOT_PRIMARY_APP_ADDRESS 0x10200
#define PM_MCUBOOT_PRIMARY_APP_END_ADDRESS 0x78000
#define PM_MCUBOOT_PRIMARY_APP_SIZE 0x67e00
#define PM_MCUBOOT_PRIMARY_APP_NAME mcuboot_primary_app
#define PM_MCUBOOT_PRIMARY_APP_ID 5
#define PM_mcuboot_primary_app_ID PM_MCUBOOT_PRIMARY_APP_ID
#define PM_mcuboot_primary_app_IS_ENABLED 1
#define PM_5_LABEL MCUBOOT_PRIMARY_APP
#define PM_MCUBOOT_PRIMARY_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_TFM_OFFSET 0x10200
#define PM_TFM_ADDRESS 0x10200
#define PM_TFM_END_ADDRESS 0x1c200
#define PM_TFM_SIZE 0xc000
#define PM_TFM_NAME tfm
#define PM_TFM_ID 6
#define PM_tfm_ID PM_TFM_ID
#define PM_tfm_IS_ENABLED 1
#define PM_6_LABEL TFM
#define PM_TFM_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_APP_OFFSET 0x1c200
#define PM_APP_ADDRESS 0x1c200
#define PM_APP_END_ADDRESS 0x78000
#define PM_APP_SIZE 0x5be00
#define PM_APP_NAME app
#define PM_APP_ID 7
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_7_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_TFM_NONSECURE_OFFSET 0x1c200
#define PM_TFM_NONSECURE_ADDRESS 0x1c200
#define PM_TFM_NONSECURE_END_ADDRESS 0x78000
#define PM_TFM_NONSECURE_SIZE 0x5be00
#define PM_TFM_NONSECURE_NAME tfm_nonsecure
#define PM_TFM_NONSECURE_ID 8
#define PM_tfm_nonsecure_ID PM_TFM_NONSECURE_ID
#define PM_tfm_nonsecure_IS_ENABLED 1
#define PM_8_LABEL TFM_NONSECURE
#define PM_TFM_NONSECURE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_MCUBOOT_SECONDARY_OFFSET 0x78000
#define PM_MCUBOOT_SECONDARY_ADDRESS 0x78000
#define PM_MCUBOOT_SECONDARY_END_ADDRESS 0xe0000
#define PM_MCUBOOT_SECONDARY_SIZE 0x68000
#define PM_MCUBOOT_SECONDARY_NAME mcuboot_secondary
#define PM_MCUBOOT_SECONDARY_ID 9
#define PM_mcuboot_secondary_ID PM_MCUBOOT_SECONDARY_ID
#define PM_mcuboot_secondary_IS_ENABLED 1
#define PM_9_LABEL MCUBOOT_SECONDARY
#define PM_MCUBOOT_SECONDARY_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_EMPTY_2_OFFSET 0xe0000
#define PM_EMPTY_2_ADDRESS 0xe0000
#define PM_EMPTY_2_END_ADDRESS 0xe8000
#define PM_EMPTY_2_SIZE 0x8000
#define PM_EMPTY_2_NAME EMPTY_2
#define PM_EMPTY_2_ID 10
#define PM_empty_2_ID PM_EMPTY_2_ID
#define PM_empty_2_IS_ENABLED 1
#define PM_10_LABEL EMPTY_2
#define PM_EMPTY_2_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_NONSECURE_STORAGE_OFFSET 0xe8000
#define PM_NONSECURE_STORAGE_ADDRESS 0xe8000
#define PM_NONSECURE_STORAGE_END_ADDRESS 0xff000
#define PM_NONSECURE_STORAGE_SIZE 0x17000
#define PM_NONSECURE_STORAGE_NAME nonsecure_storage
#define PM_NONSECURE_STORAGE_ID 11
#define PM_nonsecure_storage_ID PM_NONSECURE_STORAGE_ID
#define PM_nonsecure_storage_IS_ENABLED 1
#define PM_11_LABEL NONSECURE_STORAGE
#define PM_NONSECURE_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_SETTINGS_STORAGE_OFFSET 0xe8000
#define PM_SETTINGS_STORAGE_ADDRESS 0xe8000
#define PM_SETTINGS_STORAGE_END_ADDRESS 0xea000
#define PM_SETTINGS_STORAGE_SIZE 0x2000
#define PM_SETTINGS_STORAGE_NAME settings_storage
#define PM_SETTINGS_STORAGE_ID 12
#define PM_settings_storage_ID PM_SETTINGS_STORAGE_ID
#define PM_settings_storage_IS_ENABLED 1
#define PM_12_LABEL SETTINGS_STORAGE
#define PM_SETTINGS_STORAGE_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_EMPTY_1_OFFSET 0xea000
#define PM_EMPTY_1_ADDRESS 0xea000
#define PM_EMPTY_1_END_ADDRESS 0xeb000
#define PM_EMPTY_1_SIZE 0x1000
#define PM_EMPTY_1_NAME EMPTY_1
#define PM_EMPTY_1_ID 13
#define PM_empty_1_ID PM_EMPTY_1_ID
#define PM_empty_1_IS_ENABLED 1
#define PM_13_LABEL EMPTY_1
#define PM_EMPTY_1_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_PGPS_OFFSET 0xeb000
#define PM_PGPS_ADDRESS 0xeb000
#define PM_PGPS_END_ADDRESS 0x100000
#define PM_PGPS_SIZE 0x15000
#define PM_PGPS_NAME pgps
#define PM_PGPS_ID 14
#define PM_pgps_ID PM_PGPS_ID
#define PM_pgps_IS_ENABLED 1
#define PM_14_LABEL PGPS
#define PM_PGPS_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_OTP_OFFSET 0x0
#define PM_OTP_ADDRESS 0xff8108
#define PM_OTP_END_ADDRESS 0xff83fc
#define PM_OTP_SIZE 0x2f4
#define PM_OTP_NAME otp
#define PM_SRAM_SECURE_OFFSET 0x0
#define PM_SRAM_SECURE_ADDRESS 0x20000000
#define PM_SRAM_SECURE_END_ADDRESS 0x20010000
#define PM_SRAM_SECURE_SIZE 0x10000
#define PM_SRAM_SECURE_NAME sram_secure
#define PM_TFM_SRAM_OFFSET 0x0
#define PM_TFM_SRAM_ADDRESS 0x20000000
#define PM_TFM_SRAM_END_ADDRESS 0x20010000
#define PM_TFM_SRAM_SIZE 0x10000
#define PM_TFM_SRAM_NAME tfm_sram
#define PM_NRF_MODEM_LIB_CTRL_OFFSET 0x10000
#define PM_NRF_MODEM_LIB_CTRL_ADDRESS 0x20010000
#define PM_NRF_MODEM_LIB_CTRL_END_ADDRESS 0x200104e8
#define PM_NRF_MODEM_LIB_CTRL_SIZE 0x4e8
#define PM_NRF_MODEM_LIB_CTRL_NAME nrf_modem_lib_ctrl
#define PM_NRF_MODEM_LIB_SRAM_OFFSET 0x10000
#define PM_NRF_MODEM_LIB_SRAM_ADDRESS 0x20010000
#define PM_NRF_MODEM_LIB_SRAM_END_ADDRESS 0x200144e8
#define PM_NRF_MODEM_LIB_SRAM_SIZE 0x44e8
#define PM_NRF_MODEM_LIB_SRAM_NAME nrf_modem_lib_sram
#define PM_SRAM_NONSECURE_OFFSET 0x10000
#define PM_SRAM_NONSECURE_ADDRESS 0x20010000
#define PM_SRAM_NONSECURE_END_ADDRESS 0x20040000
#define PM_SRAM_NONSECURE_SIZE 0x30000
#define PM_SRAM_NONSECURE_NAME sram_nonsecure
#define PM_NRF_MODEM_LIB_TX_OFFSET 0x104e8
#define PM_NRF_MODEM_LIB_TX_ADDRESS 0x200104e8
#define PM_NRF_MODEM_LIB_TX_END_ADDRESS 0x200124e8
#define PM_NRF_MODEM_LIB_TX_SIZE 0x2000
#define PM_NRF_MODEM_LIB_TX_NAME nrf_modem_lib_tx
#define PM_NRF_MODEM_LIB_RX_OFFSET 0x124e8
#define PM_NRF_MODEM_LIB_RX_ADDRESS 0x200124e8
#define PM_NRF_MODEM_LIB_RX_END_ADDRESS 0x200144e8
#define PM_NRF_MODEM_LIB_RX_SIZE 0x2000
#define PM_NRF_MODEM_LIB_RX_NAME nrf_modem_lib_rx
#define PM_SRAM_PRIMARY_OFFSET 0x144e8
#define PM_SRAM_PRIMARY_ADDRESS 0x200144e8
#define PM_SRAM_PRIMARY_END_ADDRESS 0x20040000
#define PM_SRAM_PRIMARY_SIZE 0x2bb18
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 15
#define PM_ALL_BY_SIZE "mcuboot_pad otp nrf_modem_lib_ctrl EMPTY_1 nrf_modem_lib_rx nrf_modem_lib_tx settings_storage EMPTY_0 nrf_modem_lib_sram EMPTY_2 mcuboot tfm tfm_secure tfm_sram sram_secure pgps nonsecure_storage sram_primary sram_nonsecure app tfm_nonsecure mcuboot_primary_app mcuboot_secondary mcuboot_primary"
#define PM_ADDRESS 0x1c200
#define PM_SIZE 0x5be00
#define PM_SRAM_ADDRESS 0x200144e8
#define PM_SRAM_SIZE 0x2bb18
#endif /* PM_CONFIG_H__ */