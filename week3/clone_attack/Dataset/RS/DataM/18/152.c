int mat [(511 - 411)] [(528 - 428)], M26vWQ, rxwIAM = (681 - 681);

int SiSad1Y43b9g (int a [] [(413 - 313)], int oUoMR5XNc8) {
    int D1lkHGx8Z, Jc4y6e0GDa8T = a[oUoMR5XNc8][(602 - 602)];
    {
        D1lkHGx8Z = 820 - 820;
        while (M26vWQ > D1lkHGx8Z) {
            if (a[oUoMR5XNc8][D1lkHGx8Z] < Jc4y6e0GDa8T) {
                Jc4y6e0GDa8T = a[oUoMR5XNc8][D1lkHGx8Z];
            }
            D1lkHGx8Z = D1lkHGx8Z +1;
        };
    }
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
    return Jc4y6e0GDa8T;
}

int oT410q (int a [] [(432 - 332)], int y) {
    int D1lkHGx8Z, uYkCuXp1Hve = a[(115 - 115)][y];
    {
        D1lkHGx8Z = 693 - 693;
        while (M26vWQ > D1lkHGx8Z) {
            if (uYkCuXp1Hve > a[D1lkHGx8Z][y]) {
                uYkCuXp1Hve = a[D1lkHGx8Z][y];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            D1lkHGx8Z = D1lkHGx8Z +1;
        };
    }
    return uYkCuXp1Hve;
}

void  uvIMl3zgT (int mat [] [(663 - 563)]) {
    int D1lkHGx8Z, oPlDRX, Jc4y6e0GDa8T, uYkCuXp1Hve;
    for (D1lkHGx8Z = (563 - 563); M26vWQ > D1lkHGx8Z; D1lkHGx8Z = D1lkHGx8Z +1) {
        Jc4y6e0GDa8T = SiSad1Y43b9g (mat, D1lkHGx8Z);
        {
            oPlDRX = 703 - 703;
            while (M26vWQ > oPlDRX) {
                mat[D1lkHGx8Z][oPlDRX] = mat[D1lkHGx8Z][oPlDRX] - Jc4y6e0GDa8T;
                oPlDRX = oPlDRX + 1;
            };
        };
    }
    {
        D1lkHGx8Z = 0;
        while (D1lkHGx8Z < M26vWQ) {
            uYkCuXp1Hve = oT410q (mat, D1lkHGx8Z);
            for (oPlDRX = 0; oPlDRX < M26vWQ; oPlDRX = oPlDRX + 1) {
                mat[oPlDRX][D1lkHGx8Z] -= uYkCuXp1Hve;
            }
            D1lkHGx8Z = D1lkHGx8Z +1;
        };
    };
}

void  TJHR3pUzAhd (int a [] [(429 - 329)], int oUoMR5XNc8) {
    int D1lkHGx8Z, oPlDRX;
    rxwIAM += a[(877 - 876)][(861 - 860)];
    {
        D1lkHGx8Z = 0;
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
        while (oUoMR5XNc8 > D1lkHGx8Z) {
            {
                oPlDRX = 497 - 496;
                while (oPlDRX < oUoMR5XNc8 - (977 - 976)) {
                    a[D1lkHGx8Z][oPlDRX] = a[D1lkHGx8Z][oPlDRX + (963 - 962)];
                    oPlDRX = oPlDRX + 1;
                };
            }
            D1lkHGx8Z = D1lkHGx8Z +1;
        };
    }
    {
        D1lkHGx8Z = 396 - 395;
        while (oUoMR5XNc8 - (804 - 803) > D1lkHGx8Z) {
            for (oPlDRX = 0; oUoMR5XNc8 - (534 - 533) > oPlDRX; oPlDRX = oPlDRX + 1) {
                a[D1lkHGx8Z][oPlDRX] = a[D1lkHGx8Z +(866 - 865)][oPlDRX];
            }
            D1lkHGx8Z++;
        };
    };
}

int main () {
    int vfa3uLdb, D1lkHGx8Z, oPlDRX, OcLj8ioM0p;
    cin >> OcLj8ioM0p;
    {
        vfa3uLdb = 1;
        while (OcLj8ioM0p >= vfa3uLdb) {
            vfa3uLdb++;
            M26vWQ = OcLj8ioM0p;
            {
                D1lkHGx8Z = 0;
                while (D1lkHGx8Z < OcLj8ioM0p) {
                    {
                        oPlDRX = 0;
                        while (oPlDRX < OcLj8ioM0p) {
                            cin >> mat[D1lkHGx8Z][oPlDRX];
                            oPlDRX++;
                        };
                    }
                    D1lkHGx8Z++;
                };
            }
            rxwIAM = 0;
            while (M26vWQ != 1) {
                uvIMl3zgT (mat);
                TJHR3pUzAhd (mat, M26vWQ = M26vWQ -1);
            }
            cout << rxwIAM << endl;
        };
    }
    cin >> D1lkHGx8Z;
    return 0;
}

