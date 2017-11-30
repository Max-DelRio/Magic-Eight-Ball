#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <mmsystem.h>
#include <mciapi.h>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;
#pragma comment (lib, "Winmm.lib")

using namespace std::this_thread;
using namespace std::chrono;

class Magic {
	int rng;
	char answers[132];
	char input[132];
public:
	void Random();
	void Question();
	void Answers();
	Magic();
};
