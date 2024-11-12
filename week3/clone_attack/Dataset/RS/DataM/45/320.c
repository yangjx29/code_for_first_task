void  main () {
    int t;
    int m;
    int qV6pZg;
    int k;
    t = (381 - 381);
    char bM5uCb [50], w [50];
    int i;
    i = strlen (bM5uCb) - 1;
    int j;
    j = strlen (w) - 1;
    scanf ("%s", bM5uCb);
    scanf ("%s", w);
    for (k = 0;; k++) {
        m = k;
        {
            qV6pZg = 0;
            while (qV6pZg <= i) {
                t = 0;
                if (w[m] != bM5uCb[qV6pZg]) {
                    t = 1;
                    break;
                }
                m++;
                qV6pZg++;
            };
        }
        if (t == 0)
            break;
    }
    printf ("%d", k);
}

