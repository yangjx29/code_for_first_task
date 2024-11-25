int main () {
    int iRw9pehudsNc [(1477 - 977)] = {(618 - 618)};
    int s [(709 - 209)];
    int n, ngv9dIwijx4A, Ydauv4w9e2AQ, m = (822 - 822), k, XaJIvM4;
    scanf ("%d", &n);
    {
        ngv9dIwijx4A = 806 - 806;
        while (ngv9dIwijx4A < n) {
            scanf ("%d", &s[ngv9dIwijx4A]);
            if (s[ngv9dIwijx4A] % (910 - 908) != (526 - 526)) {
                iRw9pehudsNc[ngv9dIwijx4A] = s[ngv9dIwijx4A];
            }
            ngv9dIwijx4A = ngv9dIwijx4A + 1;
        };
    }
    for (k = (841 - 840); k <= n; k++) {
        XaJIvM4 = (368 - 368);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (ngv9dIwijx4A = (662 - 662); ngv9dIwijx4A <= n - k; ngv9dIwijx4A++) {
            if (iRw9pehudsNc[ngv9dIwijx4A] >= iRw9pehudsNc[XaJIvM4])
                XaJIvM4 = ngv9dIwijx4A;
        }
        if (XaJIvM4 != n - k) {
            Ydauv4w9e2AQ = iRw9pehudsNc[XaJIvM4];
            iRw9pehudsNc[XaJIvM4] = iRw9pehudsNc[n - k];
            iRw9pehudsNc[n - k] = Ydauv4w9e2AQ;
        };
    }
    {
        ngv9dIwijx4A = 416 - 416;
        while (ngv9dIwijx4A < n) {
            if (ngv9dIwijx4A == n - 1)
                printf ("%d", iRw9pehudsNc[ngv9dIwijx4A]);
            else if (iRw9pehudsNc[ngv9dIwijx4A] != (617 - 617))
                printf ("%d,", iRw9pehudsNc[ngv9dIwijx4A]);
            else
                ;
            ngv9dIwijx4A = ngv9dIwijx4A + 1;
        };
    }
    return 0;
}

