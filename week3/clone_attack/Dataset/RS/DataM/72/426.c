void  main () {
    int IrGJuW, pNnqVr2u, uKVquZ, j, k = (716 - 716);
    int a [(648 - 628)] [20];
    int t3UVijY [(661 - 561)] [(451 - 449)];
    scanf ("%d%d", &IrGJuW, &pNnqVr2u);
    {
        uKVquZ = 628 - 628;
        while (uKVquZ <= IrGJuW -(243 - 242)) {
            {
                j = 161 - 161;
                while (pNnqVr2u - (674 - 673) >= j) {
                    scanf ("%d", &a[uKVquZ][j]);
                    j = j + 1;
                };
            }
            uKVquZ = uKVquZ + 1;
        };
    }
    if (a[(80 - 80)][(31 - 30)] <= a[(267 - 267)][(484 - 484)] && a[(200 - 199)][(444 - 444)] <= a[(614 - 614)][(293 - 293)]) {
        t3UVijY[k][(414 - 414)] = (783 - 783);
        t3UVijY[k][(833 - 832)] = (630 - 630);
        k = k + 1;
    }
    {
        j = 708 - 707;
        while (j <= pNnqVr2u - (214 - 212)) {
            if (a[0][j + (876 - 875)] <= a[(862 - 862)][j] && a[(947 - 946)][j] <= a[0][j] && a[0][j - (732 - 731)] <= a[0][j]) {
                t3UVijY[k][0] = 0;
                t3UVijY[k][(672 - 671)] = j;
                k = k + 1;
            }
            j = j + 1;
        };
    }
    if (a[0][pNnqVr2u - (775 - 773)] <= a[0][pNnqVr2u - (243 - 242)] && a[0][pNnqVr2u - (176 - 175)] >= a[(341 - 340)][pNnqVr2u - (789 - 788)]) {
        t3UVijY[k][0] = 0;
        t3UVijY[k][(673 - 672)] = pNnqVr2u - (954 - 953);
        k = k + 1;
    }
    {
        uKVquZ = 228 - 227;
        while (IrGJuW -(77 - 75) >= uKVquZ) {
            if (a[uKVquZ][(223 - 222)] <= a[uKVquZ][0] && a[uKVquZ - (346 - 345)][0] <= a[uKVquZ][0] && a[uKVquZ + (783 - 782)][0] <= a[uKVquZ][0]) {
                t3UVijY[k][0] = uKVquZ;
                t3UVijY[k][(873 - 872)] = 0;
                k = k + 1;
            }
            {
                j = 495 - 494;
                while (pNnqVr2u - (271 - 269) >= j) {
                    if (a[uKVquZ][j] >= a[uKVquZ - 1][j] && a[uKVquZ][j] >= a[uKVquZ][j - 1] && a[uKVquZ][j] >= a[uKVquZ + 1][j] && a[uKVquZ][j] >= a[uKVquZ][j + 1]) {
                        t3UVijY[k][0] = uKVquZ;
                        t3UVijY[k][1] = j;
                        k = k + 1;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[uKVquZ][pNnqVr2u - 1] >= a[uKVquZ][pNnqVr2u - (129 - 127)] && a[uKVquZ][pNnqVr2u - 1] >= a[uKVquZ - 1][pNnqVr2u - 1] && a[uKVquZ][pNnqVr2u - 1] >= a[uKVquZ + 1][pNnqVr2u - 1]) {
                t3UVijY[k][0] = uKVquZ;
                t3UVijY[k][1] = pNnqVr2u - 1;
                k++;
            }
            uKVquZ++;
        };
    }
    if (a[IrGJuW -1][0] >= a[IrGJuW -1][1] && a[IrGJuW -1][0] >= a[IrGJuW -2][0]) {
        t3UVijY[k][0] = IrGJuW -1;
        t3UVijY[k][1] = 0;
        k++;
    }
    {
        j = 1;
        while (j <= pNnqVr2u - 2) {
            if (a[IrGJuW -1][j] >= a[IrGJuW -1][j + 1] && a[IrGJuW -1][j] >= a[IrGJuW -2][j] && a[IrGJuW -1][j] >= a[IrGJuW -1][j - 1]) {
                t3UVijY[k][0] = IrGJuW -1;
                t3UVijY[k][1] = j;
                k++;
            }
            j++;
        };
    }
    if (a[IrGJuW -1][pNnqVr2u - 1] >= a[IrGJuW -1][pNnqVr2u - 2] && a[IrGJuW -1][pNnqVr2u - 1] >= a[IrGJuW -2][pNnqVr2u - 1]) {
        t3UVijY[k][0] = IrGJuW -1;
        t3UVijY[k][1] = pNnqVr2u - 1;
        k++;
    }
    {
        uKVquZ = 0;
        while (uKVquZ <= k - 1) {
            printf ("%d %d\n", t3UVijY[uKVquZ][0], t3UVijY[uKVquZ][1]);
            uKVquZ++;
        };
    };
}

