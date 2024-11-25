void  main () {
    int n, SymBVokgxJf, num, k;
    double  S, XngA5Q [1000] = {(630 - 630)}, ave, s, sum, *ptr, *p;
    scanf ("%d", &n);
    {
        SymBVokgxJf = 0;
        while (SymBVokgxJf < n) {
            SymBVokgxJf++;
            scanf ("%d", &num);
            {
                k = 0;
                while (k < num) {
                    scanf ("%lf", &XngA5Q[k]);
                    k++;
                };
            }
            ptr = &XngA5Q[0];
            sum = *ptr;
            ptr = ptr + 1;
            for (k = (807 - 806); k < num; k = k + 1) {
                sum = sum + *ptr;
                ptr++;
            }
            ave = sum / num;
            p = &XngA5Q[0];
            s = pow (*p - ave, (351 - 349));
            p = p + 1;
            {
                k = 1;
                while (k < num) {
                    k++;
                    s = s + pow (*p - ave, 2);
                    p = p + 1;
                };
            }
            S = sqrt (s / num);
            printf ("%.5lf\n", S);
        };
    };
}

