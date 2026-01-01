/**
 * @file Regsiters.h
 * @brief Header file for register definition of ICM42688
 * @author Witty Wizard
 */

/**
 * Register Bank 0
 */

/**
 * @brief Device Configuration Register
 *
 * - Name: DEVICE_CONFIG
 * - Address: 0x11
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME             | FUNCTION |
 * |-----|------------------|-------------------------------------------------|
 * | 7:5 | -               | Reserved |
 * | 4   | SPI_MODE        | SPI Mode Selection|
 * |     |                 | 0:Mode 0 and Mode 3 (default)|
 * |     |                 | 1: Mode 1 and Mode 2|
 * | 3:1 | -               | Reserved     |
 * | 0   |SOFT_RESET_CONFIG| Software Reset Configuration|
 * |     |                 | 0: Normal (default) |
 * |     |                 | 1: Enable Reset|
 * |     |                 | Afterwriting 1 wait 1ms for reset to be effective|
 */
#define DEVICE_CONFIG 0x11

/**
 * @brief Drive Configuration Register
 *
 * - Name: DRIVE_CONFIG
 * - Address: 0x13
 * - Reset Value: 0x05
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME          | Function |
 * |-----|---------------|------------------------|
 * | 7:6 | -             | Reserved |
 * | 5:3 | I2C_SLEW_RATE | Controls slew rate of pin 14 in I2C Mode|
 * |     |               | 000: 20ns-60ns |
 * |     |               | 001:12ns-36ns |
 * |     |               | 010: 6ns-18ns |
 * |     |               |011: 4ns-12ns |
 * |     |               | 100: 2ns-6ns |
 * |     | 		 | 101: Less than 2ns |
 * |     |               | 110: Reserved |
 * |     |               |111: Reserved |
 * | 2:0 | SPI_SLEW_RATE | Controls slew rate of pin 14 in SPI Mode|
 * |     |               | 000: 20ns-60ns |
 * |     | 		 | 001: 12ns-36ns |
 * |     |               | 010: 6ns-18ns |
 * |     |               | 011: 4ns-12ns |
 * |     |               | 100: 2ns-6ns |
 * |     |               | 101: Less than 2ns |
 * |     |               | 110: Reserved |
 * |     |               | 111: Reserved |
 */
#define DRIVE_CONFIG 0x13

/**
 * @brief Interrupt Configuration Register
 *
 * - Name: INT_CONFIG
 * - Address: 0x14
 * - Reset Value: 0x00
 * - Serial IF: R/W
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | Function                              |
 * |-----|--------------------|---------------------------------------|
 * | 7:6 |                    | Reserved                              |
 * | 5   | INT2_MODE          | INT2 interrupt mode                   |
 * |     |                    | 0: Pulsed mode                        |
 * |     |                    | 1: Latched mode                       |
 * | 4   | INT2_DRIVE_CIRCUIT | INT2 drive circuit                    |
 * |     |                    | 0: Open drain                         |
 * |     |                    | 1: Push pull                          |
 * | 3   | INT2_POLARITY      | INT2 interrupt polarity               |
 * |     |                    | 0: Active low (default)               |
 * |     |                    | 1: Active high                        |
 * | 2   | INT1_MODE          | INT1 interrupt mode                   |
 * |     |                    | 0: Pulsed mode                        |
 * |     |                    | 1: Latched mode                       |
 * | 1   | INT1_DRIVE_CIRCUIT | INT1 drive circuit                    |
 * |     |                    | 0: Open drain                         |
 * |     |                    | 1: Push pull                          |
 * | 0   | INT1_POLARITY      | INT1 interrupt polarity               |
 * |     |                    | 0: Active low (default)               |
 * |     |                    | 1: Active high                        |
 */
#define INT_CONFIG 0x14

/**
 * @brief FIFO Configuration Register
 *
 * - Name: FIFO_CONFIG
 * - Address: 0x16
 * - Serial IF: R/W
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | Function                              |
 * |-----|--------------------|---------------------------------------|
 * | 7:6 | FIFO_MODE          | 00: Bypass mode (defautl)             |
 * |     |                    | 01: Stream-to-FIFO Mode               |
 * |     |                    | 10: STOP-on-Full Mode                 |
 * |     |                    | 10: STOP-on-Full Mode                 |
 * | 5:0 |                    | Reserved                              |
 */
#define FIFO_CONFIG 0x16

/**
 * @brief Temperature Data upper byte register
 *
 * - Name: TEMP_DATA1
 * - Address: 0x1D
 * - Serial IF: SYNCR
 * - Reset Value: 0x80
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | Function                              |
 * |-----|--------------------|---------------------------------------|
 * | 7:0 | TEMP_DATA[15:8]    | Upper byte of temperature data        |
 */
#define TEMP_DATA1 0x1D

/**
 * @breif Temperature Data Lower byte register
 *
 * - Name: TEMP_DATA0
 * - Address: 0x1E
 * - SerialIF SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function 			      |
 * |-----|-------------------|----------------------------------------|
 * | 7:0 | TEMP_DATA[7:0]    | Lower byte of temperature data         |
 */
#define TEMP_DATA0 0x1E

/**
 * @brief Accelerometer X-Axis Upper Byte Register
 *
 * - Name: ACCEL_DATA_X1
 * - Addresss: 0x1F
 * - SerialIF: SYNCR
 * - Reset Value: 0x80
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                               |
 * |-----|-------------------|----------------------------------------|
 * | 7:0 | ACCEL_DATA_X[15:8]| Upper Byte of Accel X-axis data	      |
 */
#define ACCEL_DATA_X1 0x1F

/**
 * @brief Accelerometer X-Axis Lower Byte Register
 *
 * - Name: ACCEL_DATA_X0
 * - Addresss: 0x20
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                               |
 * |-----|-------------------|----------------------------------------|
 * | 7:0 | ACCEL_DATA_X[7:0]| Lower Byte of Accel X-axis data	      |
 */
#define ACCEL_DATA_X0 0x20

/**
 * @brief Accelerometer Y-Axis Upper Byte Register
 *
 * - Name: ACCEL_DATA_Y1
 * - Addresss: 0x21
 * - SerialIF: SYNCR
 * - Reset Value: 0x80
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                               |
 * |-----|-------------------|----------------------------------------|
 * | 7:0 | ACCEL_DATA_Y[15:8]| Upper Byte of Accel Y-axis data	      |
 */
#define ACCEL_DATA_Y1 0x21

/**
 * @brief Accelerometer Y-Axis Lower Byte Register
 *
 * - Name: ACCEL_DATA_Y0
 * - Addresss: 0x22
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                               |
 * |-----|-------------------|----------------------------------------|
 * | 7:0 | ACCEL_DATA_Y[7:0] | Lower Byte of Accel Y-axis data	      |
 */
#define ACCEL_DATA_Y0 0x22

/**
 * @brief Accelerometer Z-Axis Upper Byte Register
 *
 * - Name: ACCEL_DATA_Z1
 * - Address: 0x23
 * - SerialIF : SYNCR
 * - Reset Value: 0x80
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | ACCEL_DATA_Z[15:8]| Upper Byte Accel Z-axis Data	       |
 */
#define ACCEL_DATA_Z1 0x23

/**
 * @brief Accelerometer Z-Axis Low Byte Register
 *
 * - Name: ACCEL_DATA_Z0
 * - Address: 0x24
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | ACCEL_DATA_Z[7:0] | Lower Byte Accel Z-axis Data            |
 */
#define ACCEL_DATA_Z0 0x24

/**
 * @brief Gyroscope X-Axis Upper Byte Register
 *
 * - Name: GYRO_DATA_X1
 * - Address: 0x25
 * - SerialIF: SYNCR
 * - Reset Value: 0x80
 * - Clock DomainL SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_X[15:8] | Upper byte of Gyro X-axis data          |
 */
#define GYRO_DATA_X1 0x25

/**
 * @brief Gyroscope X-Axis Low Byte Register
 *
 * - Name: GYRO_DATA_X0
 * - Address: 0x26
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_X[7:0]  | Lower byte of Gyro X-axis data          |
 */
#define GYRO_DATA_X0 0x26

/**
 * @brief Gyroscope Y-Axis Upper Byte Register
 *
 * - Name: GYRO_DATA_Y1
 * - Address: 0x27
 * - SerialIF: SYNCR
 * - Reset Value: 0x80
 * - Clock DomainL SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_Y[15:8] | Upper byte of Gyro X-axis data          |
 */
#define GYRO_DATA_Y1 0x27

/**
 * @brief Gyroscope Y-Axis Low Byte Register
 *
 * - Name: GYRO_DATA_Y0
 * - Address: 0x28
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_Y[7:0]  | Lower byte of Gyro Y-axis data          |
 */
#define GYRO_DATA_Y0 0x28

/**
 * @brief Gyroscope Z-Axis Upper Byte Register
 *
 * - Name: GYRO_DATA_Z1
 * - Address: 0x29
 * - SerialIF: SYNCR
 * - Reset Value: 0x80
 * - Clock DomainL SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_Z[15:8] | Upper byte of Gyro Z-axis data          |
 */
#define GYRO_DATA_Z1 0x29

/**
 * @brief Gyroscope Z-Axis Low Byte Register
 *
 * - Name: GYRO_DATA_Z0
 * - Address: 0x2A
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | Function                                |
 * |-----|-------------------|-----------------------------------------|
 * | 7:0 | GYRO_DATA_Z[7:0]  | Lower byte of Gyro Z-axis data          |
 */
#define GYRO_DATA_Z0 0x2A

/**
 * @brief FSYNC time delta upper byte register
 *
 * - Name: TMST_FSYNCH
 * - Address: 0x2B
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                     | Function                                |
 * |-----|--------------------------|-----------------------------------------|
 * | 7:0 | TMST_FSYNC_DATA_UI[15:8] | Store the upper byte of the time delta  |
 */
#define TMST_FSYNCH 0x2B

/**
 * @brief FSYNC time detla lower byte register
 *
 * - Name: TMST_FSYNCL
 * - Address: 0x2C
 * - SerialIF: SYNCR
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                    | Function                          |
 * |-----|-------------------------|-----------------------------------|
 * | 7:0 | TMST_FSYNC_DATA_UI[7:0] | Store the lower byte of time delta|
 */
