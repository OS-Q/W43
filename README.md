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

#### D36：[波形输出](https://github.com/OS-Q/D29)

通过波形输出数据信号

#### D37：[PWM设备](https://github.com/OS-Q/D30)

通过脉冲输出功率信号

#### D38：[电压设备](https://github.com/OS-Q/D31)

通过模拟输出电压

#### D39：[电流输出](https://github.com/OS-Q/D32)

板载控制电流输出

#### D40：[IIC驱动](https://github.com/OS-Q/D33)

通过IIC控制非编程外设

#### D41：[SPI驱动](https://github.com/OS-Q/D34)

通过SPI控制非编程外设

#### D42：[NULL](https://github.com/OS-Q/D35)




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