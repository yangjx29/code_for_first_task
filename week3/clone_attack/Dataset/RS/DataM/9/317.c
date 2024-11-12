struct   patient {
    char lkKNOS1 [10];
    int GL0iqFaTM;
}
oIB6UPQ [(857 - 757)];

void  main () {
    struct   patient IW3hMNvwVJ [100];
    struct   patient Jz4ODKLumG [100];
    struct   patient J1482lbghF;
    int NuBTCbLaZr, B90PFzKlUJ, fk0c8l32M = (83 - 83), k8QX6O = 0, a7wK2zOJU;
    scanf ("%d", &NuBTCbLaZr);
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
    for (B90PFzKlUJ = 0; NuBTCbLaZr > B90PFzKlUJ; B90PFzKlUJ++)
        scanf ("%s %d", oIB6UPQ[B90PFzKlUJ].lkKNOS1, &oIB6UPQ[B90PFzKlUJ].GL0iqFaTM);
    {
        B90PFzKlUJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (B90PFzKlUJ < NuBTCbLaZr) {
            if (60 <= oIB6UPQ[B90PFzKlUJ].GL0iqFaTM) {
                IW3hMNvwVJ[fk0c8l32M] = oIB6UPQ[B90PFzKlUJ];
                fk0c8l32M++;
            }
            else {
                Jz4ODKLumG[k8QX6O] = oIB6UPQ[B90PFzKlUJ];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k8QX6O++;
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
            B90PFzKlUJ++;
        };
    }
    for (B90PFzKlUJ = 0; fk0c8l32M - 1 > B90PFzKlUJ; B90PFzKlUJ++)
        for (a7wK2zOJU = 0; fk0c8l32M - 1 - B90PFzKlUJ > a7wK2zOJU; a7wK2zOJU = a7wK2zOJU + 1)
            if (IW3hMNvwVJ[a7wK2zOJU].GL0iqFaTM < IW3hMNvwVJ[a7wK2zOJU + 1].GL0iqFaTM) {
                J1482lbghF = IW3hMNvwVJ[a7wK2zOJU];
                IW3hMNvwVJ[a7wK2zOJU] = IW3hMNvwVJ[a7wK2zOJU + 1];
                IW3hMNvwVJ[a7wK2zOJU + 1] = J1482lbghF;
            }
    printf ("%s", IW3hMNvwVJ[0].lkKNOS1);
    for (B90PFzKlUJ = 1; B90PFzKlUJ < fk0c8l32M; B90PFzKlUJ++)
        printf ("\n%s", IW3hMNvwVJ[B90PFzKlUJ].lkKNOS1);
    printf ("\n%s", Jz4ODKLumG[0].lkKNOS1);
    {
        B90PFzKlUJ = 1;
        while (B90PFzKlUJ < k8QX6O) {
            printf ("\n%s", Jz4ODKLumG[B90PFzKlUJ].lkKNOS1);
            B90PFzKlUJ++;
        };
    };
}