#define TMST_FSYNCL 0x2C

/**
 * @brief Interrupt Status Register
 *
 * - Name: INT_STATUS
 * - Address: 0x2D
 * - SerialIF: R/C
 * - Reset Value: 0x10
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                    | Function                               |
 * |-----|-------------------------|----------------------------------------|
 * | 7   | -			   | Reserved                               |
 * | 6   | UI_FSYNC_INT 	   | Set when UI FSYNC INT is generated     |
 * | 5   | PLL_RDY_INT		   | Set when PLL Ready INT is generated    |
 * | 4   | RESET_DONE_INT          | Set when software reset is complete    |
 * | 3   | DATA_RDY_INT            | Set when Data ready INT is generated   |
 * | 2   | FIFO_THS_INT            | Set when FIFO reaches thereshold value |
 * | 1   | FIFO_FULL_INT	   | Set when FIFO is full		    |
 * | 0   | AGC_RDY_INT 		   | Set when AGC ready INT is generated    |
 *
 * Note:
 * - All the bits are cleared when the register is read
 * - Always read and save the whole register
 */
#define INT_STATUS 0x2D

/**
 * @brief FIFO Count upper byte register
 *
 * - Name: FIFO_COUNTH
 * - Address: 0x2E
 * - SerialIF: R
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME 		   | Function				    |
 * |-----|-----------------|----------------------------|
 * | 7:0 | FIFOCOUNT[15:8] | Number of bytes in FIFO	|
 *
 * Note:
 * - Reading this register latched the data for both FIFO_COUNTH and
 *   FIFO_COUNTL
 */
#define FIFO_COUNTH 0x2E

/**
 * @brief FIFO Count upper byte register
 *
 * - Name: FIFO_COUNTH
 * - Address: 0x2F
 * - SerialIF: R
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME 		   | Function				    |
 * |-----|-----------------|----------------------------|
 * | 7:0 | FIFOCOUNT[15:8] | Number of bytes in FIFO	|
 *
 * Note:
 * - Must read FIFO_COUNTH to latch the data
 */
#define FIFO_COUNTL 0x2F

/**
 * @breif FIFO Data Register
 *
 * - Name: FIFO_DATA
 * - Address: 0x30
 * - SerialIF: R
 * - Reset Value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                   | Function        |
 * |-----|------------------------|-----------------|
 * | 7:0 | FIFO_DATA[7:0]	      | FIFO Data port	|
 */
#define FIFO_DATA 0x30

/**
 * @brief Pedometer count lower byte register
 *
 * - Name: APEX_DATA0
 * - Address: 49 (31h)
 * - Serial IF: SYNCR
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME 		  | Function 				    |
 * |-----|------------------------|-----------------------------------------|
 * | 7:0 | STEP_CNT[7:0]	  | Pedometer Output: Lower Byte	    |
 */
#define APEX_DATA0 0x31

/**
 * @breif Pedometer count upper byte register
 *
 * - Name: APEX_DATA1
 * - Address: 50 (32h)
 * - Serial IF: SYNCR
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			  | Function 				    |
 * |-----|----------------|-----------------------------|
 * | 7:0 | STEP_CNT[15:7] | Pedometer Output: Uper Byte |
 */
#define APEX_DATA1 0x32

/**
 * @breif Pedometer Step cadence upper byte register
 *
 * - Name: APEX_DATA2
 * - Address: 51 (33h)
 * - Serial IF: R
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			  | Function				      |
 * |-----|----------------|-------------------------------|
 * | 7:0 | STEP_CADENCE	  | Pedometer Output: Walk Cadence|
 *
 * Note:
 *  - Format is u6.2
 *  - E.g. At 50Hz ODR and 2Hz walk frequency, the cadency is 25 samples. The
 * Register outputs 100.
 */
#define APEX_DATA2 0x33

/**
 * @brief Apex Data 3 Register
 *
 * - Name: APEX_DATA3
 * - Address: 52 (34h)
 * - Serial IF: R
 * - Reset value: 0x04
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                                |
 * |-----|------------------------|-----------------------------------------|
 * | 7:3 | -			          | Reserved | | 2   | DMP_IDLE
 * | 0: Indicates DMP is running             | |     |                        |
 * 1: Indicates DMP is idle		        | | 1:0 | ACTIVITY_CLASS
 * | Pedometer Output: Detected Activity     | |     |
 * | 00: Unknown				                | |     |
 * | 01: Walk				                | |     |
 * | 10: Run				                    | |	 |
 * | 11: Reserved			                |
 */
#define APEX_DATA3 0x34

/**
 * @breif Apex Data 4 Register
 *
 * - Name: APEX_DATA4
 * - Address: 53 (35h)
 * - Serial IF: R
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME		  | FUNCTION				    |
 * |-----|------------|-----------------------------|
 * | 7:5 | -		  | Reserved				    |
 * | 4:3 | TAP_NUM	  | Tap detection: No. of taps in event     |
 * |	 |			  | 00: No Tap				    |
 * |     |            | 01: Single Tap			    |
 * |	 |			  | 10: Double Tap			    |
 * |	 |			  | 11: Reserved			    |
 * | 2:1 | TAP_AXIS   | Accel Axis where tap is concentrated    |
 * |	 |			  | 00: X-Axis				    |
 * |     |			  | 01: Y-Axis				    |
 * |	 |			  | 10: Z-Axis				    |
 * |	 |			  | 11: Reserved			    |
 * | 0	 | TAP_DIR	  | Polarity of tap pulse		|
 * |	 |			  | 0: curr-prev = positive		|
 * |	 |			  | 1: curr-prev = negative		|
 */
#define APEX_DATA4 0x35

/**
 * @breif Apex Data 5 Register
 *
 * - Name: APEX_DATA5
 * - Address: 54 (36h)
 * - Serial IF: R
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			  | FUNCTION |
 * |-----|------------------------|-----------------------------------------|
 * | 7:6 | -			          | Reserved | | 5:0 |
 * DOUBLE_TAP_TIMING      | Time(s) = DOUBLE_TAP_TIMING * 16 / ODR  |
 *
 * Note:
 * 	- DOUBLE_TAP_TIMING measures the time interval between the two taps
 *        when double tap is detected. It counts every 16 accelerometer samples
 * as one unit between the 2 tap pulses. Therefore, the value is related to the
 *        accelerometer ODR.
 *      - Time in seconds = DOUBLE_TAP_TIMING * 16 / ODR
 *      - For example, if the accelerometer ODR is 500 Hz, and the
 *        DOUBLE_TAP_TIMING register reading is 6, the time interval value is
 *        6*16/500 = 0.192 seconds.
 */
#define APEX_DATA5 0x36

/**
 * @breif Interrupt Status 2 Register
 *
 * - Name: INT_STATUS2
 * - Address: 55 (37h)
 * - Serial IF: R/C
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			  | FUNCTION |
 * |-----|----------------|------------------------------------|
 * | 7:4 | -			  | Reserved | | 3	 | SMD_INT        |
 * Significant Motion Detection INT   | | 2   | WOM_Z_INT	  | Wake on
 * Motion Interrupt on Z-Axis| | 1	 | WOM_Y_INT	  | Wake on Motion
 * Interrupt on Y-Axis| | 0	 | WOM_X_INT	  | Wake on Motion Interrupt on
 * X-Axis|
 */
#define INT_STATUS2 0x37

/**
 * @breif Interrupt Status 3 Register
 *
 * - Name: INT_STATUS3
 * - Address: 56 (38h)
 * - Serial IF: R/C
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			    | FUNCTION |
 * |-----|------------------|------------------------------|
 * | 7:6 | -			    | Reserved | | 5	 | STEP_DET_INT
 * | Step Detection Interrupt 	   | | 4	 | STEP_CNT_OVF_INT	| Step
 * Count Overflow Interrupt| | 3   | TILT_DET_INT		| Tilt
 * Detection Interrupt	   | | 2	 | WAKE_INT		    | Wake
 * Event Interrupt		   | | 1	 | SLEEP_INT		| Sleep
 * Event Interrupt		   | | 0	 | TAP_DET_INT		| Tap
 * Detection Interrupt	   |
 */
#define INT_STATUS3 0x38

/**
 * @brief Signal Path Reset Register
 *
 * - Name: SIGNAL_PATH_RESET
 * - Address: 75 (4Bh)
 * - Serial IF: W/C
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME			   | FUNCTION				     |
 * |-----|-----------------|-----------------------------|
 * | 7   | -			   | Reserved				     |
 * | 6   | DMP_INIT_EN	   | Set when DMP is enabled	 |
 * | 5   | DMP_MEM_RESET_EN| Set when DMP memory is reset|
 * | 4   | -			   | Reserved				     |
 * | 3	 | ABORT_AND_RESET | Set when reseting the ODR 	 |
 * | 1	 | TMST_STROBE	   | Set to 1, Time stamp counter latched|
 * | 0   | -			   | Reserved				     |
 */
#define SIGNAL_PATH_RESET 0x4B

/**
 * @brief Interface Configuration Register 0
 *
 * - Name: INTF_CONFIG0
 * - Address: 0x4C
 * - Serial IF: R/W
 * - Reset value: 0x30
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME                     | FUNCTION |
 * |-----|--------------------------|-------------------------------------|
 * | 7   | FIFO_HOLD_LAST_DATA_EN   | Control handling of invalid samples |
 * | 6   | FIFO_COUNT_REC           | FIFO count unit select              |
 * | 5   | FIFO_COUNT_ENDIAN        | FIFO count endianness               |
 * | 4   |SENSOR_DATA_ENDIAN        | Sensor data endianness              |
 * | 3:2 | -                        | Reserved 				  |
 * | 1:0 | UI_SIFS_CFG 		    | Disable SPI / I2C interface         |
 *
 * FIFO_HOLD_LAST_DATA_EN:
 * - 0: Invalid samples are signaled using special values
 *     - Sense registers hold last valid sample
 *     - 16-bit FIFO: Same as sense registers
 *     - 20-bit FIFO:
 *       - Invalid samples = -524288
 *       - Restricted valid ranges (gyro even, accel divisible by 4)
 * - 1: Invalid samples replaced with last valid sample
 *     - Sense registers hold last valid sample
 *     - FIFO holds last valid sample
 *
 * FIFO_COUNT_REC:
 * - 0: FIFO count reported in bytes
 * - 1: FIFO count reported in records
 *
 * FIFO_COUNT_ENDIAN:
 * - 0: FIFO count in Little Endian
 * - 1: FIFO count in Big Endian (default)
 *
 * SENSOR_DATA_ENDIAN:
 * - 0: Sensor data in Little Endian
 * - 1: Sensor data in Big Endian (default)
 *
 * UI_SIFS_CFG:
 * - 00: Reserved
 * - 10: Disable SPI interface
 * - 11: Disable I2C interface
 */
