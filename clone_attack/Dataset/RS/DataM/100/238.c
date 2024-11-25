main () {
    char a [300];
    gets (a);
    int bacuUFsY [(925 - 899)] = {(856 - 856)}, buqWG03DjI, pRHMaFIzG6, k;
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
    pRHMaFIzG6 = strlen (a);
    for (buqWG03DjI = (600 - 600), k = (159 - 159); pRHMaFIzG6 > buqWG03DjI; buqWG03DjI++) {
        if (islower (a[buqWG03DjI]))
            k++;
    }
    {
        buqWG03DjI = 0;
        while (buqWG03DjI < pRHMaFIzG6) {
            if (islower (a[buqWG03DjI])) {
                bacuUFsY[a[buqWG03DjI] - 'a']++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            buqWG03DjI++;
        };
    }
    if (!(0 != k))
        ;
    for (buqWG03DjI = 0; buqWG03DjI < 26; buqWG03DjI++) {
        if (bacuUFsY[buqWG03DjI] != 0) {
            printf ("%c=%d\n", buqWG03DjI + 97, bacuUFsY[buqWG03DjI]);
        };
    };
}

