void  main () {
    char ZOxkIz79 [(1402 - 291)];
    gets (ZOxkIz79);
    int w;
    int l;
    int n;
    int m;
    int dwICPE8Q2B;
    int b [(1010 - 899)];
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
    int p;
    w = 0;
    l = 0;
    p = strlen (ZOxkIz79);
    {
        j = 0;
        while (1) {
            w = 0;
            b[j] = 0;
            {
                dwICPE8Q2B = l;
                while (*(ZOxkIz79 +dwICPE8Q2B) != ' ' && *(ZOxkIz79 +dwICPE8Q2B) != '\0') {
                    dwICPE8Q2B = dwICPE8Q2B + 1;
                    b[j] = b[j] + 1;
                };
            }
            m = dwICPE8Q2B;
            {
                dwICPE8Q2B = m;
                while (*(ZOxkIz79 +dwICPE8Q2B) == ' ') {
                    dwICPE8Q2B++;
                    w = w + 1;
                };
            }
            if (dwICPE8Q2B == p)
                break;
            j = j + 1;
            l = m + w;
        };
    }
    n = j;
    {
        j = 0;
        while (j < n) {
            printf ("%d,", b[j]);
            j = j + 1;
        };
    }
    printf ("%d", b[n]);
}

