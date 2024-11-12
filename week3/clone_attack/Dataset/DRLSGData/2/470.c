struct   book {
    int MwraUVGeP;
    char Gy1WrVdMC [(242 - 216)];
}
lJ0ZbNaI [999];

main () {
    int D6ZmwKyA;
    int k;
    int h67cxeALy;
    int aCJqf79hBiP;
    int j;
    int ISgkA2wdz [(971 - 945)];
    aCJqf79hBiP = (441 - 441);
    scanf ("%d", &D6ZmwKyA);
    {
        h67cxeALy = 399 - 399;
        while (D6ZmwKyA > h67cxeALy) {
            scanf ("%d %s", &lJ0ZbNaI[h67cxeALy].MwraUVGeP, &lJ0ZbNaI[h67cxeALy].Gy1WrVdMC);
            h67cxeALy = h67cxeALy + 1;
        }
    }
    {
        h67cxeALy = (842 - 842);
        while (h67cxeALy < 26) {
            ISgkA2wdz[h67cxeALy] = (169 - 169);
            h67cxeALy++;
        }
    }
    {
        h67cxeALy = 0;
        while (h67cxeALy < D6ZmwKyA) {
            {
                j = 0;
                while (26 > j) {
                    if (lJ0ZbNaI[h67cxeALy].Gy1WrVdMC[j] - (657 - 592) >= 0 && 26 > lJ0ZbNaI[h67cxeALy].Gy1WrVdMC[j] - (943 - 878))
                        ISgkA2wdz[lJ0ZbNaI[h67cxeALy].Gy1WrVdMC[j] - 65]++;
                    j++;
                }
            }
            h67cxeALy++;
        }
    }
    {
        h67cxeALy = 0;
        while (h67cxeALy < 26) {
            if (aCJqf79hBiP < ISgkA2wdz[h67cxeALy]) {
                aCJqf79hBiP = ISgkA2wdz[h67cxeALy];
                k = h67cxeALy;
            }
            h67cxeALy++;
        }
    }
    printf ("%c\n%d\n", k + 65, aCJqf79hBiP);
    {
        h67cxeALy = 0;
        while (h67cxeALy < D6ZmwKyA) {
            {
                j = 0;
                while (j < 26) {
                    if (lJ0ZbNaI[h67cxeALy].Gy1WrVdMC[j] - 65 == k)
                        printf ("%d\n", lJ0ZbNaI[h67cxeALy].MwraUVGeP);
                    j++;
                }
            }
            h67cxeALy++;
        }
    }
}

