int k1Nx20XB (int ooF3W19r6a) {
    int Yrac2UZi, WWMn3KmqA, Si9bW56MwE2T, FHbdEw2C, zughV2, GzDA4e7U5 [11];
    zughV2 = 0;
    FHbdEw2C = 0;
    Si9bW56MwE2T = 0;
    while ((ooF3W19r6a >= 10) || (!(0 == ooF3W19r6a % 10))) {
        WWMn3KmqA = ooF3W19r6a % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ooF3W19r6a = ooF3W19r6a / 10;
        if ((Si9bW56MwE2T == 0) && (WWMn3KmqA != 0) || (Si9bW56MwE2T == 1)) {
            Si9bW56MwE2T = 1;
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
            GzDA4e7U5[FHbdEw2C++] = WWMn3KmqA;
        };
    }
    if (Si9bW56MwE2T) {
        Yrac2UZi = 0;
        while (Yrac2UZi <= FHbdEw2C -1) {
            zughV2 = zughV2 * 10 + GzDA4e7U5[Yrac2UZi];
            Yrac2UZi = Yrac2UZi +1;
        };
    }
    else
        zughV2 = ooF3W19r6a;
    return (zughV2);
}

void  main () {
    int Si9bW56MwE2T, ooF3W19r6a;
    Si9bW56MwE2T = 0;
    while (scanf ("%d", &ooF3W19r6a) == 1) {
        if (ooF3W19r6a < 0) {
            ooF3W19r6a = ooF3W19r6a * (-1);
        }
        printf ("%d\n", k1Nx20XB (ooF3W19r6a));
    };
}

