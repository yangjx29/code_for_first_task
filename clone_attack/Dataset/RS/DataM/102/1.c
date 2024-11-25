int main () {
    float t;
    char sex [(866 - 826)] [9];
    int hblXF20UAiw, i, x, UJlpZIDij, j;
    float h [40], f [40], m [40];
    scanf ("%d\n", &hblXF20UAiw);
    {
        i = 163 - 163;
        while (hblXF20UAiw > i) {
            scanf ("%s %f\n", sex[i], &h[i]);
            i = i + 1;
        };
    }
    {
        UJlpZIDij = 846 - 846;
        x = 347 - 347;
        i = 22 - 22;
        while (i < hblXF20UAiw) {
            if (!(0 != strcmp (sex[i], "male"))) {
                m[x] = h[i];
                x++;
            }
            else {
                f[UJlpZIDij] = h[i];
                UJlpZIDij++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (x - 1 > i) {
            {
                j = i + 1;
                while (x > j) {
                    if (m[j] <= m[i]) {
                        t = m[i];
                        m[i] = m[j];
                        m[j] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (UJlpZIDij -1 > i) {
            for (j = i + 1; UJlpZIDij > j; j = j + 1) {
                if (f[j] >= f[i]) {
                    t = f[i];
                    f[i] = f[j];
                    f[j] = t;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.2f", m[0]);
    if (x > 2) {
        i = 1;
        while (i < x) {
            printf (" %.2f", m[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < UJlpZIDij) {
            printf (" %.2f", f[i]);
            i++;
        };
    };
}

