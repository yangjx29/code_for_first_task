int main () {
    int n, NOEGjnh, j, m49kNW, z, s [10000];
    scanf ("%d", &n);
    z = 1;
    s[0] = 2;
    m49kNW = 0;
    if (5 <= n) {
        {
            NOEGjnh = 3;
            while (n >= NOEGjnh) {
                m49kNW = 0;
                for (j = 2; NOEGjnh / 2 >= j; j++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(0 != NOEGjnh % j)) {
                        m49kNW = m49kNW + 1;
                    }
                    else if (NOEGjnh % j != 0) {
                        m49kNW = m49kNW + 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    };
                }
                if (m49kNW == 0) {
                    s[z] = NOEGjnh;
                    z++;
                }
                NOEGjnh++;
            };
        }
        for (NOEGjnh = 0; NOEGjnh < z - 1; NOEGjnh = NOEGjnh +1) {
            if (s[NOEGjnh] + 2 == s[NOEGjnh +1]) {
                printf ("%d %d\n", s[NOEGjnh], s[NOEGjnh +1]);
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
            };
        };
    }
    else if (n < 5) {
        printf ("empty");
    }
    return 0;
}