#define INTF_CONFIG0 0x4C

/**
 * @brief Interface Configuration Register 1
 *
 * - Name: INTF_CONFIG1
 * - Address: 0x4D
 * - Serial IF: R/W
 * - Reset value: 0x91
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | FUNCTION                                      |
 * |-----|--------------------|-----------------------------------------------|
 * | 7:4 | -                  | Reserved                                      |
 * | 3   | ACCEL_LP_CLK_SEL   | Accelerometer LP clock source select          |
 * | 2   | RTC_MODE           | RTC clock input requirement                   |
 * | 1:0 | CLKSEL             | System clock source select                    |
 *
 * ACCEL_LP_CLK_SEL:
 * - 0: Accelerometer LP mode uses Wake-Up oscillator clock
 * - 1: Accelerometer LP mode uses RC oscillator clock
 *
 * RTC_MODE:
 * - 0: No input RTC clock is required
 * - 1: RTC clock input is required
 *
 * CLKSEL:
 * - 00: Always select internal RC oscillator
 * - 01: Select PLL when available, else RC oscillator (default)
 * - 10: Reserved
 * - 11: Disable all clocks
 */
#define INTF_CONFIG1 0x4D

/**
 * @brief Power Management Register 0
 *
 * - Name: PWR_MGMT0
 * - Address: 0x4E
 * - Serial IF: R/W
 * - Reset value: 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME        | FUNCTION                                      |
 * |-----|-------------|-----------------------------------------------|
 * | 7:6 | -           | Reserved                                      |
 * | 5   | TEMP_DIS    | Temperature sensor enable/disable             |
 * | 4   | IDLE        | RC oscillator idle control                    |
 * | 3:2 | GYRO_MODE   | Gyroscope operating mode                      |
 * | 1:0 | ACCEL_MODE  | Accelerometer operating mode                  |
 *
 * TEMP_DIS:
 * - 0: Temperature sensor enabled (default)
 * - 1: Temperature sensor disabled
 *
 * IDLE:
 * - 0: RC oscillator powers off when Accel and Gyro are off (default)
 * - 1: RC oscillator remains powered on even if Accel and Gyro are off
 *
 * GYRO_MODE:
 * - 00: Gyroscope OFF (default)
 * - 01: Gyroscope Standby mode
 * - 10: Reserved
 * - 11: Gyroscope Low Noise (LN) mode
 *
 * ACCEL_MODE:
 * - 00: Accelerometer OFF (default)
 * - 01: Accelerometer OFF
 * - 10: Accelerometer Low Power (LP) mode
 * - 11: Accelerometer Low Noise (LN) mode
 *
 * Notes:
 * - Gyroscope must remain ON for a minimum of 45 ms after enabling.
 * - When transitioning from OFF to any other mode, do not issue any
 *   register writes for at least 200 µs.
 */
#define PWR_MGMT0 0x4E

/**
 * @brief Gyroscope Configuration Register 0
 *
 * - Name: GYRO_CONFIG0
 * - Address: 0x4F
 * - Serial IF: R/W
 * - Reset value: 0x06
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME         | FUNCTION                                      |
 * |-----|--------------|-----------------------------------------------|
 * | 7:5 | GYRO_FS_SEL  | Gyroscope full-scale select                   |
 * | 4   | -            | Reserved                                      |
 * | 3:0 | GYRO_ODR     | Gyroscope output data rate (ODR) select       |
 *
 * GYRO_FS_SEL:
 * - 000: ±2000 dps (default)
 * - 001: ±1000 dps
 * - 010: ±500 dps
 * - 011: ±250 dps
 * - 100: ±125 dps
 * - 101: ±62.5 dps
 * - 110: ±31.25 dps
 * - 111: ±15.625 dps
 *
 * GYRO_ODR:
 * - 0000: Reserved
 * - 0001: 32 kHz
 * - 0010: 16 kHz
 * - 0011: 8 kHz
 * - 0100: 4 kHz
 * - 0101: 2 kHz
 * - 0110: 1 kHz (default)
 * - 0111: 200 Hz
 * - 1000: 100 Hz
 * - 1001: 50 Hz
 * - 1010: 25 Hz
 * - 1011: 12.5 Hz
 * - 1100: Reserved
 * - 1101: Reserved
 * - 1110: Reserved
 * - 1111: 500 Hz
 */
#define GYRO_CONFIG0 0x4F

/**
 * @brief Accelerometer Configuration Register 0
 *
 * - Name: ACCEL_CONFIG0
 * - Address: 0x50
 * - Serial IF: R/W
 * - Reset value: 0x06
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME          | FUNCTION                                      |
 * |-----|---------------|-----------------------------------------------|
 * | 7:5 | ACCEL_FS_SEL  | Accelerometer full-scale select               |
 * | 4   | -             | Reserved                                      |
 * | 3:0 | ACCEL_ODR     | Accelerometer output data rate (ODR) select   |
 *
 * ACCEL_FS_SEL:
 * - 000: ±16 g (default)
 * - 001: ±8 g
 * - 010: ±4 g
 * - 011: ±2 g
 * - 100: Reserved
 * - 101: Reserved
 * - 110: Reserved
 * - 111: Reserved
 *
 * ACCEL_ODR:
 * - 0000: Reserved
 * - 0001: 32 kHz (LN mode)
 * - 0010: 16 kHz (LN mode)
 * - 0011: 8 kHz (LN mode)
 * - 0100: 4 kHz (LN mode)
 * - 0101: 2 kHz (LN mode)
 * - 0110: 1 kHz (LN mode) (default)
 * - 0111: 200 Hz (LP or LN mode)
 * - 1000: 100 Hz (LP or LN mode)
 * - 1001: 50 Hz (LP or LN mode)
 * - 1010: 25 Hz (LP or LN mode)
 * - 1011: 12.5 Hz (LP or LN mode)
 * - 1100: 6.25 Hz (LP mode)
 * - 1101: 3.125 Hz (LP mode)
 * - 1110: 1.5625 Hz (LP mode)
 */
#define ACCEL_CONFIG0 0x50

/**
 * @brief Gyroscope Configuration Register 1
 *
 * - Name: GYRO_CONFIG1
 * - Address: 0x51
 * - Serial IF: R/W
 * - Reset value: 0x16
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME              | FUNCTION                                      |
 * |-----|-------------------|-----------------------------------------------|
 * | 7:5 | TEMP_FILT_BW      | Temperature signal DLPF bandwidth select      |
 * | 4   | -                 | Reserved                                      |
 * | 3:2 | GYRO_UI_FILT_ORD  | Gyroscope UI filter order                     |
 * | 1:0 | GYRO_DEC2_M2_ORD  | Gyroscope DEC2_M2 filter order                |
 *
 * TEMP_FILT_BW:
 * - 000: DLPF BW = 4000 Hz; Latency = 0.125 ms (default)
 * - 001: DLPF BW = 170 Hz;  Latency = 1 ms
 * - 010: DLPF BW = 82 Hz;   Latency = 2 ms
 * - 011: DLPF BW = 40 Hz;   Latency = 4 ms
 * - 100: DLPF BW = 20 Hz;   Latency = 8 ms
 * - 101: DLPF BW = 10 Hz;   Latency = 16 ms
 * - 110: DLPF BW = 5 Hz;    Latency = 32 ms
 * - 111: DLPF BW = 5 Hz;    Latency = 32 ms
 *
 * GYRO_UI_FILT_ORD:
 * - 00: 1st order
 * - 01: 2nd order
 * - 10: 3rd order
 * - 11: Reserved
 *
 * GYRO_DEC2_M2_ORD:
 * - 00: Reserved
 * - 01: Reserved
 * - 10: 3rd order
 * - 11: Reserved
 */
#define GYRO_CONFIG1 0x51

/**
 * @brief Gyroscope and Accelerometer UI Filter Bandwidth Configuration
 *
 * - Name: GYRO_ACCEL_CONFIG0
 * - Address: 0x52
 * - Serial IF: R/W
 * - Reset value: 0x11
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | FUNCTION                                      |
 * |-----|--------------------|-----------------------------------------------|
 * | 7:4 | ACCEL_UI_FILT_BW   | Accelerometer UI LPF bandwidth selection     |
 * | 3:0 | GYRO_UI_FILT_BW    | Gyroscope UI LPF bandwidth selection          |
 *
 * ACCEL_UI_FILT_BW:
 *
 * - LN Mode:
 *   - 0: BW = ODR / 2
 *   - 1: BW = max(400 Hz, ODR) / 4 (default)
 *   - 2: BW = max(400 Hz, ODR) / 5
 *   - 3: BW = max(400 Hz, ODR) / 8
 *   - 4: BW = max(400 Hz, ODR) / 10
 *   - 5: BW = max(400 Hz, ODR) / 16
 *   - 6: BW = max(400 Hz, ODR) / 20
 *   - 7: BW = max(400 Hz, ODR) / 40
 *   - 8–13: Reserved
 *   - 14: Low-latency mode
 *     - Trivial decimation @ ODR of Dec2 filter output
 *     - Dec2 runs at max(400 Hz, ODR)
 *   - 15: Low-latency mode
 *     - Trivial decimation @ ODR of Dec2 filter output
 *     - Dec2 runs at max(200 Hz, 8×ODR)
 *
 * - LP Mode:
 *   - 0: Reserved
 *   - 1: 1× AVG filter (default)
 *   - 2–5: Reserved
 *   - 6: 16× AVG filter
 *   - 7–15: Reserved
 *
 * GYRO_UI_FILT_BW:
 *
 * - LN Mode:
 *   - 0: BW = ODR / 2
 *   - 1: BW = max(400 Hz, ODR) / 4 (default)
 *   - 2: BW = max(400 Hz, ODR) / 5
 *   - 3: BW = max(400 Hz, ODR) / 8
 *   - 4: BW = max(400 Hz, ODR) / 10
 *   - 5: BW = max(400 Hz, ODR) / 16
 *   - 6: BW = max(400 Hz, ODR) / 20
 *   - 7: BW = max(400 Hz, ODR) / 40
 *   - 8–13: Reserved
 *   - 14: Low-latency mode
 *     - Trivial decimation @ ODR of Dec2 filter output
 *     - Dec2 runs at max(400 Hz, ODR)
 *   - 15: Low-latency mode
 *     - Trivial decimation @ ODR of Dec2 filter output
 *     - Dec2 runs at max(200 Hz, 8×ODR)
 */
