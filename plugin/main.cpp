#include <iostream>
#include <dlfcn.h> // For POSIX dynamic loading
#include "IPlugin.h"

int main() {
    // Path to the plugin shared library (.so or .dll)
    const char* pluginPath = "./AdditionPlugin.so"; // Use ".dll" for Windows

    // Load the shared library
    void* handle = dlopen(pluginPath, RTLD_LAZY);
    if (!handle) {
        std::cerr << "Cannot load library: " << dlerror() << '\n';
        return 1;
    }

    // Reset errors
    dlerror();

    // Load the symbols
    CreatePluginFunc create_plugin = (CreatePluginFunc)dlsym(handle, "CreatePlugin");
    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        std::cerr << "Cannot load symbol 'CreatePlugin': " << dlsym_error << '\n';
        dlclose(handle);
        return 1;
    }

    // Create an instance of the plugin
    IPlugin* plugin = create_plugin();

    // Use the plugin
    std::cout << plugin->GetName() << " result: " 
              << plugin->Operate(5, 3) << std::endl;

    // Delete the plugin when done
    delete plugin;

    // Close the library
    dlclose(handle);

    return 0;
}
