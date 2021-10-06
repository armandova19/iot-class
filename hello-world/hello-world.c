#include "contiki.h"
#include "dev/leds"
#include <stdio.h>

PROCESS(hello_world_process, "hello world process");

AUTOSTART_PROCESSES(&hello_world_process);

PROCESS_THREAD(hello_world_process, ev, data)
{
	PROCESS_BEGIN();
	printf("hello world\n");
	PROCESS_END();
}
