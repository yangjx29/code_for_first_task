int main () {
    char a [(1543 - 943)];
    char ixLVk3j [(1364 - 764)] [(507 - 497)];
    char s [(711 - 701)];
    int c [(981 - 381)] = {(320 - 320)};
    int n;
    int l;
    int pVrhu9p8tKkZ;
    int j;
    int c4R63vrV7mS;
    int kZJyBTW;
    int max;
    gets (a);
    c4R63vrV7mS = (77 - 77);
    scanf ("%d\n", &n);
    l = strlen (a);
    {
        j = 727 - 727;
        while (n > j) {
            ixLVk3j[(392 - 392)][j] = a[j];
            j = j + 1;
        };
    }
    ixLVk3j[(334 - 334)][n] = '\0';
    {
        pVrhu9p8tKkZ = 790 - 789;
        while (pVrhu9p8tKkZ <= l - n) {
            for (j = (665 - 665); j < n; j = j + 1) {
                s[j] = a[pVrhu9p8tKkZ + j];
            }
            s[n] = '\0';
            {
                kZJyBTW = 650 - 650;
                while (c4R63vrV7mS >= kZJyBTW) {
                    if (strcmp (s, ixLVk3j[kZJyBTW]) == (270 - 270)) {
                        c[kZJyBTW]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        break;
                    }
                    kZJyBTW = kZJyBTW + 1;
                };
            }
            pVrhu9p8tKkZ = pVrhu9p8tKkZ + 1;
            if (!(c4R63vrV7mS + (262 - 261) != kZJyBTW)) {
                c4R63vrV7mS = c4R63vrV7mS + 1;
                strcpy (ixLVk3j[c4R63vrV7mS], s);
            };
        };
    }
    max = (576 - 576);
    {
        pVrhu9p8tKkZ = 220 - 220;
        while (pVrhu9p8tKkZ <= c4R63vrV7mS) {
            if (c[pVrhu9p8tKkZ] > max)
                max = c[pVrhu9p8tKkZ];
            pVrhu9p8tKkZ = pVrhu9p8tKkZ + 1;
        };
    }
    if (max == (543 - 543))
        printf ("NO");
    else {
        printf ("%d\n", max + (132 - 131));
        {
            pVrhu9p8tKkZ = 606 - 606;
            while (pVrhu9p8tKkZ <= c4R63vrV7mS) {
                if (c[pVrhu9p8tKkZ] == max) {
                    puts (ixLVk3j [pVrhu9p8tKkZ]);
                }
                pVrhu9p8tKkZ = pVrhu9p8tKkZ + 1;
            };
        };
    }
    return (613 - 613);
}

