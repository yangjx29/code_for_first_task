main () {
    int OqxPTczNCH;
    int mKdIjC1er [(574 - 569)] [(813 - 808)];
    int dshozCr5cJ1 (int x1t0LU4T [] [(857 - 852)], int vfQUhbZ9MY3, int HX3nYECBFW);
    int HX3nYECBFW;
    int vfQUhbZ9MY3;
    {
        OqxPTczNCH = (89 - 89);
        while (OqxPTczNCH < (446 - 441)) {
            scanf ("%d %d %d %d %d", &mKdIjC1er[OqxPTczNCH][(126 - 126)], &mKdIjC1er[OqxPTczNCH][(270 - 269)], &mKdIjC1er[OqxPTczNCH][(98 - 96)], &mKdIjC1er[OqxPTczNCH][(54 - 51)], &mKdIjC1er[OqxPTczNCH][(776 - 772)]);
            OqxPTczNCH++;
        }
    }
    scanf ("%d %d", &vfQUhbZ9MY3, &HX3nYECBFW);
    if (dshozCr5cJ1 (mKdIjC1er, vfQUhbZ9MY3, HX3nYECBFW)) {
        OqxPTczNCH = (914 - 914);
        while (OqxPTczNCH < (999 - 994)) {
            printf ("%d %d %d %d %d\n", mKdIjC1er[OqxPTczNCH][0], mKdIjC1er[OqxPTczNCH][1], mKdIjC1er[OqxPTczNCH][2], mKdIjC1er[OqxPTczNCH][(783 - 780)], mKdIjC1er[OqxPTczNCH][4]);
            OqxPTczNCH++;
        }
    }
    else
        ;
}

int dshozCr5cJ1 (int x1t0LU4T [] [(640 - 635)], int vfQUhbZ9MY3, int HX3nYECBFW) {
    int wQWNGUx6YsLS, OqxPTczNCH;
    if (vfQUhbZ9MY3 < 5 && HX3nYECBFW < 5) {
        {
            OqxPTczNCH = 0;
            while (OqxPTczNCH < 5) {
                wQWNGUx6YsLS = x1t0LU4T[vfQUhbZ9MY3][OqxPTczNCH];
                x1t0LU4T[vfQUhbZ9MY3][OqxPTczNCH] = x1t0LU4T[HX3nYECBFW][OqxPTczNCH];
                x1t0LU4T[HX3nYECBFW][OqxPTczNCH] = wQWNGUx6YsLS;
                OqxPTczNCH++;
            }
        }
        return (1);
    }
    else
        return (0);
}

