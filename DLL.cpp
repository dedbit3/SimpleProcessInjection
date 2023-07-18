#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD fdwReason, LPVOID lpvReserved) {

    switch (Reason) {

    case DLL_PROCESS_ATTACH:
        MessageBox(NULL, L"HELLO HELLO DLL LOADED", L"DLL GOT LOADED", MB_ICONQUESTION | MB_OK);
        break;
    }

    return TRUE;

}

// The rest of this would be essentially the same as regular processInjection
// get module handle function should b used to get KERNEL32 DLL 
// go read the WIN API documentation
