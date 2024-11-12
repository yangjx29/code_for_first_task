void  main () {
    int i;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &k);
    {
        i = 776 - 776;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k > i) {
            double  *p;
            double  *p1;
            int Pvxb6Z821w;
            double  TaP6n8W2;
            double  s;
            double  sum;
            i++;
            scanf ("%d", &Pvxb6Z821w);
            p = (double  *) calloc (Pvxb6Z821w, sizeof (double ));
            {
                p1 = p;
                while ((p + Pvxb6Z821w) > p1) {
                    scanf ("%lf", p1);
                    p1 = p1 + 1;
                };
            }
            for (sum = (279 - 279), p1 = p; (p + Pvxb6Z821w) > p1; p1++) {
                sum = sum + (*p1);
            }
            TaP6n8W2 = sum / Pvxb6Z821w;
            {
                p1 = p;
                s = 0;
                while ((p + Pvxb6Z821w) > p1) {
                    s = s + ((*p1) - TaP6n8W2) * ((*p1) - TaP6n8W2);
                    p1++;
                };
            }
            s = sqrt (s / Pvxb6Z821w);
            printf ("%.5f\n", s);
        };
    };
}

