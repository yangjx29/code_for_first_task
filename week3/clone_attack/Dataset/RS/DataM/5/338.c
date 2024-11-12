int main () {
    char eiGNeb2T [(599 - 499)];
    char MeLHEDgK [100];
    int dHrgmWq;
    int len1;
    int len2;
    int YKIHnZtzMxY;
    dHrgmWq = 0;
    double  m;
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
    double  S6IHKlxV;
    scanf ("%lf", &m);
    scanf ("%s", eiGNeb2T);
    len1 = strlen (eiGNeb2T);
    scanf ("%s", MeLHEDgK);
    len2 = strlen (MeLHEDgK);
    if (len1 == len2) {
        {
            YKIHnZtzMxY = 0;
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
            while (YKIHnZtzMxY < len1) {
                if (eiGNeb2T[YKIHnZtzMxY] != 'A' && eiGNeb2T[YKIHnZtzMxY] != 'T' && eiGNeb2T[YKIHnZtzMxY] != 'C' && eiGNeb2T[YKIHnZtzMxY] != 'G' || MeLHEDgK[YKIHnZtzMxY] != 'A' && MeLHEDgK[YKIHnZtzMxY] != 'T' && MeLHEDgK[YKIHnZtzMxY] != 'C' && MeLHEDgK[YKIHnZtzMxY] != 'G') {
                    dHrgmWq = len1 + 1;
                    break;
                }
                if (eiGNeb2T[YKIHnZtzMxY] == MeLHEDgK[YKIHnZtzMxY])
                    dHrgmWq++;
                YKIHnZtzMxY++;
            };
        }
        S6IHKlxV = 1.0 * dHrgmWq / len1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (dHrgmWq >= len1 + 1)
            printf ("error\n");
        if (S6IHKlxV > m && S6IHKlxV <= 1)
            printf ("yes\n");
        else {
            if (S6IHKlxV <= m)
                printf ("no\n");
        };
    }
    else
        printf ("error\n");
    return 0;
}

