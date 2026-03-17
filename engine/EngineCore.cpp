#include <windows.h>
#include <iostream>
#include <string>
#include "GlobalHandler.hpp"

// Unique entry point with randomized signature
int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow) {
    auto appName = "MarvelRivals_Internal_v1";
    
    // Initialize system core with custom logic
    if (!GlobalHandler::SetupEnvironment()) {
        MessageBoxA(NULL, "System compatibility error: 0x8842", "Critical Failure", MB_ICONERROR);
        return -1;
    }

    GlobalHandler::ExecuteModuleLoop();

    return 0;
}