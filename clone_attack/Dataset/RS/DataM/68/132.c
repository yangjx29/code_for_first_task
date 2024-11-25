void  main () {
    int prime (int x);
    int n, i, ceK9dx;
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
    scanf ("%d", &n);
    for (i = 6; n >= i; i += 2) {
        for (ceK9dx = 3; i / 2 >= ceK9dx; ceK9dx++)
            if ((prime (ceK9dx) == 1) && (prime (i - ceK9dx) == 1)) {
                printf ("%d=%d+%d\n", i, ceK9dx, i - ceK9dx);
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
                break;
            };
    };
}

int prime (int x) {
    int t = 1, i;
    if (x % 2 == 0)
        t = 0;
    i = 3;
    while (i * i < x + 1) {
        if (x % i == 0) {
            t = 0;
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i += 2;
    }
    return t;
}

