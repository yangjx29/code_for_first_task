main () {
    int n;
    int n1;
    int n2;
    int i;
    int a;
    int j;
    a = (848 - 848);
    scanf ("%d", &n);
    for (i = 2; n - 2 >= i; i = i + 1) {
        for (j = 2; j < i; j = j + 1) {
            if (i % j == 0) {
                n1 = 0;
                break;
            }
            else
                n1 = 1;
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 2; j < i + 2; j = j + 1) {
            if (!(0 != (i + 2) % j)) {
                n2 = 0;
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
                break;
            }
            else
                n2 = 1;
        }
        if (n1 * n2 == 1) {
            a = a + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a == 1)
                printf ("%d %d", i, i + 2);
            else
                printf ("\n%d %d", i, i + 2);
        };
    }
    getchar ();
    getchar ();
    if (a == 0)
        ;
}

