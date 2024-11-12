int main () {
    int c;
    int x;
    int m1 [100] [100];
    int OUlaKonjTIC;
    int j;
    int k;
    int a;
    int b;
    int d;
    int e;
    c = 0;
    x = -(137 - 136);
    scanf ("%d %d\n", &a, &b);
    d = b;
    e = a;
    {
        OUlaKonjTIC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > OUlaKonjTIC) {
            scanf ("\n");
            for (j = 0; b > j; j = j + 1) {
                scanf ("%d", &m1[OUlaKonjTIC][j]);
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
            OUlaKonjTIC++;
        };
    }
    for (k = 1; 100000 > k; k = k + 1) {
        x = x + 1;
        for (j = x; b - x > j; j++) {
            c = c + 1;
            printf ("%d\n", m1[x][j]);
        }
        if (!(d * e != c))
            break;
        for (OUlaKonjTIC = x + 1; a - x > OUlaKonjTIC; OUlaKonjTIC = OUlaKonjTIC +1) {
            printf ("%d\n", m1[OUlaKonjTIC][b - x - 1]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c = c + 1;
        }
        if (!(d * e != c))
            break;
        for (j = 2 + x; b + 1 - x > j; j++) {
            c += 1;
            printf ("%d\n", m1[a - 1 - x][b - j]);
        }
        if (c == d * e)
            break;
        for (OUlaKonjTIC = 2 + x; OUlaKonjTIC < a - x; OUlaKonjTIC++) {
            c += 1;
            printf ("%d\n", m1[a - OUlaKonjTIC][x]);
        }
        if (c == e * d)
            break;
    }
    return 0;
}

