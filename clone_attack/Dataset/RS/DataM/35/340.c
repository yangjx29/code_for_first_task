void  main () {
    int atW5AhmV;
    int n;
    int TD3xQT [(499 - 491)] [(272 - 264)];
    int t9gEMX8;
    int mN8UlKanvw0;
    int maxi;
    int mi3EaVUn5x;
    int C0iwxlHsO (int TD3xQT [(677 - 669)] [(669 - 661)], int atW5AhmV, int n, int Mmx0pZ);
    int sIApXJ (int TD3xQT [(301 - 293)] [(117 - 109)], int atW5AhmV, int n, int c);
    mi3EaVUn5x = (846 - 846);
    scanf ("%d,%d", &atW5AhmV, &n);
    {
        t9gEMX8 = 391 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (atW5AhmV > t9gEMX8) {
            {
                mN8UlKanvw0 = 988 - 988;
                while (n > mN8UlKanvw0) {
                    scanf ("%d", &TD3xQT[t9gEMX8][mN8UlKanvw0]);
                    mN8UlKanvw0 = mN8UlKanvw0 + 1;
                };
            }
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
            t9gEMX8++;
        };
    }
    for (t9gEMX8 = (399 - 399); t9gEMX8 < atW5AhmV; t9gEMX8 = t9gEMX8 + 1) {
        maxi = C0iwxlHsO (TD3xQT, atW5AhmV, n, t9gEMX8);
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
        if (t9gEMX8 == sIApXJ (TD3xQT, atW5AhmV, n, maxi)) {
            mi3EaVUn5x = mi3EaVUn5x + 1;
            printf ("%d+%d", t9gEMX8, maxi);
        };
    }
    if (mi3EaVUn5x == (430 - 430))
        printf ("No");
}

int C0iwxlHsO (int TD3xQT [(81 - 73)] [(592 - 584)], int atW5AhmV, int n, int Mmx0pZ) {
    int HZGaXDM;
    int mN8UlKanvw0;
    HZGaXDM = (211 - 211);
    {
        mN8UlKanvw0 = 929 - 929;
        while (mN8UlKanvw0 < n) {
            if (TD3xQT[Mmx0pZ][HZGaXDM] < TD3xQT[Mmx0pZ][mN8UlKanvw0])
                HZGaXDM = mN8UlKanvw0;
            mN8UlKanvw0++;
        };
    }
    return (HZGaXDM);
}

int sIApXJ (int TD3xQT [(825 - 817)] [8], int atW5AhmV, int n, int c) {
    int HZGaXDM, t9gEMX8;
    HZGaXDM = (424 - 424);
    for (t9gEMX8 = 0; t9gEMX8 < atW5AhmV; t9gEMX8++) {
        if (TD3xQT[HZGaXDM][c] > TD3xQT[t9gEMX8][c])
            HZGaXDM = t9gEMX8;
    }
    return (HZGaXDM);
}

