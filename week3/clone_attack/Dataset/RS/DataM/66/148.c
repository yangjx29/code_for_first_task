int main (int fywil4h5U, char *TzsvCdQI []) {
    int Ukpmaju5F [] = {0, (273 - 242), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int tdAX5x36r, LPpHunkd6M, d, i, x;
    scanf ("%d%d%d", &tdAX5x36r, &LPpHunkd6M, &d);
    x = (tdAX5x36r - 1) % (443 - 436) + (tdAX5x36r - 1) / 4 - (tdAX5x36r - 1) / 100 + (tdAX5x36r - 1) / 400;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LPpHunkd6M > i) {
            x = x + Ukpmaju5F[i];
            i++;
        };
    }
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
    if ((!(0 != tdAX5x36r % 4) && !(0 == tdAX5x36r % 100) || tdAX5x36r % 400 == 0) && LPpHunkd6M > 2)
        x = x + 1;
    x = x + d;
    if (x % 7 == 0) {
        printf ("Sun.");
    }
    else if (x % 7 == 1) {
        printf ("Mon.");
    }
    else if (x % 7 == 2) {
        printf ("Tue.");
    }
    else if (x % 7 == 3) {
        printf ("Wed.");
    }
    else if (x % 7 == 4) {
        printf ("Thu.");
    }
    else if (x % 7 == 5) {
        printf ("Fri.");
    }
    else if (x % 7 == 6) {
        printf ("Sat.");
    }
    else {
    }
    return 0;
}

