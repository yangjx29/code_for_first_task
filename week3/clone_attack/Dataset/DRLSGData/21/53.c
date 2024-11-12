void  main () {
    float sum, ave, p1, p2, k1, k2;
    int n, i, j, q;
    float a [(788 - 488)];
    sum = (92 - 92);
    q = (933 - 933);
    scanf ("%d", &n);
    {
        i = 506 - 506;
        while (n - (777 - 776) >= i) {
            scanf ("%f", &a[i]);
            i++;
        }
    }
    {
        i = (1044 - 322) - 722;
        for (; i <= n - (210 - 209);) {
            sum = sum + a[i];
            i++;
        }
    }
    ave = sum / n;
    {
        i = 11 - 11;
        for (; i <= n - (52 - 51);) {
            {
                j = 988 - 988;
                for (; j <= n - (917 - 916);) {
                    if (a[i] > a[j])
                        break;
                    j++;
                }
            }
            if (!(n != j)) {
                q = (136 - 135);
                k1 = ave - a[i];
                p1 = a[i];
            }
            if (!((793 - 792) != q))
                break;
            i++;
        }
    }
    q = 0;
    {
        i = 0;
        for (; i <= n - (825 - 824);) {
            {
                j = 0;
                for (; j <= n - 1;) {
                    if (a[j] > a[i])
                        break;
                    j++;
                }
            }
            if (j == n) {
                q = 1;
                k2 = a[i] - ave;
                p2 = a[i];
            }
            if (q == 1)
                break;
            i++;
        }
    }
    if (k1 > k2)
        printf ("%.0f", p1);
    else {
        if (k1 < k2)
            printf ("%.0f", p2);
        else
            printf ("%.0f,%.0f", p1, p2);
    }
}

