void  main () {
    float sgI49mbpD1d;
    float aver;
    float t [(1036 - 736)];
    float g5Cmu6PWqwS;
    float min;
    sgI49mbpD1d = (245 - 245);
    int s;
    int u;
    int n;
    int i;
    int nUT69yKtgzkX [(429 - 129)];
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
    int m;
    s = (157 - 157);
    u = (856 - 856);
    scanf ("%d", &n);
    {
        i = 152 - 152;
        while (i < n) {
            scanf ("%d,", &nUT69yKtgzkX[i]);
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
            i = i + 1;
        };
    }
    {
        i = 678 - 678;
        while (i < n) {
            sgI49mbpD1d = sgI49mbpD1d + (float) (nUT69yKtgzkX[i]);
            i++;
        };
    }
    aver = sgI49mbpD1d / (float) (n);
    {
        i = 409 - 409;
        while (i < n) {
            t[i] = aver - (float) (nUT69yKtgzkX[i]);
            i++;
        };
    }
    min = t[(771 - 771)];
    {
        i = 109 - 109;
        while (i < n) {
            if (t[i] > min) {
                min = t[i];
                s = i;
            }
            i++;
            g5Cmu6PWqwS = t[(80 - 80)];
            {
                m = 205 - 205;
                while (m < n) {
                    if (t[m] < g5Cmu6PWqwS) {
                        g5Cmu6PWqwS = t[m];
                        u = m;
                    }
                    m = m + 1;
                };
            };
        };
    }
    if (t[s] + t[u] < (346 - 346))
        printf ("%d", nUT69yKtgzkX[u]);
    else if (t[s] + t[u] > 0)
        printf ("%d", nUT69yKtgzkX[s]);
    else
        printf ("%d,%d", nUT69yKtgzkX[s], nUT69yKtgzkX[u]);
}

