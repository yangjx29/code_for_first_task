int *num (int a) {
    int *n6c9ksljKSB;
    int i;
    n6c9ksljKSB = (int *) malloc (a * sizeof (int));
    for (i = 0; a > i; i++) {
        scanf ("%d", &n6c9ksljKSB[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return n6c9ksljKSB;
}

void  rank (int *n6c9ksljKSB, int a) {
    int i;
    int j;
    int t;
    for (i = a - 1; 0 < i; i--) {
        for (j = 0; i > j; j++) {
            if (*(n6c9ksljKSB + j + 1) < *(n6c9ksljKSB + j)) {
                t = *(n6c9ksljKSB + j);
                *(n6c9ksljKSB + j) = *(n6c9ksljKSB + j + 1);
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
                *(n6c9ksljKSB + j + 1) = t;
            };
        };
    };
}

int *cbFToLaKXvhc (int *p1, int *p2, int a, int c4t1xIUP) {
    int *p3 = (int *) malloc ((a + c4t1xIUP) * sizeof (int));
    int i;
    for (i = 0; i < a; i++)
        *(p3 + i) = *(p1 + i);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 0; i < c4t1xIUP; i++)
        *(p3 + a + i) = *(p2 + i);
    return p3;
}

void  print (int *p3, int x) {
    int i;
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
    for (i = 0; i < x; i++) {
        if (i == 0)
            printf ("%d", p3[0]);
        else
            printf (" %d", p3[i]);
    };
}

main () {
    int a;
    int c4t1xIUP;
    int *p1;
    int *p2;
    int *p3;
    free (p1);
    free (p2);
    free (p3);
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
    scanf ("%d", &a);
    p1 = num (a);
    rank (p1, a);
    scanf ("%d", &c4t1xIUP);
    p2 = num (c4t1xIUP);
    rank (p2, c4t1xIUP);
    p3 = cbFToLaKXvhc (p1, p2, a, c4t1xIUP);
    print (p3, (a + c4t1xIUP));
}