#define GYRO_ACCEL_CONFIG0 0x52

/**
 * @brief Accelerometer Configuration Register 1
 *
 * - Name: ACCEL_CONFIG1
 * - Address: 0x53
 * - Serial IF: R/W
 * - Reset value: 0x0D
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME               | FUNCTION                                      |
 * |-----|--------------------|-----------------------------------------------|
 * | 7:5 | -                  | Reserved                                      |
 * | 4:3 | ACCEL_UI_FILT_ORD  | Accelerometer UI filter order                 |
 * | 2:1 | ACCEL_DEC2_M2_ORD  | Accelerometer DEC2_M2 filter order            |
 * | 0   | -                  | Reserved                                      |
 *
 * ACCEL_UI_FILT_ORD:
 * - 00: 1st order
 * - 01: 2nd order
 * - 10: 3rd order
 * - 11: Reserved
 *
 * ACCEL_DEC2_M2_ORD:
 * - 00: Reserved
 * - 01: Reserved
 * - 10: 3rd order
 * - 11: Reserved
 */
#define ACCEL_CONFIG1 0x53

/**
 * @brief Timestamp Configuration Register
 *
 * - Name: TMST_CONFIG
 * - Address: 0x54
 * - Serial IF: R/W
 * - Reset value: 0x23
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME             | FUNCTION                                      |
 * |-----|------------------|-----------------------------------------------|
 * | 7:5 | -                | Reserved                                      |
 * | 4   | TMST_TO_REGS_EN  | Enable timestamp value readback               |
 * | 3   | TMST_RES         | Timestamp resolution select                   |
 * | 2   | TMST_DELTA_EN    | Timestamp delta enable                        |
 * | 1   | TMST_FSYNC_EN    | Timestamp FSYNC enable                        |
 * | 0   | TMST_EN          | Timestamp enable                              |
 *
 * TMST_TO_REGS_EN:
 * - 0: TMST_VALUE[19:0] read always returns 0
 * - 1: TMST_VALUE[19:0] read returns timestamp value
 *
 * TMST_RES:
 * - 0: Timestamp resolution = 1 µs (default)
 * - 1:
 *   - If RTC disabled: resolution = 16 µs
 *   - If RTC enabled: resolution = 1 RTC clock period
 *
 * TMST_DELTA_EN:
 * - 0: Timestamp reports absolute time
 * - 1: Timestamp reports time since last ODR event
 *
 * TMST_FSYNC_EN:
 * - 0: Timestamp FSYNC feature disabled
 * - 1: Timestamp FSYNC feature enabled (default)
 *   - FIFO_TMST_FSYNC_EN must also be set to propagate timestamp to FIFO
 *
 * TMST_EN:
 * - 0: Timestamp register disabled
 * - 1: Timestamp register enabled (default)
 */
#define TMST_CONFIG 0x54

/**
 * @brief APEX Configuration Register 0
 *
 * - Name: APEX_CONFIG0
 * - Address: 0x56
 * - Serial IF: R/W
 * - Reset value: 0x82
 * - Clock Domain: SCLK_UI
 *
 * | BIT | NAME            | FUNCTION                                      |
 * |-----|-----------------|-----------------------------------------------|
 * | 7   | DMP_POWER_SAVE  | DMP power save mode control                   |
 * | 6   | TAP_ENABLE      | Tap detection enable                          |
 * | 5   | PED_ENABLE      | Pedometer enable                              |
 * | 4   | TILT_ENABLE     | Tilt detection enable                         |
 * | 3   | R2W_EN          | Raise-to-Wake / Raise-to-Sleep enable         |
 * | 2   | -               | Reserved                                      |
 * | 1:0 | DMP_ODR         | DMP output data rate select                   |
 *
 * DMP_POWER_SAVE:
 * - 0: DMP power save mode not active
 * - 1: DMP power save mode active (default)
 *
 * TAP_ENABLE:
 * - 0: Tap detection disabled
 * - 1: Tap detection enabled
 *   - Accelerometer ODR must be one of: 200 Hz, 500 Hz, or 1 kHz
 *
 * PED_ENABLE:
 * - 0: Pedometer disabled
 * - 1: Pedometer enabled
 *
 * TILT_ENABLE:
 * - 0: Tilt detection disabled
 * - 1: Tilt detection enabled
 *
 * R2W_EN:
 * - 0: Raise-to-Wake / Raise-to-Sleep disabled
 * - 1: Raise-to-Wake / Raise-to-Sleep enabled
 *
 * DMP_ODR:
 * - 00: 25 Hz
 * - 01: Reserved
 * - 10: 50 Hz
 * - 11: Reserved
 */
#define APEX_CONFIG0 0x56

/**
 * @brief Significant Motion Detection Configuration Register
 *
 * - Name         : SMD_CONFIG
 * - Address      : 0x57
 * - Serial IF    : R/W
 * - Reset value : 0x00
 * - Clock Domain: SCLK_UI
 *
 * | BITS | NAME         | FUNCTION                                 |
 * |------|--------------|------------------------------------------|
 * | 7:4  | -            | Reserved                                 |
 * | 3    | WOM_INT_MODE | WoM interrupt combination mode           |
 * | 2    | WOM_MODE     | WoM comparison mode                      |
 * | 1:0  | SMD_MODE     | Significant Motion Detection mode select |
 *
 * WOM_INT_MODE:
 * - 0: WoM interrupt triggered on OR of all enabled accel thresholds
 * - 1: WoM interrupt triggered on AND of all enabled accel thresholds
 *
 * WOM_MODE:
 * - 0: Initial sample stored; future samples compared to initial sample
 * - 1: Current sample compared to previous sample
 *
 * SMD_MODE:
 * - 00: SMD disabled
 * - 01: Reserved
 * - 10: SMD short (1 second wait)
 *       An SMD event is detected when two WoM events occur 1 second apart
 * - 11: SMD long (3 second wait)
 *       An SMD event is detected when two WoM events occur 3 seconds apart
 */
#define SMD_CONFIG 0x57

/**
 * @brief FIFO Configuration Register 1
 *
 * Name         : FIFO_CONFIG1
 * Address      : 0x5F
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                                  |
 * |-----|------------------------|-------------------------------------------|
 * | 7   | -                      | Reserved                                  |
 * | 6   | FIFO_RESUME_PARTIAL_RD | Partial FIFO read resume control          |
 * | 5   | FIFO_WM_GT_TH          | FIFO watermark interrupt behavior         |
 * | 4   | FIFO_HIRES_EN          | Enable high-resolution data in FIFO       |
 * | 3   | FIFO_TMST_FSYNC_EN     | Enable timestamp / FSYNC support for FIFO |
 * | 2   | FIFO_TEMP_EN           | Enable temperature sensor packets to FIFO |
 * | 1   | FIFO_GYRO_EN           | Enable gyroscope packets to FIFO          |
 * | 0   | FIFO_ACCEL_EN          | Enable accelerometer packets to FIFO      |
 *
 * FIFO_RESUME_PARTIAL_RD:
 * - 0: Partial FIFO read disabled; entire FIFO must be re-read
 * - 1: Partial FIFO read enabled; resume from last read position
 *
 * FIFO_WM_GT_TH:
 * - 0: Watermark interrupt on threshold crossing
 * - 1: Watermark interrupt on every ODR (DMA write) while FIFO_COUNT ≥
 * FIFO_WM_TH
 *
 * FIFO_HIRES_EN:
 * - 0: Standard resolution FIFO data
 * - 1: Extended resolution FIFO data (20-bit accel/gyro, extended temperature)
 *
 * FIFO_TMST_FSYNC_EN:
 * - 0: Disabled
 * - 1: Must be set when FSYNC is used with FIFO
 *
 * FIFO_TEMP_EN:
 * - 0: Temperature data not stored in FIFO
 * - 1: Temperature data stored in FIFO
 *
 * FIFO_GYRO_EN:
 * - 0: Gyroscope data not stored in FIFO
 * - 1: Gyroscope data stored in FIFO
 *
 * FIFO_ACCEL_EN:
 * - 0: Accelerometer data not stored in FIFO
 * - 1: Accelerometer data stored in FIFO
 */
#define FIFO_CONFIG1 0x5F

/**
 * @brief FIFO Configuration Register 2
 *
 * Name         : FIFO_CONFIG2
 * Address      : 0x60
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME          | FUNCTION                                |
 * |------|---------------|-----------------------------------------|
 * | 7:0  | FIFO_WM[7:0]  | Lower 8 bits of FIFO watermark threshold|
 *
 * FIFO_WM[7:0]:
 * - Sets the lower bits of the FIFO watermark level
 * - Generates an interrupt when FIFO size reaches or exceeds FIFO_WM
 * - FIFO size units (bytes or records) depend on FIFO_COUNT_REC setting
 * - Watermark interrupt fires only once per threshold crossing
 * - Must be programmed to a non-zero value before enabling this interrupt
 */
#define FIFO_CONFIG2 0x60

/**
 * @brief FIFO Configuration Register 3
 *
 * Name         : FIFO_CONFIG3
 * Address      : 0x61
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME           | FUNCTION                                |
 * |------|----------------|-----------------------------------------|
 * | 7:4  | -              | Reserved                                |
 * | 3:0  | FIFO_WM[11:8]  | Upper 4 bits of FIFO watermark threshold|
 *
 * FIFO_WM[11:8]:
 * - Sets the upper bits of the FIFO watermark level
 * - Used together with FIFO_WM[7:0] to form full FIFO watermark
 * - Generates an interrupt when FIFO size reaches or exceeds FIFO_WM
 * - FIFO size units (bytes or records) depend on FIFO_COUNT_REC setting
 * - Watermark interrupt fires only once per threshold crossing
 * - Must be programmed to a non-zero value before enabling this interrupt
 */
