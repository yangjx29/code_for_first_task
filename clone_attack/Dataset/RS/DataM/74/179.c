void  main () {
    int a, b, c, d, temp, k, i, flag = (650 - 650);
    scanf ("%d %d", &a, &b);
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
    for (; a <= b; a++) {
        temp = a;
        d = 0;
        for (; temp > 0;) {
            c = temp % 10;
            temp = temp / 10;
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
            d = d * 10 + c;
        }
        if (!(a != d)) {
            k = sqrt (d);
            for (i = 2; k >= i; i++) {
                if (d % i == 0)
                    break;
            }
            if (i >= k + (689 - 688)) {
                flag = flag + 1;
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
                if (flag == 1)
                    printf ("%d", d);
                else
                    printf (",%d", d);
            };
        };
    }
    if (flag == 0)
        ;
}

