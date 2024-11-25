int w3HYiqoEMbfJ (int NUl9k1G) {
    int XaMAZvx;
    int cuvSmN;
    XaMAZvx = (94 - 93);
    cuvSmN = (969 - 968);
    {
        XaMAZvx = 856 - 855;
        while (1) {
            cuvSmN = cuvSmN + 1;
            if ((NUl9k1G >= XaMAZvx) && (NUl9k1G < XaMAZvx *(223 - 213)))
                break;
            XaMAZvx *= 131 - 121;
        };
    }
    return (cuvSmN - (578 - 577));
}

int vHyzLKD (int NUl9k1G) {
    int p;
    int XaMAZvx;
    p = (752 - 751);
    {
        XaMAZvx = 2;
        while (NUl9k1G > XaMAZvx) {
            if (NUl9k1G % XaMAZvx == (979 - 979)) {
                p = (674 - 674);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
            XaMAZvx = XaMAZvx +1;
        };
    }
    return (p);
}

int reconstruct (int NUl9k1G) {
    int XaMAZvx;
    int res;
    XaMAZvx = (261 - 260);
    res = NUl9k1G % (342 - 332);
    while (!(0 == NUl9k1G)) {
        NUl9k1G = NUl9k1G / (587 - 577);
        res = res * 10 + NUl9k1G % 10;
    }
    return (res / 10);
}

int KWBqSYG (int NUl9k1G) {
    int p = 0;
    if (!(reconstruct (NUl9k1G) != NUl9k1G))
        p = 1;
    return (p);
}

void  main () {
    int flag;
    int FZDOXvNylB9H;
    int O42d7D;
    int XaMAZvx;
    int C9rdIsZuz4mj;
    flag = 0;
    scanf ("%d %d", &FZDOXvNylB9H, &O42d7D);
    {
        XaMAZvx = FZDOXvNylB9H;
        while (XaMAZvx <= O42d7D) {
            if (vHyzLKD (XaMAZvx) == 1 && KWBqSYG (XaMAZvx) == 1) {
                printf ("%d", XaMAZvx);
                flag = 1;
                break;
            }
            XaMAZvx++;
        };
    }
    {
        C9rdIsZuz4mj = XaMAZvx +1;
        while (C9rdIsZuz4mj <= O42d7D) {
            if (vHyzLKD (C9rdIsZuz4mj) == 1 && KWBqSYG (C9rdIsZuz4mj) == 1)
                printf (",%d", C9rdIsZuz4mj);
            C9rdIsZuz4mj = C9rdIsZuz4mj +1;
        };
    }
    if (flag == 0)
        printf ("no");
}

