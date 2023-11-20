#pragma once
#include <stdio.h>
#include <random>
#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>
#include <thread>
#include <functional>

using namespace std::chrono_literals;


typedef void (*Func1)(void);
typedef void (*Func2)(std::string);


std::string CalcDiceRoll();

std::string DecidePlayerDice();

void DisplayResult(std::string plaAns);

void SetTimeout();

