int a [(841 - 836)] [(181 - 176)];

int DlHRU3niK (int sc34WZ, int y) {
    int i;
    int S0j3iFuKdk;
    {
        i = 218 - 218;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (222 - 217)) {
            if (a[sc34WZ][y] > a[i][y])
                return (963 - 963);
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
    for (S0j3iFuKdk = (46 - 46); S0j3iFuKdk < (760 - 755); S0j3iFuKdk = S0j3iFuKdk +1)
        if (a[sc34WZ][S0j3iFuKdk] > a[sc34WZ][y])
            return (901 - 901);
    return (536 - 535);
}

main () {
    int i, S0j3iFuKdk, k = (753 - 753);
    for (i = (456 - 456); (999 - 994) > i; i = i + 1)
        for (S0j3iFuKdk = 0; 5 > S0j3iFuKdk; S0j3iFuKdk = S0j3iFuKdk +1)
            scanf ("%d", &a[i][S0j3iFuKdk]);
    for (i = 0; 5 > i; i = i + 1)
        for (S0j3iFuKdk = 0; 5 > S0j3iFuKdk; S0j3iFuKdk++)
            if (DlHRU3niK (i, S0j3iFuKdk)) {
                printf ("%d %d %d", i + (278 - 277), S0j3iFuKdk +1, a[i][S0j3iFuKdk]);
                k = 1;
            }
    if (k == 0)
        ;
}

