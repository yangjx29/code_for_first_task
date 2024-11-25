int B2cFCHitu0W, c1DvWqY, a [20], XuPhV2dr [20];

void  ZZ20ICG () {
    int TMmZdJ;
    scanf ("%d %d", &B2cFCHitu0W, &c1DvWqY);
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
    {
        TMmZdJ = 526 - 526;
        while (B2cFCHitu0W > TMmZdJ) {
            scanf ("%d", &a[TMmZdJ]);
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
            TMmZdJ = TMmZdJ +1;
        };
    }
    {
        TMmZdJ = 915 - 915;
        while (c1DvWqY > TMmZdJ) {
            scanf ("%d", &XuPhV2dr[TMmZdJ]);
            TMmZdJ++;
        };
    };
}

void  Mz9BroTq1V (int x, int H3TrsDYg [20]) {
    int TMmZdJ;
    int hJDPs97U8iQb;
    int PX1c7BP;
    {
        TMmZdJ = 978 - 978;
        while (x - (198 - 197) > TMmZdJ) {
            TMmZdJ++;
            for (hJDPs97U8iQb = 0; x - (576 - 575) > hJDPs97U8iQb; hJDPs97U8iQb = hJDPs97U8iQb + 1) {
                if (H3TrsDYg[hJDPs97U8iQb + (678 - 677)] < H3TrsDYg[hJDPs97U8iQb]) {
                    PX1c7BP = H3TrsDYg[hJDPs97U8iQb];
                    H3TrsDYg[hJDPs97U8iQb] = H3TrsDYg[hJDPs97U8iQb + 1];
                    H3TrsDYg[hJDPs97U8iQb + 1] = PX1c7BP;
                };
            };
        };
    };
}

void  NvDbn3SZGuFX () {
    int TMmZdJ;
    {
        TMmZdJ = 0;
        while (B2cFCHitu0W > TMmZdJ) {
            printf ("%d ", a[TMmZdJ]);
            TMmZdJ++;
        };
    }
    for (TMmZdJ = B2cFCHitu0W; TMmZdJ < B2cFCHitu0W +c1DvWqY - 1; TMmZdJ++)
        printf ("%d ", XuPhV2dr[TMmZdJ -B2cFCHitu0W]);
    if (TMmZdJ = B2cFCHitu0W +c1DvWqY - 1)
        printf ("%d", XuPhV2dr[c1DvWqY - 1]);
}

void  main () {
    ZZ20ICG ();
    Mz9BroTq1V (c1DvWqY, XuPhV2dr);
    Mz9BroTq1V (B2cFCHitu0W, a);
    NvDbn3SZGuFX ();
}

