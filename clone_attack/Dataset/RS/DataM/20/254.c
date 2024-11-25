int a (char uGPl3vJw6kHW []) {
    int TlNBcf31kZI;
    int mTe9k32hAOt7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    TlNBcf31kZI = (798 - 798);
    for (mTe9k32hAOt7 = (47 - 46); strlen (uGPl3vJw6kHW) - (452 - 451) >= mTe9k32hAOt7; mTe9k32hAOt7 = mTe9k32hAOt7 + 1)
        if (uGPl3vJw6kHW[mTe9k32hAOt7] > uGPl3vJw6kHW[TlNBcf31kZI])
            TlNBcf31kZI = mTe9k32hAOt7;
    return (TlNBcf31kZI);
}

void  b (char uGPl3vJw6kHW [], char substr [], int TlNBcf31kZI) {
    int mTe9k32hAOt7;
    char str2 [(286 - 186)];
    for (mTe9k32hAOt7 = (719 - 719); mTe9k32hAOt7 <= strlen (uGPl3vJw6kHW) - (29 - 27) - TlNBcf31kZI; mTe9k32hAOt7 = mTe9k32hAOt7 + 1)
        str2[mTe9k32hAOt7] = uGPl3vJw6kHW[mTe9k32hAOt7 + TlNBcf31kZI +1];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    uGPl3vJw6kHW[TlNBcf31kZI +1] = '\0';
    strcat (uGPl3vJw6kHW, substr);
    str2[mTe9k32hAOt7] = 0;
    strcat (uGPl3vJw6kHW, str2);
}

main () {
    char uGPl3vJw6kHW [(1010 - 910)];
    char substr [(911 - 811)];
    char IRWkKn [100] [100];
    int mTe9k32hAOt7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    int TlNBcf31kZI;
    mTe9k32hAOt7 = 0;
    for (; scanf ("%s%s", uGPl3vJw6kHW, substr) != EOF;) {
        mTe9k32hAOt7++;
        TlNBcf31kZI = a (uGPl3vJw6kHW);
        b (uGPl3vJw6kHW, substr, TlNBcf31kZI);
        strcpy (IRWkKn[mTe9k32hAOt7], uGPl3vJw6kHW);
    }
    for (TlNBcf31kZI = 1; TlNBcf31kZI <= mTe9k32hAOt7; TlNBcf31kZI = TlNBcf31kZI +1)
        puts (IRWkKn[TlNBcf31kZI]);
}

