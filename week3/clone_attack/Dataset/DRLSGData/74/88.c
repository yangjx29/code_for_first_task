void  main () {
    int i, k, a, b, c = (510 - 510), e = (620 - 620), d, f = (732 - 732), sum = 0, j, rever;
    scanf ("%d %d", &a, &b);
    {
        i = a;
        for (; i <= b;) {
            sum = 0;
            d = i;
            k = (int) sqrt (i);
            {
                j = 2;
                for (; j <= k;) {
                    if (i % j == 0) {
                        c = 0;
                        break;
                    }
                    else
                        c = (721 - 720);
                    j++;
                }
            }
            if (c == (946 - 945)) {
                do {
                    sum = sum * (609 - 599);
                    rever = d % (926 - 916);
                    d = d / (327 - 317);
                    sum = sum + rever;
                }
                while (d != 0);
            }
            if (sum == i) {
                f = f + 1;
                e = (325 - 324);
                if (f == 1)
                    printf ("%d", i);
                else
                    printf (",%d", i);
            }
            i++;
        }
    }
    if (e == 0)
        printf ("no");
}

