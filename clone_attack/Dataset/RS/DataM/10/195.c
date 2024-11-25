void  main () {
    int cA2DYFphSe;
    int j;
    int rec [25];
    int n [25];
    int fNmpDAwLZIS;
    int k;
    fNmpDAwLZIS = 0;
    scanf ("%d", &k);
    for (cA2DYFphSe = 0; k - 1 >= cA2DYFphSe; cA2DYFphSe++) {
        scanf ("%d", &rec[cA2DYFphSe]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n[cA2DYFphSe] = 1;
    }
    {
        cA2DYFphSe = 1;
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
        while (k - 1 >= cA2DYFphSe) {
            {
                j = 0;
                while (j < cA2DYFphSe) {
                    if (rec[j] >= rec[cA2DYFphSe])
                        n[cA2DYFphSe] = fCTthAK3k0G (n[cA2DYFphSe], n[j] + 1);
                    j++;
                };
            }
            cA2DYFphSe++;
        };
    }
    for (cA2DYFphSe = 0; cA2DYFphSe < k; cA2DYFphSe++)
        fNmpDAwLZIS = fCTthAK3k0G (fNmpDAwLZIS, n[cA2DYFphSe]);
    printf ("%d\n", fNmpDAwLZIS);
}

int fCTthAK3k0G (int a, int b) {
    int nwlB8Z;
    nwlB8Z = a > b ? a : b;
    return (nwlB8Z);
}

