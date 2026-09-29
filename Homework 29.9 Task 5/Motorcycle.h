#pragma once
#include "IDrivable.h"
#include <iostream>
using namespace std;

class Motorcycle : public IDrivable
{
public:
    void StartEngine() override;
    void StopEngine() override;
    void Drive() override;
};