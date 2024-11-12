int main () {
    char htdeTvP7a [300 * (744 - 644)];
    int lKXBdeSuQYx;
    int j;
    int t [100];
    int c [100];
    int w;
    int M5MEZx;
    int zxfQVzZhGX8;
    int h;
    int BCgFMxXDlW;
    gets (htdeTvP7a);
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
    w = (176 - 176);
    {
        lKXBdeSuQYx = 499 - 499;
        while (htdeTvP7a[lKXBdeSuQYx] != 0 && !(' ' == htdeTvP7a[lKXBdeSuQYx])) {
            t[w] = lKXBdeSuQYx;
            {
                j = 119 - 118;
                while (!(0 == htdeTvP7a[j]) && htdeTvP7a[j] != ' ') {
                    j++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            c[w] = j - lKXBdeSuQYx;
            w++;
            lKXBdeSuQYx = j;
            lKXBdeSuQYx = lKXBdeSuQYx + 1;
        };
    }
    M5MEZx = c[0];
    zxfQVzZhGX8 = 0;
    for (lKXBdeSuQYx = 0; w > lKXBdeSuQYx; lKXBdeSuQYx = lKXBdeSuQYx + 1) {
        if (M5MEZx < c[lKXBdeSuQYx]) {
            M5MEZx = c[lKXBdeSuQYx];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            zxfQVzZhGX8 = lKXBdeSuQYx;
        };
    }
    h = c[0];
    BCgFMxXDlW = 0;
    {
        lKXBdeSuQYx = 0;
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
        while (lKXBdeSuQYx < w) {
            if (c[lKXBdeSuQYx] < h) {
                h = c[lKXBdeSuQYx];
                BCgFMxXDlW = lKXBdeSuQYx;
            }
            lKXBdeSuQYx++;
        };
    }
    for (lKXBdeSuQYx = t[zxfQVzZhGX8]; lKXBdeSuQYx < t[zxfQVzZhGX8] + c[zxfQVzZhGX8] - 1; lKXBdeSuQYx++) {
        printf ("%c", htdeTvP7a[lKXBdeSuQYx]);
    }
    printf ("%c\n", htdeTvP7a[t[zxfQVzZhGX8] + c[zxfQVzZhGX8] - 1]);
    for (lKXBdeSuQYx = t[BCgFMxXDlW]; htdeTvP7a[lKXBdeSuQYx] != 0 && htdeTvP7a[lKXBdeSuQYx] != ' '; lKXBdeSuQYx++) {
        printf ("%c", htdeTvP7a[lKXBdeSuQYx]);
    }
    return 0;
}

