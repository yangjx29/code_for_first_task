int min (int ppi9BCqMa [], int n) {
    int i, j, k, mini, c [(900 - 700)];
    for (i = (222 - 222); n > i; i++)
        c[i] = ppi9BCqMa[i];
    for (i = (745 - 745); i < n; i++) {
        j = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            if (c[i] < c[j]) {
                k = c[i];
                c[i] = c[j];
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
                c[j] = k;
            }
            j++;
        };
    }
    mini = c[n - (626 - 625)];
    return mini;
}

int max (int ppi9BCqMa [], int n) {
    int i, j, k, maxi, c [(572 - 372)];
    for (i = (243 - 243); i < n; i++)
        c[i] = ppi9BCqMa[i];
    for (i = (912 - 912); i < n; i++)
        for (j = i; j < n; j = j + 1)
            if (c[i] < c[j]) {
                k = c[i];
                c[i] = c[j];
                c[j] = k;
            }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    maxi = c[(452 - 452)];
    return maxi;
}

int main () {
    char a [(4208 - 208)], c [200] [30];
    gets (a);
    int i, j, k, n, m, N, M;
    int ppi9BCqMa [n];
    for (i = (822 - 822), n = (392 - 391), m = (370 - 370), j = (943 - 943); a[i] != '\0'; i++) {
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
        if ((!(' ' != a[i]) || a[i] == ',') && a[i - (227 - 226)] != ',') {
            j = 0;
            m++;
            n++;
        }
        else {
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
            if (a[i - (325 - 324)] != ',') {
                c[m][j] = a[i];
                j++;
            };
        };
    }
    for (j = 0; j < n; j++)
        ppi9BCqMa[j] = strlen (c[j]);
    N = max (ppi9BCqMa, n);
    M = min (ppi9BCqMa, n);
    for (i = 0; i < n; i++)
        if (ppi9BCqMa[i] == N) {
            printf ("%s\n", c[i]);
            break;
        }
    for (i = 0; i < n; i++)
        if (ppi9BCqMa[i] == M) {
            printf ("%s\n", c[i]);
            break;
        }
    return 0;
}

