void  main () {
    char e1VpL8XCoObE [(935 - 928)];
    int iaPefLBXjRJ, rUtQoW3 = (383 - 383), i2 = 0, pZJFfIdTK82, RK7rLNXZby, J7UGZn5PS = 0, m;
    float a [40], WShxZbUQGfEO [40], s2 [40], WE8iGIJ;
    scanf ("%d", &iaPefLBXjRJ);
    {
        pZJFfIdTK82 = 0;
        while (pZJFfIdTK82 < iaPefLBXjRJ) {
            scanf ("%s", e1VpL8XCoObE);
            scanf ("%f", &a[pZJFfIdTK82]);
            if (!('m' != e1VpL8XCoObE[0])) {
                WShxZbUQGfEO[rUtQoW3] = a[pZJFfIdTK82];
                rUtQoW3 = rUtQoW3 + 1;
            }
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
            if (e1VpL8XCoObE[0] == 'f') {
                s2[i2] = a[pZJFfIdTK82];
                i2 = i2 + 1;
            }
            pZJFfIdTK82 = pZJFfIdTK82 + 1;
        };
    }
    for (pZJFfIdTK82 = 0; pZJFfIdTK82 < rUtQoW3 - 1; pZJFfIdTK82 = pZJFfIdTK82 + 1) {
        J7UGZn5PS = pZJFfIdTK82;
        WE8iGIJ = WShxZbUQGfEO[pZJFfIdTK82];
        for (RK7rLNXZby = pZJFfIdTK82 + 1; RK7rLNXZby < rUtQoW3; RK7rLNXZby = RK7rLNXZby +1) {
            if (WE8iGIJ > WShxZbUQGfEO[RK7rLNXZby]) {
                WE8iGIJ = WShxZbUQGfEO[RK7rLNXZby];
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
                J7UGZn5PS = RK7rLNXZby;
            };
        }
        WShxZbUQGfEO[J7UGZn5PS] = WShxZbUQGfEO[pZJFfIdTK82];
        WShxZbUQGfEO[pZJFfIdTK82] = WE8iGIJ;
    }
    J7UGZn5PS = 0;
    {
        pZJFfIdTK82 = 0;
        while (pZJFfIdTK82 < i2 - 1) {
            J7UGZn5PS = pZJFfIdTK82;
            WE8iGIJ = s2[pZJFfIdTK82];
            for (RK7rLNXZby = pZJFfIdTK82 + 1; RK7rLNXZby < i2; RK7rLNXZby++) {
                if (WE8iGIJ > s2[RK7rLNXZby]) {
                    WE8iGIJ = s2[RK7rLNXZby];
                    J7UGZn5PS = RK7rLNXZby;
                };
            }
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
            s2[J7UGZn5PS] = s2[pZJFfIdTK82];
            s2[pZJFfIdTK82] = WE8iGIJ;
            pZJFfIdTK82 = pZJFfIdTK82 + 1;
        };
    }
    for (pZJFfIdTK82 = 0; pZJFfIdTK82 < rUtQoW3; pZJFfIdTK82 = pZJFfIdTK82 + 1) {
        printf ("%1.2f ", WShxZbUQGfEO[pZJFfIdTK82]);
    }
    for (pZJFfIdTK82 = i2 - 1; pZJFfIdTK82 > 0; pZJFfIdTK82--) {
        printf ("%1.2f ", s2[pZJFfIdTK82]);
    }
    printf ("%1.2f", s2[0]);
}

