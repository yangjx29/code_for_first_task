int main () {
    char a [(430 - 330)] [(1010 - 909)], b [(1024 - 924)] [101], j [100] [101], A [100] [101], B [100] [101];
    int ac;
    int bc;
    int YX6v8qS;
    int k;
    int X5COlQGo3;
    int j1;
    int j2;
    int sw;
    int p;
    int NJo45rb;
    int i2;
    scanf ("%d", &NJo45rb);
    for (YX6v8qS = 0; NJo45rb > YX6v8qS; YX6v8qS++) {
        sw = 0;
        scanf ("%s%s", a[YX6v8qS], b[YX6v8qS]);
        ac = strlen (a[YX6v8qS]);
        bc = strlen (b[YX6v8qS]);
        if (ac > bc) {
            X5COlQGo3 = ac;
            for (i2 = 0; ac - bc > i2; i2 = i2 + 1)
                B[YX6v8qS][i2] = '0';
            B[YX6v8qS][i2] = '\0';
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
            strcat (B[YX6v8qS], b[YX6v8qS]);
            strcpy (A[YX6v8qS], a[YX6v8qS]);
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
        if (ac < bc) {
            X5COlQGo3 = bc;
            for (i2 = 0; i2 < bc - ac; i2++)
                A[YX6v8qS][i2] = '0';
            A[YX6v8qS][i2] = '\0';
            strcat (A[YX6v8qS], a[YX6v8qS]);
            strcpy (B[YX6v8qS], b[YX6v8qS]);
        }
        if (ac == bc) {
            X5COlQGo3 = ac;
            strcpy (A[YX6v8qS], a[YX6v8qS]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            strcpy (B[YX6v8qS], b[YX6v8qS]);
        }
        for (i2 = X5COlQGo3 -1, k = 0; i2 >= 0; i2--, k++) {
            j1 = A[YX6v8qS][i2] - '0';
            j2 = B[YX6v8qS][i2] - '0';
            if (0 <= j1 - sw - j2) {
                j[YX6v8qS][k] = j1 - sw - j2 + '0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                sw = 0;
            }
            else {
                j[YX6v8qS][k] = 10 + j1 - sw - j2 + '0';
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
                sw = 1;
            };
        }
        j[YX6v8qS][k] = '\0';
        if (YX6v8qS != NJo45rb -1)
            printf ("\n");
    }
    {
        p = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i2 = 0;
        while (i2 < NJo45rb) {
            X5COlQGo3 = strlen (j[i2]);
            {
                YX6v8qS = X5COlQGo3 -1;
                while (j[i2][YX6v8qS] == '0') {
                    YX6v8qS--;
                    p = p + 1;
                };
            }
            for (YX6v8qS = X5COlQGo3 -p - 1; YX6v8qS >= 0; YX6v8qS = YX6v8qS -1) {
                printf ("%c", j[i2][YX6v8qS]);
            }
            if (i2 != NJo45rb -1)
                printf ("\n");
            i2++;
        };
    }
    return 0;
}

