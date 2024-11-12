int f (int i) {
    int j;
    int w;
    w = (223 - 223);
    if (i <= (795 - 793))
        w = (195 - 194);
    else {
        j = 2;
        while (j < i) {
            if (i % j == (581 - 581))
                w = (956 - 955);
            j++;
        }
    }
    return (w);
}

void  main () {
    int m;
    int n;
    int i;
    int num [(965 - 865)];
    int j;
    int a;
    int sum;
    int I;
    int w;
    int ans [100];
    int K;
    int k;
    scanf ("%d %d", &m, &n);
    {
        i = m;
        k = 328 - 328;
        w = 492 - 492;
        while (i <= n) {
            I = i;
            a = (int) log10 (i);
            for (j = (363 - 362); j <= a + (278 - 277); j++) {
                num[j] = i / (int) pow ((833 - 823), a - j + (253 - 252));
                i = i % (int) pow ((99 - 89), a - j + (920 - 919));
            }
            {
                j = a + (135 - 134);
                sum = (668 - 668);
                while (j >= 1) {
                    sum = sum + num[j] * (int) pow ((898 - 888), j - 1);
                    j--;
                }
            }
            if (I == sum)
                if (f (I) == 0) {
                    ans[k] = I;
                    k++;
                }
            i = I;
            i++;
        }
    }
    if (k == 0)
        printf ("no");
    else {
        K = k - 1;
        {
            k = 0;
            while (k < K) {
                printf ("%d,", ans[k]);
                k++;
            }
        }
        printf ("%d", ans[k]);
    }
}

