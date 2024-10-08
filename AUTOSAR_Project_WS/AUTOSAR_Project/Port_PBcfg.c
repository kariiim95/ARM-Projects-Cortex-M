
/******************************************************************************
 *
 * Module: Port_PBcfg.c
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - port Driver
 *
 * Author: asus
 ******************************************************************************/

#include "Port.h"


/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)


/* AUTOSAR Version checking between port_PBcfg.c and port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between port_PBcfg.c and port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif




const Port_ConfigType Port_Configuration= {
                                           /*****************************PORT A**************************/

                                           PORT_A,PORT_PIN0,INPUT,PORT_A_PIN_0_DIR_CHANG,PORT_A_PIN_0_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN1,INPUT,PORT_A_PIN_1_DIR_CHANG,PORT_A_PIN_1_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN2,INPUT,PORT_A_PIN_2_DIR_CHANG,PORT_A_PIN_2_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN3,INPUT,PORT_A_PIN_3_DIR_CHANG,PORT_A_PIN_3_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN4,INPUT,PORT_A_PIN_4_DIR_CHANG,PORT_A_PIN_4_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN5,INPUT,PORT_A_PIN_5_DIR_CHANG,PORT_A_PIN_5_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN6,INPUT,PORT_A_PIN_6_DIR_CHANG,PORT_A_PIN_6_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_A,PORT_PIN7,INPUT,PORT_A_PIN_7_DIR_CHANG,PORT_A_PIN_7_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           /*****************************PORT B**************************/
                                           PORT_B,PORT_PIN0,INPUT,PORT_B_PIN_0_DIR_CHANG,PORT_B_PIN_0_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN1,INPUT,PORT_B_PIN_1_DIR_CHANG,PORT_B_PIN_1_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN2,INPUT,PORT_B_PIN_2_DIR_CHANG,PORT_B_PIN_2_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN3,INPUT,PORT_B_PIN_3_DIR_CHANG,PORT_B_PIN_3_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN4,INPUT,PORT_B_PIN_4_DIR_CHANG,PORT_B_PIN_4_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN5,INPUT,PORT_B_PIN_5_DIR_CHANG,PORT_B_PIN_5_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN6,INPUT,PORT_B_PIN_6_DIR_CHANG,PORT_B_PIN_6_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_B,PORT_PIN7,INPUT,PORT_B_PIN_7_DIR_CHANG,PORT_B_PIN_7_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           /**************************PORT C*************************/
                                           PORT_C,PORT_PIN4,INPUT,PORT_C_PIN_4_DIR_CHANG,PORT_C_PIN_4_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_C,PORT_PIN5,INPUT,PORT_C_PIN_5_DIR_CHANG,PORT_C_PIN_5_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_C,PORT_PIN6,INPUT,PORT_C_PIN_6_DIR_CHANG,PORT_C_PIN_6_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_C,PORT_PIN7,INPUT,PORT_C_PIN_7_DIR_CHANG,PORT_C_PIN_7_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           /*******************PORT D**********************/
                                           PORT_D,PORT_PIN0,INPUT,PORT_D_PIN_0_DIR_CHANG,PORT_D_PIN_0_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN1,INPUT,PORT_D_PIN_1_DIR_CHANG,PORT_D_PIN_1_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN2,INPUT,PORT_D_PIN_2_DIR_CHANG,PORT_D_PIN_2_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN3,INPUT,PORT_D_PIN_3_DIR_CHANG,PORT_D_PIN_3_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN4,INPUT,PORT_D_PIN_4_DIR_CHANG,PORT_D_PIN_4_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN5,INPUT,PORT_D_PIN_5_DIR_CHANG,PORT_D_PIN_5_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN6,INPUT,PORT_D_PIN_6_DIR_CHANG,PORT_D_PIN_6_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_D,PORT_PIN7,INPUT,PORT_D_PIN_7_DIR_CHANG,PORT_D_PIN_7_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           /*******************PORT E**********************/
                                           PORT_E,PORT_PIN0,INPUT,PORT_E_PIN_0_DIR_CHANG,PORT_E_PIN_0_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_E,PORT_PIN1,INPUT,PORT_E_PIN_1_DIR_CHANG,PORT_E_PIN_1_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_E,PORT_PIN2,INPUT,PORT_E_PIN_2_DIR_CHANG,PORT_E_PIN_2_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_E,PORT_PIN3,INPUT,PORT_E_PIN_3_DIR_CHANG,PORT_E_PIN_3_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_E,PORT_PIN4,INPUT,PORT_E_PIN_4_DIR_CHANG,PORT_E_PIN_4_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_E,PORT_PIN5,INPUT,PORT_E_PIN_5_DIR_CHANG,PORT_E_PIN_5_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           /*******************PORT F**********************/
                                           PORT_F,PORT_PIN0,INPUT,PORT_F_PIN_0_DIR_CHANG,PORT_F_PIN_0_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_F,PORT_PIN1,OUTPUT,PORT_F_PIN_1_DIR_CHANG,PORT_F_PIN_1_MODE_CHANG,OFF,STD_LOW,PORT_PIN_MODE_DIO,             //LED
                                           PORT_F,PORT_PIN2,INPUT,PORT_F_PIN_2_DIR_CHANG,PORT_F_PIN_2_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_F,PORT_PIN3,OUTPUT,PORT_F_PIN_3_DIR_CHANG,PORT_F_PIN_3_MODE_CHANG,PULL_DOWN,STD_LOW,PORT_PIN_MODE_DIO,
                                           PORT_F,PORT_PIN4,INPUT,PORT_F_PIN_4_DIR_CHANG,PORT_F_PIN_4_MODE_CHANG,PULL_UP,STD_LOW,PORT_PIN_MODE_DIO,        //BUTTON



};









