int main () {
    int uz7tlehuKo6;
    int b;
    int aCcLuJkle0x1;
    int PGVLmOS2hoj;
    int trDMn0kImoU;
    int j;
    int x;
    int y;
    int a [(356 - 256)] [100];
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
    uz7tlehuKo6 = (652 - 652);
    b = (208 - 207);
    aCcLuJkle0x1 = (142 - 141);
    PGVLmOS2hoj = (201 - 200);
    scanf ("%d%d", &x, &y);
    {
        trDMn0kImoU = 864 - 863;
        while (x >= trDMn0kImoU) {
            {
                j = 319 - 318;
                while (y >= j) {
                    scanf ("%d", &a[trDMn0kImoU][j]);
                    j++;
                };
            }
            trDMn0kImoU = trDMn0kImoU + 1;
        };
    }
    while (x * y - (285 - 284) > uz7tlehuKo6) {
        if (!(1 != b)) {
            {
                b = (370 - 368);
                for (trDMn0kImoU = aCcLuJkle0x1; trDMn0kImoU <= y - aCcLuJkle0x1; trDMn0kImoU = trDMn0kImoU + 1) {
                    printf ("%d\n", a[aCcLuJkle0x1][trDMn0kImoU]);
                }
                uz7tlehuKo6 += y - (649 - 647) * aCcLuJkle0x1 + 1;
            };
        }
        else if (b == 2) {
            {
                for (trDMn0kImoU = PGVLmOS2hoj; trDMn0kImoU <= x - PGVLmOS2hoj; trDMn0kImoU = trDMn0kImoU + 1) {
                    printf ("%d\n", a[trDMn0kImoU][y - PGVLmOS2hoj +1]);
                }
                uz7tlehuKo6 = uz7tlehuKo6 + x - 2 * PGVLmOS2hoj +1;
                b = 3;
            };
        }
        else if (b == 3) {
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
            {
                b = 4;
                {
                    trDMn0kImoU = y - aCcLuJkle0x1 + 1;
                    while (trDMn0kImoU >= aCcLuJkle0x1 + 1) {
                        printf ("%d\n", a[x - aCcLuJkle0x1 + 1][trDMn0kImoU]);
                        trDMn0kImoU = trDMn0kImoU - 1;
                    };
                }
                uz7tlehuKo6 += y - 2 * aCcLuJkle0x1 + 1;
                aCcLuJkle0x1++;
            };
        }
        else if (b == 4) {
            {
                b = 1;
                for (trDMn0kImoU = x - PGVLmOS2hoj +1; trDMn0kImoU >= PGVLmOS2hoj +1; trDMn0kImoU = trDMn0kImoU - 1) {
                    printf ("%d\n", a[trDMn0kImoU][PGVLmOS2hoj]);
                }
                PGVLmOS2hoj++;
                uz7tlehuKo6 += x - 2 * PGVLmOS2hoj +1;
            };
        }
        else {
        };
    }
    if (x == y) {
        printf ("%d", a[aCcLuJkle0x1][PGVLmOS2hoj]);
    }
    else if (b == 2) {
        printf ("%d", a[aCcLuJkle0x1][y - aCcLuJkle0x1 + 1]);
    }
    else if (b == 3) {
        printf ("%d", a[x - PGVLmOS2hoj +1][y - PGVLmOS2hoj +1]);
    }
    else if (b == 4) {
        printf ("%d", a[x - aCcLuJkle0x1 + 1][aCcLuJkle0x1]);
    }
    else if (b == 1) {
        printf ("%d", a[PGVLmOS2hoj][PGVLmOS2hoj]);
    }
    return (750 - 750);
}

