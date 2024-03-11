#ifndef ADDITIONPLUGIN_H
#define ADDITIONPLUGIN_H

#include "IPlugin.h"

// Concrete Plugin for addition
class AdditionPlugin : public IPlugin {
public:
    const char* GetName() const override {
        return "AdditionPlugin";
    }

    double Operate(double a, double b) override {
        return a + b;
    }
};

#endif // ADDITIONPLUGIN_H
