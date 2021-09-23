#include "RetroEngine.hpp"

#if RETRO_PLATFORM == RETRO_MORPHOS
static const char *version __attribute__((used)) = "$VER: RSDK v3 Sonic CD 2011 1.3.0 port by BeWorld (22.9.2021)";
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
