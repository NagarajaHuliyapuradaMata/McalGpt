#pragma once
/******************************************************************************/
/* File   : McalGpt.hpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalGpt.hpp"
#include "CfgMcalGpt.hpp"
#include "McalGpt_core.hpp"
#include "infMcalGpt_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalGpt:
      INTERFACES_EXPORTED_GPT
      public abstract_module
   ,  public class_McalGpt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalGpt_Type* lptrConst = (ConstMcalGpt_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, GPT_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, GPT_CONST,       GPT_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   GPT_CONFIG_DATA, GPT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, GPT_CODE) DeInitFunction (void);
      FUNC(void, GPT_CODE) MainFunction   (void);
      GPT_CORE_FUNCTIONALITIES
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
extern VAR(module_McalGpt, GPT_VAR) McalGpt;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

