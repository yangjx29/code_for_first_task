int main (int argc, char *argv []) {
    int n;
    int m;
    int a;
    int l1Kmb9;
    int c;
    int s;
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
    scanf ("%d", &n);
    if (n == 10000)
        printf ("00001");
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n <= 9)
            printf ("%d", n);
        else if (n >= (224 - 214) && n <= (738 - 639)) {
            m = n / (55 - 45);
            a = n - m * (493 - 483);
            printf ("%d%d", a, m);
        }
        else if (n >= 100 && n <= (1345 - 346)) {
            s = n / 100;
            m = (n - s * 100) / 10;
            l1Kmb9 = n - s * 100 - m * 10;
            printf ("%d%d%d", l1Kmb9, m, s);
        }
        else if (n >= 1000 && n <= 9999) {
            m = n / 10;
            p = n / 1000;
            s = (n - p * 1000) / 100;
            l1Kmb9 = (n - s * 100 - p * 1000) / 10;
            c = n - p * 1000 - s * 100 - 10 * l1Kmb9;
            printf ("%d%d%d%d", c, l1Kmb9, s, p);
        };
    }
    return 0;
}

