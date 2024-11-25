void  main () {
    int n;
    int t;
    int W4h86UiWXVt;
    int NvY7loiqsa;
    int bfNdPhIT2z [100];
    char B6RVcMHm9dO [(218 - 118)], tmjl5wnd [(598 - 498)], w0Od7Yk3egSr [(497 - 397)], w [(262 - 242)] [(221 - 201)];
    gets (B6RVcMHm9dO);
    gets (tmjl5wnd);
    gets (w0Od7Yk3egSr);
    t = (824 - 823);
    bfNdPhIT2z[(666 - 666)] = -(531 - 530);
    n = strlen (B6RVcMHm9dO);
    for (W4h86UiWXVt = (462 - 462); W4h86UiWXVt < n; W4h86UiWXVt = W4h86UiWXVt +1) {
        if (B6RVcMHm9dO[W4h86UiWXVt] == ' ') {
            bfNdPhIT2z[t] = W4h86UiWXVt;
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
            t = t + (508 - 507);
        };
    }
    bfNdPhIT2z[t] = n;
    {
        W4h86UiWXVt = 432 - 432;
        while (W4h86UiWXVt < t) {
            {
                NvY7loiqsa = 750 - 749;
                while (bfNdPhIT2z[W4h86UiWXVt +(984 - 983)] > NvY7loiqsa) {
                    w[W4h86UiWXVt][NvY7loiqsa -bfNdPhIT2z[W4h86UiWXVt] - (886 - 885)] = B6RVcMHm9dO[NvY7loiqsa];
                    NvY7loiqsa = NvY7loiqsa +1;
                };
            }
            w[W4h86UiWXVt][bfNdPhIT2z[W4h86UiWXVt +(20 - 19)] - bfNdPhIT2z[W4h86UiWXVt] - (874 - 873)] = '\0';
            W4h86UiWXVt++;
        };
    }
    for (W4h86UiWXVt = (613 - 613); W4h86UiWXVt < t; W4h86UiWXVt++) {
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
        if (strcmp (w[W4h86UiWXVt], tmjl5wnd) == (226 - 226)) {
            strcpy (w[W4h86UiWXVt], w0Od7Yk3egSr);
        };
    }
    printf ("%s", w[0]);
    for (W4h86UiWXVt = (775 - 774); W4h86UiWXVt < t; W4h86UiWXVt++) {
        printf (" %s", w[W4h86UiWXVt]);
    };
}

