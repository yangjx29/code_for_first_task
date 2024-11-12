void  main () {
    char a [100];
    int result [9999];
    int eAEqCwif;
    int temp1;
    int temp2;
    int JTaSkhPeG;
    int n;
    int i;
    int j;
    int k;
    int p;
    eAEqCwif = (687 - 687);
    temp1 = 0;
    temp2 = 0;
    scanf ("%d%d", &JTaSkhPeG, &n);
    {
        i = JTaSkhPeG;
        while (i <= n) {
            if (i != 2) {
                j = 2;
                while (j < i) {
                    if (i % j == 0) {
                        temp1 = (783 - 782);
                        break;
                    }
                    j = j + 1;
                };
            }
            if (temp1 == 0) {
                p = i;
                {
                    j = 0;
                    while (p >= 10) {
                        a[j] = p % 10;
                        j = j + 1;
                        p = p / 10;
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
                a[j] = p;
                {
                    k = 0;
                    while (k <= j) {
                        if (a[k] != a[j - k]) {
                            temp2 = 1;
                            break;
                        }
                        k++;
                    };
                }
                if (temp2 == 0) {
                    result[eAEqCwif] = i;
                    eAEqCwif = eAEqCwif + 1;
                };
            }
            i = i + 1;
            temp1 = 0;
            temp2 = 0;
        };
    }
    if (eAEqCwif == 0)
        printf ("no");
    else {
        {
            i = 0;
            while (i < eAEqCwif - 1) {
                printf ("%d,", result[i]);
                i = i + 1;
            };
        }
        printf ("%d", result[eAEqCwif - 1]);
    };
}

