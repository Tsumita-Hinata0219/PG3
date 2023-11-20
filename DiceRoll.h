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


typedef void (*Func2)(std::string);
typedef void (*Func1)(Func2, std::string);


std::string CalcDiceRoll();

std::string DecidePlayerDice();

void DisplayResult(std::string plaAns);

void SetTimeout(std::chrono::seconds sleep_duration, Func2 func, std::string plaAns);

