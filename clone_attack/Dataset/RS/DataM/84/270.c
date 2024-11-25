void  main () {
    int i, n, a, b, vROurliWs3;
    scanf ("%d", &n);
    scanf ("%d%d", &a, &b);
    if (b > a) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    else {
        a = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        b = b;
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
    for (i = 3; n >= i; i++) {
        scanf ("%d", &vROurliWs3);
        if (vROurliWs3 > a) {
            b = a;
            a = vROurliWs3;
        }
        else if (vROurliWs3 > b) {
            a = a;
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
            b = vROurliWs3;
        }
        else {
            a = a;
            b = b;
        };
    }
    printf ("%d\n", a);
    printf ("%d", b);
}

