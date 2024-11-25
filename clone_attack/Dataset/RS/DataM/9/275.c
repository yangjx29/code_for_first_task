void  main () {
    int l1;
    int liEcKln3w;
    int n;
    int age [(758 - 658)];
    int age1 [100];
    int t1;
    int i;
    int j;
    l1 = (771 - 771);
    liEcKln3w = (10 - 10);
    char yV8XCvh [100] [10];
    char t2 [10] = {" "};
    char cgx0Fv [100] [10] = {" "};
    char b [100] [10] = {" "};
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s%d", &yV8XCvh[i], &age[i]);
            if (age[i] >= 60) {
                strcpy (cgx0Fv[l1], yV8XCvh[i]);
                age1[l1] = age[i];
                l1 += (710 - 709);
            }
            else {
                strcpy (b[liEcKln3w], yV8XCvh[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                liEcKln3w += (768 - 767);
            }
            i = i + 1;
        };
    }
    {
        i = 1;
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
        while (l1 > i) {
            for (j = 0; j < l1 - i; j++) {
                if (age1[j] < age1[j + 1]) {
                    t1 = age1[j];
                    age1[j] = age1[j + 1];
                    age1[j + 1] = t1;
                    strcpy (t2, cgx0Fv[j]);
                    strcpy (cgx0Fv[j], cgx0Fv[j + 1]);
                    strcpy (cgx0Fv[j + 1], t2);
                };
            }
            i++;
        };
    }
    for (i = 0; i < l1; i++)
        printf ("%s\n", cgx0Fv[i]);
    {
        j = 0;
        while (j < liEcKln3w) {
            printf ("%s\n", b[j]);
            j++;
        };
    };
}

