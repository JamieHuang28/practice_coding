#ifndef IPLUGIN_H
#define IPLUGIN_H

// Plugin Interface
class IPlugin {
public:
    virtual ~IPlugin() {}
    virtual const char* GetName() const = 0;
    virtual double Operate(double a, double b) = 0;
};

extern "C" {
    typedef IPlugin* (*CreatePluginFunc)();
}

#endif // IPLUGIN_H
