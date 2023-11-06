#pragma once
#include <stdio.h>
#include <random>
#include <iostream>
#include <string>
#include <Windows.h>
#include <chrono>
#include <thread>


typedef void (*Func)(std::string);


std::string CalcDiceRoll();

std::string DecideDiceRoll();

void Wait(Func func, std::string plaans);

void DisplayResult(std::string plaAns);