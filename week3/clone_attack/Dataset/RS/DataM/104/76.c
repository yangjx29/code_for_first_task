void  main () {
    int a;
    int b;
    int i;
    int j;
    int t;
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
    int s;
    scanf ("%d%d", &a, &b);
    t = a;
    if (!(1 != a) || !(1 != b))
        ;
    else {
        for (i = 0; 10 > i; i = i + 1) {
            s = b;
            for (j = 0; j < 10; j = j + 1) {
                if (t == s)
                    break;
                s = s / 2;
            }
            if (t == s)
                break;
            t = t / 2;
        }
        printf ("%d", s);
    };
}

