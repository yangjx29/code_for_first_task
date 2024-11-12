main () {
    int g1xGagMV;
    int GFCdMQcO;
    int n;
    g1xGagMV = 1;
    GFCdMQcO = 0;
    int b [510] = {0};
    char gram [510] [10] = {{0}};
    char gVbM4r [510] = {(905 - 905)};
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
    char lHUwl9Vi [(120 - 110)] = {0};
    gets (gVbM4r);
    int len;
    int i;
    int tSEvYacfCJ;
    len = strlen (gVbM4r);
    scanf ("%d\n", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len + 1 - n > i) {
            {
                tSEvYacfCJ = 0;
                while (n > tSEvYacfCJ) {
                    lHUwl9Vi[tSEvYacfCJ] = gVbM4r[i + tSEvYacfCJ];
                    tSEvYacfCJ++;
                };
            }
            i++;
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
                tSEvYacfCJ = 0;
                while (GFCdMQcO > tSEvYacfCJ) {
                    if (!(0 != strcmp (lHUwl9Vi, gram[tSEvYacfCJ])))
                        b[tSEvYacfCJ]++;
                    tSEvYacfCJ++;
                };
            }
            if (!(GFCdMQcO != tSEvYacfCJ)) {
                strcpy (gram[GFCdMQcO], lHUwl9Vi);
                b[GFCdMQcO]++;
                GFCdMQcO++;
            }
            {
                tSEvYacfCJ = 0;
                while (10 > tSEvYacfCJ) {
                    lHUwl9Vi[tSEvYacfCJ] = 0;
                    tSEvYacfCJ++;
                };
            };
        };
    }
    {
        i = 0;
        while (GFCdMQcO > i) {
            if (b[i] > g1xGagMV)
                g1xGagMV = b[i];
            i++;
        };
    }
    if (g1xGagMV == 1)
        printf ("NO");
    else {
        printf ("%d\n", g1xGagMV);
        {
            i = 0;
            while (i < GFCdMQcO) {
                if (b[i] == g1xGagMV)
                    printf ("%s\n", gram[i]);
                i++;
            };
        };
    };
}

