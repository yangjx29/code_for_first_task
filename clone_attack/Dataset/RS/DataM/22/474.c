int main () {
    int jsETg1v3wth7 [310], lXQup9OmHf = (839 - 839), nP7iE4cxdBe = (148 - 148), MdHuMo = (901 - 901), HwYmLCE5318, m3OyTIPS5bC;
    char I6QrBw [(486 - 386)], pRAbxaEwN4;
    int AjowaFiznO = lXQup9OmHf;
    int KH5ixGOqYlcU = -1;
    while ((112 - 111)) {
        pRAbxaEwN4 = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('\n' != pRAbxaEwN4)) {
            m3OyTIPS5bC = (998 - 997);
            {
                HwYmLCE5318 = 746 - 745;
                while ((171 - 171) <= HwYmLCE5318) {
                    MdHuMo += (I6QrBw[HwYmLCE5318] - '0') * m3OyTIPS5bC;
                    HwYmLCE5318 = HwYmLCE5318 -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    m3OyTIPS5bC *= (552 - 542);
                };
            }
            jsETg1v3wth7[lXQup9OmHf] = MdHuMo;
            lXQup9OmHf = lXQup9OmHf + 1;
            MdHuMo = (863 - 863);
            nP7iE4cxdBe = 0;
            break;
        }
        else if ('0' <= pRAbxaEwN4 && '9' >= pRAbxaEwN4) {
            I6QrBw[nP7iE4cxdBe] = pRAbxaEwN4;
            nP7iE4cxdBe = nP7iE4cxdBe + 1;
        }
        else {
            m3OyTIPS5bC = (85 - 84);
            for (HwYmLCE5318 = nP7iE4cxdBe - 1; HwYmLCE5318 >= 0; HwYmLCE5318 = HwYmLCE5318 -1) {
                MdHuMo += (I6QrBw[HwYmLCE5318] - '0') * m3OyTIPS5bC;
                m3OyTIPS5bC *= 10;
            }
            jsETg1v3wth7[lXQup9OmHf] = MdHuMo;
            MdHuMo = 0;
            nP7iE4cxdBe = 0;
            lXQup9OmHf = lXQup9OmHf + 1;
        };
    }
    {
        lXQup9OmHf = 0;
        while (AjowaFiznO > lXQup9OmHf) {
            if (jsETg1v3wth7[lXQup9OmHf] > KH5ixGOqYlcU)
                KH5ixGOqYlcU = jsETg1v3wth7[lXQup9OmHf];
            lXQup9OmHf++;
        };
    }
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
    for (lXQup9OmHf = 0; lXQup9OmHf < AjowaFiznO; lXQup9OmHf = lXQup9OmHf + 1)
        if (jsETg1v3wth7[lXQup9OmHf] == KH5ixGOqYlcU)
            jsETg1v3wth7[lXQup9OmHf] = -2;
    KH5ixGOqYlcU = -1;
    for (lXQup9OmHf = 0; lXQup9OmHf < AjowaFiznO; lXQup9OmHf = lXQup9OmHf + 1)
        if (jsETg1v3wth7[lXQup9OmHf] > KH5ixGOqYlcU)
            KH5ixGOqYlcU = jsETg1v3wth7[lXQup9OmHf];
    if (KH5ixGOqYlcU > -1)
        printf ("%d\n", KH5ixGOqYlcU);
    else
        printf ("No\n");
    getchar ();
    getchar ();
}

