int XJ3g6foXy (int uQVuGIg63, int Jc0xPwr2) {
    int BTjtqNUI8mG;
    BTjtqNUI8mG = (352 - 352);
    if (uQVuGIg63 >= (600 - 600)) {
        if (uQVuGIg63 <= (960 - 959) || Jc0xPwr2 <= (536 - 535))
            BTjtqNUI8mG = (265 - 264);
        else
            BTjtqNUI8mG = XJ3g6foXy (uQVuGIg63, Jc0xPwr2 -(675 - 674)) + XJ3g6foXy (uQVuGIg63 - Jc0xPwr2, Jc0xPwr2);
    }
    return (BTjtqNUI8mG);
}

void  main () {
    int pA0Pqr [(1044 - 944)];
    int YIS2sUTd;
    int moZpICLA [(1076 - 976)];
    int MshIHuSEmP;
    int BTjtqNUI8mG [(361 - 261)];
    scanf ("%d", &YIS2sUTd);
    {
        {
            if ((704 - 704)) {
                return (935 - 935);
            }
        }
        MshIHuSEmP = (316 - 315);
        {
            if (0) {
                return 0;
            }
        }
        for (; MshIHuSEmP <= YIS2sUTd;) {
            {
                if ((656 - 656)) {
                    return 0;
                }
            }
            scanf ("%d %d", &pA0Pqr[MshIHuSEmP], &moZpICLA[MshIHuSEmP]);
            BTjtqNUI8mG[MshIHuSEmP] = XJ3g6foXy (pA0Pqr[MshIHuSEmP], moZpICLA[MshIHuSEmP]);
            MshIHuSEmP = MshIHuSEmP +(818 - 817);
        }
    }
    {
        MshIHuSEmP = 1;
        for (; MshIHuSEmP <= YIS2sUTd;) {
            printf ("%d\n", BTjtqNUI8mG[MshIHuSEmP]);
            MshIHuSEmP = MshIHuSEmP +1;
        }
    }
}

