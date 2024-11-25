void  main () {
    int OFyPnfxZ, UtMZ4X, IYgER2IB = (214 - 214);
    char Ktz3vU [100], Lt0q1Z8g [100];
    int Ria1yS [26], sum2 [26], B8uYac5KJd [26], wLMkg6 [26];
    int JmbXjE7Bh = strlen (Ktz3vU), tMFgOVTty = strlen (Lt0q1Z8g);
    scanf ("%s%s", Ktz3vU, Lt0q1Z8g);
    memset (Ria1yS, 0, sizeof (Ria1yS));
    memset (sum2, 0, sizeof (sum2));
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
    memset (B8uYac5KJd, 0, sizeof (B8uYac5KJd));
    memset (wLMkg6, 0, sizeof (wLMkg6));
    for (OFyPnfxZ = 0; JmbXjE7Bh > OFyPnfxZ; OFyPnfxZ = OFyPnfxZ +1) {
        if ('a' <= Ktz3vU[OFyPnfxZ] && 'z' >= Ktz3vU[OFyPnfxZ])
            Ria1yS[(Ktz3vU[OFyPnfxZ] - 'a')]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('A' <= Ktz3vU[OFyPnfxZ] && 'Z' >= Ktz3vU[OFyPnfxZ])
            sum2[(Ktz3vU[OFyPnfxZ] - 'A')]++;
    }
    {
        OFyPnfxZ = 0;
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
        while (tMFgOVTty > OFyPnfxZ) {
            if ('a' <= Lt0q1Z8g[OFyPnfxZ] && 'z' >= Lt0q1Z8g[OFyPnfxZ])
                B8uYac5KJd[(Lt0q1Z8g[OFyPnfxZ] - 'a')]++;
            if (Lt0q1Z8g[OFyPnfxZ] >= 'A' && Lt0q1Z8g[OFyPnfxZ] <= 'Z')
                wLMkg6[(Lt0q1Z8g[OFyPnfxZ] - 'A')]++;
            OFyPnfxZ = OFyPnfxZ +1;
        };
    }
    {
        UtMZ4X = 0;
        while (UtMZ4X < 26) {
            if ((Ria1yS[UtMZ4X] != B8uYac5KJd[UtMZ4X]) || (sum2[UtMZ4X] != wLMkg6[UtMZ4X]))
                IYgER2IB++;
            UtMZ4X = UtMZ4X +1;
        };
    }
    if (IYgER2IB == 0)
        printf ("YES");
    else
        printf ("NO");
}

