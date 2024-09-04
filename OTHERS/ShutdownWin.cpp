#include <Windows.h>

void ShutdownWindows();

int main() {
    ShutdownWindows();
    return 0;
}

void ShutdownWindows() {
    HANDLE hToken;
    TOKEN_PRIVILEGES tkp;

    // Get a handle to the process token
    OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken);

    // Get the shutdown privilege
    LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &tkp.Privileges[0].Luid);
    tkp.PrivilegeCount = 1;
    tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    // Enable the shutdown privilege
    AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, NULL, NULL);

    // Shutdown the PC
    InitiateSystemShutdown(NULL, "Shutdown", 0, TRUE, TRUE);

}