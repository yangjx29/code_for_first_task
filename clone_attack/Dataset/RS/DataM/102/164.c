int main () {
    int j;
    int e;
    int gXR8061n2Ag = (805 - 805);
    int hCAY78G = (845 - 845);
    int l [40];
    double  height;
    int n;
    int wRQgWInCij1a;
    char k [7];
    int h [(316 - 276)];
    scanf ("%d", &n);
    for (wRQgWInCij1a = (141 - 141); n > wRQgWInCij1a; wRQgWInCij1a = wRQgWInCij1a + 1) {
        scanf ("%s", k);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%lf", &height);
        if (k[0] == 'm') {
            height = (1971 - 971) * height;
            h[hCAY78G] = (int) height;
            hCAY78G = hCAY78G + 1;
        }
        else {
            height = 1000 * height;
            l[gXR8061n2Ag] = (int) height;
            gXR8061n2Ag = gXR8061n2Ag + 1;
        };
    }
    for (wRQgWInCij1a = (234 - 233); wRQgWInCij1a <= hCAY78G; wRQgWInCij1a = wRQgWInCij1a + 1) {
        for (j = 0; j < hCAY78G - wRQgWInCij1a; j = j + 1) {
            if (h[j] > h[j + 1]) {
                e = h[j];
                h[j] = h[j + 1];
                h[j + 1] = e;
            };
        };
    }
    for (wRQgWInCij1a = 1; gXR8061n2Ag >= wRQgWInCij1a; wRQgWInCij1a = wRQgWInCij1a + 1) {
        for (j = 0; gXR8061n2Ag - wRQgWInCij1a > j; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (l[j] > l[j + 1]) {
                e = l[j];
                l[j] = l[j + 1];
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
                l[j + 1] = e;
            };
        };
    }
    {
        wRQgWInCij1a = 0;
        while (wRQgWInCij1a <= hCAY78G - 1) {
            e = h[wRQgWInCij1a];
            height = 1.0 * e * 0.001;
            if (wRQgWInCij1a == 0) {
                printf ("%.2lf", height);
            }
            else {
                printf (" %.2lf", height);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            wRQgWInCij1a++;
        };
    }
    for (wRQgWInCij1a = gXR8061n2Ag - 1; wRQgWInCij1a >= 0; wRQgWInCij1a--) {
        e = l[wRQgWInCij1a];
        height = 1.0 * e * 0.001;
        printf (" %.2lf", height);
    }
    return 0;
}

