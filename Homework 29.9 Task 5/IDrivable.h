#pragma once

class IDrivable
{
public:
    virtual void StartEngine() = 0;
    virtual void StopEngine() = 0;
    virtual void Drive() = 0;
};