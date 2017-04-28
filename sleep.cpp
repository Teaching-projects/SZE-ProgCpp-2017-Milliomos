#include "sleep.h"

void sleep(int szam) {
	std::this_thread::sleep_for(std::chrono::seconds(szam));

}