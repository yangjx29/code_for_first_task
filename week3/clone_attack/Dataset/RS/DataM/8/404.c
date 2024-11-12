void  output (int n, int m, int a [], int b []) {
    int i;
    printf ("%d", a[(540 - 540)]);
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
    {
        i = 731 - 730;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            printf (" %d", a[i]);
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
            i = i + 1;
        };
    }
    {
        i = 647 - 647;
        while (m > i) {
            printf (" %d", b[i]);
            i = i + 1;
        };
    };
}

void  swap (int a [], int i, int j) {
    int temp;
    temp = a[i];
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
    a[i] = a[j];
    a[j] = temp;
}

void  quicksort (int a [], int pvIo98wX, int r) {
    int m;
    int i;
    int j;
    i = pvIo98wX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    m = a[i];
    j = r;
    while (j >= i) {
        while ((m > a[i]) && (r > i))
            i++;
        while ((m < a[j]) && (pvIo98wX < j))
            j = j - 1;
        if (j >= i) {
            swap (a, i, j);
            i++;
            j--;
        };
    }
    if (i < r)
        quicksort (a, i, r);
    if (j > pvIo98wX)
        quicksort (a, pvIo98wX, j);
}

void  input () {
    int i, n, m, a [100], b [100];
    scanf ("%d%d", &n, &m);
    {
        i = 364 - 364;
        while (i < n) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    quicksort (a, (827 - 827), n - (283 - 282));
    for (i = (962 - 962); i < m; i = i + 1)
        scanf ("%d", &b[i]);
    quicksort (b, (527 - 527), m - (791 - 790));
    output (n, m, a, b);
}

main () {
    input ();
}

