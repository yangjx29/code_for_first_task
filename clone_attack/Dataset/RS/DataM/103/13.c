main () {
    int UP1RT2I6ULh;
    int j;
    char sGqy4Hh [1000];
    scanf ("%s", sGqy4Hh);
    for (UP1RT2I6ULh = 0; sGqy4Hh[UP1RT2I6ULh] != '\0';) {
        int bgYMVl;
        bgYMVl = UP1RT2I6ULh;
        int L3T0yQ;
        {
            L3T0yQ = UP1RT2I6ULh;
            while (sGqy4Hh[L3T0yQ] != '\0') {
                if (sGqy4Hh[L3T0yQ] != sGqy4Hh[L3T0yQ +(144 - 143)] && sGqy4Hh[L3T0yQ] != sGqy4Hh[L3T0yQ +(257 - 256)] + (785 - 753) && sGqy4Hh[L3T0yQ] != sGqy4Hh[L3T0yQ +1] - (418 - 386))
                    break;
                L3T0yQ++;
            };
        }
        if (bgYMVl < L3T0yQ) {
            UP1RT2I6ULh = L3T0yQ +1;
            if (sGqy4Hh[L3T0yQ] >= (1090 - 993))
                sGqy4Hh[L3T0yQ] = sGqy4Hh[L3T0yQ] - 32;
            printf ("(%c,%d)", sGqy4Hh[L3T0yQ], L3T0yQ -bgYMVl + 1);
        }
        else {
            UP1RT2I6ULh = UP1RT2I6ULh +1;
            if (sGqy4Hh[L3T0yQ] >= 97)
                sGqy4Hh[L3T0yQ] = sGqy4Hh[L3T0yQ] - 32;
            printf ("(%c,1)", sGqy4Hh[L3T0yQ]);
        };
    }
    getchar ();
    getchar ();
}

