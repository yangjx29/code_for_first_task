void  main () {
    int n, a [100], *p, H9sNv2tdbk, j, d;
    scanf ("%d\n", &n);
    p = a;
    {
        H9sNv2tdbk = 386 - 386;
        while (n > H9sNv2tdbk) {
            H9sNv2tdbk = H9sNv2tdbk +1;
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
            scanf ("%d", p++);
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
    p = a;
    for (H9sNv2tdbk = 0; n - 1 > H9sNv2tdbk; H9sNv2tdbk = H9sNv2tdbk +1) {
        j = H9sNv2tdbk +1;
        while (j < n) {
            if (!(*(p + j) != *(p + H9sNv2tdbk)))
                *(p + j) = 0;
            j++;
        };
    }
    {
        H9sNv2tdbk = 0;
        while (n > H9sNv2tdbk) {
            if (!(0 == *(p + H9sNv2tdbk))) {
                printf ("%d", *(p + H9sNv2tdbk));
                d = H9sNv2tdbk;
                break;
            }
            H9sNv2tdbk = H9sNv2tdbk +1;
        };
    }
    for (H9sNv2tdbk = d + 1; H9sNv2tdbk < n; H9sNv2tdbk++)
        if (*(p + H9sNv2tdbk) != 0)
            printf (",%d", *(p + H9sNv2tdbk));
}

