int main () {
    int UyigtZ8URCo = 1, Nhxevm4N5 = 0;
    char SBuHLt0Myi [82], g6PAqfRoGsMQ [82];
    gets (SBuHLt0Myi);
    gets (g6PAqfRoGsMQ);
    {
        UyigtZ8URCo = 0;
        while (UyigtZ8URCo <= 81) {
            if (!('\0' != g6PAqfRoGsMQ[UyigtZ8URCo]))
                break;
            else {
                if (g6PAqfRoGsMQ[UyigtZ8URCo] >= 'a' && g6PAqfRoGsMQ[UyigtZ8URCo] <= 'z')
                    g6PAqfRoGsMQ[UyigtZ8URCo] = g6PAqfRoGsMQ[UyigtZ8URCo] - 32;
            }
            UyigtZ8URCo = UyigtZ8URCo +1;
        }
    }
    for (UyigtZ8URCo = 0; UyigtZ8URCo <= 81; UyigtZ8URCo = UyigtZ8URCo +1) {
        if (SBuHLt0Myi[UyigtZ8URCo] == '\0')
            break;
        else {
            if ('a' <= SBuHLt0Myi[UyigtZ8URCo] && SBuHLt0Myi[UyigtZ8URCo] <= 'z')
                SBuHLt0Myi[UyigtZ8URCo] = SBuHLt0Myi[UyigtZ8URCo] - 32;
        }
    }
    {
        UyigtZ8URCo = 0;
        for (; UyigtZ8URCo <= 81;) {
            if (SBuHLt0Myi[UyigtZ8URCo] == '\0')
                break;
            else
                Nhxevm4N5 += SBuHLt0Myi[UyigtZ8URCo] - g6PAqfRoGsMQ[UyigtZ8URCo];
            UyigtZ8URCo = UyigtZ8URCo +1;
        }
    }
    if (Nhxevm4N5 == 0)
        printf ("=");
    if (Nhxevm4N5 >= 1)
        ;
    if (Nhxevm4N5 <= -1)
        ;
    return 0;
}

