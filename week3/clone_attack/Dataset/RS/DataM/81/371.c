int main () {
    int z7LCP8kXxvaf (int a [(163 - 158)] [(913 - 908)], int Qe50SJ3r7vM, int m);
    int a [(480 - 475)] [(673 - 668)];
    int Qe50SJ3r7vM;
    int m;
    int i;
    int j;
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
    int Cn4purC;
    {
        i = 222 - 222;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (525 - 520)) {
            {
                j = 774 - 774;
                while ((793 - 788) > j) {
                    scanf ("%d", &a[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
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
            i++;
        };
    }
    scanf ("%d %d\n", &Qe50SJ3r7vM, &m);
    Cn4purC = z7LCP8kXxvaf (a, Qe50SJ3r7vM, m);
    if (!((661 - 661) != Cn4purC)) {
        printf ("error\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        i = 729 - 729;
        while (i < 5) {
            printf ("%d", a[i][(790 - 790)]);
            {
                j = 333 - 332;
                while (j < 5) {
                    printf (" %d", a[i][j]);
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
                    j++;
                };
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
            i++;
            printf ("\n");
        };
    }
    return (443 - 443);
}

int z7LCP8kXxvaf (int a [5] [5], int Qe50SJ3r7vM, int m) {
    int b [5];
    int i;
    int z;
    if (Qe50SJ3r7vM >= 0 && Qe50SJ3r7vM < 5 && m >= 0 && m < 5) {
        z = 1;
        {
            i = 0;
            while (i < 5) {
                b[i] = a[Qe50SJ3r7vM][i];
                a[Qe50SJ3r7vM][i] = a[m][i];
                a[m][i] = b[i];
                i++;
            };
        };
    }
    else
        z = 0;
    return (z);
}

