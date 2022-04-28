#pragma once
/******************************************************************************/
/* File   : Gpt_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Gpt.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define GPT_COREFUNCTIONALITIES                                                \
              FUNC(void, GPT_CODE) GetTimeElapsed      (void);                 \
              FUNC(void, GPT_CODE) GetTimeRemaining    (void);                 \
              FUNC(void, GPT_CODE) StartTimer          (void);                 \
              FUNC(void, GPT_CODE) StopTimer           (void);                 \
              FUNC(void, GPT_CODE) DisableNotification (void);                 \
              FUNC(void, GPT_CODE) EnableNotification  (void);                 \
              FUNC(void, GPT_CODE) SetMode             (void);                 \
              FUNC(void, GPT_CODE) CheckWakeup         (void);                 \
              FUNC(void, GPT_CODE) DisableWakeup       (void);                 \
              FUNC(void, GPT_CODE) EnableWakeup        (void);                 \
              FUNC(void, GPT_CODE) GetPredefTimerValue (void);                 \

#define GPT_COREFUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, GPT_CODE) GetTimeElapsed      (void) = 0;             \
      virtual FUNC(void, GPT_CODE) GetTimeRemaining    (void) = 0;             \
      virtual FUNC(void, GPT_CODE) StartTimer          (void) = 0;             \
      virtual FUNC(void, GPT_CODE) StopTimer           (void) = 0;             \
      virtual FUNC(void, GPT_CODE) DisableNotification (void) = 0;             \
      virtual FUNC(void, GPT_CODE) EnableNotification  (void) = 0;             \
      virtual FUNC(void, GPT_CODE) SetMode             (void) = 0;             \
      virtual FUNC(void, GPT_CODE) CheckWakeup         (void) = 0;             \
      virtual FUNC(void, GPT_CODE) DisableWakeup       (void) = 0;             \
      virtual FUNC(void, GPT_CODE) EnableWakeup        (void) = 0;             \
      virtual FUNC(void, GPT_CODE) GetPredefTimerValue (void) = 0;             \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Gpt_Functionality{
   public:
      GPT_COREFUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

