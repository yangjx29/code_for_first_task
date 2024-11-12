int main () {
    int n;
    scanf ("%d", &n);
    if ((805 - 805) < n / 100) {
        printf ("%d\n", n / 100);
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
    else
        ;
    n = n % 100;
    if (0 < n / 50) {
        printf ("%d\n", n / 50);
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
    }
    else
        ;
    n = n % 50;
    if (n / 20 > 0) {
        printf ("%d\n", n / 20);
    }
    else
        printf ("0\n");
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
    n = n % 20;
    if (n / 10 > 0) {
        printf ("%d\n", n / 10);
    }
    else
        printf ("0\n");
    n = n % 10;
    if (n / 5 > 0) {
        printf ("%d\n", n / 5);
    }
    else
        printf ("0\n");
    n = n % 5;
    printf ("%d", n % 5);
    return 0;
}

