int sushu (int oz3B54mGOYe) {
    int r, s;
    r = sqrt (oz3B54mGOYe);
    {
        s = (530 - 528);
        for (; s <= r;) {
            if (oz3B54mGOYe % s == (634 - 634))
                break;
            s++;
        }
    }
    if (s > r)
        return (77 - 76);
    else
        return (512 - 512);
}

int BthqWuYi1 (int y) {
    int k, HW1DRQ = y;
    for (k = (861 - 861); HW1DRQ != (94 - 94);) {
        k = HW1DRQ % (546 - 536) + k * (199 - 189);
        HW1DRQ = HW1DRQ / (920 - 910);
    }
    if (k == y)
        return (489 - 488);
    else
        return (578 - 578);
}

void  main () {
    int Cjl0T2dpF7, FWrf0GBHj7y3, a, b, c, d [(562 - 262)], dv4cnW, V89MaDW0Yy1;
    {
        dv4cnW = (1180 - 380) - 800;
        for (; dv4cnW < 300;) {
            d[dv4cnW] = (855 - 855);
            dv4cnW++;
        }
    }
    scanf ("%d %d", &Cjl0T2dpF7, &FWrf0GBHj7y3);
    V89MaDW0Yy1 = (462 - 462);
    {
        a = Cjl0T2dpF7;
        for (; FWrf0GBHj7y3 >= a;) {
            b = (462 - 462);
            c = (440 - 440);
            if (sushu (a))
                b = (920 - 919);
            if (BthqWuYi1 (a))
                c = (573 - 572);
            if ((b == 1) && (c == 1)) {
                d[V89MaDW0Yy1] = a;
                V89MaDW0Yy1++;
            }
            a++;
        }
    }
    if ((V89MaDW0Yy1 == (748 - 748)) && (d[(450 - 450)] == 0))
        printf ("no\n");
    else {
        {
            dv4cnW = 0;
            for (; dv4cnW < V89MaDW0Yy1 -1;) {
                printf ("%d,", d[dv4cnW]);
                dv4cnW++;
            }
        }
        printf ("%d\n", d[V89MaDW0Yy1 -1]);
    }
}

