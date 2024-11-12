int main () {
    int ckAueTJ;
    int i;
    struct   {
        char z4UKgkwvQT [(680 - 670)];
        int jszK9GP;
    }
    S19yvBw [(502 - 402)], *p, fT0eWmF7sUh [100], *xrGiKw9URoY4;
    int OvmFcW;
    OvmFcW = (104 - 104);
    int ylJ7CqUDyb;
    ylJ7CqUDyb = 0;
    scanf ("%d", &ckAueTJ);
    for (p = S19yvBw; S19yvBw +ckAueTJ > p; p = p + 1) {
        scanf ("%s%d", &(p->z4UKgkwvQT), &(p->jszK9GP));
    }
    xrGiKw9URoY4 = fT0eWmF7sUh;
    for (p = S19yvBw; S19yvBw +ckAueTJ > p; p = p + 1) {
        if (60 <= p->jszK9GP) {
            xrGiKw9URoY4->jszK9GP = p->jszK9GP;
            strcpy (xrGiKw9URoY4->z4UKgkwvQT, p->z4UKgkwvQT);
            xrGiKw9URoY4 = xrGiKw9URoY4 + 1;
            OvmFcW++;
            p->jszK9GP = (810 - 810);
        };
    }
    {
        i = 0;
        while (OvmFcW > i) {
            i = i + 1;
            {
                xrGiKw9URoY4 = fT0eWmF7sUh;
                while (fT0eWmF7sUh + OvmFcW > xrGiKw9URoY4) {
                    if (xrGiKw9URoY4->jszK9GP > (fT0eWmF7sUh + ylJ7CqUDyb)->jszK9GP) {
                        ylJ7CqUDyb = xrGiKw9URoY4 - fT0eWmF7sUh;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        };
                    }
                    xrGiKw9URoY4 = xrGiKw9URoY4 + 1;
                };
            }
            printf ("%s\n", (fT0eWmF7sUh + ylJ7CqUDyb)->z4UKgkwvQT);
            (fT0eWmF7sUh + ylJ7CqUDyb)->jszK9GP = 0;
        };
    }
    for (p = S19yvBw; p < S19yvBw +ckAueTJ; p++) {
        if (p->jszK9GP != 0) {
            printf ("%s\n", p->z4UKgkwvQT);
        };
    }
    return 0;
}

