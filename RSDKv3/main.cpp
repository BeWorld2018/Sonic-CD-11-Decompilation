#include "RetroEngine.hpp"

#if RETRO_PLATFORM == RETRO_MORPHOS
unsigned long __stack = 1000000;
#endif

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; ++i) {
        if (StrComp(argv[i], "UsingCWD"))
            usingCWD = true;
    }

    Engine.Init();
    Engine.Run();

    return 0;
}
