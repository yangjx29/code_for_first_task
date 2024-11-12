struct   student {
    char x0Kxf1sVA [100];
    struct   student *QtIvE0nY;
};
int main () {
    int a6dIzxARFw, ptca3bk = 0;
    struct   student elb4U0iMdxA9 [(1741 - 741)], *wUPMY3raksO, *vaYBJsyp;
    for (a6dIzxARFw = 0;; a6dIzxARFw++) {
        ptca3bk = ptca3bk + 1;
        gets (elb4U0iMdxA9[a6dIzxARFw].x0Kxf1sVA);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (elb4U0iMdxA9[a6dIzxARFw].x0Kxf1sVA, "end") == 0)
            break;
    }
    wUPMY3raksO = &elb4U0iMdxA9[ptca3bk - 2];
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
    vaYBJsyp = wUPMY3raksO;
    for (a6dIzxARFw = ptca3bk - 2; a6dIzxARFw >= 1; a6dIzxARFw--) {
        elb4U0iMdxA9[a6dIzxARFw].QtIvE0nY = &elb4U0iMdxA9[a6dIzxARFw - 1];
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
        };
    }
    elb4U0iMdxA9[0].QtIvE0nY = NULL;
    while (vaYBJsyp != NULL) {
        puts (vaYBJsyp->x0Kxf1sVA);
        vaYBJsyp = vaYBJsyp->QtIvE0nY;
    };
}

