/**
  ******************************************************************************
  * @file    xpd_config.h
  * @author  Benedek Kupper
  * @version 0.1
  * @date    2018-05-21
  * @brief   DfuBootloader STM32_XPD configuration header
  *
  * Copyright (c) 2018 Benedek Kupper
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  */
#ifndef __XPD_CONFIG_H_
#define __XPD_CONFIG_H_

/* specify device header */
#include STM32_TARGET_HEADER

/* VDD value is used to adjust the flash programming width */
#ifndef VDD_VALUE_mV
#define VDD_VALUE_mV        2000
#endif

/* TODO specify oscillator parameters */

#endif /* __XPD_CONFIG_H_ */
