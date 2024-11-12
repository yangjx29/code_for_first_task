int main () {
    double  CdFPj8N [1000];
    int m, i, j, k, h, O16euIlfxr;
    int a [1000];
    int c [1000];
    double  b [1000];
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
    c[0] = 1;
    c[1] = 2;
    for (O16euIlfxr = 2; 1000 > O16euIlfxr; O16euIlfxr = O16euIlfxr +1) {
        c[O16euIlfxr] = c[O16euIlfxr -1] + c[O16euIlfxr -2];
    }
    scanf ("%d", &m);
    for (j = 0; j < m; j = j + 1) {
        CdFPj8N[j] = 0;
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
        };
    }
    for (i = 0; i < m; i = i + 1) {
        scanf ("%d", &a[i]);
        for (k = 0; k < a[i]; k = k + 1) {
            b[k] = 1.0 * c[k + 1] / c[k];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            CdFPj8N[i] = CdFPj8N[i] + b[k];
        };
    }
    for (h = 0; h < m; h = h + 1) {
        printf ("%.3lf\n", CdFPj8N[h]);
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
    return 0;
}

