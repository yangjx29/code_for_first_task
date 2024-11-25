int a [(10672 - 672)], b [10000], m, n;

int main () {
    void  FAC8EBWVehQq (), Ord (), Gath (), Prin ();
    FAC8EBWVehQq ();
    Ord ();
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
    Gath ();
    Prin ();
}

void  FAC8EBWVehQq () {
    int i;
    scanf ("%d%d", &m, &n);
    for (i = 1; m >= i; i++)
        scanf ("%d", &a[i]);
    for (i = 1; n >= i; i++)
        scanf ("%d", &b[i]);
}

void  Ord () {
    int i, j;
    void  zSPias (int i, int j), gzfpPgU (int i, int j);
    for (i = 1; m - 1 >= i; i++)
        for (j = i + 1; m >= j; j++)
            if (a[j] < a[i])
                zSPias (i, j);
    for (i = 1; i <= n - 1; i++) {
        j = i + 1;
        while (j <= n) {
            if (b[i] > b[j])
                gzfpPgU (i, j);
            j = j + 1;
        };
    };
}

void  Gath () {
    int i;
    {
        i = m + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= m + n) {
            a[i] = b[i - m];
            i++;
        };
    };
}

void  Prin () {
    int i;
    printf ("%d", a[1]);
    for (i = 2; i <= m + n; i++)
        printf (" %d", a[i]);
}

void  zSPias (int i, int j) {
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void  gzfpPgU (int i, int j) {
    int temp;
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
}

