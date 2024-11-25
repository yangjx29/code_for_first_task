main () {
    char ZfK4VG3h [101];
    int i, j, len, begin, end;
    gets (ZfK4VG3h);
    len = strlen (ZfK4VG3h);
    end = len - 1;
    {
        i = end;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            if (ZfK4VG3h[i] == ' ' && i != 0) {
                begin = i + 1;
                break;
            }
            i = i - 1;
            begin = 0;
        };
    }
    for (j = begin; j <= end; ++j)
        printf ("%c", ZfK4VG3h[j]);
    while (begin != 0) {
        end = begin - 2;
        for (i = end; i >= 0; --i) {
            if (ZfK4VG3h[i] == ' ' && i != 0) {
                begin = i + 1;
                break;
            }
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
            begin = 0;
        }
        for (j = begin; j <= end; ++j)
            printf ("%c", ZfK4VG3h[j]);
    };
}

