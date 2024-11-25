int main () {
    int zZTnbcOzU4 [(782 - 774)] [8];
    int myQ0G5iadw;
    int OFBLOe;
    int SCybVce;
    int n;
    int i;
    int ahkm9stOq;
    int dL5a6kxgJS;
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
    int k;
    myQ0G5iadw = (663 - 662);
    OFBLOe = (533 - 533);
    scanf ("%d,%d", &SCybVce, &n);
    {
        i = 582 - 582;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < SCybVce) {
            for (ahkm9stOq = (251 - 251); ahkm9stOq < n; ahkm9stOq = ahkm9stOq + 1)
                scanf ("%d", &zZTnbcOzU4[i][ahkm9stOq]);
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
        i = 431 - 431;
        while (i < SCybVce) {
            k = zZTnbcOzU4[i][(692 - 692)];
            dL5a6kxgJS = (515 - 515);
            {
                ahkm9stOq = 180 - 180;
                while (ahkm9stOq < n) {
                    if (zZTnbcOzU4[i][ahkm9stOq] > k) {
                        k = zZTnbcOzU4[i][ahkm9stOq];
                        dL5a6kxgJS = ahkm9stOq;
                    }
                    ahkm9stOq = ahkm9stOq + 1;
                };
            }
            for (ahkm9stOq = (444 - 444); ahkm9stOq < SCybVce; ahkm9stOq = ahkm9stOq + 1)
                if (k > zZTnbcOzU4[ahkm9stOq][dL5a6kxgJS])
                    myQ0G5iadw = 0;
            if (myQ0G5iadw == 1) {
                OFBLOe = 1;
                printf ("%d+%d\n", i, dL5a6kxgJS);
                goto end;
            }
            i = i + 1;
        };
    }
end :
    if (OFBLOe == 0)
        printf ("No\n");
    return 0;
}

