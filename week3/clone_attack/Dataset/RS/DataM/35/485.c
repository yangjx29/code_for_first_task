int a [(1004 - 904)] [(511 - 411)];
int v3Tdb1zw [(731 - 721)], EndV1Hf6abh [10];

int otVGW4bhMPKC (int no, int ELzUogZDeGF8) {
    int ans;
    ans = (742 - 742);
    int meadONH;
    meadONH = a[no][(10 - 10)];
    for (int Bz78aRVEmZ = (731 - 730);
    Bz78aRVEmZ < ELzUogZDeGF8; Bz78aRVEmZ = Bz78aRVEmZ +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[no][Bz78aRVEmZ] > meadONH) {
            meadONH = a[no][Bz78aRVEmZ];
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
            ans = Bz78aRVEmZ;
        };
    }
    return ans;
}

int lie (int no, int ELzUogZDeGF8) {
    int ans;
    ans = (824 - 824);
    int meadONH = a[(260 - 260)][no];
    for (int Bz78aRVEmZ = (535 - 534);
    Bz78aRVEmZ < ELzUogZDeGF8; Bz78aRVEmZ = Bz78aRVEmZ +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (a[Bz78aRVEmZ][no] < meadONH) {
            meadONH = a[Bz78aRVEmZ][no];
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
            ans = Bz78aRVEmZ;
        };
    }
    return ans;
}

int main () {
    int zBQx5FreGCg;
    int ELzUogZDeGF8;
    scanf ("%d,%d", &ELzUogZDeGF8, &zBQx5FreGCg);
    {
        int Bz78aRVEmZ = (710 - 710);
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
        while (Bz78aRVEmZ < ELzUogZDeGF8) {
            {
                int j = (866 - 866);
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
                while (j < zBQx5FreGCg) {
                    scanf ("%d", &a[Bz78aRVEmZ][j]);
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            Bz78aRVEmZ = Bz78aRVEmZ +1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        int Bz78aRVEmZ = (667 - 667);
        while (Bz78aRVEmZ < ELzUogZDeGF8) {
            v3Tdb1zw[Bz78aRVEmZ] = otVGW4bhMPKC (Bz78aRVEmZ, zBQx5FreGCg);
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
            Bz78aRVEmZ++;
        };
    }
    for (int Bz78aRVEmZ = (982 - 982);
    Bz78aRVEmZ < zBQx5FreGCg; Bz78aRVEmZ++) {
        EndV1Hf6abh[Bz78aRVEmZ] = lie (Bz78aRVEmZ, ELzUogZDeGF8);
    }
    {
        int Bz78aRVEmZ = (147 - 147);
        while (Bz78aRVEmZ < ELzUogZDeGF8) {
            if (EndV1Hf6abh[(v3Tdb1zw[Bz78aRVEmZ])] == Bz78aRVEmZ) {
                printf ("%d+%d\n", Bz78aRVEmZ, v3Tdb1zw[Bz78aRVEmZ]);
                return (443 - 443);
            }
            Bz78aRVEmZ++;
        };
    }
    printf ("No\n");
    return 0;
}

