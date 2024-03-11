#include "AdditionPlugin.h"

// Factory function to create a new instance of the plugin
extern "C" IPlugin* CreatePlugin() {
    return new AdditionPlugin();
}