#define FIFO_CONFIG3 0x61

/**
 * @brief FSYNC Configuration Register
 *
 * Name         : FSYNC_CONFIG
 * Address      : 0x62
 * Serial IF    : R/W
 * Reset value  : 0x10
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION                         |
 * |------|-------------------------|----------------------------------|
 * | 7    | -                       | Reserved                         |
 * | 6:4  | FSYNC_UI_SEL            | FSYNC flag tagging select        |
 * | 3:2  | -                       | Reserved                         |
 * | 1    | FSYNC_UI_FLAG_CLEAR_SEL | FSYNC flag clear condition select|
 * | 0    | FSYNC_POLARITY          | FSYNC pulse polarity select      |
 *
 * FSYNC_UI_SEL:
 * - 000: Do not tag FSYNC flag
 * - 001: Tag FSYNC flag to TEMP_OUT LSB
 * - 010: Tag FSYNC flag to GYRO_XOUT LSB
 * - 011: Tag FSYNC flag to GYRO_YOUT LSB
 * - 100: Tag FSYNC flag to GYRO_ZOUT LSB
 * - 101: Tag FSYNC flag to ACCEL_XOUT LSB
 * - 110: Tag FSYNC flag to ACCEL_YOUT LSB
 * - 111: Tag FSYNC flag to ACCEL_ZOUT LSB
 *
 * FSYNC_UI_FLAG_CLEAR_SEL:
 * - 0: FSYNC flag cleared when UI sensor register is updated
 * - 1: FSYNC flag cleared when UI interface reads the LSB of the FSYNC-tagged
 * axis
 *
 * FSYNC_POLARITY:
 * - 0: Measure FSYNC interval starting from rising edge of FSYNC pulse
 * - 1: Measure FSYNC interval starting from falling edge of FSYNC pulse
 */
#define FSYNC_CONFIG 0x62

/**
 * @brief Interrupt Configuration Register 0
 *
 * Name         : INT_CONFIG0
 * Address      : 0x63
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                | FUNCTION |
 * |------|---------------------|-----------------------------------------------------|
 * | 7:6  | -                   | Reserved | | 5:4  | UI_DRDY_INT_CLEAR   | UI
 * Data Ready interrupt clear option (latched mode) | | 3:2  |
 * FIFO_THS_INT_CLEAR  | FIFO threshold interrupt clear option (latched mode)|
 * | 1:0  | FIFO_FULL_INT_CLEAR | FIFO full interrupt clear option (latched
 * mode)     |
 *
 * UI_DRDY_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on Sensor Register Read
 * - 11: Clear on Status Bit Read AND on Sensor Register Read
 *
 * FIFO_THS_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on FIFO data 1 byte read
 * - 11: Clear on Status Bit Read AND on FIFO data 1 byte read
 *
 * FIFO_FULL_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on FIFO data 1 byte read
 * - 11: Clear on Status Bit Read AND on FIFO data 1 byte read
 */

/**
 * @brief Interrupt Configuration Register 0
 *
 * Name         : INT_CONFIG0
 * Address      : 0x63
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                | FUNCTION |
 * |------|---------------------|--------------------------------------------------------------|
 * | 7:6  | -                   | Reserved | | 5:4  | UI_DRDY_INT_CLEAR   | UI
 * Data Ready interrupt clear option (latched mode)          | | 3:2  |
 * FIFO_THS_INT_CLEAR  | FIFO threshold interrupt clear option (latched mode) |
 * | 1:0  | FIFO_FULL_INT_CLEAR | FIFO full interrupt clear option (latched
 * mode)              |
 *
 * UI_DRDY_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on Sensor Register Read
 * - 11: Clear on Status Bit Read AND on Sensor Register Read
 *
 * FIFO_THS_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on FIFO data 1 byte read
 * - 11: Clear on Status Bit Read AND on FIFO data 1 byte read
 *
 * FIFO_FULL_INT_CLEAR:
 * - 00: Clear on Status Bit Read (default)
 * - 01: Clear on Status Bit Read
 * - 10: Clear on FIFO data 1 byte read
 * - 11: Clear on Status Bit Read AND on FIFO data 1 byte read
 */
#define INT_CONFIG0 0x63

/**
 * @brief Interrupt Configuration Register 1
 *
 * Name         : INT_CONFIG1
 * Address      : 0x64
 * Serial IF    : R/W
 * Reset value  : 0x10
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION                               |
 * |------|-------------------------|----------------------------------------|
 * | 7    | -                       | Reserved                               |
 * | 6    | INT_TPULSE_DURATION     | Interrupt pulse duration select        |
 * | 5    | INT_TDEASSERT_DISABLE   | Interrupt de-assertion duration control|
 * | 4    | INT_ASYNC_RESET         | INT pin async reset control            |
 * | 3:0  | -                       | Reserved                               |
 *
 * INT_TPULSE_DURATION:
 * - 0: Interrupt pulse duration = 100 µs (ODR < 4 kHz only, default)
 * - 1: Interrupt pulse duration = 8 µs
 *      Required for ODR ≥ 4 kHz, optional for ODR < 4 kHz
 *
 * INT_TDEASSERT_DISABLE:
 * - 0: De-assert duration minimum = 100 µs (ODR < 4 kHz only, default)
 * - 1: Disable de-assert duration
 *      Required for ODR ≥ 4 kHz, optional for ODR < 4 kHz
 *
 * INT_ASYNC_RESET:
 * - 0: Required setting for proper INT1 and INT2 pin operation
 * - 1: Default setting
 */
#define INT_CONFIG1 0x64

/**
 * @brief Interrupt Source Register 0
 *
 * Name         : INT_SOURCE0
 * Address      : 0x65
 * Serial IF    : R/W
 * Reset value  : 0x10
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                              |
 * |-----|------------------------|---------------------------------------|
 * | 7   | -                      | Reserved                              |
 * | 6   | UI_FSYNC_INT1_EN       | Route UI FSYNC interrupt to INT1      |
 * | 5   | PLL_RDY_INT1_EN        | Route PLL ready interrupt to INT1     |
 * | 4   | RESET_DONE_INT1_EN     | Route reset-done interrupt to INT1    |
 * | 3   | UI_DRDY_INT1_EN        | Route UI data-ready interrupt to INT1 |
 * | 2   | FIFO_THS_INT1_EN       | Route FIFO threshold interrupt to INT1|
 * | 1   | FIFO_FULL_INT1_EN      | Route FIFO full interrupt to INT1     |
 * | 0   | UI_AGC_RDY_INT1_EN     | Route UI AGC-ready interrupt to INT1  |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT1
 * - 1: Interrupt routed to INT1
 */
#define INT_SOURCE0 0x65

/**
 * @brief Interrupt Source Register 1
 *
 * Name         : INT_SOURCE1
 * Address      : 0x66
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                         | FUNCTION                           |
 * |-----|------------------------------|------------------------------------|
 * | 7   | -                            | Reserved                           |
 * | 6   | I3C_PROTOCOL_ERROR_INT1_EN   | Route I3C protocol error to INT1   |
 * | 5:4 | -                            | Reserved                           |
 * | 3   | SMD_INT1_EN                  | Route SMD interrupt to INT1        |
 * | 2   | WOM_Z_INT1_EN                | Route Z-axis WOM interrupt to INT1 |
 * | 1   | WOM_Y_INT1_EN                | Route Y-axis WOM interrupt to INT1 |
 * | 0   | WOM_X_INT1_EN                | Route X-axis WOM interrupt to INT1 |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT1
 * - 1: Interrupt routed to INT1
 */
#define INT_SOURCE1 0x66

/**
 * @brief Interrupt Source Register 3
 *
 * Name         : INT_SOURCE3
 * Address      : 0x68
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                              |
 * |-----|------------------------|---------------------------------------|
 * | 7   | -                      | Reserved                              |
 * | 6   | UI_FSYNC_INT2_EN       | Route UI FSYNC interrupt to INT2      |
 * | 5   | PLL_RDY_INT2_EN        | Route PLL ready interrupt to INT2     |
 * | 4   | RESET_DONE_INT2_EN     | Route reset-done interrupt to INT2    |
 * | 3   | UI_DRDY_INT2_EN        | Route UI data-ready interrupt to INT2 |
 * | 2   | FIFO_THS_INT2_EN       | Route FIFO threshold interrupt to INT2|
 * | 1   | FIFO_FULL_INT2_EN      | Route FIFO full interrupt to INT2     |
 * | 0   | UI_AGC_RDY_INT2_EN     | Route UI AGC-ready interrupt to INT2  |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT2
 * - 1: Interrupt routed to INT2
 */
#define INT_SOURCE3 0x68

/**
 * @brief Interrupt Source Register 4
 *
 * Name         : INT_SOURCE4
 * Address      : 0x69
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                         | FUNCTION                           |
 * |-----|------------------------------|------------------------------------|
 * | 7   | -                            | Reserved                           |
 * | 6   | I3C_PROTOCOL_ERROR_INT2_EN   | Route I3C protocol error to INT2   |
 * | 5:4 | -                            | Reserved                           |
 * | 3   | SMD_INT2_EN                  | Route SMD interrupt to INT2        |
 * | 2   | WOM_Z_INT2_EN                | Route Z-axis WOM interrupt to INT2 |
 * | 1   | WOM_Y_INT2_EN                | Route Y-axis WOM interrupt to INT2 |
 * | 0   | WOM_X_INT2_EN                | Route X-axis WOM interrupt to INT2 |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT2
 * - 1: Interrupt routed to INT2
 */
#define INT_SOURCE4 0x69

/**
 * @brief FIFO Lost Packet Count Register 0
 *
 * Name         : FIFO_LOST_PKT0
 * Address      : 0x6C
 * Serial IF    : R
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION                          |
 * |------|-------------------------|-----------------------------------|
 * | 7:0  | FIFO_LOST_PKT_CNT[7:0]  | Low byte of FIFO lost packet count|
 */
