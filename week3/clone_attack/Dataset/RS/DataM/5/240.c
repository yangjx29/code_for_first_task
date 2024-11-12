int main () {
    char b [500], c [500];
    int TJ6GSzx3s;
    int i;
    TJ6GSzx3s = 0;
    double  a, n1nhOcq4C0P = 0, m, n4yapI5 = 0, l = 0;
    scanf ("%lf%s%s", &a, b, c);
    for (i = 0; b[i] != '\0'; i = i + 1) {
        n4yapI5++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; c[i] != '\0'; i = i + 1) {
        l++;
    }
    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] == c[i]) {
            n1nhOcq4C0P++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; b[i] != '\0'; i++) {
        if ((b[i] != 'A' && b[i] != 'T' && b[i] != 'C' && b[i] != 'G') || (c[i] != 'A' && c[i] != 'T' && c[i] != 'C' && c[i] != 'G')) {
            TJ6GSzx3s = TJ6GSzx3s +1;
        };
    }
    m = n1nhOcq4C0P / n4yapI5;
    if (TJ6GSzx3s > 0 || n4yapI5 != l) {
        printf ("error");
    }
    else if (m >= a) {
    }
    else {
    }
    return 0;
}

