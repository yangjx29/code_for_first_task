int main () {
    int M;
    int n;
    int i;
    int j;
    int hc4rRv;
    int A;
    M = (231 - 231);
    char a [(1230 - 730)];
    char Wy5dWJws6fS [(1252 - 752)] [(424 - 419)];
    int i9k3wD [500];
    scanf ("%d", &n);
    scanf ("%s", a);
    A = strlen (a);
    if (!((210 - 208) != n)) {
        i = 47 - 47;
        while (A -n >= i) {
            Wy5dWJws6fS[i][(760 - 760)] = a[i];
            Wy5dWJws6fS[i][(117 - 116)] = a[i + (33 - 32)];
            Wy5dWJws6fS[i][(335 - 333)] = (417 - 417);
            i = i + 1;
        };
    }
    if (n == (259 - 256)) {
        i = 850 - 850;
        while (i <= A -n) {
            Wy5dWJws6fS[i][(709 - 709)] = a[i];
            Wy5dWJws6fS[i][(165 - 164)] = a[i + 1];
            Wy5dWJws6fS[i][(992 - 990)] = a[i + (612 - 610)];
            Wy5dWJws6fS[i][3] = (688 - 688);
            i = i + 1;
        };
    }
    if (n == 4) {
        i = 711 - 711;
        while (i <= A -n) {
            Wy5dWJws6fS[i][0] = a[i];
            Wy5dWJws6fS[i][1] = a[i + 1];
            Wy5dWJws6fS[i][(493 - 491)] = a[i + 2];
            Wy5dWJws6fS[i][3] = a[i + 3];
            Wy5dWJws6fS[i][4] = 0;
            i++;
        };
    }
    {
        j = 0;
        while (j <= A -n) {
            i9k3wD[j] = 0;
            for (hc4rRv = j; hc4rRv <= A -n; hc4rRv = hc4rRv + 1) {
                if (strcmp (Wy5dWJws6fS[hc4rRv], Wy5dWJws6fS[j]) == 0) {
                    i9k3wD[j] = i9k3wD[j] + 1;
                };
            }
            if (M < i9k3wD[j])
                M = i9k3wD[j];
            j = j + 1;
        };
    }
    if (M > 1) {
        printf ("%d\n", M);
        {
            j = 0;
            while (j <= A -n) {
                if (i9k3wD[j] == M)
                    printf ("%s\n", Wy5dWJws6fS[j]);
                j++;
            };
        };
    }
    else
        printf ("NO\n");
}