#define FIFO_LOST_PKT0 0x6C

/**
 * @brief FIFO Lost Packet Count Register 1
 *
 * Name         : FIFO_LOST_PKT1
 * Address      : 0x6D
 * Serial IF    : R
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                     | FUNCTION                           |
 * |------|--------------------------|------------------------------------|
 * | 7:0  | FIFO_LOST_PKT_CNT[15:8]  | High byte of FIFO lost packet count|
 */
#define FIFO_LOST_PKT1 0x6D

/**
 * @brief Self-Test Configuration Register
 *
 * Name         : SELF_TEST_CONFIG
 * Address      : 0x70
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME            | FUNCTION                         |
 * |-----|-----------------|----------------------------------|
 * | 7   | -               | Reserved                         |
 * | 6   | ACCEL_ST_POWER  | Enable accel self-test power     |
 * | 5   | EN_AZ_ST        | Enable Z-accel self-test         |
 * | 4   | EN_AY_ST        | Enable Y-accel self-test         |
 * | 3   | EN_AX_ST        | Enable X-accel self-test         |
 * | 2   | EN_GZ_ST        | Enable Z-gyro self-test          |
 * | 1   | EN_GY_ST        | Enable Y-gyro self-test          |
 * | 0   | EN_GX_ST        | Enable X-gyro self-test          |
 *
 * ACCEL_ST_POWER:
 * - 0: Accel self-test power off
 * - 1: Enable accel self-test; clear after test completes
 */
#define SELF_TEST_CONFIG 0x70

/**
 * @brief WHO_AM_I Register
 *
 * Name         : WHO_AM_I
 * Address      : 0x75
 * Serial IF    : R
 * Reset value  : 0x47
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME    | FUNCTION                              |
 * |------|---------|---------------------------------------|
 * | 7:0  | WHOAMI  | Device identification register        |
 */
#define WHO_AM_I 0x75

/**
 * @brief Register Bank Select Register
 *
 * Note: Accessible from all register banks
 *
 * Name         : REG_BANK_SEL
 * Address      : 0x76
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : ALL
 *
 * | BITS | NAME      | FUNCTION                     |
 * |------|-----------|------------------------------|
 * | 7:3  | -         | Reserved                     |
 * | 2:0  | BANK_SEL  | Register bank selection      |
 *
 * BANK_SEL:
 * - 000: Bank 0 (default)
 * - 001: Bank 1
 * - 010: Bank 2
 * - 011: Bank 3
 * - 100: Bank 4
 * - 101–111: Reserved
 */
#define REG_BANK_SEL 0x76

/**
 * @brief Sensor Enable/Disable Register
 *
 * Name         : SENSOR_CONFIG0
 * Address      : 0x03
 * Serial IF    : R/W
 * Reset value  : 0x80
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION                |
 * |------|-------------|-------------------------|
 * | 7:6  | -           | Reserved                |
 * | 5    | ZG_DISABLE  | Disable Z gyroscope     |
 * | 4    | YG_DISABLE  | Disable Y gyroscope     |
 * | 3    | XG_DISABLE  | Disable X gyroscope     |
 * | 2    | ZA_DISABLE  | Disable Z accelerometer |
 * | 1    | YA_DISABLE  | Disable Y accelerometer |
 * | 0    | XA_DISABLE  | Disable X accelerometer |
 *
 * 0: Axis enabled
 * 1: Axis disabled
 */
#define SENSOR_CONFIG0 0x03

/**
 * @brief Gyro AAF and Notch Filter Enable
 *
 * Name         : GYRO_CONFIG_STATIC2
 * Address      : 0x0B
 * Serial IF    : R/W
 * Reset value  : 0xA0
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME         | FUNCTION              |
 * |-----|--------------|-----------------------|
 * | 7:2 | -            | Reserved              |
 * | 1   | GYRO_AAF_DIS | Disable gyro AAF      |
 * | 0   | GYRO_NF_DIS  | Disable notch filter  |
 */
#define GYRO_CONFIG_STATIC2 0x0B

/**
 * @brief Gyro AAF Bandwidth Control (DELT)
 *
 * Name         : GYRO_CONFIG_STATIC3
 * Address      : 0x0C
 * Serial IF    : R/W
 * Reset value  : 0x0D
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME           | FUNCTION          |
 * |------|----------------|-------------------|
 * | 7:6  | -              | Reserved          |
 * | 5:0  | GYRO_AAF_DELT  | AAF bandwidth    |
 */
#define GYRO_CONFIG_STATIC3 0x0C

/**
 * @brief Gyro AAF Bandwidth Control (DELTSQR LSB)
 *
 * Name         : GYRO_CONFIG_STATIC4
 * Address      : 0x0D
 * Serial IF    : R/W
 * Reset value  : 0xAA
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                  | FUNCTION       |
 * |------|-----------------------|----------------|
 * | 7:0  | GYRO_AAF_DELTSQR[7:0] | AAF bandwidth  |
 */
#define GYRO_CONFIG_STATIC4 0x0D

/**
 * @brief Gyro AAF Bandwidth Control (MSB / Bitshift)
 *
 * Name         : GYRO_CONFIG_STATIC5
 * Address      : 0x0E
 * Serial IF    : R/W
 * Reset value  : 0x80
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                   | FUNCTION       |
 * |------|------------------------|----------------|
 * | 7:4  | GYRO_AAF_BITSHIFT      | AAF bandwidth  |
 * | 3:0  | GYRO_AAF_DELTSQR[11:8] | AAF bandwidth  |
 */
#define GYRO_CONFIG_STATIC5 0x0E

/**
 * @brief Gyro X-Axis Notch Filter Setting
 *
 * Name         : GYRO_CONFIG_STATIC6
 * Address      : 0x0F
 * Serial IF    : R/W
 * Reset value  : Factory trimmed
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION        |
 * |------|----------------------|-----------------|
 * | 7:0  | GYRO_X_NF_COSWZ[7:0] | X notch freq   |
 */
#define GYRO_CONFIG_STATIC6 0x0F

/**
 * @brief Gyro Y-Axis Notch Filter Setting
 *
 * Name         : GYRO_CONFIG_STATIC7
 * Address      : 0x10
 * Serial IF    : R/W
 * Reset value  : Factory trimmed
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION        |
 * |------|----------------------|-----------------|
 * | 7:0  | GYRO_Y_NF_COSWZ[7:0] | Y notch freq   |
 */
#define GYRO_CONFIG_STATIC7 0x10

/**
 * @brief Gyro Z-Axis Notch Filter Setting
 *
 * Name         : GYRO_CONFIG_STATIC8
 * Address      : 0x11
 * Serial IF    : R/W
 * Reset value  : Factory trimmed
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION        |
 * |------|----------------------|-----------------|
 * | 7:0  | GYRO_Z_NF_COSWZ[7:0] | Z notch freq   |
 */
#define GYRO_CONFIG_STATIC8 0x11

/**
 * @brief Gyro Notch Filter MSB Select
 *
 * Name         : GYRO_CONFIG_STATIC9
 * Address      : 0x12
 * Serial IF    : R/W
 * Reset value  : Factory trimmed
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                | FUNCTION      |
 * |------|---------------------|---------------|
 * | 7:6  | -                   | Reserved      |
 * | 5    | GYRO_Z_NF_COSWZ_SEL | Z MSB select  |
 * | 4    | GYRO_Y_NF_COSWZ_SEL | Y MSB select  |
 * | 3    | GYRO_X_NF_COSWZ_SEL | X MSB select  |
 * | 2    | GYRO_Z_NF_COSWZ[8]  | Z MSB value   |
 * | 1    | GYRO_Y_NF_COSWZ[8]  | Y MSB value   |
 * | 0    | GYRO_X_NF_COSWZ[8]  | X MSB value   |
 */
#define GYRO_CONFIG_STATIC9 0x12

/**
 * @brief Gyro Notch Filter Bandwidth Select
 *
 * Name         : GYRO_CONFIG_STATIC10
 * Address      : 0x13
 * Serial IF    : R/W
 * Reset value  : 0x11
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME           | FUNCTION        |
 * |------|----------------|-----------------|
 * | 7    | -              | Reserved        |
 * | 6:4  | GYRO_NF_BW_SEL | Notch BW select|
 * | 3:0  | -              | Reserved        |
 */
#define GYRO_CONFIG_STATIC10 0x13

/**
 * @brief X Gyro Self-Test Data
 *
 * Name         : XG_ST_DATA
 * Address      : 0x5F
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION          |
 * |------|-------------|-------------------|
 * | 7:0  | XG_ST_DATA  | X gyro ST output  |
 */
#define XG_ST_DATA 0x5F

/**
 * @brief Y Gyro Self-Test Data
 *
 * Name         : YG_ST_DATA
 * Address      : 0x60
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION          |
 * |------|-------------|-------------------|
 * | 7:0  | YG_ST_DATA  | Y gyro ST output  |
 */
#define YG_ST_DATA 0x60

/**
 * @brief Z Gyro Self-Test Data
 *
 * Name         : ZG_ST_DATA
 * Address      : 0x61
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION          |
 * |------|-------------|-------------------|
 * | 7:0  | ZG_ST_DATA  | Z gyro ST output  |
 */
#define ZG_ST_DATA 0x61

/**
 * @brief Timestamp Value Register 0 (LSB)
 *
 * Name         : TMSTVAL0
 * Address      : 0x62
 * Serial IF    : R
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME             | FUNCTION        |
 * |------|------------------|-----------------|
 * | 7:0  | TMST_VALUE[7:0]  | Timestamp LSB  |
 */
#define TMSTVAL0 0x62

/**
 * @brief Timestamp Value Register 1
 *
 * Name         : TMSTVAL1
 * Address      : 0x63
 * Serial IF    : R
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME              | FUNCTION       |
 * |------|-------------------|----------------|
 * | 7:0  | TMST_VALUE[15:8]  | Timestamp     |
 */
#define TMSTVAL1 0x63

/**
 * @brief Timestamp Value Register 2 (MSB)
 *
 * Name         : TMSTVAL2
 * Address      : 0x64
 * Serial IF    : R
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME               | FUNCTION       |
 * |------|--------------------|----------------|
 * | 7:4  | -                  | Reserved       |
 * | 3:0  | TMST_VALUE[19:16]  | Timestamp MSB |
 */
