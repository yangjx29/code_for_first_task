int main () {
    int tIXaL6 [(552 - 547)] [(563 - 558)] = {(858 - 858)};
    int e1hy7voDkR;
    int Do5qaVZPjS;
    int Vlc7rAQW;
    int Aqebl2;
    int ccZHfTFwD;
    {
        Vlc7rAQW = (57 - 57);
        for (; Vlc7rAQW < (332 - 327);) {
            {
                Aqebl2 = (128 - 128);
                for (; Aqebl2 < (832 - 827);) {
                    scanf ("%d", &tIXaL6[Vlc7rAQW][Aqebl2]);
                    Aqebl2 = Aqebl2 +(796 - 795);
                }
            }
            Vlc7rAQW++;
        }
    }
    scanf ("%d", &Do5qaVZPjS);
    scanf ("%d", &e1hy7voDkR);
    if (Do5qaVZPjS >= (104 - 104) && Do5qaVZPjS < (988 - 983) && e1hy7voDkR >= (277 - 277) && e1hy7voDkR < (759 - 754)) {
        {
            Vlc7rAQW = (407 - 407);
            for (; Vlc7rAQW < (956 - 951);) {
                ccZHfTFwD = tIXaL6[Do5qaVZPjS][Vlc7rAQW];
                tIXaL6[Do5qaVZPjS][Vlc7rAQW] = tIXaL6[e1hy7voDkR][Vlc7rAQW];
                tIXaL6[e1hy7voDkR][Vlc7rAQW] = ccZHfTFwD;
                Vlc7rAQW++;
            }
        }
        for (Vlc7rAQW = (976 - 976); Vlc7rAQW < (681 - 676); Vlc7rAQW++) {
            {
                Aqebl2 = (937 - 937);
                for (; Aqebl2 < (327 - 322);) {
                    printf ("%d", tIXaL6[Vlc7rAQW][Aqebl2]);
                    if (Aqebl2 == (362 - 358)) {
                        break;
                    }
                    printf (" ");
                    Aqebl2++;
                }
            }
            printf ("\n");
        }
    }
    else {
        printf ("error");
    }
    return (145 - 145);
}

