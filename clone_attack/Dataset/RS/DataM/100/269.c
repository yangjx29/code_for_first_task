int main () {
    char Qo7WrA [300];
    int PdnBMU;
    int mH2NaGKXFx9;
    int b [26] = {0};
    int XyHebV0L;
    PdnBMU = 0;
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
    mH2NaGKXFx9 = 0;
    scanf ("%s", Qo7WrA);
    for (; Qo7WrA[PdnBMU];) {
        XyHebV0L = Qo7WrA[PdnBMU] - 'a';
        PdnBMU++;
        if (XyHebV0L >= 0 && XyHebV0L <= 25) {
            mH2NaGKXFx9 = 1;
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
            b[XyHebV0L]++;
        };
    }
    {
        XyHebV0L = 0;
        while (XyHebV0L < 26) {
            if (b[XyHebV0L] != 0)
                printf ("%c=%d\n", (XyHebV0L +'a'), b[XyHebV0L]);
            XyHebV0L = XyHebV0L +1;
        };
    }
    if (mH2NaGKXFx9 == 0)
        ;
    return 0;
}

