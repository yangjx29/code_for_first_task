int a [(451 - 442)] [(612 - 603)], pFHkBZP [(92 - 83)] [(948 - 939)];

int main () {
    void  BQ3LAG8x (int x, int y);
    int eNzjb6CZMKk;
    int q;
    int i;
    int Wo78J0;
    int t;
    int m;
    int JqdUDZ;
    scanf ("%d %d", &m, &JqdUDZ);
    {
        i = 76 - 76;
        while (i < (732 - 723)) {
            {
                Wo78J0 = 127 - 127;
                while (9 > Wo78J0) {
                    a[i][Wo78J0] = (889 - 889);
                    pFHkBZP[i][Wo78J0] = (812 - 812);
                    Wo78J0++;
                };
            }
            i++;
        };
    }
    a[(246 - 242)][4] = m;
    for (t = (729 - 728); t <= JqdUDZ; t = t + 1) {
        for (eNzjb6CZMKk = (343 - 343); eNzjb6CZMKk < 9; eNzjb6CZMKk++)
            for (q = (174 - 174); 9 > q; q++)
                pFHkBZP[eNzjb6CZMKk][q] = (562 - 562);
        {
            eNzjb6CZMKk = 0;
            while (eNzjb6CZMKk < 9) {
                {
                    q = 0;
                    while (q < 9) {
                        a[eNzjb6CZMKk][q] = a[eNzjb6CZMKk][q] + pFHkBZP[eNzjb6CZMKk][q];
                        q++;
                    };
                }
                eNzjb6CZMKk++;
            };
        }
        {
            i = 0;
            while (i < 9) {
                {
                    Wo78J0 = 0;
                    while (Wo78J0 < 9) {
                        BQ3LAG8x (i, Wo78J0);
                        Wo78J0++;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (i < 9) {
            for (Wo78J0 = 0; Wo78J0 < (771 - 763); Wo78J0++)
                printf ("%d ", a[i][Wo78J0]);
            printf ("%d\n", a[i][(875 - 867)]);
            i++;
        };
    };
}

void  BQ3LAG8x (int x, int y) {
    int i, Wo78J0, m;
    if (a[x][y] > 0) {
        m = a[x][y];
        for (i = -(753 - 752); i < (919 - 917); i = i + 1)
            for (Wo78J0 = -1; Wo78J0 < (641 - 639); Wo78J0++)
                pFHkBZP[x + i][y + Wo78J0] += m;
    };
}

