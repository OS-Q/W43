# W6：[字节输出](https://github.com/OS-Q/W6)

[![sites](OS-Q/OS-Q.png)](http://www.OS-Q.com)

#### 归属数据输出：[M2](https://github.com/OS-Q/M2)

#### 关于系统架构：[OS-Q](https://github.com/OS-Q/OS-Q)

## [平台描述](https://github.com/OS-Q/W6/wiki) 

W6字节输出平台，用于对外输出字节控制信息，包括电气输出和外设驱动

### [共用资源](https://github.com/OS-Q/W6/wiki) 

#### [归一化层](OS-Q/)

平台开发的归一化接口文件

---

- 边缘设备统一命名规则：体系 Q:[1,4] -> 节点 M:[1,12] -> 平台 W:[1,52] -> 设备 D:[1,365]

## [包含设备](https://github.com/OS-Q/W6/wiki) 

#### D36：[性价比PWM](https://github.com/OS-Q/D36)

性价比PWM对外输出

#### D37：[多通道PWM](https://github.com/OS-Q/D37)

多通道PWM对外输出

#### D38：[性价比DAC](https://github.com/OS-Q/D38)

高性价比电压输出

#### D39：[多通道DAC](https://github.com/OS-Q/D39)

多通道电压输出

#### D40：[电流输出](https://github.com/OS-Q/D40)

对外电流输出驱动

#### D41：[IIC配置](https://github.com/OS-Q/D41)

通过IIC配置相关器件

#### D42：[SPI配置](https://github.com/OS-Q/D42)

通过SPI配置相关器件

## [同级平台](https://github.com/OS-Q/M2/wiki)

#### W5：[比特输出](https://github.com/OS-Q/W5)

比特逻辑输出，包括开关状态控制

#### -> W6：[字节输出](https://github.com/OS-Q/W6)

连续量输出，对外设器件数字输出

#### W7：[显示输出](https://github.com/OS-Q/W7)

连接显示设备，驱动显示相关信息

#### W8：[文件输出](https://github.com/OS-Q/W8)

具有时间或条件控制的数据流输出

#### W9：[组合输出](https://github.com/OS-Q/W9)

具有多种输出方式，各种组合控制


---

####  © qitas@qitas.cn
###  [OS-Q redefined Operation System](http://www.OS-Q.com)
####  @ 2018-12-11

---