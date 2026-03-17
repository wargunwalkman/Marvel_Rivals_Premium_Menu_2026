#pragma once
#include <memory>
#include <vector>

class GlobalHandler {
public:
    static bool SetupEnvironment();
    static void ExecuteModuleLoop();
    
private:
    struct ServiceNode {
        int id;
        const char* label;
        bool status;
    };
    
    static inline std::vector<ServiceNode> active_services;
};