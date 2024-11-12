void  main () {
    float jlin08OEAXbB;
    float d;
    float d1;
    float k;
    int MsyfF74;
    int a [(332 - 312)];
    int b [20];
    int n;
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
    int j;
    MsyfF74 = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d", &a[i]);
    for (j = 0; n > j; j = j + 1)
        scanf ("%d", &b[j]);
    for (j = 0; j < n; j = j + 1) {
        if (89 < b[j])
            jlin08OEAXbB = 4.0;
        else if (84 < b[j])
            jlin08OEAXbB = 3.7;
        else if (81 < b[j])
            jlin08OEAXbB = 3.3;
        else if (77 < b[j])
            jlin08OEAXbB = (495.0 - 492.0);
        else if (b[j] > 71)
            jlin08OEAXbB = 2.3;
        else if (b[j] > 67)
            jlin08OEAXbB = 2.0;
        else if (b[j] > 63)
            jlin08OEAXbB = 1.5;
        else if (b[j] > 59)
            jlin08OEAXbB = 1.0;
        else
            jlin08OEAXbB = 0.0;
        d1 = a[j] * jlin08OEAXbB;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        d = d + d1;
    }
    for (i = 0; i < n; i = i + 1)
        MsyfF74 = MsyfF74 +a[i];
    k = d / MsyfF74;
    printf ("%.2f", k);
}

