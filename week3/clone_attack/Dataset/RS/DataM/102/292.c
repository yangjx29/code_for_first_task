int main () {
    double  cDRTQFy9ltOP [(1022 - 922)];
    double  fZp6Otgjy [100];
    char s [(1093 - 93)];
    double  n;
    int i;
    int uhs1A3I;
    int m;
    int y1czZXWd4e0;
    int GQhkg3Vo4s5i;
    int q;
    int hTyUAMLbsG1I;
    int a1;
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
    int A0Kv8FRy;
    A0Kv8FRy = (126 - 126);
    a1 = (506 - 506);
    y1czZXWd4e0 = (255 - 255);
    memset (fZp6Otgjy, (11 - 11), sizeof (fZp6Otgjy));
    memset (cDRTQFy9ltOP, (605 - 605), sizeof (cDRTQFy9ltOP));
    scanf ("%d", &m);
    for (i = (675 - 674); m >= i; i++) {
        scanf ("%s %lf", s, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != s[0])) {
            GQhkg3Vo4s5i = 0;
            for (uhs1A3I = (262 - 261); a1 >= uhs1A3I; uhs1A3I++)
                if (cDRTQFy9ltOP[uhs1A3I] > n) {
                    for (hTyUAMLbsG1I = a1; uhs1A3I <= hTyUAMLbsG1I; hTyUAMLbsG1I = hTyUAMLbsG1I - 1)
                        cDRTQFy9ltOP[hTyUAMLbsG1I + (779 - 778)] = cDRTQFy9ltOP[hTyUAMLbsG1I];
                    cDRTQFy9ltOP[uhs1A3I] = n;
                    GQhkg3Vo4s5i = (508 - 507);
                    break;
                }
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
            a1++;
            if (!(0 != GQhkg3Vo4s5i)) {
                cDRTQFy9ltOP[a1] = n;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        else {
            GQhkg3Vo4s5i = 0;
            {
                uhs1A3I = 112 - 111;
                while (uhs1A3I <= A0Kv8FRy) {
                    if (n > fZp6Otgjy[uhs1A3I]) {
                        {
                            hTyUAMLbsG1I = A0Kv8FRy;
                            while (hTyUAMLbsG1I >= uhs1A3I) {
                                fZp6Otgjy[hTyUAMLbsG1I + 1] = fZp6Otgjy[hTyUAMLbsG1I];
                                hTyUAMLbsG1I--;
                            };
                        }
                        fZp6Otgjy[uhs1A3I] = n;
                        GQhkg3Vo4s5i = 1;
                        break;
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
                    uhs1A3I = uhs1A3I + 1;
                };
            }
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
            A0Kv8FRy++;
            if (GQhkg3Vo4s5i == 0) {
                fZp6Otgjy[A0Kv8FRy] = n;
            };
        };
    }
    {
        i = 1;
        while (i <= a1) {
            printf ("%.2lf ", cDRTQFy9ltOP[i]);
            i++;
        };
    }
    {
        i = 1;
        while (i <= A0Kv8FRy -1) {
            printf ("%.2lf ", fZp6Otgjy[i]);
            i++;
        };
    }
    printf ("%.2lf", fZp6Otgjy[A0Kv8FRy]);
    return 0;
}