#define TMSTVAL2 0x64

/**
 * @brief Interface Configuration Register 4
 *
 * Name         : INTF_CONFIG4
 * Address      : 0x7A
 * Serial IF    : R/W
 * Reset value  : 0x83
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME         | FUNCTION          |
 * |-----|--------------|-------------------|
 * | 6   | I3C_BUS_MODE | I3C-only bus     |
 * | 1   | SPI_AP_4WIRE | 4-wire SPI mode  |
 */
#define INTF_CONFIG4 0x7A

/**
 * @brief Interface Configuration Register 5
 *
 * Name         : INTF_CONFIG5
 * Address      : 0x7B
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME          | FUNCTION     |
 * |------|---------------|--------------|
 * | 2:1  | PIN9_FUNCTION | Pin 9 select |
 */
#define INTF_CONFIG5 0x7B

/**
 * @brief Interface Configuration Register 6
 *
 * Name         : INTF_CONFIG6
 * Address      : 0x7C
 * Serial IF    : R/W
 * Reset value  : 0x5F
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME            | FUNCTION           |
 * |-----|-----------------|--------------------|
 * | 7   | ASYNCTIME0_DIS  | Async timing off  |
 * | 4   | I3C_EN          | I3C enable       |
 * | 3   | I3C_IBI_BYTE_EN | IBI payload en   |
 * | 2   | I3C_IBI_EN      | IBI enable       |
 * | 1   | I3C_DDR_EN      | DDR mode enable |
 * | 0   | I3C_SDR_EN      | SDR mode enable |
 */
#define INTF_CONFIG6 0x7C

/**
 * Register Bank 2
 */
/**
 * @brief Accelerometer AAF Configuration Register 2
 *
 * Name         : ACCEL_CONFIG_STATIC2
 * Address      : 0x03
 * Serial IF    : R/W
 * Reset value  : 0x30
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME            | FUNCTION                              |
 * |-----|-----------------|---------------------------------------|
 * | 7   | -               | Reserved                              |
 * | 6:1 | ACCEL_AAF_DELT  | Accel AAF bandwidth control           |
 * | 0   | ACCEL_AAF_DIS   | Disable accelerometer AAF             |
 *
 * ACCEL_AAF_DIS:
 * - 0: Enable accelerometer AAF (default)
 * - 1: Disable accelerometer AAF
 */
#define ACCEL_CONFIG_STATIC2 0x03

/**
 * @brief Accelerometer AAF Configuration Register 3
 *
 * Name         : ACCEL_CONFIG_STATIC3
 * Address      : 0x04
 * Serial IF    : R/W
 * Reset value  : 0x40
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION                     |
 * |------|-------------------------|------------------------------|
 * | 7:0  | ACCEL_AAF_DELTSQR[7:0]  | Accel AAF bandwidth control |
 */
#define ACCEL_CONFIG_STATIC3 0x04

/**
 * @brief Accelerometer AAF Configuration Register 4
 *
 * Name         : ACCEL_CONFIG_STATIC4
 * Address      : 0x05
 * Serial IF    : R/W
 * Reset value  : 0x62
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                     | FUNCTION                    |
 * |------|--------------------------|-----------------------------|
 * | 7:4  | ACCEL_AAF_BITSHIFT       | Accel AAF bandwidth control|
 * | 3:0  | ACCEL_AAF_DELTSQR[11:8]  | Accel AAF bandwidth control|
 */
#define ACCEL_CONFIG_STATIC4 0x05

/**
 * @brief X-Axis Accelerometer Self-Test Data
 *
 * Name         : XA_ST_DATA
 * Address      : 0x3B
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION                    |
 * |------|-------------|-----------------------------|
 * | 7:0  | XA_ST_DATA  | X-accel self-test output    |
 */
#define XA_ST_DATA 0x3B

/**
 * @brief Y-Axis Accelerometer Self-Test Data
 *
 * Name         : YA_ST_DATA
 * Address      : 0x3C
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION                    |
 * |------|-------------|-----------------------------|
 * | 7:0  | YA_ST_DATA  | Y-accel self-test output    |
 */
#define YA_ST_DATA 0x3C

/**
 * @brief Z-Axis Accelerometer Self-Test Data
 *
 * Name         : ZA_ST_DATA
 * Address      : 0x3D
 * Serial IF    : R/W
 * Reset value  : Factory trim value
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME        | FUNCTION                    |
 * |------|-------------|-----------------------------|
 * | 7:0  | ZA_ST_DATA  | Z-accel self-test output    |
 */
#define ZA_ST_DATA 0x3D

/**
 * Register Bank 4
 */

/**
 * @brief APEX Configuration Register 2
 *
 * Name         : APEX_CONFIG2
 * Address      : 0x41
 * Serial IF    : R/W
 * Reset value  : 0x85
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                | FUNCTION                    |
 * |------|---------------------|-----------------------------|
 * | 7:4  | PED_AMP_TH_SEL      | Pedometer amp threshold     |
 * | 3:0  | PED_STEP_CNT_TH_SEL | Step count detection window |
 *
 * PED_STEP_CNT_TH_SEL:
 * 0000: 0 steps
 * 0001: 1 step
 * 0010: 2 steps
 * 0011: 3 steps
 * 0100: 4 steps
 * 0101: 5 steps (default)
 * 0110: 6 steps
 * 0111: 7 steps
 * 1000: 8 steps
 * 1001: 9 steps
 * 1010: 10 steps
 * 1011: 11 steps
 * 1100: 12 steps
 * 1101: 13 steps
 * 1110: 14 steps
 * 1111: 15 steps
 */
#define APEX_CONFIG2 0x41

/**
 * @brief APEX Configuration Register 3
 *
 * Name         : APEX_CONFIG3
 * Address      : 0x42
 * Serial IF    : R/W
 * Reset value  : 0x51
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION                 |
 * |------|----------------------|--------------------------|
 * | 7:5  | PED_STEP_DET_TH_SEL  | Step detect threshold    |
 * | 4:2  | PED_SB_TIMER_TH_SEL  | Step buffer timer        |
 * | 1:0  | PED_HI_EN_TH_SEL     | High energy threshold    |
 *
 * PED_STEP_DET_TH_SEL:
 * 000: 0 steps
 * 001: 1 step
 * 010: 2 steps (default)
 * 011: 3 steps
 * 100: 4 steps
 * 101: 5 steps
 * 110: 6 steps
 * 111: 7 steps
 *
 * PED_SB_TIMER_TH_SEL:
 * 000: 0 samples
 * 001: 1 sample
 * 010: 2 samples
 * 011: 3 samples
 * 100: 4 samples (default)
 * 101: 5 samples
 * 110: 6 samples
 * 111: 7 samples
 */
#define APEX_CONFIG3 0x42

/**
 * @brief APEX Configuration Register 4
 *
 * Name         : APEX_CONFIG4
 * Address      : 0x43
 * Serial IF    : R/W
 * Reset value  : 0xA4
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME               | FUNCTION                |
 * |------|--------------------|-------------------------|
 * | 7:6  | TILT_WAIT_TIME_SEL | Tilt interrupt delay    |
 * | 5:3  | SLEEP_TIME_OUT     | Sleep detect timeout    |
 * | 2:0  | -                  | Reserved                |
 *
 * TILT_WAIT_TIME_SEL:
 * 00: 0s
 * 01: 2s
 * 10: 4s (default)
 * 11: 6s
 *
 * SLEEP_TIME_OUT:
 * 000: 1.28s
 * 001: 2.56s
 * 010: 3.84s
 * 011: 5.12s
 * 100: 6.40s
 * 101: 7.68s
 * 110: 8.96s
 * 111: 10.24s
 */
#define APEX_CONFIG4 0x43

/**
 * @brief APEX Configuration Register 5
 *
 * Name         : APEX_CONFIG5
 * Address      : 0x44
 * Serial IF    : R/W
 * Reset value  : 0x8C
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME            | FUNCTION                |
 * |------|-----------------|-------------------------|
 * | 7:3  | -               | Reserved                |
 * | 2:0  | MOUNTING_MATRIX | Chip-to-device matrix   |
 *
 * MOUNTING_MATRIX:
 * 000: [ 1  0  0;  0  1  0;  0  0  1]
 * 001: [ 1  0  0;  0 -1  0;  0  0 -1]
 * 010: [-1  0  0;  0  1  0;  0  0 -1]
 * 011: [-1  0  0;  0 -1  0;  0  0  1]
 * 100: [ 0  1  0;  1  0  0;  0  0 -1]
 * 101: [ 0  1  0; -1  0  0;  0  0  1]
 * 110: [ 0 -1  0;  1  0  0;  0  0  1]
 * 111: [ 0 -1  0; -1  0  0;  0  0 -1]
 */
#define APEX_CONFIG5 0x44

/**
 * @brief APEX Configuration Register 6
 *
 * Name         : APEX_CONFIG6
 * Address      : 0x45
 * Serial IF    : R/W
 * Reset value  : 0x5C
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                | FUNCTION               |
 * |------|---------------------|------------------------|
 * | 7:3  | -                   | Reserved               |
 * | 2:0  | SLEEP_GESTURE_DELAY | Sleep gesture window   |
 *
 * SLEEP_GESTURE_DELAY:
 * 000: 0.32s
 * 001: 0.64s
 * 010: 0.96s
 * 011: 1.28s
 * 100: 1.60s
 * 101: 1.92s
 * 110: 2.24s
 * 111: 2.56s
 */
#define APEX_CONFIG6 0x45

/**
 * @brief APEX Configuration Register 7
 *
 * Name         : APEX_CONFIG7
 * Address      : 0x46
 * Serial IF    : R/W
 * Reset value  : 0x45
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME             | FUNCTION              |
 * |------|------------------|-----------------------|
 * | 7:2  | TAP_MIN_JERK_THR | Min jerk threshold    |
 * | 1:0  | TAP_MAX_PEAK_TOL | Max peak tolerance   |
 */
#define APEX_CONFIG7 0x46

