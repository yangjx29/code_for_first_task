int main () {
    int SdcB1SpL, sx_col, GVBacSUz8O;
    int a;
    int VhRJSku5;
    int i;
    int j;
    int nQcITvyAZ;
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
    int m7M8PzNxT;
    scanf ("%d", &VhRJSku5);
    {
        a = 335 - 335;
        while (a < VhRJSku5) {
            int sz [(164 - 64)] [(667 - 567)];
            GVBacSUz8O = (491 - 491);
            scanf ("%d %d", &nQcITvyAZ, &m7M8PzNxT);
            {
                i = 704 - 704;
                while (nQcITvyAZ > i) {
                    {
                        j = 949 - 949;
                        while (j < m7M8PzNxT) {
                            scanf ("%d", &sz[i][j]);
                            j = j + 1;
                        };
                    }
                    i = i + 1;
                };
            }
            sx_col = m7M8PzNxT - 1;
            SdcB1SpL = nQcITvyAZ - (355 - 354);
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
            {
                j = 0;
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
                while (j < sx_col) {
                    GVBacSUz8O = GVBacSUz8O +sz[0][j];
                    j = j + 1;
                };
            }
            {
                i = 0;
                while (i < SdcB1SpL) {
                    GVBacSUz8O = GVBacSUz8O +sz[i][sx_col];
                    i = i + 1;
                };
            }
            {
                j = sx_col;
                while (j > 0) {
                    GVBacSUz8O = GVBacSUz8O +sz[SdcB1SpL][j];
                    j = j - 1;
                };
            }
            {
                i = SdcB1SpL;
                while (i > 0) {
                    GVBacSUz8O = GVBacSUz8O +sz[i][0];
                    i = i - 1;
                };
            }
            printf ("%d\n", GVBacSUz8O);
            a++;
        };
    }
    return 0;
}

