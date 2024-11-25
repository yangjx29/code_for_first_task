int VNOBvfLA4Rob (int n) {
    int x;
    if (!(1 != n))
        x = 1;
    else if ((n % 2) == 0) {
        x = n / 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d/2=%d\n", n, x);
    }
    else {
        x = n * 3 + 1;
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
        printf ("%d*3+1=%d\n", n, x);
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
    return (x);
}

void  main () {
    int n, k = 0;
    scanf ("%d", &n);
    k = VNOBvfLA4Rob (n);
    for (; k != 1;) {
        k = VNOBvfLA4Rob (k);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("End");
}