/**
 * @brief APEX Configuration Register 8
 *
 * Name         : APEX_CONFIG8
 * Address      : 0x47
 * Serial IF    : R/W
 * Reset value  : 0x5B
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME     | FUNCTION             |
 * |------|----------|----------------------|
 * | 7    | -        | Reserved             |
 * | 6:5  | TAP_TMAX | Tap window samples   |
 * | 4:3  | TAP_TAVG | Energy window        |
 * | 2:0  | TAP_TMIN | Single tap window    |
 */
#define APEX_CONFIG8 0x47

/**
 * @brief APEX Configuration Register 9
 *
 * Name         : APEX_CONFIG9
 * Address      : 0x48
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME             | FUNCTION                |
 * |-----|------------------|-------------------------|
 * | 0   | SENSITIVITY_MODE | Sensitivity mode select |
 */
#define APEX_CONFIG9 0x48

/**
 * @brief Accelerometer Wake-on-Motion X Threshold
 *
 * Name         : ACCEL_WOM_X_THR
 * Address      : 0x4A
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME     | FUNCTION             |
 * |------|----------|----------------------|
 * | 7:0  | WOM_X_TH | X-axis WoM threshold |
 *
 * Resolution: ~3.9 mg per LSB
 */
#define ACCEL_WOM_X_THR 0x4A

/**
 * @brief Accelerometer Wake-on-Motion Y Threshold
 *
 * Name         : ACCEL_WOM_Y_THR
 * Address      : 0x4B
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME     | FUNCTION             |
 * |------|----------|----------------------|
 * | 7:0  | WOM_Y_TH | Y-axis WoM threshold |
 */
#define ACCEL_WOM_Y_THR 0x4B

/**
 * @brief Accelerometer Wake-on-Motion Z Threshold
 *
 * Name         : ACCEL_WOM_Z_THR
 * Address      : 0x4C
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME     | FUNCTION             |
 * |------|----------|----------------------|
 * | 7:0  | WOM_Z_TH | Z-axis WoM threshold |
 */
#define ACCEL_WOM_Z_THR 0x4C

/**
 * @brief APEX Interrupt Source Register 6 (INT1 routing)
 *
 * Name         : INT_SOURCE6
 * Address      : 0x4D
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                        |
 * |-----|------------------------|---------------------------------|
 * | 7:6 | -                      | Reserved                        |
 * | 5   | STEP_DET_INT1_EN       | Step detect → INT1              |
 * | 4   | STEP_CNT_OFL_INT1_EN   | Step count overflow → INT1      |
 * | 3   | TILT_DET_INT1_EN       | Tilt detect → INT1              |
 * | 2   | WAKE_DET_INT1_EN       | Wake detect → INT1              |
 * | 1   | SLEEP_DET_INT1_EN      | Sleep detect → INT1             |
 * | 0   | TAP_DET_INT1_EN        | Tap detect → INT1               |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT1
 * - 1: Interrupt routed to INT1
 */
#define INT_SOURCE6 0x4D

/**
 * @brief APEX Interrupt Source Register 7 (INT2 routing)
 *
 * Name         : INT_SOURCE7
 * Address      : 0x4E
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION                        |
 * |-----|------------------------|---------------------------------|
 * | 7:6 | -                      | Reserved                        |
 * | 5   | STEP_DET_INT2_EN       | Step detect → INT2              |
 * | 4   | STEP_CNT_OFL_INT2_EN   | Step count overflow → INT2      |
 * | 3   | TILT_DET_INT2_EN       | Tilt detect → INT2              |
 * | 2   | WAKE_DET_INT2_EN       | Wake detect → INT2              |
 * | 1   | SLEEP_DET_INT2_EN      | Sleep detect → INT2             |
 * | 0   | TAP_DET_INT2_EN        | Tap detect → INT2               |
 *
 * For each bit:
 * - 0: Interrupt not routed to INT2
 * - 1: Interrupt routed to INT2
 */
#define INT_SOURCE7 0x4E

/**
 * @brief Interrupt Source Register 8 (IBI routing)
 *
 * Name         : INT_SOURCE8
 * Address      : 0x4F
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME               | FUNCTION                   |
 * |-----|--------------------|----------------------------|
 * | 7:6 | -                  | Reserved                   |
 * | 5   | FSYNC_IBI_EN       | FSYNC interrupt → IBI      |
 * | 4   | PLL_RDY_IBI_EN     | PLL ready → IBI            |
 * | 3   | UI_DRDY_IBI_EN     | UI data ready → IBI        |
 * | 2   | FIFO_THS_IBI_EN    | FIFO threshold → IBI       |
 * | 1   | FIFO_FULL_IBI_EN   | FIFO full → IBI            |
 * | 0   | AGC_RDY_IBI_EN     | AGC ready → IBI            |
 *
 * For each bit:
 * - 0: Interrupt not routed to IBI
 * - 1: Interrupt routed to IBI
 */
#define INT_SOURCE8 0x4F

/**
 * @brief Interrupt Source Register 9 (IBI routing)
 *
 * Name         : INT_SOURCE9
 * Address      : 0x50
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                          | FUNCTION               |
 * |-----|-------------------------------|------------------------|
 * | 7   | I3C_PROTOCOL_ERROR_IBI_EN     | I3C error → IBI        |
 * | 6:5 | -                             | Reserved               |
 * | 4   | SMD_IBI_EN                    | SMD → IBI              |
 * | 3   | WOM_Z_IBI_EN                  | Z WOM → IBI            |
 * | 2   | WOM_Y_IBI_EN                  | Y WOM → IBI            |
 * | 1   | WOM_X_IBI_EN                  | X WOM → IBI            |
 * | 0   | -                             | Reserved               |
 */
#define INT_SOURCE9 0x50

/**
 * @brief Interrupt Source Register 10 (IBI routing)
 *
 * Name         : INT_SOURCE10
 * Address      : 0x51
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BIT | NAME                   | FUNCTION               |
 * |-----|------------------------|------------------------|
 * | 7:6 | -                      | Reserved               |
 * | 5   | STEP_DET_IBI_EN        | Step detect → IBI      |
 * | 4   | STEP_CNT_OFL_IBI_EN    | Step overflow → IBI    |
 * | 3   | TILT_DET_IBI_EN        | Tilt detect → IBI      |
 * | 2   | WAKE_DET_IBI_EN        | Wake detect → IBI      |
 * | 1   | SLEEP_DET_IBI_EN       | Sleep detect → IBI     |
 * | 0   | TAP_DET_IBI_EN         | Tap detect → IBI       |
 */
#define INT_SOURCE10 0x51

/**
 * @brief User Gyro X Offset (LSB)
 *
 * Name         : OFFSET_USER0
 * Address      : 0x77
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION                |
 * |------|----------------------|-------------------------|
 * | 7:0  | GYRO_X_OFFUSER[7:0]  | X gyro offset LSB       |
 *
 * Range: ±64 dps, Resolution: 1/32 dps
 */
#define OFFSET_USER0 0x77

/**
 * @brief User Gyro X/Y Offset (MSB)
 *
 * Name         : OFFSET_USER1
 * Address      : 0x78
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                   | FUNCTION           |
 * |------|------------------------|--------------------|
 * | 7:4  | GYRO_Y_OFFUSER[11:8]   | Y gyro offset MSB  |
 * | 3:0  | GYRO_X_OFFUSER[11:8]   | X gyro offset MSB  |
 */
#define OFFSET_USER1 0x78

/**
 * @brief User Gyro Y Offset (LSB)
 *
 * Name         : OFFSET_USER2
 * Address      : 0x79
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION           |
 * |------|----------------------|--------------------|
 * | 7:0  | GYRO_Y_OFFUSER[7:0]  | Y gyro offset LSB  |
 */
#define OFFSET_USER2 0x79

/**
 * @brief User Gyro Z Offset (LSB)
 *
 * Name         : OFFSET_USER3
 * Address      : 0x7A
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                 | FUNCTION           |
 * |------|----------------------|--------------------|
 * | 7:0  | GYRO_Z_OFFUSER[7:0]  | Z gyro offset LSB  |
 */
#define OFFSET_USER3 0x7A

/**
 * @brief User Accel X / Gyro Z Offset (MSB)
 *
 * Name         : OFFSET_USER4
 * Address      : 0x7B
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION              |
 * |------|-------------------------|-----------------------|
 * | 7:4  | ACCEL_X_OFFUSER[11:8]   | X accel offset MSB    |
 * | 3:0  | GYRO_Z_OFFUSER[11:8]    | Z gyro offset MSB     |
 */
#define OFFSET_USER4 0x7B

/**
 * @brief User Accel X Offset (LSB)
 *
 * Name         : OFFSET_USER5
 * Address      : 0x7C
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                   | FUNCTION             |
 * |------|------------------------|----------------------|
 * | 7:0  | ACCEL_X_OFFUSER[7:0]   | X accel offset LSB   |
 *
 * Range: ±1 g, Resolution: 0.5 mg
 */
#define OFFSET_USER5 0x7C

/**
 * @brief User Accel Y Offset (LSB)
 *
 * Name         : OFFSET_USER6
 * Address      : 0x7D
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                   | FUNCTION             |
 * |------|------------------------|----------------------|
 * | 7:0  | ACCEL_Y_OFFUSER[7:0]   | Y accel offset LSB   |
 */
#define OFFSET_USER6 0x7D

/**
 * @brief User Accel Y/Z Offset (MSB)
 *
 * Name         : OFFSET_USER7
 * Address      : 0x7E
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                    | FUNCTION             |
 * |------|-------------------------|----------------------|
 * | 7:4  | ACCEL_Z_OFFUSER[11:8]   | Z accel offset MSB   |
 * | 3:0  | ACCEL_Y_OFFUSER[11:8]   | Y accel offset MSB   |
 */
#define OFFSET_USER7 0x7E

/**
 * @brief User Accel Z Offset (LSB)
 *
 * Name         : OFFSET_USER8
 * Address      : 0x7F
 * Serial IF    : R/W
 * Reset value  : 0x00
 * Clock Domain : SCLK_UI
 *
 * | BITS | NAME                   | FUNCTION             |
 * |------|------------------------|----------------------|
 * | 7:0  | ACCEL_Z_OFFUSER[7:0]   | Z accel offset LSB   |
 */
#define OFFSET_USER8 0x7F