int main () {
    int qoe1U6Aqn;
    int KwCjsS;
    int SLIJTZqYHz;
    int AQg6MkE;
    int ho6v4b;
    int VKuA82lIY61;
    int zLnUeRS01yI;
    int Rk6VC317;
    int eONpSk;
    qoe1U6Aqn = (957 - 957);
    char DJQ7i1D [20] = "\0";
    char jLFg2wnj0hr [20] = "\0";
    scanf ("%d", &KwCjsS);
    {
        AQg6MkE = 627 - 627;
        while (AQg6MkE < 20) {
            scanf ("%c", &DJQ7i1D[AQg6MkE]);
            if (!(' ' != DJQ7i1D[AQg6MkE]))
                break;
            AQg6MkE++;
        };
    }
    eONpSk = (584 - 584);
    {
        ho6v4b = 564 - 564;
        while (AQg6MkE > ho6v4b) {
            if (DJQ7i1D[ho6v4b] >= (333 - 285) && DJQ7i1D[ho6v4b] <= 57)
                VKuA82lIY61 = DJQ7i1D[ho6v4b] - (165 - 117);
            else if (65 <= DJQ7i1D[ho6v4b] && DJQ7i1D[ho6v4b] <= 90)
                VKuA82lIY61 = DJQ7i1D[ho6v4b] - (482 - 427);
            else if (DJQ7i1D[ho6v4b] >= 97 && 122 >= DJQ7i1D[ho6v4b])
                VKuA82lIY61 = DJQ7i1D[ho6v4b] - 87;
            if (ho6v4b == AQg6MkE -1)
                qoe1U6Aqn += VKuA82lIY61;
            else {
                {
                    zLnUeRS01yI = 1;
                    while (zLnUeRS01yI < AQg6MkE -ho6v4b) {
                        zLnUeRS01yI = zLnUeRS01yI + 1;
                        VKuA82lIY61 = VKuA82lIY61 *KwCjsS;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                qoe1U6Aqn += VKuA82lIY61;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ho6v4b = ho6v4b + 1;
        };
    }
    getchar ();
    scanf ("%d", &SLIJTZqYHz);
    if (qoe1U6Aqn > SLIJTZqYHz) {
        {
            eONpSk = 409 - 409;
            while (eONpSk < 20) {
                Rk6VC317 = qoe1U6Aqn % SLIJTZqYHz;
                qoe1U6Aqn = qoe1U6Aqn / SLIJTZqYHz;
                if (qoe1U6Aqn == 0)
                    break;
                if (Rk6VC317 <= 9)
                    jLFg2wnj0hr[eONpSk] = Rk6VC317 +48;
                else
                    jLFg2wnj0hr[eONpSk] = Rk6VC317 +55;
                eONpSk = eONpSk + 1;
            };
        }
        for (ho6v4b = eONpSk; ho6v4b >= 0; ho6v4b--)
            printf ("%c", jLFg2wnj0hr[ho6v4b]);
    }
    else
        printf ("%d", qoe1U6Aqn);
    return 0;
}

