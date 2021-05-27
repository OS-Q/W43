/**
  ******************************************************************************
  * @file    xpd_usb.h
  * @author  Benedek Kupper
  * @version 0.3
  * @date    2018-01-28
  * @brief   STM32 eXtensible Peripheral Drivers Universal Serial Bus Module
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
#ifndef __XPD_USB_H_
#define __XPD_USB_H_
#include <xpd_usb_otg.h>

#define USB_vInit           USB_vDevInit
#define USB_vDeinit         USB_vDevDeinit
#define USB_vStart_IT       USB_vDevStart_IT
#define USB_vStop_IT        USB_vDevStop_IT
#define USB_vIRQHandler     USB_vDevIRQHandler

#endif /* __XPD_USB_H_ */
