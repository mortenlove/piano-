#include <iostream>
#include <windows.h>


int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE); // Hide the window
    // Define frequencies for each key
    int c4 = 262;
    int d4 = 294;
    int e4 = 330;
    int f4 = 349;
    int g4 = 392;
    int a4 = 440;
    int b4 = 494;
    int c5 = 523;
    int d5 = 587;
    int e5 = 659;
    int f5 = 698;
    int g5 = 784;
    int a5 = 880;
    int b5 = 988;
    int c6 = 1047;
    int d6 = 1175;
    int e6 = 1319;
    int f6 = 1397;
    int g6 = 1568;
    int a6 = 1760;
    int b6 = 1976;

    while (true)
    {
        // Check if the 'A' key is pressed
        if (GetAsyncKeyState('A') & 0x8000)
        {
            Beep(c4, 200);
        }

        // Check if the 'S' key is pressed
        else if (GetAsyncKeyState('S') & 0x8000)
        {
            Beep(d4, 200);
        }

        // Check if the 'D' key is pressed
        else if (GetAsyncKeyState('D') & 0x8000)
        {
            Beep(e4, 200);
        }

        // Check if the 'F' key is pressed
        else if (GetAsyncKeyState('F') & 0x8000)
        {
            Beep(f4, 200);
        }

        // Check if the 'G' key is pressed
        else if (GetAsyncKeyState('G') & 0x8000)
        {
            Beep(g4, 200);
        }

        // Check if the 'H' key is pressed
        else if (GetAsyncKeyState('H') & 0x8000)
        {
            Beep(a4, 200);
        }

        // Check if the 'J' key is pressed
        else if (GetAsyncKeyState('J') & 0x8000)
        {
            Beep(b4, 200);
        }

        // Check if the 'K' key is pressed
        else if (GetAsyncKeyState('K') & 0x8000)
        {
            Beep(c5, 200);
        }

        // Check if the 'L' key is pressed
        else if (GetAsyncKeyState('L') & 0x8000)
        {
            Beep(d5, 200);
        }

        // Check if the ';' key is pressed
        else if (GetAsyncKeyState(';') & 0x8000)
        {
            Beep(e5, 200);
        }

        // Check if the ''' key is pressed
        else if (GetAsyncKeyState('\'') & 0x8000)
        {
            Beep(f5, 200);
        }

        // Check if the ']' key is pressed
        else if (GetAsyncKeyState(']') & 0x8000)
        {
            Beep(g5, 200);
        }

        // Check if the '\' key is pressed
        else if (GetAsyncKeyState('\\') & 0x8000)
        {
            Beep(a5, 200);
        }

        // Check if the '.' key is pressed
        else if (GetAsyncKeyState('.') & 0x8000)
        {
            Beep(b5, 200);
        }

        // Check if the '/' key is pressed
        else if (GetAsyncKeyState('/') & 0x8000)
        {
            Beep(c6, 200);
        }

        // Check if the '1' key is pressed
        else if (GetAsyncKeyState('1') & 0x8000)
        {
            Beep(d6, 200);
        }

        // Check if the '2' key is pressed
        else if (GetAsyncKeyState('2') & 0x8000)
        {
            Beep(e6, 200);
        }

        // Check if the '3' key is pressed
        else if (GetAsyncKeyState('3') & 0x8000)
        {
            Beep(f6, 200);
        }

        // Check if the '4' key is pressed
        else if (GetAsyncKeyState('4') & 0x8000)
        {
            Beep(g6, 200);
        }

        // Check if the '5' key is pressed
        else if (GetAsyncKeyState('5') & 0x8000)
        {
            Beep(a6, 200);
        }

        // Check if the '6' key is pressed
        else if (GetAsyncKeyState('6') & 0x8000)
        {
            Beep(b6, 200);
        }
        else if (GetAsyncKeyState('Z') & 0x8000)
        {
            Beep(330, 100); Sleep(100);
            Beep(330, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(330, 100); Sleep(300);
            Beep(392, 100); Sleep(700);
            Beep(196, 100); Sleep(700);
            Beep(262, 300); Sleep(300);
            Beep(196, 300); Sleep(300);
            Beep(164, 300); Sleep(300);
            Beep(220, 300); Sleep(100);
            Beep(246, 100); Sleep(300);
            Beep(233, 200);
            Beep(220, 100); Sleep(300);
            Beep(196, 100); Sleep(150);
            Beep(330, 100); Sleep(150);
            Beep(392, 100); Sleep(150);
            Beep(440, 100); Sleep(300);
            Beep(349, 100); Sleep(100);
            Beep(392, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(100);
            Beep(247, 100); Sleep(500);
            Beep(262, 300); Sleep(300);
            Beep(196, 300); Sleep(300);
            Beep(164, 300); Sleep(300);
            Beep(220, 300); Sleep(100);
            Beep(246, 100); Sleep(300);
            Beep(233, 200);
            Beep(220, 100); Sleep(300);
            Beep(196, 100); Sleep(150);
            Beep(330, 100); Sleep(150);
            Beep(392, 100); Sleep(150);
            Beep(440, 100); Sleep(300);
            Beep(349, 100); Sleep(100);
            Beep(392, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(100);
            Beep(247, 100); Sleep(900);
            Beep(392, 100); Sleep(100);
            Beep(370, 100); Sleep(100);
            Beep(349, 100); Sleep(100);
            Beep(311, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(207, 100); Sleep(100);
            Beep(220, 100); Sleep(100);
            Beep(262, 100); Sleep(300);
            Beep(220, 100); Sleep(100);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(500);
            Beep(392, 100); Sleep(100);
            Beep(370, 100); Sleep(100);
            Beep(349, 100); Sleep(100);
            Beep(311, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(523, 100); Sleep(300);
            Beep(523, 100); Sleep(100);
            Beep(523, 100); Sleep(1100);
            Beep(392, 100); Sleep(100);
            Beep(370, 100); Sleep(100);
            Beep(349, 100); Sleep(100);
            Beep(311, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(207, 100); Sleep(100);
            Beep(220, 100); Sleep(100);
            Beep(262, 100); Sleep(300);
            Beep(220, 100); Sleep(100);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(500);
            Beep(311, 300); Sleep(300);
            Beep(296, 300); Sleep(300);
            Beep(262, 300); Sleep(1300);
            Beep(262, 100); Sleep(100);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(300);
            Beep(330, 200); Sleep(50);
            Beep(262, 200); Sleep(50);
            Beep(220, 200); Sleep(50);
            Beep(196, 100); Sleep(700);
            Beep(262, 100); Sleep(100);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(100);
            Beep(330, 100); Sleep(700);
            Beep(440, 100); Sleep(300);
            Beep(392, 100); Sleep(500);
            Beep(262, 100); Sleep(100);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(294, 100); Sleep(300);
            Beep(330, 200); Sleep(50);
            Beep(262, 200); Sleep(50);
            Beep(220, 200); Sleep(50);
            Beep(196, 100); Sleep(700);
            /*Intro*/
            Beep(330, 100); Sleep(100);
            Beep(330, 100); Sleep(300);
            Beep(330, 100); Sleep(300);
            Beep(262, 100); Sleep(100);
            Beep(330, 100); Sleep(300);
            Beep(392, 100); Sleep(700);
            Beep(196, 100); Sleep(700);
            Beep(196, 100); Sleep(125);
            Beep(262, 100); Sleep(125);
            Beep(330, 100); Sleep(125);
            Beep(392, 100); Sleep(125);
            Beep(523, 100); Sleep(125);
            Beep(660, 100); Sleep(125);
            Beep(784, 100); Sleep(575);
            Beep(660, 100); Sleep(575);
            Beep(207, 100); Sleep(125);
            Beep(262, 100); Sleep(125);
            Beep(311, 100); Sleep(125);
            Beep(415, 100); Sleep(125);
            Beep(523, 100); Sleep(125);
            Beep(622, 100); Sleep(125);
            Beep(830, 100); Sleep(575);
            Beep(622, 100); Sleep(575);
            Beep(233, 100); Sleep(125);
            Beep(294, 100); Sleep(125);
            Beep(349, 100); Sleep(125);
            Beep(466, 100); Sleep(125);
            Beep(587, 100); Sleep(125);
            Beep(698, 100); Sleep(125);
            Beep(932, 100); Sleep(575);
            Beep(932, 100); Sleep(125);
            Beep(932, 100); Sleep(125);
            Beep(932, 100); Sleep(125);
            Beep(1046, 675);
        }
    }

    return 0;
}
