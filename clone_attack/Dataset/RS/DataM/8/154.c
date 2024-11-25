int bawmf9Z8ly, m, muKPjEn [100], Jl2H4ZfmtF [100], cSDTtA0 [200];

void  hGrgzU () {
    int WVRbOIF87N;
    scanf ("%d%d", &m, &bawmf9Z8ly);
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
    for (WVRbOIF87N = 0; m > WVRbOIF87N; WVRbOIF87N = WVRbOIF87N +1)
        scanf ("%d", &muKPjEn[WVRbOIF87N]);
    {
        WVRbOIF87N = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WVRbOIF87N < bawmf9Z8ly) {
            scanf ("%d", &Jl2H4ZfmtF[WVRbOIF87N]);
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
            WVRbOIF87N = WVRbOIF87N +1;
        };
    };
}

void  xCedlKwa (int k [], int OXrOgpZV2NR) {
    int WVRbOIF87N;
    int j;
    int gTuwFEAklB;
    {
        WVRbOIF87N = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (WVRbOIF87N < OXrOgpZV2NR -1) {
            {
                j = WVRbOIF87N;
                while (OXrOgpZV2NR > j) {
                    if (k[WVRbOIF87N] > k[j]) {
                        gTuwFEAklB = k[WVRbOIF87N];
                        k[WVRbOIF87N] = k[j];
                        k[j] = gTuwFEAklB;
                    }
                    j = j + 1;
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
            WVRbOIF87N = WVRbOIF87N +1;
        };
    };
}

void  f3 () {
    int WVRbOIF87N;
    xCedlKwa (muKPjEn, m);
    xCedlKwa (Jl2H4ZfmtF, bawmf9Z8ly);
    {
        WVRbOIF87N = 0;
        while (WVRbOIF87N < m) {
            cSDTtA0[WVRbOIF87N] = muKPjEn[WVRbOIF87N];
            WVRbOIF87N = WVRbOIF87N +1;
        };
    }
    {
        WVRbOIF87N = 0;
        while (WVRbOIF87N < bawmf9Z8ly) {
            cSDTtA0[WVRbOIF87N +m] = Jl2H4ZfmtF[WVRbOIF87N];
            WVRbOIF87N++;
        };
    };
}

void  hKAUpwaW () {
    int WVRbOIF87N;
    for (WVRbOIF87N = 0; WVRbOIF87N < m + bawmf9Z8ly - 1; WVRbOIF87N++)
        printf ("%d ", cSDTtA0[WVRbOIF87N]);
    printf ("%d", cSDTtA0[m + bawmf9Z8ly - 1]);
}

void  main () {
    hGrgzU ();
    f3 ();
    hKAUpwaW ();
}

