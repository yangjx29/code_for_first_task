int main () {
    char a [40] [7];
    int ECheduw3cP;
    int w;
    int OHl9DIQj;
    int Wx8uqJpysbv;
    int k;
    ECheduw3cP = 0;
    w = 0;
    float b [40];
    float h0BzeXmOsD [40];
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
    float d [40];
    float e;
    scanf ("%d", &OHl9DIQj);
    {
        Wx8uqJpysbv = 0;
        while (Wx8uqJpysbv < OHl9DIQj) {
            scanf ("%s%f", a[Wx8uqJpysbv], &b[Wx8uqJpysbv]);
            if (strcmp (a[Wx8uqJpysbv], "male") == 0) {
                h0BzeXmOsD[ECheduw3cP] = b[Wx8uqJpysbv];
                ECheduw3cP++;
            }
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
            if (strcmp (a[Wx8uqJpysbv], "female") == 0) {
                d[w] = b[Wx8uqJpysbv];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                w = w + 1;
            }
            Wx8uqJpysbv = Wx8uqJpysbv +1;
        };
    }
    {
        k = 1;
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
        while (k <= ECheduw3cP) {
            for (Wx8uqJpysbv = 0; Wx8uqJpysbv < ECheduw3cP -k; Wx8uqJpysbv = Wx8uqJpysbv +1) {
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
                if (h0BzeXmOsD[Wx8uqJpysbv] > h0BzeXmOsD[Wx8uqJpysbv +1]) {
                    e = h0BzeXmOsD[Wx8uqJpysbv +1];
                    h0BzeXmOsD[Wx8uqJpysbv +1] = h0BzeXmOsD[Wx8uqJpysbv];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    h0BzeXmOsD[Wx8uqJpysbv] = e;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k = k + 1;
        };
    }
    {
        k = 1;
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
        while (k <= w) {
            for (Wx8uqJpysbv = 0; Wx8uqJpysbv < w - k; Wx8uqJpysbv = Wx8uqJpysbv +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (d[Wx8uqJpysbv] < d[Wx8uqJpysbv +1]) {
                    e = d[Wx8uqJpysbv +1];
                    d[Wx8uqJpysbv +1] = d[Wx8uqJpysbv];
                    d[Wx8uqJpysbv] = e;
                };
            }
            k++;
        };
    }
    printf ("%.2f", h0BzeXmOsD[0]);
    {
        Wx8uqJpysbv = 1;
        while (Wx8uqJpysbv < ECheduw3cP) {
            printf (" %.2f", h0BzeXmOsD[Wx8uqJpysbv]);
            Wx8uqJpysbv = Wx8uqJpysbv +1;
        };
    }
    {
        Wx8uqJpysbv = 0;
        while (Wx8uqJpysbv < w) {
            printf (" %.2f", d[Wx8uqJpysbv]);
            Wx8uqJpysbv++;
        };
    }
    return 0;
}

