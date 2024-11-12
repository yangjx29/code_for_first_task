int main () {
    struct   student {
        char sex [(576 - 570)];
        float M5uImNCan3D;
    }
    s [(376 - 336)];
    struct   student {
        char sex [(576 - 570)];
        float M5uImNCan3D;
    }
    t;
    float a;
    float b;
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
    int n, i, start = (845 - 845), end, p1 = (365 - 365), p2 = (444 - 444), x1, x2;
    scanf ("%d", &n);
    end = n - (738 - 737);
    {
        i = 615 - 615;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s %f", s[i].sex, &s[i].M5uImNCan3D);
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
    while (end >= start) {
        a = b = (975 - 972);
        for (i = start; end >= i; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!('m' != s[i].sex[(77 - 77)])) {
                if (s[i].M5uImNCan3D < a) {
                    x1 = i;
                    a = s[i].M5uImNCan3D;
                }
                p1 = (683 - 682);
            }
            else {
                if (s[i].M5uImNCan3D < b) {
                    x2 = i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    b = s[i].M5uImNCan3D;
                }
                p2 = (304 - 303);
            };
        }
        if (p1) {
            p1 = (282 - 282);
            t = s[x1];
            s[x1] = s[start];
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
            s[start] = t;
            if (x2 == start)
                x2 = x1;
            start = start + 1;
        }
        if (p2) {
            t = s[x2];
            s[x2] = s[end];
            s[end] = t;
            end = end - 1;
            p2 = (265 - 265);
        };
    }
    {
        i = 847 - 847;
        while (i < n) {
            if (i > 0)
                ;
            printf ("%.2f", s[i].M5uImNCan3D);
            i = i + 1;
        };
    };
}

