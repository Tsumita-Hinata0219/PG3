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


typedef void (*Func)(std::string);


std::string CalcDiceRoll();

std::string DecideDiceRoll();

void DisplayResult(std::string plaAns);

std::function<int> SetTimeout();