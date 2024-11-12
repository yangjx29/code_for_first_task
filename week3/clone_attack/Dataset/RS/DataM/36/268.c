gPMxRaWq9 (char KyAOKVH [1000]) {
    int ef6try7i, e1UyuDd, olLbPKzJyTsu = strlen (KyAOKVH);
    {
        ef6try7i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (olLbPKzJyTsu >= ef6try7i) {
            for (e1UyuDd = 0; e1UyuDd <= olLbPKzJyTsu - ef6try7i; e1UyuDd = e1UyuDd + 1)
                if (KyAOKVH[e1UyuDd] > KyAOKVH[e1UyuDd + 1]) {
                    char z4AtEp;
                    z4AtEp = KyAOKVH[e1UyuDd];
                    KyAOKVH[e1UyuDd] = KyAOKVH[e1UyuDd + 1];
                    KyAOKVH[e1UyuDd + 1] = z4AtEp;
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
            ef6try7i = ef6try7i + 1;
        };
    };
}

void  main () {
    char hKcz4Mo62Rd [1000], Cxfe9bjy [1000];
    gPMxRaWq9 (hKcz4Mo62Rd);
    gPMxRaWq9 (Cxfe9bjy);
    scanf ("%s%s", hKcz4Mo62Rd, Cxfe9bjy);
    if (strcmp (hKcz4Mo62Rd, Cxfe9bjy) == 0)
        printf ("YES");
    else
        printf ("NO");
}

