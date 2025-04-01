#include <stdio.h>
#include "MyHid.h"
#include <stdbool.h>

// 2025-04-01 sensor normal form 

int main(void) {
	// device open
	unsigned long LedNumber = 0x08; // or DWORD
	if (!OpenDevice(MY_HID_VID, MY_HID_PID)) {
		puts("감지된 연결 없음"); // 감지된 기기 없음
	}
	else {
		for (int i = 0; i < 5; i++) {
			LedOnOff(LedNumber); // unsigned long LedNumber = 0x08;  Delay_ms(200);
			LedNumber = LedNumber >> 2; Delay_ms(200);
			printf("Led On/Off");  

			SetPiezo(2000, 200); Delay_ms(200); // 전자음
			SetPiezo(1000, 200); Delay_ms(200);
			SetPiezo(1500, 200); Delay_ms(200);
			
		}
	}
	CloseDevice();
}